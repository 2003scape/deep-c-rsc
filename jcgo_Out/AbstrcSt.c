/* DO NOT EDIT THIS FILE - it is machine generated (JCGO_116) */

#ifdef JCGO_SEPARATED
#define JCGO_116
#include "jcgortl.h"
#include "Main.h"
#endif

#ifdef JCGO_116

#ifdef CHKALL_java_util_AbstractSet
#include "jcgobchk.h"
#endif

JCGO_NOSEP_STATIC java_util_AbstractSet CFASTCALL
java_util_AbstractSet__this__( java_util_AbstractSet This )
{
 {
  (java_util_AbstractCollection__this__((java_util_AbstractCollection)This));
 }
 return This;
}

JCGO_NOSEP_STATIC jboolean CFASTCALL
java_util_AbstractSet__equals__Lo( java_util_AbstractSet This, java_lang_Object
 o )
{
 {
  jint jcgo_rcvrI1;
  return (jboolean)(o == (java_lang_Object)This || (jcgo_instanceOf(OBJT_java_util_Set,
   MAXT_java_util_Set, ~0, (jObject)o) && (jcgo_rcvrI1= (JCGO_CALL_NZVFUNC(((java_util_Set)o))->size__(
   ((java_util_Set)o))), jcgo_rcvrI1 == (JCGO_CALL_NZVFUNC(This)->size__(
   (java_util_AbstractCollection)This))) && (JCGO_CALL_NZVFUNC(This)->containsAll__L07mt2(
   (java_util_AbstractCollection)This, (java_util_Collection)o))));
 }
}

JCGO_NOSEP_STATIC jint CFASTCALL
java_util_AbstractSet__hashCode__( java_util_AbstractSet This )
{
 {
  java_util_Iterator itr;
  jint hash;
  jint pos;
  itr= (JCGO_CALL_NZVFUNC(This)->iterator__(
   (java_util_AbstractCollection)This));
  hash= 0;
  pos= (JCGO_CALL_NZVFUNC(This)->size__(
   (java_util_AbstractCollection)This));
  while (--pos >= 0)
  {
   hash+= (java_util_AbstractCollection__hashCode__Lo(
    (JCGO_CALL_VFUNC(itr)->next__(
    itr))));
  }
  return hash;
 }
}

JCGO_NOSEP_DATA CONST struct jcgo_methods_s java_util_AbstractSet_methods=
{
 JCGO_CLASSREF_OF(java_util_AbstractSet__class),
 JCGO_GCJDESCR_ZEROINIT
 OBJT_java_util_AbstractSet,
 0,
 NULL,
 JCGO_CLINIT_INIT(0)
 (jObject (CFASTCALL*)(jObject))java_util_AbstractSet__this__
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_util_AbstractSet_class_s
 java_util_AbstractSet__class JCGO_THRD_ATTRNONGC=
{
 {
  &java_lang_Class_methods,
  JCGO_MON_INIT
  JCGO_OBJREF_OF(*(java_lang_Object)&java_util_AbstractSet_methods),
  JCGO_STRREF_OF(jcgo_string1_AbstrcSt),
  JCGO_CLASSREF_OF(java_util_AbstractCollection__class),
  ((jObjectArr)JCGO_OBJREF_OF(jcgo_array2_AbstrcSt)),
  0x401
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype2_GameMdl jcgo_array2_AbstrcSt=
{
 (jvtable)&jObjectArr_methods,
 JCGO_MON_INIT
 1,
 JCGO_CLASSREF_OF(java_lang_Class__class),
 {
  (jObject)JCGO_CLASSREF_OF(java_util_Set__class)
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype80_GmCnnctn jcgo_array3_AbstrcSt=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 21,
 {
  (jbyte)(jchar)106/*'j'*/, (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)118/*'v'*/,
   (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)46/*'.'*/, (jbyte)(jchar)117/*'u'*/,
   (jbyte)(jchar)116/*'t'*/, (jbyte)(jchar)105/*'i'*/, (jbyte)(jchar)108/*'l'*/,
   (jbyte)(jchar)46/*'.'*/, (jbyte)(jchar)65/*'A'*/, (jbyte)(jchar)98/*'b'*/,
   (jbyte)(jchar)115/*'s'*/, (jbyte)(jchar)116/*'t'*/, (jbyte)(jchar)114/*'r'*/,
   (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)99/*'c'*/, (jbyte)(jchar)116/*'t'*/,
   (jbyte)(jchar)83/*'S'*/, (jbyte)(jchar)101/*'e'*/, (jbyte)(jchar)116/*'t'*/
 }
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string1_AbstrcSt
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array3_AbstrcSt),
 0, 21, (jint)0x6ee8a720L
};

#ifdef CHKALL_java_util_AbstractSet
#include "jcgochke.h"
#endif

#endif