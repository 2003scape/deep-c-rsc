/* DO NOT EDIT THIS FILE - it is machine generated (JCGO_116) */

#ifdef JCGO_SEPARATED
#define JCGO_116
#include "jcgortl.h"
#include "Main.h"
#endif

#ifdef JCGO_116

#ifdef CHKALL_java_lang_Thread
#include "jcgobchk.h"
#endif

JCGO_NOSEP_INLINE java_lang_Thread CFASTCALL
java_lang_Thread__this__L5l4zvL1k0ty( java_lang_Thread This, java_lang_ThreadGroup
 group, java_lang_Runnable target )
{
 {
  (java_lang_Thread__this__L5l4zvL1k0tyLsJ((java_lang_Thread)This,
   group, target, (java_lang_Thread__createAnonymousThreadName__()),
   (jlong)0));
 }
 return This;
}

JCGO_NOSEP_STATIC java_lang_Thread CFASTCALL
java_lang_Thread__this__L5l4zvL1k0tyLsJ( java_lang_Thread This, java_lang_ThreadGroup
 group, java_lang_Runnable target, java_lang_String name, jlong size
 )
{
 {
  java_lang_SecurityManager sm;
  java_lang_Thread current;
  if (name == jnull)
  {
   JCGO_THROW_EXC(java_lang_NullPointerException__new__());
  }
  sm= java_lang_SecurityManager__current;
  current= (java_lang_Thread__currentThread__());
  if (group == jnull)
  {
   if (sm != jnull)
   {
    group= (java_lang_SecurityManager__getThreadGroup__(
     sm));
   }
   if (group == jnull)
   {
    group= JCGO_VLT_LFETCH(java_lang_ThreadGroup, JCGO_FIELD_NZACCESS(current,
     group));
   }
  }
  if (sm != jnull)
  {
   (java_lang_SecurityManager__checkAccess__L5l4zv(
    sm, group));
  }
  JCGO_VLT_LSTORE(void, &JCGO_FIELD_NZACCESS(This, group), group);
  JCGO_VLT_LSTORE(void, &JCGO_FIELD_NZACCESS(This, name), name);
  JCGO_FIELD_NZACCESS(This, runnable)= target;
  JCGO_FIELD_NZACCESS(This, stacksize)= size;
  {
   JCGO_SYNC_BLOCKSAFENZ(JCGO_CLASSREF_OF(java_lang_Thread__class))
   {
    (void)(++java_lang_Thread__totalThreadsCreated);
   }
   JCGO_SYNC_END
  }
  JCGO_VLT_STOREI((&JCGO_FIELD_NZACCESS(This, priority)), JCGO_VLT_FETCHI(JCGO_FIELD_NZACCESS(current,
   priority)));
  JCGO_VLT_STOREZ((&JCGO_FIELD_NZACCESS(This, daemon)), (jboolean)JCGO_VLT_FETCHZ(JCGO_FIELD_NZACCESS(current,
   daemon)));
  JCGO_FIELD_NZACCESS(This, contextClassLoader)= JCGO_FIELD_NZACCESS(current,
   contextClassLoader);
  JCGO_FIELD_NZACCESS(This, contextClassLoaderIsSystemClassLoader)=
   (jboolean)JCGO_FIELD_NZACCESS(current, contextClassLoaderIsSystemClassLoader);
  (JCGO_CALL_FINALF(group) java_lang_ThreadGroup__addThread__L20uxk(
   group, This));
  if (JCGO_FIELD_NZACCESS(current, locals) != jnull)
  {
   JCGO_FIELD_NZACCESS(This, locals)= (java_util_AbstractMap)(JCGO_CALL_FINALF(((java_util_AbstractMap)JCGO_CAST_OBJECT0(OBJT_jboolean,
    MAXT_jboolean, JCGO_FIELD_NZACCESS(current, locals)))) (java_util_AbstractMap)jnull);
  }
 }
 return This;
}

