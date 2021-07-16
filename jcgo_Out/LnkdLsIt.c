/* DO NOT EDIT THIS FILE - it is machine generated (JCGO_116) */

#ifdef JCGO_SEPARATED
#define JCGO_116
#include "jcgortl.h"
#include "Main.h"
#endif

#ifdef JCGO_116

#ifdef CHKALL_java_util_LinkedList
#include "jcgobchk.h"
#endif

JCGO_NOSEP_INLINE void CFASTCALL
java_util_LinkedList_LinkedListItr__void( java_util_LinkedList_LinkedListItr
 This )
{
 JCGO_FIELD_NZACCESS(This, knownMod)= JCGO_FIELD_NZACCESS(JCGO_FIELD_NZACCESS(This,
  this_0), modCount);
}

JCGO_NOSEP_INLINE void CFASTCALL
java_util_LinkedList_LinkedListItr__checkMod__( java_util_LinkedList_LinkedListItr
 This )
{
 {
  if (JCGO_FIELD_NZACCESS(This, knownMod) != JCGO_FIELD_NZACCESS(JCGO_FIELD_NZACCESS(This,
   this_0), modCount))
  {
   JCGO_THROW_EXC(java_util_ConcurrentModificationException__new__());
  }
 }
}

JCGO_NOSEP_INLINE java_util_LinkedList_LinkedListItr CFASTCALL
java_util_LinkedList_LinkedListItr__this__L9aslsI( java_util_LinkedList_LinkedListItr
 This, java_util_LinkedList this_0, jint index )
{
 {
  JCGO_FIELD_NZACCESS(This, this_0)= this_0;
  java_util_LinkedList_LinkedListItr__void(This);
  if (index == JCGO_FIELD_NZACCESS(JCGO_FIELD_NZACCESS(This, this_0),
   size))
  {
   JCGO_FIELD_NZACCESS(This, next)= (java_util_LinkedList_Entry)jnull;
   JCGO_FIELD_NZACCESS(This, previous)= JCGO_FIELD_NZACCESS(JCGO_FIELD_NZACCESS(This,
    this_0), last);
  }
  else
  {
   JCGO_FIELD_NZACCESS(This, next)= (java_util_LinkedList__getEntry__I(
    JCGO_FIELD_NZACCESS(This, this_0), index));
   JCGO_FIELD_NZACCESS(This, previous)= JCGO_FIELD_ACCESS(java_util_LinkedList_Entry,
    JCGO_FIELD_NZACCESS(This, next), previous);
  }
  JCGO_FIELD_NZACCESS(This, position)= index;
 }
 return This;
}

JCGO_NOSEP_FRWINL java_util_LinkedList_LinkedListItr CFASTCALL
java_util_LinkedList_LinkedListItr__new__L9aslsI( java_util_LinkedList
 this_0, jint index )
{
 return java_util_LinkedList_LinkedListItr__this__L9aslsI(
  (java_util_LinkedList_LinkedListItr)jcgo_newObject((jvtable)&java_util_LinkedList_LinkedListItr_methods),
  this_0, index);
}

JCGO_NOSEP_INLINE jboolean CFASTCALL
java_util_LinkedList_LinkedListItr__hasNext__( java_util_LinkedList_LinkedListItr
 This )
{
 {
  return (jboolean)(JCGO_FIELD_NZACCESS(This, next) != jnull);
 }
}

JCGO_NOSEP_STATIC java_lang_Object CFASTCALL
java_util_LinkedList_LinkedListItr__next__( java_util_LinkedList_LinkedListItr
 This )
{
 {
  (java_util_LinkedList_LinkedListItr__checkMod__(
   This));
  if (JCGO_FIELD_NZACCESS(This, next) == jnull)
  {
   JCGO_THROW_EXC(java_util_NoSuchElementException__new__());
  }
  JCGO_FIELD_NZACCESS(This, position)++;
  JCGO_FIELD_NZACCESS(This, lastReturned)= JCGO_FIELD_NZACCESS(This,
   previous)= JCGO_FIELD_NZACCESS(This, next);
  JCGO_FIELD_NZACCESS(This, next)= JCGO_FIELD_ACCESS(java_util_LinkedList_Entry,
   JCGO_FIELD_NZACCESS(This, lastReturned), next);
  return JCGO_FIELD_ACCESS(java_util_LinkedList_Entry, JCGO_FIELD_NZACCESS(This,
   lastReturned), data);
 }
}

