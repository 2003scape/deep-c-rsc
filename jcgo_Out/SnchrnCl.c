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

JCGO_NOSEP_INLINE java_util_Collections_SynchronizedCollection CFASTCALL
java_util_Collections_SynchronizedCollection__this__LoL07mt2( java_util_Collections_SynchronizedCollection
 This, java_lang_Object sync, java_util_Collection c )
{
 {
  ;
  JCGO_FIELD_NZACCESS(This, c)= c;
  JCGO_FIELD_NZACCESS(This, mutex)= sync;
 }
 return This;
}

JCGO_NOSEP_INLINE jboolean CFASTCALL
java_util_Collections_SynchronizedCollection__isEmpty__( java_util_Collections_SynchronizedCollection
 This )
{
 {
  {
   JCGO_SYNC_BLOCK(JCGO_FIELD_NZACCESS(This, mutex))
   {
    jObject jcgo_rcvrL1;
    {
     jboolean jcgo_retval= (jboolean)(jcgo_rcvrL1= (jObject)JCGO_FIELD_NZACCESS(This,
      c), JCGO_CALL_VFUNC((java_util_Collection)jcgo_rcvrL1)->isEmpty__(
      (java_util_Collection)jcgo_rcvrL1));
#ifndef JCGO_SEHTRY
     JCGO_SYNC_JUMPLEAVE(0);
#endif
     return jcgo_retval;
    }
   }
   JCGO_SYNC_ENDUNREACH
  }
 }
}

JCGO_NOSEP_STATIC java_util_Iterator CFASTCALL
java_util_Collections_SynchronizedCollection__iterator__( java_util_Collections_SynchronizedCollection
 This )
{
 {
  {
   JCGO_SYNC_BLOCK(JCGO_FIELD_NZACCESS(This, mutex))
   {
    jObject jcgo_rcvrL1;
    jObject jcgo_rcvrL2;
    {
     java_util_Iterator jcgo_retval= (java_util_Iterator)(jcgo_rcvrL1=
      (jObject)JCGO_FIELD_NZACCESS(This, mutex), java_util_Collections_SynchronizedIterator__new__LoL23h9x(
      (java_lang_Object)jcgo_rcvrL1, (jcgo_rcvrL2= (jObject)JCGO_FIELD_NZACCESS(This,
      c), JCGO_CALL_VFUNC((java_util_Collection)jcgo_rcvrL2)->iterator__(
      (java_util_Collection)jcgo_rcvrL2))));
#ifndef JCGO_SEHTRY
     JCGO_SYNC_JUMPLEAVE(0);
#endif
     return jcgo_retval;
    }
   }
   JCGO_SYNC_ENDUNREACH
  }
 }
}

JCGO_NOSEP_INLINE jint CFASTCALL
java_util_Collections_SynchronizedCollection__size__( java_util_Collections_SynchronizedCollection
 This )
{
 {
  {
   JCGO_SYNC_BLOCK(JCGO_FIELD_NZACCESS(This, mutex))
   {
    jObject jcgo_rcvrL1;
    {
     jint jcgo_retval= (jcgo_rcvrL1= (jObject)JCGO_FIELD_NZACCESS(This,
      c), JCGO_CALL_VFUNC((java_util_Collection)jcgo_rcvrL1)->size__(
      (java_util_Collection)jcgo_rcvrL1));
#ifndef JCGO_SEHTRY
     JCGO_SYNC_JUMPLEAVE(0);
#endif
     return jcgo_retval;
    }
   }
   JCGO_SYNC_ENDUNREACH
  }
 }
}

JCGO_NOSEP_INLINE java_lang_String CFASTCALL
java_util_Collections_SynchronizedCollection__toString__( java_util_Collections_SynchronizedCollection
 This )
{
 {
  {
   JCGO_SYNC_BLOCK(JCGO_FIELD_NZACCESS(This, mutex))
   {
    jObject jcgo_rcvrL1;
    {
     java_lang_String jcgo_retval= (jcgo_rcvrL1= (jObject)JCGO_FIELD_NZACCESS(This,
      c), JCGO_CALL_VFUNC((java_util_Collection)jcgo_rcvrL1)->toString__(
      (java_lang_Object)jcgo_rcvrL1));
#ifndef JCGO_SEHTRY
     JCGO_SYNC_JUMPLEAVE(0);
#endif
     return jcgo_retval;
    }
   }
   JCGO_SYNC_ENDUNREACH
  }
 }
}

