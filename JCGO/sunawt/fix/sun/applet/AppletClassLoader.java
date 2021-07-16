/*
 * This file is modified by Ivan Maidanski <ivmai@ivmaisoft.com>
 * Project name: JCGO-SUNAWT (http://www.ivmaisoft.com/jcgo/)
 */

/*
 * @(#)AppletClassLoader.java   1.123 03/06/07
 *
 * Copyright 2002 Sun Microsystems, Inc. All rights reserved.
 * SUN PROPRIETARY/CONFIDENTIAL. Use is subject to license terms.
 */

package sun.applet;

import java.lang.NullPointerException;
import java.net.URL;
import java.net.URLClassLoader;
import java.net.SocketPermission;
import java.net.URLConnection;
import java.net.MalformedURLException;
import java.net.InetAddress;
import java.net.UnknownHostException;
import java.io.File;
import java.io.FilePermission;
import java.io.IOException;
import java.io.BufferedInputStream;
import java.io.InputStream;
import java.util.Enumeration;
import java.util.NoSuchElementException;
import java.security.AccessController;
import java.security.AccessControlContext;
import java.security.PrivilegedAction;
import java.security.PrivilegedExceptionAction;
import java.security.PrivilegedActionException;
import java.security.CodeSource;
import java.security.Permission;
import java.security.PermissionCollection;
import sun.awt.AppContext;
import sun.awt.SunToolkit;
import sun.net.www.ParseUtil;
import sun.security.util.SecurityConstants;

/**
 * This class defines the class loader for loading applet classes and
 * resources. It extends URLClassLoader to search the applet code base
 * for the class or resource after checking any loaded JAR files.
 */
public class AppletClassLoader extends URLClassLoader {
    private URL base;   /* applet code base URL */
    private CodeSource codesource; /* codesource for the base URL */
    private AccessControlContext acc;

    private final Object threadGroupSynchronizer = new Object();
    private final Object grabReleaseSynchronizer = new Object();

    /*
     * Creates a new AppletClassLoader for the specified base URL.
     */
    protected AppletClassLoader(URL base) {
        super(new URL[0]);
        this.base = base;
        this.codesource = new CodeSource(base, null);
        acc = AccessController.getContext();
    }

    /*
     * Returns the applet code base URL.
     */
    URL getBaseURL() {
        return base;
    }

    /*
     * Returns the URLs used for loading classes and resources.
     */
    public URL[] getURLs() {
        URL[] jars = super.getURLs();
        URL[] urls = new URL[jars.length + 1];
        System.arraycopy(jars, 0, urls, 0, jars.length);
        urls[urls.length - 1] = base;
        return urls;
    }

    /*
     * Adds the specified JAR file to the search path of loaded JAR files.
     * Changed modifier to protected in order to be able to overwrite addJar()
     * in PluginClassLoader.java
     */
    protected void addJar(String name) throws IOException {
        URL url;
        try {
            url = new URL(base, name);
        } catch (MalformedURLException e) {
            throw new IllegalArgumentException("name");
        }
        addURL(url);
        // DEBUG
        //URL[] urls = getURLs();
        //for (int i = 0; i < urls.length; i++) {
        //    System.out.println("url[" + i + "] = " + urls[i]);
        //}
    }

    /*
     * Override loadClass so that class loading errors can be caught in
     * order to print better error messages.
     */
    public synchronized Class loadClass(String name, boolean resolve)
        throws ClassNotFoundException
    {
        // First check if we have permission to access the package. This
        // should go away once we've added support for exported packages.
        SecurityManager sm = System.getSecurityManager();
        if (sm != null) {
           String cname = name.replace('/', '.');
            if (cname.startsWith("[")) {
                int b = cname.lastIndexOf('[') + 2;
                if (b > 1 && b < cname.length()) {
                    cname = cname.substring(b);
                }
            }
            int i = cname.lastIndexOf('.');
            if (i != -1) {
                sm.checkPackageAccess(cname.substring(0, i));
            }
        }
        try {
            return super.loadClass(name, resolve);
        } catch (ClassNotFoundException e) {
            //printError(name, e.getException());
            throw e;
        } catch (RuntimeException e) {
            //printError(name, e);
            throw e;
        } catch (Error e) {
            //printError(name, e);
            throw e;
        }
    }

