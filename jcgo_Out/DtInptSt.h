/* DO NOT EDIT THIS FILE - it is machine generated (JCGO_116) */

#ifdef JCGO_116

JCGO_NOSEP_INLINE void CFASTCALL
java_io_DataInputStream__void( java_io_DataInputStream This );

JCGO_NOSEP_FRWINL java_io_DataInputStream CFASTCALL
java_io_DataInputStream__this__L0gpra( java_io_DataInputStream This,
 java_io_InputStream in );
JCGO_NOSEP_INLINE java_io_DataInputStream CFASTCALL
java_io_DataInputStream__new__L0gpra( java_io_InputStream in );

JCGO_NOSEP_INLINE jint CFASTCALL
java_io_DataInputStream__read__BAII( java_io_DataInputStream This,
 jbyteArr b, jint off, jint len );

JCGO_NOSEP_STATIC void CFASTCALL
java_io_DataInputStream__readFully__BAII( java_io_DataInputStream
 This, jbyteArr buf, jint offset, jint len );

struct java_io_DataInputStream_methods_s
{
 java_lang_Class jcgo_class;
 JCGO_GCJDESCR_DEFN
 JCGO_TYPEID_T jcgo_typeid;
 JCGO_OBJSIZE_T jcgo_objsize;
 CONST struct jcgo_reflect_s *jcgo_reflect;
 JCGO_CLINIT_DEFN
 java_io_DataInputStream (CFASTCALL *jcgo_thisRtn)( java_io_DataInputStream
  This );
 jboolean (CFASTCALL *equals__Lo)( java_lang_Object This, java_lang_Object
  obj );
 jint (CFASTCALL *hashCode__)( java_lang_Object This );
 java_lang_String (CFASTCALL *toString__)( java_lang_Object This );
 void (CFASTCALL *finalize__)( java_lang_Object This );
 jint (CFASTCALL *available__)( java_io_FilterInputStream This );
 void (CFASTCALL *close__)( java_io_FilterInputStream This );
 jint (CFASTCALL *read__)( java_io_FilterInputStream This );
 jint (CFASTCALL *read__BAII)( java_io_DataInputStream This, jbyteArr
  b, jint off, jint len );
};

struct java_io_DataInputStream_class_s
{
 struct java_lang_Class_s jcgo_class;
};

JCGO_SEP_EXTERN CONST struct java_io_DataInputStream_methods_s java_io_DataInputStream_methods;
JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_io_DataInputStream_class_s
 java_io_DataInputStream__class;

struct java_io_DataInputStream_s
{
 CONST struct java_io_DataInputStream_methods_s *JCGO_IMMFLD_CONST
  jcgo_methods;
 JCGO_MON_DEFN
 java_io_InputStream in;
};

JCGO_SEP_EXTERN CONST jcgo_arrtype91_GmCnnctn jcgo_array3_DtInptSt;

JCGO_SEP_EXTERN CONST jcgo_arrtype492_Mdclnt jcgo_array4_DtInptSt;

JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string1_DtInptSt;

JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string2_DtInptSt;

#endif
