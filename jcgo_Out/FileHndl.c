/* DO NOT EDIT THIS FILE - it is machine generated (JCGO_116) */

#ifdef JCGO_SEPARATED
#define JCGO_116
#include "jcgortl.h"
#include "Main.h"
#endif

#ifdef JCGO_116

#ifdef CHKALL_gnu_java_nio_VMChannel
#include "jcgobchk.h"
#endif

JCGO_NOSEP_INLINE void CFASTCALL
gnu_java_nio_VMChannel_FileHandle__void( gnu_java_nio_VMChannel_FileHandle
 This )
{
 JCGO_FIELD_NZACCESS(This, fd)= (-(jint)1);
}

JCGO_NOSEP_INLINE gnu_java_nio_VMChannel_FileHandle CFASTCALL
gnu_java_nio_VMChannel_FileHandle__this__I( gnu_java_nio_VMChannel_FileHandle
 This, jint mode )
{
 {
  (gnu_java_nio_VMChannel_Handle__this__((gnu_java_nio_VMChannel_Handle)This));
  gnu_java_nio_VMChannel_FileHandle__void(This);
  JCGO_FIELD_NZACCESS(This, mode)= mode;
 }
 return This;
}

JCGO_NOSEP_FRWINL gnu_java_nio_VMChannel_FileHandle CFASTCALL
gnu_java_nio_VMChannel_FileHandle__new__I( jint mode )
{
 return gnu_java_nio_VMChannel_FileHandle__this__I(
  (gnu_java_nio_VMChannel_FileHandle)jcgo_newObject((jvtable)&gnu_java_nio_VMChannel_FileHandle_methods),
  mode);
}

JCGO_NOSEP_STATIC jint CFASTCALL
gnu_java_nio_VMChannel_FileHandle__getNativeFD__( gnu_java_nio_VMChannel_FileHandle
 This )
{
 {
  jint fd;
  fd= JCGO_FIELD_NZACCESS(This, fd);
  if (fd == (-(jint)1))
  {
   JCGO_THROW_EXC((java_io_IOException__new__Ls(
    JCGO_STRREF_OF(jcgo_string4_State))));
  }
  return fd;
 }
}

JCGO_NOSEP_STATIC void CFASTCALL
gnu_java_nio_VMChannel_FileHandle__setNonBlocking__Z( gnu_java_nio_VMChannel_FileHandle
 This, jboolean on )
{
 {
  (gnu_java_nio_VMChannel_FileHandle__getNativeFD__(
   This));
  JCGO_FIELD_NZACCESS(This, isNonBlocking)= (jboolean)on;
 }
}

JCGO_NOSEP_STATIC jint CFASTCALL
gnu_java_nio_VMChannel_FileHandle__available__( gnu_java_nio_VMChannel_FileHandle
 This )
{
 JCGO_SYNC_BLOCKSAFENZ(This)
 {
  jint fd;
  fd= (gnu_java_nio_VMChannel_FileHandle__getNativeFD__(
   This));
  {
   jint jcgo_retval= (JCGO_FIELD_NZACCESS(This, mode) & gnu_java_nio_FileChannelImpl__READ) !=
    0? (gnu_java_nio_VMChannel__fileAvailable__I(
    fd)) : 0;
#ifndef JCGO_SEHTRY
   JCGO_SYNC_JUMPLEAVE(0);
#endif
   return jcgo_retval;
  }
 }
 JCGO_SYNC_ENDUNREACH
}

JCGO_NOSEP_STATIC jint CFASTCALL
gnu_java_nio_VMChannel_FileHandle__read__BAII( gnu_java_nio_VMChannel_FileHandle
 This, jbyteArr buffer, jint off, jint len )
{
 JCGO_SYNC_BLOCKSAFENZ(This)
 {
  jint fd;
  fd= (gnu_java_nio_VMChannel_FileHandle__getNativeFD__(
   This));
  if ((JCGO_FIELD_NZACCESS(This, mode) & gnu_java_nio_FileChannelImpl__READ) ==
   0)
  {
   JCGO_THROW_EXC(java_nio_channels_NonReadableChannelException__new__());
  }
  {
   jint jcgo_retval= (gnu_java_nio_VMChannel__fileRead__IBAIIZ(
    buffer, fd, off, len, (jboolean)JCGO_FIELD_NZACCESS(This, isNonBlocking)));
#ifndef JCGO_SEHTRY
   JCGO_SYNC_JUMPLEAVE(0);
#endif
   return jcgo_retval;
  }
 }
 JCGO_SYNC_ENDUNREACH
}

