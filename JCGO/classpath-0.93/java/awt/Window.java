/* Window.java --
   Copyright (C) 1999, 2000, 2002, 2003, 2004, 2006  Free Software Foundation

This file is part of GNU Classpath.

GNU Classpath is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2, or (at your option)
any later version.

GNU Classpath is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
General Public License for more details.

You should have received a copy of the GNU General Public License
along with GNU Classpath; see the file COPYING.  If not, write to the
Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
02110-1301 USA.

Linking this library statically or dynamically with other modules is
making a combined work based on this library.  Thus, the terms and
conditions of the GNU General Public License cover the whole
combination.

As a special exception, the copyright holders of this library give you
permission to link this library with independent modules to produce an
executable, regardless of the license terms of these independent
modules, and to copy and distribute the resulting executable under
terms of your choice, provided that you also meet, for each linked
independent module, the terms and conditions of the license of that
module.  An independent module is a module which is not derived from
or based on this library.  If you modify this library, you may extend
this exception to your version of the library, but you are not
obligated to do so.  If you do not wish to do so, delete this
exception statement from your version. */


package java.awt;

import java.awt.event.ComponentEvent;
import java.awt.event.WindowEvent;
import java.awt.event.WindowFocusListener;
import java.awt.event.WindowListener;
import java.awt.event.WindowStateListener;
import java.awt.image.BufferStrategy;
import java.awt.peer.WindowPeer;
import java.lang.ref.Reference;
import java.lang.ref.WeakReference;
import java.util.EventListener;
import java.util.Iterator;
import java.util.Locale;
import java.util.ResourceBundle;
import java.util.Vector;

import javax.accessibility.Accessible;
import javax.accessibility.AccessibleContext;
import javax.accessibility.AccessibleRole;
import javax.accessibility.AccessibleState;
import javax.accessibility.AccessibleStateSet;

/**
 * This class represents a top-level window with no decorations.
 *
 * @author Aaron M. Renn (arenn@urbanophile.com)
 * @author Warren Levy  (warrenl@cygnus.com)
 */
public class Window extends Container implements Accessible
{
  private static final long serialVersionUID = 4497834738069338734L;

  // Serialized fields, from Sun's serialization spec.
  private String warningString = null;
  private int windowSerializedDataVersion = 0; // FIXME
  /** @since 1.2 */
  // private FocusManager focusMgr;  // FIXME: what is this?  
  /** @since 1.2 */
  private int state = 0;
  /** @since 1.4 */
  private boolean focusableWindowState = true;
  /** @since 1.5 */
  private boolean alwaysOnTop = false;

  // A list of other top-level windows owned by this window.
  private transient Vector ownedWindows = new Vector();

  private transient WindowListener windowListener;
  private transient WindowFocusListener windowFocusListener;
  private transient WindowStateListener windowStateListener;
  private transient GraphicsConfiguration graphicsConfiguration;

  private transient boolean shown;

  // This is package-private to avoid an accessor method.
  transient Component windowFocusOwner;
  
  /*
   * The number used to generate the name returned by getName.
   */
  private static transient long next_window_number;

  protected class AccessibleAWTWindow extends AccessibleAWTContainer
  {
    private static final long serialVersionUID = 4215068635060671780L;

    public AccessibleRole getAccessibleRole()
    {
      return AccessibleRole.WINDOW;
    }
    
    public AccessibleStateSet getAccessibleStateSet()
    {
      AccessibleStateSet states = super.getAccessibleStateSet();
      if (isActive())
        states.add(AccessibleState.ACTIVE);
      return states;
    }
  }

  /** 
   * This (package access) constructor is used by subclasses that want
   * to build windows that do not have parents.  Eg. toplevel
   * application frames.  Subclasses cannot call super(null), since
   * null is an illegal argument.
   */
  Window()
  {
    visible = false;
    // Windows are the only Containers that default to being focus
    // cycle roots.
    focusCycleRoot = true;
    setLayout(new BorderLayout());
    
    GraphicsEnvironment g = GraphicsEnvironment.getLocalGraphicsEnvironment();
    graphicsConfiguration = g.getDefaultScreenDevice().getDefaultConfiguration();
  }

  Window(GraphicsConfiguration gc)
  {
    this();
    graphicsConfiguration = gc;
  }

