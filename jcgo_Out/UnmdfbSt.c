/* DO NOT EDIT THIS FILE - it is machine generated (JCGO_116) */

#ifdef JCGO_SEPARATED
#define JCGO_116
#include "jcgortl.h"
#include "Main.h"
#endif

#ifdef JCGO_116

#ifdef CHKALL_java_util_Collections
#include "jcgobchk.h"
#endif

JCGO_NOSEP_INLINE java_util_Collections_UnmodifiableSet CFASTCALL
java_util_Collections_UnmodifiableSet__this__L1x914( java_util_Collections_UnmodifiableSet
 This, java_util_Set s )
{
 {
  (java_util_Collections_UnmodifiableCollection__this__L07mt2((java_util_Collections_UnmodifiableCollection)This,
   (java_util_Collection)s));
 }
 return This;
}

JCGO_NOSEP_FRWINL java_util_Collections_UnmodifiableSet CFASTCALL
java_util_Collections_UnmodifiableSet__new__L1x914( java_util_Set
 s )
{
 return java_util_Collections_UnmodifiableSet__this__L1x914(
  (java_util_Collections_UnmodifiableSet)jcgo_newObject((jvtable)&java_util_Collections_UnmodifiableSet_methods),
  s);
}

JCGO_NOSEP_INLINE jboolean CFASTCALL
java_util_Collections_UnmodifiableSet__equals__Lo( java_util_Collections_UnmodifiableSet
 This, java_lang_Object o )
{
 {
  return (jboolean)(JCGO_CALL_VFUNC(JCGO_FIELD_NZACCESS(This, c))->equals__Lo(
   JCGO_FIELD_NZACCESS(This, c), o));
 }
}

JCGO_NOSEP_INLINE jint CFASTCALL
java_util_Collections_UnmodifiableSet__hashCode__( java_util_Collections_UnmodifiableSet
 This )
{
 {
  return (JCGO_CALL_VFUNC(JCGO_FIELD_NZACCESS(This, c))->hashCode__(
   JCGO_FIELD_NZACCESS(This, c)));
 }
}

JCGO_NOSEP_DATA CONST struct java_util_Collections_UnmodifiableSet_methods_s
 java_util_Collections_UnmodifiableSet_methods=
{
 JCGO_CLASSREF_OF(java_util_Collections_UnmodifiableSet__class),
 JCGO_GCJDESCR_ZEROINIT
 OBJT_java_util_Collections_UnmodifiableSet,
 (JCGO_OBJSIZE_T)sizeof(struct java_util_Collections_UnmodifiableSet_s),
 NULL,
 JCGO_CLINIT_INIT(0)
 0,
 java_util_Collections_UnmodifiableSet__equals__Lo,
 java_util_Collections_UnmodifiableSet__hashCode__,
 java_util_Collections_UnmodifiableCollection__toString__,
 java_lang_Object__finalize__,
 java_util_Collections_UnmodifiableCollection__isEmpty__,
 java_util_Collections_UnmodifiableCollection__iterator__,
 java_util_Collections_UnmodifiableCollection__size__
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_util_Collections_UnmodifiableSet_class_s
 java_util_Collections_UnmodifiableSet__class JCGO_THRD_ATTRNONGC=
{
 {
  &java_lang_Class_methods,
  JCGO_MON_INIT
  JCGO_OBJREF_OF(*(java_lang_Object)&java_util_Collections_UnmodifiableSet_methods),
  JCGO_STRREF_OF(jcgo_string1_UnmdfbSt),
  JCGO_CLASSREF_OF(java_util_Collections_UnmodifiableCollection__class),
  ((jObjectArr)JCGO_OBJREF_OF(jcgo_array2_AbstrcSt)),
  0xa
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype92_GmCnnctn jcgo_array2_UnmdfbSt=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 37,
 {
  (jbyte)(jchar)106/*'j'*/, (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)118/*'v'*/,
   (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)46/*'.'*/, (jbyte)(jchar)117/*'u'*/,
   (jbyte)(jchar)116/*'t'*/, (jbyte)(jchar)105/*'i'*/, (jbyte)(jchar)108/*'l'*/,
   (jbyte)(jchar)46/*'.'*/, (jbyte)(jchar)67/*'C'*/, (jbyte)(jchar)111/*'o'*/,
   (jbyte)(jchar)108/*'l'*/, (jbyte)(jchar)108/*'l'*/, (jbyte)(jchar)101/*'e'*/,
   (jbyte)(jchar)99/*'c'*/, (jbyte)(jchar)116/*'t'*/, (jbyte)(jchar)105/*'i'*/,
   (jbyte)(jchar)111/*'o'*/, (jbyte)(jchar)110/*'n'*/, (jbyte)(jchar)115/*'s'*/,
   (jbyte)(jchar)36/*'$'*/, (jbyte)(jchar)85/*'U'*/, (jbyte)(jchar)110/*'n'*/,
   (jbyte)(jchar)109/*'m'*/, (jbyte)(jchar)111/*'o'*/, (jbyte)(jchar)100/*'d'*/,
   (jbyte)(jchar)105/*'i'*/, (jbyte)(jchar)102/*'f'*/, (jbyte)(jchar)105/*'i'*/,
   (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)98/*'b'*/, (jbyte)(jchar)108/*'l'*/,
   (jbyte)(jchar)101/*'e'*/, (jbyte)(jchar)83/*'S'*/, (jbyte)(jchar)101/*'e'*/,
   (jbyte)(jchar)116/*'t'*/
 }
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string1_UnmdfbSt
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array2_UnmdfbSt),
 0, 37, (jint)0x153fa3d6L
};

#ifdef CHKALL_java_util_Collections
#include "jcgochke.h"
#endif

#endif