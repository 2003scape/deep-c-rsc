/* DO NOT EDIT THIS FILE - it is machine generated (JCGO_116) */

#ifdef JCGO_SEPARATED
#define JCGO_116
#include "jcgortl.h"
#include "Main.h"
#endif

#ifdef JCGO_116

#ifdef CHKALL_java_util_Random
#include "jcgobchk.h"
#endif

JCGO_NOSEP_INLINE java_util_Random CFASTCALL
java_util_Random__this__J( java_util_Random This, jlong seed )
{
 {
  ;
  (java_util_Random__setSeed__J(
   This, seed));
 }
 return This;
}

JCGO_NOSEP_FRWINL void CFASTCALL
java_util_Random__setSeed__J( java_util_Random This, jlong seed )
{
 JCGO_SYNC_BLOCKSAFENZ(This)
 {
  JCGO_FIELD_NZACCESS(This, seed)= (seed ^ JLONG_C(0x5deece66d)) &
   (JLONG_C(0xffffffffffff));
  (void)jfalse;
 }
 JCGO_SYNC_END
}

JCGO_NOSEP_INLINE java_util_Random CFASTCALL
java_util_Random__this__( java_util_Random This )
{
 {
  (java_util_Random__this__J((java_util_Random)This, (java_lang_System__currentTimeMillis__())));
 }
 return This;
}

JCGO_NOSEP_FRWINL java_util_Random CFASTCALL
java_util_Random__new__( void )
{
 return java_util_Random__this__(
  (java_util_Random)jcgo_newObject((jvtable)&java_util_Random_methods));
}

JCGO_NOSEP_STATIC jint CFASTCALL
java_util_Random__next__I( java_util_Random This, jint bits )
{
 JCGO_SYNC_BLOCKSAFENZ(This)
 {
  JCGO_FIELD_NZACCESS(This, seed)= (JCGO_FIELD_NZACCESS(This, seed) *
   JLONG_C(0x5deece66d) + JLONG_C(11)) & (JLONG_C(0xffffffffffff));
  {
   jint jcgo_retval= (jint)JCGO_LUSHR_F(JCGO_FIELD_NZACCESS(This, seed),
    ((jint)48 - bits));
#ifndef JCGO_SEHTRY
   JCGO_SYNC_JUMPLEAVE(0);
#endif
   return jcgo_retval;
  }
 }
 JCGO_SYNC_ENDUNREACH
}

JCGO_NOSEP_FRWINL jdouble CFASTCALL
java_util_Random__nextDouble__( java_util_Random This )
{
 {
  jlong jcgo_rcvrJ1;
  return jcgo_fdiv((jdouble)(jcgo_rcvrJ1= JCGO_LSHL_F((jlong)(java_util_Random__next__I(
   This, (jint)26)), (jint)27), jcgo_rcvrJ1 + (jlong)(java_util_Random__next__I(
   This, (jint)27))), (jdouble)JLONG_C(0x20000000000000));
 }
}

JCGO_NOSEP_DATA CONST struct java_util_Random_methods_s java_util_Random_methods=
{
 JCGO_CLASSREF_OF(java_util_Random__class),
 JCGO_GCJDESCR_ZEROINIT
 OBJT_java_util_Random,
 -(JCGO_OBJSIZE_T)sizeof(struct java_util_Random_s),
 NULL,
 JCGO_CLINIT_INIT(0)
 java_util_Random__this__,
 java_lang_Object__equals__Lo,
 java_lang_Object__hashCode__,
 java_lang_Object__toString__,
 java_lang_Object__finalize__
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_util_Random_class_s java_util_Random__class
 JCGO_THRD_ATTRNONGC=
{
 {
  &java_lang_Class_methods,
  JCGO_MON_INIT
  JCGO_OBJREF_OF(*(java_lang_Object)&java_util_Random_methods),
  JCGO_STRREF_OF(jcgo_string1_Random),
  JCGO_CLASSREF_OF(java_lang_Object__class),
  ((jObjectArr)JCGO_OBJREF_OF(jcgo_array3_Object)),
  0x1
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype22_Object jcgo_array2_Random=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 16,
 {
  (jbyte)(jchar)106/*'j'*/, (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)118/*'v'*/,
   (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)46/*'.'*/, (jbyte)(jchar)117/*'u'*/,
   (jbyte)(jchar)116/*'t'*/, (jbyte)(jchar)105/*'i'*/, (jbyte)(jchar)108/*'l'*/,
   (jbyte)(jchar)46/*'.'*/, (jbyte)(jchar)82/*'R'*/, (jbyte)(jchar)97/*'a'*/,
   (jbyte)(jchar)110/*'n'*/, (jbyte)(jchar)100/*'d'*/, (jbyte)(jchar)111/*'o'*/,
   (jbyte)(jchar)109/*'m'*/
 }
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string1_Random
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array2_Random),
 0, 16, (jint)0xc4091e83L
};

#ifdef CHKALL_java_util_Random
#include "jcgochke.h"
#endif

#endif