JCGO_NOSEP_FRWINL java_lang_Thread CFASTCALL
java_lang_Thread__currentThread__( void )
{
 {
  return (java_lang_VMThread__currentThread__());
 }
}

JCGO_NOSEP_INLINE java_lang_Thread CFASTCALL
java_lang_Thread__this__( java_lang_Thread This )
{
 {
  (java_lang_Thread__this__L5l4zvL1k0ty((java_lang_Thread)This, (java_lang_ThreadGroup)jnull,
   (java_lang_Runnable)jnull));
 }
 return This;
}

JCGO_NOSEP_INLINE java_lang_Thread CFASTCALL
java_lang_Thread__this__L1k0ty( java_lang_Thread This, java_lang_Runnable
 target )
{
 {
  (java_lang_Thread__this__L5l4zvL1k0ty((java_lang_Thread)This, (java_lang_ThreadGroup)jnull,
   target));
 }
 return This;
}

JCGO_NOSEP_FRWINL java_lang_Thread CFASTCALL
java_lang_Thread__new__L1k0ty( java_lang_Runnable target )
{
 return java_lang_Thread__this__L1k0ty(
  (java_lang_Thread)jcgo_newObject((jvtable)&java_lang_Thread_methods),
  target);
}

JCGO_NOSEP_STATIC java_lang_Thread CFASTCALL
java_lang_Thread__this__L40aspLsIZ( java_lang_Thread This, java_lang_VMThread
 vmThread, java_lang_String name, jint priority, jboolean daemon )
{
 {
  ;
  JCGO_VLT_LSTORE(void, &JCGO_FIELD_NZACCESS(This, vmThread), vmThread);
  (void)jnull;
  if (name == jnull)
  {
   name= (java_lang_Thread__createAnonymousThreadName__());
  }
  JCGO_VLT_LSTORE(void, &JCGO_FIELD_NZACCESS(This, name), name);
  JCGO_VLT_STOREI((&JCGO_FIELD_NZACCESS(This, priority)), priority);
  JCGO_VLT_STOREZ((&JCGO_FIELD_NZACCESS(This, daemon)), (jboolean)daemon);
  JCGO_FIELD_NZACCESS(This, contextClassLoaderIsSystemClassLoader)=
   (jboolean)jtrue;
  {
   JCGO_SYNC_BLOCKSAFENZ(JCGO_CLASSREF_OF(java_lang_Thread__class))
   {
    (void)(++java_lang_Thread__totalThreadsCreated);
   }
   JCGO_SYNC_END
  }
 }
 return This;
}

JCGO_NOSEP_FRWINL java_lang_Thread CFASTCALL
java_lang_Thread__new__L40aspLsIZ( java_lang_VMThread vmThread, java_lang_String
 name, jint priority, jboolean daemon )
{
 return java_lang_Thread__this__L40aspLsIZ(
  (java_lang_Thread)jcgo_newObject((jvtable)&java_lang_Thread_methods),
  vmThread, name, priority, daemon);
}

JCGO_NOSEP_STATIC java_lang_String CFASTCALL
java_lang_Thread__createAnonymousThreadName__( void )
{
 JCGO_SYNC_BLOCKSAFENZ(JCGO_CLASSREF_OF(java_lang_Thread__class))
 {
  {
   java_lang_String jcgo_retval= java_lang_VMSystem__concat0X__LsLs(
    JCGO_STRREF_OF(jcgo_string2_ThreadF9), (java_lang_String__valueOf__I(
    (++java_lang_Thread__numAnonymousThreadsCreated))));
#ifndef JCGO_SEHTRY
   JCGO_SYNC_JUMPLEAVE(0);
#endif
   return jcgo_retval;
  }
 }
 JCGO_SYNC_ENDUNREACH
}

JCGO_NOSEP_STATIC void CFASTCALL
java_lang_Thread__checkAccess__( java_lang_Thread This )
{
 {
  java_lang_SecurityManager sm;
  sm= java_lang_SecurityManager__current;
  if (sm != jnull)
  {
   (java_lang_SecurityManager__checkAccess__L20uxk(
    sm, This));
  }
 }
}