  /**
   * Initializes a new instance of <code>Window</code> with the specified
   * parent.  The window will initially be invisible.
   *
   * @param owner The owning <code>Frame</code> of this window.
   *
   * @exception IllegalArgumentException If the owner's GraphicsConfiguration
   * is not from a screen device, or if owner is null; this exception is always
   * thrown when GraphicsEnvironment.isHeadless returns true.
   */
  public Window(Frame owner)
  {
    this (owner, owner.getGraphicsConfiguration ());
  }

  /**
   * Initializes a new instance of <code>Window</code> with the specified
   * parent.  The window will initially be invisible.   
   *
   * @exception IllegalArgumentException If the owner's GraphicsConfiguration
   * is not from a screen device, or if owner is null; this exception is always
   * thrown when GraphicsEnvironment.isHeadless returns true.
   *
   * @since 1.2
   */
  public Window(Window owner)
  {
    this (owner, owner.getGraphicsConfiguration ());
  }
  
  /**
   * Initializes a new instance of <code>Window</code> with the specified
   * parent.  The window will initially be invisible.   
   *
   * @exception IllegalArgumentException If owner is null or if gc is not from a
   * screen device; this exception is always thrown when
   * GraphicsEnvironment.isHeadless returns true.
   *
   * @since 1.3
   */
  public Window(Window owner, GraphicsConfiguration gc)
  {
    this ();

    synchronized (getTreeLock())
      {
	if (owner == null)
	  throw new IllegalArgumentException ("owner must not be null");

	parent = owner;
        owner.ownedWindows.add(new WeakReference(this));
      }

    // FIXME: make this text visible in the window.
    SecurityManager s = System.getSecurityManager();
    if (s != null && ! s.checkTopLevelWindow(this))
      warningString = System.getProperty("awt.appletWarning");

    if (gc != null
        && gc.getDevice().getType() != GraphicsDevice.TYPE_RASTER_SCREEN)
      throw new IllegalArgumentException ("gc must be from a screen device");

    if (gc == null)
      graphicsConfiguration = GraphicsEnvironment.getLocalGraphicsEnvironment()
                                                 .getDefaultScreenDevice()
                                                 .getDefaultConfiguration();
    else
      graphicsConfiguration = gc;
  }

  GraphicsConfiguration getGraphicsConfigurationImpl()
  {
    if (graphicsConfiguration != null)
	return graphicsConfiguration;

    return super.getGraphicsConfigurationImpl();
  }

  /**
   * Creates the native peer for this window.
   */
  public void addNotify()
  {
    if (peer == null)
      peer = getToolkit().createWindow(this);
    super.addNotify();
  }

  /**
   * Relays out this window's child components at their preferred size.
   *
   * @specnote pack() doesn't appear to be called internally by show(), so
   *             we duplicate some of the functionality.
   */
  public void pack()
  {
    if (parent != null && !parent.isDisplayable())
      parent.addNotify();
    if (peer == null)
      addNotify();

    setSize(getPreferredSize());

    validate();
  }

  /**
   * Shows on-screen this window and any of its owned windows for whom
   * isVisible returns true.
   */
  public void show()
  {
    synchronized (getTreeLock())
      {
        if (peer == null)
          addNotify();

        validate();
        if (visible)
          toFront();
        else
          {
            super.show();
            // Show visible owned windows.
            Iterator e = ownedWindows.iterator();
            while (e.hasNext())
              {
                Window w = (Window) (((Reference) e.next()).get());
                if (w != null)
                  {
                    if (w.isVisible())
                      w.getPeer().setVisible(true);
                  }
                else
                  // Remove null weak reference from ownedWindows.
                  // Unfortunately this can't be done in the Window's
                  // finalize method because there is no way to guarantee
                  // synchronous access to ownedWindows there.
                  e.remove();
              }
          }
        KeyboardFocusManager manager = KeyboardFocusManager.getCurrentKeyboardFocusManager();
        manager.setGlobalFocusedWindow(this);

        if (! shown)
          {
            FocusTraversalPolicy policy = getFocusTraversalPolicy();
            Component initialFocusOwner = null;

            if (policy != null)
              initialFocusOwner = policy.getInitialComponent(this);

            if (initialFocusOwner != null)
              initialFocusOwner.requestFocusInWindow();

            // Post WINDOW_OPENED from here.
            if (windowListener != null
                || (eventMask & AWTEvent.WINDOW_EVENT_MASK) != 0)
              {
                WindowEvent ev = new WindowEvent(this,
                                                 WindowEvent.WINDOW_OPENED);
                Toolkit tk = Toolkit.getDefaultToolkit();
                tk.getSystemEventQueue().postEvent(ev);
              }
            shown = true;
          }
      }
  }

