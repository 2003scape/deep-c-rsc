/* DO NOT EDIT THIS FILE - it is machine generated (JCGO_116) */

#ifdef JCGO_116

JCGO_NOSEP_INLINE jboolean CFASTCALL
gnu_java_nio_charset_UTF_8_Decoder__isContinuation__B( jbyte b );

JCGO_NOSEP_INLINE gnu_java_nio_charset_UTF_8_Decoder CFASTCALL
gnu_java_nio_charset_UTF_8_Decoder__this__L7qsf6( gnu_java_nio_charset_UTF_8_Decoder
 This, java_nio_charset_Charset cs );
JCGO_NOSEP_FRWINL gnu_java_nio_charset_UTF_8_Decoder CFASTCALL
gnu_java_nio_charset_UTF_8_Decoder__new__L7qsf6( java_nio_charset_Charset
 cs );

JCGO_NOSEP_STATIC java_nio_charset_CoderResult CFASTCALL
gnu_java_nio_charset_UTF_8_Decoder__decodeLoop__L9oaiaL3367b( gnu_java_nio_charset_UTF_8_Decoder
 This, java_nio_ByteBuffer in, java_nio_CharBuffer out );

struct gnu_java_nio_charset_UTF_8_Decoder_methods_s
{
 java_lang_Class jcgo_class;
 JCGO_GCJDESCR_DEFN
 JCGO_TYPEID_T jcgo_typeid;
 JCGO_OBJSIZE_T jcgo_objsize;
 CONST struct jcgo_reflect_s *jcgo_reflect;
 JCGO_CLINIT_DEFN
 gnu_java_nio_charset_UTF_8_Decoder (CFASTCALL *jcgo_thisRtn)( gnu_java_nio_charset_UTF_8_Decoder
  This );
 jboolean (CFASTCALL *equals__Lo)( java_lang_Object This, java_lang_Object
  obj );
 jint (CFASTCALL *hashCode__)( java_lang_Object This );
 java_lang_String (CFASTCALL *toString__)( java_lang_Object This );
 void (CFASTCALL *finalize__)( java_lang_Object This );
 java_nio_charset_CoderResult (CFASTCALL *decodeLoop__L9oaiaL3367b)(
  gnu_java_nio_charset_UTF_8_Decoder This, java_nio_ByteBuffer in,
  java_nio_CharBuffer out );
 void (CFASTCALL *implReset__)( java_nio_charset_CharsetDecoder This
  );
};

struct gnu_java_nio_charset_UTF_8_Decoder_class_s
{
 struct java_lang_Class_s jcgo_class;
};

JCGO_SEP_EXTERN CONST struct gnu_java_nio_charset_UTF_8_Decoder_methods_s
 gnu_java_nio_charset_UTF_8_Decoder_methods;
JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct gnu_java_nio_charset_UTF_8_Decoder_class_s
 gnu_java_nio_charset_UTF_8_Decoder__class;

struct gnu_java_nio_charset_UTF_8_Decoder_s
{
 CONST struct gnu_java_nio_charset_UTF_8_Decoder_methods_s *JCGO_IMMFLD_CONST
  jcgo_methods;
 JCGO_MON_DEFN
 java_lang_String replacement;
 java_nio_charset_CodingErrorAction malformedInputAction;
 java_nio_charset_CodingErrorAction unmappableCharacterAction;
 jfloat maxCharsPerByte;
 jint state;
};

JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string1_Dcdr00;

#endif
