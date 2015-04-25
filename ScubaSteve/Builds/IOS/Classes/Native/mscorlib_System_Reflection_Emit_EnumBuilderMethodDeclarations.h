#pragma once

// System.Reflection.Emit.EnumBuilder
struct EnumBuilder_t2060;
// System.Reflection.Assembly
struct Assembly_t1667;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Reflection.Module
struct Module_t1859;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t1374;
// System.Reflection.Binder
struct Binder_t1346;
// System.Type[]
struct TypeU5BU5D_t525;
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_t1347;
// System.Reflection.ConstructorInfo[]
struct ConstructorInfoU5BU5D_t1864;
// System.Object[]
struct ObjectU5BU5D_t470;
// System.Reflection.EventInfo
struct EventInfo_t1860;
// System.Reflection.FieldInfo
struct FieldInfo_t1861;
// System.Reflection.MethodInfo
struct MethodInfo_t1253;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t1862;
// System.Reflection.PropertyInfo
struct PropertyInfo_t1863;
// System.Object
struct Object_t;
// System.Globalization.CultureInfo
struct CultureInfo_t1349;
// System.String[]
struct StringU5BU5D_t65;
// System.Exception
struct Exception_t151;
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.Reflection.TypeAttributes
#include "mscorlib_System_Reflection_TypeAttributes.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.Reflection.CallingConventions
#include "mscorlib_System_Reflection_CallingConventions.h"

