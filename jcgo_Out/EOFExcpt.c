/* DO NOT EDIT THIS FILE - it is machine generated (JCGO_116) */

#ifdef JCGO_SEPARATED
#define JCGO_116
#include "jcgortl.h"
#include "Main.h"
#endif

#ifdef JCGO_116

#ifdef CHKALL_java_io_EOFException
#include "jcgobchk.h"
#endif

JCGO_NOSEP_STATIC java_io_EOFException CFASTCALL
java_io_EOFException__this__( java_io_EOFException This )
{
 {
  (java_io_IOException__this__((java_io_IOException)This));
 }
 return This;
}

JCGO_NOSEP_INLINE java_io_EOFException CFASTCALL
java_io_EOFException__new__( void )
{
 return java_io_EOFException__this__(
  (java_io_EOFException)jcgo_newObject((jvtable)&java_io_EOFException_methods));
}

JCGO_NOSEP_DATA CONST struct java_io_EOFException_methods_s java_io_EOFException_methods=
{
 JCGO_CLASSREF_OF(java_io_EOFException__class),
 JCGO_GCJDESCR_ZEROINIT
 OBJT_java_io_EOFException,
 (JCGO_OBJSIZE_T)sizeof(struct java_io_EOFException_s),
 NULL,
 JCGO_CLINIT_INIT(0)
 java_io_EOFException__this__,
 java_lang_Object__equals__Lo,
 java_lang_Object__hashCode__,
 java_lang_Throwable__toString__,
 java_lang_Object__finalize__,
 java_lang_Throwable__getMessage__,
 java_lang_Throwable__getCause__
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_io_EOFException_class_s
 java_io_EOFException__class JCGO_THRD_ATTRNONGC=
{
 {
  &java_lang_Class_methods,
  JCGO_MON_INIT
  JCGO_OBJREF_OF(*(java_lang_Object)&java_io_EOFException_methods),
  JCGO_STRREF_OF(jcgo_string1_EOFExcpt),
  JCGO_CLASSREF_OF(java_io_IOException__class),
  ((jObjectArr)JCGO_OBJREF_OF(jcgo_array3_Object)),
  0x1
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype23_Object jcgo_array2_EOFExcpt=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 20,
 {
  (jbyte)(jchar)106/*'j'*/, (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)118/*'v'*/,
   (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)46/*'.'*/, (jbyte)(jchar)105/*'i'*/,
   (jbyte)(jchar)111/*'o'*/, (jbyte)(jchar)46/*'.'*/, (jbyte)(jchar)69/*'E'*/,
   (jbyte)(jchar)79/*'O'*/, (jbyte)(jchar)70/*'F'*/, (jbyte)(jchar)69/*'E'*/,
   (jbyte)(jchar)120/*'x'*/, (jbyte)(jchar)99/*'c'*/, (jbyte)(jchar)101/*'e'*/,
   (jbyte)(jchar)112/*'p'*/, (jbyte)(jchar)116/*'t'*/, (jbyte)(jchar)105/*'i'*/,
   (jbyte)(jchar)111/*'o'*/, (jbyte)(jchar)110/*'n'*/
 }
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string1_EOFExcpt
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array2_EOFExcpt),
 0, 20, (jint)0xd162cacfL
};

#ifdef CHKALL_java_io_EOFException
#include "jcgochke.h"
#endif

#endif
