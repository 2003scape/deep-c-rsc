/* DO NOT EDIT THIS FILE - it is machine generated (JCGO_116) */

#ifdef JCGO_SEPARATED
#define JCGO_116
#include "jcgortl.h"
#include "Main.h"
#endif

#ifdef JCGO_116

#ifdef CHKALL_java_lang_VMThread
#include "jcgobchk.h"
#endif

JCGO_NOSEP_STATIC java_lang_VMThread CFASTCALL
java_lang_VMThread__this__L20uxk( java_lang_VMThread This, java_lang_Thread
 thread )
{
 {
  ;
  JCGO_FIELD_NZACCESS(This, thread)= thread;
 }
 return This;
}

JCGO_NOSEP_INLINE java_lang_VMThread CFASTCALL
java_lang_VMThread__new__L20uxk( java_lang_Thread thread )
{
 return java_lang_VMThread__this__L20uxk(
  (java_lang_VMThread)jcgo_newObject((jvtable)&java_lang_VMThread_methods),
  thread);
}

JCGO_NOSEP_INLINE jboolean CFASTCALL
java_lang_VMThread__isStartRetryNeededOnce__( void )
{
 {
  if (!java_lang_VMThread__hasThreads)
  {
   return (jboolean)jfalse;
  }
  (java_lang_VMRuntime__gcOnNoResources__());
  (java_lang_VMThread__yield__());
  return (jboolean)jtrue;
 }
}

JCGO_NOSEP_INLINE java_lang_String CFASTCALL
java_lang_VMThread__getName__( java_lang_VMThread This )
{
 {
  return JCGO_VLT_LFETCH(java_lang_String, JCGO_FIELD_ACCESS(java_lang_Thread,
   JCGO_FIELD_NZACCESS(This, thread), name));
 }
}

JCGO_NOSEP_INLINE void CFASTCALL
java_lang_VMThread__start__J( java_lang_VMThread This, jlong stacksize
 )
{
 {
  jboolean retrying;
  retrying= jfalse;
  while ((JCGO_VLT_LSTORE(java_lang_Object, &JCGO_FIELD_NZACCESS(This,
   vmdata), (java_lang_VMThread__start0__LoJ(
   (java_lang_Object)JCGO_FIELD_NZACCESS(This, thread), stacksize)))) ==
   jnull)
  {
   if (retrying || !(java_lang_VMThread__isStartRetryNeededOnce__()))
   {
    JCGO_THROW_EXC((java_lang_OutOfMemoryError__new__Ls(
     (java_lang_String__concat__Ls(
     JCGO_STRREF_OF(jcgo_string3_VMThread), (java_lang_VMThread__getName__(
     This)))))));
   }
   retrying= (jboolean)jtrue;
  }
  {
   JCGO_SYNC_BLOCKSAFENZ(java_lang_VMThread__threadStartLock)
   {
    JCGO_VLT_LSTORE(void, &JCGO_FIELD_ACCESS(java_lang_Thread, JCGO_FIELD_NZACCESS(This,
     thread), vmThread), This);
    java_lang_VMThread__totalStartedCnt++;
    (java_lang_VMThread__notify__LoZ(
     (java_lang_Object)java_lang_VMThread__threadStartLock, (jboolean)jtrue));
   }
   JCGO_SYNC_END
  }
  (java_lang_VMThread__yield__());
 }
}

JCGO_NOSEP_INLINE jint CFASTCALL
java_lang_VMThread__getPriority__( java_lang_VMThread This )
{
 {
  return JCGO_VLT_FETCHI(JCGO_FIELD_ACCESS(java_lang_Thread, JCGO_FIELD_NZACCESS(This,
   thread), priority));
 }
}

JCGO_NOSEP_INLINE void CFASTCALL
java_lang_VMThread__setupMainThread__( void )
{
 {
  java_lang_Thread thread;
  java_lang_VMThread vt;
  java_lang_Throwable throwable;
  thread= (java_lang_Thread__new__L40aspLsIZ(
   (java_lang_VMThread)jnull, JCGO_STRREF_OF(jcgo_string4_VMThread),
   java_lang_Thread__NORM_PRIORITY, (jboolean)jfalse));
  (java_lang_VMThread__rootGroupAdd__L20uxk(
   thread));
  vt= (java_lang_VMThread__new__L20uxk(
   thread));
  JCGO_VLT_LSTORE(void, &JCGO_FIELD_NZACCESS(thread, vmThread), vt);
  JCGO_VLT_LSTORE(void, &JCGO_FIELD_NZACCESS(vt, vmdata), (java_lang_VMThread__setupMainThread0__Lo(
   (java_lang_Object)thread)));
  JCGO_VLT_STOREI((&JCGO_FIELD_NZACCESS(vt, threadStatus)), java_lang_VMThread__STATE_RUNNABLE);
  java_lang_VMThread__mainVMThread= vt;
  if ((throwable= JCGO_FIELD_NZACCESS(thread, stillborn)) != jnull)
  {
   JCGO_FIELD_NZACCESS(thread, stillborn)= (java_lang_Throwable)jnull;
   if (jcgo_instanceOf0(OBJT_java_lang_RuntimeException, MAXT_java_lang_RuntimeException,
    (jObject)throwable))
   {
    JCGO_THROW_EXC((java_lang_RuntimeException)throwable);
   }
   JCGO_THROW_EXC((java_lang_Error)JCGO_CAST_OBJECT0(OBJT_java_lang_Error,
    MAXT_java_lang_Error, (jcgo_instanceOf0(OBJT_java_lang_Error, MAXT_java_lang_Error,
    (jObject)throwable)? throwable : (java_lang_Throwable__initCause__Lt(
    (java_lang_Throwable)(java_lang_InternalError__new__Ls(
    JCGO_STRREF_OF(jcgo_string5_VMThread))), throwable)))));
  }
  (java_lang_VMThread__nativeSetPriority__I(
   vt, (java_lang_VMThread__getPriority__(
   vt))));
 }
}

