/* DO NOT EDIT THIS FILE - it is machine generated (JCGO_116) */

#ifdef JCGO_SEPARATED
#define JCGO_116
#include "jcgortl.h"
#include "Main.h"
#endif

#ifdef JCGO_116

#ifdef CHKALL_java_util_Hashtable
#include "jcgobchk.h"
#endif

JCGO_NOSEP_INLINE void CFASTCALL
java_util_Hashtable_EntryIterator__void( java_util_Hashtable_EntryIterator
 This )
{
 JCGO_FIELD_NZACCESS(This, knownMod)= JCGO_FIELD_NZACCESS(JCGO_FIELD_NZACCESS(This,
  this_0), modCount);
 JCGO_FIELD_NZACCESS(This, count)= JCGO_FIELD_NZACCESS(JCGO_FIELD_NZACCESS(This,
  this_0), size);
 JCGO_FIELD_NZACCESS(This, idx)= JCGO_ARRAY_LENGTH(JCGO_FIELD_NZACCESS(JCGO_FIELD_NZACCESS(This,
  this_0), buckets));
}

JCGO_NOSEP_STATIC java_util_Hashtable_EntryIterator CFASTCALL
java_util_Hashtable_EntryIterator__this__L76hud( java_util_Hashtable_EntryIterator
 This, java_util_Hashtable this_0 )
{
 {
  JCGO_FIELD_NZACCESS(This, this_0)= this_0;
  java_util_Hashtable_EntryIterator__void(This);
 }
 return This;
}

JCGO_NOSEP_INLINE java_util_Hashtable_EntryIterator CFASTCALL
java_util_Hashtable_EntryIterator__new__L76hud( java_util_Hashtable
 this_0 )
{
 return java_util_Hashtable_EntryIterator__this__L76hud(
  (java_util_Hashtable_EntryIterator)jcgo_newObject((jvtable)&java_util_Hashtable_EntryIterator_methods),
  this_0);
}

JCGO_NOSEP_INLINE jboolean CFASTCALL
java_util_Hashtable_EntryIterator__hasNext__( java_util_Hashtable_EntryIterator
 This )
{
 {
  return (jboolean)(JCGO_FIELD_NZACCESS(This, count) > 0);
 }
}

JCGO_NOSEP_STATIC java_lang_Object CFASTCALL
java_util_Hashtable_EntryIterator__next__( java_util_Hashtable_EntryIterator
 This )
{
 {
  java_util_Hashtable_HashEntry e;
  if (JCGO_FIELD_NZACCESS(This, knownMod) != JCGO_FIELD_NZACCESS(JCGO_FIELD_NZACCESS(This,
   this_0), modCount))
  {
   JCGO_THROW_EXC(java_util_ConcurrentModificationException__new__());
  }
  if (JCGO_FIELD_NZACCESS(This, count) == 0)
  {
   JCGO_THROW_EXC(java_util_NoSuchElementException__new__());
  }
  JCGO_FIELD_NZACCESS(This, count)--;
  e= JCGO_FIELD_NZACCESS(This, next);
  while (e == jnull)
  {
   if (JCGO_FIELD_NZACCESS(This, idx) <= 0)
   {
    return (java_lang_Object)jnull;
   }
   else
   {
    jObject jcgo_rcvrL1;
    e= (jcgo_rcvrL1= (jObject)JCGO_FIELD_NZACCESS(JCGO_FIELD_NZACCESS(This,
     this_0), buckets), (java_util_Hashtable_HashEntry)JCGO_ARRAY_LACCESS((jObjectArr)jcgo_rcvrL1,
     --JCGO_FIELD_NZACCESS(This, idx)));
   }
  }
  JCGO_FIELD_NZACCESS(This, next)= JCGO_FIELD_NZACCESS(e, next);
  JCGO_FIELD_NZACCESS(This, last)= e;
  return (java_lang_Object)e;
 }
}

