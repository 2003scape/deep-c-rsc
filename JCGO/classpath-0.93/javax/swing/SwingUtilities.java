/* SwingUtilities.java --
   Copyright (C) 2002, 2004, 2005, 2006,  Free Software Foundation, Inc.

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


package javax.swing;

import java.applet.Applet;
import java.awt.Component;
import java.awt.Container;
import java.awt.FontMetrics;
import java.awt.Frame;
import java.awt.Graphics;
import java.awt.Insets;
import java.awt.KeyboardFocusManager;
import java.awt.Point;
import java.awt.Rectangle;
import java.awt.Shape;
import java.awt.Window;
import java.awt.event.ActionEvent;
import java.awt.event.InputEvent;
import java.awt.event.KeyEvent;
import java.awt.event.MouseEvent;
import java.lang.reflect.InvocationTargetException;

import javax.accessibility.Accessible;
import javax.accessibility.AccessibleStateSet;
import javax.swing.plaf.ActionMapUIResource;
import javax.swing.plaf.InputMapUIResource;
import javax.swing.plaf.basic.BasicHTML;
import javax.swing.text.View;

/**
 * A number of static utility functions which are
 * useful when drawing swing components, dispatching events, or calculating
 * regions which need painting.
 *
 * @author Graydon Hoare (graydon@redhat.com)
 * @author Andrew John Hughes (gnu_andrew@member.fsf.org)
 */
