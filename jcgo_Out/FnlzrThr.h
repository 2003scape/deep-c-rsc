/* DO NOT EDIT THIS FILE - it is machine generated (JCGO_116) */

#ifdef JCGO_116

#define java_lang_VMRuntime_FinalizerThread__MAX_NOTIFY_COUNT_DELTA (jint)10

#define java_lang_VMRuntime_FinalizerThread__lock ((jObjectArr)JCGO_OBJREF_OF(jcgo_array2_FnlzrThr))

JCGO_NOSEP_STATIC java_lang_VMRuntime_FinalizerThread CFASTCALL
java_lang_VMRuntime_FinalizerThread__this__ZLsI( java_lang_VMRuntime_FinalizerThread
 This, java_lang_String name, jint priority, jboolean noWait );
JCGO_NOSEP_INLINE java_lang_VMRuntime_FinalizerThread CFASTCALL
java_lang_VMRuntime_FinalizerThread__new__ZLsI( java_lang_String name,
 jint priority, jboolean noWait );

JCGO_NOSEP_INLINE void CFASTCALL
java_lang_VMRuntime_FinalizerThread__changeStalledFinalizer__( java_lang_VMRuntime_FinalizerThread
 This );

JCGO_NOSEP_STATIC void CFASTCALL
java_lang_VMRuntime_FinalizerThread__run__( java_lang_VMRuntime_FinalizerThread
 This );

JCGO_NOSEP_FRWINL jboolean CFASTCALL
java_lang_VMRuntime_FinalizerThread__runFinalization__( java_lang_VMRuntime_FinalizerThread
 This );

JCGO_NOSEP_STATIC jboolean CFASTCALL
java_lang_VMRuntime_FinalizerThread__createFinalizer__( void );

JCGO_NOSEP_FRWINL void CFASTCALL
java_lang_VMRuntime_FinalizerThread__notifyFinalizer__( java_lang_VMRuntime_FinalizerThread
 This );

struct java_lang_VMRuntime_FinalizerThread_methods_s
{
 java_lang_Class jcgo_class;
 JCGO_GCJDESCR_DEFN
 JCGO_TYPEID_T jcgo_typeid;
 JCGO_OBJSIZE_T jcgo_objsize;
 CONST struct jcgo_reflect_s *jcgo_reflect;
 JCGO_CLINIT_DEFN
 java_lang_VMRuntime_FinalizerThread (CFASTCALL *jcgo_thisRtn)( java_lang_VMRuntime_FinalizerThread
  This );
 jboolean (CFASTCALL *equals__Lo)( java_lang_Object This, java_lang_Object
  obj );
 jint (CFASTCALL *hashCode__)( java_lang_Object This );
 java_lang_String (CFASTCALL *toString__)( java_lang_Thread This );
 void (CFASTCALL *finalize__)( java_lang_Object This );
 void (CFASTCALL *run__)( java_lang_VMRuntime_FinalizerThread This
  );
};

struct java_lang_VMRuntime_FinalizerThread_class_s
{
 struct java_lang_Class_s jcgo_class;
};

JCGO_SEP_EXTERN CONST struct java_lang_VMRuntime_FinalizerThread_methods_s
 java_lang_VMRuntime_FinalizerThread_methods;
JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_lang_VMRuntime_FinalizerThread_class_s
 java_lang_VMRuntime_FinalizerThread__class;

JCGO_SEP_EXTERN jint java_lang_VMRuntime_FinalizerThread__stalledThreadCnt;
JCGO_SEP_EXTERN jint java_lang_VMRuntime_FinalizerThread__secondaryThreadCnt;
JCGO_SEP_EXTERN jint java_lang_VMRuntime_FinalizerThread__notifyCount;

struct java_lang_VMRuntime_FinalizerThread_s
{
 CONST struct java_lang_VMRuntime_FinalizerThread_methods_s *JCGO_IMMFLD_CONST
  jcgo_methods;
 JCGO_MON_DEFN
 java_lang_VMThread JCGO_THRD_VOLATILE vmThread;
 java_lang_ThreadGroup JCGO_THRD_VOLATILE group;
 java_lang_Runnable runnable;
 java_lang_String JCGO_THRD_VOLATILE name;
 java_lang_Throwable stillborn;
 java_lang_ClassLoader contextClassLoader;
 java_util_AbstractMap locals;
 jlong stacksize;
 JCGO_THRD_VOLATILE jint priority;
 JCGO_THRD_VOLATILE jboolean daemon;
 jboolean contextClassLoaderIsSystemClassLoader;
 jint runFinalizeCount;
 jboolean noWait;
};

JCGO_SEP_EXTERN JCGO_NOTHR_CONST jcgo_arrtype2_GameMdl jcgo_array2_FnlzrThr;

JCGO_SEP_EXTERN CONST jcgo_arrtype82_GmCnnctn jcgo_array6_FnlzrThr;

JCGO_SEP_EXTERN CONST jcgo_arrtype23_Object jcgo_array7_FnlzrThr;

JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string1_FnlzrThr;

JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string3_FnlzrThr;

JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string4_FnlzrThr;

JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string5_FnlzrThr;

#endif
