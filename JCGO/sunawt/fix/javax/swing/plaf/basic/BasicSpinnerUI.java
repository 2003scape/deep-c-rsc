/*
 * This file is modified by Ivan Maidanski <ivmai@ivmaisoft.com>
 * Project name: JCGO-SUNAWT (http://www.ivmaisoft.com/jcgo/)
 */

/*
 * @(#)BasicSpinnerUI.java      1.18 06/08/17
 *
 * Copyright 2006 Sun Microsystems, Inc. All rights reserved.
 * SUN PROPRIETARY/CONFIDENTIAL. Use is subject to license terms.
 */

package javax.swing.plaf.basic;

import java.awt.*;
import java.awt.event.*;
import java.text.ParseException;

import javax.swing.*;
import javax.swing.border.*;
import javax.swing.event.*;
import javax.swing.plaf.*;
import javax.swing.text.*;

import java.beans.*;
import java.text.*;
import java.util.*;



/**
 * The default Spinner UI delegate.
 *
 * @version 1.15 01/23/03
 * @author Hans Muller
 * @since 1.4
 */
public class BasicSpinnerUI extends SpinnerUI
{
    /**
     * The spinner that we're a UI delegate for.  Initialized by
     * the <code>installUI</code> method, and reset to null
     * by <code>uninstallUI</code>.
     *
     * @see #installUI
     * @see #uninstallUI
     */
    protected JSpinner spinner;


    /**
     * The <code>PropertyChangeListener</code> that's added to the
     * <code>JSpinner</code> itself. This listener is created by the
     * <code>createPropertyChangeListener</code> method, added by the
     * <code>installListeners</code> method, and removed by the
     * <code>uninstallListeners</code> method.
     * <p>
     * One instance of this listener is shared by all JSpinners.
     *
     * @see #createPropertyChangeListener
     * @see #installListeners
     * @see #uninstallListeners
     */
    private static final PropertyChangeListener propertyChangeListener = new PropertyChangeHandler();


    /**
     * The mouse/action listeners that are added to the spinner's
     * arrow buttons.  These listeners are shared by all
     * spinner arrow buttons.
     *
     * @see #createNextButton
     * @see #createPreviousButton
     */
    private static ArrowButtonHandler nextButtonHandler;
    private static ArrowButtonHandler previousButtonHandler;

    private static synchronized void initButtonHandlers() {
       if (nextButtonHandler == null)
           nextButtonHandler = new ArrowButtonHandler("increment", true);
       if (previousButtonHandler == null)
           previousButtonHandler = new ArrowButtonHandler("decrement", false);
    }

    /**
     * Returns a new instance of BasicSpinnerUI.  SpinnerListUI
     * delegates are allocated one per JSpinner.
     *
     * @param c the JSpinner (not used)
     * @see ComponentUI#createUI
     * @return a new BasicSpinnerUI object
     */
    public static ComponentUI createUI(JComponent c) {
        return new BasicSpinnerUI();
    }

    public BasicSpinnerUI() {
        initButtonHandlers();
    }

    private void maybeAdd(Component c, String s) {
        if (c != null) {
            spinner.add(c, s);
        }
    }


    /**
     * Calls <code>installDefaults</code>, <code>installListeners</code>,
     * and then adds the components returned by <code>createNextButton</code>,
     * <code>createPreviousButton</code>, and <code>createEditor</code>.
     *
     * @param c the JSpinner
     * @see #installDefaults
     * @see #installListeners
     * @see #createNextButton
     * @see #createPreviousButton
     * @see #createEditor
     */
    public void installUI(JComponent c) {
        this.spinner = (JSpinner)c;
        installDefaults();
        installListeners();
        maybeAdd(createNextButton(), "Next");
        maybeAdd(createPreviousButton(), "Previous");
        maybeAdd(createEditor(), "Editor");
        updateEnabledState();
        installKeyboardActions();
    }


    /**
     * Calls <code>uninstallDefaults</code>, <code>uninstallListeners</code>,
     * and then removes all of the spinners children.
     *
     * @param c the JSpinner (not used)
     */
    public void uninstallUI(JComponent c) {
        uninstallDefaults();
        uninstallListeners();
        this.spinner = null;
        c.removeAll();
    }


