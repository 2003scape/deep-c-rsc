/* DO NOT EDIT THIS FILE - it is machine generated (JCGO_116) */

#ifdef JCGO_116

#define gnu_java_nio_VMChannel__EMPTY_BUF ((jbyteArr)JCGO_OBJREF_OF(jcgo_array2_VMChnnl))

JCGO_NOSEP_INLINE void CFASTCALL
gnu_java_nio_VMChannel__void( gnu_java_nio_VMChannel This );

#ifndef NOJAVA_gnu_java_nio_VMChannel_getStdinFD0
JNIIMPORT jint JNICALL JCGO_JNI_FUNC(Java_gnu_java_nio_VMChannel_getStdinFD0)(
 JNIEnv *pJniEnv, jclass This );
#endif
JCGO_NOSEP_FRWINL jint CFASTCALL
gnu_java_nio_VMChannel__getStdinFD0__( void );

#ifndef NOJAVA_gnu_java_nio_VMChannel_getStdoutFD0
JNIIMPORT jint JNICALL JCGO_JNI_FUNC(Java_gnu_java_nio_VMChannel_getStdoutFD0)(
 JNIEnv *pJniEnv, jclass This );
#endif
JCGO_NOSEP_FRWINL jint CFASTCALL
gnu_java_nio_VMChannel__getStdoutFD0__( void );

#ifndef NOJAVA_gnu_java_nio_VMChannel_getStderrFD0
JNIIMPORT jint JNICALL JCGO_JNI_FUNC(Java_gnu_java_nio_VMChannel_getStderrFD0)(
 JNIEnv *pJniEnv, jclass This );
#endif
JCGO_NOSEP_FRWINL jint CFASTCALL
gnu_java_nio_VMChannel__getStderrFD0__( void );

#ifndef NOJAVA_gnu_java_nio_VMChannel_lockingOpHasPos0
JNIIMPORT jint JNICALL JCGO_JNI_FUNC(Java_gnu_java_nio_VMChannel_lockingOpHasPos0)(
 JNIEnv *pJniEnv, jclass This );
#endif
JCGO_NOSEP_FRWINL jint CFASTCALL
gnu_java_nio_VMChannel__lockingOpHasPos0__( void );

JCGO_NOSEP_STATIC gnu_java_nio_VMChannel CFASTCALL
gnu_java_nio_VMChannel__this__( gnu_java_nio_VMChannel This );
JCGO_NOSEP_FRWINL gnu_java_nio_VMChannel CFASTCALL
gnu_java_nio_VMChannel__new__( void );

JCGO_NOSEP_INLINE jboolean CFASTCALL
gnu_java_nio_VMChannel__isStdInOutErr__I( jint fileFd );

#ifndef NOJAVA_gnu_java_nio_VMChannel_fileClose0
JNIIMPORT jint JNICALL JCGO_JNI_FUNC(Java_gnu_java_nio_VMChannel_fileClose0)(
 JNIEnv *pJniEnv, jclass This, jint fd );
#endif
JCGO_NOSEP_INLINE jint CFASTCALL
gnu_java_nio_VMChannel__fileClose0__I( jint fd );

#ifndef NOJAVA_gnu_java_nio_VMChannel_getIOErrorMsg0
JNIIMPORT jstring JNICALL JCGO_JNI_FUNC(Java_gnu_java_nio_VMChannel_getIOErrorMsg0)(
 JNIEnv *pJniEnv, jclass This, jint res );
#endif
JCGO_NOSEP_INLINE java_lang_String CFASTCALL
gnu_java_nio_VMChannel__getIOErrorMsg0__I( jint res );

#ifndef NOJAVA_gnu_java_nio_VMChannel_fileOpen0
JNIIMPORT jint JNICALL JCGO_JNI_FUNC(Java_gnu_java_nio_VMChannel_fileOpen0)(
 JNIEnv *pJniEnv, jclass This, jintArray fdArr, jstring path, jint
 mode );
#endif
JCGO_NOSEP_INLINE jint CFASTCALL
gnu_java_nio_VMChannel__fileOpen0__IALsI( jintArr fdArr, java_lang_String
 path, jint mode );

#ifndef NOJAVA_gnu_java_nio_VMChannel_isIOErrorNoResources0
JNIIMPORT jint JNICALL JCGO_JNI_FUNC(Java_gnu_java_nio_VMChannel_isIOErrorNoResources0)(
 JNIEnv *pJniEnv, jclass This, jint res );
#endif
JCGO_NOSEP_INLINE jint CFASTCALL
gnu_java_nio_VMChannel__isIOErrorNoResources0__I( jint res );

JCGO_NOSEP_INLINE jboolean CFASTCALL
gnu_java_nio_VMChannel__isIORetryNeededOnce__I( jint res );

JCGO_NOSEP_INLINE jint CFASTCALL
gnu_java_nio_VMChannel__fileOpen__LsIIA( java_lang_String path, jintArr
 fdArr, jint mode );

