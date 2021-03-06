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

JCGO_NOSEP_STATIC java_util_HashMap CFASTCALL
java_util_HashMap__this__I( java_util_HashMap This, jint initialCapacity
 )
{
 {
  jint capacity;
  (java_util_AbstractMap__this__((java_util_AbstractMap)This));
  if (initialCapacity < 0)
  {
   JCGO_THROW_EXC((java_lang_IllegalArgumentException__new__Ls(
    java_lang_VMSystem__concat0X__LsLs(
    JCGO_STRREF_OF(jcgo_string2_Hshtbl), (java_lang_String__valueOf__I(
    initialCapacity))))));
  }
  if (initialCapacity >= java_util_HashMap__MAXIMUM_CAPACITY)
  {
   initialCapacity= java_util_HashMap__MAXIMUM_CAPACITY;
  }
  capacity= (jint)1;
  while (capacity < initialCapacity)
  {
   capacity= JCGO_SHL_F(capacity, (jint)1);
  }
  JCGO_FIELD_NZACCESS(This, buckets)= (jObjectArr)jcgo_newArray(JCGO_CLASSREF_OF(java_util_HashMap_HashEntry__class),
   0, capacity);
  JCGO_FIELD_NZACCESS(This, loadFactor)= (jfloat)0.75;
  JCGO_FIELD_NZACCESS(This, loadFactorPercent)= (jint)75;
  JCGO_FIELD_NZACCESS(This, threshold)= capacity - JCGO_SHR_F((capacity +
   (jint)3), (jint)2);
 }
 return This;
}

JCGO_NOSEP_INLINE java_util_HashMap CFASTCALL
java_util_HashMap__new__I( jint initialCapacity )
{
 return java_util_HashMap__this__I(
  (java_util_HashMap)jcgo_newObject((jvtable)&java_util_HashMap_methods),
  initialCapacity);
}

JCGO_NOSEP_INLINE jint CFASTCALL
java_util_HashMap__indexFor__I( java_util_HashMap This, jint hash
 )
{
 {
  return hash & (JCGO_ARRAY_LENGTH(JCGO_FIELD_NZACCESS(This, buckets)) -
   (jint)1);
 }
}

JCGO_NOSEP_INLINE void CFASTCALL
java_util_HashMap__addEntry__LoLoIZI( java_util_HashMap This, java_lang_Object
 key, java_lang_Object value, jint idx, jint hash, jboolean callRemove
 )
{
 {
  java_util_HashMap_HashEntry e;
  e= (java_util_HashMap_HashEntry__new__LoLoI(
   key, value, hash));
  JCGO_FIELD_NZACCESS(e, next)= ((java_util_HashMap_HashEntry)JCGO_ARRAY_LACCESS(JCGO_FIELD_NZACCESS(This,
   buckets), idx));
  *(java_util_HashMap_HashEntry*)&JCGO_ARRAY_LACCESS(JCGO_FIELD_NZACCESS(This,
   buckets), idx)= e;
 }
}

JCGO_NOSEP_INLINE void CFASTCALL
java_util_HashMap__rehash__( java_util_HashMap This )
{
 {
  jObjectArr oldBuckets;
  jObjectArr buckets;
  jint newcapacity;
  jint intFactor;
  oldBuckets= JCGO_FIELD_NZACCESS(This, buckets);
  if (JCGO_ARRAY_LENGTH(oldBuckets) == java_util_HashMap__MAXIMUM_CAPACITY)
  {
   JCGO_FIELD_NZACCESS(This, threshold)= JCGO_USHR_F((-(jint)1), (jint)1);
   return;
  }
  newcapacity= JCGO_SHL_F(JCGO_ARRAY_NZLENGTH(oldBuckets), (jint)1);
  intFactor= JCGO_FIELD_NZACCESS(This, loadFactorPercent);
  if (intFactor > 0)
  {
   JCGO_FIELD_NZACCESS(This, threshold)= jcgo_div(JCGO_USHR_F((-(jint)1),
    (jint)1), intFactor) >= newcapacity? newcapacity * intFactor /
    (jint)100 : (newcapacity / (jint)100 + (jint)1) * intFactor;
  }
  else
  {
   JCGO_FIELD_NZACCESS(This, threshold)= JCGO_JFLOAT_TOJINT(((jfloat)newcapacity *
    JCGO_FIELD_NZACCESS(This, loadFactor)));
  }
  buckets= (jObjectArr)jcgo_newArray(JCGO_CLASSREF_OF(java_util_HashMap_HashEntry__class),
   0, newcapacity);
  JCGO_FIELD_NZACCESS(This, buckets)= buckets;
  {
   jint i;
   i= 0;
   for (; i < JCGO_ARRAY_NZLENGTH(oldBuckets); i++)
   {
    java_util_HashMap_HashEntry e;
    e= ((java_util_HashMap_HashEntry)JCGO_ARRAY_NZLACCESS(oldBuckets,
     i));
    while (e != jnull)
    {
     java_util_HashMap_HashEntry next;
     jint idx;
     idx= (java_util_HashMap__indexFor__I(
      This, JCGO_FIELD_NZACCESS(e, hash)));
     next= JCGO_FIELD_NZACCESS(e, next);
     JCGO_FIELD_NZACCESS(e, next)= ((java_util_HashMap_HashEntry)JCGO_ARRAY_NZLACCESS(buckets,
      idx));
     *(java_util_HashMap_HashEntry*)&JCGO_ARRAY_NZLACCESS(buckets,
      idx)= e;
     e= next;
    }
   }
  }
 }
}