    /**
     * Initializes <code>propertyChangeListener</code> with
     * a shared object that delegates interesting PropertyChangeEvents
     * to protected methods.
     * <p>
     * This method is called by <code>installUI</code>.
     *
     * @see #replaceEditor
     * @see #uninstallListeners
     */
    protected void installListeners() {
        JComponent editor = spinner.getEditor();
        if (editor != null && editor instanceof JSpinner.DefaultEditor) {
            JTextField tf = ((JSpinner.DefaultEditor)editor).getTextField();
            if (tf != null) {
                tf.removeFocusListener(nextButtonHandler);
                tf.addFocusListener(nextButtonHandler);
                tf.removeFocusListener(previousButtonHandler);
                tf.addFocusListener(previousButtonHandler);
            }
        }
        spinner.addPropertyChangeListener(propertyChangeListener);
    }


    /**
     * Removes the <code>propertyChangeListener</code> added
     * by installListeners.
     * <p>
     * This method is called by <code>uninstallUI</code>.
     *
     * @see #installListeners
     */
    protected void uninstallListeners() {
        spinner.removePropertyChangeListener(propertyChangeListener);
        JComponent editor = spinner.getEditor();
        removeEditorBorderListener(editor);
        if (editor instanceof JSpinner.DefaultEditor) {
            JTextField tf = ((JSpinner.DefaultEditor)editor).getTextField();
            if (tf != null) {
                tf.removeFocusListener(nextButtonHandler);
                tf.removeFocusListener(previousButtonHandler);
            }
        }
    }


    /**
     * Initialize the <code>JSpinner</code> <code>border</code>,
     * <code>foreground</code>, and <code>background</code>, properties
     * based on the corresponding "Spinner.*" properties from defaults table.
     * The <code>JSpinners</code> layout is set to the value returned by
     * <code>createLayout</code>.  This method is called by <code>installUI</code>.
     *
     * @see #uninstallDefaults
     * @see #installUI
     * @see #createLayout
     * @see LookAndFeel#installBorder
     * @see LookAndFeel#installColors
     */
    protected void installDefaults() {
        spinner.setLayout(createLayout());
        LookAndFeel.installBorder(spinner, "Spinner.border");
        LookAndFeel.installColorsAndFont(spinner, "Spinner.background", "Spinner.foreground", "Spinner.font");
    }


    /**
     * Sets the <code>JSpinner's</code> layout manager to null.  This
     * method is called by <code>uninstallUI</code>.
     *
     * @see #installDefaults
     * @see #uninstallUI
     */
    protected void uninstallDefaults() {
        spinner.setLayout(null);
    }


    /**
     * Create a <code>LayoutManager</code> that manages the <code>editor</code>,
     * <code>nextButton</code>, and <code>previousButton</code>
     * children of the JSpinner.  These three children must be
     * added with a constraint that identifies their role:
     * "Editor", "Next", and "Previous". The default layout manager
     * can handle the absence of any of these children.
     *
     * @return a LayoutManager for the editor, next button, and previous button.
     * @see #createNextButton
     * @see #createPreviousButton
     * @see #createEditor
     */
    protected LayoutManager createLayout() {
        return new SpinnerLayout();
    }


    /**
     * Create a <code>PropertyChangeListener</code> that can be
     * added to the JSpinner itself.  Typically, this listener
     * will call replaceEditor when the "editor" property changes,
     * since it's the <code>SpinnerUI's</code> responsibility to
     * add the editor to the JSpinner (and remove the old one).
     * This method is called by <code>installListeners</code>.
     *
     * @return A PropertyChangeListener for the JSpinner itself
     * @see #installListeners
     */
    protected PropertyChangeListener createPropertyChangeListener() {
        return new PropertyChangeHandler();
    }


    /**
     * Create a component that will replace the spinner models value
     * with the object returned by <code>spinner.getPreviousValue</code>.
     * By default the <code>previousButton</code> is a JButton
     * who's <code>ActionListener</code> updates it's <code>JSpinner</code>
     * ancestors model.  If a previousButton isn't needed (in a subclass)
     * then override this method to return null.
     *
     * @return a component that will replace the spinners model with the
     *     next value in the sequence, or null
     * @see #installUI
     * @see #createNextButton
     */
    protected Component createPreviousButton() {
        return createArrowButton(SwingConstants.SOUTH, previousButtonHandler);
    }


