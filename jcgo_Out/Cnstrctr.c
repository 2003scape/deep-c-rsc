/* DO NOT EDIT THIS FILE - it is machine generated (JCGO_116) */

#ifdef JCGO_SEPARATED
#define JCGO_116
#include "jcgortl.h"
#include "Main.h"
#endif

#ifdef JCGO_116

#ifdef CHKALL_java_lang_reflect_Constructor
#include "jcgobchk.h"
#endif

JCGO_NOSEP_FRWINL jint CFASTCALL
java_lang_reflect_Constructor__getModifiers__( java_lang_reflect_Constructor
 This )
{
 {
  return (java_lang_reflect_VMConstructor__getModifiersInternal__L1693g(
   This)) & java_lang_reflect_Constructor__CONSTRUCTOR_MODIFIERS;
 }
}

JCGO_NOSEP_STATIC java_lang_reflect_Constructor CFASTCALL
java_lang_reflect_Constructor__this__LcILcALcAILs( java_lang_reflect_Constructor
 This, java_lang_Class declaringClass, jObjectArr parameterTypes, jObjectArr
 exceptionTypes, java_lang_String signature, jint slot, jint modifiers
 )
{
 {
  (java_lang_reflect_AccessibleObject__this__((java_lang_reflect_AccessibleObject)This));
  if (declaringClass == jnull || parameterTypes == jnull || exceptionTypes ==
   jnull)
  {
   JCGO_THROW_EXC(java_lang_NullPointerException__new__());
  }
  JCGO_FIELD_NZACCESS(This, clazz)= declaringClass;
  JCGO_FIELD_NZACCESS(This, slot)= slot;
  JCGO_FIELD_NZACCESS(This, parameterTypes)= parameterTypes;
  JCGO_FIELD_NZACCESS(This, exceptionTypes)= exceptionTypes;
  JCGO_FIELD_NZACCESS(This, modifiers)= modifiers;
  (void)signature;
 }
 return This;
}

JCGO_NOSEP_FRWINL java_lang_reflect_Constructor CFASTCALL
java_lang_reflect_Constructor__new__LcILcALcAILs( java_lang_Class
 declaringClass, jObjectArr parameterTypes, jObjectArr exceptionTypes,
 java_lang_String signature, jint slot, jint modifiers )
{
 return java_lang_reflect_Constructor__this__LcILcALcAILs(
  (java_lang_reflect_Constructor)jcgo_newObject((jvtable)&java_lang_reflect_Constructor_methods),
  declaringClass, parameterTypes, exceptionTypes, signature, slot,
  modifiers);
}

JCGO_NOSEP_STATIC java_lang_Class CFASTCALL
java_lang_reflect_Constructor__getDeclaringClass__( java_lang_reflect_Constructor
 This )
{
 {
  if (JCGO_FIELD_NZACCESS(This, clazz) == jnull)
  {
   JCGO_THROW_EXC(java_lang_InternalError__new__());
  }
  return JCGO_FIELD_NZACCESS(This, clazz);
 }
}

JCGO_NOSEP_STATIC jboolean CFASTCALL
java_lang_reflect_Constructor__equals__Lo( java_lang_reflect_Constructor
 This, java_lang_Object obj )
{
 {
  java_lang_reflect_Constructor constructor_8w9;
  jObject jcgo_rcvrL1;
  if (obj == (java_lang_Object)This)
  {
   return (jboolean)jtrue;
  }
  if (!jcgo_instanceOf0(OBJT_java_lang_reflect_Constructor, MAXT_java_lang_reflect_Constructor,
   (jObject)obj))
  {
   return (jboolean)jfalse;
  }
  constructor_8w9= (java_lang_reflect_Constructor)obj;
  return (jboolean)((jcgo_rcvrL1= (jObject)(java_lang_reflect_Constructor__getDeclaringClass__(
   This)), (java_lang_Class)jcgo_rcvrL1 == (java_lang_reflect_Constructor__getDeclaringClass__(
   constructor_8w9))) && (jcgo_rcvrL1= (jObject)(java_lang_reflect_VMConstructor__getParameterTypesInternal__L1693g(
   This)), java_lang_reflect_Constructor__equalTypes__LcALcA(
   (jObjectArr)jcgo_rcvrL1, (java_lang_reflect_VMConstructor__getParameterTypesInternal__L1693g(
   constructor_8w9)))));
 }
}

