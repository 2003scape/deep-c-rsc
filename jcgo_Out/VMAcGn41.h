/* DO NOT EDIT THIS FILE - it is machine generated (JCGO_116) */

#ifdef JCGO_116

JCGO_NOSEP_FRWINL jint CFASTCALL
gnu_java_net_VMAccessorGnuJavaNet__socketAvailableVMPlainSocketImpl__I(
 jint fd );

JCGO_NOSEP_FRWINL void CFASTCALL
gnu_java_net_VMAccessorGnuJavaNet__socketCloseVMPlainSocketImpl__I(
 jint fd );

JCGO_NOSEP_FRWINL jboolean CFASTCALL
gnu_java_net_VMAccessorGnuJavaNet__socketConnectVMPlainSocketImpl__IL5zjctI(
 java_net_InetSocketAddress address, jint fd, jint timeout );

JCGO_NOSEP_FRWINL jint CFASTCALL
gnu_java_net_VMAccessorGnuJavaNet__socketCreateVMPlainSocketImpl__Z(
 jboolean stream );

JCGO_NOSEP_FRWINL java_net_InetSocketAddress CFASTCALL
gnu_java_net_VMAccessorGnuJavaNet__socketGetLocalAddrPortVMPlainSocketImpl__I(
 jint fd );

JCGO_NOSEP_FRWINL void CFASTCALL
gnu_java_net_VMAccessorGnuJavaNet__socketsInitVMPlainSocketImpl__(
 void );

JCGO_NOSEP_FRWINL java_net_InetSocketAddress CFASTCALL
gnu_java_net_VMAccessorGnuJavaNet__socketRecvFromVMPlainSocketImpl__IBAIAIZZZZZ(
 jbyteArr buffer, jintArr offArr, jint fd, jint len, jboolean urgent,
 jboolean peek, jboolean fillAddress, jboolean stream, jboolean isNonBlocking
 );

JCGO_NOSEP_FRWINL void CFASTCALL
gnu_java_net_VMAccessorGnuJavaNet__socketSendToVMPlainSocketImpl__IBAIAIL5zjctZZ(
 jbyteArr buffer, jintArr offArr, java_net_InetSocketAddress address,
 jint fd, jint len, jboolean urgent, jboolean isNonBlocking );

JCGO_NOSEP_FRWINL void CFASTCALL
gnu_java_net_VMAccessorGnuJavaNet__socketSetNonBlockingVMPlainSocketImpl__IZ(
 jint fd, jboolean on );

struct gnu_java_net_VMAccessorGnuJavaNet_methods_s
{
 java_lang_Class jcgo_class;
 JCGO_GCJDESCR_DEFN
 JCGO_TYPEID_T jcgo_typeid;
 JCGO_OBJSIZE_T jcgo_objsize;
 CONST struct jcgo_reflect_s *jcgo_reflect;
 JCGO_CLINIT_DEFN
 gnu_java_net_VMAccessorGnuJavaNet (CFASTCALL *jcgo_thisRtn)( gnu_java_net_VMAccessorGnuJavaNet
  This );
 jboolean (CFASTCALL *equals__Lo)( java_lang_Object This, java_lang_Object
  obj );
 jint (CFASTCALL *hashCode__)( java_lang_Object This );
 java_lang_String (CFASTCALL *toString__)( java_lang_Object This );
 void (CFASTCALL *finalize__)( java_lang_Object This );
};

struct gnu_java_net_VMAccessorGnuJavaNet_class_s
{
 struct java_lang_Class_s jcgo_class;
};

JCGO_SEP_EXTERN CONST struct jcgo_methods_s gnu_java_net_VMAccessorGnuJavaNet_methods;
JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct gnu_java_net_VMAccessorGnuJavaNet_class_s
 gnu_java_net_VMAccessorGnuJavaNet__class;

struct gnu_java_net_VMAccessorGnuJavaNet_s
{
 CONST struct gnu_java_net_VMAccessorGnuJavaNet_methods_s *JCGO_IMMFLD_CONST
  jcgo_methods;
 JCGO_MON_DEFN
};

JCGO_SEP_EXTERN CONST jcgo_arrtype48_GameShll jcgo_array2_VMAcGn41;

JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string1_VMAcGn41;

#endif
