/* DO NOT EDIT THIS FILE - it is machine generated (JCGO_116) */

#ifdef JCGO_116

JCGO_NOSEP_INLINE jbyte CFASTCALL
package_BZLib__getUchar__L0h0mx( package_BZState state );

JCGO_NOSEP_INLINE jbyte CFASTCALL
package_BZLib__getBit__L0h0mx( package_BZState state );

JCGO_NOSEP_INLINE void CFASTCALL
package_BZLib__makeMaps__L0h0mx( package_BZState state );

JCGO_NOSEP_INLINE void CFASTCALL
package_BZLib__createDecodeTables__IAIAIABAIII( jintArr limit, jintArr
 base, jintArr perm, jbyteArr length, jint minLen, jint maxLen, jint
 alphaSize );

JCGO_NOSEP_INLINE void CFASTCALL
package_BZLib__nextHeader__L0h0mx( package_BZState state );

JCGO_NOSEP_INLINE void CFASTCALL
package_BZLib__decompress__L0h0mx( package_BZState state );

JCGO_NOSEP_STATIC jint CFASTCALL
package_BZLib__decompress__BAIBAII( jbyteArr out, jbyteArr in, jint
 outSize, jint inSize, jint offset );

JCGO_NOSEP_STATIC jint CFASTCALL
package_BZLib__getBits__IL0h0mx( package_BZState state, jint i );

JCGO_NOSEP_STATIC package_BZLib CFASTCALL
package_BZLib__this__( package_BZLib This );

struct package_BZLib_methods_s
{
 java_lang_Class jcgo_class;
 JCGO_GCJDESCR_DEFN
 JCGO_TYPEID_T jcgo_typeid;
 JCGO_OBJSIZE_T jcgo_objsize;
 CONST struct jcgo_reflect_s *jcgo_reflect;
 JCGO_CLINIT_DEFN
 package_BZLib (CFASTCALL *jcgo_thisRtn)( package_BZLib This );
 jboolean (CFASTCALL *equals__Lo)( java_lang_Object This, java_lang_Object
  obj );
 jint (CFASTCALL *hashCode__)( java_lang_Object This );
 java_lang_String (CFASTCALL *toString__)( java_lang_Object This );
 void (CFASTCALL *finalize__)( java_lang_Object This );
};

struct package_BZLib_class_s
{
 struct java_lang_Class_s jcgo_class;
};

JCGO_SEP_EXTERN CONST struct package_BZLib_methods_s package_BZLib_methods;
JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct package_BZLib_class_s package_BZLib__class;

struct package_BZLib_s
{
 CONST struct package_BZLib_methods_s *JCGO_IMMFLD_CONST jcgo_methods;
 JCGO_MON_DEFN
};

JCGO_SEP_EXTERN CONST jcgo_arrtype30_Object jcgo_array4_BZLib;

JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string1_BZLib;

JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string3_BZLib;

#endif