JCGO_NOSEP_INLINE void CFASTCALL
gnu_java_nio_VMChannel__checkThreadInterrupted__( void );

#ifndef NOJAVA_gnu_java_nio_VMChannel_fileWrite0
JNIIMPORT jint JNICALL JCGO_JNI_FUNC(Java_gnu_java_nio_VMChannel_fileWrite0)(
 JNIEnv *pJniEnv, jclass This, jbyteArray buffer, jint off, jint len,
 jint fd );
#endif
JCGO_NOSEP_INLINE jint CFASTCALL
gnu_java_nio_VMChannel__fileWrite0__BAIII( jbyteArr buffer, jint off,
 jint len, jint fd );

JCGO_NOSEP_INLINE void CFASTCALL
gnu_java_nio_VMChannel__threadYield__( void );

#ifndef NOJAVA_gnu_java_nio_VMChannel_fileAvailable0
JNIIMPORT jint JNICALL JCGO_JNI_FUNC(Java_gnu_java_nio_VMChannel_fileAvailable0)(
 JNIEnv *pJniEnv, jclass This, jint fd );
#endif
JCGO_NOSEP_INLINE jint CFASTCALL
gnu_java_nio_VMChannel__fileAvailable0__I( jint fd );

JCGO_NOSEP_INLINE void CFASTCALL
gnu_java_nio_VMChannel__fileSeek__IJ( jlong newPosition, jint fd );

JCGO_NOSEP_FRWINL gnu_java_nio_VMChannel_State CFASTCALL
gnu_java_nio_VMChannel__getState__( gnu_java_nio_VMChannel This );

JCGO_NOSEP_FRWINL gnu_java_nio_VMChannel CFASTCALL
gnu_java_nio_VMChannel__getStdin__( void );

JCGO_NOSEP_FRWINL gnu_java_nio_VMChannel CFASTCALL
gnu_java_nio_VMChannel__getStdout__( void );

JCGO_NOSEP_FRWINL gnu_java_nio_VMChannel CFASTCALL
gnu_java_nio_VMChannel__getStderr__( void );

JCGO_NOSEP_FRWINL void CFASTCALL
gnu_java_nio_VMChannel__setBlocking__Z( gnu_java_nio_VMChannel This,
 jboolean blocking );

JCGO_NOSEP_FRWINL jint CFASTCALL
gnu_java_nio_VMChannel__available__( gnu_java_nio_VMChannel This );

JCGO_NOSEP_STATIC jint CFASTCALL
gnu_java_nio_VMChannel__read__L9oaia( gnu_java_nio_VMChannel This,
 java_nio_ByteBuffer dst );

JCGO_NOSEP_STATIC jint CFASTCALL
gnu_java_nio_VMChannel__read__( gnu_java_nio_VMChannel This );

JCGO_NOSEP_STATIC jint CFASTCALL
gnu_java_nio_VMChannel__write__L9oaia( gnu_java_nio_VMChannel This,
 java_nio_ByteBuffer src );

JCGO_NOSEP_STATIC void CFASTCALL
gnu_java_nio_VMChannel__initSocket__Z( gnu_java_nio_VMChannel This,
 jboolean stream );

JCGO_NOSEP_FRWINL jboolean CFASTCALL
gnu_java_nio_VMChannel__connect__L5zjctI( gnu_java_nio_VMChannel This,
 java_net_InetSocketAddress address, jint timeout );

JCGO_NOSEP_STATIC java_net_InetSocketAddress CFASTCALL
gnu_java_nio_VMChannel__getLocalAddress__( gnu_java_nio_VMChannel
 This );

JCGO_NOSEP_FRWINL java_net_InetSocketAddress CFASTCALL
gnu_java_nio_VMChannel__getPeerAddress__( gnu_java_nio_VMChannel This
 );

JCGO_NOSEP_FRWINL void CFASTCALL
gnu_java_nio_VMChannel__openFile__LsI( gnu_java_nio_VMChannel This,
 java_lang_String path, jint mode );

JCGO_NOSEP_FRWINL void CFASTCALL
gnu_java_nio_VMChannel__close__( gnu_java_nio_VMChannel This );

JCGO_NOSEP_STATIC void CFASTCALL
gnu_java_nio_VMChannel__close__I( jint fileFd );

JCGO_NOSEP_INLINE jint CFASTCALL
gnu_java_nio_VMChannel__fileAvailable__I( jint fd );

JCGO_NOSEP_INLINE jint CFASTCALL
gnu_java_nio_VMChannel__fileRead__IBAIIZ( jbyteArr buffer, jint fd,
 jint off, jint len, jboolean isNonBlocking );

JCGO_NOSEP_INLINE void CFASTCALL
gnu_java_nio_VMChannel__fileWrite__IBAIAIZ( jbyteArr buffer, jintArr
 offArr, jint fd, jint len, jboolean isNonBlocking );

JCGO_NOSEP_STATIC void CFASTCALL
gnu_java_nio_VMChannel__checkIOResCode__I( jint res );

