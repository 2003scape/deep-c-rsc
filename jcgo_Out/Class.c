/* DO NOT EDIT THIS FILE - it is machine generated (JCGO_116) */

#ifdef JCGO_SEPARATED
#define JCGO_116
#include "jcgortl.h"
#include "Main.h"
#endif

#ifdef JCGO_116

#ifdef CHKALL_java_lang_Class
#include "jcgobchk.h"
#endif

JCGO_NOSEP_INLINE void CFASTCALL
java_lang_Class__memberAccessCheck__I( java_lang_Class This, jint
 which )
{
 {
  java_lang_SecurityManager sm;
  sm= java_lang_SecurityManager__current;
  if (sm != jnull)
  {
   (java_lang_SecurityManager__checkMemberAccess__LcI(
    sm, This, which));
  }
 }
}

JCGO_NOSEP_INLINE void CFASTCALL
java_lang_Class__setAccessible__L31n9m( java_lang_reflect_AccessibleObject
 obj )
{
 {
  struct java_lang_Class_1_s jcgo_stackobj1;
  (java_security_AccessController__doPrivileged__L21epy(
   (java_security_PrivilegedAction)(java_lang_Class_1__this__L31n9m(
   JCGO_STACKOBJ_NEW(jcgo_stackobj1, java_lang_Class_1_methods), obj))));
 }
}

JCGO_NOSEP_INLINE jboolean CFASTCALL
java_lang_Class__isPrimitive__( java_lang_Class This )
{
 {
  return (jboolean)(JCGO_FIELD_NZACCESS(This, modifiers) == (java_lang_Class__MODIFIER_PUBLIC |
   java_lang_Class__MODIFIER_FINAL | java_lang_Class__MODIFIER_ABSTRACT) &&
   JCGO_FIELD_NZACCESS(This, superclass) == jnull);
 }
}

JCGO_NOSEP_INLINE jboolean CFASTCALL
java_lang_Class__isInterface__( java_lang_Class This )
{
 {
  return (jboolean)((JCGO_FIELD_NZACCESS(This, modifiers) & java_lang_Class__MODIFIER_INTERFACE) !=
   0);
 }
}

JCGO_NOSEP_INLINE java_lang_Class CFASTCALL
java_lang_Class__this__LoLsLcLcAI( java_lang_Class This, java_lang_Object
 vmdata, java_lang_String name, java_lang_Class superclass, jObjectArr
 interfaces, jint modifiers )
{
 {
  ;
  JCGO_FIELD_NZACCESS(This, vmdata)= vmdata;
  JCGO_FIELD_NZACCESS(This, name)= name;
  JCGO_FIELD_NZACCESS(This, superclass)= superclass;
  JCGO_FIELD_NZACCESS(This, interfaces)= interfaces;
  JCGO_FIELD_NZACCESS(This, modifiers)= modifiers;
 }
 return This;
}

JCGO_NOSEP_INLINE java_lang_Class CFASTCALL
java_lang_Class__new__LoLsLcLcAI( java_lang_Object vmdata, java_lang_String
 name, java_lang_Class superclass, jObjectArr interfaces, jint modifiers
 )
{
 return java_lang_Class__this__LoLsLcLcAI(
  (java_lang_Class)jcgo_newObject((jvtable)&java_lang_Class_methods),
  vmdata, name, superclass, interfaces, modifiers);
}

JCGO_NOSEP_INLINE java_lang_Class CFASTCALL
java_lang_Class__forName__LsZL09rb1( java_lang_String name, java_lang_ClassLoader
 loader, jboolean initialize )
{
 {
  if (loader == jnull)
  {
   java_lang_SecurityManager sm;
   sm= java_lang_SecurityManager__current;
   if (sm != jnull && (gnu_classpath_VMStackWalker__getCallingClassLoader__()) !=
    jnull)
   {
    struct java_lang_RuntimePermission_s jcgo_stackobj1;
    (java_lang_SecurityManager__checkPermission__L37xkq(
     sm, (java_security_Permission)(java_lang_RuntimePermission__this__Ls(
     JCGO_STACKOBJ_NEW(jcgo_stackobj1, java_lang_RuntimePermission_methods),
     JCGO_STRREF_OF(jcgo_string2_Class)))));
   }
  }
  return (java_lang_VMClass__forName__LsZL09rb1(
   name, loader, (jboolean)initialize));
 }
}

