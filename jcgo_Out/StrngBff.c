/* DO NOT EDIT THIS FILE - it is machine generated (JCGO_116) */

#ifdef JCGO_SEPARATED
#define JCGO_116
#include "jcgortl.h"
#include "Main.h"
#endif

#ifdef JCGO_116

#ifdef CHKALL_java_lang_StringBuffer
#include "jcgobchk.h"
#endif

JCGO_NOSEP_INLINE jboolean CFASTCALL
java_lang_StringBuffer__hasHighByte__CAII( jcharArr chars, jint offset,
 jint count )
{
 {
  count+= offset;
  while (offset < count)
  {
   if ((jint)(JCGO_ARRAY_CACCESS(chars, offset++)) > (jint)255)
   {
    return (jboolean)jtrue;
   }
  }
  return (jboolean)jfalse;
 }
}

JCGO_NOSEP_INLINE void CFASTCALL
java_lang_StringBuffer__copyCharsToBytes__CAIBAII( jcharArr chars,
 jbyteArr bytes2, jint offset, jint offset2, jint count )
{
 {
  while (count-- > 0)
  {
   jObject jcgo_rcvrL1;
   jint jcgo_rcvrI1;
   jbyte jcgo_rcvrB1;
   (jcgo_rcvrL1= (jObject)bytes2, jcgo_rcvrI1= offset2++, jcgo_rcvrB1=
    (jbyte)JCGO_ARRAY_CACCESS(chars, offset++), JCGO_ARRAY_BACCESS((jbyteArr)jcgo_rcvrL1,
    jcgo_rcvrI1)= jcgo_rcvrB1);
  }
 }
}

JCGO_NOSEP_INLINE void CFASTCALL
java_lang_StringBuffer__copyBytesToChars__BAICAII( jbyteArr bytes,
 jcharArr chars2, jint offset, jint offset2, jint count )
{
 {
  while (count-- > 0)
  {
   jObject jcgo_rcvrL1;
   jint jcgo_rcvrI1;
   jchar jcgo_rcvrC1;
   (jcgo_rcvrL1= (jObject)chars2, jcgo_rcvrI1= offset2++, jcgo_rcvrC1=
    (jchar)((jint)((unsigned char)(JCGO_ARRAY_BACCESS(bytes, offset++)))),
    JCGO_ARRAY_CACCESS((jcharArr)jcgo_rcvrL1, jcgo_rcvrI1)= jcgo_rcvrC1);
  }
 }
}

JCGO_NOSEP_STATIC java_lang_StringBuffer CFASTCALL
java_lang_StringBuffer__this__I( java_lang_StringBuffer This, jint
 capacity )
{
 {
  ;
  JCGO_FIELD_NZACCESS(This, bytes)= (jbyteArr)jcgo_newArray(JCGO_CORECLASS_FOR(OBJT_jbyte),
   0, capacity);
 }
 return This;
}

JCGO_NOSEP_INLINE java_lang_StringBuffer CFASTCALL
java_lang_StringBuffer__new__I( jint capacity )
{
 return java_lang_StringBuffer__this__I(
  (java_lang_StringBuffer)jcgo_newObject((jvtable)&java_lang_StringBuffer_methods),
  capacity);
}

JCGO_NOSEP_INLINE java_lang_StringBuffer CFASTCALL
java_lang_StringBuffer__this__( java_lang_StringBuffer This )
{
 {
  (java_lang_StringBuffer__this__I((java_lang_StringBuffer)This, java_lang_StringBuffer__DEFAULT_CAPACITY));
 }
 return This;
}

JCGO_NOSEP_FRWINL jint CFASTCALL
java_lang_StringBuffer__length__( java_lang_StringBuffer This )
{
 JCGO_SYNC_BLOCKSAFENZ(This)
 {
  {
   jint jcgo_retval= JCGO_FIELD_NZACCESS(This, count);
#ifndef JCGO_SEHTRY
   JCGO_SYNC_JUMPLEAVE(0);
#endif
   return jcgo_retval;
  }
 }
 JCGO_SYNC_ENDUNREACH
}

