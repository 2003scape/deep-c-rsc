/* DO NOT EDIT THIS FILE - it is machine generated (JCGO_116) */

#ifdef JCGO_SEPARATED
#define JCGO_116
#include "jcgortl.h"
#include "Main.h"
#endif

#ifdef JCGO_116

#ifdef CHKALL_gnu_java_nio_charset_ISO_18859_12
#include "jcgobchk.h"
#endif

JCGO_NOSEP_STATIC gnu_java_nio_charset_ISO_8859_2 CFASTCALL
gnu_java_nio_charset_ISO_8859_2__this__( gnu_java_nio_charset_ISO_8859_2
 This )
{
 {
  (gnu_java_nio_charset_ByteCharset__this__LsLsA((gnu_java_nio_charset_ByteCharset)This,
   JCGO_STRREF_OF(jcgo_string19_EncdngHl), (jObjectArr)jcgo_arrayClone((jObject)JCGO_OBJREF_OF(jcgo_array17_Iso88592))));
  JCGO_FIELD_NZACCESS(This, lookupTable)= gnu_java_nio_charset_ISO_8859_2__lookup;
 }
 return This;
}

JCGO_NOSEP_INLINE gnu_java_nio_charset_ISO_8859_2 CFASTCALL
gnu_java_nio_charset_ISO_8859_2__new__( void )
{
 return gnu_java_nio_charset_ISO_8859_2__this__(
  (gnu_java_nio_charset_ISO_8859_2)jcgo_newObject((jvtable)&gnu_java_nio_charset_ISO_8859_2_methods));
}

