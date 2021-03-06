/* DO NOT EDIT THIS FILE - it is machine generated (JCGO_116) */

#ifdef JCGO_SEPARATED
#define JCGO_116
#include "jcgortl.h"
#include "Main.h"
#endif

#ifdef JCGO_116

#ifdef CHKALL_java_io_BufferedOutputStream
#include "jcgobchk.h"
#endif

JCGO_NOSEP_STATIC java_io_BufferedOutputStream CFASTCALL
java_io_BufferedOutputStream__this__L0rv4gI( java_io_BufferedOutputStream
 This, java_io_OutputStream out, jint size )
{
 {
  (java_io_FilterOutputStream__this__L0rv4g((java_io_FilterOutputStream)This,
   out));
  if (size <= 0)
  {
   JCGO_THROW_EXC(java_lang_IllegalArgumentException__new__());
  }
  JCGO_FIELD_NZACCESS(This, buf)= (jbyteArr)jcgo_newArray(JCGO_CORECLASS_FOR(OBJT_jbyte),
   0, size);
 }
 return This;
}

JCGO_NOSEP_FRWINL java_io_BufferedOutputStream CFASTCALL
java_io_BufferedOutputStream__new__L0rv4gI( java_io_OutputStream out,
 jint size )
{
 return java_io_BufferedOutputStream__this__L0rv4gI(
  (java_io_BufferedOutputStream)jcgo_newObject((jvtable)&java_io_BufferedOutputStream_methods),
  out, size);
}

JCGO_NOSEP_INLINE java_io_BufferedOutputStream CFASTCALL
java_io_BufferedOutputStream__this__L0rv4g( java_io_BufferedOutputStream
 This, java_io_OutputStream out )
{
 {
  (java_io_BufferedOutputStream__this__L0rv4gI((java_io_BufferedOutputStream)This,
   out, java_io_BufferedOutputStream__DEFAULT_BUFFER_SIZE));
 }
 return This;
}

JCGO_NOSEP_INLINE java_io_BufferedOutputStream CFASTCALL
java_io_BufferedOutputStream__new__L0rv4g( java_io_OutputStream out
 )
{
 return java_io_BufferedOutputStream__this__L0rv4g(
  (java_io_BufferedOutputStream)jcgo_newObject((jvtable)&java_io_BufferedOutputStream_methods),
  out);
}

JCGO_NOSEP_STATIC void CFASTCALL
java_io_BufferedOutputStream__flushBuffer__( java_io_BufferedOutputStream
 This )
{
 {
  jObject jcgo_rcvrL1;
  if (JCGO_FIELD_NZACCESS(This, count) == 0)
  {
   return;
  }
  (jcgo_rcvrL1= (jObject)JCGO_FIELD_NZACCESS(This, out), JCGO_CALL_VFUNC((java_io_OutputStream)jcgo_rcvrL1)->write__BAII(
   (java_io_OutputStream)jcgo_rcvrL1, JCGO_FIELD_NZACCESS(This, buf),
   0, JCGO_FIELD_NZACCESS(This, count)));
  JCGO_FIELD_NZACCESS(This, count)= 0;
 }
}

JCGO_NOSEP_STATIC void CFASTCALL
java_io_BufferedOutputStream__write__BAII( java_io_BufferedOutputStream
 This, jbyteArr buf, jint offset, jint len )
{
 JCGO_SYNC_BLOCKSAFENZ(This)
 {
  if (len < JCGO_ARRAY_LENGTH(JCGO_FIELD_NZACCESS(This, buf)))
  {
   if (len > JCGO_ARRAY_LENGTH(JCGO_FIELD_NZACCESS(This, buf)) - JCGO_FIELD_NZACCESS(This,
    count))
   {
    (java_io_BufferedOutputStream__flushBuffer__(
     This));
   }
   (java_lang_System__arraycopy__LoILoII(
    (java_lang_Object)buf, (java_lang_Object)(JCGO_FIELD_NZACCESS(This,
    buf)), offset, JCGO_FIELD_NZACCESS(This, count), len));
   JCGO_FIELD_NZACCESS(This, count)+= len;
  }
  else
  {
   jObject jcgo_rcvrL1;
   (java_io_BufferedOutputStream__flushBuffer__(
    This));
   (jcgo_rcvrL1= (jObject)JCGO_FIELD_NZACCESS(This, out), JCGO_CALL_VFUNC((java_io_OutputStream)jcgo_rcvrL1)->write__BAII(
    (java_io_OutputStream)jcgo_rcvrL1, buf, offset, len));
  }
 }
 JCGO_SYNC_END
}