    /*
     * Finds the applet class with the specified name. First searches
     * loaded JAR files then the applet code base for the class.
     */
    protected Class findClass(String name) throws ClassNotFoundException {
        int i = name.indexOf(";");
        String s1 = "";
        if (i != -1) {
            s1 = name.substring(i);
            name = name.substring(0, i);
        }
        // check loaded JAR files
        try {
            return super.findClass(name);
        } catch (ClassNotFoundException e) {
        }
        // Otherwise, try loading the class from the code base URL
        final String path = name.replace('.', '/') + ".class" + s1;
        try {
            byte[] b = (byte[]) AccessController.doPrivileged(
                new PrivilegedExceptionAction() {

                    public Object run() throws IOException {
                        try {
                            URL url = new URL(base, path);
                            if (base.getProtocol().equals(url.getProtocol()) &&
                                base.getHost().equals(url.getHost()) &&
                                base.getPort() == url.getPort())
                                return AppletClassLoader.getBytes(url);
                        } catch (Exception e) {
                        }
                        return null;
                    }

                } , acc);
            if (b != null) {
                return defineClass(name, b, 0, b.length, codesource);
            } else {
                throw new ClassNotFoundException(name);
            }
        } catch (PrivilegedActionException e) {
            throw new ClassNotFoundException(name, e.getException());
        }
    }

    /**
     * Returns the permissions for the given codesource object.
     * The implementation of this method first calls super.getPermissions,
     * to get the permissions
     * granted by the super class, and then adds additional permissions
     * based on the URL of the codesource.
     * <p>
     * If the protocol is "file"
     * and the path specifies a file, permission is granted to read all files
     * and (recursively) all files and subdirectories contained in
     * that directory. This is so applets with a codebase of
     * file:/blah/some.jar can read in file:/blah/, which is needed to
     * be backward compatible. We also add permission to connect back to
     * the "localhost".
     *
     * @param codesource the codesource
     * @return the permissions granted to the codesource
     */
    protected PermissionCollection getPermissions(CodeSource codesource)
    {
        PermissionCollection perms = super.getPermissions(codesource);

        URL url = codesource.getLocation();

        String path = null;
        Permission p;

        try {
            p = url.openConnection().getPermission();
        } catch (java.io.IOException ioe) {
            p = null;
        }

        if (p instanceof FilePermission) {
            path = p.getName();
        } else if ((p == null) && (url.getProtocol().equals("file"))) {
            path = url.getFile().replace('/', File.separatorChar);
            path = ParseUtil.decode(path);
        }

        if (path != null && !path.endsWith(File.separator)) {
            int endIndex = path.lastIndexOf(File.separatorChar);
            if (endIndex != -1) {
                    path = path.substring(0, endIndex+1) + "-";
                    perms.add(new FilePermission(path,
                        SecurityConstants.FILE_READ_ACTION));
            }
        }
        return perms;
    }

    /*
     * Returns the contents of the specified URL as an array of bytes.
     */
    private static byte[] getBytes(URL url) throws IOException {
        URLConnection uc = url.openConnection();
        if (uc instanceof java.net.HttpURLConnection) {
            java.net.HttpURLConnection huc = (java.net.HttpURLConnection) uc;
            int code = huc.getResponseCode();
            if (code >= java.net.HttpURLConnection.HTTP_BAD_REQUEST) {
                throw new IOException("open HTTP connection failed.");
            }
        }
        int len = uc.getContentLength();

        // Fixed #4507227: Slow performance to load
        // class and resources. [stanleyh]
        //
        // Use buffered input stream [stanleyh]
        InputStream in = new BufferedInputStream(uc.getInputStream());

        byte[] b;
        try {
            if (len != -1) {
                // Read exactly len bytes from the input stream
                b = new byte[len];
                while (len > 0) {
                    int n = in.read(b, b.length - len, len);
                    if (n == -1) {
                        throw new IOException("unexpected EOF");
                    }
                    len -= n;
                }
            } else {
                // Read until end of stream is reached - use 8K buffer
                // to speed up performance [stanleyh]
                b = new byte[8192];
                int total = 0;
                while ((len = in.read(b, total, b.length - total)) != -1) {
                    total += len;
                    if (total >= b.length) {
                        byte[] tmp = new byte[total * 2];
                        System.arraycopy(b, 0, tmp, 0, total);
                        b = tmp;
                    }
                }
                // Trim array to correct size, if necessary
                if (total != b.length) {
                    byte[] tmp = new byte[total];
                    System.arraycopy(b, 0, tmp, 0, total);
                    b = tmp;
                }
            }
        } finally {
            in.close();
        }
        return b;
    }

