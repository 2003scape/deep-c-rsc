/* DO NOT EDIT THIS FILE - it is machine generated (JCGO_116) */

#ifdef JCGO_SEPARATED
#define JCGO_116
#include "jcgortl.h"
#include "Main.h"
#endif

#ifdef JCGO_116

#ifdef CHKALL_java_io_File
#include "jcgobchk.h"
#endif

JCGO_NOSEP_INLINE java_lang_String CFASTCALL
java_io_File__normalizePath__Ls( java_lang_String p )
{
 {
  jint dupIndex;
  jint plen;
  p= (JCGO_CALL_FINALF(p) java_lang_String__replace__CC(
   p, (jchar)47/*'/'*/, java_io_File__separatorChar));
  if (java_io_File__separatorChar == (jchar)92/*'\\'*/)
  {
   jchar ch;
   if ((java_lang_String__length__(
    p)) > (jint)2 && (java_lang_String__charAt__I(
    p, 0)) == (jchar)92/*'\\'*/ && (((ch= (java_lang_String__charAt__I(
    p, (jint)1))) >= (jchar)97/*'a'*/ && ch <= (jchar)122/*'z'*/) ||
    (ch >= (jchar)65/*'A'*/ && ch <= (jchar)90/*'Z'*/)) && (java_lang_String__charAt__I(
    p, (jint)2)) == (jchar)58/*':'*/)
   {
    p= (java_lang_String__substring__I(
     p, (jint)1));
   }
  }
  dupIndex= (java_lang_String__indexOf__Ls(
   p, java_io_File__dupSeparator));
  plen= (java_lang_String__length__(
   p));
  if (dupIndex == 0 && java_io_File__separatorChar == (jchar)92/*'\\'*/)
  {
   dupIndex= (java_lang_String__indexOf__LsI(
    p, java_io_File__dupSeparator, (jint)1));
  }
  if (dupIndex != (-(jint)1))
  {
   java_lang_StringBuilder newpath;
   jint last;
   struct java_lang_StringBuilder_s jcgo_stackobj1;
   newpath= (java_lang_StringBuilder__this__I(
    JCGO_STACKOBJ_NEW(jcgo_stackobj1, java_lang_StringBuilder_methods),
    plen));
   dupIndex++;
   last= 0;
   for (;;)
   {
    (java_lang_StringBuilder__append__Ls(
     newpath, (java_lang_String__substring__II(
     p, last, dupIndex))));
    while (++dupIndex < plen)
    {
     if ((java_lang_String__charAt__I(
      p, dupIndex)) != java_io_File__separatorChar)
     {
      break;
     }
    }
    if (dupIndex == plen)
    {
     break;
    }
    last= dupIndex;
    dupIndex= (java_lang_String__indexOf__LsI(
     p, java_io_File__dupSeparator, last + (jint)1)) + (jint)1;
    if (dupIndex == 0)
    {
     (java_lang_StringBuilder__append__Ls(
      newpath, (java_lang_String__substring__I(
      p, last))));
     break;
    }
   }
   p= (java_lang_StringBuilder__toString__(
    newpath));
   plen= (java_lang_String__length__(
    p));
  }
  if (plen > (jint)1 && (java_lang_String__charAt__I(
   p, plen - (jint)1)) == java_io_File__separatorChar)
  {
   if (java_io_File__separatorChar != (jchar)92/*'\\'*/ || (plen ==
    (jint)2? (java_lang_String__charAt__I(
    p, 0)) != (jchar)92/*'\\'*/ : (java_lang_String__charAt__I(
    p, plen - (jint)2)) != (jchar)58/*':'*/ || (java_lang_String__lastIndexOf__II(
    p, (jchar)92/*'\\'*/, plen - (jint)3)) >= 0))
   {
    p= (java_lang_String__substring__II(
     p, 0, plen - (jint)1));
   }
  }
  return p;
 }
}