  public void hide()
  {
    // Hide visible owned windows.
    synchronized (getTreeLock ())
      {
	Iterator e = ownedWindows.iterator();
	while(e.hasNext())
	  {
	    Window w = (Window)(((Reference) e.next()).get());
	    if (w != null)
	      {
		if (w.isVisible() && w.getPeer() != null)
		  w.getPeer().setVisible(false);
	      }
     	    else
	      e.remove();
	  }
      }
    super.hide();
  }

  /**
   * Destroys any resources associated with this window.  This includes
   * all components in the window and all owned top-level windows.
   */
  public void dispose()
  {
    hide();

    synchronized (getTreeLock ())
      {
	Iterator e = ownedWindows.iterator();
	while(e.hasNext())
	  {
	    Window w = (Window)(((Reference) e.next()).get());
	    if (w != null)
	      w.dispose();
	    else
	      // Remove null weak reference from ownedWindows.
	      e.remove();
	  }

	for (int i = 0; i < ncomponents; ++i)
	  component[i].removeNotify();
	this.removeNotify();

	// Post WINDOW_CLOSED from here.
	if (windowListener != null
	    || (eventMask & AWTEvent.WINDOW_EVENT_MASK) != 0)
	  {
	    WindowEvent ev = new WindowEvent(this,
	                                     WindowEvent.WINDOW_CLOSED);
	    Toolkit tk = Toolkit.getDefaultToolkit();
	    tk.getSystemEventQueue().postEvent(ev);
	  }
      }
  }

  /**
   * Sends this window to the back so that all other windows display in
   * front of it.
   *
   * If the window is set to be always-on-top, this will remove its
   * always-on-top status.
   */
  public void toBack()
  {
    if (peer != null)
      {
	if( alwaysOnTop )
	  setAlwaysOnTop( false );
	( (WindowPeer) peer ).toBack();
      }
  }

  /**
   * Brings this window to the front so that it displays in front of
   * any other windows.
   */
  public void toFront()
  {
    if (peer != null)
      ( (WindowPeer) peer ).toFront();
  }

  /**
   * Returns the toolkit used to create this window.
   *
   * @return The toolkit used to create this window.
   *
   * @specnote Unlike Component.getToolkit, this implementation always 
   *           returns the value of Toolkit.getDefaultToolkit().
   */
  public Toolkit getToolkit()
  {
    return Toolkit.getDefaultToolkit();    
  }

  /**
   * Returns the warning string that will be displayed if this window is
   * popped up by an unsecure applet or application.
   *
   * @return The unsecure window warning message.
   */
  public final String getWarningString()
  {
    return warningString;
  }

  /**
   * Returns the locale that this window is configured for.
   *
   * @return The locale this window is configured for.
   */
  public Locale getLocale()
  {
    return locale == null ? Locale.getDefault() : locale;
  }

  /*
  /** @since 1.2
  public InputContext getInputContext()
  {
    // FIXME
  }
  */

  /**
   * Sets the cursor for this window to the specifiec cursor.
   *
   * @param cursor The new cursor for this window.
   */
  public void setCursor(Cursor cursor)
  {
    super.setCursor(cursor);
  }

  public Window getOwner()
  {
    return (Window) parent;
  }

  /** @since 1.2 */
  public Window[] getOwnedWindows()
  {
    Window [] trimmedList;
    synchronized (getTreeLock ())
      {
	// Windows with non-null weak references in ownedWindows.
	Window [] validList = new Window [ownedWindows.size()];

	Iterator e = ownedWindows.iterator();
	int numValid = 0;
	while (e.hasNext())
	  {
	    Window w = (Window)(((Reference) e.next()).get());
	    if (w != null)
	      validList[numValid++] = w;
	    else
	      // Remove null weak reference from ownedWindows.
	      e.remove();
	  }

	if (numValid != validList.length)
	  {
	    trimmedList = new Window [numValid];
	    System.arraycopy (validList, 0, trimmedList, 0, numValid);
	  }
	else
	  trimmedList = validList;
      }
    return trimmedList;
  }

