/* DO NOT EDIT THIS FILE - it is machine generated (JCGO_116) */

#ifdef JCGO_116

JCGO_NOSEP_STATIC java_util_Collections_EmptyList CFASTCALL
java_util_Collections_EmptyList__this__( java_util_Collections_EmptyList
 This );
JCGO_NOSEP_FRWINL java_util_Collections_EmptyList CFASTCALL
java_util_Collections_EmptyList__new__( void );

JCGO_NOSEP_INLINE jint CFASTCALL
java_util_Collections_EmptyList__size__( java_util_Collections_EmptyList
 This );

JCGO_NOSEP_INLINE java_lang_Object CFASTCALL
java_util_Collections_EmptyList__get__I( java_util_Collections_EmptyList
 This, jint index );

JCGO_NOSEP_INLINE jboolean CFASTCALL
java_util_Collections_EmptyList__contains__Lo( java_util_Collections_EmptyList
 This, java_lang_Object o );

JCGO_NOSEP_INLINE jboolean CFASTCALL
java_util_Collections_EmptyList__equals__Lo( java_util_Collections_EmptyList
 This, java_lang_Object o );

JCGO_NOSEP_INLINE jint CFASTCALL
java_util_Collections_EmptyList__hashCode__( java_util_Collections_EmptyList
 This );

JCGO_NOSEP_INLINE java_lang_String CFASTCALL
java_util_Collections_EmptyList__toString__( java_util_Collections_EmptyList
 This );

struct java_util_Collections_EmptyList_methods_s
{
 java_lang_Class jcgo_class;
 JCGO_GCJDESCR_DEFN
 JCGO_TYPEID_T jcgo_typeid;
 JCGO_OBJSIZE_T jcgo_objsize;
 CONST struct jcgo_reflect_s *jcgo_reflect;
 JCGO_CLINIT_DEFN
 java_util_Collections_EmptyList (CFASTCALL *jcgo_thisRtn)( java_util_Collections_EmptyList
  This );
 jboolean (CFASTCALL *equals__Lo)( java_util_Collections_EmptyList
  This, java_lang_Object o );
 jint (CFASTCALL *hashCode__)( java_util_Collections_EmptyList This
  );
 java_lang_String (CFASTCALL *toString__)( java_util_Collections_EmptyList
  This );
 void (CFASTCALL *finalize__)( java_lang_Object This );
 jboolean (CFASTCALL *isEmpty__)( java_util_AbstractCollection This
  );
 java_util_Iterator (CFASTCALL *iterator__)( java_util_AbstractList
  This );
 jint (CFASTCALL *size__)( java_util_Collections_EmptyList This );
 jboolean (CFASTCALL *add__Lo)( java_util_AbstractList This, java_lang_Object
  o );
 jboolean (CFASTCALL *contains__Lo)( java_util_Collections_EmptyList
  This, java_lang_Object o );
 void (CFASTCALL *jcgo_dummy1)( void );
 java_lang_Object (CFASTCALL *get__I)( java_util_Collections_EmptyList
  This, jint index );
 void (CFASTCALL *add__ILo)( java_util_AbstractList This, java_lang_Object
  o, jint index );
 java_util_Iterator (CFASTCALL *listIterator__I)( java_util_AbstractList
  This, jint index );
 java_lang_Object (CFASTCALL *remove__I)( java_util_AbstractList This,
  jint index );
};

struct java_util_Collections_EmptyList_class_s
{
 struct java_lang_Class_s jcgo_class;
};

JCGO_SEP_EXTERN CONST struct java_util_Collections_EmptyList_methods_s
 java_util_Collections_EmptyList_methods;
JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_util_Collections_EmptyList_class_s
 java_util_Collections_EmptyList__class;

struct java_util_Collections_EmptyList_s
{
 CONST struct java_util_Collections_EmptyList_methods_s *JCGO_IMMFLD_CONST
  jcgo_methods;
 JCGO_MON_DEFN
 jint modCount;
};

JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string1_EmptyLst;

#endif