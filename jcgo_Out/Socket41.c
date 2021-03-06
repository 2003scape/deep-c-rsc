/* DO NOT EDIT THIS FILE - it is machine generated (JCGO_116) */

#ifdef JCGO_SEPARATED
#define JCGO_116
#include "jcgortl.h"
#include "Main.h"
#endif

#ifdef JCGO_116

#ifdef CHKALL_java_net_Socket
#include "jcgobchk.h"
#endif

JCGO_NOSEP_STATIC java_net_Socket CFASTCALL
java_net_Socket__this__L7lnuwIL7lnuwIZ( java_net_Socket This, java_net_InetAddress
 raddr, java_net_InetAddress laddr, jint rport, jint lport, jboolean
 stream )
{
 {
  java_lang_SecurityManager sm;
  java_net_SocketAddress bindaddr;
  struct java_net_InetSocketAddress_s jcgo_stackobj1;
  (java_net_Socket__this__((java_net_Socket)This));
  sm= (java_lang_System__getSecurityManager__());
  if (sm != jnull)
  {
   (java_lang_SecurityManager__checkConnect__LsI(
    sm, (JCGO_CALL_VFUNC(raddr)->getHostAddress__(
    raddr)), rport));
  }
  bindaddr= (java_net_SocketAddress)(laddr == jnull? jnull : (java_net_InetSocketAddress__this__L7lnuwI(
   JCGO_STACKOBJ_NEW(jcgo_stackobj1, java_net_InetSocketAddress_methods),
   laddr, lport)));
  (java_net_Socket__bind__L2kl8g(
   This, bindaddr));
  {
   JCGO_TRY_BLOCK
   {
    (java_net_Socket__connect__L2kl8g(
     This, (java_net_SocketAddress)(java_net_InetSocketAddress__new__L7lnuwI(
     raddr, rport))));
   }
   JCGO_TRY_LEAVE
   JCGO_TRY_CATCHES(1)
   JCGO_TRY_CATCH(OBJT_java_io_IOException, MAXT_java_io_IOException)
   {
    java_io_IOException ioe;
    jObject jcgo_rcvrL1;
    ioe= (java_io_IOException)JCGO_TRY_THROWABLE(0);
    (jcgo_rcvrL1= (jObject)JCGO_FIELD_NZACCESS(This, impl), JCGO_CALL_FINALF((gnu_java_net_PlainSocketImpl)jcgo_rcvrL1)
     gnu_java_net_PlainSocketImpl__close__(
     (gnu_java_net_PlainSocketImpl)jcgo_rcvrL1));
    JCGO_THROW_EXC(ioe);
   }
   JCGO_TRY_CATCH(OBJT_java_lang_RuntimeException, MAXT_java_lang_RuntimeException)
   {
    java_lang_RuntimeException re;
    jObject jcgo_rcvrL1;
    re= (java_lang_RuntimeException)JCGO_TRY_THROWABLE(0);
    (jcgo_rcvrL1= (jObject)JCGO_FIELD_NZACCESS(This, impl), JCGO_CALL_FINALF((gnu_java_net_PlainSocketImpl)jcgo_rcvrL1)
     gnu_java_net_PlainSocketImpl__close__(
     (gnu_java_net_PlainSocketImpl)jcgo_rcvrL1));
    JCGO_THROW_EXC(re);
   }
   JCGO_TRY_RETHROW(1)
  }
 }
 return This;
}

JCGO_NOSEP_STATIC java_net_Socket CFASTCALL
java_net_Socket__this__( java_net_Socket This )
{
 {
  ;
  if (((java_lang_Object)jnull) != jnull)
  {
   JCGO_FIELD_NZACCESS(This, impl)= (JCGO_CALL_FINALF(((java_lang_Object)jnull))
    (java_net_SocketImpl)jnull);
  }
  else
  {
   JCGO_FIELD_NZACCESS(This, impl)= (java_net_SocketImpl)gnu_java_net_PlainSocketImpl__new__();
  }
 }
 return This;
}