JCGO_NOSEP_INLINE jObjectArr CFASTCALL
java_io_File__list__L0swsq( java_io_File This, java_lang_Object filter
 )
{
 {
  jObjectArr files;
  jObjectArr retfiles;
  jint count;
  (java_io_File__checkRead__(
   This));
  files= (java_io_VMFile__list__Ls(
   JCGO_FIELD_NZACCESS(This, path)));
  if (files == jnull)
  {
   if (!(java_io_VMFile__isDirectory__Ls(
    JCGO_FIELD_NZACCESS(This, path))))
   {
    return (jObjectArr)jnull;
   }
   return (jObjectArr)jcgo_newArray(JCGO_CLASSREF_OF(java_lang_String__class),
    0, 0);
  }
  if (filter == jnull)
  {
   return files;
  }
  count= 0;
  {
   jint i;
   i= 0;
   for (; i < JCGO_ARRAY_NZLENGTH(files); i++)
   {
    if (((jboolean)0))
    {
     ++count;
    }
    else
    {
     *(java_lang_String*)&JCGO_ARRAY_NZLACCESS(files, i)= (java_lang_String)jnull;
    }
   }
  }
  if (count == JCGO_ARRAY_NZLENGTH(files))
  {
   return files;
  }
  retfiles= (jObjectArr)jcgo_newArray(JCGO_CLASSREF_OF(java_lang_String__class),
   0, count);
  count= 0;
  {
   jint i;
   i= 0;
   for (; i < JCGO_ARRAY_NZLENGTH(files); i++)
   {
    if (((java_lang_String)JCGO_ARRAY_NZLACCESS(files, i)) != jnull)
    {
     jObject jcgo_rcvrL1;
     jObject jcgo_rcvrL2;
     jint jcgo_rcvrI1;
     (jcgo_rcvrL1= (jObject)retfiles, jcgo_rcvrI1= count++, jcgo_rcvrL2=
      (jObject)((java_lang_String)JCGO_ARRAY_NZLACCESS(files, i)),
      *(java_lang_String*)&JCGO_ARRAY_NZLACCESS((jObjectArr)jcgo_rcvrL1,
      jcgo_rcvrI1)= (java_lang_String)jcgo_rcvrL2);
    }
   }
  }
  return retfiles;
 }
}

JCGO_NOSEP_STATIC jboolean CFASTCALL
java_io_File__equals__Lo( java_io_File This, java_lang_Object obj
 )
{
 {
  java_io_File other;
  if (!jcgo_instanceOf0(OBJT_java_io_File, MAXT_java_io_File, (jObject)obj))
  {
   return (jboolean)jfalse;
  }
  other= (java_io_File)obj;
  if (JCGO_CLINIT_VARACC(java_io_VMFile__class, java_io_VMFile__IS_CASE_SENSITIVE))
  {
   jObject jcgo_rcvrL1;
   return (jboolean)(jcgo_rcvrL1= (jObject)JCGO_FIELD_NZACCESS(This,
    path), JCGO_CALL_FINALF((java_lang_String)jcgo_rcvrL1) java_lang_String__equals__Lo(
    (java_lang_String)jcgo_rcvrL1, (java_lang_Object)JCGO_FIELD_NZACCESS(other,
    path)));
  }
  else
  {
   jObject jcgo_rcvrL1;
   return (jboolean)(jcgo_rcvrL1= (jObject)JCGO_FIELD_NZACCESS(This,
    path), JCGO_CALL_FINALF((java_lang_String)jcgo_rcvrL1) java_lang_String__equalsIgnoreCase__Ls(
    (java_lang_String)jcgo_rcvrL1, JCGO_FIELD_NZACCESS(other, path)));
  }
 }
}

JCGO_NOSEP_STATIC java_io_File CFASTCALL
java_io_File__this__Ls( java_io_File This, java_lang_String name )
{
 {
  ;
  JCGO_FIELD_NZACCESS(This, path)= (java_io_File__normalizePath__Ls(
   name));
 }
 return This;
}

JCGO_NOSEP_INLINE java_io_File CFASTCALL
java_io_File__new__Ls( java_lang_String name )
{
 JCGO_CLINIT_TRIG(java_io_File__class);
 return java_io_File__this__Ls(
  (java_io_File)jcgo_newObject((jvtable)&java_io_File_methods), name);
}

JCGO_NOSEP_FRWINL java_lang_String CFASTCALL
java_io_File__getPath__( java_io_File This )
{
 {
  return JCGO_FIELD_NZACCESS(This, path);
 }
}

JCGO_NOSEP_STATIC jint CFASTCALL
java_io_File__hashCode__( java_io_File This )
{
 {
  if (JCGO_CLINIT_VARACC(java_io_VMFile__class, java_io_VMFile__IS_CASE_SENSITIVE))
  {
   jObject jcgo_rcvrL1;
   return (jcgo_rcvrL1= (jObject)JCGO_FIELD_NZACCESS(This, path), JCGO_CALL_FINALF((java_lang_String)jcgo_rcvrL1)
    java_lang_String__hashCode__(
    (java_lang_String)jcgo_rcvrL1)) ^ (jint)1234321L;
  }
  else
  {
   jObject jcgo_rcvrL1;
   return (java_lang_String__hashCode__(
    (jcgo_rcvrL1= (jObject)JCGO_FIELD_NZACCESS(This, path), JCGO_CALL_FINALF((java_lang_String)jcgo_rcvrL1)
    java_lang_String__toLowerCase__(
    (java_lang_String)jcgo_rcvrL1)))) ^ (jint)1234321L;
  }
 }
}

