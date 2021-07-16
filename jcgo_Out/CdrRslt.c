/* DO NOT EDIT THIS FILE - it is machine generated (JCGO_116) */

#ifdef JCGO_SEPARATED
#define JCGO_116
#include "jcgortl.h"
#include "Main.h"
#endif

#ifdef JCGO_116

#ifdef CHKALL_java_nio_charset_CoderResult
#include "jcgobchk.h"
#endif

JCGO_NOSEP_STATIC java_nio_charset_CoderResult CFASTCALL
java_nio_charset_CoderResult__this__II( java_nio_charset_CoderResult
 This, jint type, jint length )
{
 {
  ;
  JCGO_FIELD_NZACCESS(This, type)= type;
  JCGO_FIELD_NZACCESS(This, length)= length;
 }
 return This;
}

JCGO_NOSEP_INLINE java_nio_charset_CoderResult CFASTCALL
java_nio_charset_CoderResult__new__II( jint type, jint length )
{
 JCGO_CLINIT_TRIG(java_nio_charset_CoderResult__class);
 return java_nio_charset_CoderResult__this__II(
  (java_nio_charset_CoderResult)jcgo_newObject((jvtable)&java_nio_charset_CoderResult_methods),
  type, length);
}

JCGO_NOSEP_FRWINL jboolean CFASTCALL
java_nio_charset_CoderResult__isError__( java_nio_charset_CoderResult
 This )
{
 {
  return (jboolean)(JCGO_FIELD_NZACCESS(This, length) > 0);
 }
}

JCGO_NOSEP_FRWINL jboolean CFASTCALL
java_nio_charset_CoderResult__isMalformed__( java_nio_charset_CoderResult
 This )
{
 {
  return (jboolean)(JCGO_FIELD_NZACCESS(This, type) == java_nio_charset_CoderResult__TYPE_MALFORMED);
 }
}

JCGO_NOSEP_FRWINL jboolean CFASTCALL
java_nio_charset_CoderResult__isOverflow__( java_nio_charset_CoderResult
 This )
{
 {
  return (jboolean)(JCGO_FIELD_NZACCESS(This, type) == java_nio_charset_CoderResult__TYPE_OVERFLOW);
 }
}

JCGO_NOSEP_FRWINL jboolean CFASTCALL
java_nio_charset_CoderResult__isUnderflow__( java_nio_charset_CoderResult
 This )
{
 {
  return (jboolean)(JCGO_FIELD_NZACCESS(This, type) == java_nio_charset_CoderResult__TYPE_UNDERFLOW);
 }
}

JCGO_NOSEP_STATIC jint CFASTCALL
java_nio_charset_CoderResult__length__( java_nio_charset_CoderResult
 This )
{
 {
  if (JCGO_FIELD_NZACCESS(This, length) <= 0)
  {
   JCGO_THROW_EXC(java_lang_UnsupportedOperationException__new__());
  }
  else
  {
   return JCGO_FIELD_NZACCESS(This, length);
  }
 }
 return (jint)0;
}

JCGO_NOSEP_FRWINL java_nio_charset_CoderResult CFASTCALL
java_nio_charset_CoderResult__malformedForLength__I( jint length )
{
 JCGO_CLINIT_TRIG(java_nio_charset_CoderResult__class);
 {
  return (java_nio_charset_CoderResult_Cache__get__I(
   java_nio_charset_CoderResult__malformedCache, length));
 }
}

JCGO_NOSEP_STATIC void CFASTCALL
java_nio_charset_CoderResult__throwException__( java_nio_charset_CoderResult
 This )
{
 {
  switch (JCGO_FIELD_NZACCESS(This, type))
  {
    case java_nio_charset_CoderResult__TYPE_MALFORMED:
   JCGO_THROW_EXC((java_nio_charset_MalformedInputException__new__I(
    JCGO_FIELD_NZACCESS(This, length))));
    case java_nio_charset_CoderResult__TYPE_OVERFLOW:
   JCGO_THROW_EXC(java_nio_BufferOverflowException__new__());
    case java_nio_charset_CoderResult__TYPE_UNDERFLOW:
   JCGO_THROW_EXC(java_nio_BufferUnderflowException__new__());
    case java_nio_charset_CoderResult__TYPE_UNMAPPABLE:
   JCGO_THROW_EXC((java_nio_charset_UnmappableCharacterException__new__I(
    JCGO_FIELD_NZACCESS(This, length))));
  }
 }
}

