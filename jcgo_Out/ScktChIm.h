/* DO NOT EDIT THIS FILE - it is machine generated (JCGO_116) */

#ifdef JCGO_116

JCGO_NOSEP_INLINE gnu_java_nio_SocketChannelImpl CFASTCALL
gnu_java_nio_SocketChannelImpl__this__L6sfa6Z( gnu_java_nio_SocketChannelImpl
 This, java_nio_channels_spi_SelectorProvider provider, jboolean create
 );

JCGO_NOSEP_FRWINL gnu_java_nio_SocketChannelImpl CFASTCALL
gnu_java_nio_SocketChannelImpl__this__L6sfa6L59mndZ( gnu_java_nio_SocketChannelImpl
 This, java_nio_channels_spi_SelectorProvider provider, gnu_java_nio_VMChannel
 channel, jboolean create );

JCGO_NOSEP_INLINE gnu_java_nio_SocketChannelImpl CFASTCALL
gnu_java_nio_SocketChannelImpl__this__Z( gnu_java_nio_SocketChannelImpl
 This, jboolean create );
JCGO_NOSEP_INLINE gnu_java_nio_SocketChannelImpl CFASTCALL
gnu_java_nio_SocketChannelImpl__new__Z( jboolean create );

JCGO_NOSEP_FRWINL void CFASTCALL
gnu_java_nio_SocketChannelImpl__implCloseSelectableChannel__( gnu_java_nio_SocketChannelImpl
 This );

JCGO_NOSEP_FRWINL void CFASTCALL
gnu_java_nio_SocketChannelImpl__implConfigureBlocking__Z( gnu_java_nio_SocketChannelImpl
 This, jboolean blocking );

JCGO_NOSEP_INLINE jboolean CFASTCALL
gnu_java_nio_SocketChannelImpl__connect__L2kl8gI( gnu_java_nio_SocketChannelImpl
 This, java_net_SocketAddress remote, jint timeout );

JCGO_NOSEP_STATIC jboolean CFASTCALL
gnu_java_nio_SocketChannelImpl__isConnected__( gnu_java_nio_SocketChannelImpl
 This );

JCGO_NOSEP_INLINE jint CFASTCALL
gnu_java_nio_SocketChannelImpl__read__L9oaia( gnu_java_nio_SocketChannelImpl
 This, java_nio_ByteBuffer dst );

JCGO_NOSEP_INLINE jint CFASTCALL
gnu_java_nio_SocketChannelImpl__write__L9oaia( gnu_java_nio_SocketChannelImpl
 This, java_nio_ByteBuffer src );

JCGO_NOSEP_INLINE gnu_java_nio_VMChannel CFASTCALL
gnu_java_nio_SocketChannelImpl__getVMChannel__( gnu_java_nio_SocketChannelImpl
 This );

struct gnu_java_nio_SocketChannelImpl_methods_s
{
 java_lang_Class jcgo_class;
 JCGO_GCJDESCR_DEFN
 JCGO_TYPEID_T jcgo_typeid;
 JCGO_OBJSIZE_T jcgo_objsize;
 CONST struct jcgo_reflect_s *jcgo_reflect;
 JCGO_CLINIT_DEFN
 gnu_java_nio_SocketChannelImpl (CFASTCALL *jcgo_thisRtn)( gnu_java_nio_SocketChannelImpl
  This );
 jboolean (CFASTCALL *equals__Lo)( java_lang_Object This, java_lang_Object
  obj );
 jint (CFASTCALL *hashCode__)( java_lang_Object This );
 java_lang_String (CFASTCALL *toString__)( java_lang_Object This );
 void (CFASTCALL *finalize__)( java_lang_Object This );
 void (CFASTCALL *implCloseChannel__)( java_nio_channels_spi_AbstractSelectableChannel
  This );
};

struct gnu_java_nio_SocketChannelImpl_class_s
{
 struct java_lang_Class_s jcgo_class;
};

JCGO_SEP_EXTERN CONST struct gnu_java_nio_SocketChannelImpl_methods_s
 gnu_java_nio_SocketChannelImpl_methods;
JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct gnu_java_nio_SocketChannelImpl_class_s
 gnu_java_nio_SocketChannelImpl__class;

struct gnu_java_nio_SocketChannelImpl_s
{
 CONST struct gnu_java_nio_SocketChannelImpl_methods_s *JCGO_IMMFLD_CONST
  jcgo_methods;
 JCGO_MON_DEFN
 jboolean closed;
 java_lang_Object LOCK;
 java_util_LinkedList keys;
 jboolean blocking;
 gnu_java_nio_VMChannel channel;
 java_net_InetSocketAddress connectAddress;
 jboolean connectionPending;
 jboolean connected;
};

JCGO_SEP_EXTERN CONST jcgo_arrtype77_GmCnnctn jcgo_array2_ScktChIm;

JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string1_ScktChIm;

#endif
