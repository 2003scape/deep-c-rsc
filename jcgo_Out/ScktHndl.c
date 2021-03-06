/* DO NOT EDIT THIS FILE - it is machine generated (JCGO_116) */

#ifdef JCGO_SEPARATED
#define JCGO_116
#include "jcgortl.h"
#include "Main.h"
#endif

#ifdef JCGO_116

#ifdef CHKALL_gnu_java_nio_VMChannel
#include "jcgobchk.h"
#endif

JCGO_NOSEP_INLINE void CFASTCALL
gnu_java_nio_VMChannel_SocketHandle__void( gnu_java_nio_VMChannel_SocketHandle
 This )
{
 JCGO_FIELD_NZACCESS(This, fd)= (-(jint)1);
}

JCGO_NOSEP_INLINE gnu_java_nio_VMChannel_SocketHandle CFASTCALL
gnu_java_nio_VMChannel_SocketHandle__this__Z( gnu_java_nio_VMChannel_SocketHandle
 This, jboolean stream )
{
 {
  (gnu_java_nio_VMChannel_Handle__this__((gnu_java_nio_VMChannel_Handle)This));
  gnu_java_nio_VMChannel_SocketHandle__void(This);
  JCGO_FIELD_NZACCESS(This, stream)= (jboolean)stream;
 }
 return This;
}

JCGO_NOSEP_FRWINL gnu_java_nio_VMChannel_SocketHandle CFASTCALL
gnu_java_nio_VMChannel_SocketHandle__new__Z( jboolean stream )
{
 return gnu_java_nio_VMChannel_SocketHandle__this__Z(
  (gnu_java_nio_VMChannel_SocketHandle)jcgo_newObject((jvtable)&gnu_java_nio_VMChannel_SocketHandle_methods),
  stream);
}

JCGO_NOSEP_STATIC jint CFASTCALL
gnu_java_nio_VMChannel_SocketHandle__getNativeFD__( gnu_java_nio_VMChannel_SocketHandle
 This )
{
 {
  jint fd;
  fd= JCGO_FIELD_NZACCESS(This, fd);
  if (fd == (-(jint)1))
  {
   JCGO_THROW_EXC((java_io_IOException__new__Ls(
    JCGO_STRREF_OF(jcgo_string4_State))));
  }
  return fd;
 }
}

JCGO_NOSEP_STATIC void CFASTCALL
gnu_java_nio_VMChannel_SocketHandle__setNonBlocking__Z( gnu_java_nio_VMChannel_SocketHandle
 This, jboolean on )
{
 {
  jint fd;
  fd= (gnu_java_nio_VMChannel_SocketHandle__getNativeFD__(
   This));
  if (JCGO_FIELD_NZACCESS(This, isNonBlocking) != on)
  {
   (gnu_java_net_VMAccessorGnuJavaNet__socketSetNonBlockingVMPlainSocketImpl__IZ(
    fd, (jboolean)on));
   JCGO_FIELD_NZACCESS(This, isNonBlocking)= (jboolean)on;
  }
 }
}

JCGO_NOSEP_INLINE jint CFASTCALL
gnu_java_nio_VMChannel_SocketHandle__available__( gnu_java_nio_VMChannel_SocketHandle
 This )
{
 {
  return (gnu_java_net_VMAccessorGnuJavaNet__socketAvailableVMPlainSocketImpl__I(
   (gnu_java_nio_VMChannel_SocketHandle__getNativeFD__(
   This))));
 }
}

JCGO_NOSEP_STATIC jint CFASTCALL
gnu_java_nio_VMChannel_SocketHandle__read__BAII( gnu_java_nio_VMChannel_SocketHandle
 This, jbyteArr buffer, jint off, jint len )
{
 {
  jintArr offArr;
  jint fd;
  jObject jcgo_rcvrL1;
  jcgo_arrtype4_VMChnnl jcgo_stackobj1;
  fd= (gnu_java_nio_VMChannel_SocketHandle__getNativeFD__(
   This));
  if (JCGO_FIELD_NZACCESS(This, peerSocketAddress) == jnull || JCGO_FIELD_NZACCESS(This,
   isConnectPending))
  {
   JCGO_THROW_EXC((java_net_SocketException__new__Ls(
    JCGO_STRREF_OF(jcgo_string2_ScktHndl))));
  }
  offArr= (jcgo_rcvrL1= (jObject)(jintArr)JCGO_STACKOBJ_PRIMARRNEW(jcgo_stackobj1,
   jintArr_methods, 1),
   JCGO_ARR_INTERNALACC(jint, (jintArr)jcgo_rcvrL1, 0)= off,
   (jintArr)jcgo_rcvrL1);
  (gnu_java_net_VMAccessorGnuJavaNet__socketRecvFromVMPlainSocketImpl__IBAIAIZZZZZ(
   buffer, offArr, fd, len, (jboolean)jfalse, (jboolean)jfalse, (jboolean)jfalse,
   (jboolean)JCGO_FIELD_NZACCESS(This, stream), (jboolean)JCGO_FIELD_NZACCESS(This,
   isNonBlocking)));
  return JCGO_ARRAY_NZIACCESS(offArr, 0) - off;
 }
}

