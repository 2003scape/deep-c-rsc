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

JCGO_NOSEP_STATIC void CFASTCALL
java_lang_VMThread_ExitMain__class__0( void )
{
 JCGO_CLINIT_BEGIN(java_lang_VMThread_ExitMain__class);
 {
  if (JCGO_CLINIT_VARACC(java_lang_VMThread__class, java_lang_VMThread__mainVMThread) ==
   jnull)
  {
   java_lang_Throwable throwable;
   (java_lang_VMThread__createAttachedThread0X__LoLsLoI(
    (java_lang_Object)jnull, JCGO_STRREF_OF(jcgo_string3_String6D),
    (java_lang_Object)jnull, 0));
   (java_lang_VMThread__run0X__Lo(
    (java_lang_Object)jnull));
   throwable= java_lang_Throwable__new__();
   (java_lang_VMThread__jniExceptionDescribe0X__Lo(
    (java_lang_Object)throwable));
   (java_lang_VMThread__detachThread0X__Lo(
    (java_lang_Object)throwable));
   (java_lang_VMThread__destroyJavaVM0X__LoI(
    (java_lang_Object)jnull, 0));
  }
  java_lang_VMThread_ExitMain__initialized= (jboolean)jtrue;
  (java_lang_VMRuntime__createMainFinalizer__());
 }
 JCGO_CLINIT_DONE(java_lang_VMThread_ExitMain__class);
}

JCGO_NOSEP_DATA CONST struct jcgo_methods_s java_lang_VMThread_ExitMain_methods=
{
 JCGO_CLASSREF_OF(java_lang_VMThread_ExitMain__class),
 JCGO_GCJDESCR_ZEROINIT
 OBJT_java_lang_VMThread_ExitMain,
 0,
 NULL,
 JCGO_CLINIT_INIT(java_lang_VMThread_ExitMain__class__0)
 0
};

JCGO_NOSEP_DATA struct java_lang_VMThread_ExitMain_class_s java_lang_VMThread_ExitMain__class
 ATTRIBNONGC=
{
 {
  &java_lang_Class_methods,
  JCGO_MON_INIT
  JCGO_OBJREF_OF(*(java_lang_Object)&java_lang_VMThread_ExitMain_methods),
  JCGO_STRREF_OF(jcgo_string1_ExitMain),
  JCGO_CLASSREF_OF(java_lang_Object__class),
  ((jObjectArr)JCGO_OBJREF_OF(jcgo_array3_Object)),
  0x1d8
 }
};

JCGO_NOSEP_DATA jboolean java_lang_VMThread_ExitMain__initialized=
 (jboolean)0;

JCGO_NOSEP_DATA CONST jcgo_arrtype38_Object jcgo_array2_ExitMain=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 27,
 {
  (jbyte)(jchar)106/*'j'*/, (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)118/*'v'*/,
   (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)46/*'.'*/, (jbyte)(jchar)108/*'l'*/,
   (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)110/*'n'*/, (jbyte)(jchar)103/*'g'*/,
   (jbyte)(jchar)46/*'.'*/, (jbyte)(jchar)86/*'V'*/, (jbyte)(jchar)77/*'M'*/,
   (jbyte)(jchar)84/*'T'*/, (jbyte)(jchar)104/*'h'*/, (jbyte)(jchar)114/*'r'*/,
   (jbyte)(jchar)101/*'e'*/, (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)100/*'d'*/,
   (jbyte)(jchar)36/*'$'*/, (jbyte)(jchar)69/*'E'*/, (jbyte)(jchar)120/*'x'*/,
   (jbyte)(jchar)105/*'i'*/, (jbyte)(jchar)116/*'t'*/, (jbyte)(jchar)77/*'M'*/,
   (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)105/*'i'*/, (jbyte)(jchar)110/*'n'*/
 }
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string1_ExitMain
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array2_ExitMain),
 0, 27, (jint)0xf41c0706L
};

#ifdef CHKALL_java_lang_VMThread
#include "jcgochke.h"
#endif

#endif