JCGO_NOSEP_STATIC void CFASTCALL
java_util_LinkedList_LinkedListItr__remove__( java_util_LinkedList_LinkedListItr
 This )
{
 {
  (java_util_LinkedList_LinkedListItr__checkMod__(
   This));
  if (JCGO_FIELD_NZACCESS(This, lastReturned) == jnull)
  {
   JCGO_THROW_EXC(java_lang_IllegalStateException__new__());
  }
  if (JCGO_FIELD_NZACCESS(This, lastReturned) == JCGO_FIELD_NZACCESS(This,
   previous))
  {
   JCGO_FIELD_NZACCESS(This, position)--;
  }
  JCGO_FIELD_NZACCESS(This, next)= JCGO_FIELD_ACCESS(java_util_LinkedList_Entry,
   JCGO_FIELD_NZACCESS(This, lastReturned), next);
  JCGO_FIELD_NZACCESS(This, previous)= JCGO_FIELD_ACCESS(java_util_LinkedList_Entry,
   JCGO_FIELD_NZACCESS(This, lastReturned), previous);
  (java_util_LinkedList__removeEntry__L0dc3c(
   JCGO_FIELD_NZACCESS(This, this_0), JCGO_FIELD_NZACCESS(This, lastReturned)));
  JCGO_FIELD_NZACCESS(This, knownMod)++;
  JCGO_FIELD_NZACCESS(This, lastReturned)= (java_util_LinkedList_Entry)jnull;
 }
}

JCGO_NOSEP_DATA CONST struct java_util_LinkedList_LinkedListItr_methods_s
 java_util_LinkedList_LinkedListItr_methods=
{
 JCGO_CLASSREF_OF(java_util_LinkedList_LinkedListItr__class),
 JCGO_GCJDESCR_INIT(java_util_LinkedList_LinkedListItr_s, lastReturned)
 OBJT_java_util_LinkedList_LinkedListItr,
 (JCGO_OBJSIZE_T)sizeof(struct java_util_LinkedList_LinkedListItr_s),
 NULL,
 JCGO_CLINIT_INIT(0)
 0,
 java_lang_Object__equals__Lo,
 java_lang_Object__hashCode__,
 java_lang_Object__toString__,
 java_lang_Object__finalize__,
 java_util_LinkedList_LinkedListItr__hasNext__,
 java_util_LinkedList_LinkedListItr__next__,
 java_util_LinkedList_LinkedListItr__remove__
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_util_LinkedList_LinkedListItr_class_s
 java_util_LinkedList_LinkedListItr__class JCGO_THRD_ATTRNONGC=
{
 {
  &java_lang_Class_methods,
  JCGO_MON_INIT
  JCGO_OBJREF_OF(*(java_lang_Object)&java_util_LinkedList_LinkedListItr_methods),
  JCGO_STRREF_OF(jcgo_string1_LnkdLsIt),
  JCGO_CLASSREF_OF(java_lang_Object__class),
  ((jObjectArr)JCGO_OBJREF_OF(jcgo_array2_EntrItrt)),
  0x12
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype87_GmCnnctn jcgo_array2_LnkdLsIt=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 34,
 {
  (jbyte)(jchar)106/*'j'*/, (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)118/*'v'*/,
   (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)46/*'.'*/, (jbyte)(jchar)117/*'u'*/,
   (jbyte)(jchar)116/*'t'*/, (jbyte)(jchar)105/*'i'*/, (jbyte)(jchar)108/*'l'*/,
   (jbyte)(jchar)46/*'.'*/, (jbyte)(jchar)76/*'L'*/, (jbyte)(jchar)105/*'i'*/,
   (jbyte)(jchar)110/*'n'*/, (jbyte)(jchar)107/*'k'*/, (jbyte)(jchar)101/*'e'*/,
   (jbyte)(jchar)100/*'d'*/, (jbyte)(jchar)76/*'L'*/, (jbyte)(jchar)105/*'i'*/,
   (jbyte)(jchar)115/*'s'*/, (jbyte)(jchar)116/*'t'*/, (jbyte)(jchar)36/*'$'*/,
   (jbyte)(jchar)76/*'L'*/, (jbyte)(jchar)105/*'i'*/, (jbyte)(jchar)110/*'n'*/,
   (jbyte)(jchar)107/*'k'*/, (jbyte)(jchar)101/*'e'*/, (jbyte)(jchar)100/*'d'*/,
   (jbyte)(jchar)76/*'L'*/, (jbyte)(jchar)105/*'i'*/, (jbyte)(jchar)115/*'s'*/,
   (jbyte)(jchar)116/*'t'*/, (jbyte)(jchar)73/*'I'*/, (jbyte)(jchar)116/*'t'*/,
   (jbyte)(jchar)114/*'r'*/
 }
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string1_LnkdLsIt
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array2_LnkdLsIt),
 0, 34, (jint)0xb0ae5ce3L
};

#ifdef CHKALL_java_util_LinkedList
#include "jcgochke.h"
#endif

#endif