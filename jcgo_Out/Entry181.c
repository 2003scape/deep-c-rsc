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

JCGO_NOSEP_STATIC java_util_LinkedList_Entry CFASTCALL
java_util_LinkedList_Entry__this__Lo( java_util_LinkedList_Entry This,
 java_lang_Object data )
{
 {
  ;
  JCGO_FIELD_NZACCESS(This, data)= data;
 }
 return This;
}

JCGO_NOSEP_FRWINL java_util_LinkedList_Entry CFASTCALL
java_util_LinkedList_Entry__new__Lo( java_lang_Object data )
{
 return java_util_LinkedList_Entry__this__Lo(
  (java_util_LinkedList_Entry)jcgo_newObject((jvtable)&java_util_LinkedList_Entry_methods),
  data);
}

JCGO_NOSEP_DATA CONST struct java_util_LinkedList_Entry_methods_s
 java_util_LinkedList_Entry_methods=
{
 JCGO_CLASSREF_OF(java_util_LinkedList_Entry__class),
 JCGO_GCJDESCR_ZEROINIT
 OBJT_java_util_LinkedList_Entry,
 (JCGO_OBJSIZE_T)sizeof(struct java_util_LinkedList_Entry_s),
 NULL,
 JCGO_CLINIT_INIT(0)
 0,
 java_lang_Object__equals__Lo,
 java_lang_Object__hashCode__,
 java_lang_Object__toString__,
 java_lang_Object__finalize__
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_util_LinkedList_Entry_class_s
 java_util_LinkedList_Entry__class JCGO_THRD_ATTRNONGC=
{
 {
  &java_lang_Class_methods,
  JCGO_MON_INIT
  JCGO_OBJREF_OF(*(java_lang_Object)&java_util_LinkedList_Entry_methods),
  JCGO_STRREF_OF(jcgo_string1_Entry181),
  JCGO_CLASSREF_OF(java_lang_Object__class),
  ((jObjectArr)JCGO_OBJREF_OF(jcgo_array3_Object)),
  0x1a
 }
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string1_Entry181
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array3_LnkdLst),
 0, 26, (jint)0xc6955185L
};

#ifdef CHKALL_java_util_LinkedList
#include "jcgochke.h"
#endif

#endif