    /**
     * Create a component that will replace the spinner models value
     * with the object returned by <code>spinner.getNextValue</code>.
     * By default the <code>nextButton</code> is a JButton
     * who's <code>ActionListener</code> updates it's <code>JSpinner</code>
     * ancestors model.  If a nextButton isn't needed (in a subclass)
     * then override this method to return null.
     *
     * @return a component that will replace the spinners model with the
     *     next value in the sequence, or null
     * @see #installUI
     * @see #createPreviousButton
     */
    protected Component createNextButton() {
        return createArrowButton(SwingConstants.NORTH, nextButtonHandler);
    }

    private Component createArrowButton(int direction, ArrowButtonHandler handler) {
        JButton b = new BasicArrowButton(direction);
        b.addActionListener(handler);
        b.addMouseListener(handler);
        Border buttonBorder = UIManager.getBorder("Spinner.arrowButtonBorder");
        if (buttonBorder instanceof UIResource) {
            // Wrap the border to avoid having the UIResource be replaced by
            // the ButtonUI. This is the opposite of using BorderUIResource.
            b.setBorder(new CompoundBorder(buttonBorder, null));
        } else {
            b.setBorder(buttonBorder);
        }
        return b;
    }


    /**
     * This method is called by installUI to get the editor component
     * of the <code>JSpinner</code>.  By default it just returns
     * <code>JSpinner.getEditor()</code>.  Subclasses can override
     * <code>createEditor</code> to return a component that contains
     * the spinner's editor or null, if they're going to handle adding
     * the editor to the <code>JSpinner</code> in an
     * <code>installUI</code> override.
     * <p>
     * Typically this method would be overridden to wrap the editor
     * with a container with a custom border, since one can't assume
     * that the editors border can be set directly.
     * <p>
     * The <code>replaceEditor</code> method is called when the spinners
     * editor is changed with <code>JSpinner.setEditor</code>.  If you've
     * overriden this method, then you'll probably want to override
     * <code>replaceEditor</code> as well.
     *
     * @return the JSpinners editor JComponent, spinner.getEditor() by default
     * @see #installUI
     * @see #replaceEditor
     * @see JSpinner#getEditor
     */
    protected JComponent createEditor() {
        JComponent editor = spinner.getEditor();
        maybeRemoveEditorBorder(editor);
        installEditorBorderListener(editor);
        return editor;
    }


    /**
     * Called by the <code>PropertyChangeListener</code> when the
     * <code>JSpinner</code> editor property changes.  It's the responsibility
     * of this method to remove the old editor and add the new one.  By
     * default this operation is just:
     * <pre>
     * spinner.remove(oldEditor);
     * spinner.add(newEditor, "Editor");
     * </pre>
     * The implementation of <code>replaceEditor</code> should be coordinated
     * with the <code>createEditor</code> method.
     *
     * @see #createEditor
     * @see #createPropertyChangeListener
     */
    protected void replaceEditor(JComponent oldEditor, JComponent newEditor) {
        spinner.remove(oldEditor);
        maybeRemoveEditorBorder(newEditor);
        installEditorBorderListener(newEditor);
        spinner.add(newEditor, "Editor");
    }

    /**
     * Remove the border around the inner editor component for LaFs
     * that install an outside border around the spinner,
     */
    private void maybeRemoveEditorBorder(JComponent editor) {
        if (!UIManager.getBoolean("Spinner.editorBorderPainted")) {
            if (editor instanceof JPanel &&
                editor.getBorder() == null &&
                editor.getComponentCount() > 0) {

                editor = (JComponent)editor.getComponent(0);
            }

            if (editor != null && editor.getBorder() instanceof UIResource) {
                editor.setBorder(null);
            }
        }
    }

    /**
     * Remove the border around the inner editor component for LaFs
     * that install an outside border around the spinner,
     */
    private void installEditorBorderListener(JComponent editor) {
        if (!UIManager.getBoolean("Spinner.editorBorderPainted")) {
            if (editor instanceof JPanel &&
                editor.getBorder() == null &&
                editor.getComponentCount() > 0) {

                editor = (JComponent)editor.getComponent(0);
            }
            if (editor != null &&
                (editor.getBorder() == null ||
                 editor.getBorder() instanceof UIResource)) {
                editor.addPropertyChangeListener(propertyChangeListener);
            }
        }
    }

