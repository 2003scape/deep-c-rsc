/* DO NOT EDIT THIS FILE - it is machine generated (JCGO_116) */

#ifdef JCGO_SEPARATED
#define JCGO_116
#include "jcgortl.h"
#include "Main.h"
#endif

#ifdef JCGO_116

#ifdef CHKALL_java_net_SocketException
#include "jcgobchk.h"
#endif

JCGO_NOSEP_STATIC java_net_SocketException CFASTCALL
java_net_SocketException__this__( java_net_SocketException This )
{
 {
  (java_io_IOException__this__((java_io_IOException)This));
 }
 return This;
}

JCGO_NOSEP_INLINE java_net_SocketException CFASTCALL
java_net_SocketException__new__( void )
{
 return java_net_SocketException__this__(
  (java_net_SocketException)jcgo_newObject((jvtable)&java_net_SocketException_methods));
}

JCGO_NOSEP_INLINE java_net_SocketException CFASTCALL
java_net_SocketException__this__Ls( java_net_SocketException This,
 java_lang_String message )
{
 {
  (java_io_IOException__this__Ls((java_io_IOException)This, message));
 }
 return This;
}

JCGO_NOSEP_INLINE java_net_SocketException CFASTCALL
java_net_SocketException__new__Ls( java_lang_String message )
{
 return java_net_SocketException__this__Ls(
  (java_net_SocketException)jcgo_newObject((jvtable)&java_net_SocketException_methods),
  message);
}

JCGO_NOSEP_DATA CONST struct java_net_SocketException_methods_s java_net_SocketException_methods=
{
 JCGO_CLASSREF_OF(java_net_SocketException__class),
 JCGO_GCJDESCR_ZEROINIT
 OBJT_java_net_SocketException,
 (JCGO_OBJSIZE_T)sizeof(struct java_net_SocketException_s),
 NULL,
 JCGO_CLINIT_INIT(0)
 java_net_SocketException__this__,
 java_lang_Object__equals__Lo,
 java_lang_Object__hashCode__,
 java_lang_Throwable__toString__,
 java_lang_Object__finalize__,
 java_lang_Throwable__getMessage__,
 java_lang_Throwable__getCause__
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_net_SocketException_class_s
 java_net_SocketException__class JCGO_THRD_ATTRNONGC=
{
 {
  &java_lang_Class_methods,
  JCGO_MON_INIT
  JCGO_OBJREF_OF(*(java_lang_Object)&java_net_SocketException_methods),
  JCGO_STRREF_OF(jcgo_string1_ScktExcp),
  JCGO_CLASSREF_OF(java_io_IOException__class),
  ((jObjectArr)JCGO_OBJREF_OF(jcgo_array3_Object)),
  0x1
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype94_GmCnnctn jcgo_array2_ScktExcp=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 24,
 {
  (jbyte)(jchar)106/*'j'*/, (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)118/*'v'*/,
   (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)46/*'.'*/, (jbyte)(jchar)110/*'n'*/,
   (jbyte)(jchar)101/*'e'*/, (jbyte)(jchar)116/*'t'*/, (jbyte)(jchar)46/*'.'*/,
   (jbyte)(jchar)83/*'S'*/, (jbyte)(jchar)111/*'o'*/, (jbyte)(jchar)99/*'c'*/,
   (jbyte)(jchar)107/*'k'*/, (jbyte)(jchar)101/*'e'*/, (jbyte)(jchar)116/*'t'*/,
   (jbyte)(jchar)69/*'E'*/, (jbyte)(jchar)120/*'x'*/, (jbyte)(jchar)99/*'c'*/,
   (jbyte)(jchar)101/*'e'*/, (jbyte)(jchar)112/*'p'*/, (jbyte)(jchar)116/*'t'*/,
   (jbyte)(jchar)105/*'i'*/, (jbyte)(jchar)111/*'o'*/, (jbyte)(jchar)110/*'n'*/
 }
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string1_ScktExcp
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array2_ScktExcp),
 0, 24, (jint)0xa28db1dfL
};

#ifdef CHKALL_java_net_SocketException
#include "jcgochke.h"
#endif

#endif