JCGO_NOSEP_INLINE java_lang_String CFASTCALL
java_lang_Thread__getName__( java_lang_Thread This )
{
 {
  java_lang_VMThread t;
  t= JCGO_VLT_LFETCH(java_lang_VMThread, JCGO_FIELD_NZACCESS(This,
   vmThread));
  return t == jnull? JCGO_VLT_LFETCH(java_lang_String, JCGO_FIELD_NZACCESS(This,
   name)) : (java_lang_VMThread__getName__(
   t));
 }
}

JCGO_NOSEP_INLINE jint CFASTCALL
java_lang_Thread__getPriority__( java_lang_Thread This )
{
 JCGO_SYNC_BLOCKSAFENZ(This)
 {
  java_lang_VMThread t;
  t= JCGO_VLT_LFETCH(java_lang_VMThread, JCGO_FIELD_NZACCESS(This,
   vmThread));
  {
   jint jcgo_retval= t == jnull? JCGO_VLT_FETCHI(JCGO_FIELD_NZACCESS(This,
    priority)) : (java_lang_VMThread__getPriority__(
    t));
#ifndef JCGO_SEHTRY
   JCGO_SYNC_JUMPLEAVE(0);
#endif
   return jcgo_retval;
  }
 }
 JCGO_SYNC_ENDUNREACH
}

JCGO_NOSEP_FRWINL java_lang_ThreadGroup CFASTCALL
java_lang_Thread__getThreadGroup__( java_lang_Thread This )
{
 {
  return JCGO_VLT_LFETCH(java_lang_ThreadGroup, JCGO_FIELD_NZACCESS(This,
   group));
 }
}

JCGO_NOSEP_STATIC void CFASTCALL
java_lang_Thread__interrupt__( java_lang_Thread This )
{
 JCGO_SYNC_BLOCKSAFENZ(This)
 {
  java_lang_VMThread t;
  (java_lang_Thread__checkAccess__(
   This));
  t= JCGO_VLT_LFETCH(java_lang_VMThread, JCGO_FIELD_NZACCESS(This,
   vmThread));
  if (t != jnull)
  {
   (java_lang_VMThread__interrupt__(
    t));
  }
 }
 JCGO_SYNC_END
}

JCGO_NOSEP_FRWINL jboolean CFASTCALL
java_lang_Thread__interrupted__( void )
{
 {
  return (jboolean)(java_lang_VMThread__interrupted__());
 }
}

JCGO_NOSEP_STATIC void CFASTCALL
java_lang_Thread__join__( java_lang_Thread This )
{
 {
  java_lang_VMThread t;
  t= JCGO_VLT_LFETCH(java_lang_VMThread, JCGO_FIELD_NZACCESS(This,
   vmThread));
  if (t != jnull)
  {
   (java_lang_VMThread__join__JI(
    t, (jlong)0, 0));
  }
 }
}

JCGO_NOSEP_INLINE void CFASTCALL
java_lang_Thread__run__( java_lang_Thread This )
{
 {
  if (JCGO_FIELD_NZACCESS(This, runnable) != jnull)
  {
   (JCGO_CALL_NZVFUNC(JCGO_FIELD_NZACCESS(This, runnable))->run__(
    JCGO_FIELD_NZACCESS(This, runnable)));
  }
 }
}

JCGO_NOSEP_STATIC void CFASTCALL
java_lang_Thread__setDaemon__Z( java_lang_Thread This, jboolean daemon
 )
{
 JCGO_SYNC_BLOCKSAFENZ(This)
 {
  if (JCGO_VLT_LFETCH(java_lang_VMThread, JCGO_FIELD_NZACCESS(This,
   vmThread)) != jnull)
  {
   JCGO_THROW_EXC(java_lang_IllegalThreadStateException__new__());
  }
  (java_lang_Thread__checkAccess__(
   This));
  JCGO_VLT_STOREZ((&JCGO_FIELD_NZACCESS(This, daemon)), (jboolean)daemon);
 }
 JCGO_SYNC_END
}

