/* DO NOT EDIT THIS FILE - it is machine generated (JCGO_116) */

#ifdef JCGO_116

JCGO_NOSEP_INLINE java_lang_VMThrowable CFASTCALL
java_lang_VMThrowable__this__Lo( java_lang_VMThrowable This, java_lang_Object
 vmdata );
JCGO_NOSEP_INLINE java_lang_VMThrowable CFASTCALL
java_lang_VMThrowable__new__Lo( java_lang_Object vmdata );

JCGO_NOSEP_FRWINL java_lang_VMThrowable CFASTCALL
java_lang_VMThrowable__fillInStackTrace__Lt( java_lang_Throwable throwable
 );

JCGO_NOSEP_FRWINL jObjectArr CFASTCALL
java_lang_VMThrowable__getStackTrace__Lt( java_lang_VMThrowable This,
 java_lang_Throwable throwable );

JCGO_NOSEP_STATIC void CFASTCALL
java_lang_VMThrowable__exit__I( jint status );

JCGO_NOSEP_STATIC java_lang_Object CFASTCALL
java_lang_VMThrowable__createInstantiationException0X__Lc( java_lang_Class
 aclass );

JCGO_NOSEP_STATIC java_lang_Object CFASTCALL
java_lang_VMThrowable__createNoClassDefFoundError0X__LsI( java_lang_String
 name, jint isErroneousState );

JCGO_NOSEP_STATIC java_lang_Object CFASTCALL
java_lang_VMThrowable__createNoSuchFieldError0X__LcLsLsI( java_lang_Class
 aclass, java_lang_String name, java_lang_String sig, jint isStatic
 );

JCGO_NOSEP_STATIC java_lang_Object CFASTCALL
java_lang_VMThrowable__createNoSuchMethodError0X__LcLsLsI( java_lang_Class
 aclass, java_lang_String name, java_lang_String sig, jint isStatic
 );

JCGO_NOSEP_STATIC java_lang_Object CFASTCALL
java_lang_VMThrowable__createNullPointerException0X__( void );

JCGO_NOSEP_STATIC void CFASTCALL
java_lang_VMThrowable__throwArithmeticException0X__( void );

JCGO_NOSEP_STATIC void CFASTCALL
java_lang_VMThrowable__throwArrayIndexOutOfBoundsException0X__( void
 );

JCGO_NOSEP_STATIC void CFASTCALL
java_lang_VMThrowable__throwArrayStoreException0X__( void );

JCGO_NOSEP_STATIC void CFASTCALL
java_lang_VMThrowable__throwClassCastException0X__( void );

JCGO_NOSEP_STATIC void CFASTCALL
java_lang_VMThrowable__throwNegativeArraySizeException0X__( void );

JCGO_NOSEP_STATIC void CFASTCALL
java_lang_VMThrowable__throwStringIndexOutOfBoundsException0X__( void
 );

JCGO_NOSEP_STATIC void CFASTCALL
java_lang_VMThrowable__throwOutOfMemoryError0X__( void );

JCGO_NOSEP_STATIC void CFASTCALL
java_lang_VMThrowable__throwUnsatisfiedLinkError0X__( void );

JCGO_NOSEP_STATIC void CFASTCALL
java_lang_VMThrowable__throwExceptionInInitializer0X__LoLc( java_lang_Object
 throwableObj, java_lang_Class aclass );

JCGO_NOSEP_STATIC java_lang_String CFASTCALL
java_lang_VMThrowable__getClassName__Lc( java_lang_Class aclass );

JCGO_NOSEP_STATIC jint CFASTCALL
java_lang_VMThrowable__setNullException0__Lo( java_lang_Object throwable
 );

JCGO_NOSEP_STATIC java_lang_Object CFASTCALL
java_lang_VMThrowable__fillInStackTrace0__( void );

JCGO_NOSEP_STATIC jint CFASTCALL
java_lang_VMThrowable__getStackTraceLen0__Lo( java_lang_Object vmdata
 );

JCGO_NOSEP_STATIC jint CFASTCALL
java_lang_VMThrowable__getStackTraceFill0__LoLcALsAIA( java_lang_Object
 vmdata, jObjectArr classes, jObjectArr methodNames, jintArr lineNumbers
 );

JCGO_NOSEP_STATIC void CFASTCALL
java_lang_VMThrowable__exit0__I( jint status );

#define JCGO_NATCLASS_java_lang_VMThrowable

struct java_lang_VMThrowable_methods_s
{
 java_lang_Class jcgo_class;
 JCGO_GCJDESCR_DEFN
 JCGO_TYPEID_T jcgo_typeid;
 JCGO_OBJSIZE_T jcgo_objsize;
 CONST struct jcgo_reflect_s *jcgo_reflect;
 JCGO_CLINIT_DEFN
 java_lang_VMThrowable (CFASTCALL *jcgo_thisRtn)( java_lang_VMThrowable
  This );
 jboolean (CFASTCALL *equals__Lo)( java_lang_Object This, java_lang_Object
  obj );
 jint (CFASTCALL *hashCode__)( java_lang_Object This );
 java_lang_String (CFASTCALL *toString__)( java_lang_Object This );
 void (CFASTCALL *finalize__)( java_lang_Object This );
};

struct java_lang_VMThrowable_class_s
{
 struct java_lang_Class_s jcgo_class;
};

JCGO_SEP_EXTERN CONST struct java_lang_VMThrowable_methods_s java_lang_VMThrowable_methods;
JCGO_SEP_EXTERN struct java_lang_VMThrowable_class_s java_lang_VMThrowable__class;

JCGO_NOSEP_STATIC void CFASTCALL
java_lang_VMThrowable__class__0( void );

JCGO_SEP_GCEXTERN java_lang_OutOfMemoryError java_lang_VMThrowable__outOfMemoryError;

struct java_lang_VMThrowable_s
{
 CONST struct java_lang_VMThrowable_methods_s *JCGO_IMMFLD_CONST jcgo_methods;
 JCGO_MON_DEFN
 java_lang_Object vmdata;
};

JCGO_SEP_EXTERN CONST jcgo_arrtype80_GmCnnctn jcgo_array6_VMThrwbl;

JCGO_SEP_EXTERN CONST jcgo_arrtype27_Object jcgo_array7_VMThrwbl;

JCGO_SEP_EXTERN CONST jcgo_arrtype30_GameShll jcgo_array8_VMThrwbl;

JCGO_SEP_EXTERN CONST jcgo_arrtype28_GameShll jcgo_array9_VMThrwbl;

JCGO_SEP_EXTERN CONST jcgo_arrtype73_GmCnnctn jcgo_array10_VMThrwbl;

JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string1_VMThrwbl;

JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string2_VMThrwbl;

JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string3_VMThrwbl;

JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string4_VMThrwbl;

JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string5_VMThrwbl;

#endif