  /**
   * Adds the specified listener to the list of <code>WindowListeners</code>
   * that will receive events for this window.
   *
   * @param listener The <code>WindowListener</code> to add.
   */
  public synchronized void addWindowListener(WindowListener listener)
  {
    if (listener != null)
      {
        newEventsOnly = true;
        windowListener = AWTEventMulticaster.add(windowListener, listener);
      }
  }

  /**
   * Removes the specified listener from the list of
   * <code>WindowListeners</code> that will receive events for this window.
   *
   * @param listener The <code>WindowListener</code> to remove.
   */
  public synchronized void removeWindowListener(WindowListener listener)
  {
    windowListener = AWTEventMulticaster.remove(windowListener, listener);
  }

  /**
   * Returns an array of all the window listeners registered on this window.
   *
   * @since 1.4
   */
  public synchronized WindowListener[] getWindowListeners()
  {
    return (WindowListener[])
      AWTEventMulticaster.getListeners(windowListener,
                                       WindowListener.class);
  }

  /**
   * Returns an array of all the window focus listeners registered on this
   * window.
   *
   * @since 1.4
   */
  public synchronized WindowFocusListener[] getWindowFocusListeners()
  {
    return (WindowFocusListener[])
      AWTEventMulticaster.getListeners(windowFocusListener,
                                       WindowFocusListener.class);
  }
  
  /**
   * Returns an array of all the window state listeners registered on this
   * window.
   *
   * @since 1.4
   */
  public synchronized WindowStateListener[] getWindowStateListeners()
  {
    return (WindowStateListener[])
      AWTEventMulticaster.getListeners(windowStateListener,
                                       WindowStateListener.class);
  }

  /**
   * Adds the specified listener to this window.
   */
  public void addWindowFocusListener (WindowFocusListener wfl)
  {
    if (wfl != null)
      {
        newEventsOnly = true;
        windowFocusListener = AWTEventMulticaster.add (windowFocusListener,
                                                       wfl);
      }
  }
  
  /**
   * Adds the specified listener to this window.
   *
   * @since 1.4
   */
  public void addWindowStateListener (WindowStateListener wsl)
  {
    if (wsl != null)
      {
        newEventsOnly = true;
        windowStateListener = AWTEventMulticaster.add (windowStateListener,
                                                       wsl);  
      }
  }
  
  /**
   * Removes the specified listener from this window.
   */
  public void removeWindowFocusListener (WindowFocusListener wfl)
  {
    windowFocusListener = AWTEventMulticaster.remove (windowFocusListener, wfl);
  }
  
  /**
   * Removes the specified listener from this window.
   *
   * @since 1.4
   */
  public void removeWindowStateListener (WindowStateListener wsl)
  {
    windowStateListener = AWTEventMulticaster.remove (windowStateListener, wsl);
  }

  /**
   * Returns an array of all the objects currently registered as FooListeners
   * upon this Window. FooListeners are registered using the addFooListener
   * method.
   *
   * @exception ClassCastException If listenerType doesn't specify a class or
   * interface that implements java.util.EventListener.
   *
   * @since 1.3
   */
  public EventListener[] getListeners(Class listenerType)
  {
    if (listenerType == WindowListener.class)
      return getWindowListeners();
    return super.getListeners(listenerType);
  }

  void dispatchEventImpl(AWTEvent e)
  {
    if (e.getID() == ComponentEvent.COMPONENT_RESIZED)
      {
        invalidate();
        validate();
      }
    super.dispatchEventImpl(e);
  }

  /**
   * Processes the specified event for this window.  If the event is an
   * instance of <code>WindowEvent</code>, then
   * <code>processWindowEvent()</code> is called to process the event,
   * otherwise the superclass version of this method is invoked.
   *
   * @param evt The event to process.
   */
  protected void processEvent(AWTEvent evt)
  {
    if (evt instanceof WindowEvent)
      {
        WindowEvent we = (WindowEvent) evt;
        switch (evt.getID())
          {
          case WindowEvent.WINDOW_OPENED:
          case WindowEvent.WINDOW_CLOSED:
          case WindowEvent.WINDOW_CLOSING:
          case WindowEvent.WINDOW_ICONIFIED:
          case WindowEvent.WINDOW_DEICONIFIED:
          case WindowEvent.WINDOW_ACTIVATED:
          case WindowEvent.WINDOW_DEACTIVATED:
            processWindowEvent(we);
            break;
          case WindowEvent.WINDOW_GAINED_FOCUS:
          case WindowEvent.WINDOW_LOST_FOCUS:
            processWindowFocusEvent(we);
            break;
          case WindowEvent.WINDOW_STATE_CHANGED:
            processWindowStateEvent(we);
            break;
          }
      }
    else
      super.processEvent(evt);
  }

