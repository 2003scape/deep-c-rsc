/* DO NOT EDIT THIS FILE - it is machine generated (JCGO_116) */

#ifdef JCGO_116

#define gnu_java_nio_charset_MacRoman__lookup ((jcharArr)JCGO_OBJREF_OF(jcgo_array2_MacRoman))

JCGO_NOSEP_STATIC gnu_java_nio_charset_MacRoman CFASTCALL
gnu_java_nio_charset_MacRoman__this__( gnu_java_nio_charset_MacRoman
 This );
JCGO_NOSEP_INLINE gnu_java_nio_charset_MacRoman CFASTCALL
gnu_java_nio_charset_MacRoman__new__( void );

struct gnu_java_nio_charset_MacRoman_methods_s
{
 java_lang_Class jcgo_class;
 JCGO_GCJDESCR_DEFN
 JCGO_TYPEID_T jcgo_typeid;
 JCGO_OBJSIZE_T jcgo_objsize;
 CONST struct jcgo_reflect_s *jcgo_reflect;
 JCGO_CLINIT_DEFN
 gnu_java_nio_charset_MacRoman (CFASTCALL *jcgo_thisRtn)( gnu_java_nio_charset_MacRoman
  This );
 jboolean (CFASTCALL *equals__Lo)( java_nio_charset_Charset This, java_lang_Object
  ob );
 jint (CFASTCALL *hashCode__)( java_nio_charset_Charset This );
 java_lang_String (CFASTCALL *toString__)( java_nio_charset_Charset
  This );
 void (CFASTCALL *finalize__)( java_lang_Object This );
 java_nio_charset_CharsetDecoder (CFASTCALL *newDecoder__)( gnu_java_nio_charset_ByteCharset
  This );
 java_nio_charset_CharsetEncoder (CFASTCALL *newEncoder__)( gnu_java_nio_charset_ByteCharset
  This );
};

struct gnu_java_nio_charset_MacRoman_class_s
{
 struct java_lang_Class_s jcgo_class;
};

JCGO_SEP_EXTERN CONST struct gnu_java_nio_charset_MacRoman_methods_s
 gnu_java_nio_charset_MacRoman_methods;
JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct gnu_java_nio_charset_MacRoman_class_s
 gnu_java_nio_charset_MacRoman__class;

struct gnu_java_nio_charset_MacRoman_s
{
 CONST struct gnu_java_nio_charset_MacRoman_methods_s *JCGO_IMMFLD_CONST
  jcgo_methods;
 JCGO_MON_DEFN
 java_lang_String canonicalName;
 jObjectArr aliases;
 jcharArr lookupTable;
};

JCGO_SEP_EXTERN jcgo_arrtype39_CharData jcgo_array2_MacRoman;

JCGO_SEP_EXTERN CONST jcgo_arrtype73_GmCnnctn jcgo_array4_MacRoman;

JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string1_MacRoman;

JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string3_MacRoman;

#endif