JCGO_NOSEP_DATA CONST struct gnu_java_nio_charset_ISO_8859_2_methods_s
 gnu_java_nio_charset_ISO_8859_2_methods=
{
 JCGO_CLASSREF_OF(gnu_java_nio_charset_ISO_8859_2__class),
 JCGO_GCJDESCR_ZEROINIT
 OBJT_gnu_java_nio_charset_ISO_8859_2,
 (JCGO_OBJSIZE_T)sizeof(struct gnu_java_nio_charset_ISO_8859_2_s),
 NULL,
 JCGO_CLINIT_INIT(0)
 gnu_java_nio_charset_ISO_8859_2__this__,
 java_nio_charset_Charset__equals__Lo,
 java_nio_charset_Charset__hashCode__,
 java_nio_charset_Charset__toString__,
 java_lang_Object__finalize__,
 gnu_java_nio_charset_ByteCharset__newDecoder__,
 gnu_java_nio_charset_ByteCharset__newEncoder__
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct gnu_java_nio_charset_ISO_8859_2_class_s
 gnu_java_nio_charset_ISO_8859_2__class JCGO_THRD_ATTRNONGC=
{
 {
  &java_lang_Class_methods,
  JCGO_MON_INIT
  JCGO_OBJREF_OF(*(java_lang_Object)&gnu_java_nio_charset_ISO_8859_2_methods),
  JCGO_STRREF_OF(jcgo_string1_Iso88592),
  JCGO_CLASSREF_OF(gnu_java_nio_charset_ByteCharset__class),
  ((jObjectArr)JCGO_OBJREF_OF(jcgo_array3_Object)),
  0x101
 }
};

JCGO_NOSEP_DATA jcgo_arrtype39_CharData jcgo_array2_Iso88592 ATTRIBNONGC=
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
   (jchar)(jint)260, (jchar)(jint)728, (jchar)(jint)321, (jchar)(jint)164,
   (jchar)(jint)317, (jchar)(jint)346, (jchar)(jint)167, (jchar)(jint)168,
   (jchar)(jint)352, (jchar)(jint)350, (jchar)(jint)356, (jchar)(jint)377,
   (jchar)(jint)173, (jchar)(jint)381, (jchar)(jint)379, (jchar)(jint)176,
   (jchar)(jint)261, (jchar)(jint)731, (jchar)(jint)322, (jchar)(jint)180,
   (jchar)(jint)318, (jchar)(jint)347, (jchar)(jint)711, (jchar)(jint)184,
   (jchar)(jint)353, (jchar)(jint)351, (jchar)(jint)357, (jchar)(jint)378,
   (jchar)(jint)733, (jchar)(jint)382, (jchar)(jint)380, (jchar)(jint)340,
   (jchar)(jint)193, (jchar)(jint)194, (jchar)(jint)258, (jchar)(jint)196,
   (jchar)(jint)313, (jchar)(jint)262, (jchar)(jint)199, (jchar)(jint)268,
   (jchar)(jint)201, (jchar)(jint)280, (jchar)(jint)203, (jchar)(jint)282,
   (jchar)(jint)205, (jchar)(jint)206, (jchar)(jint)270, (jchar)(jint)272,
   (jchar)(jint)323, (jchar)(jint)327, (jchar)(jint)211, (jchar)(jint)212,
   (jchar)(jint)336, (jchar)(jint)214, (jchar)(jint)215, (jchar)(jint)344,
   (jchar)(jint)366, (jchar)(jint)218, (jchar)(jint)368, (jchar)(jint)220,
   (jchar)(jint)221, (jchar)(jint)354, (jchar)(jint)223, (jchar)(jint)341,
   (jchar)(jint)225, (jchar)(jint)226, (jchar)(jint)259, (jchar)(jint)228,
   (jchar)(jint)314, (jchar)(jint)263, (jchar)(jint)231, (jchar)(jint)269,
   (jchar)(jint)233, (jchar)(jint)281, (jchar)(jint)235, (jchar)(jint)283,
   (jchar)(jint)237, (jchar)(jint)238, (jchar)(jint)271, (jchar)(jint)273,
   (jchar)(jint)324, (jchar)(jint)328, (jchar)(jint)243, (jchar)(jint)244,
   (jchar)(jint)337, (jchar)(jint)246, (jchar)(jint)247, (jchar)(jint)345,
   (jchar)(jint)367, (jchar)(jint)250, (jchar)(jint)369, (jchar)(jint)252,
   (jchar)(jint)253, (jchar)(jint)355, (jchar)(jint)729
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype5_Ascii jcgo_array17_Iso88592=
{
 (jvtable)&jObjectArr_methods,
 JCGO_MON_INIT
 15,
 JCGO_CLASSREF_OF(java_lang_String__class),
 {
  (jObject)JCGO_STRREF_OF(jcgo_string20_EncdngHl), (jObject)JCGO_STRREF_OF(jcgo_string3_Iso88592),
   (jObject)JCGO_STRREF_OF(jcgo_string4_Iso88592), (jObject)JCGO_STRREF_OF(jcgo_string5_Iso88592),
   (jObject)JCGO_STRREF_OF(jcgo_string6_Iso88592), (jObject)JCGO_STRREF_OF(jcgo_string7_Iso88592),
   (jObject)JCGO_STRREF_OF(jcgo_string8_Iso88592), (jObject)JCGO_STRREF_OF(jcgo_string9_Iso88592),
   (jObject)JCGO_STRREF_OF(jcgo_string10_Iso88592), (jObject)JCGO_STRREF_OF(jcgo_string11_Iso88592),
   (jObject)JCGO_STRREF_OF(jcgo_string12_Iso88592), (jObject)JCGO_STRREF_OF(jcgo_string13_Iso88592),
   (jObject)JCGO_STRREF_OF(jcgo_string14_Iso88592), (jObject)JCGO_STRREF_OF(jcgo_string15_Iso88592),
   (jObject)JCGO_STRREF_OF(jcgo_string16_Iso88592)
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype73_GmCnnctn jcgo_array18_Iso88592=
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
   (jbyte)(jchar)50/*'2'*/
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype492_Mdclnt jcgo_array19_Iso88592=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 17,
 {
  (jbyte)(jchar)105/*'i'*/, (jbyte)(jchar)98/*'b'*/, (jbyte)(jchar)109/*'m'*/,
   (jbyte)(jchar)45/*'-'*/, (jbyte)(jchar)57/*'9'*/, (jbyte)(jchar)49/*'1'*/,
   (jbyte)(jchar)50/*'2'*/, (jbyte)(jchar)95/*'_'*/, (jbyte)(jchar)80/*'P'*/,
   (jbyte)(jchar)49/*'1'*/, (jbyte)(jchar)48/*'0'*/, (jbyte)(jchar)48/*'0'*/,
   (jbyte)(jchar)45/*'-'*/, (jbyte)(jchar)49/*'1'*/, (jbyte)(jchar)57/*'9'*/,
   (jbyte)(jchar)57/*'9'*/, (jbyte)(jchar)53/*'5'*/
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype32_GameShll jcgo_array20_Iso88592=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 10,
 {
  (jbyte)(jchar)105/*'i'*/, (jbyte)(jchar)115/*'s'*/, (jbyte)(jchar)111/*'o'*/,
   (jbyte)(jchar)95/*'_'*/, (jbyte)(jchar)56/*'8'*/, (jbyte)(jchar)56/*'8'*/,
   (jbyte)(jchar)53/*'5'*/, (jbyte)(jchar)57/*'9'*/, (jbyte)(jchar)95/*'_'*/,
   (jbyte)(jchar)50/*'2'*/
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype28_GameShll jcgo_array21_Iso88592=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 9,
 {
  (jbyte)(jchar)105/*'i'*/, (jbyte)(jchar)115/*'s'*/, (jbyte)(jchar)111/*'o'*/,
   (jbyte)(jchar)56/*'8'*/, (jbyte)(jchar)56/*'8'*/, (jbyte)(jchar)53/*'5'*/,
   (jbyte)(jchar)57/*'9'*/, (jbyte)(jchar)95/*'_'*/, (jbyte)(jchar)50/*'2'*/
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype32_GameShll jcgo_array22_Iso88592=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 10,
 {
  (jbyte)(jchar)105/*'i'*/, (jbyte)(jchar)115/*'s'*/, (jbyte)(jchar)111/*'o'*/,
   (jbyte)(jchar)45/*'-'*/, (jbyte)(jchar)56/*'8'*/, (jbyte)(jchar)56/*'8'*/,
   (jbyte)(jchar)53/*'5'*/, (jbyte)(jchar)57/*'9'*/, (jbyte)(jchar)45/*'-'*/,
   (jbyte)(jchar)50/*'2'*/
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype43_GameShll jcgo_array23_Iso88592=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 15,
 {
  (jbyte)(jchar)73/*'I'*/, (jbyte)(jchar)83/*'S'*/, (jbyte)(jchar)79/*'O'*/,
   (jbyte)(jchar)95/*'_'*/, (jbyte)(jchar)56/*'8'*/, (jbyte)(jchar)56/*'8'*/,
   (jbyte)(jchar)53/*'5'*/, (jbyte)(jchar)57/*'9'*/, (jbyte)(jchar)45/*'-'*/,
   (jbyte)(jchar)50/*'2'*/, (jbyte)(jchar)58/*':'*/, (jbyte)(jchar)49/*'1'*/,
   (jbyte)(jchar)57/*'9'*/, (jbyte)(jchar)56/*'8'*/, (jbyte)(jchar)55/*'7'*/
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype2_BZLib jcgo_array24_Iso88592=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 6,
 {
  (jbyte)(jchar)108/*'l'*/, (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)116/*'t'*/,
   (jbyte)(jchar)105/*'i'*/, (jbyte)(jchar)110/*'n'*/, (jbyte)(jchar)50/*'2'*/
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype28_Object jcgo_array25_Iso88592=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 11,
 {
  (jbyte)(jchar)99/*'c'*/, (jbyte)(jchar)115/*'s'*/, (jbyte)(jchar)73/*'I'*/,
   (jbyte)(jchar)83/*'S'*/, (jbyte)(jchar)79/*'O'*/, (jbyte)(jchar)76/*'L'*/,
   (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)116/*'t'*/, (jbyte)(jchar)105/*'i'*/,
   (jbyte)(jchar)110/*'n'*/, (jbyte)(jchar)50/*'2'*/
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype32_GameShll jcgo_array26_Iso88592=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 10,
 {
  (jbyte)(jchar)105/*'i'*/, (jbyte)(jchar)115/*'s'*/, (jbyte)(jchar)111/*'o'*/,
   (jbyte)(jchar)45/*'-'*/, (jbyte)(jchar)105/*'i'*/, (jbyte)(jchar)114/*'r'*/,
   (jbyte)(jchar)45/*'-'*/, (jbyte)(jchar)49/*'1'*/, (jbyte)(jchar)48/*'0'*/,
   (jbyte)(jchar)49/*'1'*/
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype30_Object jcgo_array27_Iso88592=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 5,
 {
  (jbyte)(jchar)99/*'c'*/, (jbyte)(jchar)112/*'p'*/, (jbyte)(jchar)57/*'9'*/,
   (jbyte)(jchar)49/*'1'*/, (jbyte)(jchar)50/*'2'*/
 }
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string1_Iso88592
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array18_Iso88592),
 0, 31, (jint)0x46b3dd39L
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string3_Iso88592
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array18_Iso88592),
 25, 6, (jint)0x62bd8057L
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string4_Iso88592
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array19_Iso88592),
 0, 17, (jint)0x2d25f072L
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string5_Iso88592
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array19_Iso88592),
 0, 7, (jint)0x5fbe8d41L
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string6_Iso88592
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array20_Iso88592),
 0, 10, (jint)0xdbad3551L
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string7_Iso88592
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array21_Iso88592),
 0, 9, (jint)0xccc9e11cL
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string8_Iso88592
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array22_Iso88592),
 0, 10, (jint)0x86b59c91L
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string9_Iso88592
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array23_Iso88592),
 0, 15, (jint)0xca4e0cdeL
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string10_Iso88592
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array24_Iso88592),
 0, 6, (jint)0xbdd89daeL
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string11_Iso88592
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array25_Iso88592),
 0, 11, (jint)0x213df803L
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string12_Iso88592
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array26_Iso88592),
 0, 10, (jint)0xdd80a596L
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string13_Iso88592
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array596_Mdclnt),
 8, 2, (jint)0xd46L
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string14_Iso88592
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array27_Iso88592),
 0, 5, (jint)0x5a6dc8dL
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string15_Iso88592
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array65_GmCnnctn),
 87, 3, (jint)0xdc1aL
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string16_Iso88592
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array698_VMSstmPr),
 0, 13, (jint)0x1423623eL
};

#ifdef CHKALL_gnu_java_nio_charset_ISO_18859_12
#include "jcgochke.h"
#endif

#endif