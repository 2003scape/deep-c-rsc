/* DO NOT EDIT THIS FILE - it is machine generated (JCGO_116) */

#ifdef JCGO_SEPARATED
#define JCGO_116
#include "jcgortl.h"
#include "Main.h"
#endif

#ifdef JCGO_116

#ifdef CHKALL_java_nio_charset_CoderResult
#include "jcgobchk.h"
#endif

JCGO_NOSEP_INLINE java_nio_charset_CoderResult CFASTCALL
java_nio_charset_CoderResult_2__make__I( java_nio_charset_CoderResult_2
 This, jint length )
{
 {
  return (java_nio_charset_CoderResult__new__II(
   java_nio_charset_CoderResult__TYPE_UNMAPPABLE, length));
 }
}

JCGO_NOSEP_STATIC java_nio_charset_CoderResult_2 CFASTCALL
java_nio_charset_CoderResult_2__this__( java_nio_charset_CoderResult_2
 This )
{
 {
  (java_nio_charset_CoderResult_Cache__this__((java_nio_charset_CoderResult_Cache)This));
 }
 return This;
}

JCGO_NOSEP_FRWINL java_nio_charset_CoderResult_2 CFASTCALL
java_nio_charset_CoderResult_2__new__( void )
{
 return java_nio_charset_CoderResult_2__this__(
  (java_nio_charset_CoderResult_2)jcgo_newObject((jvtable)&java_nio_charset_CoderResult_2_methods));
}

JCGO_NOSEP_DATA CONST struct java_nio_charset_CoderResult_2_methods_s
 java_nio_charset_CoderResult_2_methods=
{
 JCGO_CLASSREF_OF(java_nio_charset_CoderResult_2__class),
 JCGO_GCJDESCR_ZEROINIT
 OBJT_java_nio_charset_CoderResult_2,
 (JCGO_OBJSIZE_T)sizeof(struct java_nio_charset_CoderResult_2_s),
 NULL,
 JCGO_CLINIT_INIT(0)
 java_nio_charset_CoderResult_2__this__,
 java_lang_Object__equals__Lo,
 java_lang_Object__hashCode__,
 java_lang_Object__toString__,
 java_lang_Object__finalize__,
 java_nio_charset_CoderResult_2__make__I
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_nio_charset_CoderResult_2_class_s
 java_nio_charset_CoderResult_2__class JCGO_THRD_ATTRNONGC=
{
 {
  &java_lang_Class_methods,
  JCGO_MON_INIT
  JCGO_OBJREF_OF(*(java_lang_Object)&java_nio_charset_CoderResult_2_methods),
  JCGO_STRREF_OF(jcgo_string1_CdrRslt2),
  JCGO_CLASSREF_OF(java_nio_charset_CoderResult_Cache__class),
  ((jObjectArr)JCGO_OBJREF_OF(jcgo_array3_Object)),
  0x8
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype77_GmCnnctn jcgo_array2_CdrRslt2=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 30,
 {
  (jbyte)(jchar)106/*'j'*/, (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)118/*'v'*/,
   (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)46/*'.'*/, (jbyte)(jchar)110/*'n'*/,
   (jbyte)(jchar)105/*'i'*/, (jbyte)(jchar)111/*'o'*/, (jbyte)(jchar)46/*'.'*/,
   (jbyte)(jchar)99/*'c'*/, (jbyte)(jchar)104/*'h'*/, (jbyte)(jchar)97/*'a'*/,
   (jbyte)(jchar)114/*'r'*/, (jbyte)(jchar)115/*'s'*/, (jbyte)(jchar)101/*'e'*/,
   (jbyte)(jchar)116/*'t'*/, (jbyte)(jchar)46/*'.'*/, (jbyte)(jchar)67/*'C'*/,
   (jbyte)(jchar)111/*'o'*/, (jbyte)(jchar)100/*'d'*/, (jbyte)(jchar)101/*'e'*/,
   (jbyte)(jchar)114/*'r'*/, (jbyte)(jchar)82/*'R'*/, (jbyte)(jchar)101/*'e'*/,
   (jbyte)(jchar)115/*'s'*/, (jbyte)(jchar)117/*'u'*/, (jbyte)(jchar)108/*'l'*/,
   (jbyte)(jchar)116/*'t'*/, (jbyte)(jchar)36/*'$'*/, (jbyte)(jchar)50/*'2'*/
 }
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string1_CdrRslt2
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array2_CdrRslt2),
 0, 30, (jint)0xb74e4e48L
};

#ifdef CHKALL_java_nio_charset_CoderResult
#include "jcgochke.h"
#endif

#endif
