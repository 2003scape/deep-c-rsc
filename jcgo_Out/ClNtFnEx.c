/* DO NOT EDIT THIS FILE - it is machine generated (JCGO_116) */

#ifdef JCGO_SEPARATED
#define JCGO_116
#include "jcgortl.h"
#include "Main.h"
#endif

#ifdef JCGO_116

#ifdef CHKALL_java_lang_ClassNotFoundException
#include "jcgobchk.h"
#endif

JCGO_NOSEP_STATIC java_lang_ClassNotFoundException CFASTCALL
java_lang_ClassNotFoundException__this__Ls( java_lang_ClassNotFoundException
 This, java_lang_String s )
{
 {
  (java_lang_Exception__this__Ls((java_lang_Exception)This, s));
  (void)jnull;
 }
 return This;
}

JCGO_NOSEP_INLINE java_lang_ClassNotFoundException CFASTCALL
java_lang_ClassNotFoundException__new__Ls( java_lang_String s )
{
 return java_lang_ClassNotFoundException__this__Ls(
  (java_lang_ClassNotFoundException)jcgo_newObject((jvtable)&java_lang_ClassNotFoundException_methods),
  s);
}

JCGO_NOSEP_INLINE java_lang_ClassNotFoundException CFASTCALL
java_lang_ClassNotFoundException__this__( java_lang_ClassNotFoundException
 This )
{
 {
  (java_lang_ClassNotFoundException__this__Ls((java_lang_ClassNotFoundException)This,
   (java_lang_String)jnull));
 }
 return This;
}

JCGO_NOSEP_INLINE java_lang_Throwable CFASTCALL
java_lang_ClassNotFoundException__getCause__( java_lang_ClassNotFoundException
 This )
{
 {
  return JCGO_FIELD_NZACCESS(This, ex);
 }
}

JCGO_NOSEP_DATA CONST struct java_lang_ClassNotFoundException_methods_s
 java_lang_ClassNotFoundException_methods=
{
 JCGO_CLASSREF_OF(java_lang_ClassNotFoundException__class),
 JCGO_GCJDESCR_ZEROINIT
 OBJT_java_lang_ClassNotFoundException,
 (JCGO_OBJSIZE_T)sizeof(struct java_lang_ClassNotFoundException_s),
 NULL,
 JCGO_CLINIT_INIT(0)
 java_lang_ClassNotFoundException__this__,
 java_lang_Object__equals__Lo,
 java_lang_Object__hashCode__,
 java_lang_Throwable__toString__,
 java_lang_Object__finalize__,
 java_lang_Throwable__getMessage__,
 java_lang_ClassNotFoundException__getCause__
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_ClassNotFoundException_class_s
 java_lang_ClassNotFoundException__class JCGO_THRD_ATTRNONGC=
{
 {
  &java_lang_Class_methods,
  JCGO_MON_INIT
  JCGO_OBJREF_OF(*(java_lang_Object)&java_lang_ClassNotFoundException_methods),
  JCGO_STRREF_OF(jcgo_string1_ClNtFnEx),
  JCGO_CLASSREF_OF(java_lang_Exception__class),
  ((jObjectArr)JCGO_OBJREF_OF(jcgo_array3_Object)),
  0x1
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype98_GmCnnctn jcgo_array2_ClNtFnEx=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 32,
 {
  (jbyte)(jchar)106/*'j'*/, (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)118/*'v'*/,
   (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)46/*'.'*/, (jbyte)(jchar)108/*'l'*/,
   (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)110/*'n'*/, (jbyte)(jchar)103/*'g'*/,
   (jbyte)(jchar)46/*'.'*/, (jbyte)(jchar)67/*'C'*/, (jbyte)(jchar)108/*'l'*/,
   (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)115/*'s'*/, (jbyte)(jchar)115/*'s'*/,
   (jbyte)(jchar)78/*'N'*/, (jbyte)(jchar)111/*'o'*/, (jbyte)(jchar)116/*'t'*/,
   (jbyte)(jchar)70/*'F'*/, (jbyte)(jchar)111/*'o'*/, (jbyte)(jchar)117/*'u'*/,
   (jbyte)(jchar)110/*'n'*/, (jbyte)(jchar)100/*'d'*/, (jbyte)(jchar)69/*'E'*/,
   (jbyte)(jchar)120/*'x'*/, (jbyte)(jchar)99/*'c'*/, (jbyte)(jchar)101/*'e'*/,
   (jbyte)(jchar)112/*'p'*/, (jbyte)(jchar)116/*'t'*/, (jbyte)(jchar)105/*'i'*/,
   (jbyte)(jchar)111/*'o'*/, (jbyte)(jchar)110/*'n'*/
 }
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string1_ClNtFnEx
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array2_ClNtFnEx),
 0, 32, (jint)0xf126985cL
};

#ifdef CHKALL_java_lang_ClassNotFoundException
#include "jcgochke.h"
#endif

#endif