JCGO_NOSEP_STATIC void CFASTCALL
java_util_Hashtable_EntryIterator__remove__( java_util_Hashtable_EntryIterator
 This )
{
 {
  if (JCGO_FIELD_NZACCESS(This, knownMod) != JCGO_FIELD_NZACCESS(JCGO_FIELD_NZACCESS(This,
   this_0), modCount))
  {
   JCGO_THROW_EXC(java_util_ConcurrentModificationException__new__());
  }
  if (JCGO_FIELD_NZACCESS(This, last) == jnull)
  {
   JCGO_THROW_EXC(java_lang_IllegalStateException__new__());
  }
  (java_util_Hashtable__remove__Lo(
   JCGO_FIELD_NZACCESS(This, this_0), JCGO_FIELD_ACCESS(java_util_Hashtable_HashEntry,
   JCGO_FIELD_NZACCESS(This, last), key)));
  JCGO_FIELD_NZACCESS(This, last)= (java_util_Hashtable_HashEntry)jnull;
  JCGO_FIELD_NZACCESS(This, knownMod)++;
 }
}

JCGO_NOSEP_DATA CONST struct java_util_Hashtable_EntryIterator_methods_s
 java_util_Hashtable_EntryIterator_methods=
{
 JCGO_CLASSREF_OF(java_util_Hashtable_EntryIterator__class),
 JCGO_GCJDESCR_INIT(java_util_Hashtable_EntryIterator_s, next)
 OBJT_java_util_Hashtable_EntryIterator,
 (JCGO_OBJSIZE_T)sizeof(struct java_util_Hashtable_EntryIterator_s),
 NULL,
 JCGO_CLINIT_INIT(0)
 0,
 java_lang_Object__equals__Lo,
 java_lang_Object__hashCode__,
 java_lang_Object__toString__,
 java_lang_Object__finalize__,
 java_util_Hashtable_EntryIterator__hasNext__,
 java_util_Hashtable_EntryIterator__next__,
 java_util_Hashtable_EntryIterator__remove__
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_util_Hashtable_EntryIterator_class_s
 java_util_Hashtable_EntryIterator__class JCGO_THRD_ATTRNONGC=
{
 {
  &java_lang_Class_methods,
  JCGO_MON_INIT
  JCGO_OBJREF_OF(*(java_lang_Object)&java_util_Hashtable_EntryIterator_methods),
  JCGO_STRREF_OF(jcgo_string1_EntrItrt),
  JCGO_CLASSREF_OF(java_lang_Object__class),
  ((jObjectArr)JCGO_OBJREF_OF(jcgo_array2_EntrItrt)),
  0x2
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype2_GameMdl jcgo_array2_EntrItrt=
{
 (jvtable)&jObjectArr_methods,
 JCGO_MON_INIT
 1,
 JCGO_CLASSREF_OF(java_lang_Class__class),
 {
  (jObject)JCGO_CLASSREF_OF(java_util_Iterator__class)
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype48_GameShll jcgo_array3_EntrItrt=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 33,
 {
  (jbyte)(jchar)106/*'j'*/, (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)118/*'v'*/,
   (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)46/*'.'*/, (jbyte)(jchar)117/*'u'*/,
   (jbyte)(jchar)116/*'t'*/, (jbyte)(jchar)105/*'i'*/, (jbyte)(jchar)108/*'l'*/,
   (jbyte)(jchar)46/*'.'*/, (jbyte)(jchar)72/*'H'*/, (jbyte)(jchar)97/*'a'*/,
   (jbyte)(jchar)115/*'s'*/, (jbyte)(jchar)104/*'h'*/, (jbyte)(jchar)116/*'t'*/,
   (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)98/*'b'*/, (jbyte)(jchar)108/*'l'*/,
   (jbyte)(jchar)101/*'e'*/, (jbyte)(jchar)36/*'$'*/, (jbyte)(jchar)69/*'E'*/,
   (jbyte)(jchar)110/*'n'*/, (jbyte)(jchar)116/*'t'*/, (jbyte)(jchar)114/*'r'*/,
   (jbyte)(jchar)121/*'y'*/, (jbyte)(jchar)73/*'I'*/, (jbyte)(jchar)116/*'t'*/,
   (jbyte)(jchar)101/*'e'*/, (jbyte)(jchar)114/*'r'*/, (jbyte)(jchar)97/*'a'*/,
   (jbyte)(jchar)116/*'t'*/, (jbyte)(jchar)111/*'o'*/, (jbyte)(jchar)114/*'r'*/
 }
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string1_EntrItrt
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array3_EntrItrt),
 0, 33, (jint)0x9b4abefcL
};

#ifdef CHKALL_java_util_Hashtable
#include "jcgochke.h"
#endif

#endif