JCGO_NOSEP_STATIC void CFASTCALL
java_io_BufferedOutputStream__flush__( java_io_BufferedOutputStream
 This )
{
 JCGO_SYNC_BLOCKSAFENZ(This)
 {
  jObject jcgo_rcvrL1;
  (java_io_BufferedOutputStream__flushBuffer__(
   This));
  (jcgo_rcvrL1= (jObject)JCGO_FIELD_NZACCESS(This, out), JCGO_CALL_VFUNC((java_io_OutputStream)jcgo_rcvrL1)->flush__(
   (java_io_OutputStream)jcgo_rcvrL1));
 }
 JCGO_SYNC_END
}

JCGO_NOSEP_DATA CONST struct java_io_BufferedOutputStream_methods_s
 java_io_BufferedOutputStream_methods=
{
 JCGO_CLASSREF_OF(java_io_BufferedOutputStream__class),
 JCGO_GCJDESCR_INIT(java_io_BufferedOutputStream_s, buf)
 OBJT_java_io_BufferedOutputStream,
 (JCGO_OBJSIZE_T)sizeof(struct java_io_BufferedOutputStream_s),
 NULL,
 JCGO_CLINIT_INIT(0)
 0,
 java_lang_Object__equals__Lo,
 java_lang_Object__hashCode__,
 java_lang_Object__toString__,
 java_lang_Object__finalize__,
 java_io_BufferedOutputStream__write__BAII,
 java_io_BufferedOutputStream__flush__,
 java_io_FilterOutputStream__close__
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_io_BufferedOutputStream_class_s
 java_io_BufferedOutputStream__class JCGO_THRD_ATTRNONGC=
{
 {
  &java_lang_Class_methods,
  JCGO_MON_INIT
  JCGO_OBJREF_OF(*(java_lang_Object)&java_io_BufferedOutputStream_methods),
  JCGO_STRREF_OF(jcgo_string1_BffrOtSt),
  JCGO_CLASSREF_OF(java_io_FilterOutputStream__class),
  ((jObjectArr)JCGO_OBJREF_OF(jcgo_array3_Object)),
  0x1
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype90_GmCnnctn jcgo_array2_BffrOtSt=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 28,
 {
  (jbyte)(jchar)106/*'j'*/, (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)118/*'v'*/,
   (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)46/*'.'*/, (jbyte)(jchar)105/*'i'*/,
   (jbyte)(jchar)111/*'o'*/, (jbyte)(jchar)46/*'.'*/, (jbyte)(jchar)66/*'B'*/,
   (jbyte)(jchar)117/*'u'*/, (jbyte)(jchar)102/*'f'*/, (jbyte)(jchar)102/*'f'*/,
   (jbyte)(jchar)101/*'e'*/, (jbyte)(jchar)114/*'r'*/, (jbyte)(jchar)101/*'e'*/,
   (jbyte)(jchar)100/*'d'*/, (jbyte)(jchar)79/*'O'*/, (jbyte)(jchar)117/*'u'*/,
   (jbyte)(jchar)116/*'t'*/, (jbyte)(jchar)112/*'p'*/, (jbyte)(jchar)117/*'u'*/,
   (jbyte)(jchar)116/*'t'*/, (jbyte)(jchar)83/*'S'*/, (jbyte)(jchar)116/*'t'*/,
   (jbyte)(jchar)114/*'r'*/, (jbyte)(jchar)101/*'e'*/, (jbyte)(jchar)97/*'a'*/,
   (jbyte)(jchar)109/*'m'*/
 }
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string1_BffrOtSt
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array2_BffrOtSt),
 0, 28, (jint)0x2533067cL
};

#ifdef CHKALL_java_io_BufferedOutputStream
#include "jcgochke.h"
#endif

#endif