  /**
   * Dispatches this event to any listeners that are listening for
   * <code>WindowEvents</code> on this window.  This method only gets
   * invoked if it is enabled via <code>enableEvents()</code> or if
   * a listener has been added.
   *
   * @param evt The event to process.
   */
  protected void processWindowEvent(WindowEvent evt)
  {
    if (windowListener != null)
      {
        switch (evt.getID())
          {
          case WindowEvent.WINDOW_ACTIVATED:
            windowListener.windowActivated(evt);
            break;
          case WindowEvent.WINDOW_CLOSED:
            windowListener.windowClosed(evt);
            break;
          case WindowEvent.WINDOW_CLOSING:
            windowListener.windowClosing(evt);
            break;
          case WindowEvent.WINDOW_DEACTIVATED:
            windowListener.windowDeactivated(evt);
            break;
          case WindowEvent.WINDOW_DEICONIFIED:
            windowListener.windowDeiconified(evt);
            break;
          case WindowEvent.WINDOW_ICONIFIED:
            windowListener.windowIconified(evt);
            break;
          case WindowEvent.WINDOW_OPENED:
            windowListener.windowOpened(evt);
            break;
          }
      }
  }

  /**
   * Identifies if this window is active.  The active window is a Frame or
   * Dialog that has focus or owns the active window.
   *  
   * @return true if active, else false.
   * @since 1.4
   */
  public boolean isActive()
  {
    KeyboardFocusManager manager = KeyboardFocusManager.getCurrentKeyboardFocusManager ();
    return manager.getActiveWindow() == this;
  }

  /**
   * Identifies if this window is focused.  A window is focused if it is the
   * focus owner or it contains the focus owner.
   * 
   * @return true if focused, else false.
   * @since 1.4
   */
  public boolean isFocused()
  {
    KeyboardFocusManager manager = KeyboardFocusManager.getCurrentKeyboardFocusManager ();
    return manager.getFocusedWindow() == this;
  }
  
  /**
   * Returns the child window that has focus if this window is active.
   * This method returns <code>null</code> if this window is not active
   * or no children have focus.
   *
   * @return The component that has focus, or <code>null</code> if no
   * component has focus.
   */
  public Component getFocusOwner ()
  {
    KeyboardFocusManager manager = KeyboardFocusManager.getCurrentKeyboardFocusManager ();

    Window activeWindow = manager.getActiveWindow ();

    // The currently-focused Component belongs to the active Window.
    if (activeWindow == this)
      return manager.getFocusOwner ();
    else
      return null;
  }

  /**
   * Returns the child component of this window that would receive
   * focus if this window were to become focused.  If the window
   * already has the top-level focus, then this method returns the
   * same component as getFocusOwner.  If no child component has
   * requested focus within the window, then the initial focus owner
   * is returned.  If this is a non-focusable window, this method
   * returns null.
   *
   * @return the child component of this window that most recently had
   * the focus, or <code>null</code>
   * @since 1.4
   */
  public Component getMostRecentFocusOwner ()
  {
    return windowFocusOwner;
  }

  /**
   * Set the focus owner for this window.  This method is used to
   * remember which component was focused when this window lost
   * top-level focus, so that when it regains top-level focus the same
   * child component can be refocused.
   *
   * @param windowFocusOwner the component in this window that owns
   * the focus.
   */
  void setFocusOwner (Component windowFocusOwner)
  {
    this.windowFocusOwner = windowFocusOwner;
  }

  /**
   * Post a Java 1.0 event to the event queue.
   *
   * @param e The event to post.
   *
   * @deprecated
   */
  public boolean postEvent(Event e)
  {
    return handleEvent (e);
  }

  /**
   * Tests whether or not this window is visible on the screen.
   *
   * In contrast to the normal behaviour of Container, which is that
   * a container is showing if its parent is visible and showing, a Window
   * is even showing, if its parent (i.e. an invisible Frame) is not showing.
   *
   * @return <code>true</code> if this window is visible, <code>false</code>
   * otherwise.
   */
  public boolean isShowing()
  {
    return isVisible();
  }