JCGO_NOSEP_STATIC void CFASTCALL
gnu_java_nio_VMChannel_SocketHandle__write__BAIAI( gnu_java_nio_VMChannel_SocketHandle
 This, jbyteArr buffer, jintArr offArr, jint len )
{
 {
  jint fd;
  fd= (gnu_java_nio_VMChannel_SocketHandle__getNativeFD__(
   This));
  if (JCGO_FIELD_NZACCESS(This, peerSocketAddress) == jnull || JCGO_FIELD_NZACCESS(This,
   isConnectPending))
  {
   JCGO_THROW_EXC((java_net_SocketException__new__Ls(
    JCGO_STRREF_OF(jcgo_string2_ScktHndl))));
  }
  (gnu_java_net_VMAccessorGnuJavaNet__socketSendToVMPlainSocketImpl__IBAIAIL5zjctZZ(
   buffer, offArr, (java_net_InetSocketAddress)jnull, fd, len, (jboolean)jfalse,
   (jboolean)JCGO_FIELD_NZACCESS(This, isNonBlocking)));
 }
}

JCGO_NOSEP_STATIC void CFASTCALL
gnu_java_nio_VMChannel_SocketHandle__close__( gnu_java_nio_VMChannel_SocketHandle
 This )
{
 {
  jint fd;
  fd= JCGO_FIELD_NZACCESS(This, fd);
  JCGO_FIELD_NZACCESS(This, fd)= (-(jint)1);
  if (fd != (-(jint)1))
  {
   (gnu_java_net_VMAccessorGnuJavaNet__socketCloseVMPlainSocketImpl__I(
    fd));
  }
 }
}

JCGO_NOSEP_INLINE jboolean CFASTCALL
gnu_java_nio_VMChannel_SocketHandle__needsCloseOnFinalize__( gnu_java_nio_VMChannel_SocketHandle
 This )
{
 {
  return (jboolean)jtrue;
 }
}

JCGO_NOSEP_FRWINL void CFASTCALL
gnu_java_nio_VMChannel_SocketHandle__setNativeFD__I( gnu_java_nio_VMChannel_SocketHandle
 This, jint fd )
{
 {
  if (JCGO_FIELD_NZACCESS(This, fd) != (-(jint)1))
  {
   JCGO_THROW_EXC((java_io_IOException__new__Ls(
    JCGO_STRREF_OF(jcgo_string6_State))));
  }
  JCGO_FIELD_NZACCESS(This, fd)= fd;
 }
}

JCGO_NOSEP_FRWINL jboolean CFASTCALL
gnu_java_nio_VMChannel_SocketHandle__connect__L5zjctI( gnu_java_nio_VMChannel_SocketHandle
 This, java_net_InetSocketAddress address, jint timeout )
{
 {
  jint fd;
  JCGO_TRY_VOLATILE jboolean completed;
  if (address == jnull)
  {
   JCGO_THROW_EXC(java_lang_NullPointerException__new__());
  }
  fd= (gnu_java_nio_VMChannel_SocketHandle__getNativeFD__(
   This));
  if (JCGO_FIELD_NZACCESS(This, peerSocketAddress) != jnull)
  {
   JCGO_THROW_EXC((java_net_SocketException__new__Ls(
    JCGO_FIELD_NZACCESS(This, isConnectPending)? JCGO_STRREF_OF(jcgo_string3_ScktHndl) :
    JCGO_STRREF_OF(jcgo_string4_ScktHndl))));
  }
  completed= jfalse;
  {
   JCGO_TRY_BLOCK
   {
    JCGO_FIELD_NZACCESS(This, isConnectPending)= (jboolean)jtrue;
    JCGO_FIELD_NZACCESS(This, peerSocketAddress)= address;
    if ((gnu_java_net_VMAccessorGnuJavaNet__socketConnectVMPlainSocketImpl__IL5zjctI(
     address, fd, JCGO_FIELD_NZACCESS(This, isNonBlocking)? 0 : timeout !=
     0? timeout : (-(jint)1))))
    {
     JCGO_FIELD_NZACCESS(This, isConnectPending)= (jboolean)jfalse;
    }
    completed= (jboolean)jtrue;
   }
   JCGO_TRY_LEAVE
   {
    if (!completed)
    {
     JCGO_FIELD_NZACCESS(This, peerSocketAddress)= (java_net_InetSocketAddress)jnull;
     JCGO_FIELD_NZACCESS(This, isConnectPending)= (jboolean)jfalse;
    }
   }
   JCGO_TRY_FINALLYEND
  }
  return (jboolean)(!JCGO_FIELD_NZACCESS(This, isConnectPending));
 }
}

