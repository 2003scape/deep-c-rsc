/* DO NOT EDIT THIS FILE - it is machine generated (JCGO_116) */

#ifdef JCGO_116

JCGO_NOSEP_STATIC java_io_InputStream CFASTCALL
java_io_InputStream__this__( java_io_InputStream This );

JCGO_NOSEP_INLINE void CFASTCALL
java_io_InputStream__close__( java_io_InputStream This );

struct java_io_InputStream_methods_s
{
 java_lang_Class jcgo_class;
 JCGO_GCJDESCR_DEFN
 JCGO_TYPEID_T jcgo_typeid;
 JCGO_OBJSIZE_T jcgo_objsize;
 CONST struct jcgo_reflect_s *jcgo_reflect;
 JCGO_CLINIT_DEFN
 java_io_InputStream (CFASTCALL *jcgo_thisRtn)( java_io_InputStream
  This );
 jboolean (CFASTCALL *equals__Lo)( java_lang_Object This, java_lang_Object
  obj );
 jint (CFASTCALL *hashCode__)( java_lang_Object This );
 java_lang_String (CFASTCALL *toString__)( java_lang_Object This );
 void (CFASTCALL *finalize__)( java_lang_Object This );
 jint (CFASTCALL *available__)( java_io_InputStream This );
 void (CFASTCALL *close__)( java_io_InputStream This );
 jint (CFASTCALL *read__)( java_io_InputStream This );
 jint (CFASTCALL *read__BAII)( java_io_InputStream This, jbyteArr b,
  jint off, jint len );
};

struct java_io_InputStream_class_s
{
 struct java_lang_Class_s jcgo_class;
};

JCGO_SEP_EXTERN CONST struct jcgo_methods_s java_io_InputStream_methods;
JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_io_InputStream_class_s
 java_io_InputStream__class;

struct java_io_InputStream_s
{
 CONST struct java_io_InputStream_methods_s *JCGO_IMMFLD_CONST jcgo_methods;
 JCGO_MON_DEFN
};

JCGO_SEP_EXTERN CONST jcgo_arrtype42_GameShll jcgo_array2_InptStrm;

JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string1_InptStrm;

#endif