JCGO_NOSEP_STATIC jchar CFASTCALL
java_lang_StringBuffer__charAt__I( java_lang_StringBuffer This, jint
 index )
{
 JCGO_SYNC_BLOCKSAFENZ(This)
 {
  jbyteArr bytes;
  if (index < 0 || index >= JCGO_FIELD_NZACCESS(This, count))
  {
   JCGO_THROW_EXC((java_lang_StringIndexOutOfBoundsException__new__I(
    index)));
  }
  bytes= JCGO_FIELD_NZACCESS(This, bytes);
  {
   jchar jcgo_retval= (jchar)(bytes != jnull? (jchar)((jint)((unsigned char)(JCGO_ARRAY_NZBACCESS(bytes,
    index)))) : JCGO_ARRAY_CACCESS(JCGO_FIELD_NZACCESS(This, value),
    index));
#ifndef JCGO_SEHTRY
   JCGO_SYNC_JUMPLEAVE(0);
#endif
   return jcgo_retval;
  }
 }
 JCGO_SYNC_ENDUNREACH
}

JCGO_NOSEP_STATIC void CFASTCALL
java_lang_StringBuffer__setCharAt__IC( java_lang_StringBuffer This,
 jint index, jchar ch )
{
 JCGO_SYNC_BLOCKSAFENZ(This)
 {
  jbyteArr bytes;
  if (index < 0 || index >= JCGO_FIELD_NZACCESS(This, count))
  {
   JCGO_THROW_EXC((java_lang_StringIndexOutOfBoundsException__new__I(
    index)));
  }
  (java_lang_StringBuffer__ensureCapacityInner__IZ(
   This, JCGO_FIELD_NZACCESS(This, count), (jboolean)((jint)ch > (jint)255)));
  bytes= JCGO_FIELD_NZACCESS(This, bytes);
  if (bytes != jnull)
  {
   JCGO_ARRAY_NZBACCESS(bytes, index)= ((jbyte)ch);
  }
  else
  {
   JCGO_ARRAY_CACCESS(JCGO_FIELD_NZACCESS(This, value), index)= ch;
  }
 }
 JCGO_SYNC_END
}

JCGO_NOSEP_STATIC java_lang_StringBuffer CFASTCALL
java_lang_StringBuffer__append__Ls( java_lang_StringBuffer This, java_lang_String
 str )
{
 JCGO_SYNC_BLOCKSAFENZ(This)
 {
  java_lang_Object strValue;
  jbyteArr strBytes;
  jint count;
  jint len;
  jint strOffset;
  jboolean outOfByte;
  if (str == jnull)
  {
   str= JCGO_STRREF_OF(jcgo_string5_String6D);
  }
  count= JCGO_FIELD_NZACCESS(This, count);
  len= (java_lang_String__length__(
   str));
  strValue= JCGO_FIELD_NZACCESS(str, value);
  strOffset= JCGO_FIELD_NZACCESS(str, offset);
  strBytes= (jbyteArr)jnull;
  outOfByte= jfalse;
  if (len > 0)
  {
   if ((JCGO_METHODS_OF(strValue)->jcgo_typeid== OBJT_jbyte+OBJT_jarray))
   {
    strBytes= (jbyteArr)strValue;
   }
   else
   {
    if (JCGO_FIELD_NZACCESS(This, bytes) != jnull && (java_lang_StringBuffer__hasHighByte__CAII(
     (jcharArr)JCGO_CAST_OBJECT0(OBJT_jchar+OBJT_jarray, MAXT_jchar+OBJT_jarray,
     strValue), strOffset, len)))
    {
     outOfByte= (jboolean)jtrue;
    }
   }
  }
  (java_lang_StringBuffer__ensureCapacityInner__IZ(
   This, count + len, (jboolean)outOfByte));
  if (len > 0)
  {
   jbyteArr bytes;
   bytes= JCGO_FIELD_NZACCESS(This, bytes);
   if (bytes != jnull)
   {
    if (strBytes != jnull)
    {
     (java_lang_VMSystem__arraycopy__LoILoII(
      (java_lang_Object)strBytes, (java_lang_Object)bytes, strOffset,
      count, len));
    }
    else
    {
     (java_lang_StringBuffer__copyCharsToBytes__CAIBAII(
      (jcharArr)JCGO_CAST_OBJECT0(OBJT_jchar+OBJT_jarray, MAXT_jchar+OBJT_jarray,
      strValue), bytes, strOffset, count, len));
    }
   }
   else
   {
    if (strBytes != jnull)
    {
     (java_lang_StringBuffer__copyBytesToChars__BAICAII(
      strBytes, JCGO_FIELD_NZACCESS(This, value), strOffset, count,
      len));
    }
    else
    {
     (java_lang_VMSystem__arraycopy__LoILoII(
      strValue, (java_lang_Object)JCGO_FIELD_NZACCESS(This, value),
      strOffset, count, len));
    }
   }
   JCGO_FIELD_NZACCESS(This, count)= count + len;
  }
#ifndef JCGO_SEHTRY
  JCGO_SYNC_JUMPLEAVE(0);
#endif
  return This;
 }
 JCGO_SYNC_ENDUNREACH
}

