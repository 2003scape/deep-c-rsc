/* DO NOT EDIT THIS FILE - it is machine generated (JCGO_116) */

#ifdef JCGO_SEPARATED
#define JCGO_116
#include "jcgortl.h"
#include "Main.h"
#endif

#ifdef JCGO_116

#ifdef CHKALL_java_nio_charset_MalformedInputException
#include "jcgobchk.h"
#endif

JCGO_NOSEP_INLINE java_nio_charset_MalformedInputException CFASTCALL
java_nio_charset_MalformedInputException__this__I( java_nio_charset_MalformedInputException
 This, jint inputLength )
{
 {
  (java_nio_charset_CharacterCodingException__this__((java_nio_charset_CharacterCodingException)This));
  JCGO_FIELD_NZACCESS(This, inputLength)= inputLength;
 }
 return This;
}

JCGO_NOSEP_INLINE java_nio_charset_MalformedInputException CFASTCALL
java_nio_charset_MalformedInputException__new__I( jint inputLength
 )
{
 return java_nio_charset_MalformedInputException__this__I(
  (java_nio_charset_MalformedInputException)jcgo_newObject((jvtable)&java_nio_charset_MalformedInputException_methods),
  inputLength);
}

JCGO_NOSEP_INLINE java_lang_String CFASTCALL
java_nio_charset_MalformedInputException__getMessage__( java_nio_charset_MalformedInputException
 This )
{
 {
  return java_lang_VMSystem__concat0X__LsLs(
   JCGO_STRREF_OF(jcgo_string2_MlfrInEx), (java_lang_String__valueOf__I(
   JCGO_FIELD_NZACCESS(This, inputLength))));
 }
}

JCGO_NOSEP_DATA CONST struct java_nio_charset_MalformedInputException_methods_s
 java_nio_charset_MalformedInputException_methods=
{
 JCGO_CLASSREF_OF(java_nio_charset_MalformedInputException__class),
 JCGO_GCJDESCR_INIT(java_nio_charset_MalformedInputException_s, vmState)
 OBJT_java_nio_charset_MalformedInputException,
 (JCGO_OBJSIZE_T)sizeof(struct java_nio_charset_MalformedInputException_s),
 NULL,
 JCGO_CLINIT_INIT(0)
 0,
 java_lang_Object__equals__Lo,
 java_lang_Object__hashCode__,
 java_lang_Throwable__toString__,
 java_lang_Object__finalize__,
 java_nio_charset_MalformedInputException__getMessage__,
 java_lang_Throwable__getCause__
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_nio_charset_MalformedInputException_class_s
 java_nio_charset_MalformedInputException__class JCGO_THRD_ATTRNONGC=
{
 {
  &java_lang_Class_methods,
  JCGO_MON_INIT
  JCGO_OBJREF_OF(*(java_lang_Object)&java_nio_charset_MalformedInputException_methods),
  JCGO_STRREF_OF(jcgo_string1_MlfrInEx),
  JCGO_CLASSREF_OF(java_nio_charset_CharacterCodingException__class),
  ((jObjectArr)JCGO_OBJREF_OF(jcgo_array3_Object)),
  0x1
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype120_GmCnnctn jcgo_array3_MlfrInEx=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 40,
 {
  (jbyte)(jchar)106/*'j'*/, (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)118/*'v'*/,
   (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)46/*'.'*/, (jbyte)(jchar)110/*'n'*/,
   (jbyte)(jchar)105/*'i'*/, (jbyte)(jchar)111/*'o'*/, (jbyte)(jchar)46/*'.'*/,
   (jbyte)(jchar)99/*'c'*/, (jbyte)(jchar)104/*'h'*/, (jbyte)(jchar)97/*'a'*/,
   (jbyte)(jchar)114/*'r'*/, (jbyte)(jchar)115/*'s'*/, (jbyte)(jchar)101/*'e'*/,
   (jbyte)(jchar)116/*'t'*/, (jbyte)(jchar)46/*'.'*/, (jbyte)(jchar)77/*'M'*/,
   (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)108/*'l'*/, (jbyte)(jchar)102/*'f'*/,
   (jbyte)(jchar)111/*'o'*/, (jbyte)(jchar)114/*'r'*/, (jbyte)(jchar)109/*'m'*/,
   (jbyte)(jchar)101/*'e'*/, (jbyte)(jchar)100/*'d'*/, (jbyte)(jchar)73/*'I'*/,
   (jbyte)(jchar)110/*'n'*/, (jbyte)(jchar)112/*'p'*/, (jbyte)(jchar)117/*'u'*/,
   (jbyte)(jchar)116/*'t'*/, (jbyte)(jchar)69/*'E'*/, (jbyte)(jchar)120/*'x'*/,
   (jbyte)(jchar)99/*'c'*/, (jbyte)(jchar)101/*'e'*/, (jbyte)(jchar)112/*'p'*/,
   (jbyte)(jchar)116/*'t'*/, (jbyte)(jchar)105/*'i'*/, (jbyte)(jchar)111/*'o'*/,
   (jbyte)(jchar)110/*'n'*/
 }
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string1_MlfrInEx
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array3_MlfrInEx),
 0, 40, (jint)0x7ddc97d8L
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string2_MlfrInEx
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array652_VMSstmPr),
 0, 15, (jint)0x85291207L
};

#ifdef CHKALL_java_nio_charset_MalformedInputException
#include "jcgochke.h"
#endif

#endif
