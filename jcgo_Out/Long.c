/* DO NOT EDIT THIS FILE - it is machine generated (JCGO_116) */

#ifdef JCGO_SEPARATED
#define JCGO_116
#include "jcgortl.h"
#include "Main.h"
#endif

#ifdef JCGO_116

#ifdef CHKALL_java_lang_Long
#include "jcgobchk.h"
#endif

JCGO_NOSEP_INLINE java_lang_NumberFormatException CFASTCALL
java_lang_Long__numberFormatExceptionForInputString__Ls( java_lang_String
 str )
{
 {
  struct java_lang_StringBuilder_s jcgo_stackobj1;
  return (java_lang_NumberFormatException__new__Ls(
   java_lang_String__new__L5dy9e(
   java_lang_StringBuilder__append__Ls(
   java_lang_StringBuilder__append__Ls(
   java_lang_StringBuilder__append__Ls(
   java_lang_StringBuilder__this__(
   JCGO_STACKOBJ_NEW(jcgo_stackobj1, java_lang_StringBuilder_methods)),
   JCGO_STRREF_OF(jcgo_string2_Long)), str), JCGO_STRREF_OF(jcgo_string3_Long)))));
 }
}

JCGO_NOSEP_INLINE jlong CFASTCALL
java_lang_Long__parseLong__LsIZ( java_lang_String str, jint radix,
 jboolean decode )
{
 {
  jlong max_7e1;
  jlong val;
  jint index;
  jint len;
  jint ch;
  jboolean isNeg;
  if (!decode && str == jnull)
  {
   JCGO_THROW_EXC((java_lang_NumberFormatException__new__Ls(
    JCGO_STRREF_OF(jcgo_string5_String6D))));
  }
  index= 0;
  len= (JCGO_CALL_FINALF(str) java_lang_String__length__(
   str));
  isNeg= jfalse;
  if (len == 0)
  {
   JCGO_THROW_EXC((java_lang_Long__numberFormatExceptionForInputString__Ls(
    str)));
  }
  ch= (jint)(java_lang_String__charAt__I(
   str, index));
  if (ch == (jint)(jchar)45/*'-'*/)
  {
   if (len == (jint)1)
   {
    JCGO_THROW_EXC((java_lang_Long__numberFormatExceptionForInputString__Ls(
     str)));
   }
   isNeg= (jboolean)jtrue;
   ch= (jint)(java_lang_String__charAt__I(
    str, ++index));
  }
  else
  {
   if (ch == (jint)(jchar)43/*'+'*/)
   {
    if (len == (jint)1)
    {
     JCGO_THROW_EXC((java_lang_Long__numberFormatExceptionForInputString__Ls(
      str)));
    }
    ch= (jint)(java_lang_String__charAt__I(
     str, ++index));
   }
  }
  if (decode)
  {
   if (ch == (jint)(jchar)48/*'0'*/)
   {
    if (++index == len)
    {
     return (jlong)0;
    }
    if (((java_lang_String__charAt__I(
     str, index)) & ~((jint)(jchar)120/*'x'*/ ^ (jchar)88/*'X'*/)) ==
     (jint)(jchar)88/*'X'*/)
    {
     radix= (jint)16;
     index++;
    }
    else
    {
     radix= (jint)8;
    }
   }
   else
   {
    if (ch == (jint)(jchar)35/*'#'*/)
    {
     radix= (jint)16;
     index++;
    }
   }
  }
  if (index == len)
  {
   JCGO_THROW_EXC((java_lang_Long__numberFormatExceptionForInputString__Ls(
    str)));
  }
  max_7e1= jcgo_ldiv(java_lang_Long__MAX_VALUE, (jlong)radix);
  if (isNeg && jcgo_lmod(java_lang_Long__MAX_VALUE, (jlong)radix) ==
   radix - (jint)1)
  {
   ++max_7e1;
  }
  val= (jlong)0;
  while (index < len)
  {
   jchar jcgo_rcvrC1;
   if (val < 0 || val > max_7e1)
   {
    JCGO_THROW_EXC((java_lang_Long__numberFormatExceptionForInputString__Ls(
     str)));
   }
   ch= (jcgo_rcvrC1= (java_lang_String__charAt__I(
    str, index++)), java_lang_Character__digit__CI(
    radix, jcgo_rcvrC1));
   val= val * (jlong)radix + (jlong)ch;
   if (ch < 0 || (val < 0 && (!isNeg || val != java_lang_Long__MIN_VALUE)))
   {
    JCGO_THROW_EXC((java_lang_Long__numberFormatExceptionForInputString__Ls(
     str)));
   }
  }
  return isNeg? (-val) : val;
 }
}