JCGO_NOSEP_FRWINL void CFASTCALL
java_lang_Thread__yield__( void )
{
 {
  (java_lang_VMThread__yield__());
 }
}

JCGO_NOSEP_FRWINL void CFASTCALL
java_lang_Thread__sleep__J( jlong ms )
{
 {
  (java_lang_Thread__sleep__JI(
   ms, 0));
 }
}

JCGO_NOSEP_STATIC void CFASTCALL
java_lang_Thread__sleep__JI( jlong ms, jint ns )
{
 {
  if (ms < 0)
  {
   JCGO_THROW_EXC((java_lang_IllegalArgumentException__new__Ls(
    java_lang_VMSystem__concat0X__LsLs(
    JCGO_STRREF_OF(jcgo_string3_ThreadF9), (java_lang_String__valueOf__J(
    ms))))));
  }
  if (ns < 0 || ns > (jint)999999L)
  {
   JCGO_THROW_EXC((java_lang_IllegalArgumentException__new__Ls(
    java_lang_VMSystem__concat0X__LsLs(
    JCGO_STRREF_OF(jcgo_string4_ThreadF9), (java_lang_String__valueOf__I(
    ns))))));
  }
  (java_lang_VMThread__sleep__JI(
   ms, ns));
 }
}

JCGO_NOSEP_STATIC void CFASTCALL
java_lang_Thread__start__( java_lang_Thread This )
{
 JCGO_SYNC_BLOCKSAFENZ(This)
 {
  if (JCGO_VLT_LFETCH(java_lang_VMThread, JCGO_FIELD_NZACCESS(This,
   vmThread)) != jnull || JCGO_VLT_LFETCH(java_lang_ThreadGroup, JCGO_FIELD_NZACCESS(This,
   group)) == jnull)
  {
   JCGO_THROW_EXC(java_lang_IllegalThreadStateException__new__());
  }
  (java_lang_VMThread__create__L20uxkJ(
   This, JCGO_FIELD_NZACCESS(This, stacksize)));
 }
 JCGO_SYNC_END
}

JCGO_NOSEP_FRWINL void CFASTCALL
java_lang_Thread__setPriority__I( java_lang_Thread This, jint priority
 )
{
 JCGO_SYNC_BLOCKSAFENZ(This)
 {
  java_lang_VMThread t;
  jint maxprio;
  jObject jcgo_rcvrL1;
  (java_lang_Thread__checkAccess__(
   This));
  if (priority < java_lang_Thread__MIN_PRIORITY || priority > java_lang_Thread__MAX_PRIORITY)
  {
   JCGO_THROW_EXC((java_lang_IllegalArgumentException__new__Ls(
    java_lang_VMSystem__concat0X__LsLs(
    JCGO_STRREF_OF(jcgo_string5_ThreadF9), (java_lang_String__valueOf__I(
    priority))))));
  }
  maxprio= (jcgo_rcvrL1= (jObject)JCGO_VLT_LFETCH(java_lang_ThreadGroup,
   JCGO_FIELD_NZACCESS(This, group)), JCGO_CALL_FINALF((java_lang_ThreadGroup)jcgo_rcvrL1)
   java_lang_ThreadGroup__getMaxPriority__(
   (java_lang_ThreadGroup)jcgo_rcvrL1));
  if (priority >= maxprio)
  {
   priority= maxprio;
  }
  t= JCGO_VLT_LFETCH(java_lang_VMThread, JCGO_FIELD_NZACCESS(This,
   vmThread));
  if (t != jnull)
  {
   (java_lang_VMThread__setPriority__I(
    t, priority));
  }
  else
  {
   JCGO_VLT_STOREI((&JCGO_FIELD_NZACCESS(This, priority)), priority);
  }
 }
 JCGO_SYNC_END
}

