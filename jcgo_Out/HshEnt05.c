/* DO NOT EDIT THIS FILE - it is machine generated (JCGO_116) */

#ifdef JCGO_SEPARATED
#define JCGO_116
#include "jcgortl.h"
#include "Main.h"
#endif

#ifdef JCGO_116

#ifdef CHKALL_java_util_HashMap
#include "jcgobchk.h"
#endif

JCGO_NOSEP_INLINE java_util_HashMap_HashEntry CFASTCALL
java_util_HashMap_HashEntry__this__LoLoI( java_util_HashMap_HashEntry
 This, java_lang_Object key, java_lang_Object value, jint hash )
{
 {
  (java_util_AbstractMap_BasicMapEntry__this__LoLo((java_util_AbstractMap_BasicMapEntry)This,
   key, value));
  JCGO_FIELD_NZACCESS(This, hash)= hash;
 }
 return This;
}

JCGO_NOSEP_FRWINL java_util_HashMap_HashEntry CFASTCALL
java_util_HashMap_HashEntry__new__LoLoI( java_lang_Object key, java_lang_Object
 value, jint hash )
{
 return java_util_HashMap_HashEntry__this__LoLoI(
  (java_util_HashMap_HashEntry)jcgo_newObject((jvtable)&java_util_HashMap_HashEntry_methods),
  key, value, hash);
}

JCGO_NOSEP_FRWINL void CFASTCALL
java_util_HashMap_HashEntry__access__( java_util_HashMap_HashEntry
 This )
{
 {
 }
}

JCGO_NOSEP_FRWINL java_lang_Object CFASTCALL
java_util_HashMap_HashEntry__cleanup__( java_util_HashMap_HashEntry
 This )
{
 {
  return JCGO_FIELD_NZACCESS(This, value);
 }
}

JCGO_NOSEP_DATA CONST struct java_util_HashMap_HashEntry_methods_s
 java_util_HashMap_HashEntry_methods=
{
 JCGO_CLASSREF_OF(java_util_HashMap_HashEntry__class),
 JCGO_GCJDESCR_INIT(java_util_HashMap_HashEntry_s, next)
 OBJT_java_util_HashMap_HashEntry,
 (JCGO_OBJSIZE_T)sizeof(struct java_util_HashMap_HashEntry_s),
 NULL,
 JCGO_CLINIT_INIT(0)
 0,
 java_util_AbstractMap_BasicMapEntry__equals__Lo,
 java_util_AbstractMap_BasicMapEntry__hashCode__,
 java_util_AbstractMap_BasicMapEntry__toString__,
 java_lang_Object__finalize__,
 java_util_AbstractMap_BasicMapEntry__getKey__,
 java_util_AbstractMap_BasicMapEntry__getValue__
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_util_HashMap_HashEntry_class_s
 java_util_HashMap_HashEntry__class JCGO_THRD_ATTRNONGC=
{
 {
  &java_lang_Class_methods,
  JCGO_MON_INIT
  JCGO_OBJREF_OF(*(java_lang_Object)&java_util_HashMap_HashEntry_methods),
  JCGO_STRREF_OF(jcgo_string1_HshEnt05),
  JCGO_CLASSREF_OF(java_util_AbstractMap_BasicMapEntry__class),
  ((jObjectArr)JCGO_OBJREF_OF(jcgo_array3_Object)),
  0x8
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype38_Object jcgo_array2_HshEnt05=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 27,
 {
  (jbyte)(jchar)106/*'j'*/, (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)118/*'v'*/,
   (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)46/*'.'*/, (jbyte)(jchar)117/*'u'*/,
   (jbyte)(jchar)116/*'t'*/, (jbyte)(jchar)105/*'i'*/, (jbyte)(jchar)108/*'l'*/,
   (jbyte)(jchar)46/*'.'*/, (jbyte)(jchar)72/*'H'*/, (jbyte)(jchar)97/*'a'*/,
   (jbyte)(jchar)115/*'s'*/, (jbyte)(jchar)104/*'h'*/, (jbyte)(jchar)77/*'M'*/,
   (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)112/*'p'*/, (jbyte)(jchar)36/*'$'*/,
   (jbyte)(jchar)72/*'H'*/, (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)115/*'s'*/,
   (jbyte)(jchar)104/*'h'*/, (jbyte)(jchar)69/*'E'*/, (jbyte)(jchar)110/*'n'*/,
   (jbyte)(jchar)116/*'t'*/, (jbyte)(jchar)114/*'r'*/, (jbyte)(jchar)121/*'y'*/
 }
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string1_HshEnt05
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array2_HshEnt05),
 0, 27, (jint)0x6cdabe6eL
};

#ifdef CHKALL_java_util_HashMap
#include "jcgochke.h"
#endif

#endif