JCGO_NOSEP_INLINE jint CFASTCALL
java_lang_reflect_Constructor__hashCode__( java_lang_reflect_Constructor
 This )
{
 {
  return (java_lang_String__hashCode__(
   (java_lang_Class__getName__(
   (java_lang_reflect_Constructor__getDeclaringClass__(
   This))))));
 }
}

JCGO_NOSEP_STATIC java_lang_String CFASTCALL
java_lang_reflect_Constructor__toString__( java_lang_reflect_Constructor
 This )
{
 {
  java_lang_StringBuilder sb;
  jObjectArr types;
  jint modifiers;
  struct java_lang_StringBuilder_s jcgo_stackobj1;
  sb= (java_lang_StringBuilder__this__I(
   JCGO_STACKOBJ_NEW(jcgo_stackobj1, java_lang_StringBuilder_methods),
   (jint)128));
  modifiers= (java_lang_reflect_Constructor__getModifiers__(
   This));
  if (modifiers != 0)
  {
   jObject jcgo_rcvrL1;
   (jcgo_rcvrL1= (jObject)(java_lang_reflect_Modifier__toString__IL5dy9e(
    sb, modifiers)), JCGO_CALL_FINALF((java_lang_StringBuilder)jcgo_rcvrL1)
    java_lang_StringBuilder__append__C(
    (java_lang_StringBuilder)jcgo_rcvrL1, (jchar)32/*' '*/));
  }
  (java_lang_StringBuilder__append__C(
   (java_lang_StringBuilder__append__Ls(
   sb, (java_lang_Class__getName__(
   (java_lang_reflect_Constructor__getDeclaringClass__(
   This)))))), (jchar)40/*'('*/));
  types= (java_lang_reflect_VMConstructor__getParameterTypesInternal__L1693g(
   This));
  {
   jint i;
   i= 0;
   for (; i < JCGO_ARRAY_LENGTH(types); i++)
   {
    if (i > 0)
    {
     (java_lang_StringBuilder__append__C(
      sb, (jchar)44/*','*/));
    }
    (java_lang_reflect_Constructor__appendTypeName__LcL5dy9e(
     ((java_lang_Class)JCGO_ARRAY_NZLACCESS(types, i)), sb));
   }
  }
  (java_lang_StringBuilder__append__C(
   sb, (jchar)41/*')'*/));
  types= (java_lang_reflect_VMConstructor__getExceptionTypesInternal__L1693g(
   This));
  if (JCGO_ARRAY_LENGTH(types) != 0)
  {
   (java_lang_StringBuilder__append__Ls(
    sb, JCGO_STRREF_OF(jcgo_string2_Cnstrctr)));
   {
    jint i;
    i= 0;
    for (; i < JCGO_ARRAY_NZLENGTH(types); i++)
    {
     jObject jcgo_rcvrL1;
     if (i > 0)
     {
      (java_lang_StringBuilder__append__C(
       sb, (jchar)44/*','*/));
     }
     (java_lang_StringBuilder__append__Ls(
      sb, (jcgo_rcvrL1= (jObject)((java_lang_Class)JCGO_ARRAY_NZLACCESS(types,
      i)), JCGO_CALL_FINALF((java_lang_Class)jcgo_rcvrL1) java_lang_Class__getName__(
      (java_lang_Class)jcgo_rcvrL1))));
    }
   }
  }
  return (java_lang_StringBuilder__toString__(
   sb));
 }
}

JCGO_NOSEP_STATIC java_lang_StringBuilder CFASTCALL
java_lang_reflect_Constructor__appendTypeName__LcL5dy9e( java_lang_Class
 aclass, java_lang_StringBuilder sb )
{
 {
  jint dims;
  for (dims= 0; (JCGO_CALL_FINALF(aclass) java_lang_Class__isArray__(
   aclass)); dims++)
  {
   aclass= (java_lang_Class__getComponentType__(
    aclass));
  }
  (JCGO_CALL_FINALF(sb) java_lang_StringBuilder__append__Ls(
   sb, (JCGO_CALL_FINALF(aclass) java_lang_Class__getName__(
   aclass))));
  while (dims-- > 0)
  {
   (java_lang_StringBuilder__append__Ls(
    sb, JCGO_STRREF_OF(jcgo_string2_EmptyMap)));
  }
  return sb;
 }
}

