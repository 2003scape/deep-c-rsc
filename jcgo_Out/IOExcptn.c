/* DO NOT EDIT THIS FILE - it is machine generated (JCGO_116) */

#ifdef JCGO_SEPARATED
#define JCGO_116
#include "jcgortl.h"
#include "Main.h"
#endif

#ifdef JCGO_116

#ifdef CHKALL_java_io_IOException
#include "jcgobchk.h"
#endif

JCGO_NOSEP_STATIC java_io_IOException CFASTCALL
java_io_IOException__this__( java_io_IOException This )
{
 {
  (java_lang_Exception__this__((java_lang_Exception)This));
 }
 return This;
}

JCGO_NOSEP_INLINE java_io_IOException CFASTCALL
java_io_IOException__new__( void )
{
 return java_io_IOException__this__(
  (java_io_IOException)jcgo_newObject((jvtable)&java_io_IOException_methods));
}

JCGO_NOSEP_INLINE java_io_IOException CFASTCALL
java_io_IOException__this__Ls( java_io_IOException This, java_lang_String
 message )
{
 {
  (java_lang_Exception__this__Ls((java_lang_Exception)This, message));
 }
 return This;
}

JCGO_NOSEP_INLINE java_io_IOException CFASTCALL
java_io_IOException__new__Ls( java_lang_String message )
{
 return java_io_IOException__this__Ls(
  (java_io_IOException)jcgo_newObject((jvtable)&java_io_IOException_methods),
  message);
}

JCGO_NOSEP_DATA CONST struct java_io_IOException_methods_s java_io_IOException_methods=
{
 JCGO_CLASSREF_OF(java_io_IOException__class),
 JCGO_GCJDESCR_ZEROINIT
 OBJT_java_io_IOException,
 (JCGO_OBJSIZE_T)sizeof(struct java_io_IOException_s),
 NULL,
 JCGO_CLINIT_INIT(0)
 java_io_IOException__this__,
 java_lang_Object__equals__Lo,
 java_lang_Object__hashCode__,
 java_lang_Throwable__toString__,
 java_lang_Object__finalize__,
 java_lang_Throwable__getMessage__,
 java_lang_Throwable__getCause__
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_io_IOException_class_s
 java_io_IOException__class JCGO_THRD_ATTRNONGC=
{
 {
  &java_lang_Class_methods,
  JCGO_MON_INIT
  JCGO_OBJREF_OF(*(java_lang_Object)&java_io_IOException_methods),
  JCGO_STRREF_OF(jcgo_string1_IOExcptn),
  JCGO_CLASSREF_OF(java_lang_Exception__class),
  ((jObjectArr)JCGO_OBJREF_OF(jcgo_array3_Object)),
  0x1
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype42_GameShll jcgo_array2_IOExcptn=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 19,
 {
  (jbyte)(jchar)106/*'j'*/, (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)118/*'v'*/,
   (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)46/*'.'*/, (jbyte)(jchar)105/*'i'*/,
   (jbyte)(jchar)111/*'o'*/, (jbyte)(jchar)46/*'.'*/, (jbyte)(jchar)73/*'I'*/,
   (jbyte)(jchar)79/*'O'*/, (jbyte)(jchar)69/*'E'*/, (jbyte)(jchar)120/*'x'*/,
   (jbyte)(jchar)99/*'c'*/, (jbyte)(jchar)101/*'e'*/, (jbyte)(jchar)112/*'p'*/,
   (jbyte)(jchar)116/*'t'*/, (jbyte)(jchar)105/*'i'*/, (jbyte)(jchar)111/*'o'*/,
   (jbyte)(jchar)110/*'n'*/
 }
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string1_IOExcptn
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array2_IOExcptn),
 0, 19, (jint)0x8827b24dL
};

#ifdef CHKALL_java_io_IOException
#include "jcgochke.h"
#endif

#endif