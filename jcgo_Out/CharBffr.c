/* DO NOT EDIT THIS FILE - it is machine generated (JCGO_116) */

#ifdef JCGO_SEPARATED
#define JCGO_116
#include "jcgortl.h"
#include "Main.h"
#endif

#ifdef JCGO_116

#ifdef CHKALL_java_nio_CharBuffer
#include "jcgobchk.h"
#endif

JCGO_NOSEP_INLINE jint CFASTCALL
java_nio_CharBuffer__compareTo__Lo( java_nio_CharBuffer This, java_lang_Object
 obj )
{
 {
  java_nio_CharBuffer other;
  jint num;
  jint pos_this;
  jint pos_other;
  jint jcgo_rcvrI1;
  other= (java_nio_CharBuffer)JCGO_CAST_OBJECT0(OBJT_java_nio_CharBufferImpl,
   MAXT_java_nio_CharBufferImpl, obj);
  num= (jcgo_rcvrI1= (java_nio_Buffer__remaining__(
   (java_nio_Buffer)This)), java_lang_Math__min__II(
   jcgo_rcvrI1, (JCGO_CALL_FINALF(other) java_nio_Buffer__remaining__(
   (java_nio_Buffer)other))));
  pos_this= (java_nio_Buffer__position__(
   (java_nio_Buffer)This));
  pos_other= (java_nio_Buffer__position__(
   (java_nio_Buffer)other));
  {
   jint count;
   count= 0;
   for (; count < num; count++)
   {
    jchar a;
    jchar b;
    a= (java_nio_CharBufferImpl__get__I(
     (java_nio_CharBufferImpl)This, pos_this++));
    b= (java_nio_CharBufferImpl__get__I(
     (java_nio_CharBufferImpl)other, pos_other++));
    if (a == b)
    {
     continue;
    }
    if (a < b)
    {
     return (-(jint)1);
    }
    return (jint)1;
   }
  }
  return (jcgo_rcvrI1= (java_nio_Buffer__remaining__(
   (java_nio_Buffer)This)), jcgo_rcvrI1 - (java_nio_Buffer__remaining__(
   (java_nio_Buffer)other)));
 }
}

JCGO_NOSEP_FRWINL jboolean CFASTCALL
java_nio_CharBuffer__hasArray__( java_nio_CharBuffer This )
{
 {
  return (jboolean)(JCGO_FIELD_NZACCESS(This, backing_buffer) != jnull &&
   !(java_nio_CharBufferImpl__isReadOnly__(
   (java_nio_CharBufferImpl)This)));
 }
}

JCGO_NOSEP_INLINE jint CFASTCALL
java_nio_CharBuffer__length__( java_nio_CharBuffer This )
{
 {
  return (java_nio_Buffer__remaining__(
   (java_nio_Buffer)This));
 }
}

JCGO_NOSEP_INLINE java_nio_CharBuffer CFASTCALL
java_nio_CharBuffer__this__IIIIL8d4dvCAI( java_nio_CharBuffer This,
 java_lang_Object address, jcharArr backing_buffer, jint capacity,
 jint limit, jint position, jint mark, jint array_offset )
{
 {
  (java_nio_Buffer__this__IIIIL8d4dv((java_nio_Buffer)This, address,
   capacity, limit, position, mark));
  JCGO_FIELD_NZACCESS(This, backing_buffer)= backing_buffer;
  JCGO_FIELD_NZACCESS(This, array_offset)= array_offset;
 }
 return This;
}

JCGO_NOSEP_FRWINL java_nio_CharBuffer CFASTCALL
java_nio_CharBuffer__allocate__I( jint capacity )
{
 {
  return (java_nio_CharBuffer)(java_nio_CharBufferImpl__new__I(
   capacity));
 }
}

JCGO_NOSEP_STATIC java_nio_CharBuffer CFASTCALL
java_nio_CharBuffer__wrap__CAIIX( jcharArr array_7w5, jint offset,
 jint length, java_nio_CharBufferImpl jcgo_stackparam )
{
 {
  return (java_nio_CharBuffer)(java_nio_CharBufferImpl__this__CAIIIIIZ(
   jcgo_stackparam, array_7w5, 0, JCGO_ARRAY_LENGTH(array_7w5), offset +
   length, offset, (-(jint)1), (jboolean)jfalse));
 }
}

JCGO_NOSEP_FRWINL java_nio_CharBuffer CFASTCALL
java_nio_CharBuffer__wrap__CAII( jcharArr array_7w5, jint offset,
 jint length )
{
 return java_nio_CharBuffer__wrap__CAIIX(
  array_7w5, offset, length, (java_nio_CharBufferImpl)jcgo_newObject((jvtable)&java_nio_CharBufferImpl_methods));
}

JCGO_NOSEP_FRWINL java_nio_CharBuffer CFASTCALL
java_nio_CharBuffer__get__CA( java_nio_CharBuffer This, jcharArr dst
 )
{
 {
  return (java_nio_CharBufferImpl__get__CAII(
   (java_nio_CharBufferImpl)This, dst, 0, JCGO_ARRAY_LENGTH(dst)));
 }
}

JCGO_NOSEP_STATIC jcharArr CFASTCALL
java_nio_CharBuffer__array__( java_nio_CharBuffer This )
{
 {
  if (JCGO_FIELD_NZACCESS(This, backing_buffer) == jnull)
  {
   JCGO_THROW_EXC(java_lang_UnsupportedOperationException__new__());
  }
  (java_nio_Buffer__checkIfReadOnly__(
   (java_nio_Buffer)This));
  return JCGO_FIELD_NZACCESS(This, backing_buffer);
 }
}

