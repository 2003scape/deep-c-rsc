/* DO NOT EDIT THIS FILE - it is machine generated (JCGO_116) */

#ifdef JCGO_SEPARATED
#define JCGO_116
#include "jcgortl.h"
#include "Main.h"
#endif

#ifdef JCGO_116

#ifdef CHKALL_gnu_java_nio_charset_ISO_18859_16
#include "jcgobchk.h"
#endif

JCGO_NOSEP_STATIC gnu_java_nio_charset_ISO_8859_6 CFASTCALL
gnu_java_nio_charset_ISO_8859_6__this__( gnu_java_nio_charset_ISO_8859_6
 This )
{
 {
  (gnu_java_nio_charset_ByteCharset__this__LsLsA((gnu_java_nio_charset_ByteCharset)This,
   JCGO_STRREF_OF(jcgo_string45_EncdngHl), (jObjectArr)jcgo_arrayClone((jObject)JCGO_OBJREF_OF(jcgo_array20_Iso88596))));
  JCGO_FIELD_NZACCESS(This, lookupTable)= gnu_java_nio_charset_ISO_8859_6__lookup;
 }
 return This;
}

JCGO_NOSEP_INLINE gnu_java_nio_charset_ISO_8859_6 CFASTCALL
gnu_java_nio_charset_ISO_8859_6__new__( void )
{
 return gnu_java_nio_charset_ISO_8859_6__this__(
  (gnu_java_nio_charset_ISO_8859_6)jcgo_newObject((jvtable)&gnu_java_nio_charset_ISO_8859_6_methods));
}