JCGO_NOSEP_STATIC java_lang_String CFASTCALL
java_nio_charset_CoderResult__toString__( java_nio_charset_CoderResult
 This )
{
 {
  java_lang_String name;
  jObject jcgo_rcvrL1;
  struct java_lang_StringBuilder_s jcgo_stackobj1;
  struct java_lang_String_s jcgo_stackobj2;
  struct java_lang_String_s jcgo_stackobj3;
  struct java_lang_String_s jcgo_stackobj4;
  name= ((java_lang_String)JCGO_ARRAY_NZLACCESS(java_nio_charset_CoderResult__names,
   JCGO_FIELD_NZACCESS(This, type)));
  return (JCGO_FIELD_NZACCESS(This, length) > 0)? (jcgo_rcvrL1= (jObject)(jcgo_rcvrL1=
   (jObject)java_lang_StringBuilder__append__Ls(
   java_lang_StringBuilder__append__Ls(
   java_lang_StringBuilder__this__(
   JCGO_STACKOBJ_NEW(jcgo_stackobj1, java_lang_StringBuilder_methods)),
   name), (java_lang_String__valueOf__CX(
   (jchar)91/*'['*/, JCGO_STACKOBJ_NEW(jcgo_stackobj2, java_lang_String_methods)))),
   java_lang_StringBuilder__append__Ls(
   (java_lang_StringBuilder)jcgo_rcvrL1, (java_lang_String__valueOf__IX(
   JCGO_FIELD_NZACCESS(This, length), JCGO_STACKOBJ_NEW(jcgo_stackobj3,
   java_lang_String_methods))))), java_lang_String__new__L5dy9e(
   java_lang_StringBuilder__append__Ls(
   (java_lang_StringBuilder)jcgo_rcvrL1, (java_lang_String__valueOf__CX(
   (jchar)93/*']'*/, JCGO_STACKOBJ_NEW(jcgo_stackobj4, java_lang_String_methods)))))) :
   name;
 }
}

JCGO_NOSEP_FRWINL java_nio_charset_CoderResult CFASTCALL
java_nio_charset_CoderResult__unmappableForLength__I( jint length
 )
{
 JCGO_CLINIT_TRIG(java_nio_charset_CoderResult__class);
 {
  return (java_nio_charset_CoderResult_Cache__get__I(
   java_nio_charset_CoderResult__unmappableCache, length));
 }
}

JCGO_NOSEP_STATIC void CFASTCALL
java_nio_charset_CoderResult__class__0( void )
{
 JCGO_CLINIT_BEGIN(java_nio_charset_CoderResult__class);
 java_nio_charset_CoderResult__OVERFLOW= (java_nio_charset_CoderResult__this__II(
  (java_nio_charset_CoderResult)jcgo_newObject((jvtable)&java_nio_charset_CoderResult_methods),
  java_nio_charset_CoderResult__TYPE_OVERFLOW, 0));
 java_nio_charset_CoderResult__UNDERFLOW= (java_nio_charset_CoderResult__this__II(
  (java_nio_charset_CoderResult)jcgo_newObject((jvtable)&java_nio_charset_CoderResult_methods),
  java_nio_charset_CoderResult__TYPE_UNDERFLOW, 0));
 java_nio_charset_CoderResult__malformedCache= (java_nio_charset_CoderResult_Cache)java_nio_charset_CoderResult_1__new__();
 java_nio_charset_CoderResult__unmappableCache= (java_nio_charset_CoderResult_Cache)java_nio_charset_CoderResult_2__new__();
 JCGO_CLINIT_DONE(java_nio_charset_CoderResult__class);
}

JCGO_NOSEP_DATA CONST struct java_nio_charset_CoderResult_methods_s
 java_nio_charset_CoderResult_methods=
{
 JCGO_CLASSREF_OF(java_nio_charset_CoderResult__class),
 JCGO_GCJDESCR_ZEROINIT
 OBJT_java_nio_charset_CoderResult,
 -(JCGO_OBJSIZE_T)sizeof(struct java_nio_charset_CoderResult_s),
 NULL,
 JCGO_CLINIT_INIT(java_nio_charset_CoderResult__class__0)
 0,
 java_lang_Object__equals__Lo,
 java_lang_Object__hashCode__,
 java_nio_charset_CoderResult__toString__,
 java_lang_Object__finalize__
};