JCGO_NOSEP_STATIC java_lang_StringBuffer CFASTCALL
java_lang_StringBuffer__append__C( java_lang_StringBuffer This, jchar
 ch )
{
 JCGO_SYNC_BLOCKSAFENZ(This)
 {
  jbyteArr bytes;
  jint count;
  count= JCGO_FIELD_NZACCESS(This, count);
  (java_lang_StringBuffer__ensureCapacityInner__IZ(
   This, count + (jint)1, (jboolean)((jint)ch > (jint)255)));
  bytes= JCGO_FIELD_NZACCESS(This, bytes);
  if (bytes != jnull)
  {
   JCGO_ARRAY_NZBACCESS(bytes, count)= ((jbyte)ch);
  }
  else
  {
   JCGO_ARRAY_CACCESS(JCGO_FIELD_NZACCESS(This, value), count)= ch;
  }
  JCGO_FIELD_NZACCESS(This, count)= count + (jint)1;
#ifndef JCGO_SEHTRY
  JCGO_SYNC_JUMPLEAVE(0);
#endif
  return This;
 }
 JCGO_SYNC_ENDUNREACH
}

JCGO_NOSEP_FRWINL java_lang_StringBuffer CFASTCALL
java_lang_StringBuffer__append__I( java_lang_StringBuffer This, jint
 v )
{
 {
  struct java_lang_String_s jcgo_stackobj1;
  return (java_lang_StringBuffer__append__Ls(
   This, (java_lang_String__valueOf__IX(
   v, JCGO_STACKOBJ_NEW(jcgo_stackobj1, java_lang_String_methods)))));
 }
}

JCGO_NOSEP_FRWINL java_lang_String CFASTCALL
java_lang_StringBuffer__toString__X( java_lang_StringBuffer This,
 java_lang_String jcgo_stackparam )
{
 {
  return (java_lang_String__this__L8whtv(
   jcgo_stackparam, This));
 }
}

JCGO_NOSEP_FRWINL java_lang_String CFASTCALL
java_lang_StringBuffer__toString__( java_lang_StringBuffer This )
{
 return java_lang_StringBuffer__toString__X(This, (java_lang_String)jcgo_newObject((jvtable)&java_lang_String_methods));
}

JCGO_NOSEP_FRWINL java_lang_Object CFASTCALL
java_lang_StringBuffer__value__( java_lang_StringBuffer This )
{
 {
  jbyteArr bytes;
  bytes= JCGO_FIELD_NZACCESS(This, bytes);
  return bytes != jnull? (java_lang_Object)bytes : (java_lang_Object)JCGO_FIELD_NZACCESS(This,
   value);
 }
}

JCGO_NOSEP_FRWINL void CFASTCALL
java_lang_StringBuffer__setShared__( java_lang_StringBuffer This )
{
 {
  JCGO_FIELD_NZACCESS(This, shared)= (jboolean)jtrue;
 }
}