    // Object for synchronization around getResourceAsStream()
    private Object syncResourceAsStream = new Object();
    private Object syncResourceAsStreamFromJar = new Object();

    // Flag to indicate getResourceAsStream() is in call
    private boolean resourceAsStreamInCall = false;
    private boolean resourceAsStreamFromJarInCall = false;

    /**
     * Returns an input stream for reading the specified resource.
     *
     * The search order is described in the documentation for {@link
     * #getResource(String)}.<p>
     *
     * @param  name the resource name
     * @return an input stream for reading the resource, or <code>null</code>
     *         if the resource could not be found
     * @since  JDK1.1
     */
    public InputStream getResourceAsStream(String name)
    {

        if (name == null) {
            throw new NullPointerException("name");
        }

        try
        {
            InputStream is = null;

            // Fixed #4507227: Slow performance to load
            // class and resources. [stanleyh]
            //
            // The following is used to avoid calling
            // AppletClassLoader.findResource() in
            // super.getResourceAsStream(). Otherwise,
            // unnecessary connection will be made.
            //
            synchronized(syncResourceAsStream)
            {
                resourceAsStreamInCall = true;

                // Call super class
                is = super.getResourceAsStream(name);

                resourceAsStreamInCall = false;
            }

            if (is == null)
            {
                // If resource cannot be obtained,
                // try to download it from codebase
                URL url = new URL(base, name);
                is = url.openStream();
            }

            return is;
        }
        catch (Exception e)
        {
            return null;
        }
    }


    /**
     * Returns an input stream for reading the specified resource from the
     * the loaded jar files.
     *
     * The search order is described in the documentation for {@link
     * #getResource(String)}.<p>
     *
     * @param  name the resource name
     * @return an input stream for reading the resource, or <code>null</code>
     *         if the resource could not be found
     * @since  JDK1.1
     */
    public InputStream getResourceAsStreamFromJar(String name) {

        if (name == null) {
            throw new NullPointerException("name");
        }

        try {
            InputStream is = null;
            synchronized(syncResourceAsStreamFromJar) {
                resourceAsStreamFromJarInCall = true;
                // Call super class
                is = super.getResourceAsStream(name);
                resourceAsStreamFromJarInCall = false;
            }

            return is;
        } catch (Exception e) {
            return null;
        }
    }


    /*
     * Finds the applet resource with the specified name. First checks
     * loaded JAR files then the applet code base for the resource.
     */
    public URL findResource(String name) {
        // check loaded JAR files
        URL url = super.findResource(name);

        if (url == null)
        {
            //#4805170, if it is a call from Applet.getImage()
            //we should check for the image only in the archives
            boolean insideGetResourceAsStreamFromJar = false;
                synchronized(syncResourceAsStreamFromJar) {
                insideGetResourceAsStreamFromJar = resourceAsStreamFromJarInCall;
            }

            if (insideGetResourceAsStreamFromJar) {
                return null;
            }

            // Fixed #4507227: Slow performance to load
            // class and resources. [stanleyh]
            //
            // Check if getResourceAsStream is called.
            //
            boolean insideGetResourceAsStream = false;

            synchronized(syncResourceAsStream)
            {
                insideGetResourceAsStream = resourceAsStreamInCall;
            }

            // If getResourceAsStream is called, don't
            // trigger the following code. Otherwise,
            // unnecessary connection will be made.
            //
            if (insideGetResourceAsStream == false)
            {
                // otherwise, try the code base
                try {
                    url = new URL(base, name);
                    // check if resource exists
                    if(!resourceExists(url))
                        url = null;
                } catch (Exception e) {
                    // all exceptions, including security exceptions, are caught
                    url = null;
                }
            }
        }
        return url;
    }


