/* DO NOT EDIT THIS FILE - it is machine generated (JCGO_116) */

#ifdef JCGO_SEPARATED
#define JCGO_116
#include "jcgortl.h"
#include "Main.h"
#endif

#ifdef JCGO_116

#ifdef CHKALL_java_nio_ByteOrder
#include "jcgobchk.h"
#endif

JCGO_NOSEP_STATIC java_nio_ByteOrder CFASTCALL
java_nio_ByteOrder__this__( java_nio_ByteOrder This )
{
 {
  ;
 }
 return This;
}

JCGO_NOSEP_FRWINL java_nio_ByteOrder CFASTCALL
java_nio_ByteOrder__new__( void )
{
 return java_nio_ByteOrder__this__(
  (java_nio_ByteOrder)jcgo_newObject((jvtable)&java_nio_ByteOrder_methods));
}

JCGO_NOSEP_INLINE java_lang_String CFASTCALL
java_nio_ByteOrder__toString__( java_nio_ByteOrder This )
{
 {
  return This == java_nio_ByteOrder__BIG_ENDIAN0? JCGO_STRREF_OF(jcgo_string2_ByteOrdr) :
   JCGO_STRREF_OF(jcgo_string3_ByteOrdr);
 }
}

JCGO_NOSEP_STATIC void CFASTCALL
java_nio_ByteOrder__class__0( void )
{
 JCGO_CLINIT_BEGIN(java_nio_ByteOrder__class);
 java_nio_ByteOrder__BIG_ENDIAN0= java_nio_ByteOrder__new__();
 java_nio_ByteOrder__LITTLE_ENDIAN0= java_nio_ByteOrder__new__();
 JCGO_CLINIT_DONE(java_nio_ByteOrder__class);
}

JCGO_NOSEP_DATA CONST struct java_nio_ByteOrder_methods_s java_nio_ByteOrder_methods=
{
 JCGO_CLASSREF_OF(java_nio_ByteOrder__class),
 JCGO_GCJDESCR_ZEROINIT
 OBJT_java_nio_ByteOrder,
 -(JCGO_OBJSIZE_T)sizeof(struct java_nio_ByteOrder_s),
 NULL,
 JCGO_CLINIT_INIT(java_nio_ByteOrder__class__0)
 0,
 java_lang_Object__equals__Lo,
 java_lang_Object__hashCode__,
 java_nio_ByteOrder__toString__,
 java_lang_Object__finalize__
};

JCGO_NOSEP_DATA struct java_nio_ByteOrder_class_s java_nio_ByteOrder__class
 ATTRIBNONGC=
{
 {
  &java_lang_Class_methods,
  JCGO_MON_INIT
  JCGO_OBJREF_OF(*(java_lang_Object)&java_nio_ByteOrder_methods),
  JCGO_STRREF_OF(jcgo_string1_ByteOrdr),
  JCGO_CLASSREF_OF(java_lang_Object__class),
  ((jObjectArr)JCGO_OBJREF_OF(jcgo_array3_Object)),
  0x1d1
 }
};

JCGO_NOSEP_GCDATA java_nio_ByteOrder java_nio_ByteOrder__BIG_ENDIAN0
 ATTRIBGCBSS= jnull;

JCGO_NOSEP_GCDATA java_nio_ByteOrder java_nio_ByteOrder__LITTLE_ENDIAN0
 ATTRIBGCBSS= jnull;

JCGO_NOSEP_DATA CONST jcgo_arrtype82_GmCnnctn jcgo_array4_ByteOrdr=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 18,
 {
  (jbyte)(jchar)106/*'j'*/, (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)118/*'v'*/,
   (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)46/*'.'*/, (jbyte)(jchar)110/*'n'*/,
   (jbyte)(jchar)105/*'i'*/, (jbyte)(jchar)111/*'o'*/, (jbyte)(jchar)46/*'.'*/,
   (jbyte)(jchar)66/*'B'*/, (jbyte)(jchar)121/*'y'*/, (jbyte)(jchar)116/*'t'*/,
   (jbyte)(jchar)101/*'e'*/, (jbyte)(jchar)79/*'O'*/, (jbyte)(jchar)114/*'r'*/,
   (jbyte)(jchar)100/*'d'*/, (jbyte)(jchar)101/*'e'*/, (jbyte)(jchar)114/*'r'*/
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype32_GameShll jcgo_array5_ByteOrdr=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 10,
 {
  (jbyte)(jchar)66/*'B'*/, (jbyte)(jchar)73/*'I'*/, (jbyte)(jchar)71/*'G'*/,
   (jbyte)(jchar)95/*'_'*/, (jbyte)(jchar)69/*'E'*/, (jbyte)(jchar)78/*'N'*/,
   (jbyte)(jchar)68/*'D'*/, (jbyte)(jchar)73/*'I'*/, (jbyte)(jchar)65/*'A'*/,
   (jbyte)(jchar)78/*'N'*/
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype30_GameShll jcgo_array6_ByteOrdr=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 13,
 {
  (jbyte)(jchar)76/*'L'*/, (jbyte)(jchar)73/*'I'*/, (jbyte)(jchar)84/*'T'*/,
   (jbyte)(jchar)84/*'T'*/, (jbyte)(jchar)76/*'L'*/, (jbyte)(jchar)69/*'E'*/,
   (jbyte)(jchar)95/*'_'*/, (jbyte)(jchar)69/*'E'*/, (jbyte)(jchar)78/*'N'*/,
   (jbyte)(jchar)68/*'D'*/, (jbyte)(jchar)73/*'I'*/, (jbyte)(jchar)65/*'A'*/,
   (jbyte)(jchar)78/*'N'*/
 }
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string1_ByteOrdr
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array4_ByteOrdr),
 0, 18, (jint)0xa4d1b0e0L
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string2_ByteOrdr
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array5_ByteOrdr),
 0, 10, (jint)0x2d7fcfdaL
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string3_ByteOrdr
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array6_ByteOrdr),
 0, 13, (jint)0x234d7504L
};

#ifdef CHKALL_java_nio_ByteOrder
#include "jcgochke.h"
#endif

#endif
