﻿#pragma once

// System.Reflection.MonoEvent
struct MonoEvent_t2091;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Reflection.MethodInfo
struct MethodInfo_t1253;
// System.Object[]
struct ObjectU5BU5D_t470;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1242;
// System.Reflection.EventAttributes
#include "mscorlib_System_Reflection_EventAttributes.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Reflection.MonoEvent::.ctor()
 void MonoEvent__ctor_m11157 (MonoEvent_t2091 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.EventAttributes System.Reflection.MonoEvent::get_Attributes()
 int32_t MonoEvent_get_Attributes_m11158 (MonoEvent_t2091 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.MonoEvent::GetAddMethod(System.Boolean)
 MethodInfo_t1253 * MonoEvent_GetAddMethod_m11159 (MonoEvent_t2091 * __this, bool ___nonPublic, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoEvent::get_DeclaringType()
 Type_t * MonoEvent_get_DeclaringType_m11160 (MonoEvent_t2091 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoEvent::get_ReflectedType()
 Type_t * MonoEvent_get_ReflectedType_m11161 (MonoEvent_t2091 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.MonoEvent::get_Name()
 String_t* MonoEvent_get_Name_m11162 (MonoEvent_t2091 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.MonoEvent::ToString()
 String_t* MonoEvent_ToString_m11163 (MonoEvent_t2091 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MonoEvent::IsDefined(System.Type,System.Boolean)
 bool MonoEvent_IsDefined_m11164 (MonoEvent_t2091 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.MonoEvent::GetCustomAttributes(System.Boolean)
 ObjectU5BU5D_t470* MonoEvent_GetCustomAttributes_m11165 (MonoEvent_t2091 * __this, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.MonoEvent::GetCustomAttributes(System.Type,System.Boolean)
 ObjectU5BU5D_t470* MonoEvent_GetCustomAttributes_m11166 (MonoEvent_t2091 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MonoEvent::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void MonoEvent_GetObjectData_m11167 (MonoEvent_t2091 * __this, SerializationInfo_t1242 * ___info, StreamingContext_t1243  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