    private void removeEditorBorderListener(JComponent editor) {
        if (!UIManager.getBoolean("Spinner.editorBorderPainted")) {
            if (editor instanceof JPanel &&
                editor.getComponentCount() > 0) {

                editor = (JComponent)editor.getComponent(0);
            }
            if (editor != null) {
                editor.removePropertyChangeListener(propertyChangeListener);
            }
        }
    }


    /**
     * Updates the enabled state of the children Components based on the
     * enabled state of the <code>JSpinner</code>.
     */
    private void updateEnabledState() {
        updateEnabledState(spinner, spinner.isEnabled());
    }


    /**
     * Recursively updates the enabled state of the child
     * <code>Component</code>s of <code>c</code>.
     */
    private void updateEnabledState(Container c, boolean enabled) {
        for (int counter = c.getComponentCount() - 1; counter >= 0;counter--) {
            Component child = c.getComponent(counter);

            child.setEnabled(enabled);
            if (child instanceof Container) {
                updateEnabledState((Container)child, enabled);
            }
        }
    }


    /**
     * Installs the KeyboardActions onto the JSpinner.
     */
    private void installKeyboardActions() {
        InputMap iMap = getInputMap(JComponent.
                                   WHEN_ANCESTOR_OF_FOCUSED_COMPONENT);

        SwingUtilities.replaceUIInputMap(spinner, JComponent.
                                         WHEN_ANCESTOR_OF_FOCUSED_COMPONENT,
                                         iMap);

        SwingUtilities.replaceUIActionMap(spinner, getActionMap());
    }

    /**
     * Returns the InputMap to install for <code>condition</code>.
     */
    private InputMap getInputMap(int condition) {
        if (condition == JComponent.WHEN_ANCESTOR_OF_FOCUSED_COMPONENT) {
            return (InputMap)UIManager.get("Spinner.ancestorInputMap");
        }
        return null;
    }

    private ActionMap getActionMap() {
        ActionMap map = (ActionMap)UIManager.get("Spinner.actionMap");

        if (map == null) {
            map = createActionMap();
            if (map != null) {
                UIManager.getLookAndFeelDefaults().put("Spinner.actionMap",
                                                       map);
            }
        }
        return map;
    }

    private ActionMap createActionMap() {
        ActionMap map = new ActionMapUIResource();

        map.put("increment", nextButtonHandler);
        map.put("decrement", previousButtonHandler);
        return map;
    }

