/* DO NOT EDIT THIS FILE - it is machine generated (JCGO_116) */

#ifdef JCGO_116

JCGO_NOSEP_INLINE java_util_AbstractMap_BasicMapEntry CFASTCALL
java_util_AbstractMap_BasicMapEntry__this__LoLo( java_util_AbstractMap_BasicMapEntry
 This, java_lang_Object newKey, java_lang_Object newValue );

JCGO_NOSEP_STATIC jboolean CFASTCALL
java_util_AbstractMap_BasicMapEntry__equals__Lo( java_util_AbstractMap_BasicMapEntry
 This, java_lang_Object o );

JCGO_NOSEP_INLINE java_lang_Object CFASTCALL
java_util_AbstractMap_BasicMapEntry__getKey__( java_util_AbstractMap_BasicMapEntry
 This );

JCGO_NOSEP_INLINE java_lang_Object CFASTCALL
java_util_AbstractMap_BasicMapEntry__getValue__( java_util_AbstractMap_BasicMapEntry
 This );

JCGO_NOSEP_INLINE jint CFASTCALL
java_util_AbstractMap_BasicMapEntry__hashCode__( java_util_AbstractMap_BasicMapEntry
 This );

JCGO_NOSEP_INLINE java_lang_String CFASTCALL
java_util_AbstractMap_BasicMapEntry__toString__( java_util_AbstractMap_BasicMapEntry
 This );

struct java_util_AbstractMap_BasicMapEntry_methods_s
{
 java_lang_Class jcgo_class;
 JCGO_GCJDESCR_DEFN
 JCGO_TYPEID_T jcgo_typeid;
 JCGO_OBJSIZE_T jcgo_objsize;
 CONST struct jcgo_reflect_s *jcgo_reflect;
 JCGO_CLINIT_DEFN
 java_util_AbstractMap_BasicMapEntry (CFASTCALL *jcgo_thisRtn)( java_util_AbstractMap_BasicMapEntry
  This );
 jboolean (CFASTCALL *equals__Lo)( java_util_AbstractMap_BasicMapEntry
  This, java_lang_Object o );
 jint (CFASTCALL *hashCode__)( java_util_AbstractMap_BasicMapEntry
  This );
 java_lang_String (CFASTCALL *toString__)( java_util_AbstractMap_BasicMapEntry
  This );
 void (CFASTCALL *finalize__)( java_lang_Object This );
 java_lang_Object (CFASTCALL *getKey__)( java_util_AbstractMap_BasicMapEntry
  This );
 java_lang_Object (CFASTCALL *getValue__)( java_util_AbstractMap_BasicMapEntry
  This );
};

struct java_util_AbstractMap_BasicMapEntry_class_s
{
 struct java_lang_Class_s jcgo_class;
};

JCGO_SEP_EXTERN CONST struct java_util_AbstractMap_BasicMapEntry_methods_s
 java_util_AbstractMap_BasicMapEntry_methods;
JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_util_AbstractMap_BasicMapEntry_class_s
 java_util_AbstractMap_BasicMapEntry__class;

struct java_util_AbstractMap_BasicMapEntry_s
{
 CONST struct java_util_AbstractMap_BasicMapEntry_methods_s *JCGO_IMMFLD_CONST
  jcgo_methods;
 JCGO_MON_DEFN
 java_lang_Object key;
 java_lang_Object value;
};

JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string1_BscMpEnt;

#endif
