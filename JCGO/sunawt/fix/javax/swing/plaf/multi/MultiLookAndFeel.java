/*
 * This file is modified by Ivan Maidanski <ivmai@ivmaisoft.com>
 * Project name: JCGO-SUNAWT (http://www.ivmaisoft.com/jcgo/)
 */

/*
 * @(#)MultiLookAndFeel.java    1.33 03/01/23
 *
 * Copyright 2003 Sun Microsystems, Inc. All rights reserved.
 * SUN PROPRIETARY/CONFIDENTIAL. Use is subject to license terms.
 */
package javax.swing.plaf.multi;

import java.util.Vector;
import java.lang.reflect.Method;
import javax.swing.*;
import javax.swing.plaf.*;

/**
 * <p>A multiplexing look and feel that allows more than one UI
 * to be associated with a component at the same time.
 * The primary look and feel is called
 * the <em>default</em> look and feel,
 * and the other look and feels are called <em>auxiliary</em>.
 * <p>
 *
 * For further information, see
 * <a href="doc-files/multi_tsc.html" target="_top">Using the
 * Multiplexing Look and Feel.</a>
 *
 * <p>
 * <strong>Warning:</strong>
 * Serialized objects of this class will not be compatible with
 * future Swing releases. The current serialization support is
 * appropriate for short term storage or RMI between applications running
 * the same version of Swing.  As of 1.4, support for long term storage
 * of all JavaBeans<sup><font size="-2">TM</font></sup>
 * has been added to the <code>java.beans</code> package.
 * Please see {@link java.beans.XMLEncoder}.
 *
 * @see UIManager#addAuxiliaryLookAndFeel
 * @see javax.swing.plaf.multi
 *
 * @version 1.33 01/23/03
 * @author Willie Walker
 */
public class MultiLookAndFeel extends LookAndFeel {

//////////////////////////////
// LookAndFeel methods
//////////////////////////////

    /**
     * Returns a string, suitable for use in menus,
     * that identifies this look and feel.
     *
     * @return a string such as "Multiplexing Look and Feel"
     */
    public String getName() {
        return "Multiplexing Look and Feel";
    }

    /**
     * Returns a string, suitable for use by applications/services,
     * that identifies this look and feel.
     *
     * @return "Multiplex"
     */
    public String getID() {
        return "Multiplex";
    }

    /**
     * Returns a one-line description of this look and feel.
     *
     * @return a descriptive string such as "Allows multiple UI instances per component instance"
     */
    public String getDescription() {
        return "Allows multiple UI instances per component instance";
    }

    /**
     * Returns <code>false</code>;
     * this look and feel is not native to any platform.
     *
     * @return <code>false</code>
     */
    public boolean isNativeLookAndFeel() {
        return false;
    }

    /**
     * Returns <code>true</code>;
     * every platform permits this look and feel.
     *
     * @return <code>true</code>
     */
    public boolean isSupportedLookAndFeel() {
        return true;
    }

    /**
     * Creates, initializes, and returns
     * the look and feel specific defaults.
     * For this look and feel,
     * the defaults consist solely of
     * mappings of UI class IDs
     * (such as "ButtonUI")
     * to <code>ComponentUI</code> class names
     * (such as "javax.swing.plaf.multi.MultiButtonUI").
     *
     * @return an initialized <code>UIDefaults</code> object
     * @see javax.swing.JComponent#getUIClassID
     */
    public UIDefaults getDefaults() {
        UIDefaults table = new MultiUIDefaults();
        String packageName = "javax.swing.plaf.multi.";
        Object[] uiDefaults = {
                   "ButtonUI", packageName + "MultiButtonUI",
         "CheckBoxMenuItemUI", packageName + "MultiMenuItemUI",
                 "CheckBoxUI", packageName + "MultiButtonUI",
             "ColorChooserUI", packageName + "MultiColorChooserUI",
                 "ComboBoxUI", packageName + "MultiComboBoxUI",
              "DesktopIconUI", packageName + "MultiDesktopIconUI",
              "DesktopPaneUI", packageName + "MultiDesktopPaneUI",
               "EditorPaneUI", packageName + "MultiTextUI",
              "FileChooserUI", packageName + "MultiFileChooserUI",
       "FormattedTextFieldUI", packageName + "MultiTextUI",
            "InternalFrameUI", packageName + "MultiInternalFrameUI",
                    "LabelUI", packageName + "MultiLabelUI",
                     "ListUI", packageName + "MultiListUI",
                  "MenuBarUI", packageName + "MultiMenuBarUI",
                 "MenuItemUI", packageName + "MultiMenuItemUI",
                     "MenuUI", packageName + "MultiMenuItemUI",
               "OptionPaneUI", packageName + "MultiOptionPaneUI",
                    "PanelUI", packageName + "MultiPanelUI",
            "PasswordFieldUI", packageName + "MultiTextUI",
       "PopupMenuSeparatorUI", packageName + "MultiSeparatorUI",
                "PopupMenuUI", packageName + "MultiPopupMenuUI",
              "ProgressBarUI", packageName + "MultiProgressBarUI",
      "RadioButtonMenuItemUI", packageName + "MultiMenuItemUI",
              "RadioButtonUI", packageName + "MultiButtonUI",
                 "RootPaneUI", packageName + "MultiRootPaneUI",
                "ScrollBarUI", packageName + "MultiScrollBarUI",
               "ScrollPaneUI", packageName + "MultiScrollPaneUI",
                "SeparatorUI", packageName + "MultiSeparatorUI",
                   "SliderUI", packageName + "MultiSliderUI",
                  "SpinnerUI", packageName + "MultiSpinnerUI",
                "SplitPaneUI", packageName + "MultiSplitPaneUI",
               "TabbedPaneUI", packageName + "MultiTabbedPaneUI",
              "TableHeaderUI", packageName + "MultiTableHeaderUI",
                    "TableUI", packageName + "MultiTableUI",
                 "TextAreaUI", packageName + "MultiTextUI",
                "TextFieldUI", packageName + "MultiTextUI",
                 "TextPaneUI", packageName + "MultiTextUI",
             "ToggleButtonUI", packageName + "MultiButtonUI",
         "ToolBarSeparatorUI", packageName + "MultiSeparatorUI",
                  "ToolBarUI", packageName + "MultiToolBarUI",
                  "ToolTipUI", packageName + "MultiToolTipUI",
                     "TreeUI", packageName + "MultiTreeUI",
                 "ViewportUI", packageName + "MultiViewportUI",
        };

        table.putDefaults(uiDefaults);
        return table;
    }

///////////////////////////////
// Utility methods for the UI's
///////////////////////////////

