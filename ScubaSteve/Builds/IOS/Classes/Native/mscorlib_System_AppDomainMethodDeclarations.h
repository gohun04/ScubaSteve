#pragma once

// System.AppDomain
struct AppDomain_t2336;
// System.String
struct String_t;
// System.Reflection.Assembly
struct Assembly_t1667;
// System.Security.Policy.Evidence
struct Evidence_t2073;
// System.Runtime.Remoting.Contexts.Context
struct Context_t2146;

// System.String System.AppDomain::getFriendlyName()
 String_t* AppDomain_getFriendlyName_m12414 (AppDomain_t2336 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AppDomain System.AppDomain::getCurDomain()
 AppDomain_t2336 * AppDomain_getCurDomain_m12415 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AppDomain System.AppDomain::get_CurrentDomain()
 AppDomain_t2336 * AppDomain_get_CurrentDomain_m12416 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.AppDomain::LoadAssembly(System.String,System.Security.Policy.Evidence,System.Boolean)
 Assembly_t1667 * AppDomain_LoadAssembly_m12417 (AppDomain_t2336 * __this, String_t* ___assemblyRef, Evidence_t2073 * ___securityEvidence, bool ___refOnly, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.AppDomain::Load(System.String)
 Assembly_t1667 * AppDomain_Load_m12418 (AppDomain_t2336 * __this, String_t* ___assemblyString, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.AppDomain::Load(System.String,System.Security.Policy.Evidence,System.Boolean)
 Assembly_t1667 * AppDomain_Load_m12419 (AppDomain_t2336 * __this, String_t* ___assemblyString, Evidence_t2073 * ___assemblySecurity, bool ___refonly, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.Context System.AppDomain::InternalGetContext()
 Context_t2146 * AppDomain_InternalGetContext_m12420 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.Context System.AppDomain::InternalGetDefaultContext()
 Context_t2146 * AppDomain_InternalGetDefaultContext_m12421 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::InternalGetProcessGuid(System.String)
 String_t* AppDomain_InternalGetProcessGuid_m12422 (Object_t * __this/* static, unused */, String_t* ___newguid, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::GetProcessGuid()
 String_t* AppDomain_GetProcessGuid_m12423 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::ToString()
 String_t* AppDomain_ToString_m12424 (AppDomain_t2336 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
