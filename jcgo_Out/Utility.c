/* DO NOT EDIT THIS FILE - it is machine generated (JCGO_116) */

#ifdef JCGO_SEPARATED
#define JCGO_116
#include "jcgortl.h"
#include "Main.h"
#endif

#ifdef JCGO_116

#ifdef CHKALL_Utility
#include "jcgobchk.h"
#endif

JCGO_NOSEP_INLINE jbyteArr CFASTCALL
package_Utility__unpackData__LsIBABA( java_lang_String filename, jbyteArr
 archiveData, jbyteArr fileData, jint i )
{
 {
  jint numEntries;
  jint wantedHash;
  jint offset;
  jint jcgo_rcvrI1;
  numEntries= (jcgo_rcvrI1= ((jint)((unsigned char)(JCGO_ARRAY_BACCESS(archiveData,
   0)))) * (jint)256, jcgo_rcvrI1 + ((jint)((unsigned char)(JCGO_ARRAY_BACCESS(archiveData,
   (jint)1)))));
  wantedHash= 0;
  filename= (JCGO_CALL_FINALF(filename) java_lang_String__toUpperCase__(
   filename));
  {
   jint l;
   l= 0;
   for (; l < (java_lang_String__length__(
    filename)); l++)
   {
    wantedHash= (wantedHash * (jint)61 + (java_lang_String__charAt__I(
     filename, l))) - (jint)32;
   }
  }
  offset= numEntries * (jint)10 + (jint)2;
  {
   jint entry;
   entry= 0;
   for (; entry < numEntries; entry++)
   {
    jint fileHash;
    jint fileSize;
    jint fileSizeCompressed;
    jint jcgo_rcvrI1;
    fileHash= (jcgo_rcvrI1= (jcgo_rcvrI1= (jcgo_rcvrI1= ((jint)((unsigned char)(JCGO_ARRAY_NZBACCESS(archiveData,
     entry * (jint)10 + (jint)2)))) * (jint)0x1000000L, jcgo_rcvrI1 +
     ((jint)((unsigned char)(JCGO_ARRAY_NZBACCESS(archiveData, entry *
     (jint)10 + (jint)3)))) * (jint)65536L), jcgo_rcvrI1 + ((jint)((unsigned char)(JCGO_ARRAY_NZBACCESS(archiveData,
     entry * (jint)10 + (jint)4)))) * (jint)256), jcgo_rcvrI1 + ((jint)((unsigned char)(JCGO_ARRAY_NZBACCESS(archiveData,
     entry * (jint)10 + (jint)5)))));
    fileSize= (jcgo_rcvrI1= (jcgo_rcvrI1= ((jint)((unsigned char)(JCGO_ARRAY_NZBACCESS(archiveData,
     entry * (jint)10 + (jint)6)))) * (jint)65536L, jcgo_rcvrI1 + ((jint)((unsigned char)(JCGO_ARRAY_NZBACCESS(archiveData,
     entry * (jint)10 + (jint)7)))) * (jint)256), jcgo_rcvrI1 + ((jint)((unsigned char)(JCGO_ARRAY_NZBACCESS(archiveData,
     entry * (jint)10 + (jint)8)))));
    fileSizeCompressed= (jcgo_rcvrI1= (jcgo_rcvrI1= ((jint)((unsigned char)(JCGO_ARRAY_NZBACCESS(archiveData,
     entry * (jint)10 + (jint)9)))) * (jint)65536L, jcgo_rcvrI1 + ((jint)((unsigned char)(JCGO_ARRAY_NZBACCESS(archiveData,
     entry * (jint)10 + (jint)10)))) * (jint)256), jcgo_rcvrI1 + ((jint)((unsigned char)(JCGO_ARRAY_NZBACCESS(archiveData,
     entry * (jint)10 + (jint)11)))));
    if (fileHash == wantedHash)
    {
     if (fileData == jnull)
     {
      fileData= (jbyteArr)jcgo_newArray(JCGO_CORECLASS_FOR(OBJT_jbyte),
       0, fileSize + i);
     }
     if (fileSize != fileSizeCompressed)
     {
      (package_BZLib__decompress__BAIBAII(
       fileData, archiveData, fileSize, fileSizeCompressed, offset));
     }
     else
     {
      {
       jint j;
       j= 0;
       for (; j < fileSize; j++)
       {
        jbyte jcgo_rcvrB1;
        (jcgo_rcvrB1= JCGO_ARRAY_NZBACCESS(archiveData, offset + j),
         JCGO_ARRAY_NZBACCESS(fileData, j)= jcgo_rcvrB1);
       }
      }
     }
     return fileData;
    }
    offset+= fileSizeCompressed;
   }
  }
  return (jbyteArr)jnull;
 }
}

