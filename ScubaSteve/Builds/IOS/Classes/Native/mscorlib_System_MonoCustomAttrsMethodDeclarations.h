#pragma once

// System.MonoCustomAttrs
struct MonoCustomAttrs_t2386;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t470;
// System.Reflection.ICustomAttributeProvider
struct ICustomAttributeProvider_t2387;
// System.Type
struct Type_t;
// System.Attribute
struct Attribute_t601;
// System.Reflection.PropertyInfo
struct PropertyInfo_t1863;
// System.AttributeUsageAttribute
struct AttributeUsageAttribute_t1343;

// System.Void System.MonoCustomAttrs::.cctor()
 void MonoCustomAttrs__cctor_m12897 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoCustomAttrs::IsUserCattrProvider(System.Object)
 bool MonoCustomAttrs_IsUserCattrProvider_m12898 (Object_t * __this/* static, unused */, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.MonoCustomAttrs::GetCustomAttributesInternal(System.Reflection.ICustomAttributeProvider,System.Type,System.Boolean)
 ObjectU5BU5D_t470* MonoCustomAttrs_GetCustomAttributesInternal_m12899 (Object_t * __this/* static, unused */, Object_t * ___obj, Type_t * ___attributeType, bool ___pseudoAttrs, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.MonoCustomAttrs::GetPseudoCustomAttributes(System.Reflection.ICustomAttributeProvider,System.Type)
 ObjectU5BU5D_t470* MonoCustomAttrs_GetPseudoCustomAttributes_m12900 (Object_t * __this/* static, unused */, Object_t * ___obj, Type_t * ___attributeType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.MonoCustomAttrs::GetCustomAttributesBase(System.Reflection.ICustomAttributeProvider,System.Type)
 ObjectU5BU5D_t470* MonoCustomAttrs_GetCustomAttributesBase_m12901 (Object_t * __this/* static, unused */, Object_t * ___obj, Type_t * ___attributeType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Attribute System.MonoCustomAttrs::GetCustomAttribute(System.Reflection.ICustomAttributeProvider,System.Type,System.Boolean)
 Attribute_t601 * MonoCustomAttrs_GetCustomAttribute_m12902 (Object_t * __this/* static, unused */, Object_t * ___obj, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.MonoCustomAttrs::GetCustomAttributes(System.Reflection.ICustomAttributeProvider,System.Type,System.Boolean)
 ObjectU5BU5D_t470* MonoCustomAttrs_GetCustomAttributes_m12903 (Object_t * __this/* static, unused */, Object_t * ___obj, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.MonoCustomAttrs::GetCustomAttributes(System.Reflection.ICustomAttributeProvider,System.Boolean)
 ObjectU5BU5D_t470* MonoCustomAttrs_GetCustomAttributes_m12904 (Object_t * __this/* static, unused */, Object_t * ___obj, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoCustomAttrs::IsDefined(System.Reflection.ICustomAttributeProvider,System.Type,System.Boolean)
 bool MonoCustomAttrs_IsDefined_m12905 (Object_t * __this/* static, unused */, Object_t * ___obj, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoCustomAttrs::IsDefinedInternal(System.Reflection.ICustomAttributeProvider,System.Type)
 bool MonoCustomAttrs_IsDefinedInternal_m12906 (Object_t * __this/* static, unused */, Object_t * ___obj, Type_t * ___AttributeType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.MonoCustomAttrs::GetBasePropertyDefinition(System.Reflection.PropertyInfo)
 PropertyInfo_t1863 * MonoCustomAttrs_GetBasePropertyDefinition_m12907 (Object_t * __this/* static, unused */, PropertyInfo_t1863 * ___property, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ICustomAttributeProvider System.MonoCustomAttrs::GetBase(System.Reflection.ICustomAttributeProvider)
 Object_t * MonoCustomAttrs_GetBase_m12908 (Object_t * __this/* static, unused */, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AttributeUsageAttribute System.MonoCustomAttrs::RetrieveAttributeUsage(System.Type)
 AttributeUsageAttribute_t1343 * MonoCustomAttrs_RetrieveAttributeUsage_m12909 (Object_t * __this/* static, unused */, Type_t * ___attributeType, MethodInfo* method) IL2CPP_METHOD_ATTR;
