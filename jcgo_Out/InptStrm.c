/* DO NOT EDIT THIS FILE - it is machine generated (JCGO_116) */

#ifdef JCGO_SEPARATED
#define JCGO_116
#include "jcgortl.h"
#include "Main.h"
#endif

#ifdef JCGO_116

#ifdef CHKALL_java_io_InputStream
#include "jcgobchk.h"
#endif

JCGO_NOSEP_STATIC java_io_InputStream CFASTCALL
java_io_InputStream__this__( java_io_InputStream This )
{
 {
  ;
 }
 return This;
}

JCGO_NOSEP_INLINE void CFASTCALL
java_io_InputStream__close__( java_io_InputStream This )
{
 {
 }
}

JCGO_NOSEP_DATA CONST struct jcgo_methods_s java_io_InputStream_methods=
{
 JCGO_CLASSREF_OF(java_io_InputStream__class),
 JCGO_GCJDESCR_ZEROINIT
 OBJT_java_io_InputStream,
 0,
 NULL,
 JCGO_CLINIT_INIT(0)
 (jObject (CFASTCALL*)(jObject))java_io_InputStream__this__
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_io_InputStream_class_s
 java_io_InputStream__class JCGO_THRD_ATTRNONGC=
{
 {
  &java_lang_Class_methods,
  JCGO_MON_INIT
  JCGO_OBJREF_OF(*(java_lang_Object)&java_io_InputStream_methods),
  JCGO_STRREF_OF(jcgo_string1_InptStrm),
  JCGO_CLASSREF_OF(java_lang_Object__class),
  ((jObjectArr)JCGO_OBJREF_OF(jcgo_array3_Object)),
  0x401
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype42_GameShll jcgo_array2_InptStrm=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 19,
 {
  (jbyte)(jchar)106/*'j'*/, (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)118/*'v'*/,
   (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)46/*'.'*/, (jbyte)(jchar)105/*'i'*/,
   (jbyte)(jchar)111/*'o'*/, (jbyte)(jchar)46/*'.'*/, (jbyte)(jchar)73/*'I'*/,
   (jbyte)(jchar)110/*'n'*/, (jbyte)(jchar)112/*'p'*/, (jbyte)(jchar)117/*'u'*/,
   (jbyte)(jchar)116/*'t'*/, (jbyte)(jchar)83/*'S'*/, (jbyte)(jchar)116/*'t'*/,
   (jbyte)(jchar)114/*'r'*/, (jbyte)(jchar)101/*'e'*/, (jbyte)(jchar)97/*'a'*/,
   (jbyte)(jchar)109/*'m'*/
 }
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string1_InptStrm
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array2_InptStrm),
 0, 19, (jint)0x31b19c4eL
};

#ifdef CHKALL_java_io_InputStream
#include "jcgochke.h"
#endif

#endif