    private boolean resourceExists(URL url) {
        // Check if the resource exists.
        // It almost works to just try to do an openConnection() but
        // HttpURLConnection will return true on HTTP_BAD_REQUEST
        // when the requested name ends in ".html", ".htm", and ".txt"
        // and we want to be able to handle these
        //
        // Also, cannot just open a connection for things like FileURLConnection,
        // because they succeed when connecting to a nonexistent file.
        // So, in those cases we open and close an input stream.
        boolean ok = true;
        try {
            URLConnection conn = url.openConnection();
            if (conn instanceof java.net.HttpURLConnection) {
                java.net.HttpURLConnection hconn =
                    (java.net.HttpURLConnection) conn;

                // To reduce overhead, using http HEAD method instead of GET method
                hconn.setRequestMethod("HEAD");

                int code = hconn.getResponseCode();
                if (code == java.net.HttpURLConnection.HTTP_OK) {
                    return true;
                }
                if (code >= java.net.HttpURLConnection.HTTP_BAD_REQUEST) {
                    return false;
                }
            } else {
                /**
                 * Fix for #4182052 - stanleyh
                 *
                 * The same connection should be reused to avoid multiple
                 * HTTP connections
                 */

                // our best guess for the other cases
                InputStream is = conn.getInputStream();
                is.close();
            }
        } catch (Exception ex) {
            ok = false;
        }
        return ok;
    }

    /*
     * Returns an enumeration of all the applet resources with the specified
     * name. First checks loaded JAR files then the applet code base for all
     * available resources.
     */
    public Enumeration findResources(String name) throws IOException {
        URL u = new URL(base, name);
        if (!resourceExists(u)) {
            u = null;
        }
        final Enumeration e = super.findResources(name);
        final URL url = u;
        return new Enumeration() {
            private boolean done;
            public Object nextElement() {
                if (!done) {
                    if (e.hasMoreElements()) {
                        return e.nextElement();
                    }
                    done = true;
                    if (url != null) {
                        return url;
                    }
                }
                throw new NoSuchElementException();
            }
            public boolean hasMoreElements() {
                return !done && (e.hasMoreElements() || url != null);
            }
        };
    }

    /*
     * Load and resolve the file specified by the applet tag CODE
     * attribute. The argument can either be the relative path
     * of the class file itself or just the name of the class.
     */
    Class loadCode(String name) throws ClassNotFoundException {
        // first convert any '/' or native file separator to .
        name = name.replace('/', '.');
        name = name.replace(File.separatorChar, '.');

        String s1 = null;
        int i = name.indexOf(";");
        if (i != -1) {
            s1 = name.substring(i);
            name = name.substring(0, i);
        }

        // save that name for later
        String fullName = name;
        // then strip off any suffixes
        if (name.endsWith(".class") || name.endsWith(".java")) {
            name = name.substring(0, name.lastIndexOf('.'));
        }
        try {
            if (s1 != null)
                name = name + s1;
            return loadClass(name);
        } catch (ClassNotFoundException e) {
        }
        // then if it didn't end with .java or .class, or in the
        // really pathological case of a class named class or java
        if (s1 != null)
            fullName = fullName + s1;
        return loadClass(fullName);
    }

    /*
     * The threadgroup that the applets loaded by this classloader live
     * in. In the sun.* implementation of applets, the security manager's
     * (AppletSecurity) getThreadGroup returns the thread group of the
     * first applet on the stack, which is the applet's thread group.
     */
    private AppletThreadGroup threadGroup;
    private AppContext appContext;

