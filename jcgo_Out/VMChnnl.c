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
gnu_java_nio_VMChannel__void( gnu_java_nio_VMChannel This )
{
 JCGO_FIELD_NZACCESS(This, state)= (gnu_java_nio_VMChannel_State__new__L59mnd(
  This));
}

JCGO_NOSEP_FRWINL jint CFASTCALL
gnu_java_nio_VMChannel__getStdinFD0__( void )
{
#ifdef NOJAVA_gnu_java_nio_VMChannel_getStdinFD0
 jcgo_jniNoNativeFunc();
 return (jint)0;
#else
 jint jcgo_retval;
 JCGO_JNI_BLOCK(0)
 jcgo_retval= JCGO_JNI_FUNC(Java_gnu_java_nio_VMChannel_getStdinFD0)(jcgo_pJniEnv,
  (jclass)JCGO_JNI_TOLOCALREF(0, JCGO_CLASSREF_OF(gnu_java_nio_VMChannel__class)));
 jcgo_jniLeave(jcgo_pJniEnv, NULL);
 return jcgo_retval;
#endif
}

JCGO_NOSEP_FRWINL jint CFASTCALL
gnu_java_nio_VMChannel__getStdoutFD0__( void )
{
#ifdef NOJAVA_gnu_java_nio_VMChannel_getStdoutFD0
 jcgo_jniNoNativeFunc();
 return (jint)0;
#else
 jint jcgo_retval;
 JCGO_JNI_BLOCK(0)
 jcgo_retval= JCGO_JNI_FUNC(Java_gnu_java_nio_VMChannel_getStdoutFD0)(jcgo_pJniEnv,
  (jclass)JCGO_JNI_TOLOCALREF(0, JCGO_CLASSREF_OF(gnu_java_nio_VMChannel__class)));
 jcgo_jniLeave(jcgo_pJniEnv, NULL);
 return jcgo_retval;
#endif
}

JCGO_NOSEP_FRWINL jint CFASTCALL
gnu_java_nio_VMChannel__getStderrFD0__( void )
{
#ifdef NOJAVA_gnu_java_nio_VMChannel_getStderrFD0
 jcgo_jniNoNativeFunc();
 return (jint)0;
#else
 jint jcgo_retval;
 JCGO_JNI_BLOCK(0)
 jcgo_retval= JCGO_JNI_FUNC(Java_gnu_java_nio_VMChannel_getStderrFD0)(jcgo_pJniEnv,
  (jclass)JCGO_JNI_TOLOCALREF(0, JCGO_CLASSREF_OF(gnu_java_nio_VMChannel__class)));
 jcgo_jniLeave(jcgo_pJniEnv, NULL);
 return jcgo_retval;
#endif
}

JCGO_NOSEP_FRWINL jint CFASTCALL
gnu_java_nio_VMChannel__lockingOpHasPos0__( void )
{
#ifdef NOJAVA_gnu_java_nio_VMChannel_lockingOpHasPos0
 jcgo_jniNoNativeFunc();
 return (jint)0;
#else
 jint jcgo_retval;
 JCGO_JNI_BLOCK(0)
 jcgo_retval= JCGO_JNI_FUNC(Java_gnu_java_nio_VMChannel_lockingOpHasPos0)(jcgo_pJniEnv,
  (jclass)JCGO_JNI_TOLOCALREF(0, JCGO_CLASSREF_OF(gnu_java_nio_VMChannel__class)));
 jcgo_jniLeave(jcgo_pJniEnv, NULL);
 return jcgo_retval;
#endif
}

JCGO_NOSEP_STATIC gnu_java_nio_VMChannel CFASTCALL
gnu_java_nio_VMChannel__this__( gnu_java_nio_VMChannel This )
{
 {
  ;
  gnu_java_nio_VMChannel__void(This);
 }
 return This;
}

JCGO_NOSEP_FRWINL gnu_java_nio_VMChannel CFASTCALL
gnu_java_nio_VMChannel__new__( void )
{
 JCGO_CLINIT_TRIG(gnu_java_nio_VMChannel__class);
 return gnu_java_nio_VMChannel__this__(
  (gnu_java_nio_VMChannel)jcgo_newObject((jvtable)&gnu_java_nio_VMChannel_methods));
}

JCGO_NOSEP_INLINE jboolean CFASTCALL
gnu_java_nio_VMChannel__isStdInOutErr__I( jint fileFd )
{
 JCGO_CLINIT_TRIG(gnu_java_nio_VMChannel__class);
 {
  return (jboolean)(fileFd == gnu_java_nio_VMChannel__stdin_fd || fileFd ==
   gnu_java_nio_VMChannel__stdout_fd || fileFd == gnu_java_nio_VMChannel__stderr_fd);
 }
}

JCGO_NOSEP_INLINE jint CFASTCALL
gnu_java_nio_VMChannel__fileClose0__I( jint fd )
{
#ifdef NOJAVA_gnu_java_nio_VMChannel_fileClose0
 jcgo_jniNoNativeFunc();
 return (jint)0;
#else
 jint jcgo_retval;
 JCGO_JNI_BLOCK(0)
 jcgo_retval= JCGO_JNI_FUNC(Java_gnu_java_nio_VMChannel_fileClose0)(jcgo_pJniEnv,
  (jclass)JCGO_JNI_TOLOCALREF(0, JCGO_CLASSREF_OF(gnu_java_nio_VMChannel__class)),
  fd);
 jcgo_jniLeave(jcgo_pJniEnv, NULL);
 return jcgo_retval;
#endif
}

JCGO_NOSEP_INLINE java_lang_String CFASTCALL
gnu_java_nio_VMChannel__getIOErrorMsg0__I( jint res )
{
#ifdef NOJAVA_gnu_java_nio_VMChannel_getIOErrorMsg0
 jcgo_jniNoNativeFunc();
 return jnull;
#else
 JCGO_JNI_BLOCK(0)
 return (java_lang_String)jcgo_jniLeave(jcgo_pJniEnv, (jobject)JCGO_JNI_FUNC(Java_gnu_java_nio_VMChannel_getIOErrorMsg0)(jcgo_pJniEnv,
  (jclass)JCGO_JNI_TOLOCALREF(0, JCGO_CLASSREF_OF(gnu_java_nio_VMChannel__class)),
  res));
#endif
}