#ifndef NOJAVA_gnu_java_nio_VMChannel_isIOErrorInterrupted0
JNIIMPORT jint JNICALL JCGO_JNI_FUNC(Java_gnu_java_nio_VMChannel_isIOErrorInterrupted0)(
 JNIEnv *pJniEnv, jclass This, jint res );
#endif
JCGO_NOSEP_STATIC jint CFASTCALL
gnu_java_nio_VMChannel__isIOErrorInterrupted0__I( jint res );

#ifndef NOJAVA_gnu_java_nio_VMChannel_fileRead0
JNIIMPORT jint JNICALL JCGO_JNI_FUNC(Java_gnu_java_nio_VMChannel_fileRead0)(
 JNIEnv *pJniEnv, jclass This, jbyteArray buffer, jint off, jint len,
 jint fd );
#endif
JCGO_NOSEP_STATIC jint CFASTCALL
gnu_java_nio_VMChannel__fileRead0__BAIII( jbyteArr buffer, jint off,
 jint len, jint fd );

#ifndef NOJAVA_gnu_java_nio_VMChannel_fileSelect0
JNIIMPORT jint JNICALL JCGO_JNI_FUNC(Java_gnu_java_nio_VMChannel_fileSelect0)(
 JNIEnv *pJniEnv, jclass This, jint fd, jint iswrite );
#endif
JCGO_NOSEP_STATIC jint CFASTCALL
gnu_java_nio_VMChannel__fileSelect0__II( jint fd, jint iswrite );

#ifndef NOJAVA_gnu_java_nio_VMChannel_fileSeek0
JNIIMPORT jlong JNICALL JCGO_JNI_FUNC(Java_gnu_java_nio_VMChannel_fileSeek0)(
 JNIEnv *pJniEnv, jclass This, jlong ofs, jint fd, jint direction );
#endif
JCGO_NOSEP_STATIC jlong CFASTCALL
gnu_java_nio_VMChannel__fileSeek0__JII( jlong ofs, jint fd, jint direction
 );

#define JCGO_NATCLASS_gnu_java_nio_VMChannel

struct gnu_java_nio_VMChannel_methods_s
{
 java_lang_Class jcgo_class;
 JCGO_GCJDESCR_DEFN
 JCGO_TYPEID_T jcgo_typeid;
 JCGO_OBJSIZE_T jcgo_objsize;
 CONST struct jcgo_reflect_s *jcgo_reflect;
 JCGO_CLINIT_DEFN
 gnu_java_nio_VMChannel (CFASTCALL *jcgo_thisRtn)( gnu_java_nio_VMChannel
  This );
 jboolean (CFASTCALL *equals__Lo)( java_lang_Object This, java_lang_Object
  obj );
 jint (CFASTCALL *hashCode__)( java_lang_Object This );
 java_lang_String (CFASTCALL *toString__)( java_lang_Object This );
 void (CFASTCALL *finalize__)( java_lang_Object This );
};

struct gnu_java_nio_VMChannel_class_s
{
 struct java_lang_Class_s jcgo_class;
};

JCGO_SEP_EXTERN CONST struct gnu_java_nio_VMChannel_methods_s gnu_java_nio_VMChannel_methods;
JCGO_SEP_EXTERN struct gnu_java_nio_VMChannel_class_s gnu_java_nio_VMChannel__class;

JCGO_NOSEP_STATIC void CFASTCALL
gnu_java_nio_VMChannel__class__0( void );

JCGO_SEP_EXTERN jint gnu_java_nio_VMChannel__stdin_fd;
JCGO_SEP_EXTERN jint gnu_java_nio_VMChannel__stdout_fd;
JCGO_SEP_EXTERN jint gnu_java_nio_VMChannel__stderr_fd;
JCGO_SEP_EXTERN jboolean gnu_java_nio_VMChannel__preventBlocking;

struct gnu_java_nio_VMChannel_s
{
 CONST struct gnu_java_nio_VMChannel_methods_s *JCGO_IMMFLD_CONST jcgo_methods;
 JCGO_MON_DEFN
 gnu_java_nio_VMChannel_State state;
};

JCGO_SEP_EXTERN JCGO_NOTHR_CONST jcgo_arrtype2_VMChnnl jcgo_array2_VMChnnl;

JCGO_SEP_EXTERN CONST jcgo_arrtype48_GameShll jcgo_array9_VMChnnl;

JCGO_SEP_EXTERN CONST jcgo_arrtype98_GmCnnctn jcgo_array10_VMChnnl;

JCGO_SEP_EXTERN CONST jcgo_arrtype26_Object jcgo_array11_VMChnnl;

JCGO_SEP_EXTERN CONST jcgo_arrtype91_GmCnnctn jcgo_array12_VMChnnl;

JCGO_SEP_EXTERN CONST jcgo_arrtype30_GameShll jcgo_array13_VMChnnl;

JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string1_VMChnnl;

JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string3_VMChnnl;

JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string5_VMChnnl;

JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string6_VMChnnl;

JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string7_VMChnnl;

JCGO_SEP_EXTERN JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string8_VMChnnl;

#endif