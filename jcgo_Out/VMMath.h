/* DO NOT EDIT THIS FILE - it is machine generated (JCGO_116) */

#ifdef JCGO_116

#define JCGO_NATMATH_sin__D
JCGO_NOSEP_STATIC jdouble CFASTCALL
java_lang_VMMath__sin__D( jdouble a );

#define JCGO_NATMATH_cos__D
JCGO_NOSEP_STATIC jdouble CFASTCALL
java_lang_VMMath__cos__D( jdouble a );

#define JCGO_NATMATH_sqrt__D
JCGO_NOSEP_STATIC jdouble CFASTCALL
java_lang_VMMath__sqrt__D( jdouble a );

#define JCGO_NATMATH_pow__DD
JCGO_NOSEP_STATIC jdouble CFASTCALL
java_lang_VMMath__pow__DD( jdouble a, jdouble b );

#define JCGO_NATCLASS_java_lang_VMMath

struct java_lang_VMMath_methods_s
{
 java_lang_Class jcgo_class;
 JCGO_GCJDESCR_DEFN
 JCGO_TYPEID_T jcgo_typeid;
 JCGO_OBJSIZE_T jcgo_objsize;
 CONST struct jcgo_reflect_s *jcgo_reflect;
 JCGO_CLINIT_DEFN
 java_lang_VMMath (CFASTCALL *jcgo_thisRtn)( java_lang_VMMath This
  );
 jboolean (CFASTCALL *equals__Lo)( java_lang_Object This, java_lang_Object
  obj );
 jint (CFASTCALL *hashCode__)( java_lang_Object This );
 java_lang_String (CFASTCALL *toString__)( java_lang_Object This );
 void (CFASTCALL *finalize__)( java_lang_Object This );
};

struct java_lang_VMMath_class_s
{
 struct java_lang_Class_s jcgo_class;
};

JCGO_SEP_EXTERN CONST struct jcgo_methods_s java_lang_VMMath_methods;
JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_lang_VMMath_class_s java_lang_VMMath__class;

struct java_lang_VMMath_s
{
 CONST struct java_lang_VMMath_methods_s *JCGO_IMMFLD_CONST jcgo_methods;
 JCGO_MON_DEFN
};

JCGO_SEP_EXTERN CONST jcgo_arrtype22_Object jcgo_array2_VMMath;

JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string1_VMMath;

#endif