JCGO_NOSEP_FRWINL void CFASTCALL
java_net_Socket__connect__L2kl8g( java_net_Socket This, java_net_SocketAddress
 endpoint )
{
 {
  (java_net_Socket__connect__L2kl8gI(
   This, endpoint, 0));
 }
}

JCGO_NOSEP_INLINE java_net_SocketImpl CFASTCALL
java_net_Socket__getImpl__( java_net_Socket This )
{
 {
  return JCGO_FIELD_NZACCESS(This, impl);
 }
}

JCGO_NOSEP_FRWINL void CFASTCALL
java_net_Socket__connect__L2kl8gI( java_net_Socket This, java_net_SocketAddress
 endpoint, jint timeout )
{
 {
  jObject jcgo_rcvrL1;
  if ((java_net_Socket__isClosed__(
   This)))
  {
   JCGO_THROW_EXC((java_net_SocketException__new__Ls(
    JCGO_STRREF_OF(jcgo_string2_Socket41))));
  }
  if (!jcgo_instanceOf0(OBJT_java_net_InetSocketAddress, MAXT_java_net_InetSocketAddress,
   (jObject)endpoint))
  {
   JCGO_THROW_EXC((java_lang_IllegalArgumentException__new__Ls(
    JCGO_STRREF_OF(jcgo_string3_Socket41))));
  }
  if ((JCGO_CALL_NZVFUNC(This)->getChannel__(
   This)) != jnull && !(jcgo_rcvrL1= (jObject)(JCGO_CALL_NZVFUNC(This)->getChannel__(
   This)), JCGO_CALL_FINALF((java_nio_channels_SocketChannel)jcgo_rcvrL1)
   java_nio_channels_spi_AbstractSelectableChannel__isBlocking__(
   (java_nio_channels_spi_AbstractSelectableChannel)jcgo_rcvrL1)) &&
   !(jcgo_rcvrL1= (jObject)((gnu_java_net_PlainSocketImpl)JCGO_CAST_OBJECT0(OBJT_gnu_java_net_PlainSocketImpl,
   MAXT_gnu_java_net_PlainSocketImpl, (java_net_Socket__getImpl__(
   This)))), JCGO_CALL_FINALF((gnu_java_net_PlainSocketImpl)jcgo_rcvrL1)
   gnu_java_net_PlainSocketImpl__isInChannelOperation__(
   (gnu_java_net_PlainSocketImpl)jcgo_rcvrL1)))
  {
   JCGO_THROW_EXC(java_nio_channels_IllegalBlockingModeException__new__());
  }
  if (!(java_net_Socket__isBound__(
   This)))
  {
   (java_net_Socket__bind__L2kl8g(
    This, (java_net_SocketAddress)jnull));
  }
  (jcgo_rcvrL1= (jObject)(java_net_Socket__getImpl__(
   This)), JCGO_CALL_FINALF((gnu_java_net_PlainSocketImpl)jcgo_rcvrL1)
   gnu_java_net_PlainSocketImpl__connect__L2kl8gI(
   (gnu_java_net_PlainSocketImpl)jcgo_rcvrL1, endpoint, timeout));
 }
}

JCGO_NOSEP_INLINE java_nio_channels_SocketChannel CFASTCALL
java_net_Socket__getChannel__( java_net_Socket This )
{
 {
  return (java_nio_channels_SocketChannel)jnull;
 }
}