JCGO_NOSEP_STATIC jboolean CFASTCALL
java_io_File__isDirectory__( java_io_File This )
{
 {
  (java_io_File__checkRead__(
   This));
  return (jboolean)(java_io_VMFile__isDirectory__Ls(
   JCGO_FIELD_NZACCESS(This, path)));
 }
}

JCGO_NOSEP_INLINE jObjectArr CFASTCALL
java_io_File__list__( java_io_File This )
{
 {
  return (java_io_File__list__L0swsq(
   This, (java_lang_Object)jnull));
 }
}

JCGO_NOSEP_INLINE java_lang_String CFASTCALL
java_io_File__toString__( java_io_File This )
{
 {
  return JCGO_FIELD_NZACCESS(This, path);
 }
}

JCGO_NOSEP_STATIC void CFASTCALL
java_io_File__checkRead__( java_io_File This )
{
 {
  java_lang_SecurityManager s;
  s= (java_lang_System__getSecurityManager__());
  if (s != jnull)
  {
   (java_lang_SecurityManager__checkRead__Ls(
    s, JCGO_FIELD_NZACCESS(This, path)));
  }
 }
}

JCGO_NOSEP_STATIC void CFASTCALL
java_io_File__class__0( void )
{
 JCGO_CLINIT_BEGIN(java_io_File__class);
 java_io_File__separator= (gnu_classpath_SystemProperties__getProperty__Ls(
  JCGO_STRREF_OF(jcgo_string240_VMSstmPr)));
 java_io_File__dupSeparator= java_lang_VMSystem__concat0X__LsLs(
  java_io_File__separator, java_io_File__separator);
 java_io_File__separatorChar= (JCGO_CALL_FINALF(java_io_File__separator)
  java_lang_String__charAt__I(
  java_io_File__separator, 0));
 java_io_File__pathSeparator= (gnu_classpath_SystemProperties__getProperty__Ls(
  JCGO_STRREF_OF(jcgo_string241_VMSstmPr)));
 (void)((JCGO_CALL_FINALF(java_io_File__pathSeparator) java_lang_String__charAt__I(
  java_io_File__pathSeparator, 0)));
 JCGO_CLINIT_DONE(java_io_File__class);
}

JCGO_NOSEP_DATA CONST struct java_io_File_methods_s java_io_File_methods=
{
 JCGO_CLASSREF_OF(java_io_File__class),
 JCGO_GCJDESCR_ZEROINIT
 OBJT_java_io_File,
 (JCGO_OBJSIZE_T)sizeof(struct java_io_File_s),
 NULL,
 JCGO_CLINIT_INIT(java_io_File__class__0)
 0,
 java_io_File__equals__Lo,
 java_io_File__hashCode__,
 java_io_File__toString__,
 java_lang_Object__finalize__
};

JCGO_NOSEP_DATA struct java_io_File_class_s java_io_File__class ATTRIBNONGC=
{
 {
  &java_lang_Class_methods,
  JCGO_MON_INIT
  JCGO_OBJREF_OF(*(java_lang_Object)&java_io_File_methods),
  JCGO_STRREF_OF(jcgo_string1_File5658),
  JCGO_CLASSREF_OF(java_lang_Object__class),
  ((jObjectArr)JCGO_OBJREF_OF(jcgo_array3_Object)),
  0x1c1
 }
};

JCGO_NOSEP_GCDATA java_lang_String java_io_File__separator ATTRIBGCBSS=
 jnull;

JCGO_NOSEP_GCDATA java_lang_String java_io_File__dupSeparator ATTRIBGCBSS=
 jnull;

JCGO_NOSEP_GCDATA java_lang_String java_io_File__pathSeparator ATTRIBGCBSS=
 jnull;

JCGO_NOSEP_DATA jchar java_io_File__separatorChar= (jchar)0;

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string1_File5658
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array2_FlDscrpt),
 0, 12, (jint)0x7ef65598L
};

#ifdef CHKALL_java_io_File
#include "jcgochke.h"
#endif

#endif