JCGO_NOSEP_STATIC java_net_InetSocketAddress CFASTCALL
gnu_java_nio_VMChannel_SocketHandle__getPeerSocketAddress__( gnu_java_nio_VMChannel_SocketHandle
 This )
{
 {
  java_net_InetSocketAddress address;
  address= JCGO_FIELD_NZACCESS(This, peerSocketAddress);
  if (address != jnull && JCGO_FIELD_NZACCESS(This, isConnectPending))
  {
   {
    JCGO_TRY_BLOCK
    {
     if (!(gnu_java_net_VMAccessorGnuJavaNet__socketConnectVMPlainSocketImpl__IL5zjctI(
      address, (gnu_java_nio_VMChannel_SocketHandle__getNativeFD__(
      This)), 0)))
     {
#ifndef JCGO_SEHTRY
      jcgo_tryLeave();
#endif
      return (java_net_InetSocketAddress)jnull;
     }
    }
    JCGO_TRY_LEAVE
    JCGO_TRY_CATCHES(1)
    JCGO_TRY_CATCH(OBJT_java_io_IOException, MAXT_java_io_IOException)
    {
     java_io_IOException e;
     e= (java_io_IOException)JCGO_TRY_THROWABLE(0);
     JCGO_FIELD_NZACCESS(This, peerSocketAddress)= (java_net_InetSocketAddress)jnull;
     JCGO_FIELD_NZACCESS(This, isConnectPending)= (jboolean)jfalse;
     JCGO_THROW_EXC(e);
    }
    JCGO_TRY_RETHROW(1)
   }
   JCGO_FIELD_NZACCESS(This, isConnectPending)= (jboolean)jfalse;
  }
  return address;
 }
}