JCGO_NOSEP_FRWINL jint CFASTCALL
package_Utility__getUnsignedByte__B( jbyte byte0 )
{
 {
  return (jint)((unsigned char)byte0);
 }
}

JCGO_NOSEP_STATIC java_io_InputStream CFASTCALL
package_Utility__openFile__Ls( java_lang_String s )
{
 {
  java_lang_Object obj;
  if (((java_net_URL)jnull) == jnull)
  {
   obj= (java_lang_Object)(java_io_BufferedInputStream__new__L0gpra(
    (java_io_InputStream)(java_io_FileInputStream__new__Ls(
    s))));
  }
  else
  {
   java_net_URL url;
   url= (java_net_URL__new__L6799iLs(
    ((java_net_URL)jnull), s));
   obj= (java_lang_Object)(java_net_URL__openStream__(
    url));
  }
  return ((java_io_InputStream)obj);
 }
}

JCGO_NOSEP_INLINE void CFASTCALL
package_Utility__readFully__LsBAI( java_lang_String s, jbyteArr abyte0,
 jint i )
{
 {
  java_io_InputStream inputstream;
  java_io_DataInputStream datainputstream;
  struct java_io_DataInputStream_s jcgo_stackobj1;
  inputstream= (package_Utility__openFile__Ls(
   s));
  datainputstream= (java_io_DataInputStream__this__L0gpra(
   JCGO_STACKOBJ_NEW(jcgo_stackobj1, java_io_DataInputStream_methods),
   inputstream));
  {
   JCGO_TRY_BLOCK
   {
    (java_io_DataInputStream__readFully__BAII(
     datainputstream, abyte0, 0, i));
   }
   JCGO_TRY_LEAVE
   JCGO_TRY_CATCHES(1)
   JCGO_TRY_CATCH(OBJT_java_io_EOFException, MAXT_java_io_EOFException)
   {
   }
   JCGO_TRY_RETHROW(1)
  }
  (java_io_FilterInputStream__close__(
   (java_io_FilterInputStream)datainputstream));
 }
}

JCGO_NOSEP_STATIC jint CFASTCALL
package_Utility__getUnsignedShort__BAI( jbyteArr abyte0, jint i )
{
 {
  jint jcgo_rcvrI1;
  return (jcgo_rcvrI1= JCGO_SHL_F(((jint)((unsigned char)(JCGO_ARRAY_BACCESS(abyte0,
   i)))), (jint)8), jcgo_rcvrI1 + ((jint)((unsigned char)(JCGO_ARRAY_BACCESS(abyte0,
   i + (jint)1)))));
 }
}

JCGO_NOSEP_STATIC jint CFASTCALL
package_Utility__getUnsignedInt__BAI( jbyteArr abyte0, jint i )
{
 {
  jint jcgo_rcvrI1;
  return (jcgo_rcvrI1= (jcgo_rcvrI1= (jcgo_rcvrI1= JCGO_SHL_F(((jint)((unsigned char)(JCGO_ARRAY_BACCESS(abyte0,
   i)))), (jint)24), jcgo_rcvrI1 + JCGO_SHL_F(((jint)((unsigned char)(JCGO_ARRAY_BACCESS(abyte0,
   i + (jint)1)))), (jint)16)), jcgo_rcvrI1 + JCGO_SHL_F(((jint)((unsigned char)(JCGO_ARRAY_BACCESS(abyte0,
   i + (jint)2)))), (jint)8)), jcgo_rcvrI1 + ((jint)((unsigned char)(JCGO_ARRAY_BACCESS(abyte0,
   i + (jint)3)))));
 }
}

