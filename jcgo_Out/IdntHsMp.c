/* DO NOT EDIT THIS FILE - it is machine generated (JCGO_116) */

#ifdef JCGO_SEPARATED
#define JCGO_116
#include "jcgortl.h"
#include "Main.h"
#endif

#ifdef JCGO_116

#ifdef CHKALL_java_lang_VMClass
#include "jcgobchk.h"
#endif

JCGO_NOSEP_INLINE void CFASTCALL
java_lang_VMClass_IdentityHashMap__void( java_lang_VMClass_IdentityHashMap
 This )
{
 JCGO_FIELD_NZACCESS(This, table)= (jObjectArr)jcgo_newArray(JCGO_CLASSREF_OF(java_lang_Object__class),
  0, JCGO_SHL_F((jint)13, (jint)1));
}

JCGO_NOSEP_STATIC java_lang_VMClass_IdentityHashMap CFASTCALL
java_lang_VMClass_IdentityHashMap__this__( java_lang_VMClass_IdentityHashMap
 This )
{
 {
  ;
  java_lang_VMClass_IdentityHashMap__void(This);
 }
 return This;
}

JCGO_NOSEP_FRWINL java_lang_VMClass_IdentityHashMap CFASTCALL
java_lang_VMClass_IdentityHashMap__new__( void )
{
 return java_lang_VMClass_IdentityHashMap__this__(
  (java_lang_VMClass_IdentityHashMap)jcgo_newObject((jvtable)&java_lang_VMClass_IdentityHashMap_methods));
}

JCGO_NOSEP_STATIC java_lang_Object CFASTCALL
java_lang_VMClass_IdentityHashMap__get__Lo( java_lang_VMClass_IdentityHashMap
 This, java_lang_Object key )
{
 {
  jObjectArr table;
  jint i;
  table= JCGO_FIELD_NZACCESS(This, table);
  i= (java_lang_VMClass_IdentityHashMap__indexFor__LoLoA(
   key, table));
  return ((java_lang_Object)JCGO_ARRAY_NZLACCESS(table, i)) == key?
   ((java_lang_Object)JCGO_ARRAY_NZLACCESS(table, i + (jint)1)) : jnull;
 }
}

JCGO_NOSEP_STATIC java_lang_Object CFASTCALL
java_lang_VMClass_IdentityHashMap__put__LoLo( java_lang_VMClass_IdentityHashMap
 This, java_lang_Object key, java_lang_Object value )
{
 {
  jObjectArr table;
  jint i;
  table= JCGO_FIELD_NZACCESS(This, table);
  i= (java_lang_VMClass_IdentityHashMap__indexFor__LoLoA(
   key, table));
  if (((java_lang_Object)JCGO_ARRAY_NZLACCESS(table, i)) == key)
  {
   java_lang_Object oldValue;
   oldValue= ((java_lang_Object)JCGO_ARRAY_NZLACCESS(table, i + (jint)1));
   JCGO_ARRAY_NZOBJSET(void, table, i + (jint)1, value);
   return oldValue;
  }
  if (value != jnull)
  {
   if (JCGO_USHR_F(JCGO_ARRAY_NZLENGTH(table), (jint)3) * (jint)3 <
    JCGO_FIELD_NZACCESS(This, size))
   {
    jObjectArr oldTable;
    java_lang_Object oldKey;
    java_lang_Object oldValue;
    jint j;
    jint count;
    oldTable= table;
    j= JCGO_ARRAY_NZLENGTH(oldTable);
    table= (jObjectArr)jcgo_newArray(JCGO_CLASSREF_OF(java_lang_Object__class),
     0, JCGO_SHL_F((j + (jint)1), (jint)1));
    count= 0;
    while ((j-= (jint)2) >= 0)
    {
     if ((oldKey= ((java_lang_Object)JCGO_ARRAY_NZLACCESS(oldTable,
      j))) != jnull && (oldValue= ((java_lang_Object)JCGO_ARRAY_NZLACCESS(oldTable,
      j + (jint)1))) != jnull)
     {
      i= (java_lang_VMClass_IdentityHashMap__indexFor__LoLoA(
       oldKey, table));
      JCGO_ARRAY_NZOBJSET(void, table, i, oldKey);
      JCGO_ARRAY_NZOBJSET(void, table, i + (jint)1, oldValue);
      count++;
     }
    }
    JCGO_FIELD_NZACCESS(This, table)= table;
    JCGO_FIELD_NZACCESS(This, size)= count;
    i= (java_lang_VMClass_IdentityHashMap__indexFor__LoLoA(
     key, table));
   }
   JCGO_FIELD_NZACCESS(This, size)++;
   JCGO_ARRAY_NZOBJSET(void, table, i, key);
   JCGO_ARRAY_NZOBJSET(void, table, i + (jint)1, value);
  }
  return (java_lang_Object)jnull;
 }
}

JCGO_NOSEP_STATIC jint CFASTCALL
java_lang_VMClass_IdentityHashMap__indexFor__LoLoA( java_lang_Object
 key, jObjectArr table )
{
 {
  java_lang_Object oldKey;
  jint i;
  i= (java_lang_VMSystem__identityHashCode__Lo(
   key));
  i+= ~JCGO_SHL_F(i, (jint)9);
  if ((i= JCGO_SHL_F((jcgo_mod((JCGO_USHR_F(i, (jint)14) ^ i), JCGO_SHR_F(JCGO_ARRAY_LENGTH(table),
   (jint)1))), (jint)1)) < 0)
  {
   i= (-i);
  }
  ;
  while ((oldKey= ((java_lang_Object)JCGO_ARRAY_NZLACCESS(table, i))) !=
   key && oldKey != jnull)
  {
   if ((i-= (jint)2) < 0)
   {
    i= JCGO_ARRAY_NZLENGTH(table) - (jint)2;
   }
  }
  return i;
 }
}

JCGO_NOSEP_DATA CONST struct java_lang_VMClass_IdentityHashMap_methods_s
 java_lang_VMClass_IdentityHashMap_methods=
{
 JCGO_CLASSREF_OF(java_lang_VMClass_IdentityHashMap__class),
 JCGO_GCJDESCR_INIT(java_lang_VMClass_IdentityHashMap_s, table)
 OBJT_java_lang_VMClass_IdentityHashMap,
 (JCGO_OBJSIZE_T)sizeof(struct java_lang_VMClass_IdentityHashMap_s),
 NULL,
 JCGO_CLINIT_INIT(0)
 java_lang_VMClass_IdentityHashMap__this__,
 java_lang_Object__equals__Lo,
 java_lang_Object__hashCode__,
 java_lang_Object__toString__,
 java_lang_Object__finalize__
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_VMClass_IdentityHashMap_class_s
 java_lang_VMClass_IdentityHashMap__class JCGO_THRD_ATTRNONGC=
{
 {
  &java_lang_Class_methods,
  JCGO_MON_INIT
  JCGO_OBJREF_OF(*(java_lang_Object)&java_lang_VMClass_IdentityHashMap_methods),
  JCGO_STRREF_OF(jcgo_string1_IdntHsMp),
  JCGO_CLASSREF_OF(java_lang_Object__class),
  ((jObjectArr)JCGO_OBJREF_OF(jcgo_array3_Object)),
  0x18
 }
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string1_IdntHsMp
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array581_Mdclnt),
 0, 33, (jint)0xf2017559L
};

#ifdef CHKALL_java_lang_VMClass
#include "jcgochke.h"
#endif

#endif
