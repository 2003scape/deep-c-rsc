/* DO NOT EDIT THIS FILE - it is machine generated (JCGO_116) */

#ifdef JCGO_SEPARATED
#define JCGO_116
#include "jcgortl.h"
#include "Main.h"
#endif

#ifdef JCGO_116

#ifdef CHKALL_SurfaceSprite
#include "jcgobchk.h"
#endif

JCGO_NOSEP_INLINE package_SurfaceSprite CFASTCALL
package_SurfaceSprite__this__IIIL6iieb( package_SurfaceSprite This,
 package_mudclient component, jint width, jint height, jint k )
{
 {
  (package_Surface__this__IIIL6iieb((package_Surface)This, component,
   width, height, k));
 }
 return This;
}

JCGO_NOSEP_FRWINL package_SurfaceSprite CFASTCALL
package_SurfaceSprite__new__IIIL6iieb( package_mudclient component,
 jint width, jint height, jint k )
{
 JCGO_CLINIT_TRIG(package_SurfaceSprite__class);
 return package_SurfaceSprite__this__IIIL6iieb(
  (package_SurfaceSprite)jcgo_newObject((jvtable)&package_SurfaceSprite_methods),
  component, width, height, k);
}

JCGO_NOSEP_STATIC void CFASTCALL
package_SurfaceSprite__spriteClipping__IIIIIII( package_SurfaceSprite
 This, jint x, jint y, jint w, jint h, jint id, jint tx, jint ty )
{
 {
  if (id >= (jint)50000L)
  {
   jObject jcgo_rcvrL1;
   (jcgo_rcvrL1= (jObject)JCGO_FIELD_NZACCESS(This, mudclientref),
    JCGO_CALL_FINALF((package_mudclient)jcgo_rcvrL1) package_mudclient__drawTeleportBubble__IIIIIII(
    (package_mudclient)jcgo_rcvrL1, x, y, w, h, id - (jint)50000L,
    tx, ty));
   return;
  }
  if (id >= (jint)40000L)
  {
   jObject jcgo_rcvrL1;
   (jcgo_rcvrL1= (jObject)JCGO_FIELD_NZACCESS(This, mudclientref),
    JCGO_CALL_FINALF((package_mudclient)jcgo_rcvrL1) package_mudclient__drawItem__IIIIIII(
    (package_mudclient)jcgo_rcvrL1, x, y, w, h, id - (jint)40000L,
    tx, ty));
   return;
  }
  if (id >= (jint)20000)
  {
   jObject jcgo_rcvrL1;
   (jcgo_rcvrL1= (jObject)JCGO_FIELD_NZACCESS(This, mudclientref),
    JCGO_CALL_FINALF((package_mudclient)jcgo_rcvrL1) package_mudclient__drawNpc__IIIIIII(
    (package_mudclient)jcgo_rcvrL1, x, y, w, h, id - (jint)20000, tx,
    ty));
   return;
  }
  if (id >= (jint)5000)
  {
   jObject jcgo_rcvrL1;
   (jcgo_rcvrL1= (jObject)JCGO_FIELD_NZACCESS(This, mudclientref),
    JCGO_CALL_FINALF((package_mudclient)jcgo_rcvrL1) package_mudclient__drawPlayer__IIIIIII(
    (package_mudclient)jcgo_rcvrL1, x, y, w, h, id - (jint)5000, tx,
    ty));
   return;
  }
  else
  {
   (package_Surface__spriteClipping__IIIII(
    (package_Surface)This, x, y, w, h, id));
   return;
  }
 }
}

JCGO_NOSEP_STATIC void CFASTCALL
package_SurfaceSprite__class__0( void )
{
 JCGO_CLINIT_BEGIN(package_SurfaceSprite__class);
 JCGO_CLINIT_TRIG(package_Surface__class);
 JCGO_CLINIT_DONE(package_SurfaceSprite__class);
}

JCGO_NOSEP_DATA CONST struct package_SurfaceSprite_methods_s package_SurfaceSprite_methods=
{
 JCGO_CLASSREF_OF(package_SurfaceSprite__class),
 JCGO_GCJDESCR_INIT(package_SurfaceSprite_s, mudclientref)
 OBJT_package_SurfaceSprite,
 (JCGO_OBJSIZE_T)sizeof(struct package_SurfaceSprite_s),
 NULL,
 JCGO_CLINIT_INIT(package_SurfaceSprite__class__0)
 0,
 java_lang_Object__equals__Lo,
 java_lang_Object__hashCode__,
 java_lang_Object__toString__,
 java_lang_Object__finalize__,
 package_SurfaceSprite__spriteClipping__IIIIIII
};

JCGO_NOSEP_DATA struct package_SurfaceSprite_class_s package_SurfaceSprite__class
 ATTRIBNONGC=
{
 {
  &java_lang_Class_methods,
  JCGO_MON_INIT
  JCGO_OBJREF_OF(*(java_lang_Object)&package_SurfaceSprite_methods),
  JCGO_STRREF_OF(jcgo_string1_SrfcSprt),
  JCGO_CLASSREF_OF(package_Surface__class),
  ((jObjectArr)JCGO_OBJREF_OF(jcgo_array3_Object)),
  0xc1
 }
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string1_SrfcSprt
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array28_Surface),
 0, 13, (jint)0x48a015b2L
};

#ifdef CHKALL_SurfaceSprite
#include "jcgochke.h"
#endif

#endif
