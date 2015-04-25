#pragma once

// System.Reflection.MonoField
struct MonoField_t2092;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t470;
// System.Object
struct Object_t;
// System.Reflection.FieldInfo
struct FieldInfo_t1861;
// System.Reflection.Binder
struct Binder_t1346;
// System.Globalization.CultureInfo
struct CultureInfo_t1349;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1242;
// System.Reflection.FieldAttributes
#include "mscorlib_System_Reflection_FieldAttributes.h"
// System.RuntimeFieldHandle
#include "mscorlib_System_RuntimeFieldHandle.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Reflection.MonoField::.ctor()
 void MonoField__ctor_m11168 (MonoField_t2092 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldAttributes System.Reflection.MonoField::get_Attributes()
 int32_t MonoField_get_Attributes_m11169 (MonoField_t2092 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeFieldHandle System.Reflection.MonoField::get_FieldHandle()
 RuntimeFieldHandle_t1865  MonoField_get_FieldHandle_m11170 (MonoField_t2092 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoField::get_FieldType()
 Type_t * MonoField_get_FieldType_m11171 (MonoField_t2092 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoField::GetParentType(System.Boolean)
 Type_t * MonoField_GetParentType_m11172 (MonoField_t2092 * __this, bool ___declaring, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoField::get_ReflectedType()
 Type_t * MonoField_get_ReflectedType_m11173 (MonoField_t2092 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoField::get_DeclaringType()
 Type_t * MonoField_get_DeclaringType_m11174 (MonoField_t2092 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.MonoField::get_Name()
 String_t* MonoField_get_Name_m11175 (MonoField_t2092 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MonoField::IsDefined(System.Type,System.Boolean)
 bool MonoField_IsDefined_m11176 (MonoField_t2092 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.MonoField::GetCustomAttributes(System.Boolean)
 ObjectU5BU5D_t470* MonoField_GetCustomAttributes_m11177 (MonoField_t2092 * __this, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.MonoField::GetCustomAttributes(System.Type,System.Boolean)
 ObjectU5BU5D_t470* MonoField_GetCustomAttributes_m11178 (MonoField_t2092 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.MonoField::GetFieldOffset()
 int32_t MonoField_GetFieldOffset_m11179 (MonoField_t2092 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MonoField::GetValueInternal(System.Object)
 Object_t * MonoField_GetValueInternal_m11180 (MonoField_t2092 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MonoField::GetValue(System.Object)
 Object_t * MonoField_GetValue_m11181 (MonoField_t2092 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.MonoField::ToString()
 String_t* MonoField_ToString_m11182 (MonoField_t2092 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MonoField::SetValueInternal(System.Reflection.FieldInfo,System.Object,System.Object)
 void MonoField_SetValueInternal_m11183 (Object_t * __this/* static, unused */, FieldInfo_t1861 * ___fi, Object_t * ___obj, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MonoField::SetValue(System.Object,System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Globalization.CultureInfo)
 void MonoField_SetValue_m11184 (MonoField_t2092 * __this, Object_t * ___obj, Object_t * ___val, int32_t ___invokeAttr, Binder_t1346 * ___binder, CultureInfo_t1349 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MonoField::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void MonoField_GetObjectData_m11185 (MonoField_t2092 * __this, SerializationInfo_t1242 * ___info, StreamingContext_t1243  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MonoField::CheckGeneric()
 void MonoField_CheckGeneric_m11186 (MonoField_t2092 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
