/* DO NOT EDIT THIS FILE - it is machine generated (JCGO_116) */

#ifdef JCGO_116

JCGO_NOSEP_STATIC gnu_java_net_VMPlainSocketImpl_State CFASTCALL
gnu_java_net_VMPlainSocketImpl_State__this__L8vgeu( gnu_java_net_VMPlainSocketImpl_State
 This, gnu_java_net_VMPlainSocketImpl this_0 );
JCGO_NOSEP_FRWINL gnu_java_net_VMPlainSocketImpl_State CFASTCALL
gnu_java_net_VMPlainSocketImpl_State__new__L8vgeu( gnu_java_net_VMPlainSocketImpl
 this_0 );

JCGO_NOSEP_STATIC void CFASTCALL
gnu_java_net_VMPlainSocketImpl_State__setChannelFD__L7r5z2( gnu_java_net_VMPlainSocketImpl_State
 This, gnu_java_nio_VMChannel_State newChState );

JCGO_NOSEP_INLINE jboolean CFASTCALL
gnu_java_net_VMPlainSocketImpl_State__isValid__( gnu_java_net_VMPlainSocketImpl_State
 This );

JCGO_NOSEP_STATIC jint CFASTCALL
gnu_java_net_VMPlainSocketImpl_State__getNativeFD__( gnu_java_net_VMPlainSocketImpl_State
 This );

JCGO_NOSEP_FRWINL void CFASTCALL
gnu_java_net_VMPlainSocketImpl_State__close__( gnu_java_net_VMPlainSocketImpl_State
 This );

struct gnu_java_net_VMPlainSocketImpl_State_methods_s
{
 java_lang_Class jcgo_class;
 JCGO_GCJDESCR_DEFN
 JCGO_TYPEID_T jcgo_typeid;
 JCGO_OBJSIZE_T jcgo_objsize;
 CONST struct jcgo_reflect_s *jcgo_reflect;
 JCGO_CLINIT_DEFN
 gnu_java_net_VMPlainSocketImpl_State (CFASTCALL *jcgo_thisRtn)( gnu_java_net_VMPlainSocketImpl_State
  This );
 jboolean (CFASTCALL *equals__Lo)( java_lang_Object This, java_lang_Object
  obj );
 jint (CFASTCALL *hashCode__)( java_lang_Object This );
 java_lang_String (CFASTCALL *toString__)( java_lang_Object This );
 void (CFASTCALL *finalize__)( java_lang_Object This );
};

struct gnu_java_net_VMPlainSocketImpl_State_class_s
{
 struct java_lang_Class_s jcgo_class;
};

JCGO_SEP_EXTERN CONST struct gnu_java_net_VMPlainSocketImpl_State_methods_s
 gnu_java_net_VMPlainSocketImpl_State_methods;
JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct gnu_java_net_VMPlainSocketImpl_State_class_s
 gnu_java_net_VMPlainSocketImpl_State__class;

struct gnu_java_net_VMPlainSocketImpl_State_s
{
 CONST struct gnu_java_net_VMPlainSocketImpl_State_methods_s *JCGO_IMMFLD_CONST
  jcgo_methods;
 JCGO_MON_DEFN
 gnu_java_nio_VMChannel_State chState;
};

JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string1_StateB46;

#endif
