/*
 * This file is modified by Ivan Maidanski <ivmai@ivmaisoft.com>
 * Project name: JCGO-SUNAWT (http://www.ivmaisoft.com/jcgo/)
 */

/*
 * @(#)NullSurfaceData.java     1.3 03/01/23
 *
 * Copyright 2003 Sun Microsystems, Inc. All rights reserved.
 * SUN PROPRIETARY/CONFIDENTIAL. Use is subject to license terms.
 */

package sun.java2d;

import java.awt.Rectangle;
import java.awt.image.Raster;
import java.awt.image.ColorModel;
import java.awt.GraphicsConfiguration;
import sun.java2d.loops.SurfaceType;
import sun.java2d.pipe.NullPipe;

/**
 * This class provides an empty implementation of the SurfaceData
 * abstract superclass.  All operations on it translate into NOP
 * or harmless operations.
 */
public class NullSurfaceData extends SurfaceData {
    public static final SurfaceData theInstance = new NullSurfaceData();

    private NullSurfaceData() {
        super(SurfaceType.Any, ColorModel.getRGBdefault());
    }

    /**
     * Sets this SurfaceData object to the invalid state.  All Graphics
     * objects must get a new SurfaceData object via the refresh method
     * and revalidate their pipelines before continuing.
     */
    public void invalidate() {
    }

    /**
     * Return a new SurfaceData object that represents the current state
     * of the destination that this SurfaceData object describes.
     * This method is typically called when the SurfaceData is invalidated.
     */
    public SurfaceData getReplacement() {
        return this;
    }

    private final static NullPipe nullpipe = new NullPipe();

    public void validatePipe(SunGraphics2D sg2d) {
        sg2d.drawpipe = nullpipe;
        sg2d.fillpipe = nullpipe;
        sg2d.shapepipe = nullpipe;
        sg2d.textpipe = nullpipe;
        sg2d.imagepipe = nullpipe;
    }

    public void lock() throws InvalidPipeException {
    }

    public void unlock() {
    }

    public GraphicsConfiguration getDeviceConfiguration() {
        return null;
    }

    /**
     * Return a readable Raster which contains the pixels for the
     * specified rectangular region of the destination surface.
     * The coordinate origin of the returned Raster is the same as
     * the device space origin of the destination surface.
     * In some cases the returned Raster might also be writeable.
     * In most cases, the returned Raster might contain more pixels
     * than requested.
     *
     * @see useTightBBoxes
     */
    public Raster getRaster(int x, int y, int w, int h) {
        throw new NullPointerException("NullSD does not handle this operation");
    }

    /**
     * Does the pixel accessibility of the destination surface
     * suggest that rendering algorithms might want to take
     * extra time to calculate a more accurate bounding box for
     * the operation being performed?
     * The typical case when this will be true is when a copy of
     * the pixels has to be made when doing a getRaster.  The
     * fewer pixels copied, the faster the operation will go.
     *
     * @see getRaster
     */
    public boolean useTightBBoxes() {
        return false;
    }

    /**
     * Returns the pixel data for the specified Argb value packed
     * into an integer for easy storage and conveyance.
     */
    public int pixelFor(int rgb) {
        return rgb;
    }

    /**
     * Returns the Argb representation for the specified integer value
     * which is packed in the format of the associated ColorModel.
     */
    public int rgbFor(int pixel) {
        return pixel;
    }

    /**
     * Returns the bounds of the destination surface.
     */
    public Rectangle getBounds() {
        return new Rectangle();
    }

    /**
     * Performs Security Permissions checks to see if a Custom
     * Composite object should be allowed access to the pixels
     * of this surface.
     */
    protected void checkCustomComposite() {
        return;
    }

    /**
     * Performs a copyarea within this surface.  Returns
     * false if there is no algorithm to perform the copyarea
     * given the current settings of the SunGraphics2D.
     */
    public boolean copyArea(SunGraphics2D sg2d,
                            int x, int y, int w, int h, int dx, int dy)
    {
        return true;
    }
}
