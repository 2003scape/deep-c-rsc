/* DO NOT EDIT THIS FILE - it is machine generated (JCGO_116) */

#ifdef JCGO_SEPARATED
#define JCGO_116
#include "jcgortl.h"
#include "Main.h"
#endif

#ifdef JCGO_116

#ifdef CHKALL_java_lang_IllegalStateException
#include "jcgobchk.h"
#endif

JCGO_NOSEP_STATIC java_lang_IllegalStateException CFASTCALL
java_lang_IllegalStateException__this__( java_lang_IllegalStateException
 This )
{
 {
  (java_lang_RuntimeException__this__((java_lang_RuntimeException)This));
 }
 return This;
}

JCGO_NOSEP_FRWINL java_lang_IllegalStateException CFASTCALL
java_lang_IllegalStateException__new__( void )
{
 return java_lang_IllegalStateException__this__(
  (java_lang_IllegalStateException)jcgo_newObject((jvtable)&java_lang_IllegalStateException_methods));
}

JCGO_NOSEP_DATA CONST struct java_lang_IllegalStateException_methods_s
 java_lang_IllegalStateException_methods=
{
 JCGO_CLASSREF_OF(java_lang_IllegalStateException__class),
 JCGO_GCJDESCR_ZEROINIT
 OBJT_java_lang_IllegalStateException,
 (JCGO_OBJSIZE_T)sizeof(struct java_lang_IllegalStateException_s),
 NULL,
 JCGO_CLINIT_INIT(0)
 java_lang_IllegalStateException__this__,
 java_lang_Object__equals__Lo,
 java_lang_Object__hashCode__,
 java_lang_Throwable__toString__,
 java_lang_Object__finalize__,
 java_lang_Throwable__getMessage__,
 java_lang_Throwable__getCause__
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_IllegalStateException_class_s
 java_lang_IllegalStateException__class JCGO_THRD_ATTRNONGC=
{
 {
  &java_lang_Class_methods,
  JCGO_MON_INIT
  JCGO_OBJREF_OF(*(java_lang_Object)&java_lang_IllegalStateException_methods),
  JCGO_STRREF_OF(jcgo_string1_IllgStEx),
  JCGO_CLASSREF_OF(java_lang_RuntimeException__class),
  ((jObjectArr)JCGO_OBJREF_OF(jcgo_array3_Object)),
  0x1
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype73_GmCnnctn jcgo_array2_IllgStEx=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 31,
 {
  (jbyte)(jchar)106/*'j'*/, (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)118/*'v'*/,
   (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)46/*'.'*/, (jbyte)(jchar)108/*'l'*/,
   (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)110/*'n'*/, (jbyte)(jchar)103/*'g'*/,
   (jbyte)(jchar)46/*'.'*/, (jbyte)(jchar)73/*'I'*/, (jbyte)(jchar)108/*'l'*/,
   (jbyte)(jchar)108/*'l'*/, (jbyte)(jchar)101/*'e'*/, (jbyte)(jchar)103/*'g'*/,
   (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)108/*'l'*/, (jbyte)(jchar)83/*'S'*/,
   (jbyte)(jchar)116/*'t'*/, (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)116/*'t'*/,
   (jbyte)(jchar)101/*'e'*/, (jbyte)(jchar)69/*'E'*/, (jbyte)(jchar)120/*'x'*/,
   (jbyte)(jchar)99/*'c'*/, (jbyte)(jchar)101/*'e'*/, (jbyte)(jchar)112/*'p'*/,
   (jbyte)(jchar)116/*'t'*/, (jbyte)(jchar)105/*'i'*/, (jbyte)(jchar)111/*'o'*/,
   (jbyte)(jchar)110/*'n'*/
 }
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string1_IllgStEx
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array2_IllgStEx),
 0, 31, (jint)0x4818f00L
};

#ifdef CHKALL_java_lang_IllegalStateException
#include "jcgochke.h"
#endif

#endif