JCGO_NOSEP_INLINE void CFASTCALL
java_lang_VMThread__run__( java_lang_VMThread This )
{
 {
  {
   JCGO_TRY_BLOCK
   {
    {
     JCGO_TRY_BLOCK
     {
      {
       JCGO_SYNC_BLOCK(JCGO_FIELD_NZACCESS(This, thread))
       {
        java_lang_Throwable throwable;
        JCGO_VLT_STOREI((&JCGO_FIELD_NZACCESS(This, threadStatus)),
         java_lang_VMThread__STATE_RUNNABLE);
        throwable= JCGO_FIELD_NZACCESS(JCGO_FIELD_NZACCESS(This, thread),
         stillborn);
        if (throwable != jnull)
        {
         JCGO_FIELD_NZACCESS(JCGO_FIELD_NZACCESS(This, thread), stillborn)=
          (java_lang_Throwable)jnull;
         JCGO_THROW_EXC(throwable);
        }
       }
       JCGO_SYNC_END
      }
      (JCGO_CALL_NZVFUNC(JCGO_FIELD_NZACCESS(This, thread))->run__(
       JCGO_FIELD_NZACCESS(This, thread)));
     }
     JCGO_TRY_LEAVE
     JCGO_TRY_CATCHES(1)
     JCGO_TRY_CATCH(OBJT_java_lang_Throwable, MAXT_java_lang_Throwable)
     {
      java_lang_Throwable throwable;
      throwable= (java_lang_Throwable)JCGO_TRY_THROWABLE(0);
      (java_lang_VMThread__printUncaughtException__L20uxkLt(
       JCGO_FIELD_NZACCESS(This, thread), throwable));
     }
     JCGO_TRY_RETHROW(1)
    }
   }
   JCGO_TRY_LEAVE
   {
    (java_lang_VMThread__detachInner__(
     This));
   }
   JCGO_TRY_FINALLYEND
  }
 }
}

JCGO_NOSEP_INLINE void CFASTCALL
java_lang_VMThread__create__L20uxkJ( java_lang_Thread thread, jlong
 stacksize )
{
 JCGO_CLINIT_TRIG(java_lang_VMThread__class);
 {
  java_lang_VMThread vt;
  vt= (java_lang_VMThread__new__L20uxk(
   thread));
  (java_lang_VMThread__start__J(
   vt, stacksize));
  (java_lang_VMThread__attachInner__(
   vt));
 }
}

JCGO_NOSEP_INLINE void CFASTCALL
java_lang_VMThread__setName__Ls( java_lang_VMThread This, java_lang_String
 name )
{
 {
  JCGO_VLT_LSTORE(void, &JCGO_FIELD_ACCESS(java_lang_Thread, JCGO_FIELD_NZACCESS(This,
   thread), name), name);
 }
}

JCGO_NOSEP_STATIC void CFASTCALL
java_lang_VMThread__setPriority__I( java_lang_VMThread This, jint
 priority )
{
 {
  JCGO_VLT_STOREI((&JCGO_FIELD_ACCESS(java_lang_Thread, JCGO_FIELD_NZACCESS(This,
   thread), priority)), priority);
  (java_lang_VMThread__nativeSetPriority__I(
   This, priority));
 }
}

JCGO_NOSEP_INLINE void CFASTCALL
java_lang_VMThread__join__JI( java_lang_VMThread This, jlong ms, jint
 ns )
{
 {
  {
   JCGO_SYNC_BLOCKSAFENZ(This)
   {
    while (JCGO_VLT_LFETCH(java_lang_VMThread, JCGO_FIELD_ACCESS(java_lang_Thread,
     JCGO_FIELD_NZACCESS(This, thread), vmThread)) != jnull)
    {
     (java_lang_VMThread__wait__LoJI(
      (java_lang_Object)This, ms, ns));
     if (ms != JLONG_C(0) || ns != 0)
     {
      break;
     }
    }
   }
   JCGO_SYNC_END
  }
 }
}

JCGO_NOSEP_INLINE void CFASTCALL
java_lang_VMThread__interrupt__( java_lang_VMThread This )
{
 {
  java_lang_Object vmdata;
  vmdata= JCGO_VLT_LFETCH(java_lang_Object, JCGO_FIELD_NZACCESS(This,
   vmdata));
  if (vmdata != jnull)
  {
   {
    JCGO_SYNC_BLOCKSAFENZ(This)
    {
     if (JCGO_FIELD_NZACCESS(This, parkFlags) != (java_lang_VMThread__PARKFLAGS_PARKED |
      java_lang_VMThread__PARKFLAGS_UNPARKPERMIT))
     {
      (java_lang_VMThread__interrupt0__LoI(
       vmdata, (jint)1));
     }
     else
     {
      JCGO_FIELD_NZACCESS(This, parkFlags)= java_lang_VMThread__PARKFLAGS_PARKED;
     }
    }
    JCGO_SYNC_END
   }
  }
 }
}

JCGO_NOSEP_STATIC void CFASTCALL
java_lang_VMThread__nativeSetPriority__I( java_lang_VMThread This,
 jint priority )
{
 {
  java_lang_Object vmdata;
  vmdata= JCGO_VLT_LFETCH(java_lang_Object, JCGO_FIELD_NZACCESS(This,
   vmdata));
  if (vmdata != jnull)
  {
   (java_lang_VMThread__nativeSetPriority0__LoI(
    vmdata, priority));
  }
 }
}

