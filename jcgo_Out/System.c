/* DO NOT EDIT THIS FILE - it is machine generated (JCGO_116) */

#ifdef JCGO_SEPARATED
#define JCGO_116
#include "jcgortl.h"
#include "Main.h"
#endif

#ifdef JCGO_116

#ifdef CHKALL_java_lang_System
#include "jcgobchk.h"
#endif

JCGO_NOSEP_INLINE java_lang_SecurityManager CFASTCALL
java_lang_System__getSecurityManager__( void )
{
 JCGO_CLINIT_TRIG(java_lang_System__class);
 {
  return java_lang_SecurityManager__current;
 }
}

JCGO_NOSEP_FRWINL jlong CFASTCALL
java_lang_System__currentTimeMillis__( void )
{
 JCGO_CLINIT_TRIG(java_lang_System__class);
 {
  return (java_lang_VMSystem__currentTimeMillis__());
 }
}

JCGO_NOSEP_INLINE void CFASTCALL
java_lang_System__arraycopy__LoILoII( java_lang_Object src, java_lang_Object
 dest, jint srcStart, jint destStart, jint len )
{
 JCGO_CLINIT_TRIG(java_lang_System__class);
 {
  (java_lang_VMSystem__arraycopy__LoILoII(
   src, dest, srcStart, destStart, len));
 }
}

JCGO_NOSEP_FRWINL java_lang_String CFASTCALL
java_lang_System__getProperty__Ls( java_lang_String key )
{
 JCGO_CLINIT_TRIG(java_lang_System__class);
 {
  java_lang_SecurityManager sm;
  sm= java_lang_SecurityManager__current;
  if (sm != jnull)
  {
   (java_lang_SecurityManager__checkPropertyAccess__Ls(
    sm, key));
  }
  if ((JCGO_CALL_FINALF(key) java_lang_String__length__(
   key)) == 0)
  {
   JCGO_THROW_EXC((java_lang_IllegalArgumentException__new__Ls(
    JCGO_STRREF_OF(jcgo_string2_System))));
  }
  return (gnu_classpath_SystemProperties__getProperty__Ls(
   key));
 }
}

JCGO_NOSEP_FRWINL void CFASTCALL
java_lang_System__exit__I( jint status )
{
 {
  (java_lang_Runtime__exit__I(
   (java_lang_Runtime__getRuntime__()), status));
 }
}

JCGO_NOSEP_FRWINL void CFASTCALL
java_lang_System__gc__( void )
{
 JCGO_CLINIT_TRIG(java_lang_System__class);
 {
  (java_lang_Runtime__gc__(
   (java_lang_Runtime__getRuntime__())));
 }
}

JCGO_NOSEP_STATIC void CFASTCALL
java_lang_System__class__0( void )
{
 JCGO_CLINIT_BEGIN(java_lang_System__class);
 java_lang_System__err= (java_lang_VMSystem__makeStandardErrorStream__());
 java_lang_System__out= (java_lang_VMSystem__makeStandardOutputStream__());
 JCGO_CLINIT_DONE(java_lang_System__class);
}

JCGO_NOSEP_DATA CONST struct jcgo_methods_s java_lang_System_methods=
{
 JCGO_CLASSREF_OF(java_lang_System__class),
 JCGO_GCJDESCR_ZEROINIT
 OBJT_java_lang_System,
 0,
 NULL,
 JCGO_CLINIT_INIT(java_lang_System__class__0)
 0
};

JCGO_NOSEP_DATA struct java_lang_System_class_s java_lang_System__class
 ATTRIBNONGC=
{
 {
  &java_lang_Class_methods,
  JCGO_MON_INIT
  JCGO_OBJREF_OF(*(java_lang_Object)&java_lang_System_methods),
  JCGO_STRREF_OF(jcgo_string1_System),
  JCGO_CLASSREF_OF(java_lang_Object__class),
  ((jObjectArr)JCGO_OBJREF_OF(jcgo_array3_Object)),
  0x1d1
 }
};

JCGO_NOSEP_GCDATA java_io_PrintStream java_lang_System__err ATTRIBGCBSS=
 jnull;

JCGO_NOSEP_GCDATA java_io_PrintStream java_lang_System__out ATTRIBGCBSS=
 jnull;

JCGO_NOSEP_DATA CONST jcgo_arrtype22_Object jcgo_array3_System=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 16,
 {
  (jbyte)(jchar)106/*'j'*/, (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)118/*'v'*/,
   (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)46/*'.'*/, (jbyte)(jchar)108/*'l'*/,
   (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)110/*'n'*/, (jbyte)(jchar)103/*'g'*/,
   (jbyte)(jchar)46/*'.'*/, (jbyte)(jchar)83/*'S'*/, (jbyte)(jchar)121/*'y'*/,
   (jbyte)(jchar)115/*'s'*/, (jbyte)(jchar)116/*'t'*/, (jbyte)(jchar)101/*'e'*/,
   (jbyte)(jchar)109/*'m'*/
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype82_GmCnnctn jcgo_array4_System=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 18,
 {
  (jbyte)(jchar)107/*'k'*/, (jbyte)(jchar)101/*'e'*/, (jbyte)(jchar)121/*'y'*/,
   (jbyte)(jchar)32/*' '*/, (jbyte)(jchar)99/*'c'*/, (jbyte)(jchar)97/*'a'*/,
   (jbyte)(jchar)110/*'n'*/, (jbyte)(jchar)39/*'\''*/, (jbyte)(jchar)116/*'t'*/,
   (jbyte)(jchar)32/*' '*/, (jbyte)(jchar)98/*'b'*/, (jbyte)(jchar)101/*'e'*/,
   (jbyte)(jchar)32/*' '*/, (jbyte)(jchar)101/*'e'*/, (jbyte)(jchar)109/*'m'*/,
   (jbyte)(jchar)112/*'p'*/, (jbyte)(jchar)116/*'t'*/, (jbyte)(jchar)121/*'y'*/
 }
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string1_System
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array3_System),
 0, 16, (jint)0x47854883L
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string2_System
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array4_System),
 0, 18, (jint)0xa42f42d4L
};

#ifdef CHKALL_java_lang_System
#include "jcgochke.h"
#endif

#endif
