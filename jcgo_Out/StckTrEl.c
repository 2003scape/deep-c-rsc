/* DO NOT EDIT THIS FILE - it is machine generated (JCGO_116) */

#ifdef JCGO_SEPARATED
#define JCGO_116
#include "jcgortl.h"
#include "Main.h"
#endif

#ifdef JCGO_116

#ifdef CHKALL_java_lang_StackTraceElement
#include "jcgobchk.h"
#endif

JCGO_NOSEP_INLINE jboolean CFASTCALL
java_lang_StackTraceElement__equals__LsLs( java_lang_String o1, java_lang_String
 o2 )
{
 {
  return (jboolean)(o1 == jnull? o2 == jnull : (java_lang_String__equals__Lo(
   o1, (java_lang_Object)o2)));
 }
}

JCGO_NOSEP_INLINE jint CFASTCALL
java_lang_StackTraceElement__hashCode__Ls( java_lang_String o )
{
 {
  return o == jnull? 0 : (java_lang_String__hashCode__(
   o));
 }
}

JCGO_NOSEP_INLINE java_lang_StackTraceElement CFASTCALL
java_lang_StackTraceElement__this__LsILsLsZ( java_lang_StackTraceElement
 This, java_lang_String fileName, java_lang_String className, java_lang_String
 methodName, jint lineNumber, jboolean isNative )
{
 {
  ;
  JCGO_FIELD_NZACCESS(This, fileName)= fileName;
  JCGO_FIELD_NZACCESS(This, lineNumber)= lineNumber;
  JCGO_FIELD_NZACCESS(This, declaringClass)= className;
  JCGO_FIELD_NZACCESS(This, methodName)= methodName;
  JCGO_FIELD_NZACCESS(This, isNative)= (jboolean)isNative;
 }
 return This;
}

JCGO_NOSEP_FRWINL java_lang_StackTraceElement CFASTCALL
java_lang_StackTraceElement__new__LsILsLsZ( java_lang_String fileName,
 java_lang_String className, java_lang_String methodName, jint lineNumber,
 jboolean isNative )
{
 return java_lang_StackTraceElement__this__LsILsLsZ(
  (java_lang_StackTraceElement)jcgo_newObject((jvtable)&java_lang_StackTraceElement_methods),
  fileName, className, methodName, lineNumber, isNative);
}

JCGO_NOSEP_STATIC java_lang_String CFASTCALL
java_lang_StackTraceElement__toString__X( java_lang_StackTraceElement
 This, java_lang_String jcgo_stackparam )
{
 {
  java_lang_StringBuilder sb;
  struct java_lang_StringBuilder_s jcgo_stackobj1;
  sb= java_lang_StringBuilder__this__(
   JCGO_STACKOBJ_NEW(jcgo_stackobj1, java_lang_StringBuilder_methods));
  if (JCGO_FIELD_NZACCESS(This, declaringClass) != jnull)
  {
   (java_lang_StringBuilder__append__Ls(
    sb, JCGO_FIELD_NZACCESS(This, declaringClass)));
   if (JCGO_FIELD_NZACCESS(This, methodName) != jnull)
   {
    (java_lang_StringBuilder__append__C(
     sb, (jchar)46/*'.'*/));
   }
  }
  if (JCGO_FIELD_NZACCESS(This, methodName) != jnull)
  {
   (java_lang_StringBuilder__append__Ls(
    sb, JCGO_FIELD_NZACCESS(This, methodName)));
  }
  (java_lang_StringBuilder__append__Ls(
   sb, JCGO_STRREF_OF(jcgo_string478_Mdclnt)));
  if (JCGO_FIELD_NZACCESS(This, fileName) != jnull)
  {
   (java_lang_StringBuilder__append__Ls(
    sb, JCGO_FIELD_NZACCESS(This, fileName)));
  }
  else
  {
   (java_lang_StringBuilder__append__Ls(
    sb, JCGO_FIELD_NZACCESS(This, isNative)? JCGO_STRREF_OF(jcgo_string2_StckTrEl) :
    JCGO_STRREF_OF(jcgo_string3_StckTrEl)));
  }
  if (JCGO_FIELD_NZACCESS(This, lineNumber) >= 0)
  {
   jObject jcgo_rcvrL1;
   (jcgo_rcvrL1= (jObject)(java_lang_StringBuilder__append__C(
    sb, (jchar)58/*':'*/)), java_lang_StringBuilder__append__I(
    (java_lang_StringBuilder)jcgo_rcvrL1, JCGO_FIELD_NZACCESS(This,
    lineNumber)));
  }
  (java_lang_StringBuilder__append__C(
   sb, (jchar)41/*')'*/));
  return (java_lang_StringBuilder__toString__X(
   sb, jcgo_stackparam));
 }
}