JCGO_NOSEP_INLINE jint CFASTCALL
gnu_java_nio_VMChannel__fileOpen0__IALsI( jintArr fdArr, java_lang_String
 path, jint mode )
{
#ifdef NOJAVA_gnu_java_nio_VMChannel_fileOpen0
 jcgo_jniNoNativeFunc();
 return (jint)0;
#else
 jint jcgo_retval;
 JCGO_JNI_BLOCK(2)
 jcgo_retval= JCGO_JNI_FUNC(Java_gnu_java_nio_VMChannel_fileOpen0)(jcgo_pJniEnv,
  (jclass)JCGO_JNI_TOLOCALREF(0, JCGO_CLASSREF_OF(gnu_java_nio_VMChannel__class)),
  (jintArray)JCGO_JNI_TOLOCALREF(1, fdArr), (jstring)JCGO_JNI_TOLOCALREF(2,
  path), mode);
 jcgo_jniLeave(jcgo_pJniEnv, NULL);
 return jcgo_retval;
#endif
}

JCGO_NOSEP_INLINE jint CFASTCALL
gnu_java_nio_VMChannel__isIOErrorNoResources0__I( jint res )
{
#ifdef NOJAVA_gnu_java_nio_VMChannel_isIOErrorNoResources0
 jcgo_jniNoNativeFunc();
 return (jint)0;
#else
 jint jcgo_retval;
 JCGO_JNI_BLOCK(0)
 jcgo_retval= JCGO_JNI_FUNC(Java_gnu_java_nio_VMChannel_isIOErrorNoResources0)(jcgo_pJniEnv,
  (jclass)JCGO_JNI_TOLOCALREF(0, JCGO_CLASSREF_OF(gnu_java_nio_VMChannel__class)),
  res);
 jcgo_jniLeave(jcgo_pJniEnv, NULL);
 return jcgo_retval;
#endif
}

JCGO_NOSEP_INLINE jboolean CFASTCALL
gnu_java_nio_VMChannel__isIORetryNeededOnce__I( jint res )
{
 {
  if (res >= 0 || (gnu_java_nio_VMChannel__isIOErrorNoResources0__I(
   res)) == 0)
  {
   return (jboolean)jfalse;
  }
  (java_lang_VMAccessorJavaLang__gcOnNoResourcesVMRuntime__());
  (java_lang_Runtime__runFinalization__(
   (java_lang_Runtime__getRuntime__())));
  return (jboolean)jtrue;
 }
}

JCGO_NOSEP_INLINE jint CFASTCALL
gnu_java_nio_VMChannel__fileOpen__LsIIA( java_lang_String path, jintArr
 fdArr, jint mode )
{
 {
  jint res;
  jboolean retrying;
  if (path == jnull)
  {
   JCGO_THROW_EXC(java_lang_NullPointerException__new__());
  }
  ;
  retrying= jfalse;
  do
  {
   res= (gnu_java_nio_VMChannel__fileOpen0__IALsI(
    fdArr, path, mode));
   if (!retrying && (gnu_java_nio_VMChannel__isIORetryNeededOnce__I(
    res)))
   {
    retrying= (jboolean)jtrue;
   }
   else
   {
    if (res >= 0 || (gnu_java_nio_VMChannel__isIOErrorInterrupted0__I(
     res)) == 0)
    {
     break;
    }
   }
  }
   while (jtrue);
  return res;
 }
}

JCGO_NOSEP_INLINE void CFASTCALL
gnu_java_nio_VMChannel__checkThreadInterrupted__( void )
{
 {
  if ((java_lang_Thread__interrupted__()))
  {
   JCGO_THROW_EXC(java_io_InterruptedIOException__new__());
  }
 }
}

JCGO_NOSEP_INLINE jint CFASTCALL
gnu_java_nio_VMChannel__fileWrite0__BAIII( jbyteArr buffer, jint off,
 jint len, jint fd )
{
#ifdef NOJAVA_gnu_java_nio_VMChannel_fileWrite0
 jcgo_jniNoNativeFunc();
 return (jint)0;
#else
 jint jcgo_retval;
 JCGO_JNI_BLOCK(1)
 jcgo_retval= JCGO_JNI_FUNC(Java_gnu_java_nio_VMChannel_fileWrite0)(jcgo_pJniEnv,
  (jclass)JCGO_JNI_TOLOCALREF(0, JCGO_CLASSREF_OF(gnu_java_nio_VMChannel__class)),
  (jbyteArray)JCGO_JNI_TOLOCALREF(1, buffer), off, len, fd);
 jcgo_jniLeave(jcgo_pJniEnv, NULL);
 return jcgo_retval;
#endif
}

JCGO_NOSEP_INLINE void CFASTCALL
gnu_java_nio_VMChannel__threadYield__( void )
{
 {
  (java_lang_Thread__yield__());
 }
}

JCGO_NOSEP_INLINE jint CFASTCALL
gnu_java_nio_VMChannel__fileAvailable0__I( jint fd )
{
#ifdef NOJAVA_gnu_java_nio_VMChannel_fileAvailable0
 jcgo_jniNoNativeFunc();
 return (jint)0;
#else
 jint jcgo_retval;
 JCGO_JNI_BLOCK(0)
 jcgo_retval= JCGO_JNI_FUNC(Java_gnu_java_nio_VMChannel_fileAvailable0)(jcgo_pJniEnv,
  (jclass)JCGO_JNI_TOLOCALREF(0, JCGO_CLASSREF_OF(gnu_java_nio_VMChannel__class)),
  fd);
 jcgo_jniLeave(jcgo_pJniEnv, NULL);
 return jcgo_retval;
#endif
}

