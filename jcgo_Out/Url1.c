/* DO NOT EDIT THIS FILE - it is machine generated (JCGO_116) */

#ifdef JCGO_SEPARATED
#define JCGO_116
#include "jcgortl.h"
#include "Main.h"
#endif

#ifdef JCGO_116

#ifdef CHKALL_java_net_URL
#include "jcgobchk.h"
#endif

JCGO_NOSEP_INLINE java_lang_Object CFASTCALL
java_net_URL_1__run__( java_net_URL_1 This )
{
 {
  return (java_lang_Object)(java_lang_ClassLoader__getSystemClassLoader__());
 }
}

JCGO_NOSEP_STATIC java_net_URL_1 CFASTCALL
java_net_URL_1__this__( java_net_URL_1 This )
{
 {
  ;
 }
 return This;
}

JCGO_NOSEP_INLINE java_net_URL_1 CFASTCALL
java_net_URL_1__new__( void )
{
 return java_net_URL_1__this__(
  (java_net_URL_1)jcgo_newObject((jvtable)&java_net_URL_1_methods));
}

JCGO_NOSEP_DATA CONST struct java_net_URL_1_methods_s java_net_URL_1_methods=
{
 JCGO_CLASSREF_OF(java_net_URL_1__class),
 JCGO_GCJDESCR_ZEROINIT
 OBJT_java_net_URL_1,
 -(JCGO_OBJSIZE_T)sizeof(struct java_net_URL_1_s),
 NULL,
 JCGO_CLINIT_INIT(0)
 java_net_URL_1__this__,
 java_lang_Object__equals__Lo,
 java_lang_Object__hashCode__,
 java_lang_Object__toString__,
 java_lang_Object__finalize__,
 java_net_URL_1__run__
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_net_URL_1_class_s java_net_URL_1__class
 JCGO_THRD_ATTRNONGC=
{
 {
  &java_lang_Class_methods,
  JCGO_MON_INIT
  JCGO_OBJREF_OF(*(java_lang_Object)&java_net_URL_1_methods),
  JCGO_STRREF_OF(jcgo_string1_Url1),
  JCGO_CLASSREF_OF(java_lang_Object__class),
  ((jObjectArr)JCGO_OBJREF_OF(jcgo_array2_Prvdr1)),
  0x8
 }
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string1_Url1
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array14_Url),
 0, 14, (jint)0xbe1b9dbfL
};

#ifdef CHKALL_java_net_URL
#include "jcgochke.h"
#endif

#endif