JCGO_NOSEP_FRWINL java_lang_String CFASTCALL
java_lang_StackTraceElement__toString__( java_lang_StackTraceElement
 This )
{
 return java_lang_StackTraceElement__toString__X(This, (java_lang_String)jcgo_newObject((jvtable)&java_lang_String_methods));
}

JCGO_NOSEP_STATIC jboolean CFASTCALL
java_lang_StackTraceElement__equals__Lo( java_lang_StackTraceElement
 This, java_lang_Object o )
{
 {
  java_lang_StackTraceElement e;
  if (!jcgo_instanceOf0(OBJT_java_lang_StackTraceElement, MAXT_java_lang_StackTraceElement,
   (jObject)o))
  {
   return (jboolean)jfalse;
  }
  e= (java_lang_StackTraceElement)o;
  return (jboolean)((java_lang_StackTraceElement__equals__LsLs(
   JCGO_FIELD_NZACCESS(This, fileName), JCGO_FIELD_NZACCESS(e, fileName))) &&
   JCGO_FIELD_NZACCESS(This, lineNumber) == JCGO_FIELD_NZACCESS(e,
   lineNumber) && (java_lang_StackTraceElement__equals__LsLs(
   JCGO_FIELD_NZACCESS(This, declaringClass), JCGO_FIELD_NZACCESS(e,
   declaringClass))) && (java_lang_StackTraceElement__equals__LsLs(
   JCGO_FIELD_NZACCESS(This, methodName), JCGO_FIELD_NZACCESS(e, methodName))));
 }
}

JCGO_NOSEP_STATIC jint CFASTCALL
java_lang_StackTraceElement__hashCode__( java_lang_StackTraceElement
 This )
{
 {
  jint jcgo_rcvrI1;
  return (jcgo_rcvrI1= (jcgo_rcvrI1= (jcgo_rcvrI1= (java_lang_StackTraceElement__hashCode__Ls(
   JCGO_FIELD_NZACCESS(This, fileName))), jcgo_rcvrI1 ^ JCGO_FIELD_NZACCESS(This,
   lineNumber)), jcgo_rcvrI1 ^ (java_lang_StackTraceElement__hashCode__Ls(
   JCGO_FIELD_NZACCESS(This, declaringClass)))), jcgo_rcvrI1 ^ (java_lang_StackTraceElement__hashCode__Ls(
   JCGO_FIELD_NZACCESS(This, methodName))));
 }
}