JCGO_NOSEP_INLINE void CFASTCALL
gnu_java_nio_VMChannel__fileSeek__IJ( jlong newPosition, jint fd )
{
 {
  jlong position;
  do
  {
   position= (gnu_java_nio_VMChannel__fileSeek0__JII(
    newPosition, fd, (jint)1));
  }
   while (position < JLONG_C(0) && (gnu_java_nio_VMChannel__isIOErrorInterrupted0__I(
   (jint)position)) != 0);
  if (position < JLONG_C(0))
  {
   (gnu_java_nio_VMChannel__checkIOResCode__I(
    (jint)position));
  }
  if (position != newPosition)
  {
   JCGO_THROW_EXC((java_io_IOException__new__Ls(
    JCGO_STRREF_OF(jcgo_string3_VMChnnl))));
  }
 }
}

JCGO_NOSEP_FRWINL gnu_java_nio_VMChannel_State CFASTCALL
gnu_java_nio_VMChannel__getState__( gnu_java_nio_VMChannel This )
{
 {
  return JCGO_FIELD_NZACCESS(This, state);
 }
}

JCGO_NOSEP_FRWINL gnu_java_nio_VMChannel CFASTCALL
gnu_java_nio_VMChannel__getStdin__( void )
{
 JCGO_CLINIT_TRIG(gnu_java_nio_VMChannel__class);
 {
  gnu_java_nio_VMChannel ch;
  ch= gnu_java_nio_VMChannel__this__(
   (gnu_java_nio_VMChannel)jcgo_newObject((jvtable)&gnu_java_nio_VMChannel_methods));
  (gnu_java_nio_VMChannel_State__setNativeFileFD__II(
   JCGO_FIELD_NZACCESS(ch, state), gnu_java_nio_VMChannel__stdin_fd,
   gnu_java_nio_FileChannelImpl__READ));
  return ch;
 }
}

JCGO_NOSEP_FRWINL gnu_java_nio_VMChannel CFASTCALL
gnu_java_nio_VMChannel__getStdout__( void )
{
 JCGO_CLINIT_TRIG(gnu_java_nio_VMChannel__class);
 {
  gnu_java_nio_VMChannel ch;
  ch= gnu_java_nio_VMChannel__this__(
   (gnu_java_nio_VMChannel)jcgo_newObject((jvtable)&gnu_java_nio_VMChannel_methods));
  (gnu_java_nio_VMChannel_State__setNativeFileFD__II(
   JCGO_FIELD_NZACCESS(ch, state), gnu_java_nio_VMChannel__stdout_fd,
   gnu_java_nio_FileChannelImpl__WRITE));
  return ch;
 }
}

JCGO_NOSEP_FRWINL gnu_java_nio_VMChannel CFASTCALL
gnu_java_nio_VMChannel__getStderr__( void )
{
 JCGO_CLINIT_TRIG(gnu_java_nio_VMChannel__class);
 {
  gnu_java_nio_VMChannel ch;
  ch= gnu_java_nio_VMChannel__this__(
   (gnu_java_nio_VMChannel)jcgo_newObject((jvtable)&gnu_java_nio_VMChannel_methods));
  (gnu_java_nio_VMChannel_State__setNativeFileFD__II(
   JCGO_FIELD_NZACCESS(ch, state), gnu_java_nio_VMChannel__stderr_fd,
   gnu_java_nio_FileChannelImpl__WRITE));
  return ch;
 }
}

JCGO_NOSEP_FRWINL void CFASTCALL
gnu_java_nio_VMChannel__setBlocking__Z( gnu_java_nio_VMChannel This,
 jboolean blocking )
{
 {
  jObject jcgo_rcvrL1;
  (jcgo_rcvrL1= (jObject)(gnu_java_nio_VMChannel_State__getHandle__(
   JCGO_FIELD_NZACCESS(This, state))), JCGO_CALL_NZVFUNC((gnu_java_nio_VMChannel_Handle)jcgo_rcvrL1)->setNonBlocking__Z(
   (gnu_java_nio_VMChannel_Handle)jcgo_rcvrL1, (jboolean)(!blocking)));
 }
}

JCGO_NOSEP_FRWINL jint CFASTCALL
gnu_java_nio_VMChannel__available__( gnu_java_nio_VMChannel This )
{
 {
  jObject jcgo_rcvrL1;
  return (jcgo_rcvrL1= (jObject)(gnu_java_nio_VMChannel_State__getHandle__(
   JCGO_FIELD_NZACCESS(This, state))), JCGO_CALL_NZVFUNC((gnu_java_nio_VMChannel_Handle)jcgo_rcvrL1)->available__(
   (gnu_java_nio_VMChannel_Handle)jcgo_rcvrL1));
 }
}

JCGO_NOSEP_STATIC jint CFASTCALL
gnu_java_nio_VMChannel__read__L9oaia( gnu_java_nio_VMChannel This,
 java_nio_ByteBuffer dst )
{
 {
  jbyteArr buffer;
  jint len;
  jint off;
  jint res;
  jboolean hasArray;
  jObject jcgo_rcvrL1;
  len= (JCGO_CALL_FINALF(dst) java_nio_Buffer__remaining__(
   (java_nio_Buffer)dst));
  hasArray= jfalse;
  if ((java_nio_ByteBuffer__hasArray__(
   dst)))
  {
   jint jcgo_rcvrI1;
   buffer= (java_nio_ByteBuffer__array__(
    dst));
   off= (jcgo_rcvrI1= (java_nio_ByteBuffer__arrayOffset__(
    dst)), jcgo_rcvrI1 + (java_nio_Buffer__position__(
    (java_nio_Buffer)dst)));
   hasArray= (jboolean)jtrue;
  }
  else
  {
   buffer= len > 0? (jbyteArr)jcgo_newArray(JCGO_CORECLASS_FOR(OBJT_jbyte),
    0, len) : gnu_java_nio_VMChannel__EMPTY_BUF;
   off= 0;
  }
  res= (jcgo_rcvrL1= (jObject)(gnu_java_nio_VMChannel_State__getHandle__(
   JCGO_FIELD_NZACCESS(This, state))), JCGO_CALL_NZVFUNC((gnu_java_nio_VMChannel_Handle)jcgo_rcvrL1)->read__BAII(
   (gnu_java_nio_VMChannel_Handle)jcgo_rcvrL1, buffer, off, len));
  if (res > 0)
  {
   if (hasArray)
   {
    (java_nio_Buffer__position__I(
     (java_nio_Buffer)dst, (java_nio_Buffer__position__(
     (java_nio_Buffer)dst)) + res));
   }
   else
   {
    (java_nio_ByteBufferImpl__put__BAII(
     (java_nio_ByteBufferImpl)dst, buffer, 0, res));
   }
  }
  return res;
 }
}

