/* DO NOT EDIT THIS FILE - it is machine generated (JCGO_116) */

#ifdef JCGO_116

JCGO_NOSEP_INLINE java_lang_reflect_ReflectPermission CFASTCALL
java_lang_reflect_ReflectPermission__this__Ls( java_lang_reflect_ReflectPermission
 This, java_lang_String name );
JCGO_NOSEP_INLINE java_lang_reflect_ReflectPermission CFASTCALL
java_lang_reflect_ReflectPermission__new__Ls( java_lang_String name
 );

struct java_lang_reflect_ReflectPermission_methods_s
{
 java_lang_Class jcgo_class;
 JCGO_GCJDESCR_DEFN
 JCGO_TYPEID_T jcgo_typeid;
 JCGO_OBJSIZE_T jcgo_objsize;
 CONST struct jcgo_reflect_s *jcgo_reflect;
 JCGO_CLINIT_DEFN
 java_lang_reflect_ReflectPermission (CFASTCALL *jcgo_thisRtn)( java_lang_reflect_ReflectPermission
  This );
 jboolean (CFASTCALL *equals__Lo)( java_security_BasicPermission This,
  java_lang_Object obj );
 jint (CFASTCALL *hashCode__)( java_security_BasicPermission This );
 java_lang_String (CFASTCALL *toString__)( java_security_Permission
  This );
 void (CFASTCALL *finalize__)( java_lang_Object This );
 java_lang_String (CFASTCALL *getActions__)( java_security_BasicPermission
  This );
};

struct java_lang_reflect_ReflectPermission_class_s
{
 struct java_lang_Class_s jcgo_class;
};

JCGO_SEP_EXTERN CONST struct java_lang_reflect_ReflectPermission_methods_s
 java_lang_reflect_ReflectPermission_methods;
JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_lang_reflect_ReflectPermission_class_s
 java_lang_reflect_ReflectPermission__class;

struct java_lang_reflect_ReflectPermission_s
{
 CONST struct java_lang_reflect_ReflectPermission_methods_s *JCGO_IMMFLD_CONST
  jcgo_methods;
 JCGO_MON_DEFN
 java_lang_String name;
};

JCGO_SEP_EXTERN CONST jcgo_arrtype88_GmCnnctn jcgo_array2_RflctPrm;

JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string1_RflctPrm;

#endif