JCGO_NOSEP_STATIC jlong CFASTCALL
package_Utility__getUnsignedLong__BAI( jbyteArr buff, jint off )
{
 {
  jlong jcgo_rcvrJ1;
  return (jcgo_rcvrJ1= JCGO_LSHL_F(((jlong)(package_Utility__getUnsignedInt__BAI(
   buff, off)) & JLONG_C(0xffffffff)), (jint)32), jcgo_rcvrJ1 + ((jlong)(package_Utility__getUnsignedInt__BAI(
   buff, off + (jint)4)) & JLONG_C(0xffffffff)));
 }
}

JCGO_NOSEP_STATIC jint CFASTCALL
package_Utility__getSignedShort__BAI( jbyteArr abyte0, jint i )
{
 {
  jint j;
  jint jcgo_rcvrI1;
  j= (jcgo_rcvrI1= (package_Utility__getUnsignedByte__B(
   JCGO_ARRAY_BACCESS(abyte0, i))) * (jint)256, jcgo_rcvrI1 + (package_Utility__getUnsignedByte__B(
   JCGO_ARRAY_BACCESS(abyte0, i + (jint)1))));
  if (j > (jint)32767L)
  {
   j-= (jint)65536L;
  }
  return j;
 }
}

JCGO_NOSEP_STATIC jint CFASTCALL
package_Utility__getUnsignedInt2__BAI( jbyteArr abyte0, jint i )
{
 {
  if (((jint)((unsigned char)(JCGO_ARRAY_BACCESS(abyte0, i)))) < (jint)128)
  {
   return (jint)(JCGO_ARRAY_NZBACCESS(abyte0, i));
  }
  else
  {
   jint jcgo_rcvrI1;
   return (jcgo_rcvrI1= (jcgo_rcvrI1= (jcgo_rcvrI1= JCGO_SHL_F(((jint)((unsigned char)(JCGO_ARRAY_NZBACCESS(abyte0,
    i)))) - (jint)128, (jint)24), jcgo_rcvrI1 + JCGO_SHL_F(((jint)((unsigned char)(JCGO_ARRAY_NZBACCESS(abyte0,
    i + (jint)1)))), (jint)16)), jcgo_rcvrI1 + JCGO_SHL_F(((jint)((unsigned char)(JCGO_ARRAY_NZBACCESS(abyte0,
    i + (jint)2)))), (jint)8)), jcgo_rcvrI1 + ((jint)((unsigned char)(JCGO_ARRAY_NZBACCESS(abyte0,
    i + (jint)3)))));
  }
 }
}

JCGO_NOSEP_STATIC jint CFASTCALL
package_Utility__getBitMask__BAII( jbyteArr buff, jint off, jint len
 )
{
 {
  jint k;
  jint l;
  jint i1;
  k= JCGO_SHR_F(off, (jint)3);
  l= (jint)8 - (off & (jint)7);
  i1= 0;
  for (; len > l; l= (jint)8)
  {
   jbyte jcgo_rcvrB1;
   i1+= JCGO_SHL_F((jcgo_rcvrB1= JCGO_ARRAY_BACCESS(buff, k++), jcgo_rcvrB1 &
    JCGO_ARRAY_IACCESS(package_Utility__bitmask, l)), len - l);
   len-= l;
  }
  if (len == l)
  {
   jbyte jcgo_rcvrB1;
   i1+= (jcgo_rcvrB1= JCGO_ARRAY_BACCESS(buff, k), jcgo_rcvrB1 & JCGO_ARRAY_IACCESS(package_Utility__bitmask,
    l));
  }
  else
  {
   jint jcgo_rcvrI1;
   i1+= (jcgo_rcvrI1= JCGO_SHR_F(JCGO_ARRAY_BACCESS(buff, k), l - len),
    jcgo_rcvrI1 & JCGO_ARRAY_IACCESS(package_Utility__bitmask, len));
  }
  return i1;
 }
}