JCGO_NOSEP_STATIC jint CFASTCALL
gnu_java_nio_VMChannel__read__( gnu_java_nio_VMChannel This )
{
 {
  jbyteArr buffer;
  jint res;
  jObject jcgo_rcvrL1;
  buffer= (jbyteArr)jcgo_newArray(JCGO_CORECLASS_FOR(OBJT_jbyte), 0,
   (jint)1);
  while ((res= (jcgo_rcvrL1= (jObject)(gnu_java_nio_VMChannel_State__getHandle__(
   JCGO_FIELD_NZACCESS(This, state))), JCGO_CALL_NZVFUNC((gnu_java_nio_VMChannel_Handle)jcgo_rcvrL1)->read__BAII(
   (gnu_java_nio_VMChannel_Handle)jcgo_rcvrL1, buffer, 0, (jint)1))) ==
   0)
  {
   (gnu_java_nio_VMChannel__threadYield__());
   (gnu_java_nio_VMChannel__checkThreadInterrupted__());
  }
  return res > 0? (jint)((unsigned char)(JCGO_ARRAY_NZBACCESS(buffer,
   0))) : (-(jint)1);
 }
}

JCGO_NOSEP_STATIC jint CFASTCALL
gnu_java_nio_VMChannel__write__L9oaia( gnu_java_nio_VMChannel This,
 java_nio_ByteBuffer src )
{
 {
  jbyteArr buffer;
  jintArr offArr;
  jint len;
  jint off;
  jObject jcgo_rcvrL1;
  jcgo_arrtype4_VMChnnl jcgo_stackobj1;
  len= (JCGO_CALL_FINALF(src) java_nio_Buffer__remaining__(
   (java_nio_Buffer)src));
  if ((java_nio_ByteBuffer__hasArray__(
   src)))
  {
   jint jcgo_rcvrI1;
   buffer= (java_nio_ByteBuffer__array__(
    src));
   off= (jcgo_rcvrI1= (java_nio_ByteBuffer__arrayOffset__(
    src)), jcgo_rcvrI1 + (java_nio_Buffer__position__(
    (java_nio_Buffer)src)));
  }
  else
  {
   buffer= len > 0? (jbyteArr)jcgo_newArray(JCGO_CORECLASS_FOR(OBJT_jbyte),
    0, len) : gnu_java_nio_VMChannel__EMPTY_BUF;
   (java_nio_ByteBufferImpl__get__BAII(
    (java_nio_ByteBufferImpl)src, buffer, 0, len));
   (java_nio_Buffer__position__I(
    (java_nio_Buffer)src, (java_nio_Buffer__position__(
    (java_nio_Buffer)src)) - len));
   off= 0;
  }
  offArr= (jcgo_rcvrL1= (jObject)(jintArr)JCGO_STACKOBJVLT_PRIMARRNEW(jcgo_stackobj1,
   jintArr_methods, 1),
   JCGO_ARR_INTERNALACC(jint, (jintArr)jcgo_rcvrL1, 0)= off,
   (jintArr)jcgo_rcvrL1);
  {
   JCGO_TRY_BLOCK
   {
    jObject jcgo_rcvrL1;
    (jcgo_rcvrL1= (jObject)(gnu_java_nio_VMChannel_State__getHandle__(
     JCGO_FIELD_NZACCESS(This, state))), JCGO_CALL_NZVFUNC((gnu_java_nio_VMChannel_Handle)jcgo_rcvrL1)->write__BAIAI(
     (gnu_java_nio_VMChannel_Handle)jcgo_rcvrL1, buffer, offArr, len));
   }
   JCGO_TRY_LEAVE
   {
    if ((len= JCGO_ARRAY_NZIACCESS(offArr, 0) - off) > 0)
    {
     (java_nio_Buffer__position__I(
      (java_nio_Buffer)src, (java_nio_Buffer__position__(
      (java_nio_Buffer)src)) + len));
    }
   }
   JCGO_TRY_FINALLYEND
  }
  return len;
 }
}

JCGO_NOSEP_STATIC void CFASTCALL
gnu_java_nio_VMChannel__initSocket__Z( gnu_java_nio_VMChannel This,
 jboolean stream )
{
 {
  if ((gnu_java_nio_VMChannel_State__isValid__(
   JCGO_FIELD_NZACCESS(This, state))) || (gnu_java_nio_VMChannel_State__isClosed__(
   JCGO_FIELD_NZACCESS(This, state))))
  {
   JCGO_THROW_EXC((java_io_IOException__new__Ls(
    JCGO_STRREF_OF(jcgo_string5_VMChnnl))));
  }
  (gnu_java_nio_VMChannel_State__setNativeSocketFD__IZ(
   JCGO_FIELD_NZACCESS(This, state), (gnu_java_net_VMAccessorGnuJavaNet__socketCreateVMPlainSocketImpl__Z(
   (jboolean)stream)), (jboolean)stream));
 }
}

JCGO_NOSEP_FRWINL jboolean CFASTCALL
gnu_java_nio_VMChannel__connect__L5zjctI( gnu_java_nio_VMChannel This,
 java_net_InetSocketAddress address, jint timeout )
{
 {
  {
   JCGO_TRY_BLOCK
   {
    {
     jboolean jcgo_retval= (jboolean)(gnu_java_nio_VMChannel_SocketHandle__connect__L5zjctI(
      (gnu_java_nio_VMChannel_State__getSocketHandle__(
      JCGO_FIELD_NZACCESS(This, state))), address, timeout));
#ifndef JCGO_SEHTRY
     jcgo_tryLeave();
#endif
     return jcgo_retval;
    }
   }
   JCGO_TRY_LEAVE
   JCGO_TRY_CATCHES(1)
   JCGO_TRY_CATCH(OBJT_java_net_SocketException, MAXT_java_net_SocketException)
   {
    java_net_SocketException e;
    e= (java_net_SocketException)JCGO_TRY_THROWABLE(0);
    JCGO_THROW_EXC(e);
   }
   JCGO_TRY_CATCH(OBJT_java_io_IOException, MAXT_java_io_IOException)
   {
    java_io_IOException e;
    e= (java_io_IOException)JCGO_TRY_THROWABLE(0);
    JCGO_THROW_EXC((java_net_SocketException)JCGO_CAST_OBJECT0(OBJT_java_net_SocketException,
     MAXT_java_net_SocketException, (java_lang_Throwable__initCause__Lt(
     (java_lang_Throwable)java_net_SocketException__new__(), (java_lang_Throwable)e))));
   }
   JCGO_TRY_RETHROW(1)
  }
 }
 return (jboolean)0;
}

