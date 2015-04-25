﻿#pragma once

// System.Reflection.ParameterInfo
struct ParameterInfo_t1353;
// System.Type
struct Type_t;
// System.Reflection.MemberInfo
struct MemberInfo_t468;
// System.String
struct String_t;
// System.Reflection.Emit.ParameterBuilder
struct ParameterBuilder_t2067;
// System.Object[]
struct ObjectU5BU5D_t470;
// System.Reflection.ParameterAttributes
#include "mscorlib_System_Reflection_ParameterAttributes.h"

// System.Void System.Reflection.ParameterInfo::.ctor()
 void ParameterInfo__ctor_m11273 (ParameterInfo_t1353 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.ParameterInfo::.ctor(System.Reflection.Emit.ParameterBuilder,System.Type,System.Reflection.MemberInfo,System.Int32)
 void ParameterInfo__ctor_m11274 (ParameterInfo_t1353 * __this, ParameterBuilder_t2067 * ___pb, Type_t * ___type, MemberInfo_t468 * ___member, int32_t ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.ParameterInfo::.ctor(System.Reflection.ParameterInfo,System.Reflection.MemberInfo)
 void ParameterInfo__ctor_m11275 (ParameterInfo_t1353 * __this, ParameterInfo_t1353 * ___pinfo, MemberInfo_t468 * ___member, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.ParameterInfo::ToString()
 String_t* ParameterInfo_ToString_m11276 (ParameterInfo_t1353 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.ParameterInfo::get_ParameterType()
 Type_t * ParameterInfo_get_ParameterType_m6458 (ParameterInfo_t1353 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::get_Attributes()
 int32_t ParameterInfo_get_Attributes_m11277 (ParameterInfo_t1353 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.ParameterInfo::get_IsIn()
 bool ParameterInfo_get_IsIn_m11278 (ParameterInfo_t1353 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.ParameterInfo::get_IsOptional()
 bool ParameterInfo_get_IsOptional_m11279 (ParameterInfo_t1353 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.ParameterInfo::get_IsOut()
 bool ParameterInfo_get_IsOut_m11280 (ParameterInfo_t1353 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.ParameterInfo::get_IsRetval()
 bool ParameterInfo_get_IsRetval_m11281 (ParameterInfo_t1353 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MemberInfo System.Reflection.ParameterInfo::get_Member()
 MemberInfo_t468 * ParameterInfo_get_Member_m11282 (ParameterInfo_t1353 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.ParameterInfo::get_Name()
 String_t* ParameterInfo_get_Name_m11283 (ParameterInfo_t1353 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.ParameterInfo::get_Position()
 int32_t ParameterInfo_get_Position_m11284 (ParameterInfo_t1353 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.ParameterInfo::GetCustomAttributes(System.Type,System.Boolean)
 ObjectU5BU5D_t470* ParameterInfo_GetCustomAttributes_m11285 (ParameterInfo_t1353 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.ParameterInfo::IsDefined(System.Type,System.Boolean)
 bool ParameterInfo_IsDefined_m11286 (ParameterInfo_t1353 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.ParameterInfo::GetPseudoCustomAttributes()
 ObjectU5BU5D_t470* ParameterInfo_GetPseudoCustomAttributes_m11287 (ParameterInfo_t1353 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
