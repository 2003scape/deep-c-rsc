/* DO NOT EDIT THIS FILE - it is machine generated (JCGO_116) */

#ifdef JCGO_116

JCGO_NOSEP_INLINE gnu_java_nio_NIOSocketImpl CFASTCALL
gnu_java_nio_NIOSocketImpl__this__L498l2( gnu_java_nio_NIOSocketImpl
 This, gnu_java_nio_SocketChannelImpl channel );
JCGO_NOSEP_FRWINL gnu_java_nio_NIOSocketImpl CFASTCALL
gnu_java_nio_NIOSocketImpl__new__L498l2( gnu_java_nio_SocketChannelImpl
 channel );

JCGO_NOSEP_STATIC java_net_InetAddress CFASTCALL
gnu_java_nio_NIOSocketImpl__getInetAddress__( gnu_java_nio_NIOSocketImpl
 This );

JCGO_NOSEP_STATIC jint CFASTCALL
gnu_java_nio_NIOSocketImpl__getPort__( gnu_java_nio_NIOSocketImpl
 This );

JCGO_NOSEP_INLINE void CFASTCALL
gnu_java_nio_NIOSocketImpl__create__Z( gnu_java_nio_NIOSocketImpl
 This, jboolean stream );

struct gnu_java_nio_NIOSocketImpl_methods_s
{
 java_lang_Class jcgo_class;
 JCGO_GCJDESCR_DEFN
 JCGO_TYPEID_T jcgo_typeid;
 JCGO_OBJSIZE_T jcgo_objsize;
 CONST struct jcgo_reflect_s *jcgo_reflect;
 JCGO_CLINIT_DEFN
 gnu_java_nio_NIOSocketImpl (CFASTCALL *jcgo_thisRtn)( gnu_java_nio_NIOSocketImpl
  This );
 jboolean (CFASTCALL *equals__Lo)( java_lang_Object This, java_lang_Object
  obj );
 jint (CFASTCALL *hashCode__)( java_lang_Object This );
 java_lang_String (CFASTCALL *toString__)( java_net_SocketImpl This
  );
 void (CFASTCALL *finalize__)( java_lang_Object This );
 void (CFASTCALL *create__Z)( gnu_java_nio_NIOSocketImpl This, jboolean
  stream );
 java_net_InetAddress (CFASTCALL *getInetAddress__)( gnu_java_nio_NIOSocketImpl
  This );
 jint (CFASTCALL *getPort__)( gnu_java_nio_NIOSocketImpl This );
};

struct gnu_java_nio_NIOSocketImpl_class_s
{
 struct java_lang_Class_s jcgo_class;
};

JCGO_SEP_EXTERN CONST struct gnu_java_nio_NIOSocketImpl_methods_s
 gnu_java_nio_NIOSocketImpl_methods;
JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct gnu_java_nio_NIOSocketImpl_class_s
 gnu_java_nio_NIOSocketImpl__class;

struct gnu_java_nio_NIOSocketImpl_s
{
 CONST struct gnu_java_nio_NIOSocketImpl_methods_s *JCGO_IMMFLD_CONST
  jcgo_methods;
 JCGO_MON_DEFN
 java_net_InetAddress address;
 jint localport;
 jint port;
 gnu_java_net_VMPlainSocketImpl impl;
 java_io_InputStream in;
 java_io_OutputStream out;
 gnu_java_nio_SocketChannelImpl channel;
 jint initialTimeout;
 gnu_java_nio_SocketChannelImpl channel_02;
};

JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string1_NIOSckIm;

#endif