JCGO_NOSEP_STATIC jboolean CFASTCALL
java_lang_reflect_Constructor__equalTypes__LcALcA( jObjectArr types,
 jObjectArr types2 )
{
 {
  jint count;
  count= JCGO_ARRAY_LENGTH(types);
  if (JCGO_ARRAY_LENGTH(types2) != count)
  {
   return (jboolean)jfalse;
  }
  {
   jint i;
   i= 0;
   for (; i < count; i++)
   {
    jObject jcgo_rcvrL1;
    if ((jcgo_rcvrL1= (jObject)((java_lang_Class)JCGO_ARRAY_NZLACCESS(types,
     i)), (java_lang_Class)jcgo_rcvrL1 != ((java_lang_Class)JCGO_ARRAY_NZLACCESS(types2,
     i))))
    {
     return (jboolean)jfalse;
    }
   }
  }
  return (jboolean)jtrue;
 }
}

JCGO_NOSEP_DATA CONST struct java_lang_reflect_Constructor_methods_s
 java_lang_reflect_Constructor_methods=
{
 JCGO_CLASSREF_OF(java_lang_reflect_Constructor__class),
 JCGO_GCJDESCR_INIT(java_lang_reflect_Constructor_s, exceptionTypes)
 OBJT_java_lang_reflect_Constructor,
 (JCGO_OBJSIZE_T)sizeof(struct java_lang_reflect_Constructor_s),
 NULL,
 JCGO_CLINIT_INIT(0)
 0,
 java_lang_reflect_Constructor__equals__Lo,
 java_lang_reflect_Constructor__hashCode__,
 java_lang_reflect_Constructor__toString__,
 java_lang_Object__finalize__
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_reflect_Constructor_class_s
 java_lang_reflect_Constructor__class JCGO_THRD_ATTRNONGC=
{
 {
  &java_lang_Class_methods,
  JCGO_MON_INIT
  JCGO_OBJREF_OF(*(java_lang_Object)&java_lang_reflect_Constructor_methods),
  JCGO_STRREF_OF(jcgo_string1_Cnstrctr),
  JCGO_CLASSREF_OF(java_lang_reflect_AccessibleObject__class),
  ((jObjectArr)JCGO_OBJREF_OF(jcgo_array3_Cnstrctr)),
  0x11
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype2_GameMdl jcgo_array3_Cnstrctr=
{
 (jvtable)&jObjectArr_methods,
 JCGO_MON_INIT
 1,
 JCGO_CLASSREF_OF(java_lang_Class__class),
 {
  (jObject)JCGO_CLASSREF_OF(java_lang_reflect_Member__class)
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype86_GmCnnctn jcgo_array4_Cnstrctr=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 29,
 {
  (jbyte)(jchar)106/*'j'*/, (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)118/*'v'*/,
   (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)46/*'.'*/, (jbyte)(jchar)108/*'l'*/,
   (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)110/*'n'*/, (jbyte)(jchar)103/*'g'*/,
   (jbyte)(jchar)46/*'.'*/, (jbyte)(jchar)114/*'r'*/, (jbyte)(jchar)101/*'e'*/,
   (jbyte)(jchar)102/*'f'*/, (jbyte)(jchar)108/*'l'*/, (jbyte)(jchar)101/*'e'*/,
   (jbyte)(jchar)99/*'c'*/, (jbyte)(jchar)116/*'t'*/, (jbyte)(jchar)46/*'.'*/,
   (jbyte)(jchar)67/*'C'*/, (jbyte)(jchar)111/*'o'*/, (jbyte)(jchar)110/*'n'*/,
   (jbyte)(jchar)115/*'s'*/, (jbyte)(jchar)116/*'t'*/, (jbyte)(jchar)114/*'r'*/,
   (jbyte)(jchar)117/*'u'*/, (jbyte)(jchar)99/*'c'*/, (jbyte)(jchar)116/*'t'*/,
   (jbyte)(jchar)111/*'o'*/, (jbyte)(jchar)114/*'r'*/
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype31_GameShll jcgo_array5_Cnstrctr=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 8,
 {
  (jbyte)(jchar)32/*' '*/, (jbyte)(jchar)116/*'t'*/, (jbyte)(jchar)104/*'h'*/,
   (jbyte)(jchar)114/*'r'*/, (jbyte)(jchar)111/*'o'*/, (jbyte)(jchar)119/*'w'*/,
   (jbyte)(jchar)115/*'s'*/, (jbyte)(jchar)32/*' '*/
 }
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string1_Cnstrctr
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array4_Cnstrctr),
 0, 29, (jint)0xdc382475L
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string2_Cnstrctr
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array5_Cnstrctr),
 0, 8, (jint)0xac6b2f53L
};

#ifdef CHKALL_java_lang_reflect_Constructor
#include "jcgochke.h"
#endif

#endif