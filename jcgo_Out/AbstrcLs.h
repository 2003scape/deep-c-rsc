/* DO NOT EDIT THIS FILE - it is machine generated (JCGO_116) */

#ifdef JCGO_116

JCGO_NOSEP_INLINE void CFASTCALL
java_util_AbstractList__add__ILo( java_util_AbstractList This, java_lang_Object
 o, jint index );

JCGO_NOSEP_FRWINL java_util_Iterator CFASTCALL
java_util_AbstractList__iterator__( java_util_AbstractList This );

JCGO_NOSEP_INLINE java_util_Iterator CFASTCALL
java_util_AbstractList__listIterator__I( java_util_AbstractList This,
 jint index );

JCGO_NOSEP_STATIC java_util_AbstractList CFASTCALL
java_util_AbstractList__this__( java_util_AbstractList This );

JCGO_NOSEP_STATIC jboolean CFASTCALL
java_util_AbstractList__add__Lo( java_util_AbstractList This, java_lang_Object
 o );

JCGO_NOSEP_STATIC jboolean CFASTCALL
java_util_AbstractList__equals__Lo( java_util_AbstractList This, java_lang_Object
 o );

JCGO_NOSEP_STATIC jint CFASTCALL
java_util_AbstractList__hashCode__( java_util_AbstractList This );

JCGO_NOSEP_INLINE java_util_Iterator CFASTCALL
java_util_AbstractList__listIterator__( java_util_AbstractList This
 );

JCGO_NOSEP_INLINE java_lang_Object CFASTCALL
java_util_AbstractList__remove__I( java_util_AbstractList This, jint
 index );

struct java_util_AbstractList_methods_s
{
 java_lang_Class jcgo_class;
 JCGO_GCJDESCR_DEFN
 JCGO_TYPEID_T jcgo_typeid;
 JCGO_OBJSIZE_T jcgo_objsize;
 CONST struct jcgo_reflect_s *jcgo_reflect;
 JCGO_CLINIT_DEFN
 java_util_AbstractList (CFASTCALL *jcgo_thisRtn)( java_util_AbstractList
  This );
 jboolean (CFASTCALL *equals__Lo)( java_util_AbstractList This, java_lang_Object
  o );
 jint (CFASTCALL *hashCode__)( java_util_AbstractList This );
 java_lang_String (CFASTCALL *toString__)( java_util_AbstractCollection
  This );
 void (CFASTCALL *finalize__)( java_lang_Object This );
 jboolean (CFASTCALL *isEmpty__)( java_util_AbstractCollection This
  );
 java_util_Iterator (CFASTCALL *iterator__)( java_util_AbstractList
  This );
 jint (CFASTCALL *size__)( java_util_AbstractCollection This );
 jboolean (CFASTCALL *add__Lo)( java_util_AbstractList This, java_lang_Object
  o );
 jboolean (CFASTCALL *contains__Lo)( java_util_AbstractCollection This,
  java_lang_Object o );
 jboolean (CFASTCALL *containsAll__L07mt2)( java_util_AbstractCollection
  This, java_util_Collection c );
 java_lang_Object (CFASTCALL *get__I)( java_util_AbstractList This,
  jint index );
 void (CFASTCALL *add__ILo)( java_util_AbstractList This, java_lang_Object
  o, jint index );
 java_util_Iterator (CFASTCALL *listIterator__I)( java_util_AbstractList
  This, jint index );
 java_lang_Object (CFASTCALL *remove__I)( java_util_AbstractList This,
  jint index );
};

struct java_util_AbstractList_class_s
{
 struct java_lang_Class_s jcgo_class;
};

JCGO_SEP_EXTERN CONST struct jcgo_methods_s java_util_AbstractList_methods;
JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_util_AbstractList_class_s
 java_util_AbstractList__class;

struct java_util_AbstractList_s
{
 CONST struct java_util_AbstractList_methods_s *JCGO_IMMFLD_CONST jcgo_methods;
 JCGO_MON_DEFN
 jint modCount;
};

JCGO_SEP_EXTERN CONST jcgo_arrtype2_GameMdl jcgo_array4_AbstrcLs;

JCGO_SEP_EXTERN CONST jcgo_arrtype94_GmCnnctn jcgo_array5_AbstrcLs;

JCGO_SEP_EXTERN CONST jcgo_arrtype24_Object jcgo_array6_AbstrcLs;

JCGO_SEP_EXTERN CONST jcgo_arrtype24_Object jcgo_array7_AbstrcLs;

JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string1_AbstrcLs;

JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string2_AbstrcLs;

JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string3_AbstrcLs;

#endif