JCGO_NOSEP_STATIC java_lang_ClassLoader CFASTCALL
java_lang_Class__getClassLoader__( java_lang_Class This )
{
 {
  java_lang_ClassLoader loader;
  java_lang_SecurityManager sm;
  if ((java_lang_Class__isPrimitive__(
   This)))
  {
   return (java_lang_ClassLoader)jnull;
  }
  loader= (java_lang_VMClass__getClassLoader__Lc(
   This));
  sm= java_lang_SecurityManager__current;
  if (loader != jnull && sm != jnull)
  {
   java_lang_ClassLoader cl;
   cl= (gnu_classpath_VMStackWalker__getCallingClassLoader__());
   if (cl != jnull && !(java_lang_ClassLoader__isAncestorOf__L09rb1(
    cl, loader)))
   {
    struct java_lang_RuntimePermission_s jcgo_stackobj1;
    (java_lang_SecurityManager__checkPermission__L37xkq(
     sm, (java_security_Permission)(java_lang_RuntimePermission__this__Ls(
     JCGO_STACKOBJ_NEW(jcgo_stackobj1, java_lang_RuntimePermission_methods),
     JCGO_STRREF_OF(jcgo_string2_Class)))));
   }
  }
  return loader;
 }
}

JCGO_NOSEP_INLINE java_lang_Class CFASTCALL
java_lang_Class__getComponentType__( java_lang_Class This )
{
 {
  return (java_lang_VMClass__getComponentType__Lc(
   This));
 }
}

JCGO_NOSEP_INLINE jint CFASTCALL
java_lang_Class__getModifiers__( java_lang_Class This )
{
 {
  return (java_lang_VMClass__getModifiers__LcZ(
   This, (jboolean)jfalse)) & (java_lang_reflect_Modifier__PUBLIC |
   java_lang_reflect_Modifier__PROTECTED | java_lang_reflect_Modifier__PRIVATE |
   java_lang_reflect_Modifier__FINAL | java_lang_reflect_Modifier__STATIC0 |
   java_lang_reflect_Modifier__ABSTRACT | java_lang_reflect_Modifier__INTERFACE |
   java_lang_Class__ANNOTATION | java_lang_Class__ENUM);
 }
}

JCGO_NOSEP_STATIC java_lang_String CFASTCALL
java_lang_Class__getName__( java_lang_Class This )
{
 {
  java_lang_String name;
  if ((name= JCGO_FIELD_NZACCESS(This, name)) == jnull)
  {
   name= JCGO_STRREF_OF(jcgo_string3_Class);
  }
  return name;
 }
}

JCGO_NOSEP_INLINE java_lang_Class CFASTCALL
java_lang_Class__getSuperclass__( java_lang_Class This )
{
 {
  return (java_lang_VMClass__getSuperclass__Lc(
   This));
 }
}

JCGO_NOSEP_INLINE jboolean CFASTCALL
java_lang_Class__isArray__( java_lang_Class This )
{
 {
  return (jboolean)(java_lang_VMClass__isArray__Lc(
   This));
 }
}

JCGO_NOSEP_INLINE jboolean CFASTCALL
java_lang_Class__isAssignableFrom__Lc( java_lang_Class This, java_lang_Class
 aclass )
{
 {
  return (jboolean)(java_lang_VMClass__isAssignableFrom__LcLc(
   This, aclass));
 }
}

