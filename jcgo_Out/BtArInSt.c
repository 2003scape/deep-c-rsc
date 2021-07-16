/* DO NOT EDIT THIS FILE - it is machine generated (JCGO_116) */

#ifdef JCGO_SEPARATED
#define JCGO_116
#include "jcgortl.h"
#include "Main.h"
#endif

#ifdef JCGO_116

#ifdef CHKALL_java_io_ByteArrayInputStream
#include "jcgobchk.h"
#endif

JCGO_NOSEP_INLINE java_io_ByteArrayInputStream CFASTCALL
java_io_ByteArrayInputStream__this__BAII( java_io_ByteArrayInputStream
 This, jbyteArr buffer, jint offset, jint length )
{
 {
  (java_io_InputStream__this__((java_io_InputStream)This));
  if (offset < 0 || length < 0 || offset > JCGO_ARRAY_LENGTH(buffer))
  {
   JCGO_THROW_EXC(java_lang_IllegalArgumentException__new__());
  }
  JCGO_FIELD_NZACCESS(This, buf)= buffer;
  JCGO_FIELD_NZACCESS(This, count)= offset + length;
  if (JCGO_FIELD_NZACCESS(This, count) > JCGO_ARRAY_LENGTH(JCGO_FIELD_NZACCESS(This,
   buf)))
  {
   JCGO_FIELD_NZACCESS(This, count)= JCGO_ARRAY_LENGTH(JCGO_FIELD_NZACCESS(This,
    buf));
  }
  JCGO_FIELD_NZACCESS(This, pos)= offset;
  (void)JCGO_FIELD_NZACCESS(This, pos);
 }
 return This;
}

JCGO_NOSEP_INLINE java_io_ByteArrayInputStream CFASTCALL
java_io_ByteArrayInputStream__this__BA( java_io_ByteArrayInputStream
 This, jbyteArr buffer )
{
 {
  (java_io_ByteArrayInputStream__this__BAII((java_io_ByteArrayInputStream)This,
   buffer, 0, JCGO_ARRAY_LENGTH(buffer)));
 }
 return This;
}

JCGO_NOSEP_INLINE java_io_ByteArrayInputStream CFASTCALL
java_io_ByteArrayInputStream__new__BA( jbyteArr buffer )
{
 return java_io_ByteArrayInputStream__this__BA(
  (java_io_ByteArrayInputStream)jcgo_newObject((jvtable)&java_io_ByteArrayInputStream_methods),
  buffer);
}

JCGO_NOSEP_INLINE jint CFASTCALL
java_io_ByteArrayInputStream__available__( java_io_ByteArrayInputStream
 This )
{
 JCGO_SYNC_BLOCKSAFENZ(This)
 {
  {
   jint jcgo_retval= JCGO_FIELD_NZACCESS(This, count) - JCGO_FIELD_NZACCESS(This,
    pos);
#ifndef JCGO_SEHTRY
   JCGO_SYNC_JUMPLEAVE(0);
#endif
   return jcgo_retval;
  }
 }
 JCGO_SYNC_ENDUNREACH
}

JCGO_NOSEP_STATIC jint CFASTCALL
java_io_ByteArrayInputStream__read__( java_io_ByteArrayInputStream
 This )
{
 JCGO_SYNC_BLOCKSAFENZ(This)
 {
  if (JCGO_FIELD_NZACCESS(This, pos) < JCGO_FIELD_NZACCESS(This, count))
  {
   jObject jcgo_rcvrL1;
   {
    jint jcgo_retval= ((jint)(jcgo_rcvrL1= (jObject)JCGO_FIELD_NZACCESS(This,
     buf), JCGO_ARRAY_BACCESS((jbyteArr)jcgo_rcvrL1, JCGO_FIELD_NZACCESS(This,
     pos)++))) & (jint)255;
#ifndef JCGO_SEHTRY
    JCGO_SYNC_JUMPLEAVE(0);
#endif
    return jcgo_retval;
   }
  }
#ifndef JCGO_SEHTRY
  JCGO_SYNC_JUMPLEAVE(0);
#endif
  return (-(jint)1);
 }
 JCGO_SYNC_ENDUNREACH
}