  public void setLocationRelativeTo(Component c)
  {
    int x = 0;
    int y = 0;
    
    if (c == null || !c.isShowing())
      {
        GraphicsEnvironment ge = GraphicsEnvironment.getLocalGraphicsEnvironment();
        Point center = ge.getCenterPoint();
        x = center.x - (width / 2);
        y = center.y - (height / 2);
      }
    else
      {
        int cWidth = c.getWidth();
        int cHeight = c.getHeight();
        Dimension screenSize = getToolkit().getScreenSize();

        x = c.getLocationOnScreen().x;
        y = c.getLocationOnScreen().y;
        
        // If bottom of component is cut off, window placed
        // on the left or the right side of component
        if ((y + cHeight) > screenSize.height)
          {
            // If the right side of the component is closer to the center
            if ((screenSize.width / 2 - x) <= 0)
              {
                if ((x - width) >= 0)
                  x -= width;
                else
                  x = 0;
              }
            else
              {
                if ((x + cWidth + width) <= screenSize.width)
                  x += cWidth;
                else
                  x = screenSize.width - width;
              }

            y = screenSize.height - height;
          }
        else if (cWidth > width || cHeight > height)
          {
            // If right side of component is cut off
            if ((x + width) > screenSize.width)
              x = screenSize.width - width;
            // If left side of component is cut off
            else if (x < 0)
              x = 0;
            else
              x += (cWidth - width) / 2;
            
            y += (cHeight - height) / 2;
          }
        else
          {
            // If right side of component is cut off
            if ((x + width) > screenSize.width)
              x = screenSize.width - width;
            // If left side of component is cut off
            else if (x < 0 || (x - (width - cWidth) / 2) < 0)
              x = 0;
            else
              x -= (width - cWidth) / 2;

            if ((y - (height - cHeight) / 2) > 0)
              y -= (height - cHeight) / 2;
            else
              y = 0;
          }
      }

    setLocation(x, y);
  }

  /**
   * A BltBufferStrategy for windows.
   */
  private class WindowBltBufferStrategy extends BltBufferStrategy
  {
    /**
     * Creates a block transfer strategy for this window.
     *
     * @param numBuffers the number of buffers in this strategy
     * @param accelerated true if the buffer should be accelerated,
     * false otherwise
     */
    WindowBltBufferStrategy(int numBuffers, boolean accelerated)
    {
      super(numBuffers,
	    new BufferCapabilities(new ImageCapabilities(accelerated),
				   new ImageCapabilities(accelerated),
				   BufferCapabilities.FlipContents.COPIED));
    }
  }

  /**
   * A FlipBufferStrategy for windows.
   */
  private class WindowFlipBufferStrategy extends FlipBufferStrategy
  {
    /**
     * Creates a flip buffer strategy for this window.
     *
     * @param numBuffers the number of buffers in this strategy
     *
     * @throws AWTException if the requested number of buffers is not
     * supported
     */
    WindowFlipBufferStrategy(int numBuffers)
      throws AWTException
    {
      super(numBuffers,
	    new BufferCapabilities(new ImageCapabilities(true),
				   new ImageCapabilities(true),
				   BufferCapabilities.FlipContents.COPIED));
    }
  }

  /**
   * Creates a buffering strategy that manages how this window is
   * repainted.  This method attempts to create the optimum strategy
   * based on the desired number of buffers.  Hardware or software
   * acceleration may be used.
   *
   * createBufferStrategy attempts different levels of optimization,
   * but guarantees that some strategy with the requested number of
   * buffers will be created even if it is not optimal.  First it
   * attempts to create a page flipping strategy, then an accelerated
   * blitting strategy, then an unaccelerated blitting strategy.
   *
   * Calling this method causes any existing buffer strategy to be
   * destroyed.
   *
   * @param numBuffers the number of buffers in this strategy
   *
   * @throws IllegalArgumentException if requested number of buffers
   * is less than one
   * @throws IllegalStateException if this window is not displayable
   *
   * @since 1.4
   */
  public void createBufferStrategy(int numBuffers)
  {
    if (numBuffers < 1)
      throw new IllegalArgumentException("Window.createBufferStrategy: number"
					 + " of buffers is less than one");

    if (!isDisplayable())
      throw new IllegalStateException("Window.createBufferStrategy: window is"
				      + " not displayable");

    BufferStrategy newStrategy = null;

    // try a flipping strategy
    try
      {
	newStrategy = new WindowFlipBufferStrategy(numBuffers);
      }
    catch (AWTException e)
      {
      }

    // fall back to an accelerated blitting strategy
    if (newStrategy == null)
      newStrategy = new WindowBltBufferStrategy(numBuffers, true);

    bufferStrategy = newStrategy;
  }