JCGO_NOSEP_STATIC java_lang_String CFASTCALL
package_Utility__formatAuthString__LsI( java_lang_String s, jint maxlen
 )
{
 {
  java_lang_String s1;
  s1= JCGO_STRREF_OF(jcgo_string3_String6D);
  {
   jint j;
   j= 0;
   for (; j < maxlen; j++)
   {
    if (j >= (JCGO_CALL_FINALF(s) java_lang_String__length__(
     s)))
    {
     s1= java_lang_VMSystem__concat0X__LsLs(
      s1, JCGO_STRREF_OF(jcgo_string327_Mdclnt));
    }
    else
    {
     jchar c;
     c= (java_lang_String__charAt__I(
      s, j));
     if (c >= (jchar)97/*'a'*/ && c <= (jchar)122/*'z'*/)
     {
      s1= java_lang_VMSystem__concat0X__LsLs(
       s1, (java_lang_String__valueOf__C(
       c)));
     }
     else
     {
      if (c >= (jchar)65/*'A'*/ && c <= (jchar)90/*'Z'*/)
      {
       s1= java_lang_VMSystem__concat0X__LsLs(
        s1, (java_lang_String__valueOf__C(
        c)));
      }
      else
      {
       if (c >= (jchar)48/*'0'*/ && c <= (jchar)57/*'9'*/)
       {
        s1= java_lang_VMSystem__concat0X__LsLs(
         s1, (java_lang_String__valueOf__C(
         c)));
       }
       else
       {
        s1= java_lang_VMSystem__concat0X__LsLs(
         s1, (java_lang_String__valueOf__C(
         (jchar)95/*'_'*/)));
       }
      }
     }
    }
   }
  }
  return s1;
 }
}

JCGO_NOSEP_FRWINL java_lang_String CFASTCALL
package_Utility__ip2string__I( jint i )
{
 {
  jObject jcgo_rcvrL1;
  struct java_lang_String_s jcgo_stackobj1;
  struct java_lang_StringBuilder_s jcgo_stackobj2;
  struct java_lang_String_s jcgo_stackobj3;
  struct java_lang_String_s jcgo_stackobj4;
  struct java_lang_String_s jcgo_stackobj5;
  return (jcgo_rcvrL1= (jObject)java_lang_StringBuilder__append__Ls(
   (jcgo_rcvrL1= (jObject)java_lang_StringBuilder__append__Ls(
   (jcgo_rcvrL1= (jObject)java_lang_StringBuilder__append__Ls(
   java_lang_StringBuilder__append__Ls(
   java_lang_StringBuilder__this__(
   JCGO_STACKOBJ_NEW(jcgo_stackobj2, java_lang_StringBuilder_methods)),
   (java_lang_String__valueOf__IX(
   (JCGO_SHR_F(i, (jint)24) & (jint)255), JCGO_STACKOBJ_NEW(jcgo_stackobj1,
   java_lang_String_methods)))), JCGO_STRREF_OF(jcgo_string3_VMThrwbl)),
   java_lang_StringBuilder__append__Ls(
   (java_lang_StringBuilder)jcgo_rcvrL1, (java_lang_String__valueOf__IX(
   (JCGO_SHR_F(i, (jint)16) & (jint)255), JCGO_STACKOBJ_NEW(jcgo_stackobj3,
   java_lang_String_methods))))), JCGO_STRREF_OF(jcgo_string3_VMThrwbl)),
   java_lang_StringBuilder__append__Ls(
   (java_lang_StringBuilder)jcgo_rcvrL1, (java_lang_String__valueOf__IX(
   (JCGO_SHR_F(i, (jint)8) & (jint)255), JCGO_STACKOBJ_NEW(jcgo_stackobj4,
   java_lang_String_methods))))), JCGO_STRREF_OF(jcgo_string3_VMThrwbl)),
   java_lang_String__new__L5dy9e(
   java_lang_StringBuilder__append__Ls(
   (java_lang_StringBuilder)jcgo_rcvrL1, (java_lang_String__valueOf__IX(
   (i & (jint)255), JCGO_STACKOBJ_NEW(jcgo_stackobj5, java_lang_String_methods))))));
 }
}