JCGO_NOSEP_STATIC java_net_InetSocketAddress CFASTCALL
gnu_java_nio_VMChannel__getLocalAddress__( gnu_java_nio_VMChannel
 This )
{
 {
  return (gnu_java_nio_VMChannel_State__isValid__(
   JCGO_FIELD_NZACCESS(This, state)))? (gnu_java_net_VMAccessorGnuJavaNet__socketGetLocalAddrPortVMPlainSocketImpl__I(
   (gnu_java_nio_VMChannel_SocketHandle__getNativeFD__(
   (gnu_java_nio_VMChannel_State__getSocketHandle__(
   JCGO_FIELD_NZACCESS(This, state))))))) : jnull;
 }
}

JCGO_NOSEP_FRWINL java_net_InetSocketAddress CFASTCALL
gnu_java_nio_VMChannel__getPeerAddress__( gnu_java_nio_VMChannel This
 )
{
 {
  return (gnu_java_nio_VMChannel_State__isValid__(
   JCGO_FIELD_NZACCESS(This, state)))? (gnu_java_nio_VMChannel_SocketHandle__getPeerSocketAddress__(
   (gnu_java_nio_VMChannel_State__getSocketHandle__(
   JCGO_FIELD_NZACCESS(This, state))))) : jnull;
 }
}

JCGO_NOSEP_FRWINL void CFASTCALL
gnu_java_nio_VMChannel__openFile__LsI( gnu_java_nio_VMChannel This,
 java_lang_String path, jint mode )
{
 {
  jintArr fdArr;
  if ((gnu_java_nio_VMChannel_State__isValid__(
   JCGO_FIELD_NZACCESS(This, state))) || (gnu_java_nio_VMChannel_State__isClosed__(
   JCGO_FIELD_NZACCESS(This, state))))
  {
   JCGO_THROW_EXC((java_io_IOException__new__Ls(
    JCGO_STRREF_OF(jcgo_string5_VMChnnl))));
  }
  fdArr= (jintArr)jcgo_newArray(JCGO_CORECLASS_FOR(OBJT_jint), 0, (jint)1);
  (gnu_java_nio_VMChannel__checkIOResCode__I(
   (gnu_java_nio_VMChannel__fileOpen__LsIIA(
   path, fdArr, mode))));
  (gnu_java_nio_VMChannel_State__setNativeFileFD__II(
   JCGO_FIELD_NZACCESS(This, state), JCGO_ARRAY_NZIACCESS(fdArr, 0),
   mode));
 }
}

JCGO_NOSEP_FRWINL void CFASTCALL
gnu_java_nio_VMChannel__close__( gnu_java_nio_VMChannel This )
{
 {
  (gnu_java_nio_VMChannel_State__close__(
   JCGO_FIELD_NZACCESS(This, state)));
 }
}

JCGO_NOSEP_STATIC void CFASTCALL
gnu_java_nio_VMChannel__close__I( jint fileFd )
{
 JCGO_CLINIT_TRIG(gnu_java_nio_VMChannel__class);
 {
  if (fileFd != (-(jint)1) && !(gnu_java_nio_VMChannel__isStdInOutErr__I(
   fileFd)))
  {
   jint res;
   do
   {
    res= (gnu_java_nio_VMChannel__fileClose0__I(
     fileFd));
   }
    while (res < 0 && (gnu_java_nio_VMChannel__isIOErrorInterrupted0__I(
    res)) != 0);
   (gnu_java_nio_VMChannel__checkIOResCode__I(
    res));
  }
 }
}

JCGO_NOSEP_INLINE jint CFASTCALL
gnu_java_nio_VMChannel__fileAvailable__I( jint fd )
{
 JCGO_CLINIT_TRIG(gnu_java_nio_VMChannel__class);
 {
  jlong position;
  jint res;
  do
  {
   res= (gnu_java_nio_VMChannel__fileAvailable0__I(
    fd));
   if (res >= 0)
   {
    return res;
   }
  }
   while ((gnu_java_nio_VMChannel__isIOErrorInterrupted0__I(
   res)) != 0);
  do
  {
   position= (gnu_java_nio_VMChannel__fileSeek0__JII(
    JLONG_C(0), fd, 0));
  }
   while (position < JLONG_C(0) && (gnu_java_nio_VMChannel__isIOErrorInterrupted0__I(
   (jint)position)) != 0);
  if (position >= JLONG_C(0))
  {
   jlong size;
   do
   {
    size= (gnu_java_nio_VMChannel__fileSeek0__JII(
     JLONG_C(0), fd, (-(jint)1)));
   }
    while (size < JLONG_C(0) && (gnu_java_nio_VMChannel__isIOErrorInterrupted0__I(
    (jint)size)) != 0);
   if (position != size)
   {
    (gnu_java_nio_VMChannel__fileSeek__IJ(
     position, fd));
   }
   if (size < JLONG_C(0))
   {
    (gnu_java_nio_VMChannel__checkIOResCode__I(
     (jint)size));
   }
   position= size - position;
   return position > JLONG_C(0)? (position < JLONG_C(0x7fffffff)? (jint)position :
    JCGO_USHR_F((-(jint)1), (jint)1)) : 0;
  }
  do
  {
   res= (gnu_java_nio_VMChannel__fileSelect0__II(
    fd, 0));
  }
   while (res < 0 && (gnu_java_nio_VMChannel__isIOErrorInterrupted0__I(
   res)) != 0);
  return res > 0? (jint)1 : 0;
 }
}