JCGO_NOSEP_FRWINL jboolean CFASTCALL
java_net_Socket__isBound__( java_net_Socket This )
{
 {
  if ((java_net_Socket__isClosed__(
   This)))
  {
   return (jboolean)jfalse;
  }
  if (jcgo_instanceOf0(OBJT_gnu_java_net_PlainSocketImpl, MAXT_gnu_java_net_PlainSocketImpl,
   (jObject)JCGO_FIELD_NZACCESS(This, impl)))
  {
   java_net_InetSocketAddress addr;
   jObject jcgo_rcvrL1;
   addr= (jcgo_rcvrL1= (jObject)((gnu_java_net_PlainSocketImpl)JCGO_CAST_OBJECT0(OBJT_gnu_java_net_PlainSocketImpl,
    MAXT_gnu_java_net_PlainSocketImpl, JCGO_FIELD_NZACCESS(This, impl))),
    JCGO_CALL_FINALF((gnu_java_net_PlainSocketImpl)jcgo_rcvrL1) gnu_java_net_PlainSocketImpl__getLocalAddress__(
    (gnu_java_net_PlainSocketImpl)jcgo_rcvrL1));
   return (jboolean)(addr != jnull && (java_net_InetSocketAddress__getAddress__(
    addr)) != jnull);
  }
  return (jboolean)JCGO_FIELD_NZACCESS(This, bound);
 }
}

JCGO_NOSEP_INLINE java_net_Socket CFASTCALL
java_net_Socket__this__L7wbj6( java_net_Socket This, java_net_SocketImpl
 impl )
{
 {
  ;
  if (impl == jnull)
  {
   JCGO_FIELD_NZACCESS(This, impl)= (java_net_SocketImpl)gnu_java_net_PlainSocketImpl__new__();
  }
  else
  {
   JCGO_FIELD_NZACCESS(This, impl)= impl;
  }
 }
 return This;
}

JCGO_NOSEP_INLINE java_net_Socket CFASTCALL
java_net_Socket__this__L7lnuwI( java_net_Socket This, java_net_InetAddress
 address, jint port )
{
 {
  (java_net_Socket__this__L7lnuwIL7lnuwIZ((java_net_Socket)This, address,
   (java_net_InetAddress)jnull, port, 0, (jboolean)jtrue));
 }
 return This;
}

JCGO_NOSEP_FRWINL java_net_Socket CFASTCALL
java_net_Socket__new__L7lnuwI( java_net_InetAddress address, jint
 port )
{
 return java_net_Socket__this__L7lnuwI(
  (java_net_Socket)jcgo_newObject((jvtable)&java_net_Socket_methods),
  address, port);
}