JCGO_NOSEP_STATIC java_lang_String CFASTCALL
java_lang_Thread__toString__( java_lang_Thread This )
{
 {
  jObject jcgo_rcvrL1;
  jObject jcgo_rcvrL2;
  struct java_lang_StringBuilder_s jcgo_stackobj1;
  struct java_lang_String_s jcgo_stackobj2;
  return java_lang_String__new__L5dy9e(
   java_lang_StringBuilder__append__Ls(
   (jcgo_rcvrL1= (jObject)java_lang_StringBuilder__append__Ls(
   (jcgo_rcvrL1= (jObject)java_lang_StringBuilder__append__Ls(
   java_lang_StringBuilder__append__Ls(
   java_lang_StringBuilder__append__Ls(
   java_lang_StringBuilder__this__(
   JCGO_STACKOBJ_NEW(jcgo_stackobj1, java_lang_StringBuilder_methods)),
   JCGO_STRREF_OF(jcgo_string6_ThreadF9)), JCGO_VLT_LFETCH(java_lang_String,
   JCGO_FIELD_NZACCESS(This, name))), JCGO_STRREF_OF(jcgo_string458_Mdclnt)),
   java_lang_StringBuilder__append__Ls(
   (java_lang_StringBuilder)jcgo_rcvrL1, (java_lang_String__valueOf__IX(
   JCGO_VLT_FETCHI(JCGO_FIELD_NZACCESS(This, priority)), JCGO_STACKOBJ_NEW(jcgo_stackobj2,
   java_lang_String_methods))))), JCGO_STRREF_OF(jcgo_string458_Mdclnt)),
   java_lang_StringBuilder__append__Ls(
   (java_lang_StringBuilder)jcgo_rcvrL1, (JCGO_VLT_LFETCH(java_lang_ThreadGroup,
   JCGO_FIELD_NZACCESS(This, group)) == jnull? JCGO_STRREF_OF(jcgo_string3_String6D) :
   (jcgo_rcvrL2= (jObject)JCGO_VLT_LFETCH(java_lang_ThreadGroup, JCGO_FIELD_NZACCESS(This,
   group)), JCGO_CALL_FINALF((java_lang_ThreadGroup)jcgo_rcvrL2) java_lang_ThreadGroup__getName__(
   (java_lang_ThreadGroup)jcgo_rcvrL2))))), JCGO_STRREF_OF(jcgo_string5_ByteBffr)));
 }
}

JCGO_NOSEP_STATIC void CFASTCALL
java_lang_Thread__die__( java_lang_Thread This )
{
 JCGO_SYNC_BLOCKSAFENZ(This)
 {
  jObject jcgo_rcvrL1;
  (jcgo_rcvrL1= (jObject)JCGO_VLT_LFETCH(java_lang_ThreadGroup, JCGO_FIELD_NZACCESS(This,
   group)), JCGO_CALL_FINALF((java_lang_ThreadGroup)jcgo_rcvrL1) java_lang_ThreadGroup__removeThread__L20uxk(
   (java_lang_ThreadGroup)jcgo_rcvrL1, This));
  JCGO_VLT_LSTORE(void, &JCGO_FIELD_NZACCESS(This, vmThread), jnull);
  JCGO_FIELD_NZACCESS(This, locals)= (java_util_AbstractMap)jnull;
 }
 JCGO_SYNC_END
}

JCGO_NOSEP_INLINE java_lang_Thread_UncaughtExceptionHandler CFASTCALL
java_lang_Thread__getUncaughtExceptionHandler__( java_lang_Thread
 This )
{
 {
  return ((java_lang_Thread_UncaughtExceptionHandler)jnull) != jnull?
   ((java_lang_Thread_UncaughtExceptionHandler)jnull) : (java_lang_Thread_UncaughtExceptionHandler)JCGO_VLT_LFETCH(java_lang_ThreadGroup,
   JCGO_FIELD_NZACCESS(This, group));
 }
}