JCGO_NOSEP_INLINE java_util_HashMap CFASTCALL
java_util_HashMap__this__( java_util_HashMap This )
{
 {
  (java_util_HashMap__this__I((java_util_HashMap)This, java_util_HashMap__DEFAULT_CAPACITY));
 }
 return This;
}

JCGO_NOSEP_FRWINL java_util_HashMap CFASTCALL
java_util_HashMap__new__( void )
{
 return java_util_HashMap__this__(
  (java_util_HashMap)jcgo_newObject((jvtable)&java_util_HashMap_methods));
}

JCGO_NOSEP_INLINE jint CFASTCALL
java_util_HashMap__size__( java_util_HashMap This )
{
 {
  return JCGO_FIELD_NZACCESS(This, size);
 }
}

JCGO_NOSEP_INLINE jboolean CFASTCALL
java_util_HashMap__isEmpty__( java_util_HashMap This )
{
 {
  return (jboolean)(JCGO_FIELD_NZACCESS(This, size) == 0);
 }
}

JCGO_NOSEP_STATIC java_lang_Object CFASTCALL
java_util_HashMap__get__Lo( java_util_HashMap This, java_lang_Object
 key )
{
 {
  java_util_HashMap_HashEntry e;
  e= (java_util_HashMap__getHashEntryByKey__Lo(
   This, key));
  return e != jnull? JCGO_FIELD_NZACCESS(e, value) : jnull;
 }
}

JCGO_NOSEP_STATIC java_util_HashMap_HashEntry CFASTCALL
java_util_HashMap__getHashEntryByKey__Lo( java_util_HashMap This,
 java_lang_Object key )
{
 {
  java_util_HashMap_HashEntry e;
  jint hash;
  jObject jcgo_rcvrL1;
  hash= (java_util_HashMap__hashOf__Lo(
   This, key));
  e= (jcgo_rcvrL1= (jObject)JCGO_FIELD_NZACCESS(This, buckets), (java_util_HashMap_HashEntry)JCGO_ARRAY_LACCESS((jObjectArr)jcgo_rcvrL1,
   (java_util_HashMap__indexFor__I(
   This, hash))));
  while (e != jnull)
  {
   if (hash == JCGO_FIELD_NZACCESS(e, hash) && (java_util_AbstractMap__equals__LoLo(
    key, JCGO_FIELD_NZACCESS(e, key))))
   {
    break;
   }
   e= JCGO_FIELD_NZACCESS(e, next);
  }
  return e;
 }
}

JCGO_NOSEP_INLINE jboolean CFASTCALL
java_util_HashMap__containsKey__Lo( java_util_HashMap This, java_lang_Object
 key )
{
 {
  return (jboolean)((java_util_HashMap__getHashEntryByKey__Lo(
   This, key)) != jnull);
 }
}