JCGO_NOSEP_STATIC void CFASTCALL
java_net_Socket__bind__L2kl8g( java_net_Socket This, java_net_SocketAddress
 bindpoint )
{
 {
  java_net_InetSocketAddress tmp;
  if ((java_net_Socket__isClosed__(
   This)))
  {
   JCGO_THROW_EXC((java_net_SocketException__new__Ls(
    JCGO_STRREF_OF(jcgo_string2_Socket41))));
  }
  if (bindpoint == jnull)
  {
   bindpoint= (java_net_SocketAddress)(java_net_InetSocketAddress__new__L7lnuwI(
    JCGO_CLINIT_VARACC(java_net_InetAddress__class, java_net_InetAddress__ANY_IF),
    0));
  }
  if (!(JCGO_METHODS_OF(bindpoint)->jcgo_typeid== OBJT_java_net_InetSocketAddress))
  {
   JCGO_THROW_EXC(java_lang_IllegalArgumentException__new__());
  }
  tmp= (java_net_InetSocketAddress)bindpoint;
  {
   JCGO_TRY_BLOCK
   {
    jObject jcgo_rcvrL1;
    jObject jcgo_rcvrL2;
    (jcgo_rcvrL1= (jObject)(java_net_Socket__getImpl__(
     This)), JCGO_CALL_EVFUNC((gnu_java_net_PlainSocketImpl)jcgo_rcvrL1)->create__Z(
     (gnu_java_net_PlainSocketImpl)jcgo_rcvrL1, (jboolean)jtrue));
    (jcgo_rcvrL1= (jObject)(java_net_Socket__getImpl__(
     This)), jcgo_rcvrL2= (jObject)(java_net_InetSocketAddress__getAddress__(
     tmp)), JCGO_CALL_EFINALF((gnu_java_net_PlainSocketImpl)jcgo_rcvrL1)
     gnu_java_net_PlainSocketImpl__bind__L7lnuwI(
     (gnu_java_net_PlainSocketImpl)jcgo_rcvrL1, (java_net_InetAddress)jcgo_rcvrL2,
     (java_net_InetSocketAddress__getPort__(
     tmp))));
    JCGO_FIELD_NZACCESS(This, bound)= (jboolean)jtrue;
   }
   JCGO_TRY_LEAVE
   JCGO_TRY_CATCHES(1)
   JCGO_TRY_CATCH(OBJT_java_io_IOException, MAXT_java_io_IOException)
   {
    java_io_IOException exception;
    exception= (java_io_IOException)JCGO_TRY_THROWABLE(0);
    (java_net_Socket__close__(
     This));
    JCGO_THROW_EXC(exception);
   }
   JCGO_TRY_CATCH(OBJT_java_lang_RuntimeException, MAXT_java_lang_RuntimeException)
   {
    java_lang_RuntimeException exception;
    exception= (java_lang_RuntimeException)JCGO_TRY_THROWABLE(0);
    (java_net_Socket__close__(
     This));
    JCGO_THROW_EXC(exception);
   }
   JCGO_TRY_CATCH(OBJT_java_lang_Error, MAXT_java_lang_Error)
   {
    java_lang_Error error;
    error= (java_lang_Error)JCGO_TRY_THROWABLE(0);
    (java_net_Socket__close__(
     This));
    JCGO_THROW_EXC(error);
   }
   JCGO_TRY_RETHROW(1)
  }
 }
}

JCGO_NOSEP_FRWINL java_io_InputStream CFASTCALL
java_net_Socket__getInputStream__( java_net_Socket This )
{
 {
  jObject jcgo_rcvrL1;
  if ((java_net_Socket__isClosed__(
   This)))
  {
   JCGO_THROW_EXC((java_net_SocketException__new__Ls(
    JCGO_STRREF_OF(jcgo_string2_Socket41))));
  }
  if (!(JCGO_CALL_NZVFUNC(This)->isConnected__(
   This)))
  {
   JCGO_THROW_EXC((java_io_IOException__new__Ls(
    JCGO_STRREF_OF(jcgo_string2_ScktHndl))));
  }
  return (jcgo_rcvrL1= (jObject)(java_net_Socket__getImpl__(
   This)), JCGO_CALL_FINALF((gnu_java_net_PlainSocketImpl)jcgo_rcvrL1)
   gnu_java_net_PlainSocketImpl__getInputStream__(
   (gnu_java_net_PlainSocketImpl)jcgo_rcvrL1));
 }
}

JCGO_NOSEP_FRWINL java_io_OutputStream CFASTCALL
java_net_Socket__getOutputStream__( java_net_Socket This )
{
 {
  jObject jcgo_rcvrL1;
  if ((java_net_Socket__isClosed__(
   This)))
  {
   JCGO_THROW_EXC((java_net_SocketException__new__Ls(
    JCGO_STRREF_OF(jcgo_string2_Socket41))));
  }
  if (!(JCGO_CALL_NZVFUNC(This)->isConnected__(
   This)))
  {
   JCGO_THROW_EXC((java_io_IOException__new__Ls(
    JCGO_STRREF_OF(jcgo_string2_ScktHndl))));
  }
  return (jcgo_rcvrL1= (jObject)(java_net_Socket__getImpl__(
   This)), JCGO_CALL_FINALF((gnu_java_net_PlainSocketImpl)jcgo_rcvrL1)
   gnu_java_net_PlainSocketImpl__getOutputStream__(
   (gnu_java_net_PlainSocketImpl)jcgo_rcvrL1));
 }
}