    /**
     * A handler for spinner arrow button mouse and action events.  When
     * a left mouse pressed event occurs we look up the (enabled) spinner
     * that's the source of the event and start the autorepeat timer.  The
     * timer fires action events until any button is released at which
     * point the timer is stopped and the reference to the spinner cleared.
     * The timer doesn't start until after a 300ms delay, so often the
     * source of the initial (and final) action event is just the button
     * logic for mouse released - which means that we're relying on the fact
     * that our mouse listener runs after the buttons mouse listener.
     * <p>
     * Note that one instance of this handler is shared by all slider previous
     * arrow buttons and likewise for all of the next buttons,
     * so it doesn't have any state that persists beyond the limits
     * of a single button pressed/released gesture.
     */
    private static class ArrowButtonHandler extends AbstractAction
                                            implements MouseListener, FocusListener, UIResource {
        final javax.swing.Timer autoRepeatTimer;
        final boolean isNext;
        JSpinner spinner = null;
        JButton arrowButton = null;

        ArrowButtonHandler(String name, boolean isNext) {
            super(name);
            this.isNext = isNext;
            autoRepeatTimer = new javax.swing.Timer(60, this);
            autoRepeatTimer.setInitialDelay(300);
        }

        private JSpinner eventToSpinner(AWTEvent e) {
            Object src = e.getSource();
            while ((src instanceof Component) && !(src instanceof JSpinner)) {
                src = ((Component)src).getParent();
            }
            return (src instanceof JSpinner) ? (JSpinner)src : null;
        }

        public void actionPerformed(ActionEvent e) {
            JSpinner spinner = this.spinner;

            if (!(e.getSource() instanceof javax.swing.Timer)) {
                // Most likely resulting from being in ActionMap.
                spinner = eventToSpinner(e);
                if (e.getSource() instanceof BasicArrowButton) {
                    arrowButton = (JButton)e.getSource();
                }
            } else {
                if (arrowButton!=null && !arrowButton.getModel().isPressed()
                    && autoRepeatTimer.isRunning()) {
                    autoRepeatTimer.stop();
                    spinner = null;
                }
            }
            if (spinner != null) {
                try {
                    int calendarField = getCalendarField(spinner);
                    spinner.commitEdit();
                    if (calendarField != -1) {
                        ((SpinnerDateModel)spinner.getModel()).
                                 setCalendarField(calendarField);
                    }
                    Object value = (isNext) ? spinner.getNextValue() :
                               spinner.getPreviousValue();
                    if (value != null) {
                        spinner.setValue(value);
                        select(spinner);
                    }
                } catch (IllegalArgumentException iae) {
                    UIManager.getLookAndFeel().provideErrorFeedback(spinner);
                } catch (ParseException pe) {
                    UIManager.getLookAndFeel().provideErrorFeedback(spinner);
                }
            }
        }

        /**
         * If the spinner's editor is a DateEditor, this selects the field
         * associated with the value that is being incremented.
         */
        private void select(JSpinner spinner) {
            JComponent editor = spinner.getEditor();

            if (editor instanceof JSpinner.DateEditor) {
                JSpinner.DateEditor dateEditor = (JSpinner.DateEditor)editor;
                JFormattedTextField ftf = dateEditor.getTextField();
                Format format = dateEditor.getFormat();
                Object value;

                if (format != null && (value = spinner.getValue()) != null) {
                    SpinnerDateModel model = dateEditor.getModel();
                    DateFormat.Field field = DateFormat.Field.ofCalendarField(
                        model.getCalendarField());

                    if (field != null) {
                        try {
                            AttributedCharacterIterator iterator = format.
                                formatToCharacterIterator(value);
                            if (!select(ftf, iterator, field) &&
                                       field == DateFormat.Field.HOUR0) {
                                select(ftf, iterator, DateFormat.Field.HOUR1);
                            }
                        }
                        catch (IllegalArgumentException iae) {}
                    }
                }
            }
        }

        /**
         * Selects the passed in field, returning true if it is found,
         * false otherwise.
         */
        private boolean select(JFormattedTextField ftf,
                               AttributedCharacterIterator iterator,
                               DateFormat.Field field) {
            int max = ftf.getDocument().getLength();

            iterator.first();
            do {
                Map attrs = iterator.getAttributes();

                if (attrs != null && attrs.containsKey(field)){
                    int start = iterator.getRunStart(field);
                    int end = iterator.getRunLimit(field);

                    if (start != -1 && end != -1 && start <= max &&
                                       end <= max) {
                        ftf.select(start, end);
                    }
                    return true;
                }
            } while (iterator.next() != CharacterIterator.DONE);
            return false;
        }

        /**
         * Returns the calendarField under the start of the selection, or
         * -1 if there is no valid calendar field under the selection (or
         * the spinner isn't editing dates.
         */
        private int getCalendarField(JSpinner spinner) {
            JComponent editor = spinner.getEditor();

            if (editor instanceof JSpinner.DateEditor) {
                JSpinner.DateEditor dateEditor = (JSpinner.DateEditor)editor;
                JFormattedTextField ftf = dateEditor.getTextField();
                int start = ftf.getSelectionStart();
                JFormattedTextField.AbstractFormatter formatter =
                                    ftf.getFormatter();

                if (formatter instanceof InternationalFormatter) {
                    Format.Field[] fields = ((InternationalFormatter)
                                             formatter).getFields(start);

                    for (int counter = 0; counter < fields.length; counter++) {
                        if (fields[counter] instanceof DateFormat.Field) {
                            int calendarField;

                            if (fields[counter] == DateFormat.Field.HOUR1) {
                                calendarField = Calendar.HOUR;
                            }
                            else {
                                calendarField = ((DateFormat.Field)
                                        fields[counter]).getCalendarField();
                            }
                            if (calendarField != -1) {
                                return calendarField;
                            }
                        }
                    }
                }
            }
            return -1;
        }

        public void mousePressed(MouseEvent e) {
            if (SwingUtilities.isLeftMouseButton(e) && e.getComponent().isEnabled()) {
                spinner = eventToSpinner(e);
                autoRepeatTimer.start();

                focusSpinnerIfNecessary();
            }
        }

        public void mouseReleased(MouseEvent e) {
            autoRepeatTimer.stop();
            spinner = null;
        }

        public void mouseClicked(MouseEvent e) {
        }

        public void mouseEntered(MouseEvent e) {
        }

        public void mouseExited(MouseEvent e) {
        }

        /**
         * Requests focus on a child of the spinner if the spinner doesn't
         * have focus.
         */
        private void focusSpinnerIfNecessary() {
            Component fo = KeyboardFocusManager.
                              getCurrentKeyboardFocusManager().getFocusOwner();
            if (spinner.isRequestFocusEnabled() && (
                        fo == null ||
                        !SwingUtilities.isDescendingFrom(fo, spinner))) {
                Container root = spinner;

                if (!root.isFocusCycleRoot()) {
                    root = root.getFocusCycleRootAncestor();
                }
                if (root != null) {
                    FocusTraversalPolicy ftp = root.getFocusTraversalPolicy();
                    Component child = ftp.getComponentAfter(root, spinner);

                    if (child != null && SwingUtilities.isDescendingFrom(
                                                        child, spinner)) {
                        child.requestFocus();
                    }
                }
            }
        }

        public void focusGained(FocusEvent e) {
        }

        public void focusLost(FocusEvent e) {
            if (autoRepeatTimer.isRunning()) {
                autoRepeatTimer.stop();
            }
            spinner = null;
            if (arrowButton !=null) {
                ButtonModel model = arrowButton.getModel();
                model.setPressed(false);
                model.setArmed(false);
            }
        }
    }