JCGO_NOSEP_DATA CONST struct java_lang_StackTraceElement_methods_s
 java_lang_StackTraceElement_methods=
{
 JCGO_CLASSREF_OF(java_lang_StackTraceElement__class),
 JCGO_GCJDESCR_INIT(java_lang_StackTraceElement_s, methodName)
 OBJT_java_lang_StackTraceElement,
 (JCGO_OBJSIZE_T)sizeof(struct java_lang_StackTraceElement_s),
 NULL,
 JCGO_CLINIT_INIT(0)
 0,
 java_lang_StackTraceElement__equals__Lo,
 java_lang_StackTraceElement__hashCode__,
 java_lang_StackTraceElement__toString__,
 java_lang_Object__finalize__
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_StackTraceElement_class_s
 java_lang_StackTraceElement__class JCGO_THRD_ATTRNONGC=
{
 {
  &java_lang_Class_methods,
  JCGO_MON_INIT
  JCGO_OBJREF_OF(*(java_lang_Object)&java_lang_StackTraceElement_methods),
  JCGO_STRREF_OF(jcgo_string1_StckTrEl),
  JCGO_CLASSREF_OF(java_lang_Object__class),
  ((jObjectArr)JCGO_OBJREF_OF(jcgo_array3_Object)),
  0x11
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype38_Object jcgo_array4_StckTrEl=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 27,
 {
  (jbyte)(jchar)106/*'j'*/, (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)118/*'v'*/,
   (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)46/*'.'*/, (jbyte)(jchar)108/*'l'*/,
   (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)110/*'n'*/, (jbyte)(jchar)103/*'g'*/,
   (jbyte)(jchar)46/*'.'*/, (jbyte)(jchar)83/*'S'*/, (jbyte)(jchar)116/*'t'*/,
   (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)99/*'c'*/, (jbyte)(jchar)107/*'k'*/,
   (jbyte)(jchar)84/*'T'*/, (jbyte)(jchar)114/*'r'*/, (jbyte)(jchar)97/*'a'*/,
   (jbyte)(jchar)99/*'c'*/, (jbyte)(jchar)101/*'e'*/, (jbyte)(jchar)69/*'E'*/,
   (jbyte)(jchar)108/*'l'*/, (jbyte)(jchar)101/*'e'*/, (jbyte)(jchar)109/*'m'*/,
   (jbyte)(jchar)101/*'e'*/, (jbyte)(jchar)110/*'n'*/, (jbyte)(jchar)116/*'t'*/
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype30_GameShll jcgo_array5_StckTrEl=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 13,
 {
  (jbyte)(jchar)78/*'N'*/, (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)116/*'t'*/,
   (jbyte)(jchar)105/*'i'*/, (jbyte)(jchar)118/*'v'*/, (jbyte)(jchar)101/*'e'*/,
   (jbyte)(jchar)32/*' '*/, (jbyte)(jchar)77/*'M'*/, (jbyte)(jchar)101/*'e'*/,
   (jbyte)(jchar)116/*'t'*/, (jbyte)(jchar)104/*'h'*/, (jbyte)(jchar)111/*'o'*/,
   (jbyte)(jchar)100/*'d'*/
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype63_GmCnnctn jcgo_array6_StckTrEl=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 14,
 {
  (jbyte)(jchar)85/*'U'*/, (jbyte)(jchar)110/*'n'*/, (jbyte)(jchar)107/*'k'*/,
   (jbyte)(jchar)110/*'n'*/, (jbyte)(jchar)111/*'o'*/, (jbyte)(jchar)119/*'w'*/,
   (jbyte)(jchar)110/*'n'*/, (jbyte)(jchar)32/*' '*/, (jbyte)(jchar)83/*'S'*/,
   (jbyte)(jchar)111/*'o'*/, (jbyte)(jchar)117/*'u'*/, (jbyte)(jchar)114/*'r'*/,
   (jbyte)(jchar)99/*'c'*/, (jbyte)(jchar)101/*'e'*/
 }
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string1_StckTrEl
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array4_StckTrEl),
 0, 27, (jint)0x7791f5cbL
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string2_StckTrEl
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array5_StckTrEl),
 0, 13, (jint)0xb9500d0aL
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string3_StckTrEl
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array6_StckTrEl),
 0, 14, (jint)0x579b54f1L
};

#ifdef CHKALL_java_lang_StackTraceElement
#include "jcgochke.h"
#endif

#endif