JCGO_NOSEP_STATIC void CFASTCALL
gnu_java_nio_VMChannel_FileHandle__write__BAIAI( gnu_java_nio_VMChannel_FileHandle
 This, jbyteArr buffer, jintArr offArr, jint len )
{
 JCGO_SYNC_BLOCKSAFENZ(This)
 {
  jint fd;
  fd= (gnu_java_nio_VMChannel_FileHandle__getNativeFD__(
   This));
  if ((JCGO_FIELD_NZACCESS(This, mode) & gnu_java_nio_FileChannelImpl__WRITE) ==
   0)
  {
   JCGO_THROW_EXC(java_nio_channels_NonWritableChannelException__new__());
  }
  (gnu_java_nio_VMChannel__fileWrite__IBAIAIZ(
   buffer, offArr, fd, len, (jboolean)JCGO_FIELD_NZACCESS(This, isNonBlocking)));
 }
 JCGO_SYNC_END
}

JCGO_NOSEP_STATIC void CFASTCALL
gnu_java_nio_VMChannel_FileHandle__close__( gnu_java_nio_VMChannel_FileHandle
 This )
{
 {
  jint fd;
  fd= JCGO_FIELD_NZACCESS(This, fd);
  JCGO_FIELD_NZACCESS(This, fd)= (-(jint)1);
  (gnu_java_nio_VMChannel__close__I(
   fd));
 }
}

JCGO_NOSEP_INLINE jboolean CFASTCALL
gnu_java_nio_VMChannel_FileHandle__needsCloseOnFinalize__( gnu_java_nio_VMChannel_FileHandle
 This )
{
 {
  return (jboolean)(!(gnu_java_nio_VMChannel__isStdInOutErr__I(
   JCGO_FIELD_NZACCESS(This, fd))));
 }
}

JCGO_NOSEP_FRWINL void CFASTCALL
gnu_java_nio_VMChannel_FileHandle__setNativeFD__I( gnu_java_nio_VMChannel_FileHandle
 This, jint fd )
{
 {
  if (JCGO_FIELD_NZACCESS(This, fd) != (-(jint)1))
  {
   JCGO_THROW_EXC((java_io_IOException__new__Ls(
    JCGO_STRREF_OF(jcgo_string6_State))));
  }
  JCGO_FIELD_NZACCESS(This, fd)= fd;
 }
}

JCGO_NOSEP_DATA CONST struct gnu_java_nio_VMChannel_FileHandle_methods_s
 gnu_java_nio_VMChannel_FileHandle_methods=
{
 JCGO_CLASSREF_OF(gnu_java_nio_VMChannel_FileHandle__class),
 JCGO_GCJDESCR_ZEROINIT
 OBJT_gnu_java_nio_VMChannel_FileHandle,
 -(JCGO_OBJSIZE_T)sizeof(struct gnu_java_nio_VMChannel_FileHandle_s),
 NULL,
 JCGO_CLINIT_INIT(0)
 0,
 java_lang_Object__equals__Lo,
 java_lang_Object__hashCode__,
 java_lang_Object__toString__,
 java_lang_Object__finalize__,
 gnu_java_nio_VMChannel_FileHandle__getNativeFD__,
 gnu_java_nio_VMChannel_FileHandle__setNonBlocking__Z,
 gnu_java_nio_VMChannel_FileHandle__available__,
 gnu_java_nio_VMChannel_FileHandle__read__BAII,
 gnu_java_nio_VMChannel_FileHandle__write__BAIAI,
 gnu_java_nio_VMChannel_FileHandle__close__,
 gnu_java_nio_VMChannel_FileHandle__needsCloseOnFinalize__
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct gnu_java_nio_VMChannel_FileHandle_class_s
 gnu_java_nio_VMChannel_FileHandle__class JCGO_THRD_ATTRNONGC=
{
 {
  &java_lang_Class_methods,
  JCGO_MON_INIT
  JCGO_OBJREF_OF(*(java_lang_Object)&gnu_java_nio_VMChannel_FileHandle_methods),
  JCGO_STRREF_OF(jcgo_string1_FileHndl),
  JCGO_CLASSREF_OF(gnu_java_nio_VMChannel_Handle__class),
  ((jObjectArr)JCGO_OBJREF_OF(jcgo_array3_Object)),
  0x1a
 }
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string1_FileHndl
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array9_VMChnnl),
 0, 33, (jint)0x78efeca2L
};

#ifdef CHKALL_gnu_java_nio_VMChannel
#include "jcgochke.h"
#endif

#endif
