/* DO NOT EDIT THIS FILE - it is machine generated (JCGO_116) */

#ifdef JCGO_SEPARATED
#define JCGO_116
#include "jcgortl.h"
#include "Main.h"
#endif

#ifdef JCGO_116

#ifdef CHKALL_gnu_java_nio_charset_ByteCharset
#include "jcgobchk.h"
#endif

JCGO_NOSEP_STATIC gnu_java_nio_charset_ByteCharset_Decoder CFASTCALL
gnu_java_nio_charset_ByteCharset_Decoder__this__L85ew7( gnu_java_nio_charset_ByteCharset_Decoder
 This, gnu_java_nio_charset_ByteCharset cs )
{
 {
  (java_nio_charset_CharsetDecoder__this__L7qsf6FF((java_nio_charset_CharsetDecoder)This,
   (java_nio_charset_Charset)cs, (jfloat)1.0, (jfloat)1.0));
  JCGO_FIELD_NZACCESS(This, lookup)= (JCGO_CALL_FINALF(cs) gnu_java_nio_charset_ByteCharset__getLookupTable__(
   cs));
 }
 return This;
}

JCGO_NOSEP_FRWINL gnu_java_nio_charset_ByteCharset_Decoder CFASTCALL
gnu_java_nio_charset_ByteCharset_Decoder__new__L85ew7( gnu_java_nio_charset_ByteCharset
 cs )
{
 return gnu_java_nio_charset_ByteCharset_Decoder__this__L85ew7(
  (gnu_java_nio_charset_ByteCharset_Decoder)jcgo_newObject((jvtable)&gnu_java_nio_charset_ByteCharset_Decoder_methods),
  cs);
}

JCGO_NOSEP_STATIC java_nio_charset_CoderResult CFASTCALL
gnu_java_nio_charset_ByteCharset_Decoder__decodeLoop__L9oaiaL3367b(
 gnu_java_nio_charset_ByteCharset_Decoder This, java_nio_ByteBuffer
 in, java_nio_CharBuffer out )
{
 {
  while ((JCGO_CALL_FINALF(in) java_nio_Buffer__hasRemaining__(
   (java_nio_Buffer)in)))
  {
   jchar c;
   jbyte b;
   b= (java_nio_ByteBufferImpl__get__(
    (java_nio_ByteBufferImpl)in));
   if (!(JCGO_CALL_FINALF(out) java_nio_Buffer__hasRemaining__(
    (java_nio_Buffer)out)))
   {
    (java_nio_Buffer__position__I(
     (java_nio_Buffer)in, (java_nio_Buffer__position__(
     (java_nio_Buffer)in)) - (jint)1));
    return JCGO_CLINIT_VARACC(java_nio_charset_CoderResult__class,
     java_nio_charset_CoderResult__OVERFLOW);
   }
   if ((c= JCGO_ARRAY_CACCESS(JCGO_FIELD_NZACCESS(This, lookup), (jint)((jint)((unsigned char)b)))) ==
    gnu_java_nio_charset_ByteCharset__NONE)
   {
    ;
   }
   (java_nio_CharBufferImpl__put__C(
    (java_nio_CharBufferImpl)out, c));
  }
  return JCGO_CLINIT_VARACC(java_nio_charset_CoderResult__class, java_nio_charset_CoderResult__UNDERFLOW);
 }
}

JCGO_NOSEP_DATA CONST struct gnu_java_nio_charset_ByteCharset_Decoder_methods_s
 gnu_java_nio_charset_ByteCharset_Decoder_methods=
{
 JCGO_CLASSREF_OF(gnu_java_nio_charset_ByteCharset_Decoder__class),
 JCGO_GCJDESCR_INIT(gnu_java_nio_charset_ByteCharset_Decoder_s, lookup)
 OBJT_gnu_java_nio_charset_ByteCharset_Decoder,
 (JCGO_OBJSIZE_T)sizeof(struct gnu_java_nio_charset_ByteCharset_Decoder_s),
 NULL,
 JCGO_CLINIT_INIT(0)
 0,
 java_lang_Object__equals__Lo,
 java_lang_Object__hashCode__,
 java_lang_Object__toString__,
 java_lang_Object__finalize__,
 gnu_java_nio_charset_ByteCharset_Decoder__decodeLoop__L9oaiaL3367b,
 (void (CFASTCALL*)(java_nio_charset_CharsetDecoder))java_lang_Object__finalize__
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct gnu_java_nio_charset_ByteCharset_Decoder_class_s
 gnu_java_nio_charset_ByteCharset_Decoder__class JCGO_THRD_ATTRNONGC=
{
 {
  &java_lang_Class_methods,
  JCGO_MON_INIT
  JCGO_OBJREF_OF(*(java_lang_Object)&gnu_java_nio_charset_ByteCharset_Decoder_methods),
  JCGO_STRREF_OF(jcgo_string1_Dcdr01),
  JCGO_CLASSREF_OF(java_nio_charset_CharsetDecoder__class),
  ((jObjectArr)JCGO_OBJREF_OF(jcgo_array3_Object)),
  0x1a
 }
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string1_Dcdr01
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array2_BtChrst),
 0, 40, (jint)0x9f10cfbcL
};

#ifdef CHKALL_gnu_java_nio_charset_ByteCharset
#include "jcgochke.h"
#endif

#endif
