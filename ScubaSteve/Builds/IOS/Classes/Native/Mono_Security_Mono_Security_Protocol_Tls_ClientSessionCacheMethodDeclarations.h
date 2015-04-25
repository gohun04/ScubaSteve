#pragma once

// Mono.Security.Protocol.Tls.ClientSessionCache
struct ClientSessionCache_t1764;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t163;
// Mono.Security.Protocol.Tls.ClientSessionInfo
struct ClientSessionInfo_t1763;
// Mono.Security.Protocol.Tls.Context
struct Context_t1750;

// System.Void Mono.Security.Protocol.Tls.ClientSessionCache::.cctor()
 void ClientSessionCache__cctor_m8269 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientSessionCache::Add(System.String,System.Byte[])
 void ClientSessionCache_Add_m8270 (Object_t * __this/* static, unused */, String_t* ___host, ByteU5BU5D_t163* ___id, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.ClientSessionCache::FromHost(System.String)
 ByteU5BU5D_t163* ClientSessionCache_FromHost_m8271 (Object_t * __this/* static, unused */, String_t* ___host, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.ClientSessionInfo Mono.Security.Protocol.Tls.ClientSessionCache::FromContext(Mono.Security.Protocol.Tls.Context,System.Boolean)
 ClientSessionInfo_t1763 * ClientSessionCache_FromContext_m8272 (Object_t * __this/* static, unused */, Context_t1750 * ___context, bool ___checkValidity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.ClientSessionCache::SetContextInCache(Mono.Security.Protocol.Tls.Context)
 bool ClientSessionCache_SetContextInCache_m8273 (Object_t * __this/* static, unused */, Context_t1750 * ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.ClientSessionCache::SetContextFromCache(Mono.Security.Protocol.Tls.Context)
 bool ClientSessionCache_SetContextFromCache_m8274 (Object_t * __this/* static, unused */, Context_t1750 * ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