JCGO_NOSEP_INLINE jint CFASTCALL
gnu_java_nio_VMChannel__fileRead__IBAIIZ( jbyteArr buffer, jint fd,
 jint off, jint len, jboolean isNonBlocking )
{
 JCGO_CLINIT_TRIG(gnu_java_nio_VMChannel__class);
 {
  jint res;
  if ((off | len) < 0 || JCGO_ARRAY_LENGTH(buffer) - off < len)
  {
   JCGO_THROW_EXC(java_lang_ArrayIndexOutOfBoundsException__new__());
  }
  res= 0;
  if (len > 0 && (!isNonBlocking || (gnu_java_nio_VMChannel__fileSelect0__II(
   fd, 0)) != 0))
  {
   if (isNonBlocking)
   {
    res= (gnu_java_nio_VMChannel__fileRead0__BAIII(
     buffer, off, len, fd));
    if (res < 0)
    {
     if ((gnu_java_nio_VMChannel__isIOErrorInterrupted0__I(
      res)) == 0)
     {
      (gnu_java_nio_VMChannel__checkIOResCode__I(
       res));
     }
     res= 0;
    }
    else
    {
     if (res == 0)
     {
      res= (-(jint)1);
     }
    }
   }
   else
   {
    (gnu_java_nio_VMChannel__checkThreadInterrupted__());
    do
    {
     if (!gnu_java_nio_VMChannel__preventBlocking || (gnu_java_nio_VMChannel__fileSelect0__II(
      fd, 0)) != 0)
     {
      res= (gnu_java_nio_VMChannel__fileRead0__BAIII(
       buffer, off, len, fd));
      if (res >= 0 || (gnu_java_nio_VMChannel__isIOErrorInterrupted0__I(
       res)) == 0)
      {
       break;
      }
     }
     (gnu_java_nio_VMChannel__threadYield__());
     (gnu_java_nio_VMChannel__checkThreadInterrupted__());
    }
     while (jtrue);
    (gnu_java_nio_VMChannel__checkIOResCode__I(
     res));
    if (res == 0)
    {
     res= (-(jint)1);
    }
   }
   if (res > len)
   {
    JCGO_THROW_EXC((java_lang_InternalError__new__Ls(
     JCGO_STRREF_OF(jcgo_string6_VMChnnl))));
   }
  }
  return res;
 }
}

JCGO_NOSEP_INLINE void CFASTCALL
gnu_java_nio_VMChannel__fileWrite__IBAIAIZ( jbyteArr buffer, jintArr
 offArr, jint fd, jint len, jboolean isNonBlocking )
{
 JCGO_CLINIT_TRIG(gnu_java_nio_VMChannel__class);
 {
  jint off;
  off= JCGO_ARRAY_IACCESS(offArr, 0);
  if ((off | len) < 0 || JCGO_ARRAY_LENGTH(buffer) - off < len)
  {
   JCGO_THROW_EXC(java_lang_ArrayIndexOutOfBoundsException__new__());
  }
  if (len > 0 && (!isNonBlocking || (gnu_java_nio_VMChannel__fileSelect0__II(
   fd, (jint)1)) != 0))
  {
   jint remain;
   remain= len;
   if (!isNonBlocking)
   {
    (gnu_java_nio_VMChannel__checkThreadInterrupted__());
   }
   do
   {
    if (isNonBlocking || !gnu_java_nio_VMChannel__preventBlocking ||
     (gnu_java_nio_VMChannel__fileSelect0__II(
     fd, (jint)1)) != 0)
    {
     jint res;
     res= (gnu_java_nio_VMChannel__fileWrite0__BAIII(
      buffer, off, remain, fd));
     if (res > 0)
     {
      off+= res;
      JCGO_ARRAY_NZIACCESS(offArr, 0)= off;
      if ((remain-= res) <= 0)
      {
       break;
      }
     }
     else
     {
      if (res == 0)
      {
       JCGO_THROW_EXC((java_io_IOException__new__Ls(
        JCGO_STRREF_OF(jcgo_string7_VMChnnl))));
      }
      if ((gnu_java_nio_VMChannel__isIOErrorInterrupted0__I(
       res)) == 0)
      {
       (gnu_java_nio_VMChannel__checkIOResCode__I(
        res));
      }
     }
     if (isNonBlocking)
     {
      break;
     }
    }
    (gnu_java_nio_VMChannel__threadYield__());
    if (remain == len)
    {
     (gnu_java_nio_VMChannel__checkThreadInterrupted__());
    }
   }
    while (jtrue);
   if (remain < 0)
   {
    JCGO_THROW_EXC((java_lang_InternalError__new__Ls(
     JCGO_STRREF_OF(jcgo_string8_VMChnnl))));
   }
  }
 }
}

JCGO_NOSEP_STATIC void CFASTCALL
gnu_java_nio_VMChannel__checkIOResCode__I( jint res )
{
 JCGO_CLINIT_TRIG(gnu_java_nio_VMChannel__class);
 {
  if (res < 0)
  {
   JCGO_THROW_EXC((java_io_IOException__new__Ls(
    (gnu_java_nio_VMChannel__getIOErrorMsg0__I(
    res)))));
  }
 }
}

JCGO_NOSEP_STATIC jint CFASTCALL
gnu_java_nio_VMChannel__isIOErrorInterrupted0__I( jint res )
{
#ifdef NOJAVA_gnu_java_nio_VMChannel_isIOErrorInterrupted0
 jcgo_jniNoNativeFunc();
 return (jint)0;
#else
 jint jcgo_retval;
 JCGO_JNI_BLOCK(0)
 jcgo_retval= JCGO_JNI_FUNC(Java_gnu_java_nio_VMChannel_isIOErrorInterrupted0)(jcgo_pJniEnv,
  (jclass)JCGO_JNI_TOLOCALREF(0, JCGO_CLASSREF_OF(gnu_java_nio_VMChannel__class)),
  res);
 jcgo_jniLeave(jcgo_pJniEnv, NULL);
 return jcgo_retval;
#endif
}