  /**
   * Creates a buffering strategy that manages how this window is
   * repainted.  This method attempts to create a strategy based on
   * the specified capabilities and throws an exception if the
   * requested strategy is not supported.
   *
   * Calling this method causes any existing buffer strategy to be
   * destroyed.
   *
   * @param numBuffers the number of buffers in this strategy
   * @param caps the requested buffering capabilities
   *
   * @throws AWTException if the requested capabilities are not
   * supported
   * @throws IllegalArgumentException if requested number of buffers
   * is less than one or if caps is null
   *
   * @since 1.4
   */
  public void createBufferStrategy(int numBuffers, BufferCapabilities caps)
    throws AWTException
  {
    if (numBuffers < 1)
      throw new IllegalArgumentException("Window.createBufferStrategy: number"
					 + " of buffers is less than one");

    if (caps == null)
      throw new IllegalArgumentException("Window.createBufferStrategy:"
					 + " capabilities object is null");

    // a flipping strategy was requested
    if (caps.isPageFlipping())
      bufferStrategy = new WindowFlipBufferStrategy(numBuffers);
    else
      bufferStrategy = new WindowBltBufferStrategy(numBuffers, true);
  }

  /**
   * Returns the buffer strategy used by the window.
   *
   * @return the buffer strategy.
   * @since 1.4
   */
  public BufferStrategy getBufferStrategy()
  {
    return bufferStrategy;
  }

  /**
   * @since 1.2
   *
   * @deprecated replaced by Component.applyComponentOrientation.
   */
  public void applyResourceBundle(ResourceBundle rb)
  {
    applyComponentOrientation(ComponentOrientation.getOrientation(rb));
  }

  /**
   * @since 1.2
   *
   * @deprecated
   */
  public void applyResourceBundle(String rbName)
  {
    ResourceBundle rb = ResourceBundle.getBundle(rbName, Locale.getDefault(),
      ClassLoader.getSystemClassLoader());
    if (rb != null)
      applyResourceBundle(rb);    
  }

  /**
   * Gets the AccessibleContext associated with this <code>Window</code>.
   * The context is created, if necessary.
   *
   * @return the associated context
   */
  public AccessibleContext getAccessibleContext()
  {
    /* Create the context if this is the first request */
    if (accessibleContext == null)
      accessibleContext = new AccessibleAWTWindow();
    return accessibleContext;
  }

  /** 
   * Get graphics configuration.  The implementation for Window will
   * not ask any parent containers, since Window is a toplevel
   * window and not actually embedded in the parent component.
   */
  public GraphicsConfiguration getGraphicsConfiguration()
  {
    if (graphicsConfiguration != null) return graphicsConfiguration;
    if (peer != null) return peer.getGraphicsConfiguration();
    return null;
  }

  protected void processWindowFocusEvent(WindowEvent event)
  {
    if (windowFocusListener != null)
      {
        switch (event.getID ())
          {
          case WindowEvent.WINDOW_GAINED_FOCUS:
            windowFocusListener.windowGainedFocus (event);
            break;
            
          case WindowEvent.WINDOW_LOST_FOCUS:
            windowFocusListener.windowLostFocus (event);
            break;
            
          default:
            break;
          }
      }
  }
  
  /**
   * @since 1.4
   */
  protected void processWindowStateEvent(WindowEvent event)
  {
    if (windowStateListener != null
        && event.getID () == WindowEvent.WINDOW_STATE_CHANGED)
      windowStateListener.windowStateChanged (event);
  }

  /**
   * Returns whether this <code>Window</code> can get the focus or not.
   *
   * @since 1.4
   */
  public final boolean isFocusableWindow ()
  {
    if (getFocusableWindowState () == false)
      return false;

    if (this instanceof Dialog
        || this instanceof Frame)
      return true;

    // FIXME: Implement more possible cases for returning true.

    return false;
  }
  
  /**
   * Returns the value of the focusableWindowState property.
   * 
   * @since 1.4
   */
  public boolean getFocusableWindowState ()
  {
    return focusableWindowState;
  }

