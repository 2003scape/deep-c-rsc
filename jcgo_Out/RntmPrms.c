/* DO NOT EDIT THIS FILE - it is machine generated (JCGO_116) */

#ifdef JCGO_SEPARATED
#define JCGO_116
#include "jcgortl.h"
#include "Main.h"
#endif

#ifdef JCGO_116

#ifdef CHKALL_java_lang_RuntimePermission
#include "jcgobchk.h"
#endif

JCGO_NOSEP_FRWINL java_lang_RuntimePermission CFASTCALL
java_lang_RuntimePermission__this__Ls( java_lang_RuntimePermission
 This, java_lang_String permissionName )
{
 {
  (java_security_BasicPermission__this__Ls((java_security_BasicPermission)This,
   permissionName));
 }
 return This;
}

JCGO_NOSEP_INLINE java_lang_RuntimePermission CFASTCALL
java_lang_RuntimePermission__new__Ls( java_lang_String permissionName
 )
{
 return java_lang_RuntimePermission__this__Ls(
  (java_lang_RuntimePermission)jcgo_newObject((jvtable)&java_lang_RuntimePermission_methods),
  permissionName);
}

JCGO_NOSEP_DATA CONST struct java_lang_RuntimePermission_methods_s
 java_lang_RuntimePermission_methods=
{
 JCGO_CLASSREF_OF(java_lang_RuntimePermission__class),
 JCGO_GCJDESCR_ZEROINIT
 OBJT_java_lang_RuntimePermission,
 (JCGO_OBJSIZE_T)sizeof(struct java_lang_RuntimePermission_s),
 NULL,
 JCGO_CLINIT_INIT(0)
 0,
 java_security_BasicPermission__equals__Lo,
 java_security_BasicPermission__hashCode__,
 java_security_Permission__toString__,
 java_lang_Object__finalize__,
 java_security_BasicPermission__getActions__
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_RuntimePermission_class_s
 java_lang_RuntimePermission__class JCGO_THRD_ATTRNONGC=
{
 {
  &java_lang_Class_methods,
  JCGO_MON_INIT
  JCGO_OBJREF_OF(*(java_lang_Object)&java_lang_RuntimePermission_methods),
  JCGO_STRREF_OF(jcgo_string1_RntmPrms),
  JCGO_CLASSREF_OF(java_security_BasicPermission__class),
  ((jObjectArr)JCGO_OBJREF_OF(jcgo_array3_Object)),
  0x11
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype38_Object jcgo_array2_RntmPrms=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 27,
 {
  (jbyte)(jchar)106/*'j'*/, (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)118/*'v'*/,
   (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)46/*'.'*/, (jbyte)(jchar)108/*'l'*/,
   (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)110/*'n'*/, (jbyte)(jchar)103/*'g'*/,
   (jbyte)(jchar)46/*'.'*/, (jbyte)(jchar)82/*'R'*/, (jbyte)(jchar)117/*'u'*/,
   (jbyte)(jchar)110/*'n'*/, (jbyte)(jchar)116/*'t'*/, (jbyte)(jchar)105/*'i'*/,
   (jbyte)(jchar)109/*'m'*/, (jbyte)(jchar)101/*'e'*/, (jbyte)(jchar)80/*'P'*/,
   (jbyte)(jchar)101/*'e'*/, (jbyte)(jchar)114/*'r'*/, (jbyte)(jchar)109/*'m'*/,
   (jbyte)(jchar)105/*'i'*/, (jbyte)(jchar)115/*'s'*/, (jbyte)(jchar)115/*'s'*/,
   (jbyte)(jchar)105/*'i'*/, (jbyte)(jchar)111/*'o'*/, (jbyte)(jchar)110/*'n'*/
 }
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string1_RntmPrms
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array2_RntmPrms),
 0, 27, (jint)0x61c930f3L
};

#ifdef CHKALL_java_lang_RuntimePermission
#include "jcgochke.h"
#endif

#endif