/* DO NOT EDIT THIS FILE - it is machine generated (JCGO_116) */

#ifdef JCGO_116

JCGO_NOSEP_STATIC java_io_FileNotFoundException CFASTCALL
java_io_FileNotFoundException__this__( java_io_FileNotFoundException
 This );

JCGO_NOSEP_INLINE java_io_FileNotFoundException CFASTCALL
java_io_FileNotFoundException__this__Ls( java_io_FileNotFoundException
 This, java_lang_String message );
JCGO_NOSEP_INLINE java_io_FileNotFoundException CFASTCALL
java_io_FileNotFoundException__new__Ls( java_lang_String message );

struct java_io_FileNotFoundException_methods_s
{
 java_lang_Class jcgo_class;
 JCGO_GCJDESCR_DEFN
 JCGO_TYPEID_T jcgo_typeid;
 JCGO_OBJSIZE_T jcgo_objsize;
 CONST struct jcgo_reflect_s *jcgo_reflect;
 JCGO_CLINIT_DEFN
 java_io_FileNotFoundException (CFASTCALL *jcgo_thisRtn)( java_io_FileNotFoundException
  This );
 jboolean (CFASTCALL *equals__Lo)( java_lang_Object This, java_lang_Object
  obj );
 jint (CFASTCALL *hashCode__)( java_lang_Object This );
 java_lang_String (CFASTCALL *toString__)( java_lang_Throwable This
  );
 void (CFASTCALL *finalize__)( java_lang_Object This );
 java_lang_String (CFASTCALL *getMessage__)( java_lang_Throwable This
  );
 java_lang_Throwable (CFASTCALL *getCause__)( java_lang_Throwable This
  );
};

struct java_io_FileNotFoundException_class_s
{
 struct java_lang_Class_s jcgo_class;
};

JCGO_SEP_EXTERN CONST struct java_io_FileNotFoundException_methods_s
 java_io_FileNotFoundException_methods;
JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_io_FileNotFoundException_class_s
 java_io_FileNotFoundException__class;

struct java_io_FileNotFoundException_s
{
 CONST struct java_io_FileNotFoundException_methods_s *JCGO_IMMFLD_CONST
  jcgo_methods;
 JCGO_MON_DEFN
 java_lang_String detailMessage;
 java_lang_Throwable cause;
 jObjectArr stackTrace;
 java_lang_VMThrowable vmState;
};

JCGO_SEP_EXTERN CONST jcgo_arrtype86_GmCnnctn jcgo_array2_FlNtFnEx;

JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string1_FlNtFnEx;

#endif