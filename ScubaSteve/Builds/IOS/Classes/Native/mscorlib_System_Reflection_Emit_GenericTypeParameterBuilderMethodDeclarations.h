#pragma once

// System.Reflection.Emit.GenericTypeParameterBuilder
struct GenericTypeParameterBuilder_t2064;
// System.Type
struct Type_t;
// System.Reflection.Assembly
struct Assembly_t1667;
// System.String
struct String_t;
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
// System.Reflection.EventInfo
struct EventInfo_t1860;
// System.Reflection.FieldInfo
struct FieldInfo_t1861;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t1862;
// System.Reflection.MethodInfo
struct MethodInfo_t1253;
// System.Reflection.PropertyInfo
struct PropertyInfo_t1863;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t470;
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

// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsSubclassOf(System.Type)
 bool GenericTypeParameterBuilder_IsSubclassOf_m10913 (GenericTypeParameterBuilder_t2064 * __this, Type_t * ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.TypeAttributes System.Reflection.Emit.GenericTypeParameterBuilder::GetAttributeFlagsImpl()
 int32_t GenericTypeParameterBuilder_GetAttributeFlagsImpl_m10914 (GenericTypeParameterBuilder_t2064 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.Reflection.Emit.GenericTypeParameterBuilder::GetConstructorImpl(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
 ConstructorInfo_t1374 * GenericTypeParameterBuilder_GetConstructorImpl_m10915 (GenericTypeParameterBuilder_t2064 * __this, int32_t ___bindingAttr, Binder_t1346 * ___binder, int32_t ___callConvention, TypeU5BU5D_t525* ___types, ParameterModifierU5BU5D_t1347* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] System.Reflection.Emit.GenericTypeParameterBuilder::GetConstructors(System.Reflection.BindingFlags)
 ConstructorInfoU5BU5D_t1864* GenericTypeParameterBuilder_GetConstructors_m10916 (GenericTypeParameterBuilder_t2064 * __this, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.EventInfo System.Reflection.Emit.GenericTypeParameterBuilder::GetEvent(System.String,System.Reflection.BindingFlags)
 EventInfo_t1860 * GenericTypeParameterBuilder_GetEvent_m10917 (GenericTypeParameterBuilder_t2064 * __this, String_t* ___name, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo System.Reflection.Emit.GenericTypeParameterBuilder::GetField(System.String,System.Reflection.BindingFlags)
 FieldInfo_t1861 * GenericTypeParameterBuilder_GetField_m10918 (GenericTypeParameterBuilder_t2064 * __this, String_t* ___name, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.GenericTypeParameterBuilder::GetInterfaces()
 TypeU5BU5D_t525* GenericTypeParameterBuilder_GetInterfaces_m10919 (GenericTypeParameterBuilder_t2064 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.Reflection.Emit.GenericTypeParameterBuilder::GetMethods(System.Reflection.BindingFlags)
 MethodInfoU5BU5D_t1862* GenericTypeParameterBuilder_GetMethods_m10920 (GenericTypeParameterBuilder_t2064 * __this, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.Emit.GenericTypeParameterBuilder::GetMethodImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
 MethodInfo_t1253 * GenericTypeParameterBuilder_GetMethodImpl_m10921 (GenericTypeParameterBuilder_t2064 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t1346 * ___binder, int32_t ___callConvention, TypeU5BU5D_t525* ___types, ParameterModifierU5BU5D_t1347* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Reflection.Emit.GenericTypeParameterBuilder::GetPropertyImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
 PropertyInfo_t1863 * GenericTypeParameterBuilder_GetPropertyImpl_m10922 (GenericTypeParameterBuilder_t2064 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t1346 * ___binder, Type_t * ___returnType, TypeU5BU5D_t525* ___types, ParameterModifierU5BU5D_t1347* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::HasElementTypeImpl()
 bool GenericTypeParameterBuilder_HasElementTypeImpl_m10923 (GenericTypeParameterBuilder_t2064 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsAssignableFrom(System.Type)
 bool GenericTypeParameterBuilder_IsAssignableFrom_m10924 (GenericTypeParameterBuilder_t2064 * __this, Type_t * ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsInstanceOfType(System.Object)
 bool GenericTypeParameterBuilder_IsInstanceOfType_m10925 (GenericTypeParameterBuilder_t2064 * __this, Object_t * ___o, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsArrayImpl()
 bool GenericTypeParameterBuilder_IsArrayImpl_m10926 (GenericTypeParameterBuilder_t2064 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsByRefImpl()
 bool GenericTypeParameterBuilder_IsByRefImpl_m10927 (GenericTypeParameterBuilder_t2064 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsPointerImpl()
 bool GenericTypeParameterBuilder_IsPointerImpl_m10928 (GenericTypeParameterBuilder_t2064 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsPrimitiveImpl()
 bool GenericTypeParameterBuilder_IsPrimitiveImpl_m10929 (GenericTypeParameterBuilder_t2064 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsValueTypeImpl()
 bool GenericTypeParameterBuilder_IsValueTypeImpl_m10930 (GenericTypeParameterBuilder_t2064 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.GenericTypeParameterBuilder::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[])
 Object_t * GenericTypeParameterBuilder_InvokeMember_m10931 (GenericTypeParameterBuilder_t2064 * __this, String_t* ___name, int32_t ___invokeAttr, Binder_t1346 * ___binder, Object_t * ___target, ObjectU5BU5D_t470* ___args, ParameterModifierU5BU5D_t1347* ___modifiers, CultureInfo_t1349 * ___culture, StringU5BU5D_t65* ___namedParameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::GetElementType()
 Type_t * GenericTypeParameterBuilder_GetElementType_m10932 (GenericTypeParameterBuilder_t2064 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::get_UnderlyingSystemType()
 Type_t * GenericTypeParameterBuilder_get_UnderlyingSystemType_m10933 (GenericTypeParameterBuilder_t2064 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Emit.GenericTypeParameterBuilder::get_Assembly()
 Assembly_t1667 * GenericTypeParameterBuilder_get_Assembly_m10934 (GenericTypeParameterBuilder_t2064 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.GenericTypeParameterBuilder::get_AssemblyQualifiedName()
 String_t* GenericTypeParameterBuilder_get_AssemblyQualifiedName_m10935 (GenericTypeParameterBuilder_t2064 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::get_BaseType()
 Type_t * GenericTypeParameterBuilder_get_BaseType_m10936 (GenericTypeParameterBuilder_t2064 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.GenericTypeParameterBuilder::get_FullName()
 String_t* GenericTypeParameterBuilder_get_FullName_m10937 (GenericTypeParameterBuilder_t2064 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsDefined(System.Type,System.Boolean)
 bool GenericTypeParameterBuilder_IsDefined_m10938 (GenericTypeParameterBuilder_t2064 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.GenericTypeParameterBuilder::GetCustomAttributes(System.Boolean)
 ObjectU5BU5D_t470* GenericTypeParameterBuilder_GetCustomAttributes_m10939 (GenericTypeParameterBuilder_t2064 * __this, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.GenericTypeParameterBuilder::GetCustomAttributes(System.Type,System.Boolean)
 ObjectU5BU5D_t470* GenericTypeParameterBuilder_GetCustomAttributes_m10940 (GenericTypeParameterBuilder_t2064 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.GenericTypeParameterBuilder::get_Name()
 String_t* GenericTypeParameterBuilder_get_Name_m10941 (GenericTypeParameterBuilder_t2064 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.GenericTypeParameterBuilder::get_Namespace()
 String_t* GenericTypeParameterBuilder_get_Namespace_m10942 (GenericTypeParameterBuilder_t2064 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.GenericTypeParameterBuilder::get_Module()
 Module_t1859 * GenericTypeParameterBuilder_get_Module_m10943 (GenericTypeParameterBuilder_t2064 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::get_DeclaringType()
 Type_t * GenericTypeParameterBuilder_get_DeclaringType_m10944 (GenericTypeParameterBuilder_t2064 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::get_ReflectedType()
 Type_t * GenericTypeParameterBuilder_get_ReflectedType_m10945 (GenericTypeParameterBuilder_t2064 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeTypeHandle System.Reflection.Emit.GenericTypeParameterBuilder::get_TypeHandle()
 RuntimeTypeHandle_t1858  GenericTypeParameterBuilder_get_TypeHandle_m10946 (GenericTypeParameterBuilder_t2064 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.GenericTypeParameterBuilder::GetGenericArguments()
 TypeU5BU5D_t525* GenericTypeParameterBuilder_GetGenericArguments_m10947 (GenericTypeParameterBuilder_t2064 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::GetGenericTypeDefinition()
 Type_t * GenericTypeParameterBuilder_GetGenericTypeDefinition_m10948 (GenericTypeParameterBuilder_t2064 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::get_ContainsGenericParameters()
 bool GenericTypeParameterBuilder_get_ContainsGenericParameters_m10949 (GenericTypeParameterBuilder_t2064 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::get_IsGenericParameter()
 bool GenericTypeParameterBuilder_get_IsGenericParameter_m10950 (GenericTypeParameterBuilder_t2064 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::get_IsGenericType()
 bool GenericTypeParameterBuilder_get_IsGenericType_m10951 (GenericTypeParameterBuilder_t2064 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::get_IsGenericTypeDefinition()
 bool GenericTypeParameterBuilder_get_IsGenericTypeDefinition_m10952 (GenericTypeParameterBuilder_t2064 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.GenericTypeParameterBuilder::not_supported()
 Exception_t151 * GenericTypeParameterBuilder_not_supported_m10953 (GenericTypeParameterBuilder_t2064 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.GenericTypeParameterBuilder::ToString()
 String_t* GenericTypeParameterBuilder_ToString_m10954 (GenericTypeParameterBuilder_t2064 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::Equals(System.Object)
 bool GenericTypeParameterBuilder_Equals_m10955 (GenericTypeParameterBuilder_t2064 * __this, Object_t * ___o, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.GenericTypeParameterBuilder::GetHashCode()
 int32_t GenericTypeParameterBuilder_GetHashCode_m10956 (GenericTypeParameterBuilder_t2064 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::MakeGenericType(System.Type[])
 Type_t * GenericTypeParameterBuilder_MakeGenericType_m10957 (GenericTypeParameterBuilder_t2064 * __this, TypeU5BU5D_t525* ___typeArguments, MethodInfo* method) IL2CPP_METHOD_ATTR;
