#pragma once

// System.Runtime.Remoting.RemotingServices
struct RemotingServices_t2204;
// System.Reflection.MethodBase
struct MethodBase_t1351;
// System.Type
struct Type_t;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Runtime.Remoting.ObjRef
struct ObjRef_t2187;
// System.Runtime.Remoting.Proxies.RealProxy
struct RealProxy_t2186;
// System.Runtime.Remoting.Messaging.IMethodMessage
struct IMethodMessage_t2174;
// System.Type[]
struct TypeU5BU5D_t525;
// System.Runtime.Remoting.ActivatedClientTypeEntry
struct ActivatedClientTypeEntry_t2193;
// System.Object[]
struct ObjectU5BU5D_t470;
// System.Runtime.Remoting.Identity
struct Identity_t2189;
// System.Runtime.Remoting.ClientIdentity
struct ClientIdentity_t2190;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t1877;
// System.Runtime.Remoting.WellKnownObjectMode
#include "mscorlib_System_Runtime_Remoting_WellKnownObjectMode.h"

// System.Void System.Runtime.Remoting.RemotingServices::.cctor()
 void RemotingServices__cctor_m11584 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Runtime.Remoting.RemotingServices::GetVirtualMethod(System.Type,System.Reflection.MethodBase)
 MethodBase_t1351 * RemotingServices_GetVirtualMethod_m11585 (Object_t * __this/* static, unused */, Type_t * ___type, MethodBase_t1351 * ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.RemotingServices::IsTransparentProxy(System.Object)
 bool RemotingServices_IsTransparentProxy_m11586 (Object_t * __this/* static, unused */, Object_t * ___proxy, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Remoting.RemotingServices::GetServerTypeForUri(System.String)
 Type_t * RemotingServices_GetServerTypeForUri_m11587 (Object_t * __this/* static, unused */, String_t* ___URI, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.RemotingServices::Unmarshal(System.Runtime.Remoting.ObjRef)
 Object_t * RemotingServices_Unmarshal_m11588 (Object_t * __this/* static, unused */, ObjRef_t2187 * ___objectRef, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.RemotingServices::Unmarshal(System.Runtime.Remoting.ObjRef,System.Boolean)
 Object_t * RemotingServices_Unmarshal_m11589 (Object_t * __this/* static, unused */, ObjRef_t2187 * ___objectRef, bool ___fRefine, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Proxies.RealProxy System.Runtime.Remoting.RemotingServices::GetRealProxy(System.Object)
 RealProxy_t2186 * RemotingServices_GetRealProxy_m11590 (Object_t * __this/* static, unused */, Object_t * ___proxy, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Runtime.Remoting.RemotingServices::GetMethodBaseFromMethodMessage(System.Runtime.Remoting.Messaging.IMethodMessage)
 MethodBase_t1351 * RemotingServices_GetMethodBaseFromMethodMessage_m11591 (Object_t * __this/* static, unused */, Object_t * ___msg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Runtime.Remoting.RemotingServices::GetMethodBaseFromName(System.Type,System.String,System.Type[])
 MethodBase_t1351 * RemotingServices_GetMethodBaseFromName_m11592 (Object_t * __this/* static, unused */, Type_t * ___type, String_t* ___methodName, TypeU5BU5D_t525* ___signature, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Runtime.Remoting.RemotingServices::FindInterfaceMethod(System.Type,System.String,System.Type[])
 MethodBase_t1351 * RemotingServices_FindInterfaceMethod_m11593 (Object_t * __this/* static, unused */, Type_t * ___type, String_t* ___methodName, TypeU5BU5D_t525* ___signature, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.RemotingServices::CreateClientProxy(System.Runtime.Remoting.ActivatedClientTypeEntry,System.Object[])
 Object_t * RemotingServices_CreateClientProxy_m11594 (Object_t * __this/* static, unused */, ActivatedClientTypeEntry_t2193 * ___entry, ObjectU5BU5D_t470* ___activationAttributes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.RemotingServices::CreateClientProxyForContextBound(System.Type,System.Object[])
 Object_t * RemotingServices_CreateClientProxyForContextBound_m11595 (Object_t * __this/* static, unused */, Type_t * ___type, ObjectU5BU5D_t470* ___activationAttributes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Identity System.Runtime.Remoting.RemotingServices::GetIdentityForUri(System.String)
 Identity_t2189 * RemotingServices_GetIdentityForUri_m11596 (Object_t * __this/* static, unused */, String_t* ___uri, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.RemotingServices::RemoveAppNameFromUri(System.String)
 String_t* RemotingServices_RemoveAppNameFromUri_m11597 (Object_t * __this/* static, unused */, String_t* ___uri, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.ClientIdentity System.Runtime.Remoting.RemotingServices::GetOrCreateClientIdentity(System.Runtime.Remoting.ObjRef,System.Type,System.Object&)
 ClientIdentity_t2190 * RemotingServices_GetOrCreateClientIdentity_m11598 (Object_t * __this/* static, unused */, ObjRef_t2187 * ___objRef, Type_t * ___proxyType, Object_t ** ___clientProxy, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.ServerIdentity System.Runtime.Remoting.RemotingServices::CreateWellKnownServerIdentity(System.Type,System.String,System.Runtime.Remoting.WellKnownObjectMode)
 ServerIdentity_t1877 * RemotingServices_CreateWellKnownServerIdentity_m11599 (Object_t * __this/* static, unused */, Type_t * ___objectType, String_t* ___objectUri, int32_t ___mode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.RemotingServices::RegisterServerIdentity(System.Runtime.Remoting.ServerIdentity)
 void RemotingServices_RegisterServerIdentity_m11600 (Object_t * __this/* static, unused */, ServerIdentity_t1877 * ___identity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.RemotingServices::GetProxyForRemoteObject(System.Runtime.Remoting.ObjRef,System.Type)
 Object_t * RemotingServices_GetProxyForRemoteObject_m11601 (Object_t * __this/* static, unused */, ObjRef_t2187 * ___objref, Type_t * ___classToProxy, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.RemotingServices::GetRemoteObject(System.Runtime.Remoting.ObjRef,System.Type)
 Object_t * RemotingServices_GetRemoteObject_m11602 (Object_t * __this/* static, unused */, ObjRef_t2187 * ___objRef, Type_t * ___proxyType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.RemotingServices::RegisterInternalChannels()
 void RemotingServices_RegisterInternalChannels_m11603 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.RemotingServices::DisposeIdentity(System.Runtime.Remoting.Identity)
 void RemotingServices_DisposeIdentity_m11604 (Object_t * __this/* static, unused */, Identity_t2189 * ___ident, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.RemotingServices::GetNormalizedUri(System.String)
 String_t* RemotingServices_GetNormalizedUri_m11605 (Object_t * __this/* static, unused */, String_t* ___uri, MethodInfo* method) IL2CPP_METHOD_ATTR;
