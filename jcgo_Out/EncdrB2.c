/* DO NOT EDIT THIS FILE - it is machine generated (JCGO_116) */

#ifdef JCGO_SEPARATED
#define JCGO_116
#include "jcgortl.h"
#include "Main.h"
#endif

#ifdef JCGO_116

#ifdef CHKALL_gnu_java_nio_charset_US_1ASCII
#include "jcgobchk.h"
#endif

JCGO_NOSEP_INLINE gnu_java_nio_charset_US_ASCII_Encoder CFASTCALL
gnu_java_nio_charset_US_ASCII_Encoder__this__L7qsf6( gnu_java_nio_charset_US_ASCII_Encoder
 This, java_nio_charset_Charset cs )
{
 {
  (java_nio_charset_CharsetEncoder__this__L7qsf6FF((java_nio_charset_CharsetEncoder)This,
   cs, (jfloat)1.0, (jfloat)1.0));
 }
 return This;
}

JCGO_NOSEP_FRWINL gnu_java_nio_charset_US_ASCII_Encoder CFASTCALL
gnu_java_nio_charset_US_ASCII_Encoder__new__L7qsf6( java_nio_charset_Charset
 cs )
{
 return gnu_java_nio_charset_US_ASCII_Encoder__this__L7qsf6(
  (gnu_java_nio_charset_US_ASCII_Encoder)jcgo_newObject((jvtable)&gnu_java_nio_charset_US_ASCII_Encoder_methods),
  cs);
}

JCGO_NOSEP_STATIC java_nio_charset_CoderResult CFASTCALL
gnu_java_nio_charset_US_ASCII_Encoder__encodeLoop__L3367bL9oaia( gnu_java_nio_charset_US_ASCII_Encoder
 This, java_nio_CharBuffer in, java_nio_ByteBuffer out )
{
 {
  while ((JCGO_CALL_FINALF(in) java_nio_Buffer__hasRemaining__(
   (java_nio_Buffer)in)))
  {
   jchar c;
   c= (java_nio_CharBufferImpl__get__(
    (java_nio_CharBufferImpl)in));
   if ((jint)c > (jint)127)
   {
    (java_nio_Buffer__position__I(
     (java_nio_Buffer)in, (java_nio_Buffer__position__(
     (java_nio_Buffer)in)) - (jint)1));
    return (java_nio_charset_CoderResult__unmappableForLength__I(
     (jint)1));
   }
   if (!(JCGO_CALL_FINALF(out) java_nio_Buffer__hasRemaining__(
    (java_nio_Buffer)out)))
   {
    (java_nio_Buffer__position__I(
     (java_nio_Buffer)in, (java_nio_Buffer__position__(
     (java_nio_Buffer)in)) - (jint)1));
    return JCGO_CLINIT_VARACC(java_nio_charset_CoderResult__class,
     java_nio_charset_CoderResult__OVERFLOW);
   }
   (java_nio_ByteBufferImpl__put__B(
    (java_nio_ByteBufferImpl)out, (jbyte)c));
  }
  return JCGO_CLINIT_VARACC(java_nio_charset_CoderResult__class, java_nio_charset_CoderResult__UNDERFLOW);
 }
}

JCGO_NOSEP_DATA CONST struct gnu_java_nio_charset_US_ASCII_Encoder_methods_s
 gnu_java_nio_charset_US_ASCII_Encoder_methods=
{
 JCGO_CLASSREF_OF(gnu_java_nio_charset_US_ASCII_Encoder__class),
 JCGO_GCJDESCR_INIT(gnu_java_nio_charset_US_ASCII_Encoder_s, unmappableCharacterAction)
 OBJT_gnu_java_nio_charset_US_ASCII_Encoder,
 (JCGO_OBJSIZE_T)sizeof(struct gnu_java_nio_charset_US_ASCII_Encoder_s),
 NULL,
 JCGO_CLINIT_INIT(0)
 0,
 java_lang_Object__equals__Lo,
 java_lang_Object__hashCode__,
 java_lang_Object__toString__,
 java_lang_Object__finalize__,
 gnu_java_nio_charset_US_ASCII_Encoder__encodeLoop__L3367bL9oaia,
 (void (CFASTCALL*)(java_nio_charset_CharsetEncoder))java_lang_Object__finalize__
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct gnu_java_nio_charset_US_ASCII_Encoder_class_s
 gnu_java_nio_charset_US_ASCII_Encoder__class JCGO_THRD_ATTRNONGC=
{
 {
  &java_lang_Class_methods,
  JCGO_MON_INIT
  JCGO_OBJREF_OF(*(java_lang_Object)&gnu_java_nio_charset_US_ASCII_Encoder_methods),
  JCGO_STRREF_OF(jcgo_string1_EncdrB2),
  JCGO_CLASSREF_OF(java_nio_charset_CharsetEncoder__class),
  ((jObjectArr)JCGO_OBJREF_OF(jcgo_array3_Object)),
  0x1a
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype92_GmCnnctn jcgo_array2_EncdrB2=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 37,
 {
  (jbyte)(jchar)103/*'g'*/, (jbyte)(jchar)110/*'n'*/, (jbyte)(jchar)117/*'u'*/,
   (jbyte)(jchar)46/*'.'*/, (jbyte)(jchar)106/*'j'*/, (jbyte)(jchar)97/*'a'*/,
   (jbyte)(jchar)118/*'v'*/, (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)46/*'.'*/,
   (jbyte)(jchar)110/*'n'*/, (jbyte)(jchar)105/*'i'*/, (jbyte)(jchar)111/*'o'*/,
   (jbyte)(jchar)46/*'.'*/, (jbyte)(jchar)99/*'c'*/, (jbyte)(jchar)104/*'h'*/,
   (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)114/*'r'*/, (jbyte)(jchar)115/*'s'*/,
   (jbyte)(jchar)101/*'e'*/, (jbyte)(jchar)116/*'t'*/, (jbyte)(jchar)46/*'.'*/,
   (jbyte)(jchar)85/*'U'*/, (jbyte)(jchar)83/*'S'*/, (jbyte)(jchar)95/*'_'*/,
   (jbyte)(jchar)65/*'A'*/, (jbyte)(jchar)83/*'S'*/, (jbyte)(jchar)67/*'C'*/,
   (jbyte)(jchar)73/*'I'*/, (jbyte)(jchar)73/*'I'*/, (jbyte)(jchar)36/*'$'*/,
   (jbyte)(jchar)69/*'E'*/, (jbyte)(jchar)110/*'n'*/, (jbyte)(jchar)99/*'c'*/,
   (jbyte)(jchar)111/*'o'*/, (jbyte)(jchar)100/*'d'*/, (jbyte)(jchar)101/*'e'*/,
   (jbyte)(jchar)114/*'r'*/
 }
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string1_EncdrB2
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array2_EncdrB2),
 0, 37, (jint)0xc756a470L
};

#ifdef CHKALL_gnu_java_nio_charset_US_1ASCII
#include "jcgochke.h"
#endif

#endif
