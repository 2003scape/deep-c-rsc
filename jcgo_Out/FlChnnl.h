/* DO NOT EDIT THIS FILE - it is machine generated (JCGO_116) */

#ifdef JCGO_116

JCGO_NOSEP_STATIC java_nio_channels_FileChannel CFASTCALL
java_nio_channels_FileChannel__this__( java_nio_channels_FileChannel
 This );

struct java_nio_channels_FileChannel_methods_s
{
 java_lang_Class jcgo_class;
 JCGO_GCJDESCR_DEFN
 JCGO_TYPEID_T jcgo_typeid;
 JCGO_OBJSIZE_T jcgo_objsize;
 CONST struct jcgo_reflect_s *jcgo_reflect;
 JCGO_CLINIT_DEFN
 java_nio_channels_FileChannel (CFASTCALL *jcgo_thisRtn)( java_nio_channels_FileChannel
  This );
 jboolean (CFASTCALL *equals__Lo)( java_lang_Object This, java_lang_Object
  obj );
 jint (CFASTCALL *hashCode__)( java_lang_Object This );
 java_lang_String (CFASTCALL *toString__)( java_lang_Object This );
 void (CFASTCALL *finalize__)( java_lang_Object This );
 void (CFASTCALL *implCloseChannel__)( java_nio_channels_FileChannel
  This );
};

struct java_nio_channels_FileChannel_class_s
{
 struct java_lang_Class_s jcgo_class;
};

JCGO_SEP_EXTERN CONST struct jcgo_methods_s java_nio_channels_FileChannel_methods;
JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_nio_channels_FileChannel_class_s
 java_nio_channels_FileChannel__class;

struct java_nio_channels_FileChannel_s
{
 CONST struct java_nio_channels_FileChannel_methods_s *JCGO_IMMFLD_CONST
  jcgo_methods;
 JCGO_MON_DEFN
 jboolean closed;
};

JCGO_SEP_EXTERN CONST jcgo_arrtype86_GmCnnctn jcgo_array2_FlChnnl;

JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string1_FlChnnl;

#endif