JCGO_NOSEP_STATIC void CFASTCALL
java_net_Socket__setTcpNoDelay__Z( java_net_Socket This, jboolean
 on )
{
 {
  jObject jcgo_rcvrL1;
  if ((java_net_Socket__isClosed__(
   This)))
  {
   JCGO_THROW_EXC((java_net_SocketException__new__Ls(
    JCGO_STRREF_OF(jcgo_string2_Socket41))));
  }
  (jcgo_rcvrL1= (jObject)(java_net_Socket__getImpl__(
   This)), JCGO_CALL_FINALF((gnu_java_net_PlainSocketImpl)jcgo_rcvrL1)
   gnu_java_net_PlainSocketImpl__setOption__ILo(
   (gnu_java_net_PlainSocketImpl)jcgo_rcvrL1, (java_lang_Object)(java_lang_Boolean__valueOf__Z(
   (jboolean)on)), java_net_SocketOptions__TCP_NODELAY0));
 }
}

JCGO_NOSEP_STATIC void CFASTCALL
java_net_Socket__setSoTimeout__I( java_net_Socket This, jint timeout
 )
{
 JCGO_SYNC_BLOCKSAFENZ(This)
 {
  jObject jcgo_rcvrL1;
  struct java_lang_Integer_s jcgo_stackobj1;
  if ((java_net_Socket__isClosed__(
   This)))
  {
   JCGO_THROW_EXC((java_net_SocketException__new__Ls(
    JCGO_STRREF_OF(jcgo_string2_Socket41))));
  }
  if (timeout < 0)
  {
   JCGO_THROW_EXC((java_lang_IllegalArgumentException__new__Ls(
    JCGO_STRREF_OF(jcgo_string4_Socket41))));
  }
  (jcgo_rcvrL1= (jObject)(java_net_Socket__getImpl__(
   This)), JCGO_CALL_FINALF((gnu_java_net_PlainSocketImpl)jcgo_rcvrL1)
   gnu_java_net_PlainSocketImpl__setOption__ILo(
   (gnu_java_net_PlainSocketImpl)jcgo_rcvrL1, (java_lang_Object)(java_lang_Integer__this__I(
   JCGO_STACKOBJ_NEW(jcgo_stackobj1, java_lang_Integer_methods), timeout)),
   java_net_SocketOptions__SO_TIMEOUT));
 }
 JCGO_SYNC_END
}

JCGO_NOSEP_STATIC void CFASTCALL
java_net_Socket__close__( java_net_Socket This )
{
 JCGO_SYNC_BLOCKSAFENZ(This)
 {
  jObject jcgo_rcvrL1;
  if ((java_net_Socket__isClosed__(
   This)))
  {
#ifndef JCGO_SEHTRY
   JCGO_SYNC_JUMPLEAVE(0);
#endif
   return;
  }
  (jcgo_rcvrL1= (jObject)JCGO_FIELD_NZACCESS(This, impl), JCGO_CALL_FINALF((gnu_java_net_PlainSocketImpl)jcgo_rcvrL1)
   gnu_java_net_PlainSocketImpl__close__(
   (gnu_java_net_PlainSocketImpl)jcgo_rcvrL1));
  JCGO_FIELD_NZACCESS(This, impl)= (java_net_SocketImpl)jnull;
 }
 JCGO_SYNC_END
}

