/* DO NOT EDIT THIS FILE - it is machine generated (JCGO_116) */

#ifdef JCGO_116

JCGO_NOSEP_INLINE void CFASTCALL
java_util_LinkedList__void( java_util_LinkedList This );

JCGO_NOSEP_STATIC java_util_LinkedList_Entry CFASTCALL
java_util_LinkedList__getEntry__I( java_util_LinkedList This, jint
 n );

JCGO_NOSEP_STATIC void CFASTCALL
java_util_LinkedList__removeEntry__L0dc3c( java_util_LinkedList This,
 java_util_LinkedList_Entry e );

JCGO_NOSEP_STATIC void CFASTCALL
java_util_LinkedList__checkBoundsInclusive__I( java_util_LinkedList
 This, jint index );

JCGO_NOSEP_STATIC void CFASTCALL
java_util_LinkedList__checkBoundsExclusive__I( java_util_LinkedList
 This, jint index );

JCGO_NOSEP_STATIC java_util_LinkedList CFASTCALL
java_util_LinkedList__this__( java_util_LinkedList This );
JCGO_NOSEP_FRWINL java_util_LinkedList CFASTCALL
java_util_LinkedList__new__( void );

JCGO_NOSEP_STATIC void CFASTCALL
java_util_LinkedList__addLastEntry__L0dc3c( java_util_LinkedList This,
 java_util_LinkedList_Entry e );

JCGO_NOSEP_STATIC jboolean CFASTCALL
java_util_LinkedList__contains__Lo( java_util_LinkedList This, java_lang_Object
 o );

JCGO_NOSEP_INLINE jint CFASTCALL
java_util_LinkedList__size__( java_util_LinkedList This );

JCGO_NOSEP_STATIC jboolean CFASTCALL
java_util_LinkedList__add__Lo( java_util_LinkedList This, java_lang_Object
 o );

JCGO_NOSEP_STATIC java_lang_Object CFASTCALL
java_util_LinkedList__get__I( java_util_LinkedList This, jint index
 );

JCGO_NOSEP_STATIC void CFASTCALL
java_util_LinkedList__add__ILo( java_util_LinkedList This, java_lang_Object
 o, jint index );

JCGO_NOSEP_STATIC java_lang_Object CFASTCALL
java_util_LinkedList__remove__I( java_util_LinkedList This, jint index
 );

JCGO_NOSEP_STATIC java_util_Iterator CFASTCALL
java_util_LinkedList__listIterator__I( java_util_LinkedList This,
 jint index );

struct java_util_LinkedList_methods_s
{
 java_lang_Class jcgo_class;
 JCGO_GCJDESCR_DEFN
 JCGO_TYPEID_T jcgo_typeid;
 JCGO_OBJSIZE_T jcgo_objsize;
 CONST struct jcgo_reflect_s *jcgo_reflect;
 JCGO_CLINIT_DEFN
 java_util_LinkedList (CFASTCALL *jcgo_thisRtn)( java_util_LinkedList
  This );
 jboolean (CFASTCALL *equals__Lo)( java_util_AbstractList This, java_lang_Object
  o );
 jint (CFASTCALL *hashCode__)( java_util_AbstractList This );
 java_lang_String (CFASTCALL *toString__)( java_util_AbstractCollection
  This );
 void (CFASTCALL *finalize__)( java_lang_Object This );
 jboolean (CFASTCALL *isEmpty__)( java_util_AbstractCollection This
  );
 java_util_Iterator (CFASTCALL *iterator__)( java_util_AbstractSequentialList
  This );
 jint (CFASTCALL *size__)( java_util_LinkedList This );
 jboolean (CFASTCALL *add__Lo)( java_util_LinkedList This, java_lang_Object
  o );
 jboolean (CFASTCALL *contains__Lo)( java_util_LinkedList This, java_lang_Object
  o );
 jboolean (CFASTCALL *containsAll__L07mt2)( java_util_AbstractCollection
  This, java_util_Collection c );
 java_lang_Object (CFASTCALL *get__I)( java_util_LinkedList This, jint
  index );
 void (CFASTCALL *add__ILo)( java_util_LinkedList This, java_lang_Object
  o, jint index );
 java_util_Iterator (CFASTCALL *listIterator__I)( java_util_LinkedList
  This, jint index );
 java_lang_Object (CFASTCALL *remove__I)( java_util_LinkedList This,
  jint index );
};

struct java_util_LinkedList_class_s
{
 struct java_lang_Class_s jcgo_class;
};

JCGO_SEP_EXTERN CONST struct java_util_LinkedList_methods_s java_util_LinkedList_methods;
JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_util_LinkedList_class_s
 java_util_LinkedList__class;

struct java_util_LinkedList_s
{
 CONST struct java_util_LinkedList_methods_s *JCGO_IMMFLD_CONST jcgo_methods;
 JCGO_MON_DEFN
 jint modCount;
 java_util_LinkedList_Entry first;
 java_util_LinkedList_Entry last;
 jint size;
};

JCGO_SEP_EXTERN CONST jcgo_arrtype5_Hshtbl jcgo_array2_LnkdLst;

JCGO_SEP_EXTERN CONST jcgo_arrtype27_Object jcgo_array3_LnkdLst;

JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string1_LnkdLst;

#endif