JCGO_NOSEP_STATIC jint CFASTCALL
java_nio_CharBuffer__hashCode__( java_nio_CharBuffer This )
{
 {
  jint hashCode;
  jint multiplier;
  hashCode= (java_nio_CharBufferImpl__get__I(
   (java_nio_CharBufferImpl)This, (java_nio_Buffer__position__(
   (java_nio_Buffer)This)))) + (jint)31;
  multiplier= (jint)1;
  {
   jint i;
   i= (java_nio_Buffer__position__(
    (java_nio_Buffer)This)) + (jint)1;
   for (; i < (java_nio_Buffer__limit__(
    (java_nio_Buffer)This)); ++i)
   {
    multiplier*= (jint)31;
    hashCode+= ((java_nio_CharBufferImpl__get__I(
     (java_nio_CharBufferImpl)This, i)) + (jint)30) * multiplier;
   }
  }
  return hashCode;
 }
}

JCGO_NOSEP_STATIC jboolean CFASTCALL
java_nio_CharBuffer__equals__Lo( java_nio_CharBuffer This, java_lang_Object
 obj )
{
 {
  if (jcgo_instanceOf0(OBJT_java_nio_CharBufferImpl, MAXT_java_nio_CharBufferImpl,
   (jObject)obj))
  {
   return (jboolean)((java_nio_CharBuffer__compareTo__Lo(
    This, (java_lang_Object)((java_nio_CharBuffer)obj))) == 0);
  }
  return (jboolean)jfalse;
 }
}

JCGO_NOSEP_STATIC java_lang_String CFASTCALL
java_nio_CharBuffer__toString__( java_nio_CharBuffer This )
{
 {
  jcharArr buf;
  jint pos;
  if ((java_nio_CharBuffer__hasArray__(
   This)))
  {
   jObject jcgo_rcvrL1;
   jint jcgo_rcvrI1;
   return (jcgo_rcvrL1= (jObject)(java_nio_CharBuffer__array__(
    This)), jcgo_rcvrI1= (java_nio_Buffer__position__(
    (java_nio_Buffer)This)), java_lang_String__new__CAII(
    (jcharArr)jcgo_rcvrL1, jcgo_rcvrI1, (java_nio_CharBuffer__length__(
    This))));
  }
  buf= (jcharArr)jcgo_newArray(JCGO_CORECLASS_FOR(OBJT_jchar), 0, (java_nio_CharBuffer__length__(
   This)));
  pos= (java_nio_Buffer__position__(
   (java_nio_Buffer)This));
  (java_nio_CharBufferImpl__get__CAII(
   (java_nio_CharBufferImpl)This, buf, 0, JCGO_ARRAY_NZLENGTH(buf)));
  (java_nio_Buffer__position__I(
   (java_nio_Buffer)This, pos));
  return (java_lang_String__new__CA(
   buf));
 }
}

JCGO_NOSEP_INLINE java_nio_CharBuffer CFASTCALL
java_nio_CharBuffer__put__Ls( java_nio_CharBuffer This, java_lang_String
 str )
{
 {
  jObject jcgo_rcvrL1;
  return (jcgo_rcvrL1= (jObject)(JCGO_CALL_FINALF(str) java_lang_String__toCharArray__(
   str)), java_nio_CharBufferImpl__put__CAII(
   (java_nio_CharBufferImpl)This, (jcharArr)jcgo_rcvrL1, 0, (JCGO_CALL_FINALF(str)
   java_lang_String__length__(
   str))));
 }
}

JCGO_NOSEP_DATA CONST struct jcgo_methods_s java_nio_CharBuffer_methods=
{
 JCGO_CLASSREF_OF(java_nio_CharBuffer__class),
 JCGO_GCJDESCR_ZEROINIT
 OBJT_java_nio_CharBuffer,
 0,
 NULL,
 JCGO_CLINIT_INIT(0)
 0
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_nio_CharBuffer_class_s
 java_nio_CharBuffer__class JCGO_THRD_ATTRNONGC=
{
 {
  &java_lang_Class_methods,
  JCGO_MON_INIT
  JCGO_OBJREF_OF(*(java_lang_Object)&java_nio_CharBuffer_methods),
  JCGO_STRREF_OF(jcgo_string1_CharBffr),
  JCGO_CLASSREF_OF(java_nio_Buffer__class),
  ((jObjectArr)JCGO_OBJREF_OF(jcgo_array3_Object)),
  0x401
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype91_GmCnnctn jcgo_array2_CharBffr=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 23,
 {
  (jbyte)(jchar)106/*'j'*/, (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)118/*'v'*/,
   (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)46/*'.'*/, (jbyte)(jchar)110/*'n'*/,
   (jbyte)(jchar)105/*'i'*/, (jbyte)(jchar)111/*'o'*/, (jbyte)(jchar)46/*'.'*/,
   (jbyte)(jchar)67/*'C'*/, (jbyte)(jchar)104/*'h'*/, (jbyte)(jchar)97/*'a'*/,
   (jbyte)(jchar)114/*'r'*/, (jbyte)(jchar)66/*'B'*/, (jbyte)(jchar)117/*'u'*/,
   (jbyte)(jchar)102/*'f'*/, (jbyte)(jchar)102/*'f'*/, (jbyte)(jchar)101/*'e'*/,
   (jbyte)(jchar)114/*'r'*/, (jbyte)(jchar)73/*'I'*/, (jbyte)(jchar)109/*'m'*/,
   (jbyte)(jchar)112/*'p'*/, (jbyte)(jchar)108/*'l'*/
 }
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string1_CharBffr
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array2_CharBffr),
 0, 19, (jint)0xf5195cbcL
};

#ifdef CHKALL_java_nio_CharBuffer
#include "jcgochke.h"
#endif

#endif
