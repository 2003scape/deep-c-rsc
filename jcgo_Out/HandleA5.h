/* DO NOT EDIT THIS FILE - it is machine generated (JCGO_116) */

#ifdef JCGO_116

JCGO_NOSEP_STATIC gnu_java_nio_VMChannel_Handle CFASTCALL
gnu_java_nio_VMChannel_Handle__this__( gnu_java_nio_VMChannel_Handle
 This );

struct gnu_java_nio_VMChannel_Handle_methods_s
{
 java_lang_Class jcgo_class;
 JCGO_GCJDESCR_DEFN
 JCGO_TYPEID_T jcgo_typeid;
 JCGO_OBJSIZE_T jcgo_objsize;
 CONST struct jcgo_reflect_s *jcgo_reflect;
 JCGO_CLINIT_DEFN
 gnu_java_nio_VMChannel_Handle (CFASTCALL *jcgo_thisRtn)( gnu_java_nio_VMChannel_Handle
  This );
 jboolean (CFASTCALL *equals__Lo)( java_lang_Object This, java_lang_Object
  obj );
 jint (CFASTCALL *hashCode__)( java_lang_Object This );
 java_lang_String (CFASTCALL *toString__)( java_lang_Object This );
 void (CFASTCALL *finalize__)( java_lang_Object This );
 jint (CFASTCALL *getNativeFD__)( gnu_java_nio_VMChannel_Handle This
  );
 void (CFASTCALL *setNonBlocking__Z)( gnu_java_nio_VMChannel_Handle
  This, jboolean on );
 jint (CFASTCALL *available__)( gnu_java_nio_VMChannel_Handle This
  );
 jint (CFASTCALL *read__BAII)( gnu_java_nio_VMChannel_Handle This,
  jbyteArr buffer, jint off, jint len );
 void (CFASTCALL *write__BAIAI)( gnu_java_nio_VMChannel_Handle This,
  jbyteArr buffer, jintArr offArr, jint len );
 void (CFASTCALL *close__)( gnu_java_nio_VMChannel_Handle This );
 jboolean (CFASTCALL *needsCloseOnFinalize__)( gnu_java_nio_VMChannel_Handle
  This );
};

struct gnu_java_nio_VMChannel_Handle_class_s
{
 struct java_lang_Class_s jcgo_class;
};

JCGO_SEP_EXTERN CONST struct jcgo_methods_s gnu_java_nio_VMChannel_Handle_methods;
JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct gnu_java_nio_VMChannel_Handle_class_s
 gnu_java_nio_VMChannel_Handle__class;

struct gnu_java_nio_VMChannel_Handle_s
{
 CONST struct gnu_java_nio_VMChannel_Handle_methods_s *JCGO_IMMFLD_CONST
  jcgo_methods;
 JCGO_MON_DEFN
};

JCGO_SEP_EXTERN CONST jcgo_arrtype86_GmCnnctn jcgo_array2_HandleA5;

JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string1_HandleA5;

#endif