// System.Reflection.Assembly System.Reflection.Emit.EnumBuilder::get_Assembly()
 Assembly_t1667 * EnumBuilder_get_Assembly_m10866 (EnumBuilder_t2060 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.EnumBuilder::get_AssemblyQualifiedName()
 String_t* EnumBuilder_get_AssemblyQualifiedName_m10867 (EnumBuilder_t2060 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.EnumBuilder::get_BaseType()
 Type_t * EnumBuilder_get_BaseType_m10868 (EnumBuilder_t2060 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.EnumBuilder::get_DeclaringType()
 Type_t * EnumBuilder_get_DeclaringType_m10869 (EnumBuilder_t2060 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.EnumBuilder::get_FullName()
 String_t* EnumBuilder_get_FullName_m10870 (EnumBuilder_t2060 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.EnumBuilder::get_Module()
 Module_t1859 * EnumBuilder_get_Module_m10871 (EnumBuilder_t2060 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.EnumBuilder::get_Name()
 String_t* EnumBuilder_get_Name_m10872 (EnumBuilder_t2060 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.EnumBuilder::get_Namespace()
 String_t* EnumBuilder_get_Namespace_m10873 (EnumBuilder_t2060 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.EnumBuilder::get_ReflectedType()
 Type_t * EnumBuilder_get_ReflectedType_m10874 (EnumBuilder_t2060 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeTypeHandle System.Reflection.Emit.EnumBuilder::get_TypeHandle()
 RuntimeTypeHandle_t1858  EnumBuilder_get_TypeHandle_m10875 (EnumBuilder_t2060 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.EnumBuilder::get_UnderlyingSystemType()
 Type_t * EnumBuilder_get_UnderlyingSystemType_m10876 (EnumBuilder_t2060 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.TypeAttributes System.Reflection.Emit.EnumBuilder::GetAttributeFlagsImpl()
 int32_t EnumBuilder_GetAttributeFlagsImpl_m10877 (EnumBuilder_t2060 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.Reflection.Emit.EnumBuilder::GetConstructorImpl(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
 ConstructorInfo_t1374 * EnumBuilder_GetConstructorImpl_m10878 (EnumBuilder_t2060 * __this, int32_t ___bindingAttr, Binder_t1346 * ___binder, int32_t ___callConvention, TypeU5BU5D_t525* ___types, ParameterModifierU5BU5D_t1347* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] System.Reflection.Emit.EnumBuilder::GetConstructors(System.Reflection.BindingFlags)
 ConstructorInfoU5BU5D_t1864* EnumBuilder_GetConstructors_m10879 (EnumBuilder_t2060 * __this, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.EnumBuilder::GetCustomAttributes(System.Boolean)
 ObjectU5BU5D_t470* EnumBuilder_GetCustomAttributes_m10880 (EnumBuilder_t2060 * __this, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.EnumBuilder::GetCustomAttributes(System.Type,System.Boolean)
 ObjectU5BU5D_t470* EnumBuilder_GetCustomAttributes_m10881 (EnumBuilder_t2060 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.EnumBuilder::GetElementType()
 Type_t * EnumBuilder_GetElementType_m10882 (EnumBuilder_t2060 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.EventInfo System.Reflection.Emit.EnumBuilder::GetEvent(System.String,System.Reflection.BindingFlags)
 EventInfo_t1860 * EnumBuilder_GetEvent_m10883 (EnumBuilder_t2060 * __this, String_t* ___name, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo System.Reflection.Emit.EnumBuilder::GetField(System.String,System.Reflection.BindingFlags)
 FieldInfo_t1861 * EnumBuilder_GetField_m10884 (EnumBuilder_t2060 * __this, String_t* ___name, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.EnumBuilder::GetInterfaces()
 TypeU5BU5D_t525* EnumBuilder_GetInterfaces_m10885 (EnumBuilder_t2060 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.Emit.EnumBuilder::GetMethodImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
 MethodInfo_t1253 * EnumBuilder_GetMethodImpl_m10886 (EnumBuilder_t2060 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t1346 * ___binder, int32_t ___callConvention, TypeU5BU5D_t525* ___types, ParameterModifierU5BU5D_t1347* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.Reflection.Emit.EnumBuilder::GetMethods(System.Reflection.BindingFlags)
 MethodInfoU5BU5D_t1862* EnumBuilder_GetMethods_m10887 (EnumBuilder_t2060 * __this, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Reflection.Emit.EnumBuilder::GetPropertyImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
 PropertyInfo_t1863 * EnumBuilder_GetPropertyImpl_m10888 (EnumBuilder_t2060 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t1346 * ___binder, Type_t * ___returnType, TypeU5BU5D_t525* ___types, ParameterModifierU5BU5D_t1347* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.EnumBuilder::HasElementTypeImpl()
 bool EnumBuilder_HasElementTypeImpl_m10889 (EnumBuilder_t2060 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.EnumBuilder::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[])
 Object_t * EnumBuilder_InvokeMember_m10890 (EnumBuilder_t2060 * __this, String_t* ___name, int32_t ___invokeAttr, Binder_t1346 * ___binder, Object_t * ___target, ObjectU5BU5D_t470* ___args, ParameterModifierU5BU5D_t1347* ___modifiers, CultureInfo_t1349 * ___culture, StringU5BU5D_t65* ___namedParameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.EnumBuilder::IsArrayImpl()
 bool EnumBuilder_IsArrayImpl_m10891 (EnumBuilder_t2060 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.EnumBuilder::IsByRefImpl()
 bool EnumBuilder_IsByRefImpl_m10892 (EnumBuilder_t2060 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.EnumBuilder::IsPointerImpl()
 bool EnumBuilder_IsPointerImpl_m10893 (EnumBuilder_t2060 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.EnumBuilder::IsPrimitiveImpl()
 bool EnumBuilder_IsPrimitiveImpl_m10894 (EnumBuilder_t2060 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.EnumBuilder::IsValueTypeImpl()
 bool EnumBuilder_IsValueTypeImpl_m10895 (EnumBuilder_t2060 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.EnumBuilder::IsDefined(System.Type,System.Boolean)
 bool EnumBuilder_IsDefined_m10896 (EnumBuilder_t2060 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.EnumBuilder::CreateNotSupportedException()
 Exception_t151 * EnumBuilder_CreateNotSupportedException_m10897 (EnumBuilder_t2060 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
