/* DO NOT EDIT THIS FILE - it is machine generated (JCGO_116) */

#ifdef JCGO_SEPARATED
#define JCGO_116
#include "jcgortl.h"
#include "Main.h"
#endif

#ifdef JCGO_116

#ifdef CHKALL_java_net_URL
#include "jcgobchk.h"
#endif

JCGO_NOSEP_INLINE void CFASTCALL
java_net_URL__void( java_net_URL This )
{
 JCGO_FIELD_NZACCESS(This, port)= (-(jint)1);
}

JCGO_NOSEP_INLINE java_net_URL CFASTCALL
java_net_URL__this__L6799iLsL1u6yeZ( java_net_URL This, java_net_URL
 context, java_lang_String spec, java_net_URLStreamHandler ph, jboolean
 phFromUser )
{
 {
  jint colon;
  jint slash;
  jint hashAt;
  jboolean protocolSpecified;
  jObject jcgo_rcvrL1;
  java_net_URL__void(This);
  slash= (JCGO_CALL_FINALF(spec) java_lang_String__indexOf__I(
   spec, (jchar)47/*'/'*/));
  if ((colon= (java_lang_String__indexOf__LsI(
   spec, JCGO_STRREF_OF(jcgo_string3_Url), (jint)1))) > 0 && (colon <
   slash || slash < 0) && !(java_lang_String__regionMatches__ILsII(
   spec, JCGO_STRREF_OF(jcgo_string4_Url), colon, 0, (jint)4)))
  {
   context= (java_net_URL)jnull;
   if (!phFromUser)
   {
    ph= (java_net_URLStreamHandler)jnull;
   }
  }
  protocolSpecified= jfalse;
  if ((colon= (java_lang_String__indexOf__I(
   spec, (jchar)58/*':'*/))) > 0 && (colon < slash || slash < 0))
  {
   protocolSpecified= (jboolean)jtrue;
   JCGO_FIELD_NZACCESS(This, protocol)= (java_lang_String__toLowerCase__(
    (java_lang_String__substring__II(
    spec, 0, colon))));
   if (context != jnull)
   {
    jObject jcgo_rcvrL1;
    if ((jcgo_rcvrL1= (jObject)JCGO_FIELD_NZACCESS(context, protocol),
     JCGO_CALL_FINALF((java_lang_String)jcgo_rcvrL1) java_lang_String__equals__Lo(
     (java_lang_String)jcgo_rcvrL1, (java_lang_Object)JCGO_FIELD_NZACCESS(This,
     protocol))))
    {
     JCGO_FIELD_NZACCESS(This, host)= JCGO_FIELD_NZACCESS(context,
      host);
     JCGO_FIELD_NZACCESS(This, port)= JCGO_FIELD_NZACCESS(context,
      port);
     JCGO_FIELD_NZACCESS(This, userInfo)= JCGO_FIELD_NZACCESS(context,
      userInfo);
     JCGO_FIELD_NZACCESS(This, authority)= JCGO_FIELD_NZACCESS(context,
      authority);
    }
    else
    {
     java_net_URLStreamHandler specPh;
     jObject jcgo_rcvrL1;
     specPh= (java_net_URL__getURLStreamHandler__Ls(
      (jcgo_rcvrL1= (jObject)JCGO_FIELD_NZACCESS(This, protocol), JCGO_CALL_FINALF((java_lang_String)jcgo_rcvrL1)
      java_lang_String__trim__(
      (java_lang_String)jcgo_rcvrL1))));
     if (specPh == jnull)
     {
      protocolSpecified= (jboolean)jfalse;
     }
    }
   }
  }
  if (!protocolSpecified)
  {
   if (context != jnull)
   {
    colon= (-(jint)1);
    JCGO_FIELD_NZACCESS(This, protocol)= JCGO_FIELD_NZACCESS(context,
     protocol);
    JCGO_FIELD_NZACCESS(This, host)= JCGO_FIELD_NZACCESS(context, host);
    JCGO_FIELD_NZACCESS(This, port)= JCGO_FIELD_NZACCESS(context, port);
    JCGO_FIELD_NZACCESS(This, userInfo)= JCGO_FIELD_NZACCESS(context,
     userInfo);
    if ((java_lang_String__indexOf__LsI(
     spec, JCGO_STRREF_OF(jcgo_string5_Url), (jint)1)) < 0)
    {
     jObject jcgo_rcvrL1;
     JCGO_FIELD_NZACCESS(This, file)= JCGO_FIELD_NZACCESS(context,
      file);
     if (JCGO_FIELD_NZACCESS(This, file) == jnull || (jcgo_rcvrL1=
      (jObject)JCGO_FIELD_NZACCESS(This, file), JCGO_CALL_FINALF((java_lang_String)jcgo_rcvrL1)
      java_lang_String__length__(
      (java_lang_String)jcgo_rcvrL1)) == 0)
     {
      JCGO_FIELD_NZACCESS(This, file)= JCGO_STRREF_OF(jcgo_string357_Mdclnt);
     }
    }
    JCGO_FIELD_NZACCESS(This, authority)= JCGO_FIELD_NZACCESS(context,
     authority);
   }
   else
   {
    JCGO_THROW_EXC((java_net_MalformedURLException__new__Ls(
     java_lang_VMSystem__concat0X__LsLs(
     JCGO_STRREF_OF(jcgo_string6_Url), spec))));
   }
  }
  JCGO_FIELD_NZACCESS(This, protocol)= (jcgo_rcvrL1= (jObject)JCGO_FIELD_NZACCESS(This,
   protocol), JCGO_CALL_FINALF((java_lang_String)jcgo_rcvrL1) java_lang_String__trim__(
   (java_lang_String)jcgo_rcvrL1));
  if (ph != jnull)
  {
   java_lang_SecurityManager s;
   s= (java_lang_System__getSecurityManager__());
   if (s != jnull && phFromUser)
   {
    struct java_net_NetPermission_s jcgo_stackobj1;
    (java_lang_SecurityManager__checkPermission__L37xkq(
     s, (java_security_Permission)(java_net_NetPermission__this__Ls(
     JCGO_STACKOBJ_NEW(jcgo_stackobj1, java_net_NetPermission_methods),
     JCGO_STRREF_OF(jcgo_string7_Url)))));
   }
   JCGO_FIELD_NZACCESS(This, ph)= ph;
  }
  else
  {
   JCGO_FIELD_NZACCESS(This, ph)= (java_net_URL__getURLStreamHandler__Ls(
    JCGO_FIELD_NZACCESS(This, protocol)));
  }
  if (JCGO_FIELD_NZACCESS(This, ph) == jnull)
  {
   JCGO_THROW_EXC((java_net_MalformedURLException__new__Ls(
    java_lang_VMSystem__concat0X__LsLs(
    JCGO_STRREF_OF(jcgo_string8_Url), JCGO_FIELD_NZACCESS(This, protocol)))));
  }
  hashAt= (java_lang_String__indexOf__II(
   spec, (jchar)35/*'#'*/, colon + (jint)1));
  {
   JCGO_TRY_BLOCK
   {
    jObject jcgo_rcvrL1;
    (jcgo_rcvrL1= (jObject)(JCGO_FIELD_NZACCESS(This, ph)), JCGO_CALL_EFINALF((gnu_java_net_protocol_file_Handler)jcgo_rcvrL1)
     java_net_URLStreamHandler__parseURL__L6799iLsII(
     (java_net_URLStreamHandler)jcgo_rcvrL1, This, spec, colon + (jint)1,
     hashAt < 0? (java_lang_String__length__(
     spec)) : hashAt));
   }
   JCGO_TRY_LEAVE
   JCGO_TRY_CATCHES(1)
   JCGO_TRY_CATCH(OBJT_java_lang_RuntimeException, MAXT_java_lang_RuntimeException)
   {
    java_lang_RuntimeException e;
    java_net_MalformedURLException mue;
    e= (java_lang_RuntimeException)JCGO_TRY_THROWABLE(0);
    mue= (java_net_MalformedURLException__new__Ls(
     (java_lang_Throwable__getMessage__(
     (java_lang_Throwable)e))));
    (java_lang_Throwable__initCause__Lt(
     (java_lang_Throwable)mue, (java_lang_Throwable)e));
    JCGO_THROW_EXC(mue);
   }
   JCGO_TRY_RETHROW(1)
  }
  if (hashAt >= 0)
  {
   JCGO_FIELD_NZACCESS(This, ref)= (java_lang_String__substring__I(
    spec, hashAt + (jint)1));
  }
  JCGO_FIELD_NZACCESS(This, hashCode)= (java_net_URL__hashCode__(
   This));
 }
 return This;
}