JCGO_NOSEP_STATIC java_lang_String CFASTCALL
java_net_Socket__toString__( java_net_Socket This )
{
 {
  {
   JCGO_TRY_BLOCK
   {
    if ((JCGO_CALL_NZVFUNC(This)->isConnected__(
     This)))
    {
     jObject jcgo_rcvrL1;
     jObject jcgo_rcvrL2;
     struct java_lang_String_s jcgo_stackobj1;
     struct java_lang_StringBuilder_s jcgo_stackobj2;
     struct java_lang_String_s jcgo_stackobj3;
     struct java_lang_String_s jcgo_stackobj4;
     {
      java_lang_String jcgo_retval= java_lang_String__new__L5dy9e(
       java_lang_StringBuilder__append__Ls(
       (jcgo_rcvrL1= (jObject)java_lang_StringBuilder__append__Ls(
       (jcgo_rcvrL1= (jObject)java_lang_StringBuilder__append__Ls(
       (jcgo_rcvrL1= (jObject)java_lang_StringBuilder__append__Ls(
       java_lang_StringBuilder__append__Ls(
       java_lang_StringBuilder__this__(
       JCGO_STACKOBJ_NEW(jcgo_stackobj2, java_lang_StringBuilder_methods)),
       (java_lang_Object__toString__X(
       (java_lang_Object)This, JCGO_STACKOBJ_NEW(jcgo_stackobj1, java_lang_String_methods)))),
       JCGO_STRREF_OF(jcgo_string5_Socket41)), java_lang_StringBuilder__append__Ls(
       (java_lang_StringBuilder)jcgo_rcvrL1, (java_lang_String__valueOf__Lo(
       (java_lang_Object)(jcgo_rcvrL2= (jObject)(java_net_Socket__getImpl__(
       This)), JCGO_CALL_VFUNC((gnu_java_net_PlainSocketImpl)jcgo_rcvrL2)->getInetAddress__(
       (gnu_java_net_PlainSocketImpl)jcgo_rcvrL2)))))), JCGO_STRREF_OF(jcgo_string6_Socket41)),
       java_lang_StringBuilder__append__Ls(
       (java_lang_StringBuilder)jcgo_rcvrL1, (java_lang_String__valueOf__IX(
       (jcgo_rcvrL2= (jObject)(java_net_Socket__getImpl__(
       This)), JCGO_CALL_VFUNC((gnu_java_net_PlainSocketImpl)jcgo_rcvrL2)->getPort__(
       (gnu_java_net_PlainSocketImpl)jcgo_rcvrL2)), JCGO_STACKOBJ_NEW(jcgo_stackobj3,
       java_lang_String_methods))))), JCGO_STRREF_OF(jcgo_string7_Socket41)),
       java_lang_StringBuilder__append__Ls(
       (java_lang_StringBuilder)jcgo_rcvrL1, (java_lang_String__valueOf__IX(
       (jcgo_rcvrL2= (jObject)(java_net_Socket__getImpl__(
       This)), JCGO_CALL_FINALF((gnu_java_net_PlainSocketImpl)jcgo_rcvrL2)
       gnu_java_net_PlainSocketImpl__getLocalPort__(
       (gnu_java_net_PlainSocketImpl)jcgo_rcvrL2)), JCGO_STACKOBJ_NEW(jcgo_stackobj4,
       java_lang_String_methods))))), JCGO_STRREF_OF(jcgo_string5_ByteBffr)));
#ifndef JCGO_SEHTRY
      jcgo_tryLeave();
#endif
      return jcgo_retval;
     }
    }
   }
   JCGO_TRY_LEAVE
   JCGO_TRY_CATCHES(1)
   JCGO_TRY_CATCH(OBJT_java_net_SocketException, MAXT_java_net_SocketException)
   {
   }
   JCGO_TRY_RETHROW(1)
  }
  return java_lang_VMSystem__concat0X__LsLs(
   (java_lang_Object__toString__(
   (java_lang_Object)This)), JCGO_STRREF_OF(jcgo_string8_Socket41));
 }
}

JCGO_NOSEP_STATIC jboolean CFASTCALL
java_net_Socket__isConnected__( java_net_Socket This )
{
 {
  jObject jcgo_rcvrL1;
  if (JCGO_FIELD_NZACCESS(This, impl) == jnull)
  {
   return (jboolean)jfalse;
  }
  return (jboolean)((jcgo_rcvrL1= (jObject)JCGO_FIELD_NZACCESS(This,
   impl), JCGO_CALL_VFUNC((gnu_java_net_PlainSocketImpl)jcgo_rcvrL1)->getInetAddress__(
   (gnu_java_net_PlainSocketImpl)jcgo_rcvrL1)) != jnull);
 }
}