JCGO_NOSEP_STATIC jint CFASTCALL
gnu_java_nio_VMChannel__fileRead0__BAIII( jbyteArr buffer, jint off,
 jint len, jint fd )
{
#ifdef NOJAVA_gnu_java_nio_VMChannel_fileRead0
 jcgo_jniNoNativeFunc();
 return (jint)0;
#else
 jint jcgo_retval;
 JCGO_JNI_BLOCK(1)
 jcgo_retval= JCGO_JNI_FUNC(Java_gnu_java_nio_VMChannel_fileRead0)(jcgo_pJniEnv,
  (jclass)JCGO_JNI_TOLOCALREF(0, JCGO_CLASSREF_OF(gnu_java_nio_VMChannel__class)),
  (jbyteArray)JCGO_JNI_TOLOCALREF(1, buffer), off, len, fd);
 jcgo_jniLeave(jcgo_pJniEnv, NULL);
 return jcgo_retval;
#endif
}

JCGO_NOSEP_STATIC jint CFASTCALL
gnu_java_nio_VMChannel__fileSelect0__II( jint fd, jint iswrite )
{
#ifdef NOJAVA_gnu_java_nio_VMChannel_fileSelect0
 jcgo_jniNoNativeFunc();
 return (jint)0;
#else
 jint jcgo_retval;
 JCGO_JNI_BLOCK(0)
 jcgo_retval= JCGO_JNI_FUNC(Java_gnu_java_nio_VMChannel_fileSelect0)(jcgo_pJniEnv,
  (jclass)JCGO_JNI_TOLOCALREF(0, JCGO_CLASSREF_OF(gnu_java_nio_VMChannel__class)),
  fd, iswrite);
 jcgo_jniLeave(jcgo_pJniEnv, NULL);
 return jcgo_retval;
#endif
}

JCGO_NOSEP_STATIC jlong CFASTCALL
gnu_java_nio_VMChannel__fileSeek0__JII( jlong ofs, jint fd, jint direction
 )
{
#ifdef NOJAVA_gnu_java_nio_VMChannel_fileSeek0
 jcgo_jniNoNativeFunc();
 return (jlong)0;
#else
 jlong jcgo_retval;
 JCGO_JNI_BLOCK(0)
 jcgo_retval= JCGO_JNI_FUNC(Java_gnu_java_nio_VMChannel_fileSeek0)(jcgo_pJniEnv,
  (jclass)JCGO_JNI_TOLOCALREF(0, JCGO_CLASSREF_OF(gnu_java_nio_VMChannel__class)),
  ofs, fd, direction);
 jcgo_jniLeave(jcgo_pJniEnv, NULL);
 return jcgo_retval;
#endif
}

JCGO_NOSEP_STATIC void CFASTCALL
gnu_java_nio_VMChannel__class__0( void )
{
 JCGO_CLINIT_BEGIN(gnu_java_nio_VMChannel__class);
 gnu_java_nio_VMChannel__stdin_fd= (gnu_java_nio_VMChannel__getStdinFD0__());
 gnu_java_nio_VMChannel__stdout_fd= (gnu_java_nio_VMChannel__getStdoutFD0__());
 gnu_java_nio_VMChannel__stderr_fd= (gnu_java_nio_VMChannel__getStderrFD0__());
 (void)((gnu_java_nio_VMChannel__lockingOpHasPos0__()) != 0);
 gnu_java_nio_VMChannel__preventBlocking= (java_lang_VMAccessorJavaLang__preventIOBlockingVMRuntime__());
 JCGO_CLINIT_DONE(gnu_java_nio_VMChannel__class);
}

JCGO_NOSEP_DATA CONST struct gnu_java_nio_VMChannel_methods_s gnu_java_nio_VMChannel_methods=
{
 JCGO_CLASSREF_OF(gnu_java_nio_VMChannel__class),
 JCGO_GCJDESCR_ZEROINIT
 OBJT_gnu_java_nio_VMChannel,
 (JCGO_OBJSIZE_T)sizeof(struct gnu_java_nio_VMChannel_s),
 NULL,
 JCGO_CLINIT_INIT(gnu_java_nio_VMChannel__class__0)
 gnu_java_nio_VMChannel__this__,
 java_lang_Object__equals__Lo,
 java_lang_Object__hashCode__,
 java_lang_Object__toString__,
 java_lang_Object__finalize__
};

JCGO_NOSEP_DATA struct gnu_java_nio_VMChannel_class_s gnu_java_nio_VMChannel__class
 ATTRIBNONGC=
{
 {
  &java_lang_Class_methods,
  JCGO_MON_INIT
  JCGO_OBJREF_OF(*(java_lang_Object)&gnu_java_nio_VMChannel_methods),
  JCGO_STRREF_OF(jcgo_string1_VMChnnl),
  JCGO_CLASSREF_OF(java_lang_Object__class),
  ((jObjectArr)JCGO_OBJREF_OF(jcgo_array3_Object)),
  0x1d1
 }
};

JCGO_NOSEP_DATA jint gnu_java_nio_VMChannel__stdin_fd= (jint)0;

JCGO_NOSEP_DATA jint gnu_java_nio_VMChannel__stdout_fd= (jint)0;

JCGO_NOSEP_DATA jint gnu_java_nio_VMChannel__stderr_fd= (jint)0;

JCGO_NOSEP_DATA jboolean gnu_java_nio_VMChannel__preventBlocking=
 (jboolean)0;