JCGO_NOSEP_DATA CONST struct java_util_Collections_SynchronizedCollection_methods_s
 java_util_Collections_SynchronizedCollection_methods=
{
 JCGO_CLASSREF_OF(java_util_Collections_SynchronizedCollection__class),
 JCGO_GCJDESCR_ZEROINIT
 OBJT_java_util_Collections_SynchronizedCollection,
 (JCGO_OBJSIZE_T)sizeof(struct java_util_Collections_SynchronizedCollection_s),
 NULL,
 JCGO_CLINIT_INIT(0)
 0,
 java_lang_Object__equals__Lo,
 java_lang_Object__hashCode__,
 java_util_Collections_SynchronizedCollection__toString__,
 java_lang_Object__finalize__,
 java_util_Collections_SynchronizedCollection__isEmpty__,
 java_util_Collections_SynchronizedCollection__iterator__,
 java_util_Collections_SynchronizedCollection__size__
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_util_Collections_SynchronizedCollection_class_s
 java_util_Collections_SynchronizedCollection__class JCGO_THRD_ATTRNONGC=
{
 {
  &java_lang_Class_methods,
  JCGO_MON_INIT
  JCGO_OBJREF_OF(*(java_lang_Object)&java_util_Collections_SynchronizedCollection_methods),
  JCGO_STRREF_OF(jcgo_string1_SnchrnCl),
  JCGO_CLASSREF_OF(java_lang_Object__class),
  ((jObjectArr)JCGO_OBJREF_OF(jcgo_array4_AbstrcCl)),
  0x8
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype117_GmCnnctn jcgo_array2_SnchrnCl=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 44,
 {
  (jbyte)(jchar)106/*'j'*/, (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)118/*'v'*/,
   (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)46/*'.'*/, (jbyte)(jchar)117/*'u'*/,
   (jbyte)(jchar)116/*'t'*/, (jbyte)(jchar)105/*'i'*/, (jbyte)(jchar)108/*'l'*/,
   (jbyte)(jchar)46/*'.'*/, (jbyte)(jchar)67/*'C'*/, (jbyte)(jchar)111/*'o'*/,
   (jbyte)(jchar)108/*'l'*/, (jbyte)(jchar)108/*'l'*/, (jbyte)(jchar)101/*'e'*/,
   (jbyte)(jchar)99/*'c'*/, (jbyte)(jchar)116/*'t'*/, (jbyte)(jchar)105/*'i'*/,
   (jbyte)(jchar)111/*'o'*/, (jbyte)(jchar)110/*'n'*/, (jbyte)(jchar)115/*'s'*/,
   (jbyte)(jchar)36/*'$'*/, (jbyte)(jchar)83/*'S'*/, (jbyte)(jchar)121/*'y'*/,
   (jbyte)(jchar)110/*'n'*/, (jbyte)(jchar)99/*'c'*/, (jbyte)(jchar)104/*'h'*/,
   (jbyte)(jchar)114/*'r'*/, (jbyte)(jchar)111/*'o'*/, (jbyte)(jchar)110/*'n'*/,
   (jbyte)(jchar)105/*'i'*/, (jbyte)(jchar)122/*'z'*/, (jbyte)(jchar)101/*'e'*/,
   (jbyte)(jchar)100/*'d'*/, (jbyte)(jchar)67/*'C'*/, (jbyte)(jchar)111/*'o'*/,
   (jbyte)(jchar)108/*'l'*/, (jbyte)(jchar)108/*'l'*/, (jbyte)(jchar)101/*'e'*/,
   (jbyte)(jchar)99/*'c'*/, (jbyte)(jchar)116/*'t'*/, (jbyte)(jchar)105/*'i'*/,
   (jbyte)(jchar)111/*'o'*/, (jbyte)(jchar)110/*'n'*/
 }
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string1_SnchrnCl
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array2_SnchrnCl),
 0, 44, (jint)0xcf2b7ca1L
};

#ifdef CHKALL_java_util_Collections
#include "jcgochke.h"
#endif

#endif
