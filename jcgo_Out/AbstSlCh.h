/* DO NOT EDIT THIS FILE - it is machine generated (JCGO_116) */

#ifdef JCGO_116

JCGO_NOSEP_INLINE void CFASTCALL
java_nio_channels_spi_AbstractSelectableChannel__void( java_nio_channels_spi_AbstractSelectableChannel
 This );

JCGO_NOSEP_INLINE java_lang_Object CFASTCALL
java_nio_channels_spi_AbstractSelectableChannel__blockingLock__( java_nio_channels_spi_AbstractSelectableChannel
 This );

JCGO_NOSEP_INLINE java_nio_channels_spi_AbstractSelectableChannel
 CFASTCALL
java_nio_channels_spi_AbstractSelectableChannel__this__L6sfa6( java_nio_channels_spi_AbstractSelectableChannel
 This, java_nio_channels_spi_SelectorProvider provider );

JCGO_NOSEP_STATIC java_nio_channels_SelectableChannel CFASTCALL
java_nio_channels_spi_AbstractSelectableChannel__configureBlocking__Z(
 java_nio_channels_spi_AbstractSelectableChannel This, jboolean blocking
 );

JCGO_NOSEP_STATIC void CFASTCALL
java_nio_channels_spi_AbstractSelectableChannel__implCloseChannel__(
 java_nio_channels_spi_AbstractSelectableChannel This );

JCGO_NOSEP_INLINE jboolean CFASTCALL
java_nio_channels_spi_AbstractSelectableChannel__isBlocking__( java_nio_channels_spi_AbstractSelectableChannel
 This );

struct java_nio_channels_spi_AbstractSelectableChannel_methods_s
{
 java_lang_Class jcgo_class;
 JCGO_GCJDESCR_DEFN
 JCGO_TYPEID_T jcgo_typeid;
 JCGO_OBJSIZE_T jcgo_objsize;
 CONST struct jcgo_reflect_s *jcgo_reflect;
 JCGO_CLINIT_DEFN
 java_nio_channels_spi_AbstractSelectableChannel (CFASTCALL *jcgo_thisRtn)(
  java_nio_channels_spi_AbstractSelectableChannel This );
 jboolean (CFASTCALL *equals__Lo)( java_lang_Object This, java_lang_Object
  obj );
 jint (CFASTCALL *hashCode__)( java_lang_Object This );
 java_lang_String (CFASTCALL *toString__)( java_lang_Object This );
 void (CFASTCALL *finalize__)( java_lang_Object This );
 void (CFASTCALL *implCloseChannel__)( java_nio_channels_spi_AbstractSelectableChannel
  This );
};

struct java_nio_channels_spi_AbstractSelectableChannel_class_s
{
 struct java_lang_Class_s jcgo_class;
};

JCGO_SEP_EXTERN CONST struct jcgo_methods_s java_nio_channels_spi_AbstractSelectableChannel_methods;
JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_nio_channels_spi_AbstractSelectableChannel_class_s
 java_nio_channels_spi_AbstractSelectableChannel__class;

struct java_nio_channels_spi_AbstractSelectableChannel_s
{
 CONST struct java_nio_channels_spi_AbstractSelectableChannel_methods_s
  *JCGO_IMMFLD_CONST jcgo_methods;
 JCGO_MON_DEFN
 jboolean closed;
 java_lang_Object LOCK;
 java_util_LinkedList keys;
 jboolean blocking;
};

JCGO_SEP_EXTERN CONST jcgo_arrtype109_GmCnnctn jcgo_array2_AbstSlCh;

JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string1_AbstSlCh;

#endif