    ThreadGroup getThreadGroup() {
      synchronized (threadGroupSynchronizer) {
        if (threadGroup == null || threadGroup.isDestroyed()) {
            AccessController.doPrivileged(new PrivilegedAction() {
                public Object run() {
                    threadGroup = new AppletThreadGroup(base + "-threadGroup");
                    // threadGroup.setDaemon(true);
                    // threadGroup is now destroyed by AppContext.dispose()

                    // Create the new AppContext from within a Thread belonging
                    // to the newly created ThreadGroup, and wait for the
                    // creation to complete before returning from this method.
                    AppContextCreator creatorThread = new AppContextCreator(threadGroup);

                    // Since this thread will later be used to launch the
                    // applet's AWT-event dispatch thread and we want the applet
                    // code executing the AWT callbacks to use their own class
                    // loader rather than the system class loader, explicitly
                    // set the context class loader to the AppletClassLoader.
                    creatorThread.setContextClassLoader(AppletClassLoader.this);

                    synchronized(creatorThread.syncObject)  {
                        creatorThread.start();
                        try {
                            creatorThread.syncObject.wait();
                        } catch (InterruptedException e) { }
                        appContext = creatorThread.appContext;
                    }
                    return null;
                }
            });
        }
        return threadGroup;
      }
    }

    /*
     * Get the AppContext, if any, corresponding to this AppletClassLoader.
     */
    AppContext getAppContext()  {
        return appContext;
    }

    int usageCount = 0;

    /**
     * Grab this AppletClassLoader and its ThreadGroup/AppContext, so they
     * won't be destroyed.
     */
    void grab() {
        synchronized(grabReleaseSynchronizer) {
            usageCount++;
        }
        getThreadGroup(); // Make sure ThreadGroup/AppContext exist
    }

    /**
     * Release this AppletClassLoader and its ThreadGroup/AppContext.
     * If nothing else has grabbed this AppletClassLoader, its ThreadGroup
     * and AppContext will be destroyed.
     *
     * Because this method may destroy the AppletClassLoader's ThreadGroup,
     * this method should NOT be called from within the AppletClassLoader's
     * ThreadGroup.
     *
     * Changed modifier to protected in order to be able to overwrite this
     * function in PluginClassLoader.java
     */
    protected void release() {

        AppContext tempAppContext = null;

        synchronized(grabReleaseSynchronizer) {
            if (usageCount > 1)  {
                --usageCount;
            } else {
                synchronized(threadGroupSynchronizer) {
                    // Store app context in temp variable
                    tempAppContext = appContext;
                    usageCount = 0;
                    appContext = null;
                    threadGroup = null;
                }
            }
        }

        // Dispose appContext outside any sync block to
        // prevent potential deadlock.
        if (tempAppContext != null)  {
            try {
                tempAppContext.dispose(); // nuke the world!
            } catch (IllegalThreadStateException e) { }
        }
    }

    private static AppletMessageHandler mh =
        new AppletMessageHandler("appletclassloader");

    /*
     * Prints a class loading error message.
     */
    private static void printError(String name, Throwable e) {
        String s = null;
        if (e == null) {
            s = mh.getMessage("filenotfound", name);
        } else if (e instanceof IOException) {
            s = mh.getMessage("fileioexception", name);
        } else if (e instanceof ClassFormatError) {
            s = mh.getMessage("fileformat", name);
        } else if (e instanceof ThreadDeath) {
            s = mh.getMessage("filedeath", name);
        } else if (e instanceof Error) {
            s = mh.getMessage("fileerror", e.toString(), name);
        }
        if (s != null) {
            System.err.println(s);
        }
    }
}

/*
 * The AppContextCreator class is used to create an AppContext from within
 * a Thread belonging to the new AppContext's ThreadGroup.  To wait for
 * this operation to complete before continuing, wait for the notifyAll()
 * operation on the syncObject to occur.
 */
class AppContextCreator extends Thread  {
    Object syncObject = new Object();
    AppContext appContext = null;

    AppContextCreator(ThreadGroup group)  {
        super(group, "AppContextCreator");
    }

    public void run()  {
        synchronized(syncObject)  {
            appContext = SunToolkit.createNewAppContext();
            syncObject.notifyAll();
        }
    } // run()

} // class AppContextCreator