JCGO_NOSEP_STATIC jlong CFASTCALL
package_Utility__username2hash__Ls( java_lang_String s )
{
 {
  java_lang_String s1;
  jlong hash;
  s1= JCGO_STRREF_OF(jcgo_string3_String6D);
  {
   jint i;
   i= 0;
   for (; i < (JCGO_CALL_FINALF(s) java_lang_String__length__(
    s)); i++)
   {
    jchar c;
    c= (java_lang_String__charAt__I(
     s, i));
    if (c >= (jchar)97/*'a'*/ && c <= (jchar)122/*'z'*/)
    {
     s1= java_lang_VMSystem__concat0X__LsLs(
      s1, (java_lang_String__valueOf__C(
      c)));
    }
    else
    {
     if (c >= (jchar)65/*'A'*/ && c <= (jchar)90/*'Z'*/)
     {
      s1= java_lang_VMSystem__concat0X__LsLs(
       s1, (java_lang_String__valueOf__C(
       (jchar)((c + (jint)97) - (jint)65))));
     }
     else
     {
      if (c >= (jchar)48/*'0'*/ && c <= (jchar)57/*'9'*/)
      {
       s1= java_lang_VMSystem__concat0X__LsLs(
        s1, (java_lang_String__valueOf__C(
        c)));
      }
      else
      {
       s1= java_lang_VMSystem__concat0X__LsLs(
        s1, (java_lang_String__valueOf__C(
        (jchar)32/*' '*/)));
      }
     }
    }
   }
  }
  s1= (JCGO_CALL_FINALF(s1) java_lang_String__trim__(
   s1));
  if ((java_lang_String__length__(
   s1)) > (jint)12)
  {
   s1= (java_lang_String__substring__II(
    s1, 0, (jint)12));
  }
  hash= JLONG_C(0);
  {
   jint j;
   j= 0;
   for (; j < (java_lang_String__length__(
    s1)); j++)
   {
    jchar c1;
    c1= (java_lang_String__charAt__I(
     s1, j));
    hash*= JLONG_C(37);
    if (c1 >= (jchar)97/*'a'*/ && c1 <= (jchar)122/*'z'*/)
    {
     hash+= (jlong)((c1 + (jint)1) - (jint)97);
    }
    else
    {
     if (c1 >= (jchar)48/*'0'*/ && c1 <= (jchar)57/*'9'*/)
     {
      hash+= (jlong)((c1 + (jint)27) - (jint)48);
     }
    }
   }
  }
  return hash;
 }
}

JCGO_NOSEP_STATIC java_lang_String CFASTCALL
package_Utility__hash2username__J( jlong hash )
{
 {
  java_lang_String s;
  if (hash < JLONG_C(0))
  {
   return JCGO_STRREF_OF(jcgo_string2_Utility);
  }
  s= JCGO_STRREF_OF(jcgo_string3_String6D);
  while (hash != JLONG_C(0))
  {
   jint i;
   i= (jint)(jcgo_lmod(hash, JLONG_C(37)));
   hash= jcgo_ldiv(hash, JLONG_C(37));
   if (i == 0)
   {
    s= java_lang_VMSystem__concat0X__LsLs(
     JCGO_STRREF_OF(jcgo_string327_Mdclnt), s);
   }
   else
   {
    if (i < (jint)27)
    {
     if (jcgo_lmod(hash, JLONG_C(37)) == JLONG_C(0))
     {
      s= java_lang_VMSystem__concat0X__LsLs(
       (java_lang_String__valueOf__C(
       (jchar)((i + (jint)65) - (jint)1))), s);
     }
     else
     {
      s= java_lang_VMSystem__concat0X__LsLs(
       (java_lang_String__valueOf__C(
       (jchar)((i + (jint)97) - (jint)1))), s);
     }
    }
    else
    {
     s= java_lang_VMSystem__concat0X__LsLs(
      (java_lang_String__valueOf__C(
      (jchar)((i + (jint)48) - (jint)27))), s);
    }
   }
  }
  return s;
 }
}

