/* DO NOT EDIT THIS FILE - it is machine generated (JCGO_116) */

#ifdef JCGO_116

JCGO_NOSEP_INLINE jint CFASTCALL
gnu_java_math_MPN__mul_1__IAIAII( jintArr dest, jintArr x, jint len,
 jint y );

JCGO_NOSEP_INLINE jint CFASTCALL
gnu_java_math_MPN__add_1__IAIAII( jintArr dest, jintArr x, jint size,
 jint y );

JCGO_NOSEP_INLINE jlong CFASTCALL
gnu_java_math_MPN__udiv_qrnnd__JI( jlong N, jint D );

JCGO_NOSEP_FRWINL jint CFASTCALL
gnu_java_math_MPN__divmod_1__IAIAII( jintArr quotient, jintArr dividend,
 jint len, jint divisor );

JCGO_NOSEP_STATIC jint CFASTCALL
gnu_java_math_MPN__chars_per_word__I( jint radix );

JCGO_NOSEP_FRWINL jint CFASTCALL
gnu_java_math_MPN__set_str__IABAII( jintArr dest, jbyteArr str, jint
 str_len, jint base );

JCGO_NOSEP_STATIC gnu_java_math_MPN CFASTCALL
gnu_java_math_MPN__this__( gnu_java_math_MPN This );

struct gnu_java_math_MPN_methods_s
{
 java_lang_Class jcgo_class;
 JCGO_GCJDESCR_DEFN
 JCGO_TYPEID_T jcgo_typeid;
 JCGO_OBJSIZE_T jcgo_objsize;
 CONST struct jcgo_reflect_s *jcgo_reflect;
 JCGO_CLINIT_DEFN
 gnu_java_math_MPN (CFASTCALL *jcgo_thisRtn)( gnu_java_math_MPN This
  );
 jboolean (CFASTCALL *equals__Lo)( java_lang_Object This, java_lang_Object
  obj );
 jint (CFASTCALL *hashCode__)( java_lang_Object This );
 java_lang_String (CFASTCALL *toString__)( java_lang_Object This );
 void (CFASTCALL *finalize__)( java_lang_Object This );
};

struct gnu_java_math_MPN_class_s
{
 struct java_lang_Class_s jcgo_class;
};

JCGO_SEP_EXTERN CONST struct gnu_java_math_MPN_methods_s gnu_java_math_MPN_methods;
JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct gnu_java_math_MPN_class_s gnu_java_math_MPN__class;

struct gnu_java_math_MPN_s
{
 CONST struct gnu_java_math_MPN_methods_s *JCGO_IMMFLD_CONST jcgo_methods;
 JCGO_MON_DEFN
};

JCGO_SEP_EXTERN CONST jcgo_arrtype492_Mdclnt jcgo_array2_Mpn;

JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string1_Mpn;

#endif