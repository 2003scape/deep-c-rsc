/* DO NOT EDIT THIS FILE - it is machine generated (JCGO_116) */

#ifdef JCGO_SEPARATED
#define JCGO_116
#include "jcgortl.h"
#include "Main.h"
#endif

#ifdef JCGO_116

#ifdef CHKALL_java_io_UnsupportedEncodingException
#include "jcgobchk.h"
#endif

JCGO_NOSEP_STATIC java_io_UnsupportedEncodingException CFASTCALL
java_io_UnsupportedEncodingException__this__( java_io_UnsupportedEncodingException
 This )
{
 {
  (java_io_IOException__this__((java_io_IOException)This));
 }
 return This;
}

JCGO_NOSEP_INLINE java_io_UnsupportedEncodingException CFASTCALL
java_io_UnsupportedEncodingException__new__( void )
{
 return java_io_UnsupportedEncodingException__this__(
  (java_io_UnsupportedEncodingException)jcgo_newObject((jvtable)&java_io_UnsupportedEncodingException_methods));
}

JCGO_NOSEP_INLINE java_io_UnsupportedEncodingException CFASTCALL
java_io_UnsupportedEncodingException__this__Ls( java_io_UnsupportedEncodingException
 This, java_lang_String message )
{
 {
  (java_io_IOException__this__Ls((java_io_IOException)This, message));
 }
 return This;
}

JCGO_NOSEP_INLINE java_io_UnsupportedEncodingException CFASTCALL
java_io_UnsupportedEncodingException__new__Ls( java_lang_String message
 )
{
 return java_io_UnsupportedEncodingException__this__Ls(
  (java_io_UnsupportedEncodingException)jcgo_newObject((jvtable)&java_io_UnsupportedEncodingException_methods),
  message);
}

JCGO_NOSEP_DATA CONST struct java_io_UnsupportedEncodingException_methods_s
 java_io_UnsupportedEncodingException_methods=
{
 JCGO_CLASSREF_OF(java_io_UnsupportedEncodingException__class),
 JCGO_GCJDESCR_ZEROINIT
 OBJT_java_io_UnsupportedEncodingException,
 (JCGO_OBJSIZE_T)sizeof(struct java_io_UnsupportedEncodingException_s),
 NULL,
 JCGO_CLINIT_INIT(0)
 java_io_UnsupportedEncodingException__this__,
 java_lang_Object__equals__Lo,
 java_lang_Object__hashCode__,
 java_lang_Throwable__toString__,
 java_lang_Object__finalize__,
 java_lang_Throwable__getMessage__,
 java_lang_Throwable__getCause__
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_io_UnsupportedEncodingException_class_s
 java_io_UnsupportedEncodingException__class JCGO_THRD_ATTRNONGC=
{
 {
  &java_lang_Class_methods,
  JCGO_MON_INIT
  JCGO_OBJREF_OF(*(java_lang_Object)&java_io_UnsupportedEncodingException_methods),
  JCGO_STRREF_OF(jcgo_string1_UnspEnEx),
  JCGO_CLASSREF_OF(java_io_IOException__class),
  ((jObjectArr)JCGO_OBJREF_OF(jcgo_array3_Object)),
  0x1
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype75_GmCnnctn jcgo_array2_UnspEnEx=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 36,
 {
  (jbyte)(jchar)106/*'j'*/, (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)118/*'v'*/,
   (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)46/*'.'*/, (jbyte)(jchar)105/*'i'*/,
   (jbyte)(jchar)111/*'o'*/, (jbyte)(jchar)46/*'.'*/, (jbyte)(jchar)85/*'U'*/,
   (jbyte)(jchar)110/*'n'*/, (jbyte)(jchar)115/*'s'*/, (jbyte)(jchar)117/*'u'*/,
   (jbyte)(jchar)112/*'p'*/, (jbyte)(jchar)112/*'p'*/, (jbyte)(jchar)111/*'o'*/,
   (jbyte)(jchar)114/*'r'*/, (jbyte)(jchar)116/*'t'*/, (jbyte)(jchar)101/*'e'*/,
   (jbyte)(jchar)100/*'d'*/, (jbyte)(jchar)69/*'E'*/, (jbyte)(jchar)110/*'n'*/,
   (jbyte)(jchar)99/*'c'*/, (jbyte)(jchar)111/*'o'*/, (jbyte)(jchar)100/*'d'*/,
   (jbyte)(jchar)105/*'i'*/, (jbyte)(jchar)110/*'n'*/, (jbyte)(jchar)103/*'g'*/,
   (jbyte)(jchar)69/*'E'*/, (jbyte)(jchar)120/*'x'*/, (jbyte)(jchar)99/*'c'*/,
   (jbyte)(jchar)101/*'e'*/, (jbyte)(jchar)112/*'p'*/, (jbyte)(jchar)116/*'t'*/,
   (jbyte)(jchar)105/*'i'*/, (jbyte)(jchar)111/*'o'*/, (jbyte)(jchar)110/*'n'*/
 }
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string1_UnspEnEx
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array2_UnspEnEx),
 0, 36, (jint)0xd71e0aa3L
};

#ifdef CHKALL_java_io_UnsupportedEncodingException
#include "jcgochke.h"
#endif

#endif