JCGO_NOSEP_STATIC void CFASTCALL
java_lang_StringBuffer__ensureCapacityInner__IZ( java_lang_StringBuffer
 This, jint minimumCapacity, jboolean outOfByte )
{
 {
  jbyteArr bytes;
  jcharArr chars;
  jint capacity;
  bytes= JCGO_FIELD_NZACCESS(This, bytes);
  chars= (jcharArr)jnull;
  if (minimumCapacity < 0)
  {
   minimumCapacity= JCGO_USHR_F((-(jint)1), (jint)1);
  }
  capacity= bytes != jnull? JCGO_ARRAY_NZLENGTH(bytes) : JCGO_ARRAY_LENGTH((chars=
   JCGO_FIELD_NZACCESS(This, value)));
  if (capacity < minimumCapacity || JCGO_FIELD_NZACCESS(This, shared) ||
   (outOfByte && bytes != jnull))
  {
   jint newCapacity;
   jint count;
   newCapacity= capacity;
   if (capacity < minimumCapacity)
   {
    newCapacity= JCGO_SHL_F((capacity + (jint)1), (jint)1);
    if (newCapacity <= minimumCapacity)
    {
     newCapacity= minimumCapacity;
    }
   }
   count= JCGO_FIELD_NZACCESS(This, count);
   if (bytes != jnull && !outOfByte)
   {
    jbyteArr newBytes;
    newBytes= (jbyteArr)jcgo_newArray(JCGO_CORECLASS_FOR(OBJT_jbyte),
     0, newCapacity);
    if (count > 0)
    {
     (java_lang_VMSystem__arraycopy__LoILoII(
      (java_lang_Object)bytes, (java_lang_Object)newBytes, 0, 0, count));
    }
    JCGO_FIELD_NZACCESS(This, bytes)= newBytes;
   }
   else
   {
    jcharArr newChars;
    newChars= (jcharArr)jcgo_newArray(JCGO_CORECLASS_FOR(OBJT_jchar),
     0, newCapacity);
    if (count > 0)
    {
     if (bytes != jnull)
     {
      {
       jint i;
       i= 0;
       for (; i < count; i++)
       {
        jchar jcgo_rcvrC1;
        (jcgo_rcvrC1= (jchar)((jint)((unsigned char)(JCGO_ARRAY_NZBACCESS(bytes,
         i)))), JCGO_ARRAY_NZCACCESS(newChars, i)= jcgo_rcvrC1);
       }
      }
     }
     else
     {
      (java_lang_VMSystem__arraycopy__LoILoII(
       (java_lang_Object)chars, (java_lang_Object)newChars, 0, 0, count));
     }
    }
    JCGO_FIELD_NZACCESS(This, value)= newChars;
    JCGO_FIELD_NZACCESS(This, bytes)= (jbyteArr)jnull;
   }
   JCGO_FIELD_NZACCESS(This, shared)= (jboolean)jfalse;
  }
 }
}

JCGO_NOSEP_DATA CONST struct java_lang_StringBuffer_methods_s java_lang_StringBuffer_methods=
{
 JCGO_CLASSREF_OF(java_lang_StringBuffer__class),
 JCGO_GCJDESCR_INIT(java_lang_StringBuffer_s, bytes)
 OBJT_java_lang_StringBuffer,
 (JCGO_OBJSIZE_T)sizeof(struct java_lang_StringBuffer_s),
 NULL,
 JCGO_CLINIT_INIT(0)
 java_lang_StringBuffer__this__,
 java_lang_Object__equals__Lo,
 java_lang_Object__hashCode__,
 java_lang_StringBuffer__toString__,
 java_lang_Object__finalize__
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_StringBuffer_class_s
 java_lang_StringBuffer__class JCGO_THRD_ATTRNONGC=
{
 {
  &java_lang_Class_methods,
  JCGO_MON_INIT
  JCGO_OBJREF_OF(*(java_lang_Object)&java_lang_StringBuffer_methods),
  JCGO_STRREF_OF(jcgo_string1_StrngBff),
  JCGO_CLASSREF_OF(java_lang_Object__class),
  ((jObjectArr)JCGO_OBJREF_OF(jcgo_array3_Object)),
  0x11
 }
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string1_StrngBff
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array6_String6D),
 0, 22, (jint)0x47539705L
};

#ifdef CHKALL_java_lang_StringBuffer
#include "jcgochke.h"
#endif

#endif
