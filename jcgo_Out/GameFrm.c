/* DO NOT EDIT THIS FILE - it is machine generated (JCGO_116) */

#ifdef JCGO_SEPARATED
#define JCGO_116
#include "jcgortl.h"
#include "Main.h"
#endif

#ifdef JCGO_116

#ifdef CHKALL_GameFrame
#include "jcgobchk.h"
#endif

JCGO_NOSEP_INLINE package_GameFrame CFASTCALL
package_GameFrame__this__L7rjhaIILsZZ( package_GameFrame This, package_GameShell
 game, java_lang_String title, jint width, jint height, jboolean resizable,
 jboolean flag1 )
{
 {
  ;
  (void)(jint)28;
  (void)width;
  (void)height;
  (void)game;
  if (flag1)
  {
   (void)(jint)48;
  }
  else
  {
   (void)(jint)28;
  }
 }
 return This;
}

JCGO_NOSEP_FRWINL package_GameFrame CFASTCALL
package_GameFrame__new__L7rjhaIILsZZ( package_GameShell game, java_lang_String
 title, jint width, jint height, jboolean resizable, jboolean flag1
 )
{
 return package_GameFrame__this__L7rjhaIILsZZ(
  (package_GameFrame)jcgo_newObject((jvtable)&package_GameFrame_methods),
  game, title, width, height, resizable, flag1);
}

JCGO_NOSEP_DATA CONST struct package_GameFrame_methods_s package_GameFrame_methods=
{
 JCGO_CLASSREF_OF(package_GameFrame__class),
 JCGO_GCJDESCR_ZEROINIT
 OBJT_package_GameFrame,
 -(JCGO_OBJSIZE_T)sizeof(struct package_GameFrame_s),
 NULL,
 JCGO_CLINIT_INIT(0)
 0,
 java_lang_Object__equals__Lo,
 java_lang_Object__hashCode__,
 java_lang_Object__toString__,
 java_lang_Object__finalize__
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct package_GameFrame_class_s
 package_GameFrame__class JCGO_THRD_ATTRNONGC=
{
 {
  &java_lang_Class_methods,
  JCGO_MON_INIT
  JCGO_OBJREF_OF(*(java_lang_Object)&package_GameFrame_methods),
  JCGO_STRREF_OF(jcgo_string1_GameFrm),
  JCGO_CLASSREF_OF(java_lang_Object__class),
  ((jObjectArr)JCGO_OBJREF_OF(jcgo_array3_Object)),
  0x1
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype28_GameShll jcgo_array2_GameFrm=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 9,
 {
  (jbyte)(jchar)71/*'G'*/, (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)109/*'m'*/,
   (jbyte)(jchar)101/*'e'*/, (jbyte)(jchar)70/*'F'*/, (jbyte)(jchar)114/*'r'*/,
   (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)109/*'m'*/, (jbyte)(jchar)101/*'e'*/
 }
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string1_GameFrm
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array2_GameFrm),
 0, 9, (jint)0xb1bd347bL
};

#ifdef CHKALL_GameFrame
#include "jcgochke.h"
#endif

#endif