JCGO_NOSEP_INLINE java_lang_Object CFASTCALL
java_lang_Class__newInstance__( java_lang_Class This )
{
 {
  java_lang_reflect_Constructor ctor;
  jint mods;
  (java_lang_Class__memberAccessCheck__I(
   This, java_lang_reflect_Member__PUBLIC));
  ctor= (java_lang_VMClass__getBasicConstructorOf__Lc(
   This));
  if (ctor == jnull)
  {
   ctor= (java_lang_reflect_VMAccessorJavaLangReflect__getDeclaredConstructorVMMethod__LcLcA(
    This, (jObjectArr)jnull));
   if (ctor == jnull)
   {
    JCGO_THROW_EXC((java_lang_InstantiationException__new__Ls(
     (java_lang_Class__getName__(
     This)))));
   }
   if (!(java_lang_reflect_Modifier__isPublic__I(
    (java_lang_reflect_Constructor__getModifiers__(
    ctor)))) || !(java_lang_reflect_Modifier__isPublic__I(
    (java_lang_VMClass__getModifiers__LcZ(
    This, (jboolean)jtrue)))))
   {
    (java_lang_Class__setAccessible__L31n9m(
     (java_lang_reflect_AccessibleObject)ctor));
   }
   (java_lang_VMClass__setBasicConstructorOf__LcL1693g(
    This, ctor));
  }
  mods= (java_lang_reflect_Constructor__getModifiers__(
   ctor));
  if (!(java_lang_reflect_Modifier__isPublic__I(
   mods)) || !(java_lang_reflect_Modifier__isPublic__I(
   (java_lang_VMClass__getModifiers__LcZ(
   This, (jboolean)jtrue)))))
  {
   java_lang_Class caller;
   jObject jcgo_rcvrL1;
   caller= (gnu_classpath_VMStackWalker__getCallingClass__());
   if (caller != jnull && caller != This && ((java_lang_reflect_Modifier__isPrivate__I(
    mods)) || (jcgo_rcvrL1= (jObject)(java_lang_Class__getClassLoader__(
    This)), (java_lang_ClassLoader)jcgo_rcvrL1 != (java_lang_Class__getClassLoader__(
    caller))) || !(jcgo_rcvrL1= (jObject)(java_lang_Class__getPackagePortion__Ls(
    (java_lang_Class__getName__(
    This)))), java_lang_String__equals__Lo(
    (java_lang_String)jcgo_rcvrL1, (java_lang_Object)(java_lang_Class__getPackagePortion__Ls(
    (java_lang_Class__getName__(
    caller))))))))
   {
    JCGO_THROW_EXC((java_lang_IllegalAccessException__new__Ls(
     (java_lang_String__concat__Ls(
     (java_lang_Class__getName__(
     This)), JCGO_STRREF_OF(jcgo_string4_Class))))));
   }
  }
  return (java_lang_reflect_VMAccessorJavaLangReflect__allocateObjectVMConstructor__L1693gLc(
   ctor, This));
 }
}

JCGO_NOSEP_STATIC java_lang_String CFASTCALL
java_lang_Class__toString__( java_lang_Class This )
{
 {
  java_lang_String className;
  className= (java_lang_Class__getName__(
   This));
  return (java_lang_Class__isPrimitive__(
   This))? className : (java_lang_String__concat__Ls(
   ((java_lang_Class__isInterface__(
   This))? JCGO_STRREF_OF(jcgo_string5_Class) : JCGO_STRREF_OF(jcgo_string6_Class)),
   className));
 }
}

JCGO_NOSEP_STATIC java_lang_String CFASTCALL
java_lang_Class__getPackagePortion__Ls( java_lang_String className
 )
{
 {
  jint lastInd;
  lastInd= (JCGO_CALL_FINALF(className) java_lang_String__lastIndexOf__I(
   className, (jchar)46/*'.'*/));
  return lastInd > 0? (java_lang_String__substring__II(
   className, 0, lastInd)) : JCGO_STRREF_OF(jcgo_string3_String6D);
 }
}