JCGO_NOSEP_STATIC java_lang_Thread CFASTCALL
java_lang_VMThread__currentThread__( void )
{
 JCGO_CLINIT_TRIG(java_lang_VMThread__class);
 {
  java_lang_Thread thread;
  java_lang_VMThread vt;
  thread= (java_lang_Thread)JCGO_CAST_OBJECT0(OBJT_java_lang_Thread,
   MAXT_java_lang_Thread, (java_lang_VMThread__currentThread0__()));
  if (thread == jnull && ((vt= java_lang_VMThread__mainVMThread) ==
   jnull || (thread= JCGO_FIELD_NZACCESS(vt, thread)) == jnull))
  {
   JCGO_THROW_EXC(java_lang_InternalError__new__());
  }
  return thread;
 }
}

JCGO_NOSEP_STATIC jboolean CFASTCALL
java_lang_VMThread__interrupted__( void )
{
 JCGO_CLINIT_TRIG(java_lang_VMThread__class);
 {
  java_lang_VMThread vt;
  java_lang_Object vmdata;
  jint res;
  vt= JCGO_VLT_LFETCH(java_lang_VMThread, JCGO_FIELD_NZACCESS((java_lang_VMThread__currentThread__()),
   vmThread));
  res= 0;
  if (vt != jnull && (vmdata= JCGO_VLT_LFETCH(java_lang_Object, JCGO_FIELD_NZACCESS(vt,
   vmdata))) != jnull)
  {
   {
    JCGO_SYNC_BLOCKSAFENZ(vt)
    {
     res= (java_lang_VMThread__interrupt0__LoI(
      vmdata, (-(jint)1)));
    }
    JCGO_SYNC_END
   }
  }
  return (jboolean)(res > 0);
 }
}

JCGO_NOSEP_INLINE void CFASTCALL
java_lang_VMThread__sleep__JI( jlong ms, jint ns )
{
 JCGO_CLINIT_TRIG(java_lang_VMThread__class);
 {
  if (ms != JLONG_C(0) || ns != 0)
  {
   java_lang_VMThread vt;
   vt= JCGO_VLT_LFETCH(java_lang_VMThread, JCGO_FIELD_NZACCESS((java_lang_VMThread__currentThread__()),
    vmThread));
   if (vt != jnull)
   {
    {
     JCGO_SYNC_BLOCKSAFENZ(vt)
     {
      (java_lang_VMThread__wait__LoJI(
       (java_lang_Object)vt, ms, ns));
     }
     JCGO_SYNC_END
    }
   }
  }
  else
  {
   (java_lang_VMThread__yield__());
   if ((java_lang_VMThread__interrupted__()))
   {
    JCGO_THROW_EXC(java_lang_InterruptedException__new__());
   }
  }
 }
}

JCGO_NOSEP_STATIC void CFASTCALL
java_lang_VMThread__notify__LoZ( java_lang_Object obj, jboolean all
 )
{
 JCGO_CLINIT_TRIG(java_lang_VMThread__class);
 {
  if ((java_lang_VMThread__notify0__LoI(
   obj, all? (jint)1 : 0)) < 0)
  {
   JCGO_THROW_EXC(java_lang_IllegalMonitorStateException__new__());
  }
 }
}

JCGO_NOSEP_STATIC void CFASTCALL
java_lang_VMThread__wait__LoJI( java_lang_Object obj, jlong ms, jint
 ns )
{
 JCGO_CLINIT_TRIG(java_lang_VMThread__class);
 {
  jint res;
  res= (java_lang_VMThread__wait0__LoJI(
   obj, ms, ns));
  if (res < 0)
  {
   JCGO_THROW_EXC(java_lang_IllegalMonitorStateException__new__());
  }
  if (res != 0)
  {
   JCGO_THROW_EXC(java_lang_InterruptedException__new__());
  }
 }
}

JCGO_NOSEP_STATIC void CFASTCALL
java_lang_VMThread__initSystemErr__( void )
{
 JCGO_CLINIT_TRIG(java_lang_VMThread__class);
 {
  JCGO_VLT_LSTORE(void, &java_lang_VMThread__uncaughtHandler, java_lang_VMThread_UncaughtHandler__new__());
  if (java_lang_VMThread__mainVMThread == jnull)
  {
   (java_lang_VMThread__jniExceptionDescribe0X__Lo(
    (java_lang_Object)java_lang_Throwable__new__()));
   (java_lang_VMThread__destroyJavaVM0X__LoI(
    (java_lang_Object)jnull, 0));
  }
 }
}

JCGO_NOSEP_FRWINL void CFASTCALL
java_lang_VMThread__setSystemOut__L18p1o( java_io_PrintStream out
 )
{
 JCGO_CLINIT_TRIG(java_lang_VMThread__class);
 {
  JCGO_VLT_LSTORE(void, &java_lang_VMThread__sysOut, out);
 }
}

JCGO_NOSEP_STATIC void CFASTCALL
java_lang_VMThread__flushSystemOut__( void )
{
 {
  java_io_PrintStream out;
  out= JCGO_VLT_LFETCH(java_io_PrintStream, java_lang_VMThread__sysOut);
  if (out != jnull)
  {
   {
    JCGO_TRY_BLOCK
    {
     (java_io_PrintStream__flush__(
      out));
    }
    JCGO_TRY_LEAVE
    JCGO_TRY_CATCHES(1)
    JCGO_TRY_CATCH(OBJT_java_lang_Error, MAXT_java_lang_Error)
    {
    }
    JCGO_TRY_CATCH(OBJT_java_lang_RuntimeException, MAXT_java_lang_RuntimeException)
    {
    }
    JCGO_TRY_RETHROW(1)
   }
  }
 }
}

