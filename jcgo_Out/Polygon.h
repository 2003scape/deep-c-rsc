/* DO NOT EDIT THIS FILE - it is machine generated (JCGO_116) */

#ifdef JCGO_116

JCGO_NOSEP_STATIC package_Polygon CFASTCALL
package_Polygon__this__( package_Polygon This );
JCGO_NOSEP_FRWINL package_Polygon CFASTCALL
package_Polygon__new__( void );

struct package_Polygon_methods_s
{
 java_lang_Class jcgo_class;
 JCGO_GCJDESCR_DEFN
 JCGO_TYPEID_T jcgo_typeid;
 JCGO_OBJSIZE_T jcgo_objsize;
 CONST struct jcgo_reflect_s *jcgo_reflect;
 JCGO_CLINIT_DEFN
 package_Polygon (CFASTCALL *jcgo_thisRtn)( package_Polygon This );
 jboolean (CFASTCALL *equals__Lo)( java_lang_Object This, java_lang_Object
  obj );
 jint (CFASTCALL *hashCode__)( java_lang_Object This );
 java_lang_String (CFASTCALL *toString__)( java_lang_Object This );
 void (CFASTCALL *finalize__)( java_lang_Object This );
};

struct package_Polygon_class_s
{
 struct java_lang_Class_s jcgo_class;
};

JCGO_SEP_EXTERN CONST struct package_Polygon_methods_s package_Polygon_methods;
JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct package_Polygon_class_s package_Polygon__class;

struct package_Polygon_s
{
 CONST struct package_Polygon_methods_s *JCGO_IMMFLD_CONST jcgo_methods;
 JCGO_MON_DEFN
 package_GameModel model;
 jint minPlaneX;
 jint minPlaneY;
 jint maxPlaneX;
 jint maxPlaneY;
 jint minZ;
 jint maxZ;
 jint face;
 jint depth;
 jint normalX;
 jint normalY;
 jint normalZ;
 jint visibility;
 jint facefill;
 jint index;
 jint index2;
 jboolean skipSomething;
};

JCGO_SEP_EXTERN CONST jcgo_arrtype24_Object jcgo_array2_Polygon;

JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string1_Polygon;

#endif