JCGO_NOSEP_STATIC java_lang_Object CFASTCALL
java_util_HashMap__put__LoLo( java_util_HashMap This, java_lang_Object
 key, java_lang_Object value )
{
 {
  java_util_HashMap_HashEntry e;
  jint hash;
  jint idx;
  hash= (java_util_HashMap__hashOf__Lo(
   This, key));
  idx= (java_util_HashMap__indexFor__I(
   This, hash));
  e= ((java_util_HashMap_HashEntry)JCGO_ARRAY_LACCESS(JCGO_FIELD_NZACCESS(This,
   buckets), idx));
  while (e != jnull)
  {
   if (hash == JCGO_FIELD_NZACCESS(e, hash) && (java_util_AbstractMap__equals__LoLo(
    key, JCGO_FIELD_NZACCESS(e, key))))
   {
    java_lang_Object r;
    (java_util_HashMap_HashEntry__access__(
     e));
    r= JCGO_FIELD_NZACCESS(e, value);
    JCGO_FIELD_NZACCESS(e, value)= value;
    return r;
   }
   else
   {
    e= JCGO_FIELD_NZACCESS(e, next);
   }
  }
  (void)JCGO_VLT_PREINCI(JCGO_FIELD_NZACCESS(This, modCount));
  JCGO_FIELD_NZACCESS(This, size)++;
  (java_util_HashMap__addEntry__LoLoIZI(
   This, key, value, idx, hash, (jboolean)jtrue));
  if (JCGO_FIELD_NZACCESS(This, size) > JCGO_FIELD_NZACCESS(This, threshold))
  {
   (java_util_HashMap__rehash__(
    This));
  }
  return (java_lang_Object)jnull;
 }
}

JCGO_NOSEP_STATIC java_lang_Object CFASTCALL
java_util_HashMap__remove__Lo( java_util_HashMap This, java_lang_Object
 key )
{
 {
  java_util_HashMap_HashEntry e;
  java_util_HashMap_HashEntry last;
  jint hash;
  jint idx;
  hash= (java_util_HashMap__hashOf__Lo(
   This, key));
  idx= (java_util_HashMap__indexFor__I(
   This, hash));
  e= ((java_util_HashMap_HashEntry)JCGO_ARRAY_LACCESS(JCGO_FIELD_NZACCESS(This,
   buckets), idx));
  last= (java_util_HashMap_HashEntry)jnull;
  while (e != jnull)
  {
   if (hash == JCGO_FIELD_NZACCESS(e, hash) && (java_util_AbstractMap__equals__LoLo(
    key, JCGO_FIELD_NZACCESS(e, key))))
   {
    (void)JCGO_VLT_PREINCI(JCGO_FIELD_NZACCESS(This, modCount));
    if (last == jnull)
    {
     *(java_util_HashMap_HashEntry*)&JCGO_ARRAY_LACCESS(JCGO_FIELD_NZACCESS(This,
      buckets), idx)= JCGO_FIELD_NZACCESS(e, next);
    }
    else
    {
     JCGO_FIELD_NZACCESS(last, next)= JCGO_FIELD_NZACCESS(e, next);
    }
    JCGO_FIELD_NZACCESS(This, size)--;
    return (java_util_HashMap_HashEntry__cleanup__(
     e));
   }
   last= e;
   e= JCGO_FIELD_NZACCESS(e, next);
  }
  return (java_lang_Object)jnull;
 }
}

JCGO_NOSEP_STATIC java_util_Set CFASTCALL
java_util_HashMap__entrySet__( java_util_HashMap This )
{
 {
  if (JCGO_FIELD_NZACCESS(This, entries) == jnull)
  {
   JCGO_FIELD_NZACCESS(This, entries)= (java_util_Set)(java_util_HashMap_3__new__L8hkr7(
    This));
  }
  return JCGO_FIELD_NZACCESS(This, entries);
 }
}

