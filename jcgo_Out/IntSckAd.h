/* DO NOT EDIT THIS FILE - it is machine generated (JCGO_116) */

#ifdef JCGO_116

JCGO_NOSEP_STATIC java_net_InetSocketAddress CFASTCALL
java_net_InetSocketAddress__this__L7lnuwI( java_net_InetSocketAddress
 This, java_net_InetAddress addr, jint port );
JCGO_NOSEP_FRWINL java_net_InetSocketAddress CFASTCALL
java_net_InetSocketAddress__new__L7lnuwI( java_net_InetAddress addr,
 jint port );

JCGO_NOSEP_STATIC jboolean CFASTCALL
java_net_InetSocketAddress__equals__Lo( java_net_InetSocketAddress
 This, java_lang_Object obj );

JCGO_NOSEP_FRWINL java_net_InetAddress CFASTCALL
java_net_InetSocketAddress__getAddress__( java_net_InetSocketAddress
 This );

JCGO_NOSEP_FRWINL java_lang_String CFASTCALL
java_net_InetSocketAddress__getHostName__( java_net_InetSocketAddress
 This );

JCGO_NOSEP_FRWINL jint CFASTCALL
java_net_InetSocketAddress__getPort__( java_net_InetSocketAddress
 This );

JCGO_NOSEP_INLINE jint CFASTCALL
java_net_InetSocketAddress__hashCode__( java_net_InetSocketAddress
 This );

JCGO_NOSEP_FRWINL jboolean CFASTCALL
java_net_InetSocketAddress__isUnresolved__( java_net_InetSocketAddress
 This );

JCGO_NOSEP_STATIC java_lang_String CFASTCALL
java_net_InetSocketAddress__toString__( java_net_InetSocketAddress
 This );

struct java_net_InetSocketAddress_methods_s
{
 java_lang_Class jcgo_class;
 JCGO_GCJDESCR_DEFN
 JCGO_TYPEID_T jcgo_typeid;
 JCGO_OBJSIZE_T jcgo_objsize;
 CONST struct jcgo_reflect_s *jcgo_reflect;
 JCGO_CLINIT_DEFN
 java_net_InetSocketAddress (CFASTCALL *jcgo_thisRtn)( java_net_InetSocketAddress
  This );
 jboolean (CFASTCALL *equals__Lo)( java_net_InetSocketAddress This,
  java_lang_Object obj );
 jint (CFASTCALL *hashCode__)( java_net_InetSocketAddress This );
 java_lang_String (CFASTCALL *toString__)( java_net_InetSocketAddress
  This );
 void (CFASTCALL *finalize__)( java_lang_Object This );
};

struct java_net_InetSocketAddress_class_s
{
 struct java_lang_Class_s jcgo_class;
};

JCGO_SEP_EXTERN CONST struct java_net_InetSocketAddress_methods_s
 java_net_InetSocketAddress_methods;
JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_net_InetSocketAddress_class_s
 java_net_InetSocketAddress__class;

struct java_net_InetSocketAddress_s
{
 CONST struct java_net_InetSocketAddress_methods_s *JCGO_IMMFLD_CONST
  jcgo_methods;
 JCGO_MON_DEFN
 java_lang_String hostname;
 java_net_InetAddress addr;
 jint port;
};

JCGO_SEP_EXTERN CONST jcgo_arrtype27_Object jcgo_array3_IntSckAd;

JCGO_SEP_EXTERN CONST jcgo_arrtype492_Mdclnt jcgo_array4_IntSckAd;

JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string1_IntSckAd;

JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string2_IntSckAd;

#endif
