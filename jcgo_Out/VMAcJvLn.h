/* DO NOT EDIT THIS FILE - it is machine generated (JCGO_116) */

#ifdef JCGO_116

JCGO_NOSEP_INLINE java_lang_Class CFASTCALL
java_lang_VMAccessorJavaLang__arrayClassOfVMClass__LcI( java_lang_Class
 klass, jint dims );

JCGO_NOSEP_INLINE java_lang_Class CFASTCALL
java_lang_VMAccessorJavaLang__classForSigVMClass__LsLc( java_lang_String
 sig, java_lang_Class klass );

JCGO_NOSEP_FRWINL void CFASTCALL
java_lang_VMAccessorJavaLang__gcOnNoResourcesVMRuntime__( void );

JCGO_NOSEP_INLINE java_lang_ClassLoader CFASTCALL
java_lang_VMAccessorJavaLang__getClassLoaderVMClass__Lc( java_lang_Class
 klass );

JCGO_NOSEP_INLINE java_lang_String CFASTCALL
java_lang_VMAccessorJavaLang__getCustomJavaPropsVMRuntime__( void
 );

JCGO_NOSEP_INLINE jObjectArr CFASTCALL
java_lang_VMAccessorJavaLang__getInterfacesInnerVMClass__Lc( java_lang_Class
 klass );

JCGO_NOSEP_INLINE java_lang_String CFASTCALL
java_lang_VMAccessorJavaLang__getJavaExePathnameVMRuntime__( void
 );

JCGO_NOSEP_INLINE java_lang_String CFASTCALL
java_lang_VMAccessorJavaLang__getJavaVmVersionVMRuntime__( void );

JCGO_NOSEP_INLINE jboolean CFASTCALL
java_lang_VMAccessorJavaLang__hasClassInitializerVMClass__Lc( java_lang_Class
 klass );

JCGO_NOSEP_INLINE void CFASTCALL
java_lang_VMAccessorJavaLang__initializeVMClass__Lc( java_lang_Class
 klass );

JCGO_NOSEP_FRWINL jboolean CFASTCALL
java_lang_VMAccessorJavaLang__preventIOBlockingVMRuntime__( void );

JCGO_NOSEP_INLINE void CFASTCALL
java_lang_VMAccessorJavaLang__throwExceptionVMClass__Lt( java_lang_Throwable
 throwable );

JCGO_NOSEP_INLINE java_lang_String CFASTCALL
java_lang_VMAccessorJavaLang__toUpperCaseLatinVMSystem__Ls( java_lang_String
 str );

struct java_lang_VMAccessorJavaLang_methods_s
{
 java_lang_Class jcgo_class;
 JCGO_GCJDESCR_DEFN
 JCGO_TYPEID_T jcgo_typeid;
 JCGO_OBJSIZE_T jcgo_objsize;
 CONST struct jcgo_reflect_s *jcgo_reflect;
 JCGO_CLINIT_DEFN
 java_lang_VMAccessorJavaLang (CFASTCALL *jcgo_thisRtn)( java_lang_VMAccessorJavaLang
  This );
 jboolean (CFASTCALL *equals__Lo)( java_lang_Object This, java_lang_Object
  obj );
 jint (CFASTCALL *hashCode__)( java_lang_Object This );
 java_lang_String (CFASTCALL *toString__)( java_lang_Object This );
 void (CFASTCALL *finalize__)( java_lang_Object This );
};

struct java_lang_VMAccessorJavaLang_class_s
{
 struct java_lang_Class_s jcgo_class;
};

JCGO_SEP_EXTERN CONST struct jcgo_methods_s java_lang_VMAccessorJavaLang_methods;
JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_lang_VMAccessorJavaLang_class_s
 java_lang_VMAccessorJavaLang__class;

struct java_lang_VMAccessorJavaLang_s
{
 CONST struct java_lang_VMAccessorJavaLang_methods_s *JCGO_IMMFLD_CONST
  jcgo_methods;
 JCGO_MON_DEFN
};

JCGO_SEP_EXTERN CONST jcgo_arrtype90_GmCnnctn jcgo_array2_VMAcJvLn;

JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string1_VMAcJvLn;

#endif