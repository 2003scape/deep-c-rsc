/* DO NOT EDIT THIS FILE - it is machine generated (JCGO_116) */

#ifdef JCGO_SEPARATED
#define JCGO_116
#include "jcgortl.h"
#include "Main.h"
#endif

#ifdef JCGO_116

#ifdef CHKALL_java_lang_VMSystem
#include "jcgobchk.h"
#endif

JCGO_NOSEP_INLINE jlong CFASTCALL
java_lang_VMSystem__currentTimeMillis__( void )
{
 {
  return (java_io_VMAccessorJavaIo__currentTimeVMFile__Z(
   (jboolean)jfalse));
 }
}

JCGO_NOSEP_INLINE java_io_PrintStream CFASTCALL
java_lang_VMSystem__makeStandardOutputStream__( void )
{
 {
  java_io_PrintStream out;
  out= (java_lang_VMSystem__makePrintStream__L0rv4g(
   (java_io_OutputStream)(java_io_BufferedOutputStream__new__L0rv4gI(
   (java_io_OutputStream)(java_io_FileOutputStream__new__L0ptnm(
   JCGO_CLINIT_VARACC(java_io_FileDescriptor__class, java_io_FileDescriptor__out))),
   (jint)512))));
  (java_lang_VMThread__setSystemOut__L18p1o(
   out));
  return out;
 }
}

JCGO_NOSEP_INLINE java_io_PrintStream CFASTCALL
java_lang_VMSystem__makeStandardErrorStream__( void )
{
 {
  java_io_PrintStream err;
  err= (java_lang_VMSystem__makePrintStream__L0rv4g(
   (java_io_OutputStream)(java_io_FileOutputStream__new__L0ptnm(
   JCGO_CLINIT_VARACC(java_io_FileDescriptor__class, java_io_FileDescriptor__err)))));
  (java_lang_VMThread__initSystemErr__());
  return err;
 }
}

JCGO_NOSEP_STATIC java_lang_String CFASTCALL
java_lang_VMSystem__concat0X__LsLs( java_lang_String str, java_lang_String
 str2 )
{
 {
  if (str == jnull)
  {
   str= JCGO_STRREF_OF(jcgo_string5_String6D);
  }
  if (str2 == jnull)
  {
   str2= JCGO_STRREF_OF(jcgo_string5_String6D);
  }
  return (java_lang_String__concat__Ls(
   str, str2));
 }
}

JCGO_NOSEP_STATIC java_lang_String CFASTCALL
java_lang_VMSystem__toUpperCaseLatin__Ls( java_lang_String str )
{
 {
  jcharArr chars;
  jint i;
  jchar ch;
  jboolean replaced;
  chars= (JCGO_CALL_FINALF(str) java_lang_String__toCharArray__(
   str));
  i= JCGO_ARRAY_NZLENGTH(chars);
  replaced= jfalse;
  while (i-- > 0)
  {
   if ((ch= JCGO_ARRAY_NZCACCESS(chars, i)) >= (jchar)97/*'a'*/ &&
    ch <= (jchar)122/*'z'*/)
   {
    JCGO_ARRAY_NZCACCESS(chars, i)= ((jchar)(ch - ((jint)(jchar)97/*'a'*/ -
     (jchar)65/*'A'*/)));
    replaced= (jboolean)jtrue;
   }
  }
  return replaced? (java_lang_String__new__CAIIZ(
   chars, 0, JCGO_ARRAY_NZLENGTH(chars), (jboolean)jtrue)) : str;
 }
}

JCGO_NOSEP_STATIC java_io_PrintStream CFASTCALL
java_lang_VMSystem__makePrintStream__L0rv4g( java_io_OutputStream
 out )
{
 {
  {
   JCGO_TRY_BLOCK
   {
    {
     java_io_PrintStream jcgo_retval= (java_io_PrintStream__new__L0rv4gZLs(
      out, (gnu_classpath_VMAccessorGnuClasspath__getConsoleEncodingVMSystemProperties__L0rv4g(
      out)), (jboolean)jtrue));
#ifndef JCGO_SEHTRY
     jcgo_tryLeave();
#endif
     return jcgo_retval;
    }
   }
   JCGO_TRY_LEAVE
   JCGO_TRY_CATCHES(1)
   JCGO_TRY_CATCH(OBJT_java_io_UnsupportedEncodingException, MAXT_java_io_UnsupportedEncodingException)
   {
   }
   JCGO_TRY_RETHROW(1)
  }
  {
   JCGO_TRY_BLOCK
   {
    {
     java_io_PrintStream jcgo_retval= (java_io_PrintStream__new__L0rv4gZLs(
      out, JCGO_STRREF_OF(jcgo_string2_VMSystem), (jboolean)jtrue));
#ifndef JCGO_SEHTRY
     jcgo_tryLeave();
#endif
     return jcgo_retval;
    }
   }
   JCGO_TRY_LEAVE
   JCGO_TRY_CATCHES(2)
   JCGO_TRY_CATCH(OBJT_java_io_UnsupportedEncodingException, MAXT_java_io_UnsupportedEncodingException)
   {
    java_io_UnsupportedEncodingException e;
    e= (java_io_UnsupportedEncodingException)JCGO_TRY_THROWABLE(0);
    JCGO_THROW_EXC((java_lang_Error)JCGO_CAST_OBJECT0(OBJT_java_lang_Error,
     MAXT_java_lang_Error, (java_lang_Throwable__initCause__Lt(
     (java_lang_Throwable)(java_lang_InternalError__new__Ls(
     JCGO_STRREF_OF(jcgo_string3_VMSystem))), (java_lang_Throwable)e))));
   }
   JCGO_TRY_RETHROW(2)
  }
 }
 return jnull;
}