JCGO_NOSEP_STATIC java_util_HashMap_HashEntry CFASTCALL
java_util_HashMap__getEntry__Lo( java_util_HashMap This, java_lang_Object
 o )
{
 {
  java_util_Map_Entry me;
  java_lang_Object key;
  java_util_HashMap_HashEntry e;
  jint hash;
  jObject jcgo_rcvrL1;
  if (!jcgo_instanceOf(OBJT_java_util_Map_Entry, MAXT_java_util_Map_Entry,
   ~0, (jObject)o))
  {
   return (java_util_HashMap_HashEntry)jnull;
  }
  me= (java_util_Map_Entry)o;
  key= (JCGO_CALL_NZVFUNC(me)->getKey__(
   me));
  hash= (java_util_HashMap__hashOf__Lo(
   This, key));
  e= (jcgo_rcvrL1= (jObject)JCGO_FIELD_NZACCESS(This, buckets), (java_util_HashMap_HashEntry)JCGO_ARRAY_LACCESS((jObjectArr)jcgo_rcvrL1,
   (java_util_HashMap__indexFor__I(
   This, hash))));
  while (e != jnull)
  {
   if (hash == JCGO_FIELD_NZACCESS(e, hash) && (java_util_AbstractMap__equals__LoLo(
    JCGO_FIELD_NZACCESS(e, key), key)))
   {
    jObject jcgo_rcvrL1;
    return (jcgo_rcvrL1= (jObject)JCGO_FIELD_NZACCESS(e, value), java_util_AbstractMap__equals__LoLo(
     (java_lang_Object)jcgo_rcvrL1, (JCGO_CALL_NZVFUNC(me)->getValue__(
     me))))? e : jnull;
   }
   e= JCGO_FIELD_NZACCESS(e, next);
  }
  return (java_util_HashMap_HashEntry)jnull;
 }
}

JCGO_NOSEP_STATIC jint CFASTCALL
java_util_HashMap__hashOf__Lo( java_util_HashMap This, java_lang_Object
 key )
{
 {
  jint hash;
  hash= (java_util_AbstractMap__hashCode__Lo(
   key));
  hash+= ~JCGO_SHL_F(hash, (jint)9);
  hash^= JCGO_USHR_F(hash, (jint)14);
  hash+= JCGO_SHL_F(hash, (jint)4);
  return JCGO_USHR_F(hash, (jint)10) ^ hash;
 }
}

JCGO_NOSEP_INLINE java_util_Iterator CFASTCALL
java_util_HashMap__iterator__I( java_util_HashMap This, jint type
 )
{
 {
  return (java_util_Iterator)(java_util_HashMap_HashIterator__new__L8hkr7I(
   This, type));
 }
}

JCGO_NOSEP_DATA CONST struct java_util_HashMap_methods_s java_util_HashMap_methods=
{
 JCGO_CLASSREF_OF(java_util_HashMap__class),
 JCGO_GCJDESCR_INIT(java_util_HashMap_s, entries)
 OBJT_java_util_HashMap,
 (JCGO_OBJSIZE_T)sizeof(struct java_util_HashMap_s),
 NULL,
 JCGO_CLINIT_INIT(0)
 java_util_HashMap__this__,
 java_util_AbstractMap__equals__Lo,
 java_util_AbstractMap__hashCode__,
 java_util_AbstractMap__toString__,
 java_lang_Object__finalize__,
 java_util_HashMap__entrySet__,
 java_util_HashMap__isEmpty__,
 java_util_HashMap__size__
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_util_HashMap_class_s
 java_util_HashMap__class JCGO_THRD_ATTRNONGC=
{
 {
  &java_lang_Class_methods,
  JCGO_MON_INIT
  JCGO_OBJREF_OF(*(java_lang_Object)&java_util_HashMap_methods),
  JCGO_STRREF_OF(jcgo_string1_HashMap),
  JCGO_CLASSREF_OF(java_util_AbstractMap__class),
  ((jObjectArr)JCGO_OBJREF_OF(jcgo_array5_Hshtbl)),
  0x1
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype42_GameShll jcgo_array2_HashMap=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 19,
 {
  (jbyte)(jchar)106/*'j'*/, (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)118/*'v'*/,
   (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)46/*'.'*/, (jbyte)(jchar)117/*'u'*/,
   (jbyte)(jchar)116/*'t'*/, (jbyte)(jchar)105/*'i'*/, (jbyte)(jchar)108/*'l'*/,
   (jbyte)(jchar)46/*'.'*/, (jbyte)(jchar)72/*'H'*/, (jbyte)(jchar)97/*'a'*/,
   (jbyte)(jchar)115/*'s'*/, (jbyte)(jchar)104/*'h'*/, (jbyte)(jchar)77/*'M'*/,
   (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)112/*'p'*/, (jbyte)(jchar)36/*'$'*/,
   (jbyte)(jchar)51/*'3'*/
 }
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string1_HashMap
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array2_HashMap),
 0, 17, (jint)0xac6427aeL
};

#ifdef CHKALL_java_util_HashMap
#include "jcgochke.h"
#endif

#endif
