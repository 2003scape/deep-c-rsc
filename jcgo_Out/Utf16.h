/* DO NOT EDIT THIS FILE - it is machine generated (JCGO_116) */

#ifdef JCGO_116

JCGO_NOSEP_INLINE gnu_java_nio_charset_UTF_16 CFASTCALL
gnu_java_nio_charset_UTF_16__this__( gnu_java_nio_charset_UTF_16 This
 );
JCGO_NOSEP_INLINE gnu_java_nio_charset_UTF_16 CFASTCALL
gnu_java_nio_charset_UTF_16__new__( void );

JCGO_NOSEP_INLINE java_nio_charset_CharsetDecoder CFASTCALL
gnu_java_nio_charset_UTF_16__newDecoder__( gnu_java_nio_charset_UTF_16
 This );

JCGO_NOSEP_STATIC java_nio_charset_CharsetEncoder CFASTCALL
gnu_java_nio_charset_UTF_16__newEncoder__( gnu_java_nio_charset_UTF_16
 This );

struct gnu_java_nio_charset_UTF_16_methods_s
{
 java_lang_Class jcgo_class;
 JCGO_GCJDESCR_DEFN
 JCGO_TYPEID_T jcgo_typeid;
 JCGO_OBJSIZE_T jcgo_objsize;
 CONST struct jcgo_reflect_s *jcgo_reflect;
 JCGO_CLINIT_DEFN
 gnu_java_nio_charset_UTF_16 (CFASTCALL *jcgo_thisRtn)( gnu_java_nio_charset_UTF_16
  This );
 jboolean (CFASTCALL *equals__Lo)( java_nio_charset_Charset This, java_lang_Object
  ob );
 jint (CFASTCALL *hashCode__)( java_nio_charset_Charset This );
 java_lang_String (CFASTCALL *toString__)( java_nio_charset_Charset
  This );
 void (CFASTCALL *finalize__)( java_lang_Object This );
 java_nio_charset_CharsetDecoder (CFASTCALL *newDecoder__)( gnu_java_nio_charset_UTF_16
  This );
 java_nio_charset_CharsetEncoder (CFASTCALL *newEncoder__)( gnu_java_nio_charset_UTF_16
  This );
};

struct gnu_java_nio_charset_UTF_16_class_s
{
 struct java_lang_Class_s jcgo_class;
};

JCGO_SEP_EXTERN CONST struct gnu_java_nio_charset_UTF_16_methods_s
 gnu_java_nio_charset_UTF_16_methods;
JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct gnu_java_nio_charset_UTF_16_class_s
 gnu_java_nio_charset_UTF_16__class;

struct gnu_java_nio_charset_UTF_16_s
{
 CONST struct gnu_java_nio_charset_UTF_16_methods_s *JCGO_IMMFLD_CONST
  jcgo_methods;
 JCGO_MON_DEFN
 java_lang_String canonicalName;
 jObjectArr aliases;
};

JCGO_SEP_EXTERN CONST jcgo_arrtype69_Mdclnt jcgo_array6_Utf16;

JCGO_SEP_EXTERN CONST jcgo_arrtype28_GameShll jcgo_array7_Utf16;

JCGO_SEP_EXTERN CONST jcgo_arrtype30_Object jcgo_array8_Utf16;

JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string1_Utf16;

JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string2_Utf16;

JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string3_Utf16;

JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string4_Utf16;

JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string5_Utf16;

#endif
