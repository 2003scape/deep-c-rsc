/* DO NOT EDIT THIS FILE - it is machine generated (JCGO_116) */

#ifdef JCGO_116

JCGO_NOSEP_STATIC java_lang_VMThread_UncaughtHandler CFASTCALL
java_lang_VMThread_UncaughtHandler__this__( java_lang_VMThread_UncaughtHandler
 This );
JCGO_NOSEP_FRWINL java_lang_VMThread_UncaughtHandler CFASTCALL
java_lang_VMThread_UncaughtHandler__new__( void );

JCGO_NOSEP_FRWINL jboolean CFASTCALL
java_lang_VMThread_UncaughtHandler__printJniException__Lt( java_lang_VMThread_UncaughtHandler
 This, java_lang_Throwable throwable );

JCGO_NOSEP_FRWINL jboolean CFASTCALL
java_lang_VMThread_UncaughtHandler__printException__L20uxkLt( java_lang_VMThread_UncaughtHandler
 This, java_lang_Thread thread, java_lang_Throwable throwable );

struct java_lang_VMThread_UncaughtHandler_methods_s
{
 java_lang_Class jcgo_class;
 JCGO_GCJDESCR_DEFN
 JCGO_TYPEID_T jcgo_typeid;
 JCGO_OBJSIZE_T jcgo_objsize;
 CONST struct jcgo_reflect_s *jcgo_reflect;
 JCGO_CLINIT_DEFN
 java_lang_VMThread_UncaughtHandler (CFASTCALL *jcgo_thisRtn)( java_lang_VMThread_UncaughtHandler
  This );
 jboolean (CFASTCALL *equals__Lo)( java_lang_Object This, java_lang_Object
  obj );
 jint (CFASTCALL *hashCode__)( java_lang_Object This );
 java_lang_String (CFASTCALL *toString__)( java_lang_Object This );
 void (CFASTCALL *finalize__)( java_lang_Object This );
};

struct java_lang_VMThread_UncaughtHandler_class_s
{
 struct java_lang_Class_s jcgo_class;
};

JCGO_SEP_EXTERN CONST struct java_lang_VMThread_UncaughtHandler_methods_s
 java_lang_VMThread_UncaughtHandler_methods;
JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_lang_VMThread_UncaughtHandler_class_s
 java_lang_VMThread_UncaughtHandler__class;

struct java_lang_VMThread_UncaughtHandler_s
{
 CONST struct java_lang_VMThread_UncaughtHandler_methods_s *JCGO_IMMFLD_CONST
  jcgo_methods;
 JCGO_MON_DEFN
 jboolean insideJniExc;
};

JCGO_SEP_EXTERN CONST jcgo_arrtype87_GmCnnctn jcgo_array5_UncghtHn;

JCGO_SEP_EXTERN CONST jcgo_arrtype640_Mdclnt jcgo_array6_UncghtHn;

JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string1_UncghtHn;

JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string2_UncghtHn;

JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string3_UncghtHn;

JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string4_UncghtHn;

#endif