/* DO NOT EDIT THIS FILE - it is machine generated (JCGO_116) */

#ifdef JCGO_116

JCGO_NOSEP_STATIC java_nio_BufferUnderflowException CFASTCALL
java_nio_BufferUnderflowException__this__( java_nio_BufferUnderflowException
 This );
JCGO_NOSEP_INLINE java_nio_BufferUnderflowException CFASTCALL
java_nio_BufferUnderflowException__new__( void );

struct java_nio_BufferUnderflowException_methods_s
{
 java_lang_Class jcgo_class;
 JCGO_GCJDESCR_DEFN
 JCGO_TYPEID_T jcgo_typeid;
 JCGO_OBJSIZE_T jcgo_objsize;
 CONST struct jcgo_reflect_s *jcgo_reflect;
 JCGO_CLINIT_DEFN
 java_nio_BufferUnderflowException (CFASTCALL *jcgo_thisRtn)( java_nio_BufferUnderflowException
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

struct java_nio_BufferUnderflowException_class_s
{
 struct java_lang_Class_s jcgo_class;
};

JCGO_SEP_EXTERN CONST struct java_nio_BufferUnderflowException_methods_s
 java_nio_BufferUnderflowException_methods;
JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_nio_BufferUnderflowException_class_s
 java_nio_BufferUnderflowException__class;

struct java_nio_BufferUnderflowException_s
{
 CONST struct java_nio_BufferUnderflowException_methods_s *JCGO_IMMFLD_CONST
  jcgo_methods;
 JCGO_MON_DEFN
 java_lang_String detailMessage;
 java_lang_Throwable cause;
 jObjectArr stackTrace;
 java_lang_VMThrowable vmState;
};

JCGO_SEP_EXTERN CONST jcgo_arrtype48_GameShll jcgo_array2_BffrUnEx;

JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string1_BffrUnEx;

#endif
