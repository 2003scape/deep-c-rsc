/* DO NOT EDIT THIS FILE - it is machine generated (JCGO_116) */

#ifdef JCGO_SEPARATED
#define JCGO_116
#include "jcgortl.h"
#include "Main.h"
#endif

#ifdef JCGO_116

#ifdef CHKALL_gnu_java_nio_NIOSocketImpl
#include "jcgobchk.h"
#endif

JCGO_NOSEP_INLINE gnu_java_nio_NIOSocketImpl CFASTCALL
gnu_java_nio_NIOSocketImpl__this__L498l2( gnu_java_nio_NIOSocketImpl
 This, gnu_java_nio_SocketChannelImpl channel )
{
 {
  jObject jcgo_rcvrL1;
  jObject jcgo_rcvrL2;
  (gnu_java_net_PlainSocketImpl__this__((gnu_java_net_PlainSocketImpl)This));
  JCGO_FIELD_NZACCESS(This, channel_02)= channel;
  (jcgo_rcvrL1= (jObject)(jcgo_rcvrL1= (jObject)JCGO_FIELD_NZACCESS(This,
   impl), JCGO_CALL_FINALF((gnu_java_net_VMPlainSocketImpl)jcgo_rcvrL1)
   gnu_java_net_VMPlainSocketImpl__getState__(
   (gnu_java_net_VMPlainSocketImpl)jcgo_rcvrL1)), gnu_java_net_VMPlainSocketImpl_State__setChannelFD__L7r5z2(
   (gnu_java_net_VMPlainSocketImpl_State)jcgo_rcvrL1, (jcgo_rcvrL2=
   (jObject)(JCGO_CALL_FINALF(channel) gnu_java_nio_SocketChannelImpl__getVMChannel__(
   channel)), JCGO_CALL_FINALF((gnu_java_nio_VMChannel)jcgo_rcvrL2)
   gnu_java_nio_VMChannel__getState__(
   (gnu_java_nio_VMChannel)jcgo_rcvrL2))));
 }
 return This;
}

JCGO_NOSEP_FRWINL gnu_java_nio_NIOSocketImpl CFASTCALL
gnu_java_nio_NIOSocketImpl__new__L498l2( gnu_java_nio_SocketChannelImpl
 channel )
{
 return gnu_java_nio_NIOSocketImpl__this__L498l2(
  (gnu_java_nio_NIOSocketImpl)jcgo_newObject((jvtable)&gnu_java_nio_NIOSocketImpl_methods),
  channel);
}

JCGO_NOSEP_STATIC java_net_InetAddress CFASTCALL
gnu_java_nio_NIOSocketImpl__getInetAddress__( gnu_java_nio_NIOSocketImpl
 This )
{
 {
  {
   JCGO_TRY_BLOCK
   {
    jObject jcgo_rcvrL1;
    {
     java_net_InetAddress jcgo_retval= (jcgo_rcvrL1= (jObject)(jcgo_rcvrL1=
      (jObject)(jcgo_rcvrL1= (jObject)JCGO_FIELD_NZACCESS(This, channel_02),
      JCGO_CALL_EFINALF((gnu_java_nio_SocketChannelImpl)jcgo_rcvrL1)
      gnu_java_nio_SocketChannelImpl__getVMChannel__(
      (gnu_java_nio_SocketChannelImpl)jcgo_rcvrL1)), JCGO_CALL_EFINALF((gnu_java_nio_VMChannel)jcgo_rcvrL1)
      gnu_java_nio_VMChannel__getPeerAddress__(
      (gnu_java_nio_VMChannel)jcgo_rcvrL1)), JCGO_CALL_EFINALF((java_net_InetSocketAddress)jcgo_rcvrL1)
      java_net_InetSocketAddress__getAddress__(
      (java_net_InetSocketAddress)jcgo_rcvrL1));
#ifndef JCGO_SEHTRY
     jcgo_tryLeave();
#endif
     return jcgo_retval;
    }
   }
   JCGO_TRY_LEAVE
   JCGO_TRY_CATCHES(1)
   JCGO_TRY_CATCH(OBJT_java_io_IOException, MAXT_java_io_IOException)
   {
    return (java_net_InetAddress)jnull;
   }
   JCGO_TRY_CATCH(OBJT_java_lang_NullPointerException, MAXT_java_lang_NullPointerException)
   {
    return (java_net_InetAddress)jnull;
   }
   JCGO_TRY_RETHROW(1)
  }
 }
 return jnull;
}

