/* DO NOT EDIT THIS FILE - it is machine generated (JCGO_116) */

#ifdef JCGO_116

JCGO_NOSEP_INLINE java_io_FileOutputStream CFASTCALL
java_io_FileOutputStream__this__L6745cZ( java_io_FileOutputStream
 This, java_io_File file, jboolean append );

JCGO_NOSEP_INLINE java_io_FileOutputStream CFASTCALL
java_io_FileOutputStream__this__L6745c( java_io_FileOutputStream This,
 java_io_File file );
JCGO_NOSEP_INLINE java_io_FileOutputStream CFASTCALL
java_io_FileOutputStream__new__L6745c( java_io_File file );

JCGO_NOSEP_STATIC java_io_FileOutputStream CFASTCALL
java_io_FileOutputStream__this__L0ptnm( java_io_FileOutputStream This,
 java_io_FileDescriptor fdObj );
JCGO_NOSEP_FRWINL java_io_FileOutputStream CFASTCALL
java_io_FileOutputStream__new__L0ptnm( java_io_FileDescriptor fdObj
 );

JCGO_NOSEP_STATIC void CFASTCALL
java_io_FileOutputStream__write__BAII( java_io_FileOutputStream This,
 jbyteArr buf, jint offset, jint len );

JCGO_NOSEP_INLINE void CFASTCALL
java_io_FileOutputStream__close__( java_io_FileOutputStream This );

struct java_io_FileOutputStream_methods_s
{
 java_lang_Class jcgo_class;
 JCGO_GCJDESCR_DEFN
 JCGO_TYPEID_T jcgo_typeid;
 JCGO_OBJSIZE_T jcgo_objsize;
 CONST struct jcgo_reflect_s *jcgo_reflect;
 JCGO_CLINIT_DEFN
 java_io_FileOutputStream (CFASTCALL *jcgo_thisRtn)( java_io_FileOutputStream
  This );
 jboolean (CFASTCALL *equals__Lo)( java_lang_Object This, java_lang_Object
  obj );
 jint (CFASTCALL *hashCode__)( java_lang_Object This );
 java_lang_String (CFASTCALL *toString__)( java_lang_Object This );
 void (CFASTCALL *finalize__)( java_lang_Object This );
 void (CFASTCALL *write__BAII)( java_io_FileOutputStream This, jbyteArr
  buf, jint offset, jint len );
 void (CFASTCALL *flush__)( java_io_OutputStream This );
 void (CFASTCALL *close__)( java_io_FileOutputStream This );
};

struct java_io_FileOutputStream_class_s
{
 struct java_lang_Class_s jcgo_class;
};

JCGO_SEP_EXTERN CONST struct java_io_FileOutputStream_methods_s java_io_FileOutputStream_methods;
JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_io_FileOutputStream_class_s
 java_io_FileOutputStream__class;

struct java_io_FileOutputStream_s
{
 CONST struct java_io_FileOutputStream_methods_s *JCGO_IMMFLD_CONST
  jcgo_methods;
 JCGO_MON_DEFN
 gnu_java_nio_FileChannelImpl ch;
};

JCGO_SEP_EXTERN CONST jcgo_arrtype94_GmCnnctn jcgo_array2_FlOtptSt;

JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string1_FlOtptSt;

#endif