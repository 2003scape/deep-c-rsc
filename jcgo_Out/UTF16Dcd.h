/* DO NOT EDIT THIS FILE - it is machine generated (JCGO_116) */

#ifdef JCGO_116

#define gnu_java_nio_charset_UTF_16Decoder__BIG_ENDIAN0 0

#define gnu_java_nio_charset_UTF_16Decoder__LITTLE_ENDIAN0 (jint)1

#define gnu_java_nio_charset_UTF_16Decoder__UNKNOWN_ENDIAN (jint)2

#define gnu_java_nio_charset_UTF_16Decoder__MAYBE_BIG_ENDIAN (jint)3

#define gnu_java_nio_charset_UTF_16Decoder__MAYBE_LITTLE_ENDIAN (jint)4

#define gnu_java_nio_charset_UTF_16Decoder__BYTE_ORDER_MARK ((jchar)(jint)65279L)

#define gnu_java_nio_charset_UTF_16Decoder__REVERSED_BYTE_ORDER_MARK ((jchar)(jint)65534L)

JCGO_NOSEP_STATIC gnu_java_nio_charset_UTF_16Decoder CFASTCALL
gnu_java_nio_charset_UTF_16Decoder__this__L7qsf6I( gnu_java_nio_charset_UTF_16Decoder
 This, java_nio_charset_Charset cs, jint byteOrder );
JCGO_NOSEP_FRWINL gnu_java_nio_charset_UTF_16Decoder CFASTCALL
gnu_java_nio_charset_UTF_16Decoder__new__L7qsf6I( java_nio_charset_Charset
 cs, jint byteOrder );

JCGO_NOSEP_STATIC java_nio_charset_CoderResult CFASTCALL
gnu_java_nio_charset_UTF_16Decoder__decodeLoop__L9oaiaL3367b( gnu_java_nio_charset_UTF_16Decoder
 This, java_nio_ByteBuffer in, java_nio_CharBuffer out );

JCGO_NOSEP_INLINE void CFASTCALL
gnu_java_nio_charset_UTF_16Decoder__implReset__( gnu_java_nio_charset_UTF_16Decoder
 This );

struct gnu_java_nio_charset_UTF_16Decoder_methods_s
{
 java_lang_Class jcgo_class;
 JCGO_GCJDESCR_DEFN
 JCGO_TYPEID_T jcgo_typeid;
 JCGO_OBJSIZE_T jcgo_objsize;
 CONST struct jcgo_reflect_s *jcgo_reflect;
 JCGO_CLINIT_DEFN
 gnu_java_nio_charset_UTF_16Decoder (CFASTCALL *jcgo_thisRtn)( gnu_java_nio_charset_UTF_16Decoder
  This );
 jboolean (CFASTCALL *equals__Lo)( java_lang_Object This, java_lang_Object
  obj );
 jint (CFASTCALL *hashCode__)( java_lang_Object This );
 java_lang_String (CFASTCALL *toString__)( java_lang_Object This );
 void (CFASTCALL *finalize__)( java_lang_Object This );
 java_nio_charset_CoderResult (CFASTCALL *decodeLoop__L9oaiaL3367b)(
  gnu_java_nio_charset_UTF_16Decoder This, java_nio_ByteBuffer in,
  java_nio_CharBuffer out );
 void (CFASTCALL *implReset__)( gnu_java_nio_charset_UTF_16Decoder
  This );
};

struct gnu_java_nio_charset_UTF_16Decoder_class_s
{
 struct java_lang_Class_s jcgo_class;
};

JCGO_SEP_EXTERN CONST struct gnu_java_nio_charset_UTF_16Decoder_methods_s
 gnu_java_nio_charset_UTF_16Decoder_methods;
JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct gnu_java_nio_charset_UTF_16Decoder_class_s
 gnu_java_nio_charset_UTF_16Decoder__class;

struct gnu_java_nio_charset_UTF_16Decoder_s
{
 CONST struct gnu_java_nio_charset_UTF_16Decoder_methods_s *JCGO_IMMFLD_CONST
  jcgo_methods;
 JCGO_MON_DEFN
 java_lang_String replacement;
 java_nio_charset_CodingErrorAction malformedInputAction;
 java_nio_charset_CodingErrorAction unmappableCharacterAction;
 jfloat maxCharsPerByte;
 jint state;
 jint originalByteOrder;
 jint byteOrder;
};

JCGO_SEP_EXTERN CONST jcgo_arrtype87_GmCnnctn jcgo_array2_UTF16Dcd;

JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string1_UTF16Dcd;

#endif
