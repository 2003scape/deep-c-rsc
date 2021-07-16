/* DO NOT EDIT THIS FILE - it is machine generated (JCGO_116) */

#ifdef JCGO_116

JCGO_NOSEP_INLINE void CFASTCALL
package_GameShell__keyPressed__CI( package_GameShell This, jint code,
 jchar chr );

JCGO_NOSEP_INLINE void CFASTCALL
package_GameShell__keyReleased__I( package_GameShell This, jint code
 );

JCGO_NOSEP_INLINE void CFASTCALL
package_GameShell__mouseMoved__II( package_GameShell This, jint x,
 jint y );

JCGO_NOSEP_INLINE void CFASTCALL
package_GameShell__mouseReleased__II( package_GameShell This, jint
 x, jint y );

JCGO_NOSEP_INLINE void CFASTCALL
package_GameShell__mousePressed__III( package_GameShell This, jint
 x, jint y, jint button );

JCGO_NOSEP_INLINE void CFASTCALL
package_GameShell__mouseDragged__III( package_GameShell This, jint
 x, jint y, jint button );

JCGO_NOSEP_INLINE void CFASTCALL
package_GameShell__dummy__( package_GameShell This );

JCGO_NOSEP_INLINE void CFASTCALL
package_GameShell__handleKeyPress__I( package_GameShell This, jint
 i );

JCGO_NOSEP_INLINE void CFASTCALL
package_GameShell__handleMouseDown__III( package_GameShell This, jint
 i, jint j, jint k );

JCGO_NOSEP_INLINE void CFASTCALL
package_GameShell__loadJagex__( package_GameShell This );

JCGO_NOSEP_INLINE void CFASTCALL
package_GameShell__drawLoadingScreen__ILs( package_GameShell This,
 java_lang_String text, jint percent );

JCGO_NOSEP_INLINE void CFASTCALL
package_GameShell__startGame__( package_GameShell This );

JCGO_NOSEP_INLINE void CFASTCALL
package_GameShell__onClosing__( package_GameShell This );

JCGO_NOSEP_INLINE void CFASTCALL
package_GameShell__handleInputs__( package_GameShell This );

JCGO_NOSEP_INLINE void CFASTCALL
package_GameShell__draw__( package_GameShell This );

JCGO_NOSEP_INLINE void CFASTCALL
package_GameShell__showLoadingProgress__ILs( package_GameShell This,
 java_lang_String s, jint i );

JCGO_NOSEP_STATIC package_GameShell CFASTCALL
package_GameShell__this__( package_GameShell This );

JCGO_NOSEP_INLINE void CFASTCALL
package_GameShell__startApplication__IILsZ( package_GameShell This,
 java_lang_String title, jint width, jint height, jboolean resizeable
 );

JCGO_NOSEP_INLINE void CFASTCALL
package_GameShell__setTargetFps__I( package_GameShell This, jint i
 );

JCGO_NOSEP_INLINE void CFASTCALL
package_GameShell__resetTimings__( package_GameShell This );

JCGO_NOSEP_STATIC void CFASTCALL
package_GameShell__closeProgram__( package_GameShell This );

JCGO_NOSEP_STATIC void CFASTCALL
package_GameShell__run__( package_GameShell This );

JCGO_NOSEP_STATIC jbyteArr CFASTCALL
package_GameShell__readDataFile__LsLsI( package_GameShell This, java_lang_String
 file, java_lang_String description, jint percent );

JCGO_NOSEP_INLINE java_net_Socket CFASTCALL
package_GameShell__createSocket__LsI( package_GameShell This, java_lang_String
 s, jint i );

JCGO_NOSEP_INLINE void CFASTCALL
package_GameShell__startThread__L1k0ty( package_GameShell This, java_lang_Runnable
 runnable );

struct package_GameShell_methods_s
{
 java_lang_Class jcgo_class;
 JCGO_GCJDESCR_DEFN
 JCGO_TYPEID_T jcgo_typeid;
 JCGO_OBJSIZE_T jcgo_objsize;
 CONST struct jcgo_reflect_s *jcgo_reflect;
 JCGO_CLINIT_DEFN
 package_GameShell (CFASTCALL *jcgo_thisRtn)( package_GameShell This
  );
 jboolean (CFASTCALL *equals__Lo)( java_lang_Object This, java_lang_Object
  obj );
 jint (CFASTCALL *hashCode__)( java_lang_Object This );
 java_lang_String (CFASTCALL *toString__)( java_lang_Object This );
 void (CFASTCALL *finalize__)( java_lang_Object This );
 void (CFASTCALL *run__)( package_GameShell This );
 void (CFASTCALL *startGame__)( package_GameShell This );
 void (CFASTCALL *handleInputs__)( package_GameShell This );
 void (CFASTCALL *onClosing__)( package_GameShell This );
 void (CFASTCALL *draw__)( package_GameShell This );
 void (CFASTCALL *handleKeyPress__I)( package_GameShell This, jint
  i );
 void (CFASTCALL *handleMouseDown__III)( package_GameShell This, jint
  i, jint j, jint k );
 java_net_Socket (CFASTCALL *createSocket__LsI)( package_GameShell
  This, java_lang_String s, jint i );
 void (CFASTCALL *startThread__L1k0ty)( package_GameShell This, java_lang_Runnable
  runnable );
};

