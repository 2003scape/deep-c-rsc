/* DO NOT EDIT THIS FILE - it is machine generated (JCGO_116) */

#ifdef JCGO_SEPARATED
#define JCGO_116
#include "jcgortl.h"
#include "Main.h"
#endif

#ifdef JCGO_116

#ifdef CHKALL_java_lang_VMClass
#include "jcgobchk.h"
#endif

JCGO_NOSEP_FRWINL java_lang_VMClass_IdentityHashMap CFASTCALL
java_lang_VMClass_StaticData__createArrayClassesMap__( void )
{
 {
  java_lang_VMClass_IdentityHashMap arrayClasses;
  arrayClasses= java_lang_VMClass_IdentityHashMap__new__();
  (java_lang_VMClass_IdentityHashMap__put__LoLo(
   arrayClasses, (java_lang_Object)JCGO_CORECLASS_FOR(OBJT_jboolean),
   (java_lang_Object)JCGO_CORECLASS_FOR(OBJT_jarray+OBJT_jboolean)));
  (java_lang_VMClass_IdentityHashMap__put__LoLo(
   arrayClasses, (java_lang_Object)JCGO_CORECLASS_FOR(OBJT_jbyte),
   (java_lang_Object)JCGO_CORECLASS_FOR(OBJT_jarray+OBJT_jbyte)));
  (java_lang_VMClass_IdentityHashMap__put__LoLo(
   arrayClasses, (java_lang_Object)JCGO_CORECLASS_FOR(OBJT_jchar),
   (java_lang_Object)JCGO_CORECLASS_FOR(OBJT_jarray+OBJT_jchar)));
  (java_lang_VMClass_IdentityHashMap__put__LoLo(
   arrayClasses, (java_lang_Object)JCGO_CORECLASS_FOR(OBJT_jshort),
   (java_lang_Object)JCGO_CORECLASS_FOR(OBJT_jarray+OBJT_jshort)));
  (java_lang_VMClass_IdentityHashMap__put__LoLo(
   arrayClasses, (java_lang_Object)JCGO_CORECLASS_FOR(OBJT_jint), (java_lang_Object)JCGO_CORECLASS_FOR(OBJT_jarray+OBJT_jint)));
  (java_lang_VMClass_IdentityHashMap__put__LoLo(
   arrayClasses, (java_lang_Object)JCGO_CORECLASS_FOR(OBJT_jlong),
   (java_lang_Object)JCGO_CORECLASS_FOR(OBJT_jarray+OBJT_jlong)));
  (java_lang_VMClass_IdentityHashMap__put__LoLo(
   arrayClasses, (java_lang_Object)JCGO_CORECLASS_FOR(OBJT_jfloat),
   (java_lang_Object)JCGO_CORECLASS_FOR(OBJT_jarray+OBJT_jfloat)));
  (java_lang_VMClass_IdentityHashMap__put__LoLo(
   arrayClasses, (java_lang_Object)JCGO_CORECLASS_FOR(OBJT_jdouble),
   (java_lang_Object)JCGO_CORECLASS_FOR(OBJT_jarray+OBJT_jdouble)));
  return arrayClasses;
 }
}

JCGO_NOSEP_STATIC void CFASTCALL
java_lang_VMClass_StaticData__class__0( void )
{
 JCGO_CLINIT_BEGIN(java_lang_VMClass_StaticData__class);
 java_lang_VMClass_StaticData__classBasicCtors= java_lang_VMClass_IdentityHashMap__new__();
 java_lang_VMClass_StaticData__arrayClasses= (java_lang_VMClass_StaticData__createArrayClassesMap__());
 JCGO_CLINIT_DONE(java_lang_VMClass_StaticData__class);
}

JCGO_NOSEP_DATA CONST struct jcgo_methods_s java_lang_VMClass_StaticData_methods=
{
 JCGO_CLASSREF_OF(java_lang_VMClass_StaticData__class),
 JCGO_GCJDESCR_ZEROINIT
 OBJT_java_lang_VMClass_StaticData,
 0,
 NULL,
 JCGO_CLINIT_INIT(java_lang_VMClass_StaticData__class__0)
 0
};

JCGO_NOSEP_DATA struct java_lang_VMClass_StaticData_class_s java_lang_VMClass_StaticData__class
 ATTRIBNONGC=
{
 {
  &java_lang_Class_methods,
  JCGO_MON_INIT
  JCGO_OBJREF_OF(*(java_lang_Object)&java_lang_VMClass_StaticData_methods),
  JCGO_STRREF_OF(jcgo_string1_SttcDtAF),
  JCGO_CLASSREF_OF(java_lang_Object__class),
  ((jObjectArr)JCGO_OBJREF_OF(jcgo_array3_Object)),
  0x1da
 }
};

JCGO_NOSEP_GCDATA java_lang_VMClass_IdentityHashMap java_lang_VMClass_StaticData__classBasicCtors
 ATTRIBGCBSS= jnull;

JCGO_NOSEP_GCDATA java_lang_VMClass_IdentityHashMap java_lang_VMClass_StaticData__arrayClasses
 ATTRIBGCBSS= jnull;

JCGO_NOSEP_DATA CONST jcgo_arrtype90_GmCnnctn jcgo_array2_SttcDtAF=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 28,
 {
  (jbyte)(jchar)106/*'j'*/, (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)118/*'v'*/,
   (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)46/*'.'*/, (jbyte)(jchar)108/*'l'*/,
   (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)110/*'n'*/, (jbyte)(jchar)103/*'g'*/,
   (jbyte)(jchar)46/*'.'*/, (jbyte)(jchar)86/*'V'*/, (jbyte)(jchar)77/*'M'*/,
   (jbyte)(jchar)67/*'C'*/, (jbyte)(jchar)108/*'l'*/, (jbyte)(jchar)97/*'a'*/,
   (jbyte)(jchar)115/*'s'*/, (jbyte)(jchar)115/*'s'*/, (jbyte)(jchar)36/*'$'*/,
   (jbyte)(jchar)83/*'S'*/, (jbyte)(jchar)116/*'t'*/, (jbyte)(jchar)97/*'a'*/,
   (jbyte)(jchar)116/*'t'*/, (jbyte)(jchar)105/*'i'*/, (jbyte)(jchar)99/*'c'*/,
   (jbyte)(jchar)68/*'D'*/, (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)116/*'t'*/,
   (jbyte)(jchar)97/*'a'*/
 }
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string1_SttcDtAF
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array2_SttcDtAF),
 0, 28, (jint)0x49fcc30fL
};

#ifdef CHKALL_java_lang_VMClass
#include "jcgochke.h"
#endif

#endif