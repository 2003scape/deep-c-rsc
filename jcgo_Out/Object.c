/* DO NOT EDIT THIS FILE - it is machine generated (JCGO_116) */

#ifdef JCGO_SEPARATED
#define JCGO_116
#include "jcgortl.h"
#include "Main.h"
#endif

#ifdef JCGO_116

#ifdef CHKALL_java_lang_Object
#include "jcgobchk.h"
#endif

JCGO_NOSEP_INLINE jint CFASTCALL
java_lang_Object__hashCode__( java_lang_Object This )
{
 {
  return (java_lang_VMSystem__identityHashCode__Lo(
   This));
 }
}

JCGO_NOSEP_INLINE java_lang_Object CFASTCALL
java_lang_Object__this__( java_lang_Object This )
{
 {
 }
 return This;
}

JCGO_NOSEP_INLINE java_lang_Object CFASTCALL
java_lang_Object__new__( void )
{
 return java_lang_Object__this__(
  (java_lang_Object)jcgo_newObject((jvtable)&java_lang_Object_methods));
}

JCGO_NOSEP_INLINE jboolean CFASTCALL
java_lang_Object__equals__Lo( java_lang_Object This, java_lang_Object
 obj )
{
 {
  return (jboolean)(This == obj);
 }
}

JCGO_NOSEP_STATIC java_lang_String CFASTCALL
java_lang_Object__toString__X( java_lang_Object This, java_lang_String
 jcgo_stackparam )
{
 {
  java_lang_StringBuilder sb;
  struct java_lang_StringBuilder_s jcgo_stackobj1;
  struct java_lang_String_s jcgo_stackobj2;
  sb= java_lang_StringBuilder__this__(
   JCGO_STACKOBJ_NEW(jcgo_stackobj1, java_lang_StringBuilder_methods));
  (java_lang_VMObject__appendClassName__LoL5dy9e(
   This, sb));
  (java_lang_StringBuilder__append__C(
   sb, (jchar)64/*'@'*/));
  (java_lang_StringBuilder__append__Ls(
   sb, (java_lang_Integer__toHexString__IX(
   (JCGO_CALL_NZVFUNC(This)->hashCode__(
   This)), JCGO_STACKOBJ_NEW(jcgo_stackobj2, java_lang_String_methods)))));
  return (java_lang_StringBuilder__toString__X(
   sb, jcgo_stackparam));
 }
}

JCGO_NOSEP_INLINE java_lang_String CFASTCALL
java_lang_Object__toString__( java_lang_Object This )
{
 return java_lang_Object__toString__X(This, (java_lang_String)jcgo_newObject((jvtable)&java_lang_String_methods));
}

JCGO_NOSEP_STATIC void CFASTCALL
java_lang_Object__finalize__( java_lang_Object This )
{
 {
 }
}

JCGO_NOSEP_STATIC java_lang_Object CFASTCALL
java_lang_Object__clone__( java_lang_Object This )
{
 {
  if (!jcgo_instanceOf(OBJT_java_lang_Cloneable, MAXT_java_lang_Cloneable,
   ~0, (jObject)This))
  {
   JCGO_THROW_EXC((java_lang_CloneNotSupportedException__new__Ls(
    JCGO_STRREF_OF(jcgo_string2_Object))));
  }
  return (java_lang_VMObject__clone__L89tjc(
   (java_lang_Cloneable)This));
 }
}

JCGO_NOSEP_INLINE java_lang_Class CFASTCALL
java_lang_Object__getClass__( java_lang_Object This )
{
 {
  jObject jcgo_rcvrL1;
  return (jcgo_rcvrL1= (jObject)(java_lang_VMObject__getClass0__Lo(
   This)), java_lang_VMClass__arrayClassOf0X__LcI(
   (java_lang_Class)jcgo_rcvrL1, (java_lang_VMObject__getObjArrayDims0__Lo(
   This))));
 }
}

JCGO_NOSEP_INLINE void CFASTCALL
java_lang_Object__notify__( java_lang_Object This )
{
 {
  (java_lang_VMThread__notify__LoZ(
   This, (jboolean)jfalse));
 }
}