JCGO_NOSEP_STATIC void CFASTCALL
java_lang_VMThread__printUncaughtException__L20uxkLt( java_lang_Thread
 thread, java_lang_Throwable throwable )
{
 {
  if (!jcgo_instanceOf0(OBJT_jboolean, MAXT_jboolean, (jObject)throwable))
  {
   java_lang_VMThread_UncaughtHandler handler;
   if (thread != jnull)
   {
    (java_lang_VMThread__flushSystemOut__());
   }
   ;
   if ((handler= JCGO_VLT_LFETCH(java_lang_VMThread_UncaughtHandler,
    java_lang_VMThread__uncaughtHandler)) == jnull || !(java_lang_VMThread_UncaughtHandler__printException__L20uxkLt(
    handler, thread, throwable)))
   {
    if (jcgo_instanceOf0(OBJT_java_lang_RuntimeException, MAXT_java_lang_RuntimeException,
     (jObject)throwable))
    {
     JCGO_THROW_EXC((java_lang_RuntimeException)throwable);
    }
    JCGO_THROW_EXC((java_lang_Error)JCGO_CAST_OBJECT0(OBJT_java_lang_Error,
     MAXT_java_lang_Error, (jcgo_instanceOf0(OBJT_java_lang_Error,
     MAXT_java_lang_Error, (jObject)throwable)? throwable : (java_lang_Throwable__initCause__Lt(
     (java_lang_Throwable)(java_lang_InternalError__new__Ls(
     JCGO_STRREF_OF(jcgo_string5_VMThread))), throwable)))));
   }
  }
 }
}

JCGO_NOSEP_STATIC void CFASTCALL
java_lang_VMThread__rootGroupAdd__L20uxk( java_lang_Thread thread
 )
{
 JCGO_CLINIT_TRIG(java_lang_VMThread__class);
 {
  if (JCGO_VLT_LFETCH(java_lang_ThreadGroup, JCGO_FIELD_ACCESS(java_lang_Thread,
   thread, group)) == jnull)
  {
   jObject jcgo_rcvrL1;
   (jcgo_rcvrL1= (jObject)(JCGO_VLT_LSTORE(java_lang_ThreadGroup, &JCGO_FIELD_NZACCESS(thread,
    group), JCGO_CLINIT_VARACC(java_lang_ThreadGroup__class, java_lang_ThreadGroup__root))),
    JCGO_CALL_FINALF((java_lang_ThreadGroup)jcgo_rcvrL1) java_lang_ThreadGroup__addThread__L20uxk(
    (java_lang_ThreadGroup)jcgo_rcvrL1, thread));
  }
 }
}

JCGO_NOSEP_STATIC void CFASTCALL
java_lang_VMThread__throwIllegalMonitorStateException0X__( void )
{
 JCGO_CLINIT_TRIG(java_lang_VMThread__class);
 {
  JCGO_THROW_EXC(java_lang_IllegalMonitorStateException__new__());
 }
}

JCGO_NOSEP_STATIC jint CFASTCALL
java_lang_VMThread__jniExceptionDescribe0X__Lo( java_lang_Object throwableObj
 )
{
 JCGO_CLINIT_TRIG(java_lang_VMThread__class);
 {
  java_lang_VMThread_UncaughtHandler handler;
  if (jcgo_instanceOf0(OBJT_jboolean, MAXT_jboolean, (jObject)throwableObj))
  {
   return (jint)1;
  }
  ;
  return (handler= JCGO_VLT_LFETCH(java_lang_VMThread_UncaughtHandler,
   java_lang_VMThread__uncaughtHandler)) != jnull && (java_lang_VMThread_UncaughtHandler__printJniException__Lt(
   handler, (java_lang_Throwable)JCGO_CAST_OBJECT0(OBJT_java_lang_Throwable,
   MAXT_java_lang_Throwable, throwableObj)))? (jint)1 : 0;
 }
}

JCGO_NOSEP_STATIC jint CFASTCALL
java_lang_VMThread__run0X__Lo( java_lang_Object vmdata )
{
 JCGO_CLINIT_TRIG(java_lang_VMThread__class);
 {
  {
   JCGO_TRY_BLOCK
   {
    java_lang_Thread thread;
    if (vmdata != jnull && (thread= (java_lang_VMThread__currentThread__())) !=
     jnull)
    {
     java_lang_VMThread vt;
     {
      JCGO_SYNC_BLOCKSAFENZ(java_lang_VMThread__threadStartLock)
      {
       while ((vt= JCGO_VLT_LFETCH(java_lang_VMThread, JCGO_FIELD_NZACCESS(thread,
        vmThread))) == jnull)
       {
        {
         JCGO_TRY_BLOCK
         {
          (java_lang_VMThread__wait__LoJI(
           (java_lang_Object)java_lang_VMThread__threadStartLock, JLONG_C(0),
           0));
         }
         JCGO_TRY_LEAVE
         JCGO_TRY_CATCHES(1)
         JCGO_TRY_CATCH(OBJT_java_lang_InterruptedException, MAXT_java_lang_InterruptedException)
         {
         }
         JCGO_TRY_RETHROW(1)
        }
       }
      }
      JCGO_SYNC_END
     }
     if (JCGO_VLT_LFETCH(java_lang_Object, JCGO_FIELD_NZACCESS(vt,
      vmdata)) != vmdata)
     {
      JCGO_THROW_EXC((java_lang_InternalError__new__Ls(
       JCGO_STRREF_OF(jcgo_string6_VMThread))));
     }
     (java_lang_VMThread__nativeSetPriority0__LoI(
      vmdata, (java_lang_VMThread__getPriority__(
      vt))));
     (java_lang_VMThread__run__(
      vt));
    }
   }
   JCGO_TRY_LEAVE
   JCGO_TRY_CATCHES(2)
   JCGO_TRY_CATCH(OBJT_java_lang_Throwable, MAXT_java_lang_Throwable)
   {
    java_lang_Throwable throwable;
    throwable= (java_lang_Throwable)JCGO_TRY_THROWABLE(0);
    (java_lang_VMThread__printUncaughtException__L20uxkLt(
     (java_lang_Thread)jnull, throwable));
   }
   JCGO_TRY_RETHROW(2)
  }
  return 0;
 }
}