JCGO_NOSEP_STATIC jint CFASTCALL
gnu_java_nio_NIOSocketImpl__getPort__( gnu_java_nio_NIOSocketImpl
 This )
{
 {
  {
   JCGO_TRY_BLOCK
   {
    jObject jcgo_rcvrL1;
    {
     jint jcgo_retval= (jcgo_rcvrL1= (jObject)(jcgo_rcvrL1= (jObject)(jcgo_rcvrL1=
      (jObject)JCGO_FIELD_NZACCESS(This, channel_02), JCGO_CALL_EFINALF((gnu_java_nio_SocketChannelImpl)jcgo_rcvrL1)
      gnu_java_nio_SocketChannelImpl__getVMChannel__(
      (gnu_java_nio_SocketChannelImpl)jcgo_rcvrL1)), JCGO_CALL_EFINALF((gnu_java_nio_VMChannel)jcgo_rcvrL1)
      gnu_java_nio_VMChannel__getPeerAddress__(
      (gnu_java_nio_VMChannel)jcgo_rcvrL1)), JCGO_CALL_EFINALF((java_net_InetSocketAddress)jcgo_rcvrL1)
      java_net_InetSocketAddress__getPort__(
      (java_net_InetSocketAddress)jcgo_rcvrL1));
#ifndef JCGO_SEHTRY
     jcgo_tryLeave();
#endif
     return jcgo_retval;
    }
   }
   JCGO_TRY_LEAVE
   JCGO_TRY_CATCHES(1)
   JCGO_TRY_CATCH(OBJT_java_io_IOException, MAXT_java_io_IOException)
   {
    return (-(jint)1);
   }
   JCGO_TRY_CATCH(OBJT_java_lang_NullPointerException, MAXT_java_lang_NullPointerException)
   {
    return (-(jint)1);
   }
   JCGO_TRY_RETHROW(1)
  }
 }
 return (jint)0;
}

JCGO_NOSEP_INLINE void CFASTCALL
gnu_java_nio_NIOSocketImpl__create__Z( gnu_java_nio_NIOSocketImpl
 This, jboolean stream )
{
 JCGO_SYNC_BLOCKSAFENZ(This)
 {
 }
 JCGO_SYNC_END
}

JCGO_NOSEP_DATA CONST struct gnu_java_nio_NIOSocketImpl_methods_s
 gnu_java_nio_NIOSocketImpl_methods=
{
 JCGO_CLASSREF_OF(gnu_java_nio_NIOSocketImpl__class),
 JCGO_GCJDESCR_INIT(gnu_java_nio_NIOSocketImpl_s, channel_02)
 OBJT_gnu_java_nio_NIOSocketImpl,
 (JCGO_OBJSIZE_T)sizeof(struct gnu_java_nio_NIOSocketImpl_s),
 NULL,
 JCGO_CLINIT_INIT(0)
 0,
 java_lang_Object__equals__Lo,
 java_lang_Object__hashCode__,
 java_net_SocketImpl__toString__,
 java_lang_Object__finalize__,
 gnu_java_nio_NIOSocketImpl__create__Z,
 gnu_java_nio_NIOSocketImpl__getInetAddress__,
 gnu_java_nio_NIOSocketImpl__getPort__
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct gnu_java_nio_NIOSocketImpl_class_s
 gnu_java_nio_NIOSocketImpl__class JCGO_THRD_ATTRNONGC=
{
 {
  &java_lang_Class_methods,
  JCGO_MON_INIT
  JCGO_OBJREF_OF(*(java_lang_Object)&gnu_java_nio_NIOSocketImpl_methods),
  JCGO_STRREF_OF(jcgo_string1_NIOSckIm),
  JCGO_CLASSREF_OF(gnu_java_net_PlainSocketImpl__class),
  ((jObjectArr)JCGO_OBJREF_OF(jcgo_array3_Object)),
  0x1
 }
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string1_NIOSckIm
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array2_NIOSckt),
 0, 26, (jint)0x8d2403a1L
};

#ifdef CHKALL_gnu_java_nio_NIOSocketImpl
#include "jcgochke.h"
#endif

#endif
