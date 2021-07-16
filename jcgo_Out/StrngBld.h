/* DO NOT EDIT THIS FILE - it is machine generated (JCGO_116) */

#ifdef JCGO_116

#define java_lang_StringBuilder__DEFAULT_CAPACITY (jint)16

JCGO_NOSEP_STATIC java_lang_StringBuilder CFASTCALL
java_lang_StringBuilder__this__I( java_lang_StringBuilder This, jint
 capacity );
JCGO_NOSEP_INLINE java_lang_StringBuilder CFASTCALL
java_lang_StringBuilder__new__I( jint capacity );

JCGO_NOSEP_INLINE jboolean CFASTCALL
java_lang_StringBuilder__hasHighByte__CAII( jcharArr chars, jint offset,
 jint count );

JCGO_NOSEP_INLINE void CFASTCALL
java_lang_StringBuilder__copyCharsToBytes__CAIBAII( jcharArr chars,
 jbyteArr bytes2, jint offset, jint offset2, jint count );

JCGO_NOSEP_INLINE void CFASTCALL
java_lang_StringBuilder__copyBytesToChars__BAICAII( jbyteArr bytes,
 jcharArr chars2, jint offset, jint offset2, jint count );

JCGO_NOSEP_FRWINL java_lang_StringBuilder CFASTCALL
java_lang_StringBuilder__this__( java_lang_StringBuilder This );
JCGO_NOSEP_INLINE java_lang_StringBuilder CFASTCALL
java_lang_StringBuilder__new__( void );

JCGO_NOSEP_STATIC java_lang_StringBuilder CFASTCALL
java_lang_StringBuilder__this__Ls( java_lang_StringBuilder This, java_lang_String
 str );
JCGO_NOSEP_INLINE java_lang_StringBuilder CFASTCALL
java_lang_StringBuilder__new__Ls( java_lang_String str );

JCGO_NOSEP_FRWINL jint CFASTCALL
java_lang_StringBuilder__length__( java_lang_StringBuilder This );

JCGO_NOSEP_INLINE void CFASTCALL
java_lang_StringBuilder__setLength__I( java_lang_StringBuilder This,
 jint newLength );

JCGO_NOSEP_INLINE java_lang_StringBuilder CFASTCALL
java_lang_StringBuilder__append__Lo( java_lang_StringBuilder This,
 java_lang_Object obj );

JCGO_NOSEP_STATIC java_lang_StringBuilder CFASTCALL
java_lang_StringBuilder__append__Ls( java_lang_StringBuilder This,
 java_lang_String str );

JCGO_NOSEP_STATIC java_lang_StringBuilder CFASTCALL
java_lang_StringBuilder__append__C( java_lang_StringBuilder This,
 jchar ch );

JCGO_NOSEP_FRWINL java_lang_StringBuilder CFASTCALL
java_lang_StringBuilder__append__I( java_lang_StringBuilder This,
 jint v );

JCGO_NOSEP_FRWINL java_lang_String CFASTCALL
java_lang_StringBuilder__toString__( java_lang_StringBuilder This
 );
JCGO_NOSEP_FRWINL java_lang_String CFASTCALL
java_lang_StringBuilder__toString__X( java_lang_StringBuilder This,
 java_lang_String jcgo_stackparam );

JCGO_NOSEP_FRWINL java_lang_Object CFASTCALL
java_lang_StringBuilder__value__( java_lang_StringBuilder This );

JCGO_NOSEP_FRWINL void CFASTCALL
java_lang_StringBuilder__setShared__( java_lang_StringBuilder This
 );

JCGO_NOSEP_STATIC void CFASTCALL
java_lang_StringBuilder__ensureCapacityInner__IZ( java_lang_StringBuilder
 This, jint minimumCapacity, jboolean outOfByte );

struct java_lang_StringBuilder_methods_s
{
 java_lang_Class jcgo_class;
 JCGO_GCJDESCR_DEFN
 JCGO_TYPEID_T jcgo_typeid;
 JCGO_OBJSIZE_T jcgo_objsize;
 CONST struct jcgo_reflect_s *jcgo_reflect;
 JCGO_CLINIT_DEFN
 java_lang_StringBuilder (CFASTCALL *jcgo_thisRtn)( java_lang_StringBuilder
  This );
 jboolean (CFASTCALL *equals__Lo)( java_lang_Object This, java_lang_Object
  obj );
 jint (CFASTCALL *hashCode__)( java_lang_Object This );
 java_lang_String (CFASTCALL *toString__)( java_lang_StringBuilder
  This );
 void (CFASTCALL *finalize__)( java_lang_Object This );
};

struct java_lang_StringBuilder_class_s
{
 struct java_lang_Class_s jcgo_class;
};

JCGO_SEP_EXTERN CONST struct java_lang_StringBuilder_methods_s java_lang_StringBuilder_methods;
JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_lang_StringBuilder_class_s
 java_lang_StringBuilder__class;

struct java_lang_StringBuilder_s
{
 CONST struct java_lang_StringBuilder_methods_s *JCGO_IMMFLD_CONST
  jcgo_methods;
 JCGO_MON_DEFN
 jcharArr value;
 jbyteArr bytes;
 jint count;
 jboolean shared;
};

JCGO_SEP_EXTERN CONST jcgo_arrtype91_GmCnnctn jcgo_array2_StrngBld;

JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string1_StrngBld;

#endif