public class SwingUtilities
  implements SwingConstants
{
  /** 
   * This frame should be used as parent for JWindow or JDialog 
   * that doesn't an owner
   */
  private static OwnerFrame ownerFrame;

  private SwingUtilities()
  {
    // Do nothing.
  }

  /**
   * Calculates the portion of the component's bounds which is inside the
   * component's border insets. This area is usually the area a component
   * should confine its painting to. The coordinates are returned in terms
   * of the <em>component's</em> coordinate system, where (0,0) is the
   * upper left corner of the component's bounds.
   *
   * @param c  the component to measure the bounds of (if <code>null</code>, 
   *     this method returns <code>null</code>).
   * @param r  a carrier to store the return value in (if <code>null</code>, a
   *     new <code>Rectangle</code> instance is created).
   *
   * @return The calculated area inside the component and its border insets.
   */
  public static Rectangle calculateInnerArea(JComponent c, Rectangle r)
  {
    if (c == null)
      return null;
    r = c.getBounds(r);
    Insets i = c.getInsets();
    r.x = i.left;
    r.width = r.width - i.left - i.right;
    r.y = i.top;
    r.height = r.height - i.top - i.bottom;
    return r;
  }

  /**
   * Returns the focus owner or <code>null</code> if <code>comp</code> is not
   * the focus owner or a parent of it.
   * 
   * @param comp the focus owner or a parent of it
   * 
   * @return the focus owner, or <code>null</code>
   * 
   * @deprecated 1.4 Replaced by
   * <code>KeyboardFocusManager.getFocusOwner()</code>.
   */
  public static Component findFocusOwner(Component comp)
  {
    // Get real focus owner.
    Component focusOwner = KeyboardFocusManager.getCurrentKeyboardFocusManager()
					       .getFocusOwner();

    // Check if comp is the focus owner or a parent of it.
    Component tmp = focusOwner;
    
    while (tmp != null)
      {
	if (tmp == comp)
	  return focusOwner;

	tmp = tmp.getParent();
      }
    
    return null;
  }
  
  /**
   * Returns the <code>Accessible</code> child of the specified component
   * which appears at the supplied <code>Point</code>.  If there is no
   * child located at that particular pair of co-ordinates, null is returned
   * instead.
   *
   * @param c the component whose children may be found at the specified
   *          point.
   * @param p the point at which to look for the existence of children
   *          of the specified component.
   * @return the <code>Accessible</code> child at the point, <code>p</code>,
   *         or null if there is no child at this point.
   * @see javax.accessibility.AccessibleComponent#getAccessibleAt
   */
  public static Accessible getAccessibleAt(Component c, Point p)
  {
    return c.getAccessibleContext().getAccessibleComponent().getAccessibleAt(p);
  }

  /**
   * <p>
   * Returns the <code>Accessible</code> child of the specified component
   * that has the supplied index within the parent component.  The indexing
   * of the children is zero-based, making the first child have an index of
   * 0.
   * </p>
   * <p>
   * Caution is advised when using this method, as its operation relies
   * on the behaviour of varying implementations of an abstract method.
   * For greater surety, direct use of the AWT component implementation
   * of this method is advised.
   * </p>
   *
   * @param c the component whose child should be returned.
   * @param i the index of the child within the parent component.
   * @return the <code>Accessible</code> child at index <code>i</code>
   *         in the component, <code>c</code>.
   * @see javax.accessibility.AccessibleContext#getAccessibleChild
   * @see java.awt.Component.AccessibleAWTComponent#getAccessibleChild
   */
  public static Accessible getAccessibleChild(Component c, int i)
  {
    return c.getAccessibleContext().getAccessibleChild(i);
  }

  /**
   * <p>
   * Returns the number of <code>Accessible</code> children within
   * the supplied component.
   * </p>
   * <p>
   * Caution is advised when using this method, as its operation relies
   * on the behaviour of varying implementations of an abstract method.
   * For greater surety, direct use of the AWT component implementation
   * of this method is advised.
   * </p>
   *
   * @param c the component whose children should be counted.
   * @return the number of children belonging to the component,
   *         <code>c</code>.
   * @see javax.accessibility.AccessibleContext#getAccessibleChildrenCount
   * @see java.awt.Component.AccessibleAWTComponent#getAccessibleChildrenCount
   */
  public static int getAccessibleChildrenCount(Component c)
  {
    return c.getAccessibleContext().getAccessibleChildrenCount();
  }

  /**
   * <p>
   * Returns the zero-based index of the specified component
   * within its parent.  If the component doesn't have a parent,
   * -1 is returned.
   * </p>
   * <p>
   * Caution is advised when using this method, as its operation relies
   * on the behaviour of varying implementations of an abstract method.
   * For greater surety, direct use of the AWT component implementation
   * of this method is advised.
   * </p>
   *
   * @param c the component whose parental index should be found.
   * @return the index of the component within its parent, or -1
   *         if the component doesn't have a parent.
   * @see javax.accessibility.AccessibleContext#getAccessibleIndexInParent
   * @see java.awt.Component.AccessibleAWTComponent#getAccessibleIndexInParent
   */
  public static int getAccessibleIndexInParent(Component c)
  {
    return c.getAccessibleContext().getAccessibleIndexInParent();
  }

  /**
   * <p>
   * Returns a set of <code>AccessibleState</code>s, which represent
   * the state of the supplied component.
   * </p>
   * <p>
   * Caution is advised when using this method, as its operation relies
   * on the behaviour of varying implementations of an abstract method.
   * For greater surety, direct use of the AWT component implementation
   * of this method is advised.
   * </p>
   *
   * @param c the component whose accessible state should be retrieved.
   * @return a set of <code>AccessibleState</code> objects, which represent
   *         the state of the supplied component.
   * @see javax.accessibility.AccessibleContext#getAccessibleStateSet
   * @see java.awt.Component.AccessibleAWTComponent#getAccessibleStateSet
   */
  public static AccessibleStateSet getAccessibleStateSet(Component c)
  {
    return c.getAccessibleContext().getAccessibleStateSet();
  }

  /**
   * Calculates the bounds of a component in the component's own coordinate
   * space. The result has the same height and width as the component's
   * bounds, but its location is set to (0,0).
   *
   * @param aComponent The component to measure
   *
   * @return The component's bounds in its local coordinate space
   */
  public static Rectangle getLocalBounds(Component aComponent)
  {
    Rectangle bounds = aComponent.getBounds();
    return new Rectangle(0, 0, bounds.width, bounds.height);
  }

  /**
   * If <code>comp</code> is a RootPaneContainer, return its JRootPane.
   * Otherwise call <code>getAncestorOfClass(JRootPane.class, a)</code>.
   *
   * @param comp The component to get the JRootPane of
   *
   * @return a suitable JRootPane for <code>comp</code>, or <code>null</code>
   * 
   * @see javax.swing.RootPaneContainer#getRootPane
   * @see #getAncestorOfClass
   */
  public static JRootPane getRootPane(Component comp)
  {
    if (comp instanceof RootPaneContainer)
      return ((RootPaneContainer)comp).getRootPane();
    else
      return (JRootPane) getAncestorOfClass(JRootPane.class, comp);
  }

  /**
   * Returns the least ancestor of <code>comp</code> which has the
   * specified name.
   *
   * @param name The name to search for
   * @param comp The component to search the ancestors of
   *
   * @return The nearest ancestor of <code>comp</code> with the given
   * name, or <code>null</code> if no such ancestor exists
   *
   * @see java.awt.Component#getName
   * @see #getAncestorOfClass
   */
  public static Container getAncestorNamed(String name, Component comp)
  {
    while (comp != null && (comp.getName() != name))
      comp = comp.getParent();
    return (Container) comp;
  }

  /**
   * Returns the least ancestor of <code>comp</code> which is an instance
   * of the specified class.
   *
   * @param c The class to search for
   * @param comp The component to search the ancestors of
   *
   * @return The nearest ancestor of <code>comp</code> which is an instance
   * of the given class, or <code>null</code> if no such ancestor exists
   *
   * @see #getAncestorOfClass
   * @see #windowForComponent
   */
  public static Container getAncestorOfClass(Class c, Component comp)
  {
    while (comp != null && (! c.isInstance(comp)))
      comp = comp.getParent();
    return (Container) comp;
  }

  /**
   * Returns the first ancestor of <code>comp</code> that is a {@link Window}
   * or <code>null</code> if <code>comp</code> is not contained in a
   * {@link Window}.
   *
   * This is equivalent to calling
   * <code>getAncestorOfClass(Window, comp)</code> or
   * <code>windowForComponent(comp)</code>.
   *
   * @param comp the component for which we are searching the ancestor Window
   *
   * @return the first ancestor Window of <code>comp</code> or
   *     <code>null</code> if <code>comp</code> is not contained in a Window
   */
  public static Window getWindowAncestor(Component comp)
  {
    return (Window) getAncestorOfClass(Window.class, comp);
  }

  /**
   * Equivalent to calling <code>getAncestorOfClass(Window, comp)</code>.
   *
   * @param comp The component to search for an ancestor window 
   *
   * @return An ancestral window, or <code>null</code> if none exists
   */
  public static Window windowForComponent(Component comp)
  {
    return (Window) getAncestorOfClass(Window.class, comp);
  }

  /**
   * Returns the "root" of the component tree containint <code>comp</code>
   * The root is defined as either the <em>least</em> ancestor of
   * <code>comp</code> which is a {@link Window}, or the <em>greatest</em>
   * ancestor of <code>comp</code> which is a {@link Applet} if no {@link
   * Window} ancestors are found.
   *
   * @param comp The component to search for a root
   *
   * @return The root of the component's tree, or <code>null</code>
   */
  public static Component getRoot(Component comp)
  {
    Applet app = null;
    Window win = null;

    while (comp != null)
      {
        if (win == null && comp instanceof Window)
          win = (Window) comp;
        else if (comp instanceof Applet)
          app = (Applet) comp;
        comp = comp.getParent();
      }
    
    if (win != null)
      return win;
    return app;
  }

  /**
   * Return true if a descends from b, in other words if b is an ancestor of a.
   * 
   * @param a The child to search the ancestry of
   * @param b The potential ancestor to search for
   * @return true if a is a descendent of b, false otherwise
   */
  public static boolean isDescendingFrom(Component a, Component b)
  {
    while (true)
      {
        if (a == null || b == null)
          return false;
        if (a == b)
          return true;
        a = a.getParent();
      }
  }

  /**
   * Returns the deepest descendent of parent which is both visible and
   * contains the point <code>(x,y)</code>. Returns parent when either
   * parent is not a container, or has no children which contain
   * <code>(x,y)</code>. Returns <code>null</code> when either
   * <code>(x,y)</code> is outside the bounds of parent, or parent is
   * <code>null</code>.
   * 
   * @param parent The component to search the descendents of
   * @param x Horizontal coordinate to search for
   * @param y Vertical coordinate to search for
   *
   * @return A component containing <code>(x,y)</code>, or
   * <code>null</code>
   *
   * @see java.awt.Container#findComponentAt(int, int)
   */
  public static Component getDeepestComponentAt(Component parent, int x, int y)
  {
    if (parent == null || (! parent.contains(x, y)))
      return null;

    if (! (parent instanceof Container))
      return parent;

    Container c = (Container) parent;
    return c.findComponentAt(x, y);
  }

  /**
   * Converts a point from a component's local coordinate space to "screen"
   * coordinates (such as the coordinate space mouse events are delivered
   * in). This operation is equivalent to translating the point by the
   * location of the component (which is the origin of its coordinate
   * space).
   *
   * @param p The point to convert
   * @param c The component which the point is expressed in terms of
   *
   * @see #convertPointFromScreen
   */
  public static void convertPointToScreen(Point p, Component c)
  {
    Point c0 = c.getLocationOnScreen();
    p.translate(c0.x, c0.y);
  }

  /**
   * Converts a point from "screen" coordinates (such as the coordinate
   * space mouse events are delivered in) to a component's local coordinate
   * space. This operation is equivalent to translating the point by the
   * negation of the component's location (which is the origin of its
   * coordinate space).
   *
   * @param p The point to convert
   * @param c The component which the point should be expressed in terms of
   */
  public static void convertPointFromScreen(Point p, Component c)
  {
    Point c0 = c.getLocationOnScreen();
    p.translate(-c0.x, -c0.y);
  }

  /**
   * Converts a point <code>(x,y)</code> from the coordinate space of one
   * component to another. This is equivalent to converting the point from
   * <code>source</code> space to screen space, then back from screen space
   * to <code>destination</code> space. If exactly one of the two
   * Components is <code>null</code>, it is taken to refer to the root
   * ancestor of the other component. If both are <code>null</code>, no
   * transformation is done.
   *
   * @param source The component which the point is expressed in terms of
   * @param x Horizontal coordinate of point to transform
   * @param y Vertical coordinate of point to transform
   * @param destination The component which the return value will be
   * expressed in terms of
   *
   * @return The point <code>(x,y)</code> converted from the coordinate space of the
   * source component to the coordinate space of the destination component
   *
   * @see #convertPointToScreen
   * @see #convertPointFromScreen
   * @see #convertRectangle
   * @see #getRoot
   */
  public static Point convertPoint(Component source, int x, int y,
                                   Component destination)
  {
    Point pt = new Point(x, y);

    if (source == null && destination == null)
      return pt;

    if (source == null)
      source = getRoot(destination);

    if (destination == null)
      destination = getRoot(source);

    if (source.isShowing() && destination.isShowing())
      {
        convertPointToScreen(pt, source);
        convertPointFromScreen(pt, destination);
      }

    return pt;
  }
  
  public static Point convertPoint(Component source, Point aPoint, Component destination)
  {
    return convertPoint(source, aPoint.x, aPoint.y, destination);
  }

  /**
   * Converts a rectangle from the coordinate space of one component to
   * another. This is equivalent to converting the rectangle from
   * <code>source</code> space to screen space, then back from screen space
   * to <code>destination</code> space. If exactly one of the two
   * Components is <code>null</code>, it is taken to refer to the root
   * ancestor of the other component. If both are <code>null</code>, no
   * transformation is done.
   *
   * @param source The component which the rectangle is expressed in terms of
   * @param rect The rectangle to convert
   * @param destination The component which the return value will be
   * expressed in terms of
   *
   * @return A new rectangle, equal in size to the input rectangle, but
   * with its position converted from the coordinate space of the source
   * component to the coordinate space of the destination component
   *
   * @see #convertPointToScreen
   * @see #convertPointFromScreen
   * @see #convertPoint(Component, int, int, Component)
   * @see #getRoot
   */
  public static Rectangle convertRectangle(Component source,
                                           Rectangle rect,
                                           Component destination)
  {
    Point pt = convertPoint(source, rect.x, rect.y, destination);
    return new Rectangle(pt.x, pt.y, rect.width, rect.height);
  }

  /**
   * Convert a mouse event which refrers to one component to another.  This
   * includes changing the mouse event's coordinate space, as well as the
   * source property of the event. If <code>source</code> is
   * <code>null</code>, it is taken to refer to <code>destination</code>'s
   * root component. If <code>destination</code> is <code>null</code>, the
   * new event will remain expressed in <code>source</code>'s coordinate
   * system.
   *
   * @param source The component the mouse event currently refers to
   * @param sourceEvent The mouse event to convert
   * @param destination The component the new mouse event should refer to
   *
   * @return A new mouse event expressed in terms of the destination
   * component's coordinate space, and with the destination component as
   * its source
   *
   * @see #convertPoint(Component, int, int, Component)
   */
  public static MouseEvent convertMouseEvent(Component source,
                                             MouseEvent sourceEvent,
                                             Component destination)
  {
    Point newpt = convertPoint(source, sourceEvent.getX(), sourceEvent.getY(),
                               destination);

    return new MouseEvent(destination, sourceEvent.getID(),
                          sourceEvent.getWhen(), sourceEvent.getModifiersEx(),
                          newpt.x, newpt.y, sourceEvent.getClickCount(),
                          sourceEvent.isPopupTrigger(), sourceEvent.getButton());
  }

  /**
   * Recursively walk the component tree under <code>comp</code> calling
   * <code>updateUI</code> on each {@link JComponent} found. This causes
   * the entire tree to re-initialize its UI delegates.
   *
   * @param comp The component to walk the children of, calling <code>updateUI</code>
   */
  public static void updateComponentTreeUI(Component comp)
  {
    updateComponentTreeUIImpl(comp);
    if (comp instanceof JComponent)
      {
        JComponent jc = (JComponent) comp;
        jc.revalidate();
      }
    else
      {
        comp.invalidate();
        comp.validate();
      }
    comp.repaint();
  }

  /**
   * Performs the actual work for {@link #updateComponentTreeUI(Component)}.
   * This calls updateUI() on c if it is a JComponent, and then walks down
   * the component tree and calls this method on each child component.
   *
   * @param c the component to update the UI
   */
  private static void updateComponentTreeUIImpl(Component c)
  {
    if (c instanceof JComponent)
      {
        JComponent jc = (JComponent) c;
        jc.updateUI();
      }

    Component[] components = null;
    if (c instanceof JMenu)
      components = ((JMenu) c).getMenuComponents();
    else if (c instanceof Container)
      components = ((Container) c).getComponents();
    if (components != null)
      {
        for (int i = 0; i < components.length; ++i)
          updateComponentTreeUIImpl(components[i]);
      }
  }

  /**
   * <p>Layout a "compound label" consisting of a text string and an icon
   * which is to be placed near the rendered text. Once the text and icon
   * are laid out, the text rectangle and icon rectangle parameters are
   * altered to store the calculated positions.</p>
   *
   * <p>The size of the text is calculated from the provided font metrics
   * object.  This object should be the metrics of the font you intend to
   * paint the label with.</p>
   *
   * <p>The position values control where the text is placed relative to
   * the icon. The horizontal position value should be one of the constants
   * <code>LEADING</code>, <code>TRAILING</code>, <code>LEFT</code>,
   * <code>RIGHT</code> or <code>CENTER</code>. The vertical position value
   * should be one fo the constants <code>TOP</code>, <code>BOTTOM</code>
   * or <code>CENTER</code>.</p>
   *
   * <p>The text-icon gap value controls the number of pixels between the
   * icon and the text.</p>
   *
   * <p>The alignment values control where the text and icon are placed, as
   * a combined unit, within the view rectangle. The horizontal alignment
   * value should be one of the constants <code>LEADING</code>,
   * <code>TRAILING</code>, <code>LEFT</code>, <code>RIGHT</code> or
   * <code>CENTER</code>. The vertical alignment valus should be one of the
   * constants <code>TOP</code>, <code>BOTTOM</code> or
   * <code>CENTER</code>.</p>
   *
   * <p>If the <code>LEADING</code> or <code>TRAILING</code> constants are
   * given for horizontal alignment or horizontal text position, they are
   * interpreted relative to the provided component's orientation property,
   * a constant in the {@link java.awt.ComponentOrientation} class. For
   * example, if the component's orientation is <code>LEFT_TO_RIGHT</code>,
   * then the <code>LEADING</code> value is a synonym for <code>LEFT</code>
   * and the <code>TRAILING</code> value is a synonym for
   * <code>RIGHT</code></p>
   *
   * <p>If the text and icon are equal to or larger than the view
   * rectangle, the horizontal and vertical alignment values have no
   * affect.</p>
   *
   * @param c A component used for its orientation value
   * @param fm The font metrics used to measure the text
   * @param text The text to place in the compound label
   * @param icon The icon to place next to the text
   * @param verticalAlignment The vertical alignment of the label relative
   * to its component
   * @param horizontalAlignment The horizontal alignment of the label
   * relative to its component
   * @param verticalTextPosition The vertical position of the label's text
   * relative to its icon
   * @param horizontalTextPosition The horizontal position of the label's
   * text relative to its icon
   * @param viewR The view rectangle, specifying the area which layout is
   * constrained to
   * @param iconR A rectangle which is modified to hold the laid-out
   * position of the icon
   * @param textR A rectangle which is modified to hold the laid-out
   * position of the text
   * @param textIconGap The distance between text and icon
   *
   * @return The string of characters, possibly truncated with an elipsis,
   * which is laid out in this label
   */

  public static String layoutCompoundLabel(JComponent c, 
                                           FontMetrics fm,
                                           String text, 
                                           Icon icon, 
                                           int verticalAlignment,
                                           int horizontalAlignment, 
                                           int verticalTextPosition,
                                           int horizontalTextPosition, 
                                           Rectangle viewR,
                                           Rectangle iconR, 
                                           Rectangle textR, 
                                           int textIconGap)
  {

    // Fix up the orientation-based horizontal positions.

    boolean ltr = true;
    if (c != null && ! c.getComponentOrientation().isLeftToRight())
      ltr = false;

    switch (horizontalTextPosition)
      {
      case LEADING:
        horizontalTextPosition = ltr ? LEFT : RIGHT;
        break;
      case TRAILING:
        horizontalTextPosition = ltr ? RIGHT : LEFT;
        break;
      default:
        // Nothing to do in the other cases.
      }

    // Fix up the orientation-based alignments.
    switch (horizontalAlignment)
      {
        case LEADING:
          horizontalAlignment = ltr ? LEFT : RIGHT;
          break;
        case TRAILING:
          horizontalAlignment = ltr ? RIGHT : LEFT;
          break;
        default:
          // Nothing to do in the other cases.
      }

    return layoutCompoundLabelImpl(c, fm, text, icon,
                                   verticalAlignment,
                                   horizontalAlignment,
                                   verticalTextPosition,
                                   horizontalTextPosition,
                                   viewR, iconR, textR, textIconGap);
  }

  /**
   * <p>Layout a "compound label" consisting of a text string and an icon
   * which is to be placed near the rendered text. Once the text and icon
   * are laid out, the text rectangle and icon rectangle parameters are
   * altered to store the calculated positions.</p>
   *
   * <p>The size of the text is calculated from the provided font metrics
   * object.  This object should be the metrics of the font you intend to
   * paint the label with.</p>
   *
   * <p>The position values control where the text is placed relative to
   * the icon. The horizontal position value should be one of the constants
   * <code>LEFT</code>, <code>RIGHT</code> or <code>CENTER</code>. The
   * vertical position value should be one fo the constants
   * <code>TOP</code>, <code>BOTTOM</code> or <code>CENTER</code>.</p>
   *
   * <p>The text-icon gap value controls the number of pixels between the
   * icon and the text.</p>
   *
   * <p>The alignment values control where the text and icon are placed, as
   * a combined unit, within the view rectangle. The horizontal alignment
   * value should be one of the constants <code>LEFT</code>, <code>RIGHT</code> or
   * <code>CENTER</code>. The vertical alignment valus should be one of the
   * constants <code>TOP</code>, <code>BOTTOM</code> or
   * <code>CENTER</code>.</p>
   *
   * <p>If the text and icon are equal to or larger than the view
   * rectangle, the horizontal and vertical alignment values have no
   * affect.</p>
   *
   * <p>Note that this method does <em>not</em> know how to deal with
   * horizontal alignments or positions given as <code>LEADING</code> or
   * <code>TRAILING</code> values. Use the other overloaded variant of this
   * method if you wish to use such values.
   *
   * @param fm The font metrics used to measure the text
   * @param text The text to place in the compound label
   * @param icon The icon to place next to the text
   * @param verticalAlignment The vertical alignment of the label relative
   * to its component
   * @param horizontalAlignment The horizontal alignment of the label
   * relative to its component
   * @param verticalTextPosition The vertical position of the label's text
   * relative to its icon
   * @param horizontalTextPosition The horizontal position of the label's
   * text relative to its icon
   * @param viewR The view rectangle, specifying the area which layout is
   * constrained to
   * @param iconR A rectangle which is modified to hold the laid-out
   * position of the icon
   * @param textR A rectangle which is modified to hold the laid-out
   * position of the text
   * @param textIconGap The distance between text and icon
   *
   * @return The string of characters, possibly truncated with an elipsis,
   * which is laid out in this label
   */

  public static String layoutCompoundLabel(FontMetrics fm,
                                           String text,
                                           Icon icon,
                                           int verticalAlignment,
                                           int horizontalAlignment,
                                           int verticalTextPosition,
                                           int horizontalTextPosition,
                                           Rectangle viewR,
                                           Rectangle iconR,
                                           Rectangle textR,
                                           int textIconGap)
  {
    return layoutCompoundLabelImpl(null, fm, text, icon, verticalAlignment,
                                   horizontalAlignment, verticalTextPosition,
                                   horizontalTextPosition, viewR, iconR, textR,
                                   textIconGap);
  }

  /**
   * <p>Layout a "compound label" consisting of a text string and an icon
   * which is to be placed near the rendered text. Once the text and icon
   * are laid out, the text rectangle and icon rectangle parameters are
   * altered to store the calculated positions.</p>
   *
   * <p>The size of the text is calculated from the provided font metrics
   * object.  This object should be the metrics of the font you intend to
   * paint the label with.</p>
   *
   * <p>The position values control where the text is placed relative to
   * the icon. The horizontal position value should be one of the constants
   * <code>LEFT</code>, <code>RIGHT</code> or <code>CENTER</code>. The
   * vertical position value should be one fo the constants
   * <code>TOP</code>, <code>BOTTOM</code> or <code>CENTER</code>.</p>
   *
   * <p>The text-icon gap value controls the number of pixels between the
   * icon and the text.</p>
   *
   * <p>The alignment values control where the text and icon are placed, as
   * a combined unit, within the view rectangle. The horizontal alignment
   * value should be one of the constants <code>LEFT</code>, <code>RIGHT</code> or
   * <code>CENTER</code>. The vertical alignment valus should be one of the
   * constants <code>TOP</code>, <code>BOTTOM</code> or
   * <code>CENTER</code>.</p>
   *
   * <p>If the text and icon are equal to or larger than the view
   * rectangle, the horizontal and vertical alignment values have no
   * affect.</p>
   *
   * <p>Note that this method does <em>not</em> know how to deal with
   * horizontal alignments or positions given as <code>LEADING</code> or
   * <code>TRAILING</code> values. Use the other overloaded variant of this
   * method if you wish to use such values.
   *
   * @param fm The font metrics used to measure the text
   * @param text The text to place in the compound label
   * @param icon The icon to place next to the text
   * @param verticalAlignment The vertical alignment of the label relative
   * to its component
   * @param horizontalAlignment The horizontal alignment of the label
   * relative to its component
   * @param verticalTextPosition The vertical position of the label's text
   * relative to its icon
   * @param horizontalTextPosition The horizontal position of the label's
   * text relative to its icon
   * @param viewR The view rectangle, specifying the area which layout is
   * constrained to
   * @param iconR A rectangle which is modified to hold the laid-out
   * position of the icon
   * @param textR A rectangle which is modified to hold the laid-out
   * position of the text
   * @param textIconGap The distance between text and icon
   *
   * @return The string of characters, possibly truncated with an elipsis,
   * which is laid out in this label
   */
  private static String layoutCompoundLabelImpl(JComponent c,
                                                FontMetrics fm,
                                                String text,
                                                Icon icon,
                                                int verticalAlignment,
                                                int horizontalAlignment,
                                                int verticalTextPosition,
                                                int horizontalTextPosition,
                                                Rectangle viewR,
                                                Rectangle iconR,
                                                Rectangle textR,
                                                int textIconGap)
  {

    // Work out basic height and width.

    if (icon == null)
      {
        textIconGap = 0;
        iconR.width = 0;
        iconR.height = 0;
      }
    else
      {
        iconR.width = icon.getIconWidth();
        iconR.height = icon.getIconHeight();
      }

    if (text == null || text.equals(""))
      {
        textIconGap = 0;
	textR.width = 0;
	textR.height = 0;
        text = "";
      }
    else
      {
        int availableWidth = viewR.width;
        if (horizontalTextPosition != CENTER)
          availableWidth -= iconR.width + textIconGap;
        View html = c == null ? null
                           : (View) c.getClientProperty(BasicHTML.propertyKey);
        if (html != null)
          {
            textR.width = (int) html.getPreferredSpan(View.X_AXIS);
            textR.width = Math.min(availableWidth, textR.width);
            textR.height = (int) html.getPreferredSpan(View.Y_AXIS);
          }
        else
          {
            int fromIndex = 0;
            textR.width = fm.stringWidth(text);
            textR.height = fm.getHeight();
            if (textR.width > availableWidth)
              {
                text = clipString(c, fm, text, availableWidth);
                textR.width = fm.stringWidth(text);
              }
          }
      }

    // Work out the position of text, assuming the top-left coord
    // starts at (0,0). We will fix that up momentarily, after these
    // "position" decisions are made and we look at alignment.

    switch (verticalTextPosition)
      {
      case TOP:
        textR.y = horizontalTextPosition == CENTER ?
                  - textR.height - textIconGap : 0;
        break;
      case BOTTOM:
        textR.y = horizontalTextPosition == CENTER ?
                  iconR.height + textIconGap : iconR.height - textR.height;
        break;
      case CENTER:
        textR.y = iconR.height / 2 - textR.height / 2;
        break;
      }

    switch (horizontalTextPosition)
      {
      case LEFT:
        textR.x = -(textR.width + textIconGap);
        break;
      case RIGHT:
        textR.x = iconR.width + textIconGap;
        break;
      case CENTER:
        textR.x = iconR.width / 2 - textR.width / 2;
        break;
      }

    // The two rectangles are laid out correctly now, but only assuming
    // that their upper left corner is at (0,0). If we have any alignment other
    // than TOP and LEFT, we need to adjust them.

    // These coordinates specify the rectangle that contains both the
    // icon and text. Move it so that it fullfills the alignment properties.
    int lx = Math.min(iconR.x, textR.x);
    int lw = Math.max(iconR.x + iconR.width, textR.x + textR.width) - lx;
    int ly = Math.min(iconR.y, textR.y);
    int lh = Math.max(iconR.y + iconR.height, textR.y + textR.height) - ly;
    int horizontalAdjustment = 0;
    int verticalAdjustment = 0;
    switch (verticalAlignment)
      {
      case TOP:
        verticalAdjustment = viewR.y - ly;
        break;
      case BOTTOM:
        verticalAdjustment = viewR.y + viewR.height - ly - lh;
        break;
      case CENTER:
        verticalAdjustment = viewR.y + viewR.height / 2 - ly  - lh / 2;
        break;
      }
    switch (horizontalAlignment)
      {
      case LEFT:
        horizontalAdjustment = viewR.x - lx;
        break;
      case RIGHT:
        horizontalAdjustment = viewR.x + viewR.width - lx - lw;
        break;
      case CENTER:
        horizontalAdjustment = (viewR.x + (viewR.width / 2)) - (lx + (lw / 2));
        break;
      }
    iconR.x += horizontalAdjustment;
    iconR.y += verticalAdjustment;

    textR.x += horizontalAdjustment;
    textR.y += verticalAdjustment;

    return text;
  }

  /**
   * The method clips the specified string so that it fits into the
   * available width. It is only called when the text really doesn't fit,
   * so we don't need to check that again.
   *
   * @param c the component
   * @param fm the font metrics
   * @param text the text
   * @param availableWidth the available width
   *
   * @return the clipped string
   */
  private static String clipString(JComponent c, FontMetrics fm, String text,
                                   int availableWidth)
  {
    String dots = "...";
    int dotsWidth = fm.stringWidth(dots);
    char[] string = text.toCharArray();
    int endIndex = string.length;
    while (fm.charsWidth(string, 0, endIndex) + dotsWidth > availableWidth
           && endIndex > 0)
      endIndex--;
    String clipped;
    if (string.length >= endIndex + 3)
      {
        string[endIndex] = '.';
        string[endIndex + 1] = '.';
        string[endIndex + 2] = '.';
        clipped = new String(string, 0, endIndex + 3);
      }
    else
      {
        char[] clippedChars = new char[string.length + 3];
        System.arraycopy(string, 0, clippedChars, 0, string.length);
        clippedChars[endIndex] = '.';
        clippedChars[endIndex + 1] = '.';
        clippedChars[endIndex + 2] = '.';
        clipped = new String(clippedChars, 0, endIndex + 3);
      }
    return clipped;
  }

  /** 
   * Calls {@link java.awt.EventQueue#invokeLater} with the
   * specified {@link Runnable}. 
   */
  public static void invokeLater(Runnable doRun)
  {
    java.awt.EventQueue.invokeLater(doRun);
  }

  /** 
   * Calls {@link java.awt.EventQueue#invokeAndWait} with the
   * specified {@link Runnable}. 
   */
  public static void invokeAndWait(Runnable doRun)
    throws InterruptedException,
    InvocationTargetException
  {
    java.awt.EventQueue.invokeAndWait(doRun);
  }

  /** 
   * Calls {@link java.awt.EventQueue#isDispatchThread()}.
   * 
   * @return <code>true</code> if the current thread is the current AWT event 
   * dispatch thread.
   */
  public static boolean isEventDispatchThread()
  {
    return java.awt.EventQueue.isDispatchThread();
  }
  
  /**
   * This method paints the given component at the given position and size.
   * The component will be reparented to the container given.
   * 
   * @param g The Graphics object to draw with.
   * @param c The Component to draw
   * @param p The Container to reparent to.
   * @param x The x coordinate to draw at.
   * @param y The y coordinate to draw at.
   * @param w The width of the drawing area.
   * @param h The height of the drawing area.
   */
  public static void paintComponent(Graphics g, Component c, Container p, 
                                    int x, int y, int w, int h)
  {       
    Container parent = c.getParent();
    if (parent != null)
      parent.remove(c);
    if (p != null)
      p.add(c);
    
    Shape savedClip = g.getClip();
    
    g.setClip(x, y, w, h);
    g.translate(x, y);

    c.paint(g);
    
    g.translate(-x, -y);
    g.setClip(savedClip);
  }

  /**
   * This method paints the given component in the given rectangle.
   * The component will be reparented to the container given.
   * 
   * @param g The Graphics object to draw with.
   * @param c The Component to draw
   * @param p The Container to reparent to.
   * @param r The rectangle that describes the drawing area.
   */  
  public static void paintComponent(Graphics g, Component c, 
                                    Container p, Rectangle r)
  {
    paintComponent(g, c, p, r.x, r.y, r.width, r.height);
  }
  
  /**
   * This method returns the common Frame owner used in JDialogs or
   * JWindow when no owner is provided.
   *
   * @return The common Frame 
   */
  static Window getOwnerFrame(Window owner)
  {
    Window result = owner;
    if (result == null)
      {
        if (ownerFrame == null)
          ownerFrame = new OwnerFrame();
        result = ownerFrame;
      }
    return result;
  }

  /**
   * Checks if left mouse button was clicked.
   *
   * @param event the event to check
   *
   * @return true if left mouse was clicked, false otherwise.
   */
  public static boolean isLeftMouseButton(MouseEvent event)
  {
    return ((event.getModifiers() & InputEvent.BUTTON1_MASK) != 0);
  }

  /**
   * Checks if middle mouse button was clicked.
   *
   * @param event the event to check
   *
   * @return true if middle mouse was clicked, false otherwise.
   */
  public static boolean isMiddleMouseButton(MouseEvent event)
  {
    return ((event.getModifiersEx() & InputEvent.BUTTON2_DOWN_MASK)
	     == InputEvent.BUTTON2_DOWN_MASK);
  }

  /**
   * Checks if right mouse button was clicked.
   *
   * @param event the event to check
   *
   * @return true if right mouse was clicked, false otherwise.
   */
  public static boolean isRightMouseButton(MouseEvent event)
  {
    return ((event.getModifiersEx() & InputEvent.BUTTON3_DOWN_MASK)
	     == InputEvent.BUTTON3_DOWN_MASK);
  }
  
  /**
   * This frame should be used when constructing a Window/JDialog without
   * a parent. In this case, we are forced to use this frame as a window's
   * parent, because we simply cannot pass null instead of parent to Window
   * constructor, since doing it will result in NullPointerException.
   */
  private static class OwnerFrame extends Frame
  {
    public void setVisible(boolean b)
    {
      // Do nothing here. 
    }
    
    public boolean isShowing()
    {
      return true;
    }
  }

  public static boolean notifyAction(Action action,
                                     KeyStroke ks,
                                     KeyEvent event,
                                     Object sender,
                                     int modifiers)
  {
    if (action != null && action.isEnabled())
      {
        String name = (String) action.getValue(Action.ACTION_COMMAND_KEY);
        if (name == null
            && event.getKeyChar() != KeyEvent.CHAR_UNDEFINED)
          name = new String(new char[] {event.getKeyChar()});
        action.actionPerformed(new ActionEvent(sender,
                                               ActionEvent.ACTION_PERFORMED,
                                               name, modifiers));
        return true;
      }
    return false;
  }

  /**
   * <p>Change the shared, UI-managed {@link ActionMap} for a given
   * component. ActionMaps are arranged in a hierarchy, in order to
   * encourage sharing of common actions between components. The hierarchy
   * unfortunately places UI-managed ActionMaps at the <em>end</em> of the
   * parent-pointer chain, as illustrated:</p>
   *
   * <pre>
   *  [{@link javax.swing.JComponent#getActionMap()}] 
   *          --&gt; [{@link javax.swing.ActionMap}] 
   *     parent --&gt; [{@link javax.swing.text.JTextComponent.KeymapActionMap}] 
   *       parent --&gt; [{@link javax.swing.plaf.ActionMapUIResource}]
   * </pre>
   *
   * <p>Our goal with this method is to replace the first ActionMap along
   * this chain which is an instance of {@link ActionMapUIResource}, since
   * these are the ActionMaps which are supposed to be shared between
   * components.</p>
   *
   * <p>If the provided ActionMap is <code>null</code>, we interpret the
   * call as a request to remove the UI-managed ActionMap from the
   * component's ActionMap parent chain.</p>
   */
  public static void replaceUIActionMap(JComponent component, 
                                        ActionMap uiActionMap)
  {
    ActionMap child = component.getActionMap();
    if (child == null)
      component.setActionMap(uiActionMap);
    else
      {
        ActionMap parent = child.getParent();
        while (parent != null && !(parent instanceof ActionMapUIResource))
          {
            child = parent;
            parent = child.getParent();
          }
        // Sanity check to avoid loops.
        if (child != uiActionMap)
          child.setParent(uiActionMap);
      }
  }

  /**
   * <p>Change the shared, UI-managed {@link InputMap} for a given
   * component. InputMaps are arranged in a hierarchy, in order to
   * encourage sharing of common input mappings between components. The
   * hierarchy unfortunately places UI-managed InputMaps at the
   * <em>end</em> of the parent-pointer chain, as illustrated:</p>
   *
   * <pre>
   *  [{@link javax.swing.JComponent#getInputMap()}] 
   *          --&gt; [{@link javax.swing.InputMap}] 
   *     parent --&gt; [{@link javax.swing.text.JTextComponent.KeymapWrapper}] 
   *       parent --&gt; [{@link javax.swing.plaf.InputMapUIResource}]
   * </pre>
   *
   * <p>Our goal with this method is to replace the first InputMap along
   * this chain which is an instance of {@link InputMapUIResource}, since
   * these are the InputMaps which are supposed to be shared between
   * components.</p>
   *
   * <p>If the provided InputMap is <code>null</code>, we interpret the
   * call as a request to remove the UI-managed InputMap from the
   * component's InputMap parent chain.</p>
   */
  public static void replaceUIInputMap(JComponent component, 
                                       int condition, 
                                       InputMap uiInputMap)
  {
    InputMap child = component.getInputMap(condition);
    if (child == null)
      component.setInputMap(condition, uiInputMap);
    else
      {
        InputMap parent = child.getParent();
        while (parent != null && !(parent instanceof InputMapUIResource))
          {
            child = parent;
            parent = parent.getParent();
          }
        // Sanity check to avoid loops.
        if (child != uiInputMap)
          child.setParent(uiInputMap);
      }
  }

  /**
   * Subtracts a rectangle from another and return the area as an array
   * of rectangles.
   * Returns the areas of rectA which are not covered by rectB.
   * If the rectangles do not overlap, or if either parameter is
   * <code>null</code>, a zero-size array is returned.
   * @param rectA The first rectangle
   * @param rectB The rectangle to subtract from the first
   * @return An array of rectangles representing the area in rectA
   * not overlapped by rectB
   */
  public static Rectangle[] computeDifference(Rectangle rectA, Rectangle rectB)
  {
    if (rectA == null || rectB == null)
      return new Rectangle[0];

    Rectangle[] r = new Rectangle[4];
    int x1 = rectA.x;
    int y1 = rectA.y;
    int w1 = rectA.width;
    int h1 = rectA.height;
    int x2 = rectB.x;
    int y2 = rectB.y;
    int w2 = rectB.width;
    int h2 = rectB.height;

    // (outer box = rectA)
    // ------------- 
    // |_____0_____|
    // |  |rectB|  |
    // |_1|_____|_2|
    // |     3     |
    // -------------
    int H0 = (y2 > y1) ? y2 - y1 : 0; // height of box 0
    int H3 = (y2 + h2 < y1 + h1) ? y1 + h1 - y2 - h2 : 0; // height box 3
    int W1 = (x2 > x1) ? x2 - x1 : 0; // width box 1
    int W2 = (x1 + w1 > x2 + w2) ? x1 + w1 - x2 - w2 : 0; // w. box 2
    int H12 = (H0 + H3 < h1) ? h1 - H0 - H3 : 0; // height box 1 & 2

    if (H0 > 0)
      r[0] = new Rectangle(x1, y1, w1, H0);
    else
      r[0] = null;

    if (W1 > 0 && H12 > 0)
      r[1] = new Rectangle(x1, y1 + H0, W1, H12);
    else
      r[1] = null;

    if (W2 > 0 && H12 > 0)
      r[2] = new Rectangle(x2 + w2, y1 + H0, W2, H12);
    else
      r[2] = null;

    if (H3 > 0)
      r[3] = new Rectangle(x1, y1 + H0 + H12, w1, H3);
    else
      r[3] = null;

    // sort out null objects
    int n = 0;
    for (int i = 0; i < 4; i++)
      if (r[i] != null)
	n++;
    Rectangle[] out = new Rectangle[n];
    for (int i = 3; i >= 0; i--)
      if (r[i] != null)
	out[--n] = r[i];

    return out;
  }

  /**
   * Calculates the intersection of two rectangles. The result is stored
   * in <code>rect</code>. This is basically the same
   * like {@link Rectangle#intersection(Rectangle)}, only that it does not
   * create new Rectangle instances. The tradeoff is that you loose any data in
   * <code>rect</code>.
   *
   * @param x upper-left x coodinate of first rectangle
   * @param y upper-left y coodinate of first rectangle
   * @param w width of first rectangle
   * @param h height of first rectangle
   * @param rect a Rectangle object of the second rectangle
   *
   * @throws NullPointerException if rect is null
   *
   * @return a rectangle corresponding to the intersection of the
   *         two rectangles. An empty rectangle is returned if the rectangles
   *         do not overlap
   */
  public static Rectangle computeIntersection(int x, int y, int w, int h,
                                              Rectangle rect)
  {
    int x2 = (int) rect.x;
    int y2 = (int) rect.y;
    int w2 = (int) rect.width;
    int h2 = (int) rect.height;

    int dx = (x > x2) ? x : x2;
    int dy = (y > y2) ? y : y2;
    int dw = (x + w < x2 + w2) ? (x + w - dx) : (x2 + w2 - dx);
    int dh = (y + h < y2 + h2) ? (y + h - dy) : (y2 + h2 - dy);

    if (dw >= 0 && dh >= 0)
      rect.setBounds(dx, dy, dw, dh);
    else
      rect.setBounds(0, 0, 0, 0);

    return rect;
  }
  
  /**
   * Calculates the width of a given string.
   *
   * @param fm the <code>FontMetrics</code> object to use
   * @param str the string
   * 
   * @return the width of the the string.
   */
  public static int computeStringWidth(FontMetrics fm, String str)
  {
    return fm.stringWidth(str);
  }

  /**
   * Calculates the union of two rectangles. The result is stored in
   * <code>rect</code>. This is basically the same as
   * {@link Rectangle#union(Rectangle)} except that it avoids creation of new
   * Rectangle objects. The tradeoff is that you loose any data in
   * <code>rect</code>.
   *
   * @param x upper-left x coodinate of first rectangle
   * @param y upper-left y coodinate of first rectangle
   * @param w width of first rectangle
   * @param h height of first rectangle
   * @param rect a Rectangle object of the second rectangle
   *
   * @throws NullPointerException if rect is null
   *
   * @return a rectangle corresponding to the union of the
   *         two rectangles; a rectangle encompassing both is returned if the
   *         rectangles do not overlap
   */
  public static Rectangle computeUnion(int x, int y, int w, int h,
                                       Rectangle rect)
  {
    int x2 = (int) rect.x;
    int y2 = (int) rect.y;
    int w2 = (int) rect.width;
    int h2 = (int) rect.height;

    int dx = (x < x2) ? x : x2;
    int dy = (y < y2) ? y : y2;
    int dw = (x + w > x2 + w2) ? (x + w - dx) : (x2 + w2 - dx);
    int dh = (y + h > y2 + h2) ? (y + h - dy) : (y2 + h2 - dy);

    if (dw >= 0 && dh >= 0)
      rect.setBounds(dx, dy, dw, dh);
    else
      rect.setBounds(0, 0, 0, 0);
    return rect;
  }

  /**
   * Tests if a rectangle contains another.
   * @param a first rectangle
   * @param b second rectangle
   * @return true if a contains b, false otherwise
   * @throws NullPointerException
   */
  public static boolean isRectangleContainingRectangle(Rectangle a, Rectangle b)
  {
    // Note: zero-size rects inclusive, differs from Rectangle.contains()
    return b.width >= 0 && b.height >= 0 && b.width >= 0 && b.height >= 0
           && b.x >= a.x && b.x + b.width <= a.x + a.width && b.y >= a.y
           && b.y + b.height <= a.y + a.height;
  }

  /**
   * Returns the InputMap that is provided by the ComponentUI of
   * <code>component</code> for the specified condition.
   *
   * @param component the component for which the InputMap is returned
   * @param cond the condition that specifies which of the three input
   *     maps should be returned, may be
   *     {@link JComponent#WHEN_IN_FOCUSED_WINDOW},
   *     {@link JComponent#WHEN_FOCUSED} or
   *     {@link JComponent#WHEN_ANCESTOR_OF_FOCUSED_COMPONENT}
   *
   * @return The input map.
   */
  public static InputMap getUIInputMap(JComponent component, int cond)
  {
    if (UIManager.getUI(component) != null)
      // we assume here that the UI class sets the parent of the component's
      // InputMap, which is the correct behaviour. If it's not, then
      // this can be considered a bug
      return component.getInputMap(cond).getParent();
    else
      return null;
  }

  /**
   * Returns the ActionMap that is provided by the ComponentUI of
   * <code>component</code>.
   *
   * @param component the component for which the ActionMap is returned
   */
  public static ActionMap getUIActionMap(JComponent component)
  {
    if (UIManager.getUI(component) != null)
      // we assume here that the UI class sets the parent of the component's
      // ActionMap, which is the correct behaviour. If it's not, then
      // this can be considered a bug
      return component.getActionMap().getParent();
    else
      return null;
  }

  /**
   * Processes key bindings for the component that is associated with the 
   * key event. Note that this method does not make sense for
   * JComponent-derived components, except when
   * {@link JComponent#processKeyEvent(KeyEvent)} is overridden and super is
   * not called.
   *
   * This method searches through the component hierarchy of the component's
   * top-level container to find a <code>JComponent</code> that has a binding
   * for the key event in the WHEN_IN_FOCUSED_WINDOW scope.
   *
   * @param ev the key event
   *
   * @return <code>true</code> if a binding has been found and processed,
   *         <code>false</code> otherwise
   *
   * @since 1.4
   */
  public static boolean processKeyBindings(KeyEvent ev)
  {
    Component c = ev.getComponent();
    KeyStroke s = KeyStroke.getKeyStrokeForEvent(ev);
    KeyboardManager km = KeyboardManager.getManager();
    return km.processKeyStroke(c, s, ev);
  }
  
  /**
   * Returns a string representing one of the horizontal alignment codes
   * defined in the {@link SwingConstants} interface.  The following table
   * lists the constants and return values:
   * <p>
   * <table border="0">
   * <tr>
   *   <th>Code:</th><th>Returned String:</th>
   * </tr>
   * <tr>
   *   <td>{@link SwingConstants#CENTER}</td>
   *   <td><code>"CENTER"</code></td>
   * </tr>
   * <tr>
   *   <td>{@link SwingConstants#LEFT}</td>
   *   <td><code>"LEFT"</code></td>
   * </tr>
   * <tr>
   *   <td>{@link SwingConstants#RIGHT}</td>
   *   <td><code>"RIGHT"</code></td>
   * </tr>
   * <tr>
   *   <td>{@link SwingConstants#LEADING}</td>
   *   <td><code>"LEADING"</code></td>
   * </tr>
   * <tr>
   *   <td>{@link SwingConstants#TRAILING}</td>
   *   <td><code>"TRAILING"</code></td>
   * </tr>
   * </table>
   * </p>
   * If the supplied code is not one of those listed, this methods will throw
   * an {@link IllegalArgumentException}.
   * 
   * @param code  the code.
   * 
   * @return A string representing the given code.
   */
  static String convertHorizontalAlignmentCodeToString(int code)
  {
    switch (code) 
    {
      case SwingConstants.CENTER: 
        return "CENTER";
      case SwingConstants.LEFT:
        return "LEFT";
      case SwingConstants.RIGHT:
        return "RIGHT";
      case SwingConstants.LEADING:
        return "LEADING";
      case SwingConstants.TRAILING:
        return "TRAILING";
      default:
        throw new IllegalArgumentException("Unrecognised code: " + code);
    }
  }
  
  /**
   * Returns a string representing one of the vertical alignment codes
   * defined in the {@link SwingConstants} interface.  The following table
   * lists the constants and return values:
   * <p>
   * <table border="0">
   * <tr>
   *   <th>Code:</th><th>Returned String:</th>
   * </tr>
   * <tr>
   *   <td>{@link SwingConstants#CENTER}</td>
   *   <td><code>"CENTER"</code></td>
   * </tr>
   * <tr>
   *   <td>{@link SwingConstants#TOP}</td>
   *   <td><code>"TOP"</code></td>
   * </tr>
   * <tr>
   *   <td>{@link SwingConstants#BOTTOM}</td>
   *   <td><code>"BOTTOM"</code></td>
   * </tr>
   * </table>
   * </p>
   * If the supplied code is not one of those listed, this methods will throw
   * an {@link IllegalArgumentException}.
   * 
   * @param code  the code.
   * 
   * @return A string representing the given code.
   */
  static String convertVerticalAlignmentCodeToString(int code)
  {
    switch (code)
    {
      case SwingConstants.CENTER:
        return "CENTER";
      case SwingConstants.TOP:
        return "TOP";
      case SwingConstants.BOTTOM:
        return "BOTTOM";
      default:
        throw new IllegalArgumentException("Unrecognised code: " + code);
    }
  }
  
  /**
   * Returns a string representing one of the default operation codes
   * defined in the {@link WindowConstants} interface.  The following table
   * lists the constants and return values:
   * <p>
   * <table border="0">
   * <tr>
   *   <th>Code:</th><th>Returned String:</th>
   * </tr>
   * <tr>
   *   <td>{@link WindowConstants#DO_NOTHING_ON_CLOSE}</td>
   *   <td><code>"DO_NOTHING_ON_CLOSE"</code></td>
   * </tr>
   * <tr>
   *   <td>{@link WindowConstants#HIDE_ON_CLOSE}</td>
   *   <td><code>"HIDE_ON_CLOSE"</code></td>
   * </tr>
   * <tr>
   *   <td>{@link WindowConstants#DISPOSE_ON_CLOSE}</td>
   *   <td><code>"DISPOSE_ON_CLOSE"</code></td>
   * </tr>
   * <tr>
   *   <td>{@link WindowConstants#EXIT_ON_CLOSE}</td>
   *   <td><code>"EXIT_ON_CLOSE"</code></td>
   * </tr>
   * </table>
   * </p>
   * If the supplied code is not one of those listed, this method will throw
   * an {@link IllegalArgumentException}.
   * 
   * @param code  the code.
   * 
   * @return A string representing the given code.
   */
  static String convertWindowConstantToString(int code) 
  {
    switch (code)
    {
      case WindowConstants.DO_NOTHING_ON_CLOSE:
        return "DO_NOTHING_ON_CLOSE";
      case WindowConstants.HIDE_ON_CLOSE:
        return "HIDE_ON_CLOSE";
      case WindowConstants.DISPOSE_ON_CLOSE:
        return "DISPOSE_ON_CLOSE";
      case WindowConstants.EXIT_ON_CLOSE:
        return "EXIT_ON_CLOSE";
      default:
        throw new IllegalArgumentException("Unrecognised code: " + code);
    }
  }

  /**
   * Converts a rectangle in the coordinate system of a child component into
   * a rectangle of one of it's Ancestors. The result is stored in the input
   * rectangle.
   *
   * @param comp the child component
   * @param r the rectangle to convert
   * @param ancestor the ancestor component
   */
  static void convertRectangleToAncestor(Component comp, Rectangle r,
                                         Component ancestor)
  {
    if (comp == ancestor)
      return;

    r.x += comp.getX();
    r.y += comp.getY();

    Component parent = comp.getParent();
    if (parent != null && parent != ancestor)
      convertRectangleToAncestor(parent, r, ancestor);
  }
}