JCGO_NOSEP_STATIC jint CFASTCALL
java_io_ByteArrayInputStream__read__BAII( java_io_ByteArrayInputStream
 This, jbyteArr buffer, jint offset, jint length )
{
 JCGO_SYNC_BLOCKSAFENZ(This)
 {
  jint numBytes;
  if (JCGO_FIELD_NZACCESS(This, pos) >= JCGO_FIELD_NZACCESS(This, count))
  {
#ifndef JCGO_SEHTRY
   JCGO_SYNC_JUMPLEAVE(0);
#endif
   return (-(jint)1);
  }
  numBytes= (java_lang_Math__min__II(
   JCGO_FIELD_NZACCESS(This, count) - JCGO_FIELD_NZACCESS(This, pos),
   length));
  (java_lang_System__arraycopy__LoILoII(
   (java_lang_Object)JCGO_FIELD_NZACCESS(This, buf), (java_lang_Object)buffer,
   JCGO_FIELD_NZACCESS(This, pos), offset, numBytes));
  JCGO_FIELD_NZACCESS(This, pos)+= numBytes;
#ifndef JCGO_SEHTRY
  JCGO_SYNC_JUMPLEAVE(0);
#endif
  return numBytes;
 }
 JCGO_SYNC_ENDUNREACH
}

JCGO_NOSEP_DATA CONST struct java_io_ByteArrayInputStream_methods_s
 java_io_ByteArrayInputStream_methods=
{
 JCGO_CLASSREF_OF(java_io_ByteArrayInputStream__class),
 JCGO_GCJDESCR_INIT(java_io_ByteArrayInputStream_s, buf)
 OBJT_java_io_ByteArrayInputStream,
 (JCGO_OBJSIZE_T)sizeof(struct java_io_ByteArrayInputStream_s),
 NULL,
 JCGO_CLINIT_INIT(0)
 0,
 java_lang_Object__equals__Lo,
 java_lang_Object__hashCode__,
 java_lang_Object__toString__,
 java_lang_Object__finalize__,
 java_io_ByteArrayInputStream__available__,
 (void (CFASTCALL*)(java_io_InputStream))java_lang_Object__finalize__,
 java_io_ByteArrayInputStream__read__,
 java_io_ByteArrayInputStream__read__BAII
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_io_ByteArrayInputStream_class_s
 java_io_ByteArrayInputStream__class JCGO_THRD_ATTRNONGC=
{
 {
  &java_lang_Class_methods,
  JCGO_MON_INIT
  JCGO_OBJREF_OF(*(java_lang_Object)&java_io_ByteArrayInputStream_methods),
  JCGO_STRREF_OF(jcgo_string1_BtArInSt),
  JCGO_CLASSREF_OF(java_io_InputStream__class),
  ((jObjectArr)JCGO_OBJREF_OF(jcgo_array3_Object)),
  0x1
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype90_GmCnnctn jcgo_array2_BtArInSt=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 28,
 {
  (jbyte)(jchar)106/*'j'*/, (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)118/*'v'*/,
   (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)46/*'.'*/, (jbyte)(jchar)105/*'i'*/,
   (jbyte)(jchar)111/*'o'*/, (jbyte)(jchar)46/*'.'*/, (jbyte)(jchar)66/*'B'*/,
   (jbyte)(jchar)121/*'y'*/, (jbyte)(jchar)116/*'t'*/, (jbyte)(jchar)101/*'e'*/,
   (jbyte)(jchar)65/*'A'*/, (jbyte)(jchar)114/*'r'*/, (jbyte)(jchar)114/*'r'*/,
   (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)121/*'y'*/, (jbyte)(jchar)73/*'I'*/,
   (jbyte)(jchar)110/*'n'*/, (jbyte)(jchar)112/*'p'*/, (jbyte)(jchar)117/*'u'*/,
   (jbyte)(jchar)116/*'t'*/, (jbyte)(jchar)83/*'S'*/, (jbyte)(jchar)116/*'t'*/,
   (jbyte)(jchar)114/*'r'*/, (jbyte)(jchar)101/*'e'*/, (jbyte)(jchar)97/*'a'*/,
   (jbyte)(jchar)109/*'m'*/
 }
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string1_BtArInSt
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array2_BtArInSt),
 0, 28, (jint)0xb181c515L
};

#ifdef CHKALL_java_io_ByteArrayInputStream
#include "jcgochke.h"
#endif

#endif