JCGO_NOSEP_DATA CONST struct jcgo_methods_s java_lang_VMSystem_methods=
{
 JCGO_CLASSREF_OF(java_lang_VMSystem__class),
 JCGO_GCJDESCR_ZEROINIT
 OBJT_java_lang_VMSystem,
 0,
 NULL,
 JCGO_CLINIT_INIT(0)
 0
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_VMSystem_class_s
 java_lang_VMSystem__class JCGO_THRD_ATTRNONGC=
{
 {
  &java_lang_Class_methods,
  JCGO_MON_INIT
  JCGO_OBJREF_OF(*(java_lang_Object)&java_lang_VMSystem_methods),
  JCGO_STRREF_OF(jcgo_string1_VMSystem),
  JCGO_CLASSREF_OF(java_lang_Object__class),
  ((jObjectArr)JCGO_OBJREF_OF(jcgo_array3_Object)),
  0x10
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype82_GmCnnctn jcgo_array4_VMSystem=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 18,
 {
  (jbyte)(jchar)106/*'j'*/, (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)118/*'v'*/,
   (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)46/*'.'*/, (jbyte)(jchar)108/*'l'*/,
   (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)110/*'n'*/, (jbyte)(jchar)103/*'g'*/,
   (jbyte)(jchar)46/*'.'*/, (jbyte)(jchar)86/*'V'*/, (jbyte)(jchar)77/*'M'*/,
   (jbyte)(jchar)83/*'S'*/, (jbyte)(jchar)121/*'y'*/, (jbyte)(jchar)115/*'s'*/,
   (jbyte)(jchar)116/*'t'*/, (jbyte)(jchar)101/*'e'*/, (jbyte)(jchar)109/*'m'*/
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype32_GameShll jcgo_array5_VMSystem=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 10,
 {
  (jbyte)(jchar)73/*'I'*/, (jbyte)(jchar)83/*'S'*/, (jbyte)(jchar)79/*'O'*/,
   (jbyte)(jchar)56/*'8'*/, (jbyte)(jchar)56/*'8'*/, (jbyte)(jchar)53/*'5'*/,
   (jbyte)(jchar)57/*'9'*/, (jbyte)(jchar)95/*'_'*/, (jbyte)(jchar)49/*'1'*/,
   (jbyte)(jchar)51/*'3'*/
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype98_GmCnnctn jcgo_array6_VMSystem=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 32,
 {
  (jbyte)(jchar)103/*'g'*/, (jbyte)(jchar)110/*'n'*/, (jbyte)(jchar)117/*'u'*/,
   (jbyte)(jchar)46/*'.'*/, (jbyte)(jchar)99/*'c'*/, (jbyte)(jchar)108/*'l'*/,
   (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)115/*'s'*/, (jbyte)(jchar)115/*'s'*/,
   (jbyte)(jchar)112/*'p'*/, (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)116/*'t'*/,
   (jbyte)(jchar)104/*'h'*/, (jbyte)(jchar)46/*'.'*/, (jbyte)(jchar)86/*'V'*/,
   (jbyte)(jchar)77/*'M'*/, (jbyte)(jchar)83/*'S'*/, (jbyte)(jchar)121/*'y'*/,
   (jbyte)(jchar)115/*'s'*/, (jbyte)(jchar)116/*'t'*/, (jbyte)(jchar)101/*'e'*/,
   (jbyte)(jchar)109/*'m'*/, (jbyte)(jchar)80/*'P'*/, (jbyte)(jchar)114/*'r'*/,
   (jbyte)(jchar)111/*'o'*/, (jbyte)(jchar)112/*'p'*/, (jbyte)(jchar)101/*'e'*/,
   (jbyte)(jchar)114/*'r'*/, (jbyte)(jchar)116/*'t'*/, (jbyte)(jchar)105/*'i'*/,
   (jbyte)(jchar)101/*'e'*/, (jbyte)(jchar)115/*'s'*/
 }
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string1_VMSystem
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array4_VMSystem),
 0, 18, (jint)0x651870faL
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string2_VMSystem
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array5_VMSystem),
 0, 9, (jint)0xab4efcfbL
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string3_VMSystem
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array6_VMSystem),
 14, 8, (jint)0x636643c6L
};

#ifdef CHKALL_java_lang_VMSystem
#include "jcgochke.h"
#endif

#endif
