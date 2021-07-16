/* DO NOT EDIT THIS FILE - it is machine generated (JCGO_116) */

#ifdef JCGO_SEPARATED
#define JCGO_116
#include "jcgortl.h"
#include "Main.h"
#endif

#ifdef JCGO_116

#ifdef CHKALL_java_lang_Math
#include "jcgobchk.h"
#endif

JCGO_NOSEP_FRWINL jint CFASTCALL
java_lang_Math__min__II( jint a, jint b )
{
 {
  return (a < b)? a : b;
 }
}

JCGO_NOSEP_INLINE jint CFASTCALL
java_lang_Math__max__II( jint a, jint b )
{
 {
  return (a > b)? a : b;
 }
}

JCGO_NOSEP_FRWINL jdouble CFASTCALL
java_lang_Math__sin__D( jdouble a )
{
 {
  return (java_lang_VMMath__sin__D(
   a));
 }
}

JCGO_NOSEP_FRWINL jdouble CFASTCALL
java_lang_Math__cos__D( jdouble a )
{
 {
  return (java_lang_VMMath__cos__D(
   a));
 }
}

JCGO_NOSEP_FRWINL jdouble CFASTCALL
java_lang_Math__sqrt__D( jdouble a )
{
 {
  return (java_lang_VMMath__sqrt__D(
   a));
 }
}

JCGO_NOSEP_FRWINL jdouble CFASTCALL
java_lang_Math__pow__DD( jdouble a, jdouble b )
{
 {
  return (java_lang_VMMath__pow__DD(
   a, b));
 }
}

JCGO_NOSEP_STATIC jdouble CFASTCALL
java_lang_Math__random__( void )
{
 JCGO_SYNC_BLOCKSAFENZ(JCGO_CLASSREF_OF(java_lang_Math__class))
 {
  jObject jcgo_rcvrL1;
  if (java_lang_Math__rand == jnull)
  {
   java_lang_Math__rand= java_util_Random__new__();
  }
  {
   jdouble jcgo_retval= (jcgo_rcvrL1= (jObject)java_lang_Math__rand,
    JCGO_CALL_FINALF((java_util_Random)jcgo_rcvrL1) java_util_Random__nextDouble__(
    (java_util_Random)jcgo_rcvrL1));
#ifndef JCGO_SEHTRY
   JCGO_SYNC_JUMPLEAVE(0);
#endif
   return jcgo_retval;
  }
 }
 JCGO_SYNC_ENDUNREACH
}

JCGO_NOSEP_DATA CONST struct jcgo_methods_s java_lang_Math_methods=
{
 JCGO_CLASSREF_OF(java_lang_Math__class),
 JCGO_GCJDESCR_ZEROINIT
 OBJT_java_lang_Math,
 0,
 NULL,
 JCGO_CLINIT_INIT(0)
 0
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_Math_class_s java_lang_Math__class
 JCGO_THRD_ATTRNONGC=
{
 {
  &java_lang_Class_methods,
  JCGO_MON_INIT
  JCGO_OBJREF_OF(*(java_lang_Object)&java_lang_Math_methods),
  JCGO_STRREF_OF(jcgo_string1_Math51F2),
  JCGO_CLASSREF_OF(java_lang_Object__class),
  ((jObjectArr)JCGO_OBJREF_OF(jcgo_array3_Object)),
  0x111
 }
};

JCGO_NOSEP_GCDATA java_util_Random java_lang_Math__rand ATTRIBGCBSS=
 jnull;

JCGO_NOSEP_DATA CONST jcgo_arrtype63_GmCnnctn jcgo_array2_Math51F2=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 14,
 {
  (jbyte)(jchar)106/*'j'*/, (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)118/*'v'*/,
   (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)46/*'.'*/, (jbyte)(jchar)108/*'l'*/,
   (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)110/*'n'*/, (jbyte)(jchar)103/*'g'*/,
   (jbyte)(jchar)46/*'.'*/, (jbyte)(jchar)77/*'M'*/, (jbyte)(jchar)97/*'a'*/,
   (jbyte)(jchar)116/*'t'*/, (jbyte)(jchar)104/*'h'*/
 }
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string1_Math51F2
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array2_Math51F2),
 0, 14, (jint)0x17c5625cL
};

#ifdef CHKALL_java_lang_Math
#include "jcgochke.h"
#endif

#endif