JCGO_NOSEP_STATIC java_lang_Object CFASTCALL
java_lang_VMThread__createAttachedThread0X__LoLsLoI( java_lang_Object
 groupObj, java_lang_String name, java_lang_Object vmdata, jint daemon
 )
{
 JCGO_CLINIT_TRIG(java_lang_VMThread__class);
 {
  java_lang_Thread thread;
  java_lang_VMThread vt;
  jObject jcgo_rcvrL1;
  if (java_lang_VMThread__mainVMThread == jnull || JCGO_CLINIT_VARACC(java_lang_ThreadGroup__class,
   java_lang_ThreadGroup__root) == jnull)
  {
   JCGO_THROW_EXC((java_lang_InternalError__new__Ls(
    JCGO_STRREF_OF(jcgo_string7_VMThread))));
  }
  thread= (java_lang_Thread__new__L40aspLsIZ(
   (java_lang_VMThread)jnull, name, java_lang_Thread__NORM_PRIORITY,
   (jboolean)(daemon != 0)));
  (jcgo_rcvrL1= (jObject)(JCGO_VLT_LSTORE(java_lang_ThreadGroup, &JCGO_FIELD_NZACCESS(thread,
   group), groupObj != jnull? (java_lang_ThreadGroup)jcgo_checkCast0(OBJT_java_lang_ThreadGroup,
   MAXT_java_lang_ThreadGroup, (jObject)groupObj) : JCGO_CLINIT_VARACC(java_lang_ThreadGroup__class,
   java_lang_ThreadGroup__root))), JCGO_CALL_FINALF((java_lang_ThreadGroup)jcgo_rcvrL1)
   java_lang_ThreadGroup__addThread__L20uxk(
   (java_lang_ThreadGroup)jcgo_rcvrL1, thread));
  vt= (java_lang_VMThread__new__L20uxk(
   thread));
  JCGO_VLT_LSTORE(void, &JCGO_FIELD_NZACCESS(vt, vmdata), vmdata);
  JCGO_VLT_STOREI((&JCGO_FIELD_NZACCESS(vt, threadStatus)), java_lang_VMThread__STATE_RUNNABLE);
  (java_lang_VMThread__attachInner__(
   vt));
  return (java_lang_Object)thread;
 }
}

JCGO_NOSEP_STATIC jint CFASTCALL
java_lang_VMThread__detachThread0X__Lo( java_lang_Object throwableObj
 )
{
 JCGO_CLINIT_TRIG(java_lang_VMThread__class);
 {
  java_lang_VMThread JCGO_TRY_VOLATILE vt;
  vt= (java_lang_VMThread)jnull;
  {
   JCGO_TRY_BLOCK
   {
    java_lang_Thread thread;
    thread= (java_lang_VMThread__currentThread__());
    if (thread != jnull)
    {
     vt= JCGO_VLT_LFETCH(java_lang_VMThread, JCGO_FIELD_NZACCESS(thread,
      vmThread));
     if (throwableObj != jnull && !(JCGO_METHODS_OF(throwableObj)->jcgo_typeid==
      OBJT_jboolean) && vt != jnull && JCGO_VLT_FETCHI(JCGO_FIELD_NZACCESS(vt,
      threadStatus)) != java_lang_VMThread__STATE_TERMINATED)
     {
      (java_lang_VMThread__printUncaughtException__L20uxkLt(
       thread, (java_lang_Throwable)JCGO_CAST_OBJECT0(OBJT_java_lang_Throwable,
       MAXT_java_lang_Throwable, throwableObj)));
     }
    }
   }
   JCGO_TRY_LEAVE
   {
    if (vt != jnull)
    {
     (java_lang_VMThread__detachInner__(
      vt));
    }
   }
   JCGO_TRY_FINALLYEND
  }
  return 0;
 }
}

JCGO_NOSEP_STATIC jint CFASTCALL
java_lang_VMThread__destroyJavaVM0X__LoI( java_lang_Object throwableObj,
 jint isInInitializer )
{
 JCGO_CLINIT_TRIG(java_lang_VMThread__class);
 JCGO_TRY_NOCLOBBER(throwableObj);
 {
  {
   JCGO_TRY_BLOCK
   {
    java_lang_Thread thread;
    java_lang_VMThread vt;
    java_lang_Thread cleanupThread;
    thread= (java_lang_VMThread__currentThread__());
    if (thread == jnull || (vt= JCGO_VLT_LFETCH(java_lang_VMThread,
     JCGO_FIELD_NZACCESS(thread, vmThread))) == jnull || java_lang_VMThread__nonDaemonLock ==
     jnull || java_lang_VMThread__mainVMThread == jnull || (java_lang_Runtime__getRuntime__()) ==
     jnull || JCGO_CLINIT_VARACC(java_lang_ThreadGroup__class, java_lang_ThreadGroup__root) ==
     jnull)
    {
     JCGO_THROW_EXC((java_lang_InternalError__new__Ls(
      JCGO_STRREF_OF(jcgo_string7_VMThread))));
    }
    if (throwableObj != jnull)
    {
     if ((JCGO_METHODS_OF(throwableObj)->jcgo_typeid== OBJT_jboolean))
     {
      throwableObj= (java_lang_Object)jnull;
     }
     else
     {
      java_lang_Throwable JCGO_TRY_VOLATILE throwable;
      if (!JCGO_CLINIT_VARACC(java_lang_VMThread_ExitMain__class, java_lang_VMThread_ExitMain__initialized))
      {
       JCGO_THROW_EXC((java_lang_InternalError__new__Ls(
        JCGO_STRREF_OF(jcgo_string7_VMThread))));
      }
      throwable= (java_lang_Throwable)jcgo_checkCast0(OBJT_java_lang_Throwable,
       MAXT_java_lang_Throwable, (jObject)throwableObj);
      if (isInInitializer != 0 && !jcgo_instanceOf0(OBJT_java_lang_LinkageError,
       MAXT_java_lang_LinkageError, (jObject)throwable) && !jcgo_instanceOf0(OBJT_java_lang_VirtualMachineError,
       MAXT_java_lang_VirtualMachineError, (jObject)throwable))
      {
       {
        JCGO_TRY_BLOCK
        {
         throwable= (java_lang_Throwable)(java_lang_ExceptionInInitializerError__new__Lt(
          throwable));
        }
        JCGO_TRY_LEAVE
        JCGO_TRY_CATCHES(1)
        JCGO_TRY_CATCH(OBJT_java_lang_Error, MAXT_java_lang_Error)
        {
         java_lang_Error e;
         e= (java_lang_Error)JCGO_TRY_THROWABLE(0);
         throwable= (java_lang_Throwable)e;
        }
        JCGO_TRY_RETHROW(1)
       }
      }
      (java_lang_VMThread__printUncaughtException__L20uxkLt(
       thread, throwable));
     }
    }
    cleanupThread= (java_lang_Thread)jnull;
    if (java_lang_VMThread__hasThreads && !jcgo_instanceOf0(OBJT_java_lang_Error,
     MAXT_java_lang_Error, (jObject)throwableObj))
    {
     cleanupThread= (java_lang_Thread)(java_lang_VMThread_1__new__L40aspLsIZ(
      (java_lang_VMThread)jnull, JCGO_STRREF_OF(jcgo_string8_VMThread),
      java_lang_Thread__NORM_PRIORITY, (jboolean)jtrue));
     (java_lang_VMThread__rootGroupAdd__L20uxk(
      cleanupThread));
     {
      JCGO_TRY_BLOCK
      {
       (java_lang_Thread__start__(
        cleanupThread));
      }
      JCGO_TRY_LEAVE
      JCGO_TRY_CATCHES(2)
      JCGO_TRY_CATCH(OBJT_java_lang_OutOfMemoryError, MAXT_java_lang_OutOfMemoryError)
      {
       cleanupThread= (java_lang_Thread)jnull;
      }
      JCGO_TRY_RETHROW(2)
     }
    }
    if (cleanupThread == jnull)
    {
     (java_lang_VMThread__flushSystemOut__());
     (java_lang_Runtime__runShutdownHooks__(
      (java_lang_Runtime__getRuntime__())));
     (java_lang_VMThread__flushSystemOut__());
    }
    JCGO_VLT_STOREI((&JCGO_FIELD_NZACCESS(vt, threadStatus)), java_lang_VMThread__STATE_TERMINATED);
    (java_lang_Thread__die__(
     thread));
    if (cleanupThread != jnull)
    {
     {
      JCGO_SYNC_BLOCKSAFENZ(vt)
      {
       (java_lang_VMThread__notify__LoZ(
        (java_lang_Object)vt, (jboolean)jtrue));
      }
      JCGO_SYNC_END
     }
     {
      JCGO_TRY_BLOCK
      {
       (java_lang_Thread__join__(
        cleanupThread));
      }
      JCGO_TRY_LEAVE
      JCGO_TRY_CATCHES(3)
      JCGO_TRY_CATCH(OBJT_java_lang_InterruptedException, MAXT_java_lang_InterruptedException)
      {
      }
      JCGO_TRY_RETHROW(3)
     }
    }
    if (throwableObj != jnull)
    {
     (java_lang_VMThrowable__exit__I(
      (jint)254));
    }
   }
   JCGO_TRY_LEAVE
   JCGO_TRY_CATCHES(4)
   JCGO_TRY_CATCH(OBJT_java_lang_OutOfMemoryError, MAXT_java_lang_OutOfMemoryError)
   {
    java_lang_OutOfMemoryError e;
    e= (java_lang_OutOfMemoryError)JCGO_TRY_THROWABLE(0);
    JCGO_THROW_EXC(e);
   }
   JCGO_TRY_CATCH(OBJT_java_lang_Error, MAXT_java_lang_Error)
   {
    java_lang_Error e;
    e= (java_lang_Error)JCGO_TRY_THROWABLE(0);
    if (jcgo_instanceOf0(OBJT_java_lang_OutOfMemoryError, MAXT_java_lang_OutOfMemoryError,
     (jObject)throwableObj))
    {
     JCGO_THROW_EXC((java_lang_OutOfMemoryError)throwableObj);
    }
    JCGO_THROW_EXC(e);
   }
   JCGO_TRY_CATCH(OBJT_java_lang_RuntimeException, MAXT_java_lang_RuntimeException)
   {
    java_lang_RuntimeException e;
    e= (java_lang_RuntimeException)JCGO_TRY_THROWABLE(0);
    if (jcgo_instanceOf0(OBJT_java_lang_OutOfMemoryError, MAXT_java_lang_OutOfMemoryError,
     (jObject)throwableObj))
    {
     JCGO_THROW_EXC((java_lang_OutOfMemoryError)throwableObj);
    }
    JCGO_THROW_EXC((java_lang_Error)JCGO_CAST_OBJECT0(OBJT_java_lang_Error,
     MAXT_java_lang_Error, (java_lang_Throwable__initCause__Lt(
     (java_lang_Throwable)(java_lang_InternalError__new__Ls(
     JCGO_STRREF_OF(jcgo_string5_VMThread))), (java_lang_Throwable)e))));
   }
   JCGO_TRY_RETHROW(4)
  }
  return 0;
 }
}

JCGO_NOSEP_STATIC void CFASTCALL
java_lang_VMThread__attachInner__( java_lang_VMThread This )
{
 {
  JCGO_VLT_LSTORE(void, &JCGO_FIELD_ACCESS(java_lang_Thread, JCGO_FIELD_NZACCESS(This,
   thread), vmThread), This);
  {
   JCGO_SYNC_BLOCKSAFENZ(java_lang_VMThread__nonDaemonLock)
   {
    jint count;
    jint jcgo_rcvrI1;
    java_lang_VMThread__hasThreads= (jboolean)jtrue;
    if ((jcgo_rcvrI1= (count= ++java_lang_VMThread__liveThreadCnt),
     jcgo_rcvrI1 > java_lang_VMThread__maxLiveThreadCnt))
    {
     java_lang_VMThread__maxLiveThreadCnt= count;
    }
    if (!JCGO_VLT_FETCHZ(JCGO_FIELD_NZACCESS(JCGO_FIELD_NZACCESS(This,
     thread), daemon)) && ++java_lang_VMThread__nonDaemonCnt == 0)
    {
     (java_lang_VMThread__notify__LoZ(
      java_lang_VMThread__nonDaemonLock, (jboolean)jfalse));
    }
   }
   JCGO_SYNC_END
  }
 }
}

JCGO_NOSEP_STATIC void CFASTCALL
java_lang_VMThread__detachInner__( java_lang_VMThread This )
{
 {
  JCGO_VLT_LSTORE(void, &JCGO_FIELD_NZACCESS(This, vmdata), jnull);
  if (JCGO_VLT_FETCHI(JCGO_FIELD_NZACCESS(This, threadStatus)) != java_lang_VMThread__STATE_TERMINATED)
  {
   jboolean died;
   JCGO_VLT_STOREI((&JCGO_FIELD_NZACCESS(This, threadStatus)), java_lang_VMThread__STATE_TERMINATED);
   died= jfalse;
   {
    JCGO_SYNC_BLOCKSAFENZ(java_lang_VMThread__nonDaemonLock)
    {
     java_lang_VMThread__liveThreadCnt--;
     if (!JCGO_VLT_FETCHZ(JCGO_FIELD_ACCESS(java_lang_Thread, JCGO_FIELD_NZACCESS(This,
      thread), daemon)) && --java_lang_VMThread__nonDaemonCnt == 0)
     {
      (java_lang_Thread__die__(
       JCGO_FIELD_NZACCESS(This, thread)));
      (java_lang_VMThread__notify__LoZ(
       java_lang_VMThread__nonDaemonLock, (jboolean)jfalse));
      died= (jboolean)jtrue;
     }
    }
    JCGO_SYNC_END
   }
   if (!died)
   {
    (java_lang_Thread__die__(
     JCGO_FIELD_NZACCESS(This, thread)));
   }
   {
    JCGO_SYNC_BLOCKSAFENZ(This)
    {
     (java_lang_VMThread__notify__LoZ(
      (java_lang_Object)This, (jboolean)jtrue));
    }
    JCGO_SYNC_END
   }
  }
 }
}

JCGO_NOSEP_STATIC void CFASTCALL
java_lang_VMThread__class__0( void )
{
 JCGO_CLINIT_BEGIN(java_lang_VMThread__class);
 java_lang_VMThread__nonDaemonLock= java_lang_Object__new__();
 {
  (java_lang_VMThread__setupMainThread__());
  if (java_lang_VMThread__mainVMThread == jnull)
  {
   (java_lang_VMThread__throwIllegalMonitorStateException0X__());
  }
 }
 JCGO_CLINIT_DONE(java_lang_VMThread__class);
}

JCGO_NOSEP_DATA CONST struct java_lang_VMThread_methods_s java_lang_VMThread_methods=
{
 JCGO_CLASSREF_OF(java_lang_VMThread__class),
 JCGO_GCJDESCR_INIT(java_lang_VMThread_s, vmdata)
 OBJT_java_lang_VMThread,
 (JCGO_OBJSIZE_T)sizeof(struct java_lang_VMThread_s),
 NULL,
 JCGO_CLINIT_INIT(java_lang_VMThread__class__0)
 0,
 java_lang_Object__equals__Lo,
 java_lang_Object__hashCode__,
 java_lang_Object__toString__,
 java_lang_Object__finalize__
};

JCGO_NOSEP_DATA struct java_lang_VMThread_class_s java_lang_VMThread__class
 ATTRIBNONGC=
{
 {
  &java_lang_Class_methods,
  JCGO_MON_INIT
  JCGO_OBJREF_OF(*(java_lang_Object)&java_lang_VMThread_methods),
  JCGO_STRREF_OF(jcgo_string1_VMThread),
  JCGO_CLASSREF_OF(java_lang_Object__class),
  ((jObjectArr)JCGO_OBJREF_OF(jcgo_array3_Object)),
  0x1d0
 }
};

JCGO_NOSEP_GCDATA java_lang_Object java_lang_VMThread__nonDaemonLock
 ATTRIBGCBSS= jnull;

JCGO_NOSEP_GCDATA java_lang_VMThread java_lang_VMThread__mainVMThread
 ATTRIBGCBSS= jnull;

JCGO_NOSEP_GCDATA java_io_PrintStream JCGO_THRD_VOLATILE java_lang_VMThread__sysOut
 ATTRIBGCBSS= jnull;

JCGO_NOSEP_GCDATA java_lang_VMThread_UncaughtHandler JCGO_THRD_VOLATILE
 java_lang_VMThread__uncaughtHandler ATTRIBGCBSS= jnull;

JCGO_NOSEP_DATA jlong java_lang_VMThread__totalStartedCnt= (jlong)0;

JCGO_NOSEP_DATA jint java_lang_VMThread__nonDaemonCnt= (jint)0;

JCGO_NOSEP_DATA jint java_lang_VMThread__liveThreadCnt= (jint)0;

JCGO_NOSEP_DATA jint java_lang_VMThread__maxLiveThreadCnt= (jint)0;

JCGO_NOSEP_DATA jboolean java_lang_VMThread__hasThreads= (jboolean)0;

JCGO_NOSEP_DATA JCGO_NOTHR_CONST jcgo_arrtype2_GameMdl jcgo_array2_VMThread
 JCGO_THRD_ATTRNONGC=
{
 (jvtable)&jObjectArr_methods,
 JCGO_MON_INIT
 0,
 JCGO_CLASSREF_OF(java_lang_Object__class),
 {
  jnull
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype23_Object jcgo_array9_VMThread=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 20,
 {
  (jbyte)(jchar)106/*'j'*/, (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)118/*'v'*/,
   (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)46/*'.'*/, (jbyte)(jchar)108/*'l'*/,
   (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)110/*'n'*/, (jbyte)(jchar)103/*'g'*/,
   (jbyte)(jchar)46/*'.'*/, (jbyte)(jchar)86/*'V'*/, (jbyte)(jchar)77/*'M'*/,
   (jbyte)(jchar)84/*'T'*/, (jbyte)(jchar)104/*'h'*/, (jbyte)(jchar)114/*'r'*/,
   (jbyte)(jchar)101/*'e'*/, (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)100/*'d'*/,
   (jbyte)(jchar)36/*'$'*/, (jbyte)(jchar)49/*'1'*/
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype80_GmCnnctn jcgo_array10_VMThread=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 21,
 {
  (jbyte)(jchar)99/*'c'*/, (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)110/*'n'*/,
   (jbyte)(jchar)110/*'n'*/, (jbyte)(jchar)111/*'o'*/, (jbyte)(jchar)116/*'t'*/,
   (jbyte)(jchar)32/*' '*/, (jbyte)(jchar)115/*'s'*/, (jbyte)(jchar)116/*'t'*/,
   (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)114/*'r'*/, (jbyte)(jchar)116/*'t'*/,
   (jbyte)(jchar)32/*' '*/, (jbyte)(jchar)116/*'t'*/, (jbyte)(jchar)104/*'h'*/,
   (jbyte)(jchar)114/*'r'*/, (jbyte)(jchar)101/*'e'*/, (jbyte)(jchar)97/*'a'*/,
   (jbyte)(jchar)100/*'d'*/, (jbyte)(jchar)58/*':'*/, (jbyte)(jchar)32/*' '*/
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype4_IntAddrs jcgo_array11_VMThread=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 4,
 {
  (jbyte)(jchar)109/*'m'*/, (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)105/*'i'*/,
   (jbyte)(jchar)110/*'n'*/
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype77_GmCnnctn jcgo_array12_VMThread=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 30,
 {
  (jbyte)(jchar)86/*'V'*/, (jbyte)(jchar)77/*'M'*/, (jbyte)(jchar)84/*'T'*/,
   (jbyte)(jchar)104/*'h'*/, (jbyte)(jchar)114/*'r'*/, (jbyte)(jchar)101/*'e'*/,
   (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)100/*'d'*/, (jbyte)(jchar)32/*' '*/,
   (jbyte)(jchar)99/*'c'*/, (jbyte)(jchar)108/*'l'*/, (jbyte)(jchar)97/*'a'*/,
   (jbyte)(jchar)115/*'s'*/, (jbyte)(jchar)115/*'s'*/, (jbyte)(jchar)32/*' '*/,
   (jbyte)(jchar)110/*'n'*/, (jbyte)(jchar)111/*'o'*/, (jbyte)(jchar)116/*'t'*/,
   (jbyte)(jchar)32/*' '*/, (jbyte)(jchar)105/*'i'*/, (jbyte)(jchar)110/*'n'*/,
   (jbyte)(jchar)105/*'i'*/, (jbyte)(jchar)116/*'t'*/, (jbyte)(jchar)105/*'i'*/,
   (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)108/*'l'*/, (jbyte)(jchar)105/*'i'*/,
   (jbyte)(jchar)122/*'z'*/, (jbyte)(jchar)101/*'e'*/, (jbyte)(jchar)100/*'d'*/
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype44_GameShll jcgo_array13_VMThread=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 22,
 {
  (jbyte)(jchar)86/*'V'*/, (jbyte)(jchar)77/*'M'*/, (jbyte)(jchar)84/*'T'*/,
   (jbyte)(jchar)104/*'h'*/, (jbyte)(jchar)114/*'r'*/, (jbyte)(jchar)101/*'e'*/,
   (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)100/*'d'*/, (jbyte)(jchar)46/*'.'*/,
   (jbyte)(jchar)115/*'s'*/, (jbyte)(jchar)116/*'t'*/, (jbyte)(jchar)97/*'a'*/,
   (jbyte)(jchar)114/*'r'*/, (jbyte)(jchar)116/*'t'*/, (jbyte)(jchar)40/*'('*/,
   (jbyte)(jchar)41/*')'*/, (jbyte)(jchar)32/*' '*/, (jbyte)(jchar)102/*'f'*/,
   (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)117/*'u'*/, (jbyte)(jchar)108/*'l'*/,
   (jbyte)(jchar)116/*'t'*/
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype32_GameShll jcgo_array14_VMThread=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 10,
 {
  (jbyte)(jchar)86/*'V'*/, (jbyte)(jchar)77/*'M'*/, (jbyte)(jchar)32/*' '*/,
   (jbyte)(jchar)99/*'c'*/, (jbyte)(jchar)108/*'l'*/, (jbyte)(jchar)101/*'e'*/,
   (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)110/*'n'*/, (jbyte)(jchar)117/*'u'*/,
   (jbyte)(jchar)112/*'p'*/
 }
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string1_VMThread
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array9_VMThread),
 0, 18, (jint)0x65dd0cd5L
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string3_VMThread
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array10_VMThread),
 0, 21, (jint)0x385e0d6bL
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string4_VMThread
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array11_VMThread),
 0, 4, (jint)0x3305b9L
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string5_VMThread
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array12_VMThread),
 0, 8, (jint)0x642adfa1L
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string6_VMThread
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array13_VMThread),
 0, 22, (jint)0x13ebd18L
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string7_VMThread
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array12_VMThread),
 0, 30, (jint)0x56b52320L
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string8_VMThread
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array14_VMThread),
 0, 10, (jint)0xd878563bL
};

#ifdef CHKALL_java_lang_VMThread
#include "jcgochke.h"
#endif

#endif
