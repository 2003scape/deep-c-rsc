/* DO NOT EDIT THIS FILE - it is machine generated (JCGO_116) */

#ifdef JCGO_116

JCGO_NOSEP_STATIC java_nio_channels_spi_AbstractInterruptibleChannel
 CFASTCALL
java_nio_channels_spi_AbstractInterruptibleChannel__this__( java_nio_channels_spi_AbstractInterruptibleChannel
 This );

JCGO_NOSEP_INLINE void CFASTCALL
java_nio_channels_spi_AbstractInterruptibleChannel__begin__( java_nio_channels_spi_AbstractInterruptibleChannel
 This );

JCGO_NOSEP_STATIC void CFASTCALL
java_nio_channels_spi_AbstractInterruptibleChannel__close__( java_nio_channels_spi_AbstractInterruptibleChannel
 This );

JCGO_NOSEP_INLINE void CFASTCALL
java_nio_channels_spi_AbstractInterruptibleChannel__end__Z( java_nio_channels_spi_AbstractInterruptibleChannel
 This, jboolean completed );

JCGO_NOSEP_INLINE jboolean CFASTCALL
java_nio_channels_spi_AbstractInterruptibleChannel__isOpen__( java_nio_channels_spi_AbstractInterruptibleChannel
 This );

struct java_nio_channels_spi_AbstractInterruptibleChannel_methods_s
{
 java_lang_Class jcgo_class;
 JCGO_GCJDESCR_DEFN
 JCGO_TYPEID_T jcgo_typeid;
 JCGO_OBJSIZE_T jcgo_objsize;
 CONST struct jcgo_reflect_s *jcgo_reflect;
 JCGO_CLINIT_DEFN
 java_nio_channels_spi_AbstractInterruptibleChannel (CFASTCALL *jcgo_thisRtn)(
  java_nio_channels_spi_AbstractInterruptibleChannel This );
 jboolean (CFASTCALL *equals__Lo)( java_lang_Object This, java_lang_Object
  obj );
 jint (CFASTCALL *hashCode__)( java_lang_Object This );
 java_lang_String (CFASTCALL *toString__)( java_lang_Object This );
 void (CFASTCALL *finalize__)( java_lang_Object This );
 void (CFASTCALL *implCloseChannel__)( java_nio_channels_spi_AbstractInterruptibleChannel
  This );
};

struct java_nio_channels_spi_AbstractInterruptibleChannel_class_s
{
 struct java_lang_Class_s jcgo_class;
};

JCGO_SEP_EXTERN CONST struct jcgo_methods_s java_nio_channels_spi_AbstractInterruptibleChannel_methods;
JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_nio_channels_spi_AbstractInterruptibleChannel_class_s
 java_nio_channels_spi_AbstractInterruptibleChannel__class;

struct java_nio_channels_spi_AbstractInterruptibleChannel_s
{
 CONST struct java_nio_channels_spi_AbstractInterruptibleChannel_methods_s
  *JCGO_IMMFLD_CONST jcgo_methods;
 JCGO_MON_DEFN
 jboolean closed;
};

JCGO_SEP_EXTERN CONST jcgo_arrtype670_Mdclnt jcgo_array2_AbstInCh;

JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string1_AbstInCh;

#endif