JCGO_NOSEP_STATIC jint CFASTCALL
package_Utility__getDataFileOffset__LsBA( java_lang_String filename,
 jbyteArr data )
{
 {
  jint numEntries;
  jint wantedHash;
  jint offset;
  numEntries= (package_Utility__getUnsignedShort__BAI(
   data, 0));
  wantedHash= 0;
  filename= (JCGO_CALL_FINALF(filename) java_lang_String__toUpperCase__(
   filename));
  {
   jint k;
   k= 0;
   for (; k < (java_lang_String__length__(
    filename)); k++)
   {
    wantedHash= (wantedHash * (jint)61 + (java_lang_String__charAt__I(
     filename, k))) - (jint)32;
   }
  }
  offset= numEntries * (jint)10 + (jint)2;
  {
   jint entry;
   entry= 0;
   for (; entry < numEntries; entry++)
   {
    jint fileHash;
    jint fileSize;
    jint jcgo_rcvrI1;
    fileHash= (jcgo_rcvrI1= (jcgo_rcvrI1= (jcgo_rcvrI1= ((jint)((unsigned char)(JCGO_ARRAY_NZBACCESS(data,
     entry * (jint)10 + (jint)2)))) * (jint)0x1000000L, jcgo_rcvrI1 +
     ((jint)((unsigned char)(JCGO_ARRAY_NZBACCESS(data, entry * (jint)10 +
     (jint)3)))) * (jint)65536L), jcgo_rcvrI1 + ((jint)((unsigned char)(JCGO_ARRAY_NZBACCESS(data,
     entry * (jint)10 + (jint)4)))) * (jint)256), jcgo_rcvrI1 + ((jint)((unsigned char)(JCGO_ARRAY_NZBACCESS(data,
     entry * (jint)10 + (jint)5)))));
    fileSize= (jcgo_rcvrI1= (jcgo_rcvrI1= ((jint)((unsigned char)(JCGO_ARRAY_NZBACCESS(data,
     entry * (jint)10 + (jint)9)))) * (jint)65536L, jcgo_rcvrI1 + ((jint)((unsigned char)(JCGO_ARRAY_NZBACCESS(data,
     entry * (jint)10 + (jint)10)))) * (jint)256), jcgo_rcvrI1 + ((jint)((unsigned char)(JCGO_ARRAY_NZBACCESS(data,
     entry * (jint)10 + (jint)11)))));
    if (fileHash == wantedHash)
    {
     return offset;
    }
    offset+= fileSize;
   }
  }
  return 0;
 }
}

JCGO_NOSEP_FRWINL jint CFASTCALL
package_Utility__getDataFileLength__LsBA( java_lang_String filename,
 jbyteArr data )
{
 {
  jint numEntries;
  jint wantedHash;
  jint offset;
  numEntries= (package_Utility__getUnsignedShort__BAI(
   data, 0));
  wantedHash= 0;
  filename= (JCGO_CALL_FINALF(filename) java_lang_String__toUpperCase__(
   filename));
  {
   jint k;
   k= 0;
   for (; k < (java_lang_String__length__(
    filename)); k++)
   {
    wantedHash= (wantedHash * (jint)61 + (java_lang_String__charAt__I(
     filename, k))) - (jint)32;
   }
  }
  offset= numEntries * (jint)10 + (jint)2;
  {
   jint i1;
   i1= 0;
   for (; i1 < numEntries; i1++)
   {
    jint fileHash;
    jint fileSize;
    jint fileSizeCompressed;
    jint jcgo_rcvrI1;
    fileHash= (jcgo_rcvrI1= (jcgo_rcvrI1= (jcgo_rcvrI1= ((jint)((unsigned char)(JCGO_ARRAY_NZBACCESS(data,
     i1 * (jint)10 + (jint)2)))) * (jint)0x1000000L, jcgo_rcvrI1 +
     ((jint)((unsigned char)(JCGO_ARRAY_NZBACCESS(data, i1 * (jint)10 +
     (jint)3)))) * (jint)65536L), jcgo_rcvrI1 + ((jint)((unsigned char)(JCGO_ARRAY_NZBACCESS(data,
     i1 * (jint)10 + (jint)4)))) * (jint)256), jcgo_rcvrI1 + ((jint)((unsigned char)(JCGO_ARRAY_NZBACCESS(data,
     i1 * (jint)10 + (jint)5)))));
    fileSize= (jcgo_rcvrI1= (jcgo_rcvrI1= ((jint)((unsigned char)(JCGO_ARRAY_NZBACCESS(data,
     i1 * (jint)10 + (jint)6)))) * (jint)65536L, jcgo_rcvrI1 + ((jint)((unsigned char)(JCGO_ARRAY_NZBACCESS(data,
     i1 * (jint)10 + (jint)7)))) * (jint)256), jcgo_rcvrI1 + ((jint)((unsigned char)(JCGO_ARRAY_NZBACCESS(data,
     i1 * (jint)10 + (jint)8)))));
    fileSizeCompressed= (jcgo_rcvrI1= (jcgo_rcvrI1= ((jint)((unsigned char)(JCGO_ARRAY_NZBACCESS(data,
     i1 * (jint)10 + (jint)9)))) * (jint)65536L, jcgo_rcvrI1 + ((jint)((unsigned char)(JCGO_ARRAY_NZBACCESS(data,
     i1 * (jint)10 + (jint)10)))) * (jint)256), jcgo_rcvrI1 + ((jint)((unsigned char)(JCGO_ARRAY_NZBACCESS(data,
     i1 * (jint)10 + (jint)11)))));
    if (fileHash == wantedHash)
    {
     return fileSize;
    }
    offset+= fileSizeCompressed;
   }
  }
  return 0;
 }
}