    /**
     * A simple layout manager for the editor and the next/previous buttons.
     * See the BasicSpinnerUI javadoc for more information about exactly
     * how the components are arranged.
     */
    private static class SpinnerLayout implements LayoutManager
    {
        private Component nextButton = null;
        private Component previousButton = null;
        private Component editor = null;

        public void addLayoutComponent(String name, Component c) {
            if ("Next".equals(name)) {
                nextButton = c;
            }
            else if ("Previous".equals(name)) {
                previousButton = c;
            }
            else if ("Editor".equals(name)) {
                editor = c;
            }
        }

        public void removeLayoutComponent(Component c) {
            if (c == nextButton) {
                c = null;
            }
            else if (c == previousButton) {
                previousButton = null;
            }
            else if (c == editor) {
                editor = null;
            }
        }

        /**
         * Used by the default LayoutManager class - SpinnerLayout for
         * missing (null) editor/nextButton/previousButton children.
         */
        private static final Dimension zeroSize = new Dimension(0, 0);

        private Dimension preferredSize(Component c) {
            return (c == null) ? zeroSize : c.getPreferredSize();
        }

        public Dimension preferredLayoutSize(Container parent) {
            Dimension nextD = preferredSize(nextButton);
            Dimension previousD = preferredSize(previousButton);
            Dimension editorD = preferredSize(editor);

            /* Force the editors height to be a multiple of 2
             */
            editorD.height = ((editorD.height + 1) / 2) * 2;

            Dimension size = new Dimension(editorD.width, editorD.height);
            size.width += Math.max(nextD.width, previousD.width);
            Insets insets = parent.getInsets();
            size.width += insets.left + insets.right;
            size.height += insets.top + insets.bottom;
            return size;
        }

        public Dimension minimumLayoutSize(Container parent) {
            return preferredLayoutSize(parent);
        }

        private void setBounds(Component c, int x, int y, int width, int height) {
            if (c != null) {
                c.setBounds(x, y, width, height);
            }
        }

