/* DO NOT EDIT THIS FILE - it is machine generated (JCGO_116) */

#ifdef JCGO_116

JCGO_NOSEP_INLINE jint CFASTCALL
java_nio_CharBuffer__compareTo__Lo( java_nio_CharBuffer This, java_lang_Object
 obj );

JCGO_NOSEP_FRWINL jboolean CFASTCALL
java_nio_CharBuffer__hasArray__( java_nio_CharBuffer This );

JCGO_NOSEP_INLINE jint CFASTCALL
java_nio_CharBuffer__length__( java_nio_CharBuffer This );

JCGO_NOSEP_INLINE java_nio_CharBuffer CFASTCALL
java_nio_CharBuffer__this__IIIIL8d4dvCAI( java_nio_CharBuffer This,
 java_lang_Object address, jcharArr backing_buffer, jint capacity,
 jint limit, jint position, jint mark, jint array_offset );

JCGO_NOSEP_FRWINL java_nio_CharBuffer CFASTCALL
java_nio_CharBuffer__allocate__I( jint capacity );

JCGO_NOSEP_FRWINL java_nio_CharBuffer CFASTCALL
java_nio_CharBuffer__wrap__CAII( jcharArr array_7w5, jint offset,
 jint length );
JCGO_NOSEP_STATIC java_nio_CharBuffer CFASTCALL
java_nio_CharBuffer__wrap__CAIIX( jcharArr array_7w5, jint offset,
 jint length, java_nio_CharBufferImpl jcgo_stackparam );

JCGO_NOSEP_FRWINL java_nio_CharBuffer CFASTCALL
java_nio_CharBuffer__get__CA( java_nio_CharBuffer This, jcharArr dst
 );

JCGO_NOSEP_STATIC jcharArr CFASTCALL
java_nio_CharBuffer__array__( java_nio_CharBuffer This );

JCGO_NOSEP_STATIC jint CFASTCALL
java_nio_CharBuffer__hashCode__( java_nio_CharBuffer This );

JCGO_NOSEP_STATIC jboolean CFASTCALL
java_nio_CharBuffer__equals__Lo( java_nio_CharBuffer This, java_lang_Object
 obj );

JCGO_NOSEP_STATIC java_lang_String CFASTCALL
java_nio_CharBuffer__toString__( java_nio_CharBuffer This );

JCGO_NOSEP_INLINE java_nio_CharBuffer CFASTCALL
java_nio_CharBuffer__put__Ls( java_nio_CharBuffer This, java_lang_String
 str );

struct java_nio_CharBuffer_methods_s
{
 java_lang_Class jcgo_class;
 JCGO_GCJDESCR_DEFN
 JCGO_TYPEID_T jcgo_typeid;
 JCGO_OBJSIZE_T jcgo_objsize;
 CONST struct jcgo_reflect_s *jcgo_reflect;
 JCGO_CLINIT_DEFN
 java_nio_CharBuffer (CFASTCALL *jcgo_thisRtn)( java_nio_CharBuffer
  This );
 jboolean (CFASTCALL *equals__Lo)( java_nio_CharBuffer This, java_lang_Object
  obj );
 jint (CFASTCALL *hashCode__)( java_nio_CharBuffer This );
 java_lang_String (CFASTCALL *toString__)( java_nio_CharBuffer This
  );
 void (CFASTCALL *finalize__)( java_lang_Object This );
 jboolean (CFASTCALL *isReadOnly__)( java_nio_Buffer This );
};

struct java_nio_CharBuffer_class_s
{
 struct java_lang_Class_s jcgo_class;
};

JCGO_SEP_EXTERN CONST struct jcgo_methods_s java_nio_CharBuffer_methods;
JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_nio_CharBuffer_class_s
 java_nio_CharBuffer__class;

struct java_nio_CharBuffer_s
{
 CONST struct java_nio_CharBuffer_methods_s *JCGO_IMMFLD_CONST jcgo_methods;
 JCGO_MON_DEFN
 jint cap;
 jint limit;
 jint pos;
 jint mark;
 jcharArr backing_buffer;
 jint array_offset;
};

JCGO_SEP_EXTERN CONST jcgo_arrtype91_GmCnnctn jcgo_array2_CharBffr;

JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string1_CharBffr;

#endif
