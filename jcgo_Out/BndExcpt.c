/* DO NOT EDIT THIS FILE - it is machine generated (JCGO_116) */

#ifdef JCGO_SEPARATED
#define JCGO_116
#include "jcgortl.h"
#include "Main.h"
#endif

#ifdef JCGO_116

#ifdef CHKALL_java_net_BindException
#include "jcgobchk.h"
#endif

JCGO_NOSEP_STATIC java_net_BindException CFASTCALL
java_net_BindException__this__( java_net_BindException This )
{
 {
  (java_net_SocketException__this__((java_net_SocketException)This));
 }
 return This;
}

JCGO_NOSEP_INLINE java_net_BindException CFASTCALL
java_net_BindException__this__Ls( java_net_BindException This, java_lang_String
 message )
{
 {
  (java_net_SocketException__this__Ls((java_net_SocketException)This,
   message));
 }
 return This;
}

JCGO_NOSEP_INLINE java_net_BindException CFASTCALL
java_net_BindException__new__Ls( java_lang_String message )
{
 return java_net_BindException__this__Ls(
  (java_net_BindException)jcgo_newObject((jvtable)&java_net_BindException_methods),
  message);
}

JCGO_NOSEP_DATA CONST struct java_net_BindException_methods_s java_net_BindException_methods=
{
 JCGO_CLASSREF_OF(java_net_BindException__class),
 JCGO_GCJDESCR_ZEROINIT
 OBJT_java_net_BindException,
 (JCGO_OBJSIZE_T)sizeof(struct java_net_BindException_s),
 NULL,
 JCGO_CLINIT_INIT(0)
 java_net_BindException__this__,
 java_lang_Object__equals__Lo,
 java_lang_Object__hashCode__,
 java_lang_Throwable__toString__,
 java_lang_Object__finalize__,
 java_lang_Throwable__getMessage__,
 java_lang_Throwable__getCause__
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_net_BindException_class_s
 java_net_BindException__class JCGO_THRD_ATTRNONGC=
{
 {
  &java_lang_Class_methods,
  JCGO_MON_INIT
  JCGO_OBJREF_OF(*(java_lang_Object)&java_net_BindException_methods),
  JCGO_STRREF_OF(jcgo_string1_BndExcpt),
  JCGO_CLASSREF_OF(java_net_SocketException__class),
  ((jObjectArr)JCGO_OBJREF_OF(jcgo_array3_Object)),
  0x1
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype44_GameShll jcgo_array2_BndExcpt=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 22,
 {
  (jbyte)(jchar)106/*'j'*/, (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)118/*'v'*/,
   (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)46/*'.'*/, (jbyte)(jchar)110/*'n'*/,
   (jbyte)(jchar)101/*'e'*/, (jbyte)(jchar)116/*'t'*/, (jbyte)(jchar)46/*'.'*/,
   (jbyte)(jchar)66/*'B'*/, (jbyte)(jchar)105/*'i'*/, (jbyte)(jchar)110/*'n'*/,
   (jbyte)(jchar)100/*'d'*/, (jbyte)(jchar)69/*'E'*/, (jbyte)(jchar)120/*'x'*/,
   (jbyte)(jchar)99/*'c'*/, (jbyte)(jchar)101/*'e'*/, (jbyte)(jchar)112/*'p'*/,
   (jbyte)(jchar)116/*'t'*/, (jbyte)(jchar)105/*'i'*/, (jbyte)(jchar)111/*'o'*/,
   (jbyte)(jchar)110/*'n'*/
 }
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string1_BndExcpt
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array2_BndExcpt),
 0, 22, (jint)0x4ede8515L
};

#ifdef CHKALL_java_net_BindException
#include "jcgochke.h"
#endif

#endif