  /**
   * Sets the value of the focusableWindowState property.
   * 
   * @since 1.4
   */
  public void setFocusableWindowState (boolean focusableWindowState)
  {
    this.focusableWindowState = focusableWindowState;
  }
  
  /**
   * Check whether this Container is a focus cycle root.
   * Returns always <code>true</code> as Windows are the 
   * root of the focus cycle.
   *
   * @return Always <code>true</code>.
   *
   * @since 1.4
   */
  public final boolean isFocusCycleRoot()
  {
    return true;
  }

  /**
   * Set whether or not this Container is the root of a focus
   * traversal cycle. Windows are the root of the focus cycle
   * and therefore this method does nothing.
   * 
   * @param focusCycleRoot ignored.
   *
   * @since 1.4
   */
  public final void setFocusCycleRoot(boolean focusCycleRoot)
  {
    // calls to the method are ignored
  }

  /**
   * Returns the root container that owns the focus cycle where this
   * component resides. Windows have no ancestors and this method
   * returns always <code>null</code>.
   *
   * @return Always <code>null</code>.
   * @since 1.4
   */
  public final Container getFocusCycleRootAncestor()
  {
    return null;
  }

  /**
   * Returns whether the Windows is an always-on-top window,
   * meaning whether the window can be obscured by other windows or not.
   *
   * @return <code>true</code> if the windows is always-on-top,
   * <code>false</code> otherwise.
   * @since 1.5
   */
  public final boolean isAlwaysOnTop()
  {
    return alwaysOnTop;
  }

  /**
   * Sets the always-on-top state of this window (if supported).
   *
   * Setting a window to always-on-top means it will not be obscured
   * by any other windows (with the exception of other always-on-top 
   * windows). Not all platforms may support this.
   *
   * If an window's always-on-top status is changed to false, the window
   * will remain at the front but not be anchored there.
   *
   * Calling toBack() on an always-on-top window will change its
   * always-on-top status to false.
   *
   * @since 1.5
   */
  public final void setAlwaysOnTop(boolean alwaysOnTop)
  {
    SecurityManager sm = System.getSecurityManager();
    if (sm != null)
      sm.checkPermission( new AWTPermission("setWindowAlwaysOnTop") );

    if( this.alwaysOnTop == alwaysOnTop )
      return;
    
    if( alwaysOnTop )
      toFront();

    firePropertyChange("alwaysOnTop", this.alwaysOnTop, alwaysOnTop );
    this.alwaysOnTop = alwaysOnTop;

    if (peer != null) 
      ( (WindowPeer) peer).updateAlwaysOnTop();
    else
      System.out.println("Null peer?!");
  }

  /**
   * Generate a unique name for this window.
   *
   * @return A unique name for this window.
   */
  String generateName()
  {
    return "win" + getUniqueLong();
  }

  /**
   * Overridden to handle WindowEvents.
   *
   * @return <code>true</code> when the specified event type is enabled,
   *         <code>false</code> otherwise
   */
  boolean eventTypeEnabled(int type)
  {
    boolean enabled = false;
    switch (type)
      {
        case WindowEvent.WINDOW_OPENED:
        case WindowEvent.WINDOW_CLOSED:
        case WindowEvent.WINDOW_CLOSING:
        case WindowEvent.WINDOW_ICONIFIED:
        case WindowEvent.WINDOW_DEICONIFIED:
        case WindowEvent.WINDOW_ACTIVATED:
        case WindowEvent.WINDOW_DEACTIVATED:
          enabled = ((eventMask & AWTEvent.WINDOW_EVENT_MASK) != 0)
                    || windowListener != null;
          break;
        case WindowEvent.WINDOW_GAINED_FOCUS:
        case WindowEvent.WINDOW_LOST_FOCUS:
          enabled = ((eventMask & AWTEvent.WINDOW_FOCUS_EVENT_MASK) != 0)
                    || windowFocusListener != null;
          break;
        case WindowEvent.WINDOW_STATE_CHANGED:
          enabled = ((eventMask & AWTEvent.WINDOW_STATE_EVENT_MASK) != 0)
                    || windowStateListener != null;
          break;
        default:
          enabled = super.eventTypeEnabled(type);
      }
    return enabled;
  }

  private static synchronized long getUniqueLong()
  {
    return next_window_number++;
  }
}
