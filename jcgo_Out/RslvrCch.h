/* DO NOT EDIT THIS FILE - it is machine generated (JCGO_116) */

#ifdef JCGO_116

JCGO_NOSEP_INLINE java_lang_Object CFASTCALL
java_net_ResolverCache__makeHashableAddress__BA( jbyteArr addr );

JCGO_NOSEP_STATIC jint CFASTCALL
java_net_ResolverCache__getTTL__LsI( java_lang_String propName, jint
 defaultValue );

JCGO_NOSEP_FRWINL java_lang_String CFASTCALL
java_net_ResolverCache__getHostByAddr__BA( jbyteArr addr );

JCGO_NOSEP_FRWINL jObjectArr CFASTCALL
java_net_ResolverCache__getHostByName__Ls( java_lang_String hostname
 );

JCGO_NOSEP_STATIC java_net_ResolverCache_Entry CFASTCALL
java_net_ResolverCache__get__Lo( java_lang_Object key );

JCGO_NOSEP_STATIC void CFASTCALL
java_net_ResolverCache__put__L4levq( java_net_ResolverCache_Entry
 entry );

JCGO_NOSEP_STATIC void CFASTCALL
java_net_ResolverCache__reap__( void );

JCGO_NOSEP_STATIC java_net_ResolverCache CFASTCALL
java_net_ResolverCache__this__( java_net_ResolverCache This );

struct java_net_ResolverCache_methods_s
{
 java_lang_Class jcgo_class;
 JCGO_GCJDESCR_DEFN
 JCGO_TYPEID_T jcgo_typeid;
 JCGO_OBJSIZE_T jcgo_objsize;
 CONST struct jcgo_reflect_s *jcgo_reflect;
 JCGO_CLINIT_DEFN
 java_net_ResolverCache (CFASTCALL *jcgo_thisRtn)( java_net_ResolverCache
  This );
 jboolean (CFASTCALL *equals__Lo)( java_lang_Object This, java_lang_Object
  obj );
 jint (CFASTCALL *hashCode__)( java_lang_Object This );
 java_lang_String (CFASTCALL *toString__)( java_lang_Object This );
 void (CFASTCALL *finalize__)( java_lang_Object This );
};

struct java_net_ResolverCache_class_s
{
 struct java_lang_Class_s jcgo_class;
};

JCGO_SEP_EXTERN CONST struct java_net_ResolverCache_methods_s java_net_ResolverCache_methods;
JCGO_SEP_EXTERN struct java_net_ResolverCache_class_s java_net_ResolverCache__class;

JCGO_NOSEP_STATIC void CFASTCALL
java_net_ResolverCache__class__0( void );

JCGO_SEP_GCEXTERN java_util_HashMap java_net_ResolverCache__cache;
JCGO_SEP_GCEXTERN java_util_LinkedList java_net_ResolverCache__killqueue;
JCGO_SEP_EXTERN jint java_net_ResolverCache__POSITIVE_TTL;
JCGO_SEP_EXTERN jint java_net_ResolverCache__NEGATIVE_TTL;

struct java_net_ResolverCache_s
{
 CONST struct java_net_ResolverCache_methods_s *JCGO_IMMFLD_CONST jcgo_methods;
 JCGO_MON_DEFN
};

JCGO_SEP_EXTERN CONST jcgo_arrtype90_GmCnnctn jcgo_array4_RslvrCch;

JCGO_SEP_EXTERN CONST jcgo_arrtype94_GmCnnctn jcgo_array5_RslvrCch;

JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string1_RslvrCch;

JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string2_RslvrCch;

JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string3_RslvrCch;

#endif