JCGO_NOSEP_STATIC java_lang_String CFASTCALL
java_lang_Long__toString__JI( jlong num, jint radix )
{
 {
  jcharArr buffer;
  jint i;
  jboolean isNeg;
  if ((jint)num == num)
  {
   return (java_lang_Integer__toString__II(
    (jint)num, radix));
  }
  if (radix < java_lang_Character__MIN_RADIX || radix > java_lang_Character__MAX_RADIX)
  {
   radix= (jint)10;
  }
  buffer= (jcharArr)jcgo_newArray(JCGO_CORECLASS_FOR(OBJT_jchar), 0,
   java_lang_Long__SIZE + (jint)1);
  i= java_lang_Long__SIZE + (jint)1;
  isNeg= jfalse;
  if (num < 0)
  {
   isNeg= (jboolean)jtrue;
   num= (-num);
   if (num < 0)
   {
    jObject jcgo_rcvrL1;
    jint jcgo_rcvrI1;
    jchar jcgo_rcvrC1;
    (jcgo_rcvrL1= (jObject)buffer, jcgo_rcvrI1= --i, jcgo_rcvrC1= JCGO_ARRAY_NZCACCESS(java_lang_Number__digits,
     (jint)(jcgo_lmod((-(num + (jlong)radix)), (jlong)radix))), JCGO_ARRAY_NZCACCESS((jcharArr)jcgo_rcvrL1,
     jcgo_rcvrI1)= jcgo_rcvrC1);
    num= (-(jcgo_ldiv(num, (jlong)radix)));
   }
  }
  do
  {
   jObject jcgo_rcvrL1;
   jint jcgo_rcvrI1;
   jchar jcgo_rcvrC1;
   (jcgo_rcvrL1= (jObject)buffer, jcgo_rcvrI1= --i, jcgo_rcvrC1= JCGO_ARRAY_NZCACCESS(java_lang_Number__digits,
    (jint)(jcgo_lmod(num, (jlong)radix))), JCGO_ARRAY_NZCACCESS((jcharArr)jcgo_rcvrL1,
    jcgo_rcvrI1)= jcgo_rcvrC1);
   num= jcgo_ldiv(num, (jlong)radix);
  }
   while (num > 0);
  if (isNeg)
  {
   JCGO_ARRAY_NZCACCESS(buffer, --i)= (jchar)45/*'-'*/;
  }
  return (java_lang_String__new__CAIIZ(
   buffer, i, (java_lang_Long__SIZE + (jint)1) - i, (jboolean)jtrue));
 }
}

JCGO_NOSEP_FRWINL java_lang_String CFASTCALL
java_lang_Long__toString__J( jlong num )
{
 {
  return (java_lang_Long__toString__JI(
   num, (jint)10));
 }
}

JCGO_NOSEP_FRWINL jlong CFASTCALL
java_lang_Long__parseLong__LsI( java_lang_String str, jint radix )
{
 {
  return (java_lang_Long__parseLong__LsIZ(
   str, radix, (jboolean)jfalse));
 }
}

JCGO_NOSEP_DATA CONST struct jcgo_methods_s java_lang_Long_methods=
{
 JCGO_CLASSREF_OF(java_lang_Long__class),
 JCGO_GCJDESCR_ZEROINIT
 OBJT_java_lang_Long,
 0,
 NULL,
 JCGO_CLINIT_INIT(0)
 0
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_Long_class_s java_lang_Long__class
 JCGO_THRD_ATTRNONGC=
{
 {
  &java_lang_Class_methods,
  JCGO_MON_INIT
  JCGO_OBJREF_OF(*(java_lang_Object)&java_lang_Long_methods),
  JCGO_STRREF_OF(jcgo_string1_Long),
  JCGO_CLASSREF_OF(java_lang_Number__class),
  ((jObjectArr)JCGO_OBJREF_OF(jcgo_array3_Object)),
  0x111
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype63_GmCnnctn jcgo_array4_Long=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 14,
 {
  (jbyte)(jchar)106/*'j'*/, (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)118/*'v'*/,
   (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)46/*'.'*/, (jbyte)(jchar)108/*'l'*/,
   (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)110/*'n'*/, (jbyte)(jchar)103/*'g'*/,
   (jbyte)(jchar)46/*'.'*/, (jbyte)(jchar)76/*'L'*/, (jbyte)(jchar)111/*'o'*/,
   (jbyte)(jchar)110/*'n'*/, (jbyte)(jchar)103/*'g'*/
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype42_GameShll jcgo_array5_Long=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 19,
 {
  (jbyte)(jchar)102/*'f'*/, (jbyte)(jchar)111/*'o'*/, (jbyte)(jchar)114/*'r'*/,
   (jbyte)(jchar)32/*' '*/, (jbyte)(jchar)105/*'i'*/, (jbyte)(jchar)110/*'n'*/,
   (jbyte)(jchar)112/*'p'*/, (jbyte)(jchar)117/*'u'*/, (jbyte)(jchar)116/*'t'*/,
   (jbyte)(jchar)32/*' '*/, (jbyte)(jchar)115/*'s'*/, (jbyte)(jchar)116/*'t'*/,
   (jbyte)(jchar)114/*'r'*/, (jbyte)(jchar)105/*'i'*/, (jbyte)(jchar)110/*'n'*/,
   (jbyte)(jchar)103/*'g'*/, (jbyte)(jchar)58/*':'*/, (jbyte)(jchar)32/*' '*/,
   (jbyte)(jchar)34/*'"'*/
 }
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string1_Long
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array4_Long),
 0, 14, (jint)0x17c521d0L
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string2_Long
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array5_Long),
 0, 19, (jint)0x65995deL
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string3_Long
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array49_GameShll),
 63, 1, (jint)0x22L
};

#ifdef CHKALL_java_lang_Long
#include "jcgochke.h"
#endif

#endif
