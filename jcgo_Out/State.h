/* DO NOT EDIT THIS FILE - it is machine generated (JCGO_116) */

#ifdef JCGO_116

JCGO_NOSEP_STATIC gnu_java_nio_VMChannel_State CFASTCALL
gnu_java_nio_VMChannel_State__this__L59mnd( gnu_java_nio_VMChannel_State
 This, gnu_java_nio_VMChannel this_0 );
JCGO_NOSEP_FRWINL gnu_java_nio_VMChannel_State CFASTCALL
gnu_java_nio_VMChannel_State__new__L59mnd( gnu_java_nio_VMChannel
 this_0 );

JCGO_NOSEP_FRWINL jboolean CFASTCALL
gnu_java_nio_VMChannel_State__isValid__( gnu_java_nio_VMChannel_State
 This );

JCGO_NOSEP_FRWINL jboolean CFASTCALL
gnu_java_nio_VMChannel_State__isClosed__( gnu_java_nio_VMChannel_State
 This );

JCGO_NOSEP_INLINE jint CFASTCALL
gnu_java_nio_VMChannel_State__getNativeFD__( gnu_java_nio_VMChannel_State
 This );

JCGO_NOSEP_STATIC void CFASTCALL
gnu_java_nio_VMChannel_State__close__( gnu_java_nio_VMChannel_State
 This );

JCGO_NOSEP_STATIC java_lang_String CFASTCALL
gnu_java_nio_VMChannel_State__toString__( gnu_java_nio_VMChannel_State
 This );

JCGO_NOSEP_STATIC gnu_java_nio_VMChannel_Handle CFASTCALL
gnu_java_nio_VMChannel_State__getHandle__( gnu_java_nio_VMChannel_State
 This );

JCGO_NOSEP_STATIC void CFASTCALL
gnu_java_nio_VMChannel_State__setNativeFileFD__II( gnu_java_nio_VMChannel_State
 This, jint fd, jint mode );

JCGO_NOSEP_FRWINL void CFASTCALL
gnu_java_nio_VMChannel_State__setNativeSocketFD__IZ( gnu_java_nio_VMChannel_State
 This, jint fd, jboolean stream );

JCGO_NOSEP_STATIC gnu_java_nio_VMChannel_SocketHandle CFASTCALL
gnu_java_nio_VMChannel_State__getSocketHandle__( gnu_java_nio_VMChannel_State
 This );

JCGO_NOSEP_STATIC void CFASTCALL
gnu_java_nio_VMChannel_State__checkUnset__( gnu_java_nio_VMChannel_State
 This );

JCGO_NOSEP_STATIC void CFASTCALL
gnu_java_nio_VMChannel_State__finalize__( gnu_java_nio_VMChannel_State
 This );

struct gnu_java_nio_VMChannel_State_methods_s
{
 java_lang_Class jcgo_class;
 JCGO_GCJDESCR_DEFN
 JCGO_TYPEID_T jcgo_typeid;
 JCGO_OBJSIZE_T jcgo_objsize;
 CONST struct jcgo_reflect_s *jcgo_reflect;
 JCGO_CLINIT_DEFN
 gnu_java_nio_VMChannel_State (CFASTCALL *jcgo_thisRtn)( gnu_java_nio_VMChannel_State
  This );
 jboolean (CFASTCALL *equals__Lo)( java_lang_Object This, java_lang_Object
  obj );
 jint (CFASTCALL *hashCode__)( java_lang_Object This );
 java_lang_String (CFASTCALL *toString__)( gnu_java_nio_VMChannel_State
  This );
 void (CFASTCALL *finalize__)( gnu_java_nio_VMChannel_State This );
};

struct gnu_java_nio_VMChannel_State_class_s
{
 struct java_lang_Class_s jcgo_class;
};

JCGO_SEP_EXTERN CONST struct gnu_java_nio_VMChannel_State_methods_s
 gnu_java_nio_VMChannel_State_methods;
JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct gnu_java_nio_VMChannel_State_class_s
 gnu_java_nio_VMChannel_State__class;

struct gnu_java_nio_VMChannel_State_s
{
 CONST struct gnu_java_nio_VMChannel_State_methods_s *JCGO_IMMFLD_CONST
  jcgo_methods;
 JCGO_MON_DEFN
 gnu_java_nio_VMChannel_Handle handle;
 jboolean closed;
};

JCGO_SEP_EXTERN CONST jcgo_arrtype90_GmCnnctn jcgo_array7_State;

JCGO_SEP_EXTERN CONST jcgo_arrtype32_GameShll jcgo_array8_State;

JCGO_SEP_EXTERN CONST jcgo_arrtype28_Object jcgo_array9_State;

JCGO_SEP_EXTERN CONST jcgo_arrtype91_GmCnnctn jcgo_array10_State;

JCGO_SEP_EXTERN CONST jcgo_arrtype26_Object jcgo_array11_State;

JCGO_SEP_EXTERN CONST jcgo_arrtype88_GmCnnctn jcgo_array12_State;

JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string1_State;

JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string2_State;

JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string3_State;

JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string4_State;

JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string5_State;

JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string6_State;

#endif