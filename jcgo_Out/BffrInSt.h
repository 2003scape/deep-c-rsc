/* DO NOT EDIT THIS FILE - it is machine generated (JCGO_116) */

#ifdef JCGO_116

#define java_io_BufferedInputStream__DEFAULT_BUFFER_SIZE (jint)2048

JCGO_NOSEP_INLINE void CFASTCALL
java_io_BufferedInputStream__void( java_io_BufferedInputStream This
 );

JCGO_NOSEP_STATIC java_io_BufferedInputStream CFASTCALL
java_io_BufferedInputStream__this__L0gpraI( java_io_BufferedInputStream
 This, java_io_InputStream in, jint size );

JCGO_NOSEP_INLINE java_io_BufferedInputStream CFASTCALL
java_io_BufferedInputStream__this__L0gpra( java_io_BufferedInputStream
 This, java_io_InputStream in );
JCGO_NOSEP_FRWINL java_io_BufferedInputStream CFASTCALL
java_io_BufferedInputStream__new__L0gpra( java_io_InputStream in );

JCGO_NOSEP_STATIC jint CFASTCALL
java_io_BufferedInputStream__available__( java_io_BufferedInputStream
 This );

JCGO_NOSEP_STATIC void CFASTCALL
java_io_BufferedInputStream__close__( java_io_BufferedInputStream
 This );

JCGO_NOSEP_STATIC jint CFASTCALL
java_io_BufferedInputStream__read__( java_io_BufferedInputStream This
 );

JCGO_NOSEP_STATIC jint CFASTCALL
java_io_BufferedInputStream__read__BAII( java_io_BufferedInputStream
 This, jbyteArr b, jint off, jint len );

JCGO_NOSEP_STATIC jboolean CFASTCALL
java_io_BufferedInputStream__refill__( java_io_BufferedInputStream
 This );

struct java_io_BufferedInputStream_methods_s
{
 java_lang_Class jcgo_class;
 JCGO_GCJDESCR_DEFN
 JCGO_TYPEID_T jcgo_typeid;
 JCGO_OBJSIZE_T jcgo_objsize;
 CONST struct jcgo_reflect_s *jcgo_reflect;
 JCGO_CLINIT_DEFN
 java_io_BufferedInputStream (CFASTCALL *jcgo_thisRtn)( java_io_BufferedInputStream
  This );
 jboolean (CFASTCALL *equals__Lo)( java_lang_Object This, java_lang_Object
  obj );
 jint (CFASTCALL *hashCode__)( java_lang_Object This );
 java_lang_String (CFASTCALL *toString__)( java_lang_Object This );
 void (CFASTCALL *finalize__)( java_lang_Object This );
 jint (CFASTCALL *available__)( java_io_BufferedInputStream This );
 void (CFASTCALL *close__)( java_io_BufferedInputStream This );
 jint (CFASTCALL *read__)( java_io_BufferedInputStream This );
 jint (CFASTCALL *read__BAII)( java_io_BufferedInputStream This, jbyteArr
  b, jint off, jint len );
};

struct java_io_BufferedInputStream_class_s
{
 struct java_lang_Class_s jcgo_class;
};

JCGO_SEP_EXTERN CONST struct java_io_BufferedInputStream_methods_s
 java_io_BufferedInputStream_methods;
JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_io_BufferedInputStream_class_s
 java_io_BufferedInputStream__class;

struct java_io_BufferedInputStream_s
{
 CONST struct java_io_BufferedInputStream_methods_s *JCGO_IMMFLD_CONST
  jcgo_methods;
 JCGO_MON_DEFN
 java_io_InputStream in;
 jbyteArr buf;
 jint count;
 jint pos;
 jint markpos;
 jint bufferSize;
};

JCGO_SEP_EXTERN CONST jcgo_arrtype38_Object jcgo_array2_BffrInSt;

JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string1_BffrInSt;

#endif