JCGO_NOSEP_DATA CONST struct java_lang_Class_methods_s java_lang_Class_methods=
{
 JCGO_CLASSREF_OF(java_lang_Class__class),
 JCGO_GCJDESCR_INIT(java_lang_Class_s, interfaces)
 OBJT_java_lang_Class,
 (JCGO_OBJSIZE_T)sizeof(struct java_lang_Class_s),
 NULL,
 JCGO_CLINIT_INIT(0)
 0,
 java_lang_Object__equals__Lo,
 java_lang_Object__hashCode__,
 java_lang_Class__toString__,
 java_lang_Object__finalize__
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_Class_class_s java_lang_Class__class
 JCGO_THRD_ATTRNONGC=
{
 {
  &java_lang_Class_methods,
  JCGO_MON_INIT
  JCGO_OBJREF_OF(*(java_lang_Object)&java_lang_Class_methods),
  JCGO_STRREF_OF(jcgo_string1_Class),
  JCGO_CLASSREF_OF(java_lang_Object__class),
  ((jObjectArr)JCGO_OBJREF_OF(jcgo_array3_Object)),
  0x11
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype812_Mdclnt jcgo_array7_Class=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 52,
 {
  (jbyte)(jchar)67/*'C'*/, (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)110/*'n'*/,
   (jbyte)(jchar)110/*'n'*/, (jbyte)(jchar)111/*'o'*/, (jbyte)(jchar)116/*'t'*/,
   (jbyte)(jchar)32/*' '*/, (jbyte)(jchar)109/*'m'*/, (jbyte)(jchar)97/*'a'*/,
   (jbyte)(jchar)107/*'k'*/, (jbyte)(jchar)101/*'e'*/, (jbyte)(jchar)32/*' '*/,
   (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)32/*' '*/, (jbyte)(jchar)106/*'j'*/,
   (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)118/*'v'*/, (jbyte)(jchar)97/*'a'*/,
   (jbyte)(jchar)46/*'.'*/, (jbyte)(jchar)108/*'l'*/, (jbyte)(jchar)97/*'a'*/,
   (jbyte)(jchar)110/*'n'*/, (jbyte)(jchar)103/*'g'*/, (jbyte)(jchar)46/*'.'*/,
   (jbyte)(jchar)67/*'C'*/, (jbyte)(jchar)108/*'l'*/, (jbyte)(jchar)97/*'a'*/,
   (jbyte)(jchar)115/*'s'*/, (jbyte)(jchar)115/*'s'*/, (jbyte)(jchar)32/*' '*/,
   (jbyte)(jchar)99/*'c'*/, (jbyte)(jchar)111/*'o'*/, (jbyte)(jchar)110/*'n'*/,
   (jbyte)(jchar)115/*'s'*/, (jbyte)(jchar)116/*'t'*/, (jbyte)(jchar)114/*'r'*/,
   (jbyte)(jchar)117/*'u'*/, (jbyte)(jchar)99/*'c'*/, (jbyte)(jchar)116/*'t'*/,
   (jbyte)(jchar)111/*'o'*/, (jbyte)(jchar)114/*'r'*/, (jbyte)(jchar)32/*' '*/,
   (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)99/*'c'*/, (jbyte)(jchar)99/*'c'*/,
   (jbyte)(jchar)101/*'e'*/, (jbyte)(jchar)115/*'s'*/, (jbyte)(jchar)115/*'s'*/,
   (jbyte)(jchar)105/*'i'*/, (jbyte)(jchar)98/*'b'*/, (jbyte)(jchar)108/*'l'*/,
   (jbyte)(jchar)101/*'e'*/
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype63_GmCnnctn jcgo_array8_Class=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 14,
 {
  (jbyte)(jchar)103/*'g'*/, (jbyte)(jchar)101/*'e'*/, (jbyte)(jchar)116/*'t'*/,
   (jbyte)(jchar)67/*'C'*/, (jbyte)(jchar)108/*'l'*/, (jbyte)(jchar)97/*'a'*/,
   (jbyte)(jchar)115/*'s'*/, (jbyte)(jchar)115/*'s'*/, (jbyte)(jchar)76/*'L'*/,
   (jbyte)(jchar)111/*'o'*/, (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)100/*'d'*/,
   (jbyte)(jchar)101/*'e'*/, (jbyte)(jchar)114/*'r'*/
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype63_GmCnnctn jcgo_array9_Class=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 14,
 {
  (jbyte)(jchar)60/*'<'*/, (jbyte)(jchar)85/*'U'*/, (jbyte)(jchar)110/*'n'*/,
   (jbyte)(jchar)107/*'k'*/, (jbyte)(jchar)110/*'n'*/, (jbyte)(jchar)111/*'o'*/,
   (jbyte)(jchar)119/*'w'*/, (jbyte)(jchar)110/*'n'*/, (jbyte)(jchar)67/*'C'*/,
   (jbyte)(jchar)108/*'l'*/, (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)115/*'s'*/,
   (jbyte)(jchar)115/*'s'*/, (jbyte)(jchar)62/*'>'*/
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype98_GmCnnctn jcgo_array10_Class=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 32,
 {
  (jbyte)(jchar)32/*' '*/, (jbyte)(jchar)104/*'h'*/, (jbyte)(jchar)97/*'a'*/,
   (jbyte)(jchar)115/*'s'*/, (jbyte)(jchar)32/*' '*/, (jbyte)(jchar)97/*'a'*/,
   (jbyte)(jchar)110/*'n'*/, (jbyte)(jchar)32/*' '*/, (jbyte)(jchar)105/*'i'*/,
   (jbyte)(jchar)110/*'n'*/, (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)99/*'c'*/,
   (jbyte)(jchar)99/*'c'*/, (jbyte)(jchar)101/*'e'*/, (jbyte)(jchar)115/*'s'*/,
   (jbyte)(jchar)115/*'s'*/, (jbyte)(jchar)105/*'i'*/, (jbyte)(jchar)98/*'b'*/,
   (jbyte)(jchar)108/*'l'*/, (jbyte)(jchar)101/*'e'*/, (jbyte)(jchar)32/*' '*/,
   (jbyte)(jchar)99/*'c'*/, (jbyte)(jchar)111/*'o'*/, (jbyte)(jchar)110/*'n'*/,
   (jbyte)(jchar)115/*'s'*/, (jbyte)(jchar)116/*'t'*/, (jbyte)(jchar)114/*'r'*/,
   (jbyte)(jchar)117/*'u'*/, (jbyte)(jchar)99/*'c'*/, (jbyte)(jchar)116/*'t'*/,
   (jbyte)(jchar)111/*'o'*/, (jbyte)(jchar)114/*'r'*/
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype32_GameShll jcgo_array11_Class=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 10,
 {
  (jbyte)(jchar)105/*'i'*/, (jbyte)(jchar)110/*'n'*/, (jbyte)(jchar)116/*'t'*/,
   (jbyte)(jchar)101/*'e'*/, (jbyte)(jchar)114/*'r'*/, (jbyte)(jchar)102/*'f'*/,
   (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)99/*'c'*/, (jbyte)(jchar)101/*'e'*/,
   (jbyte)(jchar)32/*' '*/
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype92_GmCnnctn jcgo_array12_Class=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 37,
 {
  (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)114/*'r'*/, (jbyte)(jchar)114/*'r'*/,
   (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)121/*'y'*/, (jbyte)(jchar)32/*' '*/,
   (jbyte)(jchar)99/*'c'*/, (jbyte)(jchar)108/*'l'*/, (jbyte)(jchar)97/*'a'*/,
   (jbyte)(jchar)115/*'s'*/, (jbyte)(jchar)115/*'s'*/, (jbyte)(jchar)32/*' '*/,
   (jbyte)(jchar)100/*'d'*/, (jbyte)(jchar)105/*'i'*/, (jbyte)(jchar)109/*'m'*/,
   (jbyte)(jchar)101/*'e'*/, (jbyte)(jchar)110/*'n'*/, (jbyte)(jchar)115/*'s'*/,
   (jbyte)(jchar)105/*'i'*/, (jbyte)(jchar)111/*'o'*/, (jbyte)(jchar)110/*'n'*/,
   (jbyte)(jchar)115/*'s'*/, (jbyte)(jchar)32/*' '*/, (jbyte)(jchar)108/*'l'*/,
   (jbyte)(jchar)105/*'i'*/, (jbyte)(jchar)109/*'m'*/, (jbyte)(jchar)105/*'i'*/,
   (jbyte)(jchar)116/*'t'*/, (jbyte)(jchar)32/*' '*/, (jbyte)(jchar)101/*'e'*/,
   (jbyte)(jchar)120/*'x'*/, (jbyte)(jchar)99/*'c'*/, (jbyte)(jchar)101/*'e'*/,
   (jbyte)(jchar)101/*'e'*/, (jbyte)(jchar)100/*'d'*/, (jbyte)(jchar)101/*'e'*/,
   (jbyte)(jchar)100/*'d'*/
 }
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string1_Class
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array7_Class),
 14, 15, (jint)0xe05eb8a4L
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string2_Class
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array8_Class),
 0, 14, (jint)0xa0bf1275L
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string3_Class
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array9_Class),
 0, 14, (jint)0x69b0afd4L
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string4_Class
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array10_Class),
 0, 32, (jint)0xb53651e2L
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string5_Class
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array11_Class),
 0, 10, (jint)0xa0b83a07L
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string6_Class
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array12_Class),
 6, 6, (jint)0xaf0f85a8L
};

#ifdef CHKALL_java_lang_Class
#include "jcgochke.h"
#endif

#endif