        public void layoutContainer(Container parent) {
            int width  = parent.getWidth();
            int height = parent.getHeight();

            Insets insets = parent.getInsets();
            Dimension nextD = preferredSize(nextButton);
            Dimension previousD = preferredSize(previousButton);
            int buttonsWidth = Math.max(nextD.width, previousD.width);
            int editorHeight = height - (insets.top + insets.bottom);

            // The arrowButtonInsets value is used instead of the JSpinner's
            // insets if not null. Defining this to be (0, 0, 0, 0) causes the
            // buttons to be aligned with the outer edge of the spinner's
            // border, and leaving it as "null" places the buttons completely
            // inside the spinner's border.
            Insets buttonInsets = UIManager.getInsets("Spinner.arrowButtonInsets");
            if (buttonInsets == null) {
                buttonInsets = insets;
            }

            /* Deal with the spinner's componentOrientation property.
             */
            int editorX, editorWidth, buttonsX;
            if (parent.getComponentOrientation().isLeftToRight()) {
                editorX = insets.left;
                editorWidth = width - insets.left - buttonsWidth - buttonInsets.right;
                buttonsX = width - buttonsWidth - buttonInsets.right;
            } else {
                buttonsX = buttonInsets.left;
                editorX = buttonsX + buttonsWidth;
                editorWidth = width - buttonInsets.left - buttonsWidth - insets.right;
            }

            int nextY = buttonInsets.top;
            int nextHeight = (height / 2) + (height % 2) - nextY;
            int previousY = buttonInsets.top + nextHeight;
            int previousHeight = height - previousY - buttonInsets.bottom;

            setBounds(editor,         editorX,  insets.top, editorWidth, editorHeight);
            setBounds(nextButton,     buttonsX, nextY,      buttonsWidth, nextHeight);
            setBounds(previousButton, buttonsX, previousY,  buttonsWidth, previousHeight);
        }
    }


    /**
     * Detect JSpinner property changes we're interested in and delegate.  Subclasses
     * shouldn't need to replace the default propertyChangeListener (although they
     * can by overriding createPropertyChangeListener) since all of the interesting
     * property changes are delegated to protected methods.
     */
    private static class PropertyChangeHandler implements PropertyChangeListener
    {
        public void propertyChange(PropertyChangeEvent e)
        {
            String propertyName = e.getPropertyName();
            if (e.getSource() instanceof JSpinner) {
                JSpinner spinner = (JSpinner)(e.getSource());
                SpinnerUI spinnerUI = spinner.getUI();

                if (spinnerUI instanceof BasicSpinnerUI) {
                    BasicSpinnerUI ui = (BasicSpinnerUI)spinnerUI;

                    if ("editor".equals(propertyName)) {
                        JComponent oldEditor = (JComponent)e.getOldValue();
                        JComponent newEditor = (JComponent)e.getNewValue();
                        ui.replaceEditor(oldEditor, newEditor);
                        ui.updateEnabledState();
                        if (oldEditor instanceof JSpinner.DefaultEditor) {
                            JTextField tf =
                                ((JSpinner.DefaultEditor)oldEditor).getTextField();
                            if (tf != null) {
                                tf.removeFocusListener(nextButtonHandler);
                                tf.removeFocusListener(previousButtonHandler);
                            }
                        }
                        if (newEditor instanceof JSpinner.DefaultEditor) {
                            JTextField tf =
                                ((JSpinner.DefaultEditor)newEditor).getTextField();
                            if (tf != null) {
                                if (tf.getFont() instanceof UIResource) {
                                    tf.setFont(spinner.getFont());
                                }
                                tf.addFocusListener(nextButtonHandler);
                                tf.addFocusListener(previousButtonHandler);
                            }
                        }
                    }
                    else if ("enabled".equals(propertyName)) {
                        ui.updateEnabledState();
                    }
                }
            } else if (e.getSource() instanceof JComponent) {
                JComponent c = (JComponent)e.getSource();
                if ((c.getParent() instanceof JPanel) &&
                    (c.getParent().getParent() instanceof JSpinner) &&
                    "border".equals(propertyName)) {

                    JSpinner spinner = (JSpinner)c.getParent().getParent();
                    SpinnerUI spinnerUI = spinner.getUI();
                    if (spinnerUI instanceof BasicSpinnerUI) {
                        BasicSpinnerUI ui = (BasicSpinnerUI)spinnerUI;
                        ui.maybeRemoveEditorBorder(c);
                    }
                }
            }
        }
    }
}