JCGO_NOSEP_INLINE java_net_URLConnection CFASTCALL
java_net_URL__openConnection__( java_net_URL This )
{
 {
  jObject jcgo_rcvrL1;
  return (jcgo_rcvrL1= (jObject)JCGO_FIELD_NZACCESS(This, ph), JCGO_CALL_FINALF((gnu_java_net_protocol_file_Handler)jcgo_rcvrL1)
   gnu_java_net_protocol_file_Handler__openConnection__L6799i(
   (gnu_java_net_protocol_file_Handler)jcgo_rcvrL1, This));
 }
}

JCGO_NOSEP_INLINE java_lang_String CFASTCALL
java_net_URL__getFile__( java_net_URL This )
{
 {
  return JCGO_FIELD_NZACCESS(This, file) == jnull? JCGO_STRREF_OF(jcgo_string3_String6D) :
   JCGO_FIELD_NZACCESS(This, file);
 }
}

JCGO_NOSEP_INLINE java_net_URL CFASTCALL
java_net_URL__this__L6799iLs( java_net_URL This, java_net_URL context,
 java_lang_String spec )
{
 {
  (java_net_URL__this__L6799iLsL1u6yeZ((java_net_URL)This, context,
   spec, (context == jnull)? (java_net_URLStreamHandler)jnull : JCGO_FIELD_NZACCESS(context,
   ph), (jboolean)jfalse));
 }
 return This;
}

JCGO_NOSEP_FRWINL java_net_URL CFASTCALL
java_net_URL__new__L6799iLs( java_net_URL context, java_lang_String
 spec )
{
 JCGO_CLINIT_TRIG(java_net_URL__class);
 return java_net_URL__this__L6799iLs(
  (java_net_URL)jcgo_newObject((jvtable)&java_net_URL_methods), context,
  spec);
}

JCGO_NOSEP_STATIC jboolean CFASTCALL
java_net_URL__equals__Lo( java_net_URL This, java_lang_Object obj
 )
{
 {
  jObject jcgo_rcvrL1;
  if (!jcgo_instanceOf0(OBJT_java_net_URL, MAXT_java_net_URL, (jObject)obj))
  {
   return (jboolean)jfalse;
  }
  return (jboolean)(jcgo_rcvrL1= (jObject)JCGO_FIELD_NZACCESS(This,
   ph), JCGO_CALL_FINALF((gnu_java_net_protocol_file_Handler)jcgo_rcvrL1)
   java_net_URLStreamHandler__equals__L6799iL6799i(
   (java_net_URLStreamHandler)jcgo_rcvrL1, This, (java_net_URL)obj));
 }
}

