/* DO NOT EDIT THIS FILE - it is machine generated (JCGO_116) */

#ifdef JCGO_116

JCGO_NOSEP_INLINE java_lang_String CFASTCALL
java_security_Permission__getName__( java_security_Permission This
 );

JCGO_NOSEP_STATIC java_security_Permission CFASTCALL
java_security_Permission__this__Ls( java_security_Permission This,
 java_lang_String name );

JCGO_NOSEP_STATIC java_lang_String CFASTCALL
java_security_Permission__toString__( java_security_Permission This
 );

struct java_security_Permission_methods_s
{
 java_lang_Class jcgo_class;
 JCGO_GCJDESCR_DEFN
 JCGO_TYPEID_T jcgo_typeid;
 JCGO_OBJSIZE_T jcgo_objsize;
 CONST struct jcgo_reflect_s *jcgo_reflect;
 JCGO_CLINIT_DEFN
 java_security_Permission (CFASTCALL *jcgo_thisRtn)( java_security_Permission
  This );
 jboolean (CFASTCALL *equals__Lo)( java_security_Permission This, java_lang_Object
  obj );
 jint (CFASTCALL *hashCode__)( java_security_Permission This );
 java_lang_String (CFASTCALL *toString__)( java_security_Permission
  This );
 void (CFASTCALL *finalize__)( java_lang_Object This );
 java_lang_String (CFASTCALL *getActions__)( java_security_Permission
  This );
};

struct java_security_Permission_class_s
{
 struct java_lang_Class_s jcgo_class;
};

JCGO_SEP_EXTERN CONST struct jcgo_methods_s java_security_Permission_methods;
JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_security_Permission_class_s
 java_security_Permission__class;

struct java_security_Permission_s
{
 CONST struct java_security_Permission_methods_s *JCGO_IMMFLD_CONST
  jcgo_methods;
 JCGO_MON_DEFN
 java_lang_String name;
};

JCGO_SEP_EXTERN CONST jcgo_arrtype94_GmCnnctn jcgo_array2_Prmssn;

JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string1_Prmssn;

#endif