    /**
     * Creates the <code>ComponentUI</code> objects
     * required to present
     * the <code>target</code> component,
     * placing the objects in the <code>uis</code> vector and
     * returning the
     * <code>ComponentUI</code> object
     * that best represents the component's UI.
     * This method finds the <code>ComponentUI</code> objects
     * by invoking
     * <code>getDefaults().getUI(target)</code> on each
     * default and auxiliary look and feel currently in use.
     * The first UI object this method adds
     * to the <code>uis</code> vector
     * is for the default look and feel.
     * <p>
     * This method is invoked by the <code>createUI</code> method
     * of <code>MultiXxxxUI</code> classes.
     *
     * @param mui the <code>ComponentUI</code> object
     *            that represents the complete UI
     *            for the <code>target</code> component;
     *            this should be an instance
     *            of one of the <code>MultiXxxxUI</code> classes
     * @param uis a <code>Vector</code>;
     *            generally this is the <code>uis</code> field
     *            of the <code>mui</code> argument
     * @param target a component whose UI is represented by <code>mui</code>
     *
     * @return <code>mui</code> if the component has any auxiliary UI objects;
     *         otherwise, returns the UI object for the default look and feel
     *         or <code>null</code> if the default UI object couldn't be found
     *
     * @see javax.swing.UIManager#getAuxiliaryLookAndFeels
     * @see javax.swing.UIDefaults#getUI
     * @see MultiButtonUI#uis
     * @see MultiButtonUI#createUI
     */
    public static ComponentUI createUIs(ComponentUI mui,
                                        Vector      uis,
                                        JComponent  target) {
        ComponentUI ui;

        // Make sure we can at least get the default UI
        //
        ui = UIManager.getDefaults().getUI(target);
        if (ui != null) {
            uis.addElement(ui);
            LookAndFeel[] auxiliaryLookAndFeels;
            auxiliaryLookAndFeels = UIManager.getAuxiliaryLookAndFeels();
            if (auxiliaryLookAndFeels != null) {
                for (int i = 0; i < auxiliaryLookAndFeels.length; i++) {
                    ui = auxiliaryLookAndFeels[i].getDefaults().getUI(target);
                    if (ui != null) {
                        uis.addElement(ui);
                    }
                }
            }
        } else {
            return null;
        }

        // Don't bother returning the multiplexing UI if all we did was
        // get a UI from just the default look and feel.
        //
        if (uis.size() == 1) {
            return (ComponentUI) uis.elementAt(0);
        } else {
            return mui;
        }
    }

    /**
     * Creates an array,
     * populates it with UI objects from the passed-in vector,
     * and returns the array.
     * If <code>uis</code> is null,
     * this method returns an array with zero elements.
     * If <code>uis</code> is an empty vector,
     * this method returns <code>null</code>.
     * A run-time error occurs if any objects in the <code>uis</code> vector
     * are not of type <code>ComponentUI</code>.
     *
     * @param uis a vector containing <code>ComponentUI</code> objects
     * @return an array equivalent to the passed-in vector
     *
     */
    protected static ComponentUI[] uisToArray(Vector uis) {
        if (uis == null) {
            return new ComponentUI[0];
        } else {
            int count = uis.size();
            if (count > 0) {
                ComponentUI[] u = new ComponentUI[count];
                for (int i = 0; i < count; i++) {
                    u[i] = (ComponentUI)uis.elementAt(i);
                }
                return u;
            } else {
                return null;
            }
        }
    }
}

/**
 * We want the Multiplexing LookAndFeel to be quiet and fallback
 * gracefully if it cannot find a UI.  This class overrides the
 * getUIError method of UIDefaults, which is the method that
 * emits error messages when it cannot find a UI class in the
 * LAF.
 */
class MultiUIDefaults extends UIDefaults {
    protected void getUIError(String msg) {
        System.err.println("Multiplexing LAF:  " + msg);
    }
}