JCGO_NOSEP_STATIC jbyteArr CFASTCALL
package_Utility__loadData__LsIBA( java_lang_String s, jbyteArr abyte0,
 jint i )
{
 {
  jbyteArr b;
  b= (package_Utility__unpackData__LsIBABA(
   s, abyte0, (jbyteArr)jnull, i));
  return b;
 }
}

JCGO_NOSEP_STATIC package_Utility CFASTCALL
package_Utility__this__( package_Utility This )
{
 {
  ;
 }
 return This;
}

JCGO_NOSEP_DATA CONST struct package_Utility_methods_s package_Utility_methods=
{
 JCGO_CLASSREF_OF(package_Utility__class),
 JCGO_GCJDESCR_ZEROINIT
 OBJT_package_Utility,
 -(JCGO_OBJSIZE_T)sizeof(struct package_Utility_s),
 NULL,
 JCGO_CLINIT_INIT(0)
 package_Utility__this__,
 java_lang_Object__equals__Lo,
 java_lang_Object__hashCode__,
 java_lang_Object__toString__,
 java_lang_Object__finalize__
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct package_Utility_class_s package_Utility__class
 JCGO_THRD_ATTRNONGC=
{
 {
  &java_lang_Class_methods,
  JCGO_MON_INIT
  JCGO_OBJREF_OF(*(java_lang_Object)&package_Utility_methods),
  JCGO_STRREF_OF(jcgo_string1_Utility),
  JCGO_CLASSREF_OF(java_lang_Object__class),
  ((jObjectArr)JCGO_OBJREF_OF(jcgo_array3_Object)),
  0x101
 }
};

JCGO_NOSEP_DATA CONST jintArr package_Utility__bitmask= ((jintArr)JCGO_OBJREF_OF(jcgo_array3_Utility));

JCGO_NOSEP_DATA CONST jcgo_arrtype3_Utility jcgo_array3_Utility=
{
 (jvtable)&jintArr_methods,
 JCGO_MON_INIT
 33,
 {
  0, (jint)1, (jint)3, (jint)7, (jint)15, (jint)31, (jint)63, (jint)127,
   (jint)255, (jint)511, (jint)1023, (jint)2047, (jint)4095, (jint)8191,
   (jint)16383, (jint)32767L, (jint)65535L, (jint)131071L, (jint)262143L,
   (jint)524287L, (jint)1048575L, (jint)2097151L, (jint)4194303L, (jint)8388607L,
   (jint)16777215L, (jint)0x1ffffffL, (jint)0x3ffffffL, (jint)0x7ffffffL,
   (jint)0xfffffffL, (jint)0x1fffffffL, (jint)0x3fffffffL, (jint)0x7fffffffL,
   (-(jint)1)
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype24_Object jcgo_array4_Utility=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 7,
 {
  (jbyte)(jchar)85/*'U'*/, (jbyte)(jchar)116/*'t'*/, (jbyte)(jchar)105/*'i'*/,
   (jbyte)(jchar)108/*'l'*/, (jbyte)(jchar)105/*'i'*/, (jbyte)(jchar)116/*'t'*/,
   (jbyte)(jchar)121/*'y'*/
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype28_Object jcgo_array5_Utility=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 11,
 {
  (jbyte)(jchar)105/*'i'*/, (jbyte)(jchar)110/*'n'*/, (jbyte)(jchar)118/*'v'*/,
   (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)108/*'l'*/, (jbyte)(jchar)105/*'i'*/,
   (jbyte)(jchar)100/*'d'*/, (jbyte)(jchar)78/*'N'*/, (jbyte)(jchar)97/*'a'*/,
   (jbyte)(jchar)109/*'m'*/, (jbyte)(jchar)101/*'e'*/
 }
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string1_Utility
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array4_Utility),
 0, 7, (jint)0x5c5e294cL
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string2_Utility
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array5_Utility),
 0, 11, (jint)0xc72d0d22L
};

#ifdef CHKALL_Utility
#include "jcgochke.h"
#endif

#endif