JCGO_NOSEP_DATA JCGO_NOTHR_CONST jcgo_arrtype2_VMChnnl jcgo_array2_VMChnnl
 JCGO_THRD_ATTRNONGC=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 0,
 {
  (jbyte)0
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype48_GameShll jcgo_array9_VMChnnl=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 33,
 {
  (jbyte)(jchar)103/*'g'*/, (jbyte)(jchar)110/*'n'*/, (jbyte)(jchar)117/*'u'*/,
   (jbyte)(jchar)46/*'.'*/, (jbyte)(jchar)106/*'j'*/, (jbyte)(jchar)97/*'a'*/,
   (jbyte)(jchar)118/*'v'*/, (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)46/*'.'*/,
   (jbyte)(jchar)110/*'n'*/, (jbyte)(jchar)105/*'i'*/, (jbyte)(jchar)111/*'o'*/,
   (jbyte)(jchar)46/*'.'*/, (jbyte)(jchar)86/*'V'*/, (jbyte)(jchar)77/*'M'*/,
   (jbyte)(jchar)67/*'C'*/, (jbyte)(jchar)104/*'h'*/, (jbyte)(jchar)97/*'a'*/,
   (jbyte)(jchar)110/*'n'*/, (jbyte)(jchar)110/*'n'*/, (jbyte)(jchar)101/*'e'*/,
   (jbyte)(jchar)108/*'l'*/, (jbyte)(jchar)36/*'$'*/, (jbyte)(jchar)70/*'F'*/,
   (jbyte)(jchar)105/*'i'*/, (jbyte)(jchar)108/*'l'*/, (jbyte)(jchar)101/*'e'*/,
   (jbyte)(jchar)72/*'H'*/, (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)110/*'n'*/,
   (jbyte)(jchar)100/*'d'*/, (jbyte)(jchar)108/*'l'*/, (jbyte)(jchar)101/*'e'*/
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype98_GmCnnctn jcgo_array10_VMChnnl=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 32,
 {
  (jbyte)(jchar)99/*'c'*/, (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)110/*'n'*/,
   (jbyte)(jchar)110/*'n'*/, (jbyte)(jchar)111/*'o'*/, (jbyte)(jchar)116/*'t'*/,
   (jbyte)(jchar)32/*' '*/, (jbyte)(jchar)114/*'r'*/, (jbyte)(jchar)101/*'e'*/,
   (jbyte)(jchar)105/*'i'*/, (jbyte)(jchar)110/*'n'*/, (jbyte)(jchar)105/*'i'*/,
   (jbyte)(jchar)116/*'t'*/, (jbyte)(jchar)105/*'i'*/, (jbyte)(jchar)97/*'a'*/,
   (jbyte)(jchar)108/*'l'*/, (jbyte)(jchar)105/*'i'*/, (jbyte)(jchar)122/*'z'*/,
   (jbyte)(jchar)101/*'e'*/, (jbyte)(jchar)32/*' '*/, (jbyte)(jchar)116/*'t'*/,
   (jbyte)(jchar)104/*'h'*/, (jbyte)(jchar)105/*'i'*/, (jbyte)(jchar)115/*'s'*/,
   (jbyte)(jchar)32/*' '*/, (jbyte)(jchar)99/*'c'*/, (jbyte)(jchar)104/*'h'*/,
   (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)110/*'n'*/, (jbyte)(jchar)110/*'n'*/,
   (jbyte)(jchar)101/*'e'*/, (jbyte)(jchar)108/*'l'*/
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype26_Object jcgo_array11_VMChnnl=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 12,
 {
  (jbyte)(jchar)114/*'r'*/, (jbyte)(jchar)101/*'e'*/, (jbyte)(jchar)97/*'a'*/,
   (jbyte)(jchar)100/*'d'*/, (jbyte)(jchar)40/*'('*/, (jbyte)(jchar)41/*')'*/,
   (jbyte)(jchar)32/*' '*/, (jbyte)(jchar)102/*'f'*/, (jbyte)(jchar)97/*'a'*/,
   (jbyte)(jchar)117/*'u'*/, (jbyte)(jchar)108/*'l'*/, (jbyte)(jchar)116/*'t'*/
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype91_GmCnnctn jcgo_array12_VMChnnl=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 23,
 {
  (jbyte)(jchar)110/*'n'*/, (jbyte)(jchar)111/*'o'*/, (jbyte)(jchar)32/*' '*/,
   (jbyte)(jchar)115/*'s'*/, (jbyte)(jchar)112/*'p'*/, (jbyte)(jchar)97/*'a'*/,
   (jbyte)(jchar)99/*'c'*/, (jbyte)(jchar)101/*'e'*/, (jbyte)(jchar)32/*' '*/,
   (jbyte)(jchar)108/*'l'*/, (jbyte)(jchar)101/*'e'*/, (jbyte)(jchar)102/*'f'*/,
   (jbyte)(jchar)116/*'t'*/, (jbyte)(jchar)32/*' '*/, (jbyte)(jchar)111/*'o'*/,
   (jbyte)(jchar)110/*'n'*/, (jbyte)(jchar)32/*' '*/, (jbyte)(jchar)100/*'d'*/,
   (jbyte)(jchar)101/*'e'*/, (jbyte)(jchar)118/*'v'*/, (jbyte)(jchar)105/*'i'*/,
   (jbyte)(jchar)99/*'c'*/, (jbyte)(jchar)101/*'e'*/
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype30_GameShll jcgo_array13_VMChnnl=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 13,
 {
  (jbyte)(jchar)119/*'w'*/, (jbyte)(jchar)114/*'r'*/, (jbyte)(jchar)105/*'i'*/,
   (jbyte)(jchar)116/*'t'*/, (jbyte)(jchar)101/*'e'*/, (jbyte)(jchar)40/*'('*/,
   (jbyte)(jchar)41/*')'*/, (jbyte)(jchar)32/*' '*/, (jbyte)(jchar)102/*'f'*/,
   (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)117/*'u'*/, (jbyte)(jchar)108/*'l'*/,
   (jbyte)(jchar)116/*'t'*/
 }
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string1_VMChnnl
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array9_VMChnnl),
 0, 22, (jint)0xa09bf1a6L
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string3_VMChnnl
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array775_Mdclnt),
 0, 13, (jint)0x24fe7cc4L
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string5_VMChnnl
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array10_VMChnnl),
 0, 32, (jint)0xf6788fa1L
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string6_VMChnnl
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array11_VMChnnl),
 0, 12, (jint)0x965a31d9L
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string7_VMChnnl
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array12_VMChnnl),
 0, 23, (jint)0x66137637L
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string8_VMChnnl
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array13_VMChnnl),
 0, 13, (jint)0x7e8cd722L
};

#ifdef CHKALL_gnu_java_nio_VMChannel
#include "jcgochke.h"
#endif

#endif