JCGO_NOSEP_STATIC jboolean CFASTCALL
java_net_Socket__isClosed__( java_net_Socket This )
{
 {
  java_nio_channels_SocketChannel channel;
  channel= (JCGO_CALL_NZVFUNC(This)->getChannel__(
   This));
  return (jboolean)(JCGO_FIELD_NZACCESS(This, impl) == jnull || (channel !=
   jnull && !(java_nio_channels_spi_AbstractInterruptibleChannel__isOpen__(
   (java_nio_channels_spi_AbstractInterruptibleChannel)channel))));
 }
}

JCGO_NOSEP_DATA CONST struct java_net_Socket_methods_s java_net_Socket_methods=
{
 JCGO_CLASSREF_OF(java_net_Socket__class),
 JCGO_GCJDESCR_INIT(java_net_Socket_s, impl)
 OBJT_java_net_Socket,
 (JCGO_OBJSIZE_T)sizeof(struct java_net_Socket_s),
 NULL,
 JCGO_CLINIT_INIT(0)
 java_net_Socket__this__,
 java_lang_Object__equals__Lo,
 java_lang_Object__hashCode__,
 java_net_Socket__toString__,
 java_lang_Object__finalize__,
 java_net_Socket__getChannel__,
 java_net_Socket__isConnected__
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_net_Socket_class_s java_net_Socket__class
 JCGO_THRD_ATTRNONGC=
{
 {
  &java_lang_Class_methods,
  JCGO_MON_INIT
  JCGO_OBJREF_OF(*(java_lang_Object)&java_net_Socket_methods),
  JCGO_STRREF_OF(jcgo_string1_Socket41),
  JCGO_CLASSREF_OF(java_lang_Object__class),
  ((jObjectArr)JCGO_OBJREF_OF(jcgo_array3_Object)),
  0x1
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype44_GameShll jcgo_array9_Socket41=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 22,
 {
  (jbyte)(jchar)106/*'j'*/, (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)118/*'v'*/,
   (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)46/*'.'*/, (jbyte)(jchar)110/*'n'*/,
   (jbyte)(jchar)101/*'e'*/, (jbyte)(jchar)116/*'t'*/, (jbyte)(jchar)46/*'.'*/,
   (jbyte)(jchar)83/*'S'*/, (jbyte)(jchar)111/*'o'*/, (jbyte)(jchar)99/*'c'*/,
   (jbyte)(jchar)107/*'k'*/, (jbyte)(jchar)101/*'e'*/, (jbyte)(jchar)116/*'t'*/,
   (jbyte)(jchar)65/*'A'*/, (jbyte)(jchar)100/*'d'*/, (jbyte)(jchar)100/*'d'*/,
   (jbyte)(jchar)114/*'r'*/, (jbyte)(jchar)101/*'e'*/, (jbyte)(jchar)115/*'s'*/,
   (jbyte)(jchar)115/*'s'*/
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype22_Object jcgo_array10_Socket41=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 16,
 {
  (jbyte)(jchar)115/*'s'*/, (jbyte)(jchar)111/*'o'*/, (jbyte)(jchar)99/*'c'*/,
   (jbyte)(jchar)107/*'k'*/, (jbyte)(jchar)101/*'e'*/, (jbyte)(jchar)116/*'t'*/,
   (jbyte)(jchar)32/*' '*/, (jbyte)(jchar)105/*'i'*/, (jbyte)(jchar)115/*'s'*/,
   (jbyte)(jchar)32/*' '*/, (jbyte)(jchar)99/*'c'*/, (jbyte)(jchar)108/*'l'*/,
   (jbyte)(jchar)111/*'o'*/, (jbyte)(jchar)115/*'s'*/, (jbyte)(jchar)101/*'e'*/,
   (jbyte)(jchar)100/*'d'*/
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype94_GmCnnctn jcgo_array11_Socket41=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 24,
 {
  (jbyte)(jchar)117/*'u'*/, (jbyte)(jchar)110/*'n'*/, (jbyte)(jchar)115/*'s'*/,
   (jbyte)(jchar)117/*'u'*/, (jbyte)(jchar)112/*'p'*/, (jbyte)(jchar)112/*'p'*/,
   (jbyte)(jchar)111/*'o'*/, (jbyte)(jchar)114/*'r'*/, (jbyte)(jchar)116/*'t'*/,
   (jbyte)(jchar)101/*'e'*/, (jbyte)(jchar)100/*'d'*/, (jbyte)(jchar)32/*' '*/,
   (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)100/*'d'*/, (jbyte)(jchar)100/*'d'*/,
   (jbyte)(jchar)114/*'r'*/, (jbyte)(jchar)101/*'e'*/, (jbyte)(jchar)115/*'s'*/,
   (jbyte)(jchar)115/*'s'*/, (jbyte)(jchar)32/*' '*/, (jbyte)(jchar)116/*'t'*/,
   (jbyte)(jchar)121/*'y'*/, (jbyte)(jchar)112/*'p'*/, (jbyte)(jchar)101/*'e'*/
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype24_Object jcgo_array12_Socket41=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 7,
 {
  (jbyte)(jchar)32/*' '*/, (jbyte)(jchar)91/*'['*/, (jbyte)(jchar)97/*'a'*/,
   (jbyte)(jchar)100/*'d'*/, (jbyte)(jchar)100/*'d'*/, (jbyte)(jchar)114/*'r'*/,
   (jbyte)(jchar)61/*'='*/
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype2_BZLib jcgo_array13_Socket41=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 6,
 {
  (jbyte)(jchar)44/*','*/, (jbyte)(jchar)112/*'p'*/, (jbyte)(jchar)111/*'o'*/,
   (jbyte)(jchar)114/*'r'*/, (jbyte)(jchar)116/*'t'*/, (jbyte)(jchar)61/*'='*/
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype63_GmCnnctn jcgo_array14_Socket41=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 14,
 {
  (jbyte)(jchar)32/*' '*/, (jbyte)(jchar)91/*'['*/, (jbyte)(jchar)117/*'u'*/,
   (jbyte)(jchar)110/*'n'*/, (jbyte)(jchar)99/*'c'*/, (jbyte)(jchar)111/*'o'*/,
   (jbyte)(jchar)110/*'n'*/, (jbyte)(jchar)110/*'n'*/, (jbyte)(jchar)101/*'e'*/,
   (jbyte)(jchar)99/*'c'*/, (jbyte)(jchar)116/*'t'*/, (jbyte)(jchar)101/*'e'*/,
   (jbyte)(jchar)100/*'d'*/, (jbyte)(jchar)93/*']'*/
 }
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string1_Socket41
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array9_Socket41),
 0, 15, (jint)0x3929850L
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string2_Socket41
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array10_Socket41),
 0, 16, (jint)0x242dc8b5L
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string3_Socket41
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array11_Socket41),
 0, 24, (jint)0x7735e7f1L
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string4_Socket41
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array5_HashEntr),
 0, 29, (jint)0xf8d6a206L
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string5_Socket41
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array12_Socket41),
 0, 7, (jint)0x3d964b11L
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string6_Socket41
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array13_Socket41),
 0, 6, (jint)0x5173b330L
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string7_Socket41
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array876_Mdclnt),
 0, 11, (jint)0xe5f13c7dL
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string8_Socket41
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array14_Socket41),
 0, 14, (jint)0x54865588L
};

#ifdef CHKALL_java_net_Socket
#include "jcgochke.h"
#endif

#endif