JCGO_NOSEP_INLINE void CFASTCALL
java_lang_Object__wait__( java_lang_Object This )
{
 {
  (java_lang_VMThread__wait__LoJI(
   This, JLONG_C(0), 0));
 }
}

JCGO_NOSEP_DATA CONST struct java_lang_Object_methods_s java_lang_Object_methods=
{
 JCGO_CLASSREF_OF(java_lang_Object__class),
 JCGO_GCJDESCR_ZEROINIT
 OBJT_java_lang_Object,
 -(JCGO_OBJSIZE_T)sizeof(struct java_lang_Object_s),
 NULL,
 JCGO_CLINIT_INIT(0)
 java_lang_Object__this__,
 java_lang_Object__equals__Lo,
 java_lang_Object__hashCode__,
 java_lang_Object__toString__,
 java_lang_Object__finalize__
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_Object_class_s java_lang_Object__class
 JCGO_THRD_ATTRNONGC=
{
 {
  &java_lang_Class_methods,
  JCGO_MON_INIT
  JCGO_OBJREF_OF(*(java_lang_Object)&java_lang_Object_methods),
  JCGO_STRREF_OF(jcgo_string1_Object),
  jnull,
  ((jObjectArr)JCGO_OBJREF_OF(jcgo_array3_Object)),
  0x1
 }
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_Class_s jcgo_coreClasses[OBJT_jarray+OBJT_void-1]
 JCGO_THRD_ATTRNONGC=
{
 {
  &java_lang_Class_methods,
  JCGO_MON_INIT
  JCGO_OBJREF_OF(*(java_lang_Object)&jboolean_methods),
  JCGO_STRREF_OF(jcgo_string5_Object),
  jnull,
  ((jObjectArr)JCGO_OBJREF_OF(jcgo_array3_Object)),
  0x411
 },
 {
  &java_lang_Class_methods,
  JCGO_MON_INIT
  JCGO_OBJREF_OF(*(java_lang_Object)&jbyte_methods),
  JCGO_STRREF_OF(jcgo_string6_Object),
  jnull,
  ((jObjectArr)JCGO_OBJREF_OF(jcgo_array3_Object)),
  0x411
 },
 {
  &java_lang_Class_methods,
  JCGO_MON_INIT
  JCGO_OBJREF_OF(*(java_lang_Object)&jchar_methods),
  JCGO_STRREF_OF(jcgo_string7_Object),
  jnull,
  ((jObjectArr)JCGO_OBJREF_OF(jcgo_array3_Object)),
  0x411
 },
 {
  &java_lang_Class_methods,
  JCGO_MON_INIT
  JCGO_OBJREF_OF(*(java_lang_Object)&jshort_methods),
  JCGO_STRREF_OF(jcgo_string8_Object),
  jnull,
  ((jObjectArr)JCGO_OBJREF_OF(jcgo_array3_Object)),
  0x411
 },
 {
  &java_lang_Class_methods,
  JCGO_MON_INIT
  JCGO_OBJREF_OF(*(java_lang_Object)&jint_methods),
  JCGO_STRREF_OF(jcgo_string9_Object),
  jnull,
  ((jObjectArr)JCGO_OBJREF_OF(jcgo_array3_Object)),
  0x411
 },
 {
  &java_lang_Class_methods,
  JCGO_MON_INIT
  JCGO_OBJREF_OF(*(java_lang_Object)&jlong_methods),
  JCGO_STRREF_OF(jcgo_string10_Object),
  jnull,
  ((jObjectArr)JCGO_OBJREF_OF(jcgo_array3_Object)),
  0x411
 },
 {
  &java_lang_Class_methods,
  JCGO_MON_INIT
  JCGO_OBJREF_OF(*(java_lang_Object)&jfloat_methods),
  JCGO_STRREF_OF(jcgo_string11_Object),
  jnull,
  ((jObjectArr)JCGO_OBJREF_OF(jcgo_array3_Object)),
  0x411
 },
 {
  &java_lang_Class_methods,
  JCGO_MON_INIT
  JCGO_OBJREF_OF(*(java_lang_Object)&jdouble_methods),
  JCGO_STRREF_OF(jcgo_string12_Object),
  jnull,
  ((jObjectArr)JCGO_OBJREF_OF(jcgo_array3_Object)),
  0x411
 },
 {
  &java_lang_Class_methods,
  JCGO_MON_INIT
  JCGO_OBJREF_OF(*(java_lang_Object)&void_methods),
  JCGO_STRREF_OF(jcgo_string13_Object),
  jnull,
  ((jObjectArr)JCGO_OBJREF_OF(jcgo_array3_Object)),
  0x411
 },
 {
  &java_lang_Class_methods,
  JCGO_MON_INIT
  jnull, jnull, jnull, jnull, 0
 },
 {
  &java_lang_Class_methods,
  JCGO_MON_INIT
  JCGO_OBJREF_OF(*(java_lang_Object)&jbooleanArr_methods),
  JCGO_STRREF_OF(jcgo_string14_Object),
  JCGO_CORECLASS_FOR(OBJT_jboolean),
  ((jObjectArr)JCGO_OBJREF_OF(jcgo_array4_Object)),
  0x411
 },
 {
  &java_lang_Class_methods,
  JCGO_MON_INIT
  JCGO_OBJREF_OF(*(java_lang_Object)&jbyteArr_methods),
  JCGO_STRREF_OF(jcgo_string15_Object),
  JCGO_CORECLASS_FOR(OBJT_jbyte),
  ((jObjectArr)JCGO_OBJREF_OF(jcgo_array4_Object)),
  0x411
 },
 {
  &java_lang_Class_methods,
  JCGO_MON_INIT
  JCGO_OBJREF_OF(*(java_lang_Object)&jcharArr_methods),
  JCGO_STRREF_OF(jcgo_string16_Object),
  JCGO_CORECLASS_FOR(OBJT_jchar),
  ((jObjectArr)JCGO_OBJREF_OF(jcgo_array4_Object)),
  0x411
 },
 {
  &java_lang_Class_methods,
  JCGO_MON_INIT
  JCGO_OBJREF_OF(*(java_lang_Object)&jshortArr_methods),
  JCGO_STRREF_OF(jcgo_string17_Object),
  JCGO_CORECLASS_FOR(OBJT_jshort),
  ((jObjectArr)JCGO_OBJREF_OF(jcgo_array4_Object)),
  0x411
 },
 {
  &java_lang_Class_methods,
  JCGO_MON_INIT
  JCGO_OBJREF_OF(*(java_lang_Object)&jintArr_methods),
  JCGO_STRREF_OF(jcgo_string18_Object),
  JCGO_CORECLASS_FOR(OBJT_jint),
  ((jObjectArr)JCGO_OBJREF_OF(jcgo_array4_Object)),
  0x411
 },
 {
  &java_lang_Class_methods,
  JCGO_MON_INIT
  JCGO_OBJREF_OF(*(java_lang_Object)&jlongArr_methods),
  JCGO_STRREF_OF(jcgo_string19_Object),
  JCGO_CORECLASS_FOR(OBJT_jlong),
  ((jObjectArr)JCGO_OBJREF_OF(jcgo_array4_Object)),
  0x411
 },
 {
  &java_lang_Class_methods,
  JCGO_MON_INIT
  JCGO_OBJREF_OF(*(java_lang_Object)&jfloatArr_methods),
  JCGO_STRREF_OF(jcgo_string20_Object),
  JCGO_CORECLASS_FOR(OBJT_jfloat),
  ((jObjectArr)JCGO_OBJREF_OF(jcgo_array4_Object)),
  0x411
 },
 {
  &java_lang_Class_methods,
  JCGO_MON_INIT
  JCGO_OBJREF_OF(*(java_lang_Object)&jdoubleArr_methods),
  JCGO_STRREF_OF(jcgo_string21_Object),
  JCGO_CORECLASS_FOR(OBJT_jdouble),
  ((jObjectArr)JCGO_OBJREF_OF(jcgo_array4_Object)),
  0x411
 }
};

JCGO_NOSEP_DATA CONST struct java_lang_Class_s jcgo_objArrStubClasses[16]=
{
 {
  &java_lang_Class_methods,
  JCGO_MON_INIT
  JCGO_OBJREF_OF(*(java_lang_Object)&jObjectArr_methods),
  jnull,
  JCGO_CLASSREF_OF(java_lang_Object__class),
  ((jObjectArr)JCGO_OBJREF_OF(jcgo_array4_Object)),
  0x410
 },
 {
  &java_lang_Class_methods,
  JCGO_MON_INIT
  JCGO_OBJREF_OF(*(java_lang_Object)&jObjectArr2_methods),
  jnull,
  JCGO_CLASSREF_OF(java_lang_Object__class),
  ((jObjectArr)JCGO_OBJREF_OF(jcgo_array4_Object)),
  0x410
 },
 {
  &java_lang_Class_methods,
  JCGO_MON_INIT
  JCGO_OBJREF_OF(*(java_lang_Object)&jObjectArr3_methods),
  jnull,
  JCGO_CLASSREF_OF(java_lang_Object__class),
  ((jObjectArr)JCGO_OBJREF_OF(jcgo_array4_Object)),
  0x410
 },
 {
  &java_lang_Class_methods,
  JCGO_MON_INIT
  JCGO_OBJREF_OF(*(java_lang_Object)&jObjectArr4_methods),
  jnull,
  JCGO_CLASSREF_OF(java_lang_Object__class),
  ((jObjectArr)JCGO_OBJREF_OF(jcgo_array4_Object)),
  0x410
 },
 {
  &java_lang_Class_methods,
  JCGO_MON_INIT
  JCGO_OBJREF_OF(*(java_lang_Object)&jObjectArr5_methods),
  jnull,
  JCGO_CLASSREF_OF(java_lang_Object__class),
  ((jObjectArr)JCGO_OBJREF_OF(jcgo_array4_Object)),
  0x410
 },
 {
  &java_lang_Class_methods,
  JCGO_MON_INIT
  JCGO_OBJREF_OF(*(java_lang_Object)&jObjectArr6_methods),
  jnull,
  JCGO_CLASSREF_OF(java_lang_Object__class),
  ((jObjectArr)JCGO_OBJREF_OF(jcgo_array4_Object)),
  0x410
 },
 {
  &java_lang_Class_methods,
  JCGO_MON_INIT
  JCGO_OBJREF_OF(*(java_lang_Object)&jObjectArr7_methods),
  jnull,
  JCGO_CLASSREF_OF(java_lang_Object__class),
  ((jObjectArr)JCGO_OBJREF_OF(jcgo_array4_Object)),
  0x410
 },
 {
  &java_lang_Class_methods,
  JCGO_MON_INIT
  JCGO_OBJREF_OF(*(java_lang_Object)&jObjectArr8_methods),
  jnull,
  JCGO_CLASSREF_OF(java_lang_Object__class),
  ((jObjectArr)JCGO_OBJREF_OF(jcgo_array4_Object)),
  0x410
 },
 {
  &java_lang_Class_methods,
  JCGO_MON_INIT
  JCGO_OBJREF_OF(*(java_lang_Object)&jObjectArr9_methods),
  jnull,
  JCGO_CLASSREF_OF(java_lang_Object__class),
  ((jObjectArr)JCGO_OBJREF_OF(jcgo_array4_Object)),
  0x410
 },
 {
  &java_lang_Class_methods,
  JCGO_MON_INIT
  JCGO_OBJREF_OF(*(java_lang_Object)&jObjectArr10_methods),
  jnull,
  JCGO_CLASSREF_OF(java_lang_Object__class),
  ((jObjectArr)JCGO_OBJREF_OF(jcgo_array4_Object)),
  0x410
 },
 {
  &java_lang_Class_methods,
  JCGO_MON_INIT
  JCGO_OBJREF_OF(*(java_lang_Object)&jObjectArr11_methods),
  jnull,
  JCGO_CLASSREF_OF(java_lang_Object__class),
  ((jObjectArr)JCGO_OBJREF_OF(jcgo_array4_Object)),
  0x410
 },
 {
  &java_lang_Class_methods,
  JCGO_MON_INIT
  JCGO_OBJREF_OF(*(java_lang_Object)&jObjectArr12_methods),
  jnull,
  JCGO_CLASSREF_OF(java_lang_Object__class),
  ((jObjectArr)JCGO_OBJREF_OF(jcgo_array4_Object)),
  0x410
 },
 {
  &java_lang_Class_methods,
  JCGO_MON_INIT
  JCGO_OBJREF_OF(*(java_lang_Object)&jObjectArr13_methods),
  jnull,
  JCGO_CLASSREF_OF(java_lang_Object__class),
  ((jObjectArr)JCGO_OBJREF_OF(jcgo_array4_Object)),
  0x410
 },
 {
  &java_lang_Class_methods,
  JCGO_MON_INIT
  JCGO_OBJREF_OF(*(java_lang_Object)&jObjectArr14_methods),
  jnull,
  JCGO_CLASSREF_OF(java_lang_Object__class),
  ((jObjectArr)JCGO_OBJREF_OF(jcgo_array4_Object)),
  0x410
 },
 {
  &java_lang_Class_methods,
  JCGO_MON_INIT
  JCGO_OBJREF_OF(*(java_lang_Object)&jObjectArr15_methods),
  jnull,
  JCGO_CLASSREF_OF(java_lang_Object__class),
  ((jObjectArr)JCGO_OBJREF_OF(jcgo_array4_Object)),
  0x410
 },
 {
  &java_lang_Class_methods,
  JCGO_MON_INIT
  JCGO_OBJREF_OF(*(java_lang_Object)&jObjectArr16_methods),
  jnull,
  JCGO_CLASSREF_OF(java_lang_Object__class),
  ((jObjectArr)JCGO_OBJREF_OF(jcgo_array4_Object)),
  0x410
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype2_GameMdl jcgo_array3_Object=
{
 (jvtable)&jObjectArr_methods,
 JCGO_MON_INIT
 0,
 JCGO_CLASSREF_OF(java_lang_Class__class),
 {
  jnull
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype2_GameMdl jcgo_array4_Object=
{
 (jvtable)&jObjectArr_methods,
 JCGO_MON_INIT
 1,
 JCGO_CLASSREF_OF(java_lang_Class__class),
 {
  (jObject)JCGO_CLASSREF_OF(java_lang_Cloneable__class)
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype22_Object jcgo_array22_Object=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 16,
 {
  (jbyte)(jchar)106/*'j'*/, (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)118/*'v'*/,
   (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)46/*'.'*/, (jbyte)(jchar)108/*'l'*/,
   (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)110/*'n'*/, (jbyte)(jchar)103/*'g'*/,
   (jbyte)(jchar)46/*'.'*/, (jbyte)(jchar)79/*'O'*/, (jbyte)(jchar)98/*'b'*/,
   (jbyte)(jchar)106/*'j'*/, (jbyte)(jchar)101/*'e'*/, (jbyte)(jchar)99/*'c'*/,
   (jbyte)(jchar)116/*'t'*/
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype23_Object jcgo_array23_Object=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 20,
 {
  (jbyte)(jchar)79/*'O'*/, (jbyte)(jchar)98/*'b'*/, (jbyte)(jchar)106/*'j'*/,
   (jbyte)(jchar)101/*'e'*/, (jbyte)(jchar)99/*'c'*/, (jbyte)(jchar)116/*'t'*/,
   (jbyte)(jchar)32/*' '*/, (jbyte)(jchar)110/*'n'*/, (jbyte)(jchar)111/*'o'*/,
   (jbyte)(jchar)116/*'t'*/, (jbyte)(jchar)32/*' '*/, (jbyte)(jchar)99/*'c'*/,
   (jbyte)(jchar)108/*'l'*/, (jbyte)(jchar)111/*'o'*/, (jbyte)(jchar)110/*'n'*/,
   (jbyte)(jchar)101/*'e'*/, (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)98/*'b'*/,
   (jbyte)(jchar)108/*'l'*/, (jbyte)(jchar)101/*'e'*/
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype24_Object jcgo_array24_Object=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 7,
 {
  (jbyte)(jchar)98/*'b'*/, (jbyte)(jchar)111/*'o'*/, (jbyte)(jchar)111/*'o'*/,
   (jbyte)(jchar)108/*'l'*/, (jbyte)(jchar)101/*'e'*/, (jbyte)(jchar)97/*'a'*/,
   (jbyte)(jchar)110/*'n'*/
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype4_IntAddrs jcgo_array25_Object=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 4,
 {
  (jbyte)(jchar)98/*'b'*/, (jbyte)(jchar)121/*'y'*/, (jbyte)(jchar)116/*'t'*/,
   (jbyte)(jchar)101/*'e'*/
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype26_Object jcgo_array26_Object=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 12,
 {
  (jbyte)(jchar)115/*'s'*/, (jbyte)(jchar)112/*'p'*/, (jbyte)(jchar)101/*'e'*/,
   (jbyte)(jchar)108/*'l'*/, (jbyte)(jchar)108/*'l'*/, (jbyte)(jchar)99/*'c'*/,
   (jbyte)(jchar)104/*'h'*/, (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)114/*'r'*/,
   (jbyte)(jchar)103/*'g'*/, (jbyte)(jchar)101/*'e'*/, (jbyte)(jchar)50/*'2'*/
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype27_Object jcgo_array27_Object=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 26,
 {
  (jbyte)(jchar)103/*'g'*/, (jbyte)(jchar)110/*'n'*/, (jbyte)(jchar)117/*'u'*/,
   (jbyte)(jchar)46/*'.'*/, (jbyte)(jchar)99/*'c'*/, (jbyte)(jchar)108/*'l'*/,
   (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)115/*'s'*/, (jbyte)(jchar)115/*'s'*/,
   (jbyte)(jchar)112/*'p'*/, (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)116/*'t'*/,
   (jbyte)(jchar)104/*'h'*/, (jbyte)(jchar)46/*'.'*/, (jbyte)(jchar)118/*'v'*/,
   (jbyte)(jchar)109/*'m'*/, (jbyte)(jchar)46/*'.'*/, (jbyte)(jchar)115/*'s'*/,
   (jbyte)(jchar)104/*'h'*/, (jbyte)(jchar)111/*'o'*/, (jbyte)(jchar)114/*'r'*/,
   (jbyte)(jchar)116/*'t'*/, (jbyte)(jchar)110/*'n'*/, (jbyte)(jchar)97/*'a'*/,
   (jbyte)(jchar)109/*'m'*/, (jbyte)(jchar)101/*'e'*/
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype28_Object jcgo_array28_Object=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 11,
 {
  (jbyte)(jchar)105/*'i'*/, (jbyte)(jchar)110/*'n'*/, (jbyte)(jchar)116/*'t'*/,
   (jbyte)(jchar)101/*'e'*/, (jbyte)(jchar)103/*'g'*/, (jbyte)(jchar)101/*'e'*/,
   (jbyte)(jchar)114/*'r'*/, (jbyte)(jchar)46/*'.'*/, (jbyte)(jchar)100/*'d'*/,
   (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)116/*'t'*/
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype4_IntAddrs jcgo_array29_Object=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 4,
 {
  (jbyte)(jchar)108/*'l'*/, (jbyte)(jchar)111/*'o'*/, (jbyte)(jchar)110/*'n'*/,
   (jbyte)(jchar)103/*'g'*/
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype30_Object jcgo_array30_Object=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 5,
 {
  (jbyte)(jchar)102/*'f'*/, (jbyte)(jchar)108/*'l'*/, (jbyte)(jchar)111/*'o'*/,
   (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)116/*'t'*/
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype2_BZLib jcgo_array31_Object=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 6,
 {
  (jbyte)(jchar)100/*'d'*/, (jbyte)(jchar)111/*'o'*/, (jbyte)(jchar)117/*'u'*/,
   (jbyte)(jchar)98/*'b'*/, (jbyte)(jchar)108/*'l'*/, (jbyte)(jchar)101/*'e'*/
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype4_IntAddrs jcgo_array32_Object=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 4,
 {
  (jbyte)(jchar)118/*'v'*/, (jbyte)(jchar)111/*'o'*/, (jbyte)(jchar)105/*'i'*/,
   (jbyte)(jchar)100/*'d'*/
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype33_Object jcgo_array33_Object=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 2,
 {
  (jbyte)(jchar)91/*'['*/, (jbyte)(jchar)90/*'Z'*/
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype33_Object jcgo_array34_Object=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 2,
 {
  (jbyte)(jchar)91/*'['*/, (jbyte)(jchar)66/*'B'*/
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype33_Object jcgo_array35_Object=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 2,
 {
  (jbyte)(jchar)91/*'['*/, (jbyte)(jchar)67/*'C'*/
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype33_Object jcgo_array36_Object=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 2,
 {
  (jbyte)(jchar)91/*'['*/, (jbyte)(jchar)83/*'S'*/
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype33_Object jcgo_array37_Object=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 2,
 {
  (jbyte)(jchar)91/*'['*/, (jbyte)(jchar)73/*'I'*/
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype38_Object jcgo_array38_Object=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 27,
 {
  (jbyte)(jchar)91/*'['*/, (jbyte)(jchar)74/*'J'*/, (jbyte)(jchar)78/*'N'*/,
   (jbyte)(jchar)73/*'I'*/, (jbyte)(jchar)93/*']'*/, (jbyte)(jchar)32/*' '*/,
   (jbyte)(jchar)69/*'E'*/, (jbyte)(jchar)120/*'x'*/, (jbyte)(jchar)99/*'c'*/,
   (jbyte)(jchar)101/*'e'*/, (jbyte)(jchar)112/*'p'*/, (jbyte)(jchar)116/*'t'*/,
   (jbyte)(jchar)105/*'i'*/, (jbyte)(jchar)111/*'o'*/, (jbyte)(jchar)110/*'n'*/,
   (jbyte)(jchar)32/*' '*/, (jbyte)(jchar)105/*'i'*/, (jbyte)(jchar)110/*'n'*/,
   (jbyte)(jchar)32/*' '*/, (jbyte)(jchar)116/*'t'*/, (jbyte)(jchar)104/*'h'*/,
   (jbyte)(jchar)114/*'r'*/, (jbyte)(jchar)101/*'e'*/, (jbyte)(jchar)97/*'a'*/,
   (jbyte)(jchar)100/*'d'*/, (jbyte)(jchar)32/*' '*/, (jbyte)(jchar)34/*'"'*/
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype33_Object jcgo_array39_Object=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 2,
 {
  (jbyte)(jchar)91/*'['*/, (jbyte)(jchar)70/*'F'*/
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype33_Object jcgo_array40_Object=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 2,
 {
  (jbyte)(jchar)91/*'['*/, (jbyte)(jchar)68/*'D'*/
 }
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string1_Object
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array22_Object),
 0, 16, (jint)0x3f697993L
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string2_Object
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array23_Object),
 0, 20, (jint)0x4a031029L
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string5_Object
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array24_Object),
 0, 7, (jint)0x3db6c28L
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string6_Object
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array25_Object),
 0, 4, (jint)0x2e6108L
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string7_Object
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array26_Object),
 5, 4, (jint)0x2e9356L
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string8_Object
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array27_Object),
 17, 5, (jint)0x685847cL
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string9_Object
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array28_Object),
 0, 3, (jint)0x197efL
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string10_Object
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array29_Object),
 0, 4, (jint)0x32c67cL
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string11_Object
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array30_Object),
 0, 5, (jint)0x5d0225cL
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string12_Object
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array31_Object),
 0, 6, (jint)0xb0f77bd1L
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string13_Object
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array32_Object),
 0, 4, (jint)0x375194L
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string14_Object
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array33_Object),
 0, 2, (jint)0xb5fL
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string15_Object
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array34_Object),
 0, 2, (jint)0xb47L
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string16_Object
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array35_Object),
 0, 2, (jint)0xb48L
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string17_Object
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array36_Object),
 0, 2, (jint)0xb58L
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string18_Object
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array37_Object),
 0, 2, (jint)0xb4eL
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string19_Object
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array38_Object),
 0, 2, (jint)0xb4fL
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string20_Object
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array39_Object),
 0, 2, (jint)0xb4bL
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string21_Object
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array40_Object),
 0, 2, (jint)0xb49L
};

#ifdef CHKALL_java_lang_Object
#include "jcgochke.h"
#endif

#endif