JCGO_NOSEP_INLINE java_lang_Thread_UncaughtExceptionHandler CFASTCALL
java_lang_Thread__getDefaultUncaughtExceptionHandler__( void )
{
 {
  return ((java_lang_Thread_UncaughtExceptionHandler)jnull);
 }
}

JCGO_NOSEP_DATA CONST struct java_lang_Thread_methods_s java_lang_Thread_methods=
{
 JCGO_CLASSREF_OF(java_lang_Thread__class),
 JCGO_GCJDESCR_INIT(java_lang_Thread_s, locals)
 OBJT_java_lang_Thread,
 (JCGO_OBJSIZE_T)sizeof(struct java_lang_Thread_s),
 NULL,
 JCGO_CLINIT_INIT(0)
 java_lang_Thread__this__,
 java_lang_Object__equals__Lo,
 java_lang_Object__hashCode__,
 java_lang_Thread__toString__,
 java_lang_Object__finalize__,
 java_lang_Thread__run__
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_Thread_class_s java_lang_Thread__class
 JCGO_THRD_ATTRNONGC=
{
 {
  &java_lang_Class_methods,
  JCGO_MON_INIT
  JCGO_OBJREF_OF(*(java_lang_Object)&java_lang_Thread_methods),
  JCGO_STRREF_OF(jcgo_string1_ThreadF9),
  JCGO_CLASSREF_OF(java_lang_Object__class),
  ((jObjectArr)JCGO_OBJREF_OF(jcgo_array27_GameShll)),
  0x1
 }
};

JCGO_NOSEP_DATA jlong java_lang_Thread__totalThreadsCreated= (jlong)0;

JCGO_NOSEP_DATA jint java_lang_Thread__numAnonymousThreadsCreated=
 (jint)0;

JCGO_NOSEP_DATA CONST jcgo_arrtype468_VMSstmPr jcgo_array7_ThreadF9=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 41,
 {
  (jbyte)(jchar)106/*'j'*/, (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)118/*'v'*/,
   (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)46/*'.'*/, (jbyte)(jchar)108/*'l'*/,
   (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)110/*'n'*/, (jbyte)(jchar)103/*'g'*/,
   (jbyte)(jchar)46/*'.'*/, (jbyte)(jchar)84/*'T'*/, (jbyte)(jchar)104/*'h'*/,
   (jbyte)(jchar)114/*'r'*/, (jbyte)(jchar)101/*'e'*/, (jbyte)(jchar)97/*'a'*/,
   (jbyte)(jchar)100/*'d'*/, (jbyte)(jchar)36/*'$'*/, (jbyte)(jchar)85/*'U'*/,
   (jbyte)(jchar)110/*'n'*/, (jbyte)(jchar)99/*'c'*/, (jbyte)(jchar)97/*'a'*/,
   (jbyte)(jchar)117/*'u'*/, (jbyte)(jchar)103/*'g'*/, (jbyte)(jchar)104/*'h'*/,
   (jbyte)(jchar)116/*'t'*/, (jbyte)(jchar)69/*'E'*/, (jbyte)(jchar)120/*'x'*/,
   (jbyte)(jchar)99/*'c'*/, (jbyte)(jchar)101/*'e'*/, (jbyte)(jchar)112/*'p'*/,
   (jbyte)(jchar)116/*'t'*/, (jbyte)(jchar)105/*'i'*/, (jbyte)(jchar)111/*'o'*/,
   (jbyte)(jchar)110/*'n'*/, (jbyte)(jchar)72/*'H'*/, (jbyte)(jchar)97/*'a'*/,
   (jbyte)(jchar)110/*'n'*/, (jbyte)(jchar)100/*'d'*/, (jbyte)(jchar)108/*'l'*/,
   (jbyte)(jchar)101/*'e'*/, (jbyte)(jchar)114/*'r'*/
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype24_Object jcgo_array8_ThreadF9=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 7,
 {
  (jbyte)(jchar)84/*'T'*/, (jbyte)(jchar)104/*'h'*/, (jbyte)(jchar)114/*'r'*/,
   (jbyte)(jchar)101/*'e'*/, (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)100/*'d'*/,
   (jbyte)(jchar)45/*'-'*/
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype91_GmCnnctn jcgo_array9_ThreadF9=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 23,
 {
  (jbyte)(jchar)78/*'N'*/, (jbyte)(jchar)101/*'e'*/, (jbyte)(jchar)103/*'g'*/,
   (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)116/*'t'*/, (jbyte)(jchar)105/*'i'*/,
   (jbyte)(jchar)118/*'v'*/, (jbyte)(jchar)101/*'e'*/, (jbyte)(jchar)32/*' '*/,
   (jbyte)(jchar)109/*'m'*/, (jbyte)(jchar)105/*'i'*/, (jbyte)(jchar)108/*'l'*/,
   (jbyte)(jchar)108/*'l'*/, (jbyte)(jchar)105/*'i'*/, (jbyte)(jchar)115/*'s'*/,
   (jbyte)(jchar)101/*'e'*/, (jbyte)(jchar)99/*'c'*/, (jbyte)(jchar)111/*'o'*/,
   (jbyte)(jchar)110/*'n'*/, (jbyte)(jchar)100/*'d'*/, (jbyte)(jchar)115/*'s'*/,
   (jbyte)(jchar)58/*':'*/, (jbyte)(jchar)32/*' '*/
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype27_Object jcgo_array10_ThreadF9=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 26,
 {
  (jbyte)(jchar)78/*'N'*/, (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)110/*'n'*/,
   (jbyte)(jchar)111/*'o'*/, (jbyte)(jchar)115/*'s'*/, (jbyte)(jchar)101/*'e'*/,
   (jbyte)(jchar)99/*'c'*/, (jbyte)(jchar)111/*'o'*/, (jbyte)(jchar)110/*'n'*/,
   (jbyte)(jchar)100/*'d'*/, (jbyte)(jchar)115/*'s'*/, (jbyte)(jchar)32/*' '*/,
   (jbyte)(jchar)111/*'o'*/, (jbyte)(jchar)117/*'u'*/, (jbyte)(jchar)102/*'f'*/,
   (jbyte)(jchar)32/*' '*/, (jbyte)(jchar)111/*'o'*/, (jbyte)(jchar)102/*'f'*/,
   (jbyte)(jchar)32/*' '*/, (jbyte)(jchar)114/*'r'*/, (jbyte)(jchar)97/*'a'*/,
   (jbyte)(jchar)110/*'n'*/, (jbyte)(jchar)103/*'g'*/, (jbyte)(jchar)101/*'e'*/,
   (jbyte)(jchar)58/*':'*/, (jbyte)(jchar)32/*' '*/
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype24_Object jcgo_array11_ThreadF9=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 7,
 {
  (jbyte)(jchar)84/*'T'*/, (jbyte)(jchar)104/*'h'*/, (jbyte)(jchar)114/*'r'*/,
   (jbyte)(jchar)101/*'e'*/, (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)100/*'d'*/,
   (jbyte)(jchar)91/*'['*/
 }
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string1_ThreadF9
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array7_ThreadF9),
 0, 16, (jint)0x4849e45eL
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string2_ThreadF9
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array8_ThreadF9),
 0, 7, (jint)0x13794b43L
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string3_ThreadF9
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array9_ThreadF9),
 0, 23, (jint)0xcd0a47e3L
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string4_ThreadF9
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array10_ThreadF9),
 0, 26, (jint)0x9e88904fL
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string5_ThreadF9
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array427_VMSstmPr),
 0, 31, (jint)0xbe5589e8L
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string6_ThreadF9
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array11_ThreadF9),
 0, 7, (jint)0x13794b71L
};

#ifdef CHKALL_java_lang_Thread
#include "jcgochke.h"
#endif

#endif