JCGO_NOSEP_DATA CONST struct gnu_java_nio_VMChannel_SocketHandle_methods_s
 gnu_java_nio_VMChannel_SocketHandle_methods=
{
 JCGO_CLASSREF_OF(gnu_java_nio_VMChannel_SocketHandle__class),
 JCGO_GCJDESCR_INIT(gnu_java_nio_VMChannel_SocketHandle_s, peerSocketAddress)
 OBJT_gnu_java_nio_VMChannel_SocketHandle,
 (JCGO_OBJSIZE_T)sizeof(struct gnu_java_nio_VMChannel_SocketHandle_s),
 NULL,
 JCGO_CLINIT_INIT(0)
 0,
 java_lang_Object__equals__Lo,
 java_lang_Object__hashCode__,
 java_lang_Object__toString__,
 java_lang_Object__finalize__,
 gnu_java_nio_VMChannel_SocketHandle__getNativeFD__,
 gnu_java_nio_VMChannel_SocketHandle__setNonBlocking__Z,
 gnu_java_nio_VMChannel_SocketHandle__available__,
 gnu_java_nio_VMChannel_SocketHandle__read__BAII,
 gnu_java_nio_VMChannel_SocketHandle__write__BAIAI,
 gnu_java_nio_VMChannel_SocketHandle__close__,
 gnu_java_nio_VMChannel_SocketHandle__needsCloseOnFinalize__
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct gnu_java_nio_VMChannel_SocketHandle_class_s
 gnu_java_nio_VMChannel_SocketHandle__class JCGO_THRD_ATTRNONGC=
{
 {
  &java_lang_Class_methods,
  JCGO_MON_INIT
  JCGO_OBJREF_OF(*(java_lang_Object)&gnu_java_nio_VMChannel_SocketHandle_methods),
  JCGO_STRREF_OF(jcgo_string1_ScktHndl),
  JCGO_CLASSREF_OF(gnu_java_nio_VMChannel_Handle__class),
  ((jObjectArr)JCGO_OBJREF_OF(jcgo_array3_Object)),
  0x1a
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype88_GmCnnctn jcgo_array5_ScktHndl=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 35,
 {
  (jbyte)(jchar)103/*'g'*/, (jbyte)(jchar)110/*'n'*/, (jbyte)(jchar)117/*'u'*/,
   (jbyte)(jchar)46/*'.'*/, (jbyte)(jchar)106/*'j'*/, (jbyte)(jchar)97/*'a'*/,
   (jbyte)(jchar)118/*'v'*/, (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)46/*'.'*/,
   (jbyte)(jchar)110/*'n'*/, (jbyte)(jchar)105/*'i'*/, (jbyte)(jchar)111/*'o'*/,
   (jbyte)(jchar)46/*'.'*/, (jbyte)(jchar)86/*'V'*/, (jbyte)(jchar)77/*'M'*/,
   (jbyte)(jchar)67/*'C'*/, (jbyte)(jchar)104/*'h'*/, (jbyte)(jchar)97/*'a'*/,
   (jbyte)(jchar)110/*'n'*/, (jbyte)(jchar)110/*'n'*/, (jbyte)(jchar)101/*'e'*/,
   (jbyte)(jchar)108/*'l'*/, (jbyte)(jchar)36/*'$'*/, (jbyte)(jchar)83/*'S'*/,
   (jbyte)(jchar)111/*'o'*/, (jbyte)(jchar)99/*'c'*/, (jbyte)(jchar)107/*'k'*/,
   (jbyte)(jchar)101/*'e'*/, (jbyte)(jchar)116/*'t'*/, (jbyte)(jchar)72/*'H'*/,
   (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)110/*'n'*/, (jbyte)(jchar)100/*'d'*/,
   (jbyte)(jchar)108/*'l'*/, (jbyte)(jchar)101/*'e'*/
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype30_GameShll jcgo_array6_ScktHndl=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 13,
 {
  (jbyte)(jchar)110/*'n'*/, (jbyte)(jchar)111/*'o'*/, (jbyte)(jchar)116/*'t'*/,
   (jbyte)(jchar)32/*' '*/, (jbyte)(jchar)99/*'c'*/, (jbyte)(jchar)111/*'o'*/,
   (jbyte)(jchar)110/*'n'*/, (jbyte)(jchar)110/*'n'*/, (jbyte)(jchar)101/*'e'*/,
   (jbyte)(jchar)99/*'c'*/, (jbyte)(jchar)116/*'t'*/, (jbyte)(jchar)101/*'e'*/,
   (jbyte)(jchar)100/*'d'*/
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype82_GmCnnctn jcgo_array7_ScktHndl=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 18,
 {
  (jbyte)(jchar)99/*'c'*/, (jbyte)(jchar)111/*'o'*/, (jbyte)(jchar)110/*'n'*/,
   (jbyte)(jchar)110/*'n'*/, (jbyte)(jchar)101/*'e'*/, (jbyte)(jchar)99/*'c'*/,
   (jbyte)(jchar)116/*'t'*/, (jbyte)(jchar)105/*'i'*/, (jbyte)(jchar)111/*'o'*/,
   (jbyte)(jchar)110/*'n'*/, (jbyte)(jchar)32/*' '*/, (jbyte)(jchar)112/*'p'*/,
   (jbyte)(jchar)101/*'e'*/, (jbyte)(jchar)110/*'n'*/, (jbyte)(jchar)100/*'d'*/,
   (jbyte)(jchar)105/*'i'*/, (jbyte)(jchar)110/*'n'*/, (jbyte)(jchar)103/*'g'*/
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype492_Mdclnt jcgo_array8_ScktHndl=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 17,
 {
  (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)108/*'l'*/, (jbyte)(jchar)114/*'r'*/,
   (jbyte)(jchar)101/*'e'*/, (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)100/*'d'*/,
   (jbyte)(jchar)121/*'y'*/, (jbyte)(jchar)32/*' '*/, (jbyte)(jchar)99/*'c'*/,
   (jbyte)(jchar)111/*'o'*/, (jbyte)(jchar)110/*'n'*/, (jbyte)(jchar)110/*'n'*/,
   (jbyte)(jchar)101/*'e'*/, (jbyte)(jchar)99/*'c'*/, (jbyte)(jchar)116/*'t'*/,
   (jbyte)(jchar)101/*'e'*/, (jbyte)(jchar)100/*'d'*/
 }
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string1_ScktHndl
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array5_ScktHndl),
 0, 35, (jint)0x31a581d9L
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string2_ScktHndl
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array6_ScktHndl),
 0, 13, (jint)0xb09c95fcL
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string3_ScktHndl
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array7_ScktHndl),
 0, 18, (jint)0xe334e655L
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string4_ScktHndl
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array8_ScktHndl),
 0, 17, (jint)0x1e73941L
};

#ifdef CHKALL_gnu_java_nio_VMChannel
#include "jcgochke.h"
#endif

#endif