struct package_GameShell_class_s
{
 struct java_lang_Class_s jcgo_class;
};

JCGO_SEP_EXTERN CONST struct package_GameShell_methods_s package_GameShell_methods;
JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct package_GameShell_class_s package_GameShell__class;

JCGO_SEP_EXTERN CONST java_lang_String package_GameShell__charMap;

struct package_GameShell_s
{
 CONST struct package_GameShell_methods_s *JCGO_IMMFLD_CONST jcgo_methods;
 JCGO_MON_DEFN
 java_lang_String inputTextCurrent;
 java_lang_String inputTextFinal;
 java_lang_String inputPmCurrent;
 java_lang_String inputPmFinal;
 java_lang_Thread appletThread;
 jlongArr timings;
 jint mouseActionTimeout;
 jint loadingStep;
 jint threadSleep;
 jint mouseX;
 jint mouseY;
 jint mouseButtonDown;
 jint lastMouseButtonDown;
 jint appletWidth;
 jint appletHeight;
 jint targetFps;
 jint maxDrawTime;
 jint stopTimeout;
 jint interlaceTimer;
 jint fps;
 jboolean keyLeft;
 jboolean keyRight;
 jboolean interlace;
};

JCGO_SEP_EXTERN CONST jcgo_arrtype2_GameMdl jcgo_array27_GameShll;

JCGO_SEP_EXTERN CONST jcgo_arrtype28_GameShll jcgo_array28_GameShll;

JCGO_SEP_EXTERN CONST jcgo_arrtype28_GameShll jcgo_array29_GameShll;

JCGO_SEP_EXTERN CONST jcgo_arrtype30_GameShll jcgo_array30_GameShll;

JCGO_SEP_EXTERN CONST jcgo_arrtype31_GameShll jcgo_array31_GameShll;

JCGO_SEP_EXTERN CONST jcgo_arrtype32_GameShll jcgo_array32_GameShll;

JCGO_SEP_EXTERN CONST jcgo_arrtype24_Object jcgo_array33_GameShll;

JCGO_SEP_EXTERN CONST jcgo_arrtype24_Object jcgo_array34_GameShll;

JCGO_SEP_EXTERN CONST jcgo_arrtype24_Object jcgo_array35_GameShll;

JCGO_SEP_EXTERN CONST jcgo_arrtype24_Object jcgo_array36_GameShll;

JCGO_SEP_EXTERN CONST jcgo_arrtype24_Object jcgo_array37_GameShll;

JCGO_SEP_EXTERN CONST jcgo_arrtype24_Object jcgo_array38_GameShll;

JCGO_SEP_EXTERN CONST jcgo_arrtype24_Object jcgo_array39_GameShll;

JCGO_SEP_EXTERN CONST jcgo_arrtype24_Object jcgo_array40_GameShll;

JCGO_SEP_EXTERN CONST jcgo_arrtype31_GameShll jcgo_array41_GameShll;

JCGO_SEP_EXTERN CONST jcgo_arrtype42_GameShll jcgo_array42_GameShll;

JCGO_SEP_EXTERN CONST jcgo_arrtype43_GameShll jcgo_array43_GameShll;

JCGO_SEP_EXTERN CONST jcgo_arrtype44_GameShll jcgo_array44_GameShll;

JCGO_SEP_EXTERN CONST jcgo_arrtype32_GameShll jcgo_array45_GameShll;

JCGO_SEP_EXTERN CONST jcgo_arrtype30_Object jcgo_array46_GameShll;

JCGO_SEP_EXTERN CONST jcgo_arrtype30_Object jcgo_array47_GameShll;

JCGO_SEP_EXTERN CONST jcgo_arrtype48_GameShll jcgo_array48_GameShll;

JCGO_SEP_EXTERN CONST jcgo_arrtype49_GameShll jcgo_array49_GameShll;

JCGO_SEP_EXTERN CONST jcgo_arrtype32_GameShll jcgo_array50_GameShll;

JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string1_GameShll;

JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string2_GameShll;

JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string3_GameShll;

JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string4_GameShll;

JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string5_GameShll;

JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string6_GameShll;

JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string7_GameShll;

JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string8_GameShll;

JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string9_GameShll;

JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string10_GameShll;

JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string11_GameShll;

JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string12_GameShll;

JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string13_GameShll;

JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string14_GameShll;

JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string15_GameShll;

JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string16_GameShll;

JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string17_GameShll;

JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string18_GameShll;

JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string19_GameShll;

JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string20_GameShll;

JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string21_GameShll;

JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string22_GameShll;

JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string23_GameShll;

JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string24_GameShll;

JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string25_GameShll;

JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string26_GameShll;

#endif
