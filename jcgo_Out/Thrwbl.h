/* DO NOT EDIT THIS FILE - it is machine generated (JCGO_116) */

#ifdef JCGO_116

JCGO_NOSEP_INLINE void CFASTCALL
java_lang_Throwable__void( java_lang_Throwable This );

JCGO_NOSEP_INLINE java_lang_Throwable CFASTCALL
java_lang_Throwable__fillInStackTrace__( java_lang_Throwable This
 );

JCGO_NOSEP_STATIC java_lang_Throwable CFASTCALL
java_lang_Throwable__this__Ls( java_lang_Throwable This, java_lang_String
 message );

JCGO_NOSEP_STATIC java_lang_Throwable CFASTCALL
java_lang_Throwable__this__LsLt( java_lang_Throwable This, java_lang_String
 message, java_lang_Throwable cause );

JCGO_NOSEP_INLINE java_lang_String CFASTCALL
java_lang_Throwable__getLocalizedMessage__( java_lang_Throwable This
 );

JCGO_NOSEP_FRWINL java_lang_String CFASTCALL
java_lang_Throwable__getMessage__( java_lang_Throwable This );

JCGO_NOSEP_INLINE java_lang_Throwable CFASTCALL
java_lang_Throwable__getCause__( java_lang_Throwable This );

JCGO_NOSEP_INLINE java_lang_String CFASTCALL
java_lang_Throwable__stackTraceString__( java_lang_Throwable This
 );

JCGO_NOSEP_INLINE java_lang_Throwable CFASTCALL
java_lang_Throwable__this__( java_lang_Throwable This );
JCGO_NOSEP_INLINE java_lang_Throwable CFASTCALL
java_lang_Throwable__new__( void );

JCGO_NOSEP_INLINE java_lang_Throwable CFASTCALL
java_lang_Throwable__this__Lt( java_lang_Throwable This, java_lang_Throwable
 cause );

JCGO_NOSEP_STATIC java_lang_Throwable CFASTCALL
java_lang_Throwable__initCause__Lt( java_lang_Throwable This, java_lang_Throwable
 cause );

JCGO_NOSEP_STATIC java_lang_String CFASTCALL
java_lang_Throwable__toString__( java_lang_Throwable This );

JCGO_NOSEP_FRWINL void CFASTCALL
java_lang_Throwable__printStackTrace__( java_lang_Throwable This );

JCGO_NOSEP_STATIC void CFASTCALL
java_lang_Throwable__printStackTrace__L18p1o( java_lang_Throwable
 This, java_io_PrintStream s );

JCGO_NOSEP_STATIC void CFASTCALL
java_lang_Throwable__stackTraceStringBuilder__L5dy9eLsL3qagzAI( java_lang_StringBuilder
 sb, java_lang_String name, jObjectArr stack, jint equal );

JCGO_NOSEP_STATIC jObjectArr CFASTCALL
java_lang_Throwable__getStackTrace__( java_lang_Throwable This );

struct java_lang_Throwable_methods_s
{
 java_lang_Class jcgo_class;
 JCGO_GCJDESCR_DEFN
 JCGO_TYPEID_T jcgo_typeid;
 JCGO_OBJSIZE_T jcgo_objsize;
 CONST struct jcgo_reflect_s *jcgo_reflect;
 JCGO_CLINIT_DEFN
 java_lang_Throwable (CFASTCALL *jcgo_thisRtn)( java_lang_Throwable
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

struct java_lang_Throwable_class_s
{
 struct java_lang_Class_s jcgo_class;
};

JCGO_SEP_EXTERN CONST struct java_lang_Throwable_methods_s java_lang_Throwable_methods;
JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_lang_Throwable_class_s
 java_lang_Throwable__class;

struct java_lang_Throwable_s
{
 CONST struct java_lang_Throwable_methods_s *JCGO_IMMFLD_CONST jcgo_methods;
 JCGO_MON_DEFN
 java_lang_String detailMessage;
 java_lang_Throwable cause;
 jObjectArr stackTrace;
 java_lang_VMThrowable vmState;
};

JCGO_SEP_EXTERN CONST jcgo_arrtype42_GameShll jcgo_array8_Thrwbl;

JCGO_SEP_EXTERN CONST jcgo_arrtype28_Object jcgo_array9_Thrwbl;

JCGO_SEP_EXTERN CONST jcgo_arrtype77_GmCnnctn jcgo_array10_Thrwbl;

JCGO_SEP_EXTERN CONST jcgo_arrtype2_BZLib jcgo_array11_Thrwbl;

JCGO_SEP_EXTERN CONST jcgo_arrtype28_Object jcgo_array12_Thrwbl;

JCGO_SEP_EXTERN CONST jcgo_arrtype2_BZLib jcgo_array13_Thrwbl;

JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string1_Thrwbl;

JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string2_Thrwbl;

JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string3_Thrwbl;

JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string4_Thrwbl;

JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string5_Thrwbl;

JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string6_Thrwbl;

JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string7_Thrwbl;

#endif