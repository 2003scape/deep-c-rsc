/* DO NOT EDIT THIS FILE - it is machine generated (JCGO_116) */

#ifdef JCGO_SEPARATED
#define JCGO_116
#include "jcgortl.h"
#include "Main.h"
#endif

#ifdef JCGO_116

#ifdef CHKALL_java_lang_VMClassLoader
#include "jcgobchk.h"
#endif

JCGO_NOSEP_INLINE java_lang_VMClassLoader_AppClassLoader CFASTCALL
java_lang_VMClassLoader_AppClassLoader__this__( java_lang_VMClassLoader_AppClassLoader
 This )
{
 {
  (java_lang_ClassLoader__this__L09rb1((java_lang_ClassLoader)This,
   (java_lang_ClassLoader)jnull));
 }
 return This;
}

JCGO_NOSEP_INLINE java_lang_VMClassLoader_AppClassLoader CFASTCALL
java_lang_VMClassLoader_AppClassLoader__new__( void )
{
 return java_lang_VMClassLoader_AppClassLoader__this__(
  (java_lang_VMClassLoader_AppClassLoader)jcgo_newObject((jvtable)&java_lang_VMClassLoader_AppClassLoader_methods));
}

JCGO_NOSEP_INLINE java_lang_String CFASTCALL
java_lang_VMClassLoader_AppClassLoader__toString__( java_lang_VMClassLoader_AppClassLoader
 This )
{
 {
  jObject jcgo_rcvrL1;
  return (jcgo_rcvrL1= (jObject)(java_lang_Object__getClass__(
   (java_lang_Object)This)), JCGO_CALL_FINALF((java_lang_Class)jcgo_rcvrL1)
   java_lang_Class__getName__(
   (java_lang_Class)jcgo_rcvrL1));
 }
}

JCGO_NOSEP_DATA CONST struct java_lang_VMClassLoader_AppClassLoader_methods_s
 java_lang_VMClassLoader_AppClassLoader_methods=
{
 JCGO_CLASSREF_OF(java_lang_VMClassLoader_AppClassLoader__class),
 JCGO_GCJDESCR_INIT(java_lang_VMClassLoader_AppClassLoader_s, parent)
 OBJT_java_lang_VMClassLoader_AppClassLoader,
 (JCGO_OBJSIZE_T)sizeof(struct java_lang_VMClassLoader_AppClassLoader_s),
 NULL,
 JCGO_CLINIT_INIT(0)
 java_lang_VMClassLoader_AppClassLoader__this__,
 java_lang_Object__equals__Lo,
 java_lang_Object__hashCode__,
 java_lang_VMClassLoader_AppClassLoader__toString__,
 java_lang_Object__finalize__
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_VMClassLoader_AppClassLoader_class_s
 java_lang_VMClassLoader_AppClassLoader__class JCGO_THRD_ATTRNONGC=
{
 {
  &java_lang_Class_methods,
  JCGO_MON_INIT
  JCGO_OBJREF_OF(*(java_lang_Object)&java_lang_VMClassLoader_AppClassLoader_methods),
  JCGO_STRREF_OF(jcgo_string1_AppClsLd),
  JCGO_CLASSREF_OF(java_lang_ClassLoader__class),
  ((jObjectArr)JCGO_OBJREF_OF(jcgo_array3_Object)),
  0x1a
 }
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string1_AppClsLd
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array4_VMClssLd),
 0, 38, (jint)0x505b7c4eL
};

#ifdef CHKALL_java_lang_VMClassLoader
#include "jcgochke.h"
#endif

#endif