JCGO_NOSEP_STATIC java_lang_String CFASTCALL
java_net_URL__getPath__( java_net_URL This )
{
 {
  jint quest;
  jObject jcgo_rcvrL1;
  if (JCGO_FIELD_NZACCESS(This, file) == jnull)
  {
   return (java_lang_String)jnull;
  }
  quest= (jcgo_rcvrL1= (jObject)JCGO_FIELD_NZACCESS(This, file), JCGO_CALL_FINALF((java_lang_String)jcgo_rcvrL1)
   java_lang_String__indexOf__I(
   (java_lang_String)jcgo_rcvrL1, (jchar)63/*'?'*/));
  return quest < 0? (java_net_URL__getFile__(
   This)) : (jcgo_rcvrL1= (jObject)JCGO_FIELD_NZACCESS(This, file),
   JCGO_CALL_FINALF((java_lang_String)jcgo_rcvrL1) java_lang_String__substring__II(
   (java_lang_String)jcgo_rcvrL1, 0, quest));
 }
}

JCGO_NOSEP_INLINE java_lang_String CFASTCALL
java_net_URL__getAuthority__( java_net_URL This )
{
 {
  return JCGO_FIELD_NZACCESS(This, authority);
 }
}

JCGO_NOSEP_STATIC java_lang_String CFASTCALL
java_net_URL__getHost__( java_net_URL This )
{
 {
  jint at;
  jObject jcgo_rcvrL1;
  jObject jcgo_rcvrL2;
  at= (JCGO_FIELD_NZACCESS(This, host) == jnull)? (-(jint)1) : (jcgo_rcvrL1=
   (jObject)JCGO_FIELD_NZACCESS(This, host), JCGO_CALL_FINALF((java_lang_String)jcgo_rcvrL1)
   java_lang_String__indexOf__I(
   (java_lang_String)jcgo_rcvrL1, (jchar)64/*'@'*/));
  return at < 0? JCGO_FIELD_NZACCESS(This, host) : (jcgo_rcvrL1= (jObject)JCGO_FIELD_NZACCESS(This,
   host), JCGO_CALL_FINALF((java_lang_String)jcgo_rcvrL1) java_lang_String__substring__II(
   (java_lang_String)jcgo_rcvrL1, at + (jint)1, (jcgo_rcvrL2= (jObject)JCGO_FIELD_NZACCESS(This,
   host), JCGO_CALL_FINALF((java_lang_String)jcgo_rcvrL2) java_lang_String__length__(
   (java_lang_String)jcgo_rcvrL2))));
 }
}

JCGO_NOSEP_INLINE jint CFASTCALL
java_net_URL__getPort__( java_net_URL This )
{
 {
  return JCGO_FIELD_NZACCESS(This, port);
 }
}

JCGO_NOSEP_INLINE jint CFASTCALL
java_net_URL__getDefaultPort__( java_net_URL This )
{
 {
  jObject jcgo_rcvrL1;
  return (jcgo_rcvrL1= (jObject)JCGO_FIELD_NZACCESS(This, ph), JCGO_CALL_FINALF((gnu_java_net_protocol_file_Handler)jcgo_rcvrL1)
   java_net_URLStreamHandler__getDefaultPort__(
   (java_net_URLStreamHandler)jcgo_rcvrL1));
 }
}

JCGO_NOSEP_INLINE java_lang_String CFASTCALL
java_net_URL__getProtocol__( java_net_URL This )
{
 {
  return JCGO_FIELD_NZACCESS(This, protocol);
 }
}

JCGO_NOSEP_INLINE java_lang_String CFASTCALL
java_net_URL__getRef__( java_net_URL This )
{
 {
  return JCGO_FIELD_NZACCESS(This, ref);
 }
}

JCGO_NOSEP_STATIC java_lang_String CFASTCALL
java_net_URL__getUserInfo__( java_net_URL This )
{
 {
  jint at;
  jObject jcgo_rcvrL1;
  if (JCGO_FIELD_NZACCESS(This, userInfo) != jnull)
  {
   return JCGO_FIELD_NZACCESS(This, userInfo);
  }
  at= (JCGO_FIELD_NZACCESS(This, host) == jnull)? (-(jint)1) : (jcgo_rcvrL1=
   (jObject)JCGO_FIELD_NZACCESS(This, host), JCGO_CALL_FINALF((java_lang_String)jcgo_rcvrL1)
   java_lang_String__indexOf__I(
   (java_lang_String)jcgo_rcvrL1, (jchar)64/*'@'*/));
  return at < 0? jnull : (jcgo_rcvrL1= (jObject)JCGO_FIELD_NZACCESS(This,
   host), JCGO_CALL_FINALF((java_lang_String)jcgo_rcvrL1) java_lang_String__substring__II(
   (java_lang_String)jcgo_rcvrL1, 0, at));
 }
}

JCGO_NOSEP_STATIC java_lang_String CFASTCALL
java_net_URL__getQuery__( java_net_URL This )
{
 {
  jint quest;
  jObject jcgo_rcvrL1;
  jObject jcgo_rcvrL2;
  quest= (JCGO_FIELD_NZACCESS(This, file) == jnull)? (-(jint)1) : (jcgo_rcvrL1=
   (jObject)JCGO_FIELD_NZACCESS(This, file), JCGO_CALL_FINALF((java_lang_String)jcgo_rcvrL1)
   java_lang_String__indexOf__I(
   (java_lang_String)jcgo_rcvrL1, (jchar)63/*'?'*/));
  return quest < 0? jnull : (jcgo_rcvrL1= (jObject)JCGO_FIELD_NZACCESS(This,
   file), JCGO_CALL_FINALF((java_lang_String)jcgo_rcvrL1) java_lang_String__substring__II(
   (java_lang_String)jcgo_rcvrL1, quest + (jint)1, (jcgo_rcvrL2= (jObject)JCGO_FIELD_NZACCESS(This,
   file), JCGO_CALL_FINALF((java_lang_String)jcgo_rcvrL2) java_lang_String__length__(
   (java_lang_String)jcgo_rcvrL2))));
 }
}

JCGO_NOSEP_STATIC jint CFASTCALL
java_net_URL__hashCode__( java_net_URL This )
{
 {
  if (JCGO_FIELD_NZACCESS(This, hashCode) != 0)
  {
   return JCGO_FIELD_NZACCESS(This, hashCode);
  }
  else
  {
   jObject jcgo_rcvrL1;
   return (jcgo_rcvrL1= (jObject)JCGO_FIELD_NZACCESS(This, ph), JCGO_CALL_FINALF((gnu_java_net_protocol_file_Handler)jcgo_rcvrL1)
    java_net_URLStreamHandler__hashCode__L6799i(
    (java_net_URLStreamHandler)jcgo_rcvrL1, This));
  }
 }
}

JCGO_NOSEP_FRWINL java_io_InputStream CFASTCALL
java_net_URL__openStream__( java_net_URL This )
{
 {
  jObject jcgo_rcvrL1;
  return (jcgo_rcvrL1= (jObject)(java_net_URL__openConnection__(
   This)), JCGO_CALL_FINALF((gnu_java_net_protocol_file_Connection)jcgo_rcvrL1)
   gnu_java_net_protocol_file_Connection__getInputStream__(
   (gnu_java_net_protocol_file_Connection)jcgo_rcvrL1));
 }
}

JCGO_NOSEP_INLINE void CFASTCALL
java_net_URL__set__LsLsILsLs( java_net_URL This, java_lang_String
 protocol, java_lang_String host, java_lang_String file, java_lang_String
 ref, jint port )
{
 {
  java_net_URLStreamHandler protocolHandler;
  jObject jcgo_rcvrL1;
  protocolHandler= (java_net_URLStreamHandler)jnull;
  protocol= (JCGO_CALL_FINALF(protocol) java_lang_String__toLowerCase__(
   protocol));
  if (!(jcgo_rcvrL1= (jObject)(JCGO_FIELD_NZACCESS(This, protocol)),
   JCGO_CALL_FINALF((java_lang_String)jcgo_rcvrL1) java_lang_String__equals__Lo(
   (java_lang_String)jcgo_rcvrL1, (java_lang_Object)protocol)))
  {
   protocolHandler= (java_net_URL__getURLStreamHandler__Ls(
    protocol));
  }
  if (protocolHandler != jnull)
  {
   JCGO_FIELD_NZACCESS(This, ph)= protocolHandler;
   JCGO_FIELD_NZACCESS(This, protocol)= protocol;
  }
  JCGO_FIELD_NZACCESS(This, authority)= JCGO_STRREF_OF(jcgo_string3_String6D);
  JCGO_FIELD_NZACCESS(This, port)= port;
  JCGO_FIELD_NZACCESS(This, host)= host;
  JCGO_FIELD_NZACCESS(This, file)= file;
  JCGO_FIELD_NZACCESS(This, ref)= ref;
  if (host != jnull)
  {
   JCGO_FIELD_NZACCESS(This, authority)= java_lang_VMSystem__concat0X__LsLs(
    (java_lang_String)JCGO_FIELD_NZACCESS(This, authority), host);
  }
  if (port >= 0)
  {
   jObject jcgo_rcvrL1;
   jObject jcgo_rcvrL2;
   (jcgo_rcvrL2= *(jObject*)(jcgo_rcvrL1= (void*)&(JCGO_FIELD_NZACCESS(This,
    authority))), *(java_lang_String*)jcgo_rcvrL1= java_lang_VMSystem__concat0X__LsLs(
    (java_lang_String)jcgo_rcvrL2, java_lang_VMSystem__concat0X__LsLs(
    JCGO_STRREF_OF(jcgo_string441_Mdclnt), (java_lang_String__valueOf__I(
    port)))));
  }
  JCGO_FIELD_NZACCESS(This, hashCode)= (java_net_URL__hashCode__(
   This));
 }
}

JCGO_NOSEP_INLINE void CFASTCALL
java_net_URL__set__LsLsILsLsLsLsLs( java_net_URL This, java_lang_String
 protocol, java_lang_String host, java_lang_String authority, java_lang_String
 userInfo, java_lang_String path, java_lang_String query, java_lang_String
 ref, jint port )
{
 {
  java_net_URLStreamHandler protocolHandler;
  jObject jcgo_rcvrL1;
  protocolHandler= (java_net_URLStreamHandler)jnull;
  protocol= (JCGO_CALL_FINALF(protocol) java_lang_String__toLowerCase__(
   protocol));
  if (!(jcgo_rcvrL1= (jObject)(JCGO_FIELD_NZACCESS(This, protocol)),
   JCGO_CALL_FINALF((java_lang_String)jcgo_rcvrL1) java_lang_String__equals__Lo(
   (java_lang_String)jcgo_rcvrL1, (java_lang_Object)protocol)))
  {
   protocolHandler= (java_net_URL__getURLStreamHandler__Ls(
    protocol));
  }
  if (protocolHandler != jnull)
  {
   JCGO_FIELD_NZACCESS(This, ph)= protocolHandler;
   JCGO_FIELD_NZACCESS(This, protocol)= protocol;
  }
  JCGO_FIELD_NZACCESS(This, host)= host;
  JCGO_FIELD_NZACCESS(This, userInfo)= userInfo;
  JCGO_FIELD_NZACCESS(This, port)= port;
  JCGO_FIELD_NZACCESS(This, authority)= authority;
  if (query == jnull)
  {
   JCGO_FIELD_NZACCESS(This, file)= path;
  }
  else
  {
   struct java_lang_StringBuilder_s jcgo_stackobj1;
   JCGO_FIELD_NZACCESS(This, file)= java_lang_String__new__L5dy9e(
    java_lang_StringBuilder__append__Ls(
    java_lang_StringBuilder__append__Ls(
    java_lang_StringBuilder__append__Ls(
    java_lang_StringBuilder__this__(
    JCGO_STACKOBJ_NEW(jcgo_stackobj1, java_lang_StringBuilder_methods)),
    path), JCGO_STRREF_OF(jcgo_string9_Url)), query));
  }
  JCGO_FIELD_NZACCESS(This, ref)= ref;
  JCGO_FIELD_NZACCESS(This, hashCode)= (java_net_URL__hashCode__(
   This));
 }
}

JCGO_NOSEP_INLINE java_lang_String CFASTCALL
java_net_URL__toString__X( java_net_URL This, java_lang_String jcgo_stackparam
 )
{
 {
  jObject jcgo_rcvrL1;
  return (jcgo_rcvrL1= (jObject)JCGO_FIELD_NZACCESS(This, ph), JCGO_CALL_FINALF((gnu_java_net_protocol_file_Handler)jcgo_rcvrL1)
   java_net_URLStreamHandler__toExternalForm__L6799iX(
   (java_net_URLStreamHandler)jcgo_rcvrL1, This, jcgo_stackparam));
 }
}

JCGO_NOSEP_INLINE java_lang_String CFASTCALL
java_net_URL__toString__( java_net_URL This )
{
 return java_net_URL__toString__X(This, (java_lang_String)jcgo_newObject((jvtable)&java_lang_String_methods));
}

JCGO_NOSEP_STATIC java_net_URLStreamHandler CFASTCALL
java_net_URL__getURLStreamHandler__Ls( java_lang_String protocol )
{
 JCGO_SYNC_BLOCKSAFENZ(JCGO_CLASSREF_OF(java_net_URL__class))
 {
  java_net_URLStreamHandler JCGO_TRY_VOLATILE ph;
  ph= (java_net_URLStreamHandler)jnull;
  if (java_net_URL__cache_handlers)
  {
   jObject jcgo_rcvrL1;
   if ((ph= (java_net_URLStreamHandler)JCGO_CAST_OBJECT0(OBJT_gnu_java_net_protocol_file_Handler,
    MAXT_gnu_java_net_protocol_file_Handler, (jcgo_rcvrL1= (jObject)java_net_URL__ph_cache,
    JCGO_CALL_FINALF((java_util_HashMap)jcgo_rcvrL1) java_util_HashMap__get__Lo(
    (java_util_HashMap)jcgo_rcvrL1, (java_lang_Object)protocol)))) !=
    jnull)
   {
#ifndef JCGO_SEHTRY
    JCGO_SYNC_JUMPLEAVE(0);
#endif
    return ph;
   }
  }
  if (((java_lang_Object)jnull) != jnull)
  {
   ph= (JCGO_CALL_FINALF(((java_lang_Object)jnull)) (java_net_URLStreamHandler)jnull);
  }
  if (ph == jnull)
  {
   java_lang_String ph_search_path;
   java_util_StringTokenizer pkgPrefix;
   struct java_util_StringTokenizer_s jcgo_stackobj1;
   ph_search_path= (gnu_classpath_SystemProperties__getProperty__Ls(
    JCGO_STRREF_OF(jcgo_string10_Url)));
   if (ph_search_path != jnull)
   {
    ph_search_path= java_lang_VMSystem__concat0X__LsLs(
     (java_lang_String)ph_search_path, java_lang_VMSystem__concat0X__LsLs(
     JCGO_STRREF_OF(jcgo_string11_Url), java_net_URL__DEFAULT_SEARCH_PATH));
   }
   else
   {
    ph_search_path= java_net_URL__DEFAULT_SEARCH_PATH;
   }
   pkgPrefix= (java_util_StringTokenizer__this__LsLs(
    JCGO_STACKOBJ_NEW(jcgo_stackobj1, java_util_StringTokenizer_methods),
    ph_search_path, JCGO_STRREF_OF(jcgo_string11_Url)));
   if (java_net_URL__systemClassLoader == jnull)
   {
    struct java_net_URL_1_s jcgo_stackobj2;
    java_net_URL__systemClassLoader= (java_lang_ClassLoader)JCGO_CAST_OBJECT0(OBJT_java_lang_VMClassLoader_AppClassLoader,
     MAXT_java_lang_VMClassLoader_AppClassLoader, (java_security_AccessController__doPrivileged__L21epy(
     (java_security_PrivilegedAction)java_net_URL_1__this__(
     JCGO_STACKOBJ_NEW(jcgo_stackobj2, java_net_URL_1_methods)))));
   }
   do
   {
    {
     JCGO_TRY_BLOCK
     {
      java_lang_String clsName;
      java_lang_Class c;
      struct java_lang_StringBuilder_s jcgo_stackobj3;
      clsName= java_lang_String__new__L5dy9e(
       java_lang_StringBuilder__append__Ls(
       java_lang_StringBuilder__append__Ls(
       java_lang_StringBuilder__append__Ls(
       java_lang_StringBuilder__append__Ls(
       java_lang_StringBuilder__this__(
       JCGO_STACKOBJ_NEW(jcgo_stackobj3, java_lang_StringBuilder_methods)),
       (java_util_StringTokenizer__nextToken__(
       pkgPrefix))), JCGO_STRREF_OF(jcgo_string3_VMThrwbl)), protocol),
       JCGO_STRREF_OF(jcgo_string12_Url)));
      c= (java_lang_Class__forName__LsZL09rb1(
       clsName, java_net_URL__systemClassLoader, (jboolean)jtrue));
      ph= (java_net_URLStreamHandler)jcgo_checkCast0(OBJT_gnu_java_net_protocol_file_Handler,
       MAXT_gnu_java_net_protocol_file_Handler, (jObject)(java_lang_Class__newInstance__(
       c)));
     }
     JCGO_TRY_LEAVE
     JCGO_TRY_CATCHES(1)
     JCGO_TRY_CATCH(OBJT_java_lang_Throwable, MAXT_java_lang_Throwable)
     {
     }
     JCGO_TRY_RETHROW(1)
    }
   }
    while (ph == jnull && (java_util_StringTokenizer__hasMoreTokens__(
    pkgPrefix)));
  }
  if (ph != jnull && java_net_URL__cache_handlers)
  {
   jObject jcgo_rcvrL1;
   (jcgo_rcvrL1= (jObject)java_net_URL__ph_cache, JCGO_CALL_FINALF((java_util_HashMap)jcgo_rcvrL1)
    java_util_HashMap__put__LoLo(
    (java_util_HashMap)jcgo_rcvrL1, (java_lang_Object)protocol, (java_lang_Object)ph));
  }
  else
  {
   ph= (java_net_URLStreamHandler)jnull;
  }
#ifndef JCGO_SEHTRY
  JCGO_SYNC_JUMPLEAVE(0);
#endif
  return ph;
 }
 JCGO_SYNC_ENDUNREACH
}

JCGO_NOSEP_STATIC void CFASTCALL
java_net_URL__class__0( void )
{
 JCGO_CLINIT_BEGIN(java_net_URL__class);
 java_net_URL__ph_cache= java_util_HashMap__new__();
 {
  java_lang_String s;
  s= (gnu_classpath_SystemProperties__getProperty__Ls(
   JCGO_STRREF_OF(jcgo_string13_Url)));
  if (s == jnull)
  {
   java_net_URL__cache_handlers= (jboolean)jtrue;
  }
  else
  {
   java_net_URL__cache_handlers= (jboolean)jfalse;
  }
 }
 JCGO_CLINIT_DONE(java_net_URL__class);
}

JCGO_NOSEP_DATA CONST struct java_net_URL_methods_s java_net_URL_methods=
{
 JCGO_CLASSREF_OF(java_net_URL__class),
 JCGO_GCJDESCR_INIT(java_net_URL_s, ph)
 OBJT_java_net_URL,
 (JCGO_OBJSIZE_T)sizeof(struct java_net_URL_s),
 NULL,
 JCGO_CLINIT_INIT(java_net_URL__class__0)
 0,
 java_net_URL__equals__Lo,
 java_net_URL__hashCode__,
 java_net_URL__toString__,
 java_lang_Object__finalize__
};

JCGO_NOSEP_DATA struct java_net_URL_class_s java_net_URL__class ATTRIBNONGC=
{
 {
  &java_lang_Class_methods,
  JCGO_MON_INIT
  JCGO_OBJREF_OF(*(java_lang_Object)&java_net_URL_methods),
  JCGO_STRREF_OF(jcgo_string1_Url),
  JCGO_CLASSREF_OF(java_lang_Object__class),
  ((jObjectArr)JCGO_OBJREF_OF(jcgo_array3_Object)),
  0x1d1
 }
};

JCGO_NOSEP_GCDATA java_lang_ClassLoader java_net_URL__systemClassLoader
 ATTRIBGCBSS= jnull;

JCGO_NOSEP_GCDATA java_util_HashMap java_net_URL__ph_cache ATTRIBGCBSS=
 jnull;

JCGO_NOSEP_DATA jboolean java_net_URL__cache_handlers= (jboolean)0;

JCGO_NOSEP_DATA CONST jcgo_arrtype63_GmCnnctn jcgo_array14_Url=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 14,
 {
  (jbyte)(jchar)106/*'j'*/, (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)118/*'v'*/,
   (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)46/*'.'*/, (jbyte)(jchar)110/*'n'*/,
   (jbyte)(jchar)101/*'e'*/, (jbyte)(jchar)116/*'t'*/, (jbyte)(jchar)46/*'.'*/,
   (jbyte)(jchar)85/*'U'*/, (jbyte)(jchar)82/*'R'*/, (jbyte)(jchar)76/*'L'*/,
   (jbyte)(jchar)36/*'$'*/, (jbyte)(jchar)49/*'1'*/
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype77_GmCnnctn jcgo_array15_Url=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 30,
 {
  (jbyte)(jchar)103/*'g'*/, (jbyte)(jchar)110/*'n'*/, (jbyte)(jchar)117/*'u'*/,
   (jbyte)(jchar)46/*'.'*/, (jbyte)(jchar)106/*'j'*/, (jbyte)(jchar)97/*'a'*/,
   (jbyte)(jchar)118/*'v'*/, (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)46/*'.'*/,
   (jbyte)(jchar)110/*'n'*/, (jbyte)(jchar)101/*'e'*/, (jbyte)(jchar)116/*'t'*/,
   (jbyte)(jchar)46/*'.'*/, (jbyte)(jchar)112/*'p'*/, (jbyte)(jchar)114/*'r'*/,
   (jbyte)(jchar)111/*'o'*/, (jbyte)(jchar)116/*'t'*/, (jbyte)(jchar)111/*'o'*/,
   (jbyte)(jchar)99/*'c'*/, (jbyte)(jchar)111/*'o'*/, (jbyte)(jchar)108/*'l'*/,
   (jbyte)(jchar)124/*'|'*/, (jbyte)(jchar)103/*'g'*/, (jbyte)(jchar)110/*'n'*/,
   (jbyte)(jchar)117/*'u'*/, (jbyte)(jchar)46/*'.'*/, (jbyte)(jchar)105/*'i'*/,
   (jbyte)(jchar)110/*'n'*/, (jbyte)(jchar)101/*'e'*/, (jbyte)(jchar)116/*'t'*/
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype4_IntAddrs jcgo_array16_Url=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 4,
 {
  (jbyte)(jchar)58/*':'*/, (jbyte)(jchar)47/*'/'*/, (jbyte)(jchar)47/*'/'*/,
   (jbyte)(jchar)58/*':'*/
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype468_VMSstmPr jcgo_array17_Url=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 41,
 {
  (jbyte)(jchar)65/*'A'*/, (jbyte)(jchar)98/*'b'*/, (jbyte)(jchar)115/*'s'*/,
   (jbyte)(jchar)111/*'o'*/, (jbyte)(jchar)108/*'l'*/, (jbyte)(jchar)117/*'u'*/,
   (jbyte)(jchar)116/*'t'*/, (jbyte)(jchar)101/*'e'*/, (jbyte)(jchar)32/*' '*/,
   (jbyte)(jchar)85/*'U'*/, (jbyte)(jchar)82/*'R'*/, (jbyte)(jchar)76/*'L'*/,
   (jbyte)(jchar)32/*' '*/, (jbyte)(jchar)114/*'r'*/, (jbyte)(jchar)101/*'e'*/,
   (jbyte)(jchar)113/*'q'*/, (jbyte)(jchar)117/*'u'*/, (jbyte)(jchar)105/*'i'*/,
   (jbyte)(jchar)114/*'r'*/, (jbyte)(jchar)101/*'e'*/, (jbyte)(jchar)100/*'d'*/,
   (jbyte)(jchar)32/*' '*/, (jbyte)(jchar)119/*'w'*/, (jbyte)(jchar)105/*'i'*/,
   (jbyte)(jchar)116/*'t'*/, (jbyte)(jchar)104/*'h'*/, (jbyte)(jchar)32/*' '*/,
   (jbyte)(jchar)110/*'n'*/, (jbyte)(jchar)117/*'u'*/, (jbyte)(jchar)108/*'l'*/,
   (jbyte)(jchar)108/*'l'*/, (jbyte)(jchar)32/*' '*/, (jbyte)(jchar)99/*'c'*/,
   (jbyte)(jchar)111/*'o'*/, (jbyte)(jchar)110/*'n'*/, (jbyte)(jchar)116/*'t'*/,
   (jbyte)(jchar)101/*'e'*/, (jbyte)(jchar)120/*'x'*/, (jbyte)(jchar)116/*'t'*/,
   (jbyte)(jchar)58/*':'*/, (jbyte)(jchar)32/*' '*/
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype23_Object jcgo_array18_Url=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 20,
 {
  (jbyte)(jchar)115/*'s'*/, (jbyte)(jchar)112/*'p'*/, (jbyte)(jchar)101/*'e'*/,
   (jbyte)(jchar)99/*'c'*/, (jbyte)(jchar)105/*'i'*/, (jbyte)(jchar)102/*'f'*/,
   (jbyte)(jchar)121/*'y'*/, (jbyte)(jchar)83/*'S'*/, (jbyte)(jchar)116/*'t'*/,
   (jbyte)(jchar)114/*'r'*/, (jbyte)(jchar)101/*'e'*/, (jbyte)(jchar)97/*'a'*/,
   (jbyte)(jchar)109/*'m'*/, (jbyte)(jchar)72/*'H'*/, (jbyte)(jchar)97/*'a'*/,
   (jbyte)(jchar)110/*'n'*/, (jbyte)(jchar)100/*'d'*/, (jbyte)(jchar)108/*'l'*/,
   (jbyte)(jchar)101/*'e'*/, (jbyte)(jchar)114/*'r'*/
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype27_Object jcgo_array19_Url=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 26,
 {
  (jbyte)(jchar)106/*'j'*/, (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)118/*'v'*/,
   (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)46/*'.'*/, (jbyte)(jchar)112/*'p'*/,
   (jbyte)(jchar)114/*'r'*/, (jbyte)(jchar)111/*'o'*/, (jbyte)(jchar)116/*'t'*/,
   (jbyte)(jchar)111/*'o'*/, (jbyte)(jchar)99/*'c'*/, (jbyte)(jchar)111/*'o'*/,
   (jbyte)(jchar)108/*'l'*/, (jbyte)(jchar)46/*'.'*/, (jbyte)(jchar)104/*'h'*/,
   (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)110/*'n'*/, (jbyte)(jchar)100/*'d'*/,
   (jbyte)(jchar)108/*'l'*/, (jbyte)(jchar)101/*'e'*/, (jbyte)(jchar)114/*'r'*/,
   (jbyte)(jchar)46/*'.'*/, (jbyte)(jchar)112/*'p'*/, (jbyte)(jchar)107/*'k'*/,
   (jbyte)(jchar)103/*'g'*/, (jbyte)(jchar)115/*'s'*/
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype87_GmCnnctn jcgo_array20_Url=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 34,
 {
  (jbyte)(jchar)103/*'g'*/, (jbyte)(jchar)110/*'n'*/, (jbyte)(jchar)117/*'u'*/,
   (jbyte)(jchar)46/*'.'*/, (jbyte)(jchar)106/*'j'*/, (jbyte)(jchar)97/*'a'*/,
   (jbyte)(jchar)118/*'v'*/, (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)46/*'.'*/,
   (jbyte)(jchar)110/*'n'*/, (jbyte)(jchar)101/*'e'*/, (jbyte)(jchar)116/*'t'*/,
   (jbyte)(jchar)46/*'.'*/, (jbyte)(jchar)112/*'p'*/, (jbyte)(jchar)114/*'r'*/,
   (jbyte)(jchar)111/*'o'*/, (jbyte)(jchar)116/*'t'*/, (jbyte)(jchar)111/*'o'*/,
   (jbyte)(jchar)99/*'c'*/, (jbyte)(jchar)111/*'o'*/, (jbyte)(jchar)108/*'l'*/,
   (jbyte)(jchar)46/*'.'*/, (jbyte)(jchar)102/*'f'*/, (jbyte)(jchar)105/*'i'*/,
   (jbyte)(jchar)108/*'l'*/, (jbyte)(jchar)101/*'e'*/, (jbyte)(jchar)46/*'.'*/,
   (jbyte)(jchar)72/*'H'*/, (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)110/*'n'*/,
   (jbyte)(jchar)100/*'d'*/, (jbyte)(jchar)108/*'l'*/, (jbyte)(jchar)101/*'e'*/,
   (jbyte)(jchar)114/*'r'*/
 }
};

JCGO_NOSEP_DATA CONST jcgo_arrtype858_Mdclnt jcgo_array21_Url=
{
 (jvtable)&jbyteArr_methods,
 JCGO_MON_INIT
 38,
 {
  (jbyte)(jchar)103/*'g'*/, (jbyte)(jchar)110/*'n'*/, (jbyte)(jchar)117/*'u'*/,
   (jbyte)(jchar)46/*'.'*/, (jbyte)(jchar)106/*'j'*/, (jbyte)(jchar)97/*'a'*/,
   (jbyte)(jchar)118/*'v'*/, (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)46/*'.'*/,
   (jbyte)(jchar)110/*'n'*/, (jbyte)(jchar)101/*'e'*/, (jbyte)(jchar)116/*'t'*/,
   (jbyte)(jchar)46/*'.'*/, (jbyte)(jchar)110/*'n'*/, (jbyte)(jchar)111/*'o'*/,
   (jbyte)(jchar)99/*'c'*/, (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)99/*'c'*/,
   (jbyte)(jchar)104/*'h'*/, (jbyte)(jchar)101/*'e'*/, (jbyte)(jchar)95/*'_'*/,
   (jbyte)(jchar)112/*'p'*/, (jbyte)(jchar)114/*'r'*/, (jbyte)(jchar)111/*'o'*/,
   (jbyte)(jchar)116/*'t'*/, (jbyte)(jchar)111/*'o'*/, (jbyte)(jchar)99/*'c'*/,
   (jbyte)(jchar)111/*'o'*/, (jbyte)(jchar)108/*'l'*/, (jbyte)(jchar)95/*'_'*/,
   (jbyte)(jchar)104/*'h'*/, (jbyte)(jchar)97/*'a'*/, (jbyte)(jchar)110/*'n'*/,
   (jbyte)(jchar)100/*'d'*/, (jbyte)(jchar)108/*'l'*/, (jbyte)(jchar)101/*'e'*/,
   (jbyte)(jchar)114/*'r'*/, (jbyte)(jchar)115/*'s'*/
 }
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string1_Url
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array14_Url),
 0, 12, (jint)0x7a343db2L
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string2_Url
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array15_Url),
 0, 30, (jint)0x2e55eb9bL
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string3_Url
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array532_VMSstmPr),
 4, 3, (jint)0xdf9aL
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string4_Url
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array16_Url),
 0, 4, (jint)0x1b13e0L
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string5_Url
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array532_VMSstmPr),
 4, 2, (jint)0x735L
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string6_Url
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array17_Url),
 0, 41, (jint)0x566458efL
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string7_Url
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array18_Url),
 0, 20, (jint)0x50af23c9L
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string8_Url
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array760_Mdclnt),
 0, 28, (jint)0xf247209dL
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string9_Url
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array49_GameShll),
 91, 1, (jint)0x3fL
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string10_Url
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array19_Url),
 0, 26, (jint)0x68518915L
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string11_Url
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array15_Url),
 21, 1, (jint)0x7cL
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string12_Url
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array20_Url),
 26, 8, (jint)0x36f9ff3cL
};

JCGO_NOSEP_DATA JCGO_NOTHR_CONST struct java_lang_String_s jcgo_string13_Url
 JCGO_THRD_ATTRNONGC=
{
 &java_lang_String_methods,
 JCGO_MON_INIT
 (java_lang_Object)JCGO_OBJREF_OF(jcgo_array21_Url),
 0, 38, (jint)0xf4c1fb75L
};

#ifdef CHKALL_java_net_URL
#include "jcgochke.h"
#endif

#endif
