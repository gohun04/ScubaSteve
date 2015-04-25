#pragma once

// System.MulticastDelegate
struct MulticastDelegate_t34;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1242;
// System.Object
struct Object_t;
// System.Delegate[]
struct DelegateU5BU5D_t1849;
// System.Delegate
struct Delegate_t624;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.MulticastDelegate::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void MulticastDelegate_GetObjectData_m1397 (MulticastDelegate_t34 * __this, SerializationInfo_t1242 * ___info, StreamingContext_t1243  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::Equals(System.Object)
 bool MulticastDelegate_Equals_m1395 (MulticastDelegate_t34 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.MulticastDelegate::GetHashCode()
 int32_t MulticastDelegate_GetHashCode_m1396 (MulticastDelegate_t34 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate[] System.MulticastDelegate::GetInvocationList()
 DelegateU5BU5D_t1849* MulticastDelegate_GetInvocationList_m1399 (MulticastDelegate_t34 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::CombineImpl(System.Delegate)
 Delegate_t624 * MulticastDelegate_CombineImpl_m1400 (MulticastDelegate_t34 * __this, Delegate_t624 * ___follow, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::BaseEquals(System.MulticastDelegate)
 bool MulticastDelegate_BaseEquals_m9393 (MulticastDelegate_t34 * __this, MulticastDelegate_t34 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.MulticastDelegate System.MulticastDelegate::KPM(System.MulticastDelegate,System.MulticastDelegate,System.MulticastDelegate&)
 MulticastDelegate_t34 * MulticastDelegate_KPM_m9394 (Object_t * __this/* static, unused */, MulticastDelegate_t34 * ___needle, MulticastDelegate_t34 * ___haystack, MulticastDelegate_t34 ** ___tail, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::RemoveImpl(System.Delegate)
 Delegate_t624 * MulticastDelegate_RemoveImpl_m1401 (MulticastDelegate_t34 * __this, Delegate_t624 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
