/* DO NOT EDIT THIS FILE - it is machine generated (JCGO_116) */

#ifdef JCGO_116

JCGO_NOSEP_INLINE java_io_ByteArrayInputStream CFASTCALL
java_io_ByteArrayInputStream__this__BAII( java_io_ByteArrayInputStream
 This, jbyteArr buffer, jint offset, jint length );

JCGO_NOSEP_INLINE java_io_ByteArrayInputStream CFASTCALL
java_io_ByteArrayInputStream__this__BA( java_io_ByteArrayInputStream
 This, jbyteArr buffer );
JCGO_NOSEP_INLINE java_io_ByteArrayInputStream CFASTCALL
java_io_ByteArrayInputStream__new__BA( jbyteArr buffer );

JCGO_NOSEP_INLINE jint CFASTCALL
java_io_ByteArrayInputStream__available__( java_io_ByteArrayInputStream
 This );

JCGO_NOSEP_STATIC jint CFASTCALL
java_io_ByteArrayInputStream__read__( java_io_ByteArrayInputStream
 This );

JCGO_NOSEP_STATIC jint CFASTCALL
java_io_ByteArrayInputStream__read__BAII( java_io_ByteArrayInputStream
 This, jbyteArr buffer, jint offset, jint length );

struct java_io_ByteArrayInputStream_methods_s
{
 java_lang_Class jcgo_class;
 JCGO_GCJDESCR_DEFN
 JCGO_TYPEID_T jcgo_typeid;
 JCGO_OBJSIZE_T jcgo_objsize;
 CONST struct jcgo_reflect_s *jcgo_reflect;
 JCGO_CLINIT_DEFN
 java_io_ByteArrayInputStream (CFASTCALL *jcgo_thisRtn)( java_io_ByteArrayInputStream
  This );
 jboolean (CFASTCALL *equals__Lo)( java_lang_Object This, java_lang_Object
  obj );
 jint (CFASTCALL *hashCode__)( java_lang_Object This );
 java_lang_String (CFASTCALL *toString__)( java_lang_Object This );
 void (CFASTCALL *finalize__)( java_lang_Object This );
 jint (CFASTCALL *available__)( java_io_ByteArrayInputStream This );
 void (CFASTCALL *close__)( java_io_InputStream This );
 jint (CFASTCALL *read__)( java_io_ByteArrayInputStream This );
 jint (CFASTCALL *read__BAII)( java_io_ByteArrayInputStream This, jbyteArr
  buffer, jint offset, jint length );
};

struct java_io_ByteArrayInputStream_class_s
{
 struct java_lang_Class_s jcgo_class;
};

JCGO_SEP_EXTERN CONST struct java_io_ByteArrayInputStream_methods_s
 java_io_ByteArrayInputStream_methods;
JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_io_ByteArrayInputStream_class_s
 java_io_ByteArrayInputStream__class;

struct java_io_ByteArrayInputStream_s
{
 CONST struct java_io_ByteArrayInputStream_methods_s *JCGO_IMMFLD_CONST
  jcgo_methods;
 JCGO_MON_DEFN
 jbyteArr buf;
 jint pos;
 jint count;
};

JCGO_SEP_EXTERN CONST jcgo_arrtype90_GmCnnctn jcgo_array2_BtArInSt;

JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string1_BtArInSt;

#endif