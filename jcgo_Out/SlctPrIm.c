/* DO NOT EDIT THIS FILE - it is machine generated (JCGO_116) */

#ifdef JCGO_SEPARATED
#define JCGO_116
#include "jcgortl.h"
#include "Main.h"
#endif

#ifdef JCGO_116

#ifdef CHKALL_gnu_java_nio_SelectorProviderImpl
#include "jcgobchk.h"
#endif

JCGO_NOSEP_STATIC gnu_java_nio_SelectorProviderImpl CFASTCALL
gnu_java_nio_SelectorProviderImpl__this__( gnu_java_nio_SelectorProviderImpl
 This )
{
 {
  (java_nio_channels_spi_SelectorProvider__this__((java_nio_channels_spi_SelectorProvider)This));
 }
 return This;
}

JCGO_NOSEP_FRWINL gnu_java_nio_SelectorProviderImpl CFASTCALL
gnu_java_nio_SelectorProviderImpl__new__( void )
{
 return gnu_java_nio_SelectorProviderImpl__this__(
  (gnu_java_nio_SelectorProviderImpl)jcgo_newObject((jvtable)&gnu_java_nio_SelectorProviderImpl_methods));
}

JCGO_NOSEP_DATA CONST struct gnu_java_nio_SelectorProviderImpl_methods_s
 gnu_java_nio_SelectorProviderImpl_methods=
{
 JCGO_CLASSREF_OF(gnu_java_nio_SelectorProviderImpl__class),
 JCGO_GCJDESCR_ZEROINIT
 OBJT_gnu_java_nio_SelectorProviderImpl,
 -(JCGO_OBJSIZE_T)sizeof(struct gnu_java_nio_SelectorProviderImpl_s),
 NULL,
 JCGO_CLINIT_INIT(0)
 gnu_java_nio_SelectorProviderImpl__this__,
 java_lang_Object__equals__Lo,
 java_lang_Object__hashCode__,
 java_lang_Object__toString__,
 java_lang_Object__finalize__
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct gnu_java_nio_SelectorProviderImpl_class_s
 gnu_java_nio_SelectorProviderImpl__class JCGO_THRD_ATTRNONGC=
{
 {
  &java_lang_Class_methods,
  JCGO_MON_INIT
  JCGO_OBJREF_OF(*(java_lang_Object)&gnu_java_nio_SelectorProviderImpl_methods),
  JCGO_STRREF_OF(jcgo_string1_SlctPrIm),
  JCGO_CLASSREF_OF(java_nio_channels_spi_SelectorProvider__class),
  ((jObjectArr)JCGO_OBJREF_OF(jcgo_array3_Object)),
  0x1
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype48_GameShll jcgo_array2_SlctPrIm=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 33,
 {
  (jbyte)(jchar)103/*'g'*/, (jbyte)(jchar)110/*'n'*/, (jbyte)(jchar)117/*'u'*/,
   (jbyte)(jchar)46/*'.'*/, (jbyte)(jchar)106/*'j'*/, (jbyte)(jchar)97/*'a'*/,
   (jbyte)(jchar)118/*'v'*/, (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)46/*'.'*/,
   (jbyte)(jchar)110/*'n'*/, (jbyte)(jchar)105/*'i'*/, (jbyte)(jchar)111/*'o'*/,
   (jbyte)(jchar)46/*'.'*/, (jbyte)(jchar)83/*'S'*/, (jbyte)(jchar)101/*'e'*/,
   (jbyte)(jchar)108/*'l'*/, (jbyte)(jchar)101/*'e'*/, (jbyte)(jchar)99/*'c'*/,
   (jbyte)(jchar)116/*'t'*/, (jbyte)(jchar)111/*'o'*/, (jbyte)(jchar)114/*'r'*/,
   (jbyte)(jchar)80/*'P'*/, (jbyte)(jchar)114/*'r'*/, (jbyte)(jchar)111/*'o'*/,
   (jbyte)(jchar)118/*'v'*/, (jbyte)(jchar)105/*'i'*/, (jbyte)(jchar)100/*'d'*/,
   (jbyte)(jchar)101/*'e'*/, (jbyte)(jchar)114/*'r'*/, (jbyte)(jchar)73/*'I'*/,
   (jbyte)(jchar)109/*'m'*/, (jbyte)(jchar)112/*'p'*/, (jbyte)(jchar)108/*'l'*/
 }
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string1_SlctPrIm
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array2_SlctPrIm),
 0, 33, (jint)0x637f51b6L
};

#ifdef CHKALL_gnu_java_nio_SelectorProviderImpl
#include "jcgochke.h"
#endif

#endif
