/*
 * @(#) $(JCGO)/jtrsrc/com/ivmaisoft/jcgo/ConstructorBlock.java --
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
 * Grammar production for a constructor block.
 */

final class ConstructorBlock extends Block {

    ConstructorBlock(Term b) {
        super(b);
    }

    void processPass1(Context c) {
        if (!analysisDone) {
            analysisDone = true;
            assertCond(c.currentMethod != null);
            c.currentMethod.setNeedsDummyRet();
            terms[0].processPass1(c);
            boolean oldHasConstructor = c.hasConstructor;
            c.hasConstructor = false;
            terms[1].processPass1(c);
            if (!c.hasConstructor && c.currentClass.superClass() != null) {
                Term primary = Empty.newTerm();
                if (c.currentClass.hasConstrSuperExpr()) {
                    primary = new Expression((new QualifiedName(new LexTerm(
                            LexTerm.ID, "this$00"))).setLineInfoFrom(this));
                }
                Term constr = new ExprStatement(
                        (new ConstructorCall(primary, (new Super())
                                .setLineInfoFrom(this), c.currentClass
                                .constrMakeArgumentList()))
                                .setLineInfoFrom(this));
                constr.processPass1(c);
                terms[1] = new Seq(constr, terms[1]);
            }
            c.hasConstructor = oldHasConstructor;
            terms[2].processPass1(c);
        }
    }

    int tokenCount() {
        return terms[1].tokenCount() + 1;
    }
}