JCGO_NOSEP_DATA CONST struct gnu_java_nio_charset_ISO_8859_6_methods_s
 gnu_java_nio_charset_ISO_8859_6_methods=
{
 JCGO_CLASSREF_OF(gnu_java_nio_charset_ISO_8859_6__class),
 JCGO_GCJDESCR_ZEROINIT
 OBJT_gnu_java_nio_charset_ISO_8859_6,
 (JCGO_OBJSIZE_T)sizeof(struct gnu_java_nio_charset_ISO_8859_6_s),
 NULL,
 JCGO_CLINIT_INIT(0)
 gnu_java_nio_charset_ISO_8859_6__this__,
 java_nio_charset_Charset__equals__Lo,
 java_nio_charset_Charset__hashCode__,
 java_nio_charset_Charset__toString__,
 java_lang_Object__finalize__,
 gnu_java_nio_charset_ByteCharset__newDecoder__,
 gnu_java_nio_charset_ByteCharset__newEncoder__
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct gnu_java_nio_charset_ISO_8859_6_class_s
 gnu_java_nio_charset_ISO_8859_6__class JCGO_THRD_ATTRNONGC=
{
 {
  &java_lang_Class_methods,
  JCGO_MON_INIT
  JCGO_OBJREF_OF(*(java_lang_Object)&gnu_java_nio_charset_ISO_8859_6_methods),
  JCGO_STRREF_OF(jcgo_string1_Iso88596),
  JCGO_CLASSREF_OF(gnu_java_nio_charset_ByteCharset__class),
  ((jObjectArr)JCGO_OBJREF_OF(jcgo_array3_Object)),
  0x101
 }
};

JCGO_NOSEP_DATA jcgo_arrtype39_CharData jcgo_array2_Iso88596 ATTRIBNONGC=
{
 (jvtable)&jcharArr_methods,
 JCGO_MON_INIT
 256,
 {
  (jchar)0, (jchar)(jint)1, (jchar)(jint)2, (jchar)(jint)3, (jchar)(jint)4,
   (jchar)(jint)5, (jchar)(jint)6, (jchar)(jint)7, (jchar)(jint)8,
   (jchar)(jint)9, (jchar)(jint)10, (jchar)(jint)11, (jchar)(jint)12,
   (jchar)(jint)13, (jchar)(jint)14, (jchar)(jint)15, (jchar)(jint)16,
   (jchar)(jint)17, (jchar)(jint)18, (jchar)(jint)19, (jchar)(jint)20,
   (jchar)(jint)21, (jchar)(jint)22, (jchar)(jint)23, (jchar)(jint)24,
   (jchar)(jint)25, (jchar)(jint)26, (jchar)(jint)27, (jchar)(jint)28,
   (jchar)(jint)29, (jchar)(jint)30, (jchar)(jint)31, (jchar)(jint)32,
   (jchar)(jint)33, (jchar)(jint)34, (jchar)(jint)35, (jchar)(jint)36,
   (jchar)(jint)37, (jchar)(jint)38, (jchar)(jint)39, (jchar)(jint)40,
   (jchar)(jint)41, (jchar)(jint)42, (jchar)(jint)43, (jchar)(jint)44,
   (jchar)(jint)45, (jchar)(jint)46, (jchar)(jint)47, (jchar)(jint)48,
   (jchar)(jint)49, (jchar)(jint)50, (jchar)(jint)51, (jchar)(jint)52,
   (jchar)(jint)53, (jchar)(jint)54, (jchar)(jint)55, (jchar)(jint)56,
   (jchar)(jint)57, (jchar)(jint)58, (jchar)(jint)59, (jchar)(jint)60,
   (jchar)(jint)61, (jchar)(jint)62, (jchar)(jint)63, (jchar)(jint)64,
   (jchar)(jint)65, (jchar)(jint)66, (jchar)(jint)67, (jchar)(jint)68,
   (jchar)(jint)69, (jchar)(jint)70, (jchar)(jint)71, (jchar)(jint)72,
   (jchar)(jint)73, (jchar)(jint)74, (jchar)(jint)75, (jchar)(jint)76,
   (jchar)(jint)77, (jchar)(jint)78, (jchar)(jint)79, (jchar)(jint)80,
   (jchar)(jint)81, (jchar)(jint)82, (jchar)(jint)83, (jchar)(jint)84,
   (jchar)(jint)85, (jchar)(jint)86, (jchar)(jint)87, (jchar)(jint)88,
   (jchar)(jint)89, (jchar)(jint)90, (jchar)(jint)91, (jchar)(jint)92,
   (jchar)(jint)93, (jchar)(jint)94, (jchar)(jint)95, (jchar)(jint)96,
   (jchar)(jint)97, (jchar)(jint)98, (jchar)(jint)99, (jchar)(jint)100,
   (jchar)(jint)101, (jchar)(jint)102, (jchar)(jint)103, (jchar)(jint)104,
   (jchar)(jint)105, (jchar)(jint)106, (jchar)(jint)107, (jchar)(jint)108,
   (jchar)(jint)109, (jchar)(jint)110, (jchar)(jint)111, (jchar)(jint)112,
   (jchar)(jint)113, (jchar)(jint)114, (jchar)(jint)115, (jchar)(jint)116,
   (jchar)(jint)117, (jchar)(jint)118, (jchar)(jint)119, (jchar)(jint)120,
   (jchar)(jint)121, (jchar)(jint)122, (jchar)(jint)123, (jchar)(jint)124,
   (jchar)(jint)125, (jchar)(jint)126, (jchar)(jint)127, (jchar)(jint)128,
   (jchar)(jint)129, (jchar)(jint)130, (jchar)(jint)131, (jchar)(jint)132,
   (jchar)(jint)133, (jchar)(jint)134, (jchar)(jint)135, (jchar)(jint)136,
   (jchar)(jint)137, (jchar)(jint)138, (jchar)(jint)139, (jchar)(jint)140,
   (jchar)(jint)141, (jchar)(jint)142, (jchar)(jint)143, (jchar)(jint)144,
   (jchar)(jint)145, (jchar)(jint)146, (jchar)(jint)147, (jchar)(jint)148,
   (jchar)(jint)149, (jchar)(jint)150, (jchar)(jint)151, (jchar)(jint)152,
   (jchar)(jint)153, (jchar)(jint)154, (jchar)(jint)155, (jchar)(jint)156,
   (jchar)(jint)157, (jchar)(jint)158, (jchar)(jint)159, (jchar)(jint)160,
   gnu_java_nio_charset_ByteCharset__NONE, gnu_java_nio_charset_ByteCharset__NONE,
   gnu_java_nio_charset_ByteCharset__NONE, (jchar)(jint)164, gnu_java_nio_charset_ByteCharset__NONE,
   gnu_java_nio_charset_ByteCharset__NONE, gnu_java_nio_charset_ByteCharset__NONE,
   gnu_java_nio_charset_ByteCharset__NONE, gnu_java_nio_charset_ByteCharset__NONE,
   gnu_java_nio_charset_ByteCharset__NONE, gnu_java_nio_charset_ByteCharset__NONE,
   (jchar)(jint)1548, (jchar)(jint)173, gnu_java_nio_charset_ByteCharset__NONE,
   gnu_java_nio_charset_ByteCharset__NONE, gnu_java_nio_charset_ByteCharset__NONE,
   gnu_java_nio_charset_ByteCharset__NONE, gnu_java_nio_charset_ByteCharset__NONE,
   gnu_java_nio_charset_ByteCharset__NONE, gnu_java_nio_charset_ByteCharset__NONE,
   gnu_java_nio_charset_ByteCharset__NONE, gnu_java_nio_charset_ByteCharset__NONE,
   gnu_java_nio_charset_ByteCharset__NONE, gnu_java_nio_charset_ByteCharset__NONE,
   gnu_java_nio_charset_ByteCharset__NONE, gnu_java_nio_charset_ByteCharset__NONE,
   (jchar)(jint)1563, gnu_java_nio_charset_ByteCharset__NONE, gnu_java_nio_charset_ByteCharset__NONE,
   gnu_java_nio_charset_ByteCharset__NONE, (jchar)(jint)1567, gnu_java_nio_charset_ByteCharset__NONE,
   (jchar)(jint)1569, (jchar)(jint)1570, (jchar)(jint)1571, (jchar)(jint)1572,
   (jchar)(jint)1573, (jchar)(jint)1574, (jchar)(jint)1575, (jchar)(jint)1576,
   (jchar)(jint)1577, (jchar)(jint)1578, (jchar)(jint)1579, (jchar)(jint)1580,
   (jchar)(jint)1581, (jchar)(jint)1582, (jchar)(jint)1583, (jchar)(jint)1584,
   (jchar)(jint)1585, (jchar)(jint)1586, (jchar)(jint)1587, (jchar)(jint)1588,
   (jchar)(jint)1589, (jchar)(jint)1590, (jchar)(jint)1591, (jchar)(jint)1592,
   (jchar)(jint)1593, (jchar)(jint)1594, gnu_java_nio_charset_ByteCharset__NONE,
   gnu_java_nio_charset_ByteCharset__NONE, gnu_java_nio_charset_ByteCharset__NONE,
   gnu_java_nio_charset_ByteCharset__NONE, gnu_java_nio_charset_ByteCharset__NONE,
   (jchar)(jint)1600, (jchar)(jint)1601, (jchar)(jint)1602, (jchar)(jint)1603,
   (jchar)(jint)1604, (jchar)(jint)1605, (jchar)(jint)1606, (jchar)(jint)1607,
   (jchar)(jint)1608, (jchar)(jint)1609, (jchar)(jint)1610, (jchar)(jint)1611,
   (jchar)(jint)1612, (jchar)(jint)1613, (jchar)(jint)1614, (jchar)(jint)1615,
   (jchar)(jint)1616, (jchar)(jint)1617, (jchar)(jint)1618, gnu_java_nio_charset_ByteCharset__NONE,
   gnu_java_nio_charset_ByteCharset__NONE, gnu_java_nio_charset_ByteCharset__NONE,
   gnu_java_nio_charset_ByteCharset__NONE, gnu_java_nio_charset_ByteCharset__NONE,
   gnu_java_nio_charset_ByteCharset__NONE, gnu_java_nio_charset_ByteCharset__NONE,
   gnu_java_nio_charset_ByteCharset__NONE, gnu_java_nio_charset_ByteCharset__NONE,
   gnu_java_nio_charset_ByteCharset__NONE, gnu_java_nio_charset_ByteCharset__NONE,
   gnu_java_nio_charset_ByteCharset__NONE, gnu_java_nio_charset_ByteCharset__NONE
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype86_Mdclnt jcgo_array20_Iso88596=
{
 (jvtable)&jObjectArr_methods,
 JCGO_MON_INIT
 18,
 JCGO_CLASSREF_OF(java_lang_String__class),
 {
  (jObject)JCGO_STRREF_OF(jcgo_string3_Iso88596), (jObject)JCGO_STRREF_OF(jcgo_string4_Iso88596),
   (jObject)JCGO_STRREF_OF(jcgo_string5_Iso88596), (jObject)JCGO_STRREF_OF(jcgo_string6_Iso88596),
   (jObject)JCGO_STRREF_OF(jcgo_string7_Iso88596), (jObject)JCGO_STRREF_OF(jcgo_string8_Iso88596),
   (jObject)JCGO_STRREF_OF(jcgo_string9_Iso88596), (jObject)JCGO_STRREF_OF(jcgo_string10_Iso88596),
   (jObject)JCGO_STRREF_OF(jcgo_string11_Iso88596), (jObject)JCGO_STRREF_OF(jcgo_string12_Iso88596),
   (jObject)JCGO_STRREF_OF(jcgo_string13_Iso88596), (jObject)JCGO_STRREF_OF(jcgo_string14_Iso88596),
   (jObject)JCGO_STRREF_OF(jcgo_string3_Iso88596), (jObject)JCGO_STRREF_OF(jcgo_string15_Iso88596),
   (jObject)JCGO_STRREF_OF(jcgo_string16_Iso88596), (jObject)JCGO_STRREF_OF(jcgo_string17_Iso88596),
   (jObject)JCGO_STRREF_OF(jcgo_string18_Iso88596), (jObject)JCGO_STRREF_OF(jcgo_string19_Iso88596)
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype73_GmCnnctn jcgo_array21_Iso88596=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 31,
 {
  (jbyte)(jchar)103/*'g'*/, (jbyte)(jchar)110/*'n'*/, (jbyte)(jchar)117/*'u'*/,
   (jbyte)(jchar)46/*'.'*/, (jbyte)(jchar)106/*'j'*/, (jbyte)(jchar)97/*'a'*/,
   (jbyte)(jchar)118/*'v'*/, (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)46/*'.'*/,
   (jbyte)(jchar)110/*'n'*/, (jbyte)(jchar)105/*'i'*/, (jbyte)(jchar)111/*'o'*/,
   (jbyte)(jchar)46/*'.'*/, (jbyte)(jchar)99/*'c'*/, (jbyte)(jchar)104/*'h'*/,
   (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)114/*'r'*/, (jbyte)(jchar)115/*'s'*/,
   (jbyte)(jchar)101/*'e'*/, (jbyte)(jchar)116/*'t'*/, (jbyte)(jchar)46/*'.'*/,
   (jbyte)(jchar)73/*'I'*/, (jbyte)(jchar)83/*'S'*/, (jbyte)(jchar)79/*'O'*/,
   (jbyte)(jchar)95/*'_'*/, (jbyte)(jchar)56/*'8'*/, (jbyte)(jchar)56/*'8'*/,
   (jbyte)(jchar)53/*'5'*/, (jbyte)(jchar)57/*'9'*/, (jbyte)(jchar)95/*'_'*/,
   (jbyte)(jchar)54/*'6'*/
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype32_GameShll jcgo_array22_Iso88596=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 10,
 {
  (jbyte)(jchar)105/*'i'*/, (jbyte)(jchar)115/*'s'*/, (jbyte)(jchar)111/*'o'*/,
   (jbyte)(jchar)95/*'_'*/, (jbyte)(jchar)56/*'8'*/, (jbyte)(jchar)56/*'8'*/,
   (jbyte)(jchar)53/*'5'*/, (jbyte)(jchar)57/*'9'*/, (jbyte)(jchar)95/*'_'*/,
   (jbyte)(jchar)54/*'6'*/
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype28_GameShll jcgo_array23_Iso88596=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 9,
 {
  (jbyte)(jchar)105/*'i'*/, (jbyte)(jchar)115/*'s'*/, (jbyte)(jchar)111/*'o'*/,
   (jbyte)(jchar)56/*'8'*/, (jbyte)(jchar)56/*'8'*/, (jbyte)(jchar)53/*'5'*/,
   (jbyte)(jchar)57/*'9'*/, (jbyte)(jchar)95/*'_'*/, (jbyte)(jchar)54/*'6'*/
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype32_GameShll jcgo_array24_Iso88596=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 10,
 {
  (jbyte)(jchar)105/*'i'*/, (jbyte)(jchar)115/*'s'*/, (jbyte)(jchar)111/*'o'*/,
   (jbyte)(jchar)45/*'-'*/, (jbyte)(jchar)56/*'8'*/, (jbyte)(jchar)56/*'8'*/,
   (jbyte)(jchar)53/*'5'*/, (jbyte)(jchar)57/*'9'*/, (jbyte)(jchar)45/*'-'*/,
   (jbyte)(jchar)54/*'6'*/
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype2_BZLib jcgo_array25_Iso88596=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 6,
 {
  (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)114/*'r'*/, (jbyte)(jchar)97/*'a'*/,
   (jbyte)(jchar)98/*'b'*/, (jbyte)(jchar)105/*'i'*/, (jbyte)(jchar)99/*'c'*/
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype32_GameShll jcgo_array26_Iso88596=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 10,
 {
  (jbyte)(jchar)105/*'i'*/, (jbyte)(jchar)115/*'s'*/, (jbyte)(jchar)111/*'o'*/,
   (jbyte)(jchar)45/*'-'*/, (jbyte)(jchar)105/*'i'*/, (jbyte)(jchar)114/*'r'*/,
   (jbyte)(jchar)45/*'-'*/, (jbyte)(jchar)49/*'1'*/, (jbyte)(jchar)50/*'2'*/,
   (jbyte)(jchar)55/*'7'*/
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype43_GameShll jcgo_array27_Iso88596=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 15,
 {
  (jbyte)(jchar)73/*'I'*/, (jbyte)(jchar)83/*'S'*/, (jbyte)(jchar)79/*'O'*/,
   (jbyte)(jchar)95/*'_'*/, (jbyte)(jchar)56/*'8'*/, (jbyte)(jchar)56/*'8'*/,
   (jbyte)(jchar)53/*'5'*/, (jbyte)(jchar)57/*'9'*/, (jbyte)(jchar)45/*'-'*/,
   (jbyte)(jchar)54/*'6'*/, (jbyte)(jchar)58/*':'*/, (jbyte)(jchar)49/*'1'*/,
   (jbyte)(jchar)57/*'9'*/, (jbyte)(jchar)56/*'8'*/, (jbyte)(jchar)55/*'7'*/
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype31_GameShll jcgo_array28_Iso88596=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 8,
 {
  (jbyte)(jchar)69/*'E'*/, (jbyte)(jchar)67/*'C'*/, (jbyte)(jchar)77/*'M'*/,
   (jbyte)(jchar)65/*'A'*/, (jbyte)(jchar)45/*'-'*/, (jbyte)(jchar)49/*'1'*/,
   (jbyte)(jchar)49/*'1'*/, (jbyte)(jchar)52/*'4'*/
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype31_GameShll jcgo_array29_Iso88596=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 8,
 {
  (jbyte)(jchar)65/*'A'*/, (jbyte)(jchar)83/*'S'*/, (jbyte)(jchar)77/*'M'*/,
   (jbyte)(jchar)79/*'O'*/, (jbyte)(jchar)45/*'-'*/, (jbyte)(jchar)55/*'7'*/,
   (jbyte)(jchar)48/*'0'*/, (jbyte)(jchar)56/*'8'*/
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype2_BZLib jcgo_array30_Iso88596=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 6,
 {
  (jbyte)(jchar)99/*'c'*/, (jbyte)(jchar)112/*'p'*/, (jbyte)(jchar)49/*'1'*/,
   (jbyte)(jchar)48/*'0'*/, (jbyte)(jchar)56/*'8'*/, (jbyte)(jchar)57/*'9'*/
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype30_GameShll jcgo_array31_Iso88596=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 13,
 {
  (jbyte)(jchar)119/*'w'*/, (jbyte)(jchar)105/*'i'*/, (jbyte)(jchar)110/*'n'*/,
   (jbyte)(jchar)100/*'d'*/, (jbyte)(jchar)111/*'o'*/, (jbyte)(jchar)119/*'w'*/,
   (jbyte)(jchar)115/*'s'*/, (jbyte)(jchar)45/*'-'*/, (jbyte)(jchar)50/*'2'*/,
   (jbyte)(jchar)56/*'8'*/, (jbyte)(jchar)53/*'5'*/, (jbyte)(jchar)57/*'9'*/,
   (jbyte)(jchar)54/*'6'*/
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype26_Object jcgo_array32_Iso88596=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 12,
 {
  (jbyte)(jchar)73/*'I'*/, (jbyte)(jchar)83/*'S'*/, (jbyte)(jchar)79/*'O'*/,
   (jbyte)(jchar)45/*'-'*/, (jbyte)(jchar)56/*'8'*/, (jbyte)(jchar)56/*'8'*/,
   (jbyte)(jchar)53/*'5'*/, (jbyte)(jchar)57/*'9'*/, (jbyte)(jchar)45/*'-'*/,
   (jbyte)(jchar)54/*'6'*/, (jbyte)(jchar)45/*'-'*/, (jbyte)(jchar)73/*'I'*/
 }
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string1_Iso88596
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array21_Iso88596),
 0, 31, (jint)0x46b3dd3dL
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string3_Iso88596
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array21_Iso88596),
 25, 6, (jint)0x62bd805bL
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string4_Iso88596
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array685_Mdclnt),
 0, 18, (jint)0x3fb8ea4aL
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string5_Iso88596
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array685_Mdclnt),
 0, 8, (jint)0x980f7519L
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string6_Iso88596
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array22_Iso88596),
 0, 10, (jint)0xdbad3555L
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string7_Iso88596
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array23_Iso88596),
 0, 9, (jint)0xccc9e120L
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string8_Iso88596
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array24_Iso88596),
 0, 10, (jint)0x86b59c95L
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string9_Iso88596
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array25_Iso88596),
 0, 6, (jint)0xabfa20acL
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string10_Iso88596
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array403_VMSstmPr),
 0, 16, (jint)0x73e84f9bL
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string11_Iso88596
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array26_Iso88596),
 0, 10, (jint)0xdd80a5daL
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string12_Iso88596
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array27_Iso88596),
 0, 15, (jint)0xd1216f5aL
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string13_Iso88596
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array28_Iso88596),
 0, 8, (jint)0x5f00ec79L
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string14_Iso88596
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array29_Iso88596),
 0, 8, (jint)0xea54c86L
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string15_Iso88596
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array30_Iso88596),
 0, 6, (jint)0xaf310f4dL
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string16_Iso88596
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array685_Mdclnt),
 4, 4, (jint)0x170160L
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string17_Iso88596
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array31_Iso88596),
 0, 13, (jint)0x14236242L
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string18_Iso88596
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array32_Iso88596),
 0, 12, (jint)0x93c7a931L
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string19_Iso88596
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array87_EncdngHl),
 0, 12, (jint)0x93c7a92dL
};

#ifdef CHKALL_gnu_java_nio_charset_ISO_18859_16
#include "jcgochke.h"
#endif

#endif