JCGO_NOSEP_DATA struct java_nio_charset_CoderResult_class_s java_nio_charset_CoderResult__class
 ATTRIBNONGC=
{
 {
  &java_lang_Class_methods,
  JCGO_MON_INIT
  JCGO_OBJREF_OF(*(java_lang_Object)&java_nio_charset_CoderResult_methods),
  JCGO_STRREF_OF(jcgo_string1_CdrRslt),
  JCGO_CLASSREF_OF(java_lang_Object__class),
  ((jObjectArr)JCGO_OBJREF_OF(jcgo_array3_Object)),
  0x1c1
 }
};

JCGO_NOSEP_GCDATA java_nio_charset_CoderResult java_nio_charset_CoderResult__OVERFLOW
 ATTRIBGCBSS= jnull;

JCGO_NOSEP_GCDATA java_nio_charset_CoderResult java_nio_charset_CoderResult__UNDERFLOW
 ATTRIBGCBSS= jnull;

JCGO_NOSEP_GCDATA java_nio_charset_CoderResult_Cache java_nio_charset_CoderResult__malformedCache
 ATTRIBGCBSS= jnull;

JCGO_NOSEP_GCDATA java_nio_charset_CoderResult_Cache java_nio_charset_CoderResult__unmappableCache
 ATTRIBGCBSS= jnull;

JCGO_NOSEP_DATA CONST jcgo_arrtype6_CdrRslt jcgo_array6_CdrRslt=
{
 (jvtable)&jObjectArr_methods,
 JCGO_MON_INIT
 4,
 JCGO_CLASSREF_OF(java_lang_String__class),
 {
  (jObject)JCGO_STRREF_OF(jcgo_string2_CdrRslt), (jObject)JCGO_STRREF_OF(jcgo_string3_CdrRslt),
   (jObject)JCGO_STRREF_OF(jcgo_string4_CdrRslt), (jObject)JCGO_STRREF_OF(jcgo_string5_CdrRslt)
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype31_GameShll jcgo_array7_CdrRslt=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 8,
 {
  (jbyte)(jchar)79/*'O'*/, (jbyte)(jchar)86/*'V'*/, (jbyte)(jchar)69/*'E'*/,
   (jbyte)(jchar)82/*'R'*/, (jbyte)(jchar)70/*'F'*/, (jbyte)(jchar)76/*'L'*/,
   (jbyte)(jchar)79/*'O'*/, (jbyte)(jchar)87/*'W'*/
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype28_GameShll jcgo_array8_CdrRslt=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 9,
 {
  (jbyte)(jchar)85/*'U'*/, (jbyte)(jchar)78/*'N'*/, (jbyte)(jchar)68/*'D'*/,
   (jbyte)(jchar)69/*'E'*/, (jbyte)(jchar)82/*'R'*/, (jbyte)(jchar)70/*'F'*/,
   (jbyte)(jchar)76/*'L'*/, (jbyte)(jchar)79/*'O'*/, (jbyte)(jchar)87/*'W'*/
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype32_GameShll jcgo_array9_CdrRslt=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 10,
 {
  (jbyte)(jchar)85/*'U'*/, (jbyte)(jchar)78/*'N'*/, (jbyte)(jchar)77/*'M'*/,
   (jbyte)(jchar)65/*'A'*/, (jbyte)(jchar)80/*'P'*/, (jbyte)(jchar)80/*'P'*/,
   (jbyte)(jchar)65/*'A'*/, (jbyte)(jchar)66/*'B'*/, (jbyte)(jchar)76/*'L'*/,
   (jbyte)(jchar)69/*'E'*/
 }
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string1_CdrRslt
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array535_VMSstmPr),
 0, 28, (jint)0xbe9703aL
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string2_CdrRslt
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array402_VMSstmPr),
 0, 9, (jint)0x290e4b9bL
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string3_CdrRslt
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array7_CdrRslt),
 0, 8, (jint)0x4e37a402L
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string4_CdrRslt
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array8_CdrRslt),
 0, 9, (jint)0x68df27e6L
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string5_CdrRslt
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array9_CdrRslt),
 0, 10, (jint)0x83758387L
};

#ifdef CHKALL_java_nio_charset_CoderResult
#include "jcgochke.h"
#endif

#endif