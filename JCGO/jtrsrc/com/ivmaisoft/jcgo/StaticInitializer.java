/*
 * @(#) $(JCGO)/jtrsrc/com/ivmaisoft/jcgo/StaticInitializer.java --
 * a part of JCGO translator.
 **
 * Project: JCGO (http://www.ivmaisoft.com/jcgo/)
 * Copyright (C) 2001-2012 Ivan Maidanski <ivmai@mail.ru>
 * All rights reserved.
 */

/*
 * This is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 **
 * This software is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * General Public License (GPL) for more details.
 **
 * Linking this library statically or dynamically with other modules is
 * making a combined work based on this library. Thus, the terms and
 * conditions of the GNU General Public License cover the whole
 * combination.
 **
 * As a special exception, the copyright holders of this library give you
 * permission to link this library with independent modules to produce an
 * executable, regardless of the license terms of these independent
 * modules, and to copy and distribute the resulting executable under
 * terms of your choice, provided that you also meet, for each linked
 * independent module, the terms and conditions of the license of that
 * module. An independent module is a module which is not derived from
 * or based on this library. If you modify this library, you may extend
 * this exception to your version of the library, but you are not
 * obligated to do so. If you do not wish to do so, delete this
 * exception statement from your version.
 */

package com.ivmaisoft.jcgo;

/**
 * Grammar production for a static or instance initializer.
 ** 
 * Format: STATIC/Empty Block
 */

final class StaticInitializer extends LexNode {

    private InitializerPart init;

    private MethodDefinition md;

    StaticInitializer(Term b) {
        super(b);
    }

    void processPass0(Context c) {
        assertCond(c.currentClass != null);
        if ((c.modifiers & AccModifier.STATIC) != 0) {
            c.currentClass.setMayContainClinit();
        }
        c.passZeroMethodDefnTerm = this;
        terms[0].processPass0(c);
        c.passZeroMethodDefnTerm = null;
    }

    void processPass1(Context c) {
        assertCond(c.currentClass != null);
        if ((c.modifiers & (AccModifier.PUBLIC | AccModifier.PRIVATE
                | AccModifier.PROTECTED | AccModifier.FINAL
                | AccModifier.SYNCHRONIZED | AccModifier.VOLATILE
                | AccModifier.TRANSIENT | AccModifier.NATIVE
                | AccModifier.INTERFACE | AccModifier.ABSTRACT | AccModifier.STRICT)) != 0) {
            fatalError(c, "Illegal modifier specified for the block");
        }
        md = new MethodDefinition(c,
                (c.modifiers & AccModifier.STATIC) != 0 ? "<clinit>"
                        : "<init0>", c.modifiers,
                Main.dict.classTable[Type.VOID], Empty.newTerm(),
                Empty.newTerm(), terms[0]);
        init = c.currentClass.addInitializer(terms[0], md.isClassMethod());
    }

    MethodDefinition superMethodCall() {
        return md;
    }

    BranchContext staticInitializerPass(BranchContext prevBranch,
            boolean isStatic) {
        if (md.isClassMethod() == isStatic) {
            assertCond(init != null);
            prevBranch = md.producePassOne(prevBranch);
            if (md.hasNonEmptyBody()) {
                init.setCode("", null);
            }
        }
        return prevBranch;
    }
}
