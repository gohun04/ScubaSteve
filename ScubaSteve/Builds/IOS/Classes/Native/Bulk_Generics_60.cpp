#include "il2cpp_precompiled_header.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifndef _MSC_VER
#else
#endif
extern TypeInfo EqualityComparer_1_t5447_il2cpp_TypeInfo;

extern TypeInfo IEquatable_1_t2831_il2cpp_TypeInfo;
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo Guid_t2377_il2cpp_TypeInfo;
extern TypeInfo Boolean_t379_il2cpp_TypeInfo;
extern TypeInfo GenericEqualityComparer_1_t1971_il2cpp_TypeInfo;
extern TypeInfo TypeU5BU5D_t525_il2cpp_TypeInfo;
extern TypeInfo DefaultComparer_t5448_il2cpp_TypeInfo;
extern TypeInfo Int32_t386_il2cpp_TypeInfo;
extern Il2CppType IEquatable_1_t2831_0_0_0;
extern Il2CppType Guid_t2377_0_0_0;
extern Il2CppType GenericEqualityComparer_1_t1971_0_0_0;
extern MethodInfo Object__ctor_m1260_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m1784_MethodInfo;
extern MethodInfo Type_IsAssignableFrom_m6497_MethodInfo;
extern MethodInfo Type_MakeGenericType_m6495_MethodInfo;
extern MethodInfo Activator_CreateInstance_m6441_MethodInfo;
extern MethodInfo DefaultComparer__ctor_m31342_MethodInfo;
extern MethodInfo EqualityComparer_1_GetHashCode_m53614_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m53615_MethodInfo;


// System.Void System.Collections.Generic.EqualityComparer`1<System.Guid>::.ctor()
extern MethodInfo EqualityComparer_1__ctor_m31337_MethodInfo;
 void EqualityComparer_1__ctor_m31337 (EqualityComparer_1_t5447 * __this, MethodInfo* method){
	{
		Object__ctor_m1260(__this, /*hidden argument*/&Object__ctor_m1260_MethodInfo);
		return;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1<System.Guid>::.cctor()
extern MethodInfo EqualityComparer_1__cctor_m31338_MethodInfo;
 void EqualityComparer_1__cctor_m31338 (Object_t * __this/* static, unused */, MethodInfo* method){
	DefaultComparer_t5448 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (DefaultComparer_t5448 *)il2cpp_codegen_object_new(InitializedTypeInfo(&DefaultComparer_t5448_il2cpp_TypeInfo));
	DefaultComparer__ctor_m31342(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, &DefaultComparer__ctor_m31342_MethodInfo);
	((EqualityComparer_1_t5447_StaticFields*)InitializedTypeInfo(&EqualityComparer_1_t5447_il2cpp_TypeInfo)->static_fields)->____default_0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.Guid>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
extern MethodInfo EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m31339_MethodInfo;
 int32_t EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m31339 (EqualityComparer_1_t5447 * __this, Object_t * ___obj, MethodInfo* method){
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker1< int32_t, Guid_t2377  >::Invoke(&EqualityComparer_1_GetHashCode_m53614_MethodInfo, __this, ((*(Guid_t2377 *)((Guid_t2377 *)UnBox (___obj, InitializedTypeInfo(&Guid_t2377_il2cpp_TypeInfo))))));
		return L_0;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.Guid>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern MethodInfo EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m31340_MethodInfo;
 bool EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m31340 (EqualityComparer_1_t5447 * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method){
	{
		bool L_0 = (bool)VirtFuncInvoker2< bool, Guid_t2377 , Guid_t2377  >::Invoke(&EqualityComparer_1_Equals_m53615_MethodInfo, __this, ((*(Guid_t2377 *)((Guid_t2377 *)UnBox (___x, InitializedTypeInfo(&Guid_t2377_il2cpp_TypeInfo))))), ((*(Guid_t2377 *)((Guid_t2377 *)UnBox (___y, InitializedTypeInfo(&Guid_t2377_il2cpp_TypeInfo))))));
		return L_0;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.Guid>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.Guid>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<System.Guid>::get_Default()
extern MethodInfo EqualityComparer_1_get_Default_m31341_MethodInfo;
 EqualityComparer_1_t5447 * EqualityComparer_1_get_Default_m31341 (Object_t * __this/* static, unused */, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&EqualityComparer_1_t5447_il2cpp_TypeInfo));
		return (((EqualityComparer_1_t5447_StaticFields*)InitializedTypeInfo(&EqualityComparer_1_t5447_il2cpp_TypeInfo)->static_fields)->____default_0);
	}
}
// Metadata Definition System.Collections.Generic.EqualityComparer`1<System.Guid>
extern Il2CppType EqualityComparer_1_t5447_0_0_49;
FieldInfo EqualityComparer_1_t5447_____default_0_FieldInfo = 
{
	"_default"/* name */
	, &EqualityComparer_1_t5447_0_0_49/* type */
	, &EqualityComparer_1_t5447_il2cpp_TypeInfo/* parent */
	, offsetof(EqualityComparer_1_t5447_StaticFields, ____default_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* EqualityComparer_1_t5447_FieldInfos[] =
{
	&EqualityComparer_1_t5447_____default_0_FieldInfo,
	NULL
};
static PropertyInfo EqualityComparer_1_t5447____Default_PropertyInfo = 
{
	&EqualityComparer_1_t5447_il2cpp_TypeInfo/* parent */
	, "Default"/* name */
	, &EqualityComparer_1_get_Default_m31341_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* EqualityComparer_1_t5447_PropertyInfos[] =
{
	&EqualityComparer_1_t5447____Default_PropertyInfo,
	NULL
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod EqualityComparer_1__ctor_m31337_GenericMethod;
// System.Void System.Collections.Generic.EqualityComparer`1<System.Guid>::.ctor()
MethodInfo EqualityComparer_1__ctor_m31337_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&EqualityComparer_1__ctor_m31337/* method */
	, &EqualityComparer_1_t5447_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6276/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &EqualityComparer_1__ctor_m31337_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod EqualityComparer_1__cctor_m31338_GenericMethod;
// System.Void System.Collections.Generic.EqualityComparer`1<System.Guid>::.cctor()
MethodInfo EqualityComparer_1__cctor_m31338_MethodInfo = 
{
	".cctor"/* name */
	, (methodPointerType)&EqualityComparer_1__cctor_m31338/* method */
	, &EqualityComparer_1_t5447_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6161/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &EqualityComparer_1__cctor_m31338_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo EqualityComparer_1_t5447_EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m31339_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType Int32_t386_0_0_0;
extern void* RuntimeInvoker_Int32_t386_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m31339_GenericMethod;
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.Guid>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
MethodInfo EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m31339_MethodInfo = 
{
	"System.Collections.IEqualityComparer.GetHashCode"/* name */
	, (methodPointerType)&EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m31339/* method */
	, &EqualityComparer_1_t5447_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t386_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t386_Object_t/* invoker_method */
	, EqualityComparer_1_t5447_EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m31339_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m31339_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo EqualityComparer_1_t5447_EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m31340_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m31340_GenericMethod;
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.Guid>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
MethodInfo EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m31340_MethodInfo = 
{
	"System.Collections.IEqualityComparer.Equals"/* name */
	, (methodPointerType)&EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m31340/* method */
	, &EqualityComparer_1_t5447_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t379_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t379_Object_t_Object_t/* invoker_method */
	, EqualityComparer_1_t5447_EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m31340_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m31340_GenericMethod/* genericMethod */

};
extern Il2CppType Guid_t2377_0_0_0;
static ParameterInfo EqualityComparer_1_t5447_EqualityComparer_1_GetHashCode_m53614_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &Guid_t2377_0_0_0},
};
extern Il2CppType Int32_t386_0_0_0;
extern void* RuntimeInvoker_Int32_t386_Guid_t2377 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod EqualityComparer_1_GetHashCode_m53614_GenericMethod;
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.Guid>::GetHashCode(T)
MethodInfo EqualityComparer_1_GetHashCode_m53614_MethodInfo = 
{
	"GetHashCode"/* name */
	, NULL/* method */
	, &EqualityComparer_1_t5447_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t386_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t386_Guid_t2377/* invoker_method */
	, EqualityComparer_1_t5447_EqualityComparer_1_GetHashCode_m53614_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &EqualityComparer_1_GetHashCode_m53614_GenericMethod/* genericMethod */

};
extern Il2CppType Guid_t2377_0_0_0;
extern Il2CppType Guid_t2377_0_0_0;
static ParameterInfo EqualityComparer_1_t5447_EqualityComparer_1_Equals_m53615_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &Guid_t2377_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &Guid_t2377_0_0_0},
};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379_Guid_t2377_Guid_t2377 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod EqualityComparer_1_Equals_m53615_GenericMethod;
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.Guid>::Equals(T,T)
MethodInfo EqualityComparer_1_Equals_m53615_MethodInfo = 
{
	"Equals"/* name */
	, NULL/* method */
	, &EqualityComparer_1_t5447_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t379_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t379_Guid_t2377_Guid_t2377/* invoker_method */
	, EqualityComparer_1_t5447_EqualityComparer_1_Equals_m53615_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 9/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &EqualityComparer_1_Equals_m53615_GenericMethod/* genericMethod */

};
extern Il2CppType EqualityComparer_1_t5447_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod EqualityComparer_1_get_Default_m31341_GenericMethod;
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<System.Guid>::get_Default()
MethodInfo EqualityComparer_1_get_Default_m31341_MethodInfo = 
{
	"get_Default"/* name */
	, (methodPointerType)&EqualityComparer_1_get_Default_m31341/* method */
	, &EqualityComparer_1_t5447_il2cpp_TypeInfo/* declaring_type */
	, &EqualityComparer_1_t5447_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2198/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &EqualityComparer_1_get_Default_m31341_GenericMethod/* genericMethod */

};
static MethodInfo* EqualityComparer_1_t5447_MethodInfos[] =
{
	&EqualityComparer_1__ctor_m31337_MethodInfo,
	&EqualityComparer_1__cctor_m31338_MethodInfo,
	&EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m31339_MethodInfo,
	&EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m31340_MethodInfo,
	&EqualityComparer_1_GetHashCode_m53614_MethodInfo,
	&EqualityComparer_1_Equals_m53615_MethodInfo,
	&EqualityComparer_1_get_Default_m31341_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m1252_MethodInfo;
extern MethodInfo Object_Finalize_m1253_MethodInfo;
extern MethodInfo Object_GetHashCode_m1254_MethodInfo;
extern MethodInfo Object_ToString_m1255_MethodInfo;
static MethodInfo* EqualityComparer_1_t5447_VTable[] =
{
	&Object_Equals_m1252_MethodInfo,
	&Object_Finalize_m1253_MethodInfo,
	&Object_GetHashCode_m1254_MethodInfo,
	&Object_ToString_m1255_MethodInfo,
	&EqualityComparer_1_Equals_m53615_MethodInfo,
	&EqualityComparer_1_GetHashCode_m53614_MethodInfo,
	&EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m31340_MethodInfo,
	&EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m31339_MethodInfo,
	NULL,
	NULL,
};
extern TypeInfo IEqualityComparer_1_t10402_il2cpp_TypeInfo;
extern TypeInfo IEqualityComparer_t1482_il2cpp_TypeInfo;
static TypeInfo* EqualityComparer_1_t5447_InterfacesTypeInfos[] = 
{
	&IEqualityComparer_1_t10402_il2cpp_TypeInfo,
	&IEqualityComparer_t1482_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair EqualityComparer_1_t5447_InterfacesOffsets[] = 
{
	{ &IEqualityComparer_1_t10402_il2cpp_TypeInfo, 4},
	{ &IEqualityComparer_t1482_il2cpp_TypeInfo, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType EqualityComparer_1_t5447_0_0_0;
extern Il2CppType EqualityComparer_1_t5447_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct EqualityComparer_1_t5447;
extern Il2CppGenericClass EqualityComparer_1_t5447_GenericClass;
TypeInfo EqualityComparer_1_t5447_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "EqualityComparer`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, EqualityComparer_1_t5447_MethodInfos/* methods */
	, EqualityComparer_1_t5447_PropertyInfos/* properties */
	, EqualityComparer_1_t5447_FieldInfos/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &EqualityComparer_1_t5447_il2cpp_TypeInfo/* element_class */
	, EqualityComparer_1_t5447_InterfacesTypeInfos/* implemented_interfaces */
	, EqualityComparer_1_t5447_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &EqualityComparer_1_t5447_il2cpp_TypeInfo/* cast_class */
	, &EqualityComparer_1_t5447_0_0_0/* byval_arg */
	, &EqualityComparer_1_t5447_1_0_0/* this_arg */
	, EqualityComparer_1_t5447_InterfacesOffsets/* interface_offsets */
	, &EqualityComparer_1_t5447_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (EqualityComparer_1_t5447)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(EqualityComparer_1_t5447_StaticFields)/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 8321/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, true/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 1/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 10/* vtable_count */
	, 2/* interfaces_count */
	, 2/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Guid>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Guid>::GetHashCode(T)
// Metadata Definition System.Collections.Generic.IEqualityComparer`1<System.Guid>
extern Il2CppType Guid_t2377_0_0_0;
extern Il2CppType Guid_t2377_0_0_0;
static ParameterInfo IEqualityComparer_1_t10402_IEqualityComparer_1_Equals_m53616_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &Guid_t2377_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &Guid_t2377_0_0_0},
};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379_Guid_t2377_Guid_t2377 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEqualityComparer_1_Equals_m53616_GenericMethod;
// System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Guid>::Equals(T,T)
MethodInfo IEqualityComparer_1_Equals_m53616_MethodInfo = 
{
	"Equals"/* name */
	, NULL/* method */
	, &IEqualityComparer_1_t10402_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t379_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t379_Guid_t2377_Guid_t2377/* invoker_method */
	, IEqualityComparer_1_t10402_IEqualityComparer_1_Equals_m53616_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEqualityComparer_1_Equals_m53616_GenericMethod/* genericMethod */

};
extern Il2CppType Guid_t2377_0_0_0;
static ParameterInfo IEqualityComparer_1_t10402_IEqualityComparer_1_GetHashCode_m53617_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &Guid_t2377_0_0_0},
};
extern Il2CppType Int32_t386_0_0_0;
extern void* RuntimeInvoker_Int32_t386_Guid_t2377 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEqualityComparer_1_GetHashCode_m53617_GenericMethod;
// System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Guid>::GetHashCode(T)
MethodInfo IEqualityComparer_1_GetHashCode_m53617_MethodInfo = 
{
	"GetHashCode"/* name */
	, NULL/* method */
	, &IEqualityComparer_1_t10402_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t386_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t386_Guid_t2377/* invoker_method */
	, IEqualityComparer_1_t10402_IEqualityComparer_1_GetHashCode_m53617_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEqualityComparer_1_GetHashCode_m53617_GenericMethod/* genericMethod */

};
static MethodInfo* IEqualityComparer_1_t10402_MethodInfos[] =
{
	&IEqualityComparer_1_Equals_m53616_MethodInfo,
	&IEqualityComparer_1_GetHashCode_m53617_MethodInfo,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEqualityComparer_1_t10402_0_0_0;
extern Il2CppType IEqualityComparer_1_t10402_1_0_0;
struct IEqualityComparer_1_t10402;
extern Il2CppGenericClass IEqualityComparer_1_t10402_GenericClass;
TypeInfo IEqualityComparer_1_t10402_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEqualityComparer`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEqualityComparer_1_t10402_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEqualityComparer_1_t10402_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEqualityComparer_1_t10402_il2cpp_TypeInfo/* cast_class */
	, &IEqualityComparer_1_t10402_0_0_0/* byval_arg */
	, &IEqualityComparer_1_t10402_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEqualityComparer_1_t10402_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 2/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::.ctor()
 void DefaultComparer__ctor_m31342 (DefaultComparer_t5448 * __this, MethodInfo* method){
	{
		EqualityComparer_1__ctor_m31337(__this, /*hidden argument*/&EqualityComparer_1__ctor_m31337_MethodInfo);
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::GetHashCode(T)
extern MethodInfo DefaultComparer_GetHashCode_m31343_MethodInfo;
 int32_t DefaultComparer_GetHashCode_m31343 (DefaultComparer_t5448 * __this, Guid_t2377  ___obj, MethodInfo* method){
	{
		Guid_t2377  L_0 = ___obj;
		Object_t * L_1 = Box(InitializedTypeInfo(&Guid_t2377_il2cpp_TypeInfo), &L_0);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		NullCheck(Box(InitializedTypeInfo(&Guid_t2377_il2cpp_TypeInfo), &(*(&___obj))));
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&Object_GetHashCode_m1254_MethodInfo, Box(InitializedTypeInfo(&Guid_t2377_il2cpp_TypeInfo), &(*(&___obj))));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::Equals(T,T)
extern MethodInfo DefaultComparer_Equals_m31344_MethodInfo;
 bool DefaultComparer_Equals_m31344 (DefaultComparer_t5448 * __this, Guid_t2377  ___x, Guid_t2377  ___y, MethodInfo* method){
	{
		Guid_t2377  L_0 = ___x;
		Object_t * L_1 = Box(InitializedTypeInfo(&Guid_t2377_il2cpp_TypeInfo), &L_0);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		Guid_t2377  L_2 = ___y;
		Object_t * L_3 = Box(InitializedTypeInfo(&Guid_t2377_il2cpp_TypeInfo), &L_2);
		return ((((Object_t *)L_3) == ((Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		Guid_t2377  L_4 = ___y;
		Object_t * L_5 = Box(InitializedTypeInfo(&Guid_t2377_il2cpp_TypeInfo), &L_4);
		NullCheck(Box(InitializedTypeInfo(&Guid_t2377_il2cpp_TypeInfo), &(*(&___x))));
		bool L_6 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&Object_Equals_m1252_MethodInfo, Box(InitializedTypeInfo(&Guid_t2377_il2cpp_TypeInfo), &(*(&___x))), L_5);
		return L_6;
	}
}
// Metadata Definition System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod DefaultComparer__ctor_m31342_GenericMethod;
// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::.ctor()
MethodInfo DefaultComparer__ctor_m31342_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&DefaultComparer__ctor_m31342/* method */
	, &DefaultComparer_t5448_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &DefaultComparer__ctor_m31342_GenericMethod/* genericMethod */

};
extern Il2CppType Guid_t2377_0_0_0;
static ParameterInfo DefaultComparer_t5448_DefaultComparer_GetHashCode_m31343_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &Guid_t2377_0_0_0},
};
extern Il2CppType Int32_t386_0_0_0;
extern void* RuntimeInvoker_Int32_t386_Guid_t2377 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod DefaultComparer_GetHashCode_m31343_GenericMethod;
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::GetHashCode(T)
MethodInfo DefaultComparer_GetHashCode_m31343_MethodInfo = 
{
	"GetHashCode"/* name */
	, (methodPointerType)&DefaultComparer_GetHashCode_m31343/* method */
	, &DefaultComparer_t5448_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t386_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t386_Guid_t2377/* invoker_method */
	, DefaultComparer_t5448_DefaultComparer_GetHashCode_m31343_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &DefaultComparer_GetHashCode_m31343_GenericMethod/* genericMethod */

};
extern Il2CppType Guid_t2377_0_0_0;
extern Il2CppType Guid_t2377_0_0_0;
static ParameterInfo DefaultComparer_t5448_DefaultComparer_Equals_m31344_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &Guid_t2377_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &Guid_t2377_0_0_0},
};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379_Guid_t2377_Guid_t2377 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod DefaultComparer_Equals_m31344_GenericMethod;
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::Equals(T,T)
MethodInfo DefaultComparer_Equals_m31344_MethodInfo = 
{
	"Equals"/* name */
	, (methodPointerType)&DefaultComparer_Equals_m31344/* method */
	, &DefaultComparer_t5448_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t379_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t379_Guid_t2377_Guid_t2377/* invoker_method */
	, DefaultComparer_t5448_DefaultComparer_Equals_m31344_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 9/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &DefaultComparer_Equals_m31344_GenericMethod/* genericMethod */

};
static MethodInfo* DefaultComparer_t5448_MethodInfos[] =
{
	&DefaultComparer__ctor_m31342_MethodInfo,
	&DefaultComparer_GetHashCode_m31343_MethodInfo,
	&DefaultComparer_Equals_m31344_MethodInfo,
	NULL
};
static MethodInfo* DefaultComparer_t5448_VTable[] =
{
	&Object_Equals_m1252_MethodInfo,
	&Object_Finalize_m1253_MethodInfo,
	&Object_GetHashCode_m1254_MethodInfo,
	&Object_ToString_m1255_MethodInfo,
	&DefaultComparer_Equals_m31344_MethodInfo,
	&DefaultComparer_GetHashCode_m31343_MethodInfo,
	&EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m31340_MethodInfo,
	&EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m31339_MethodInfo,
	&DefaultComparer_GetHashCode_m31343_MethodInfo,
	&DefaultComparer_Equals_m31344_MethodInfo,
};
static Il2CppInterfaceOffsetPair DefaultComparer_t5448_InterfacesOffsets[] = 
{
	{ &IEqualityComparer_1_t10402_il2cpp_TypeInfo, 4},
	{ &IEqualityComparer_t1482_il2cpp_TypeInfo, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType DefaultComparer_t5448_0_0_0;
extern Il2CppType DefaultComparer_t5448_1_0_0;
struct DefaultComparer_t5448;
extern Il2CppGenericClass DefaultComparer_t5448_GenericClass;
extern TypeInfo EqualityComparer_1_t1970_il2cpp_TypeInfo;
TypeInfo DefaultComparer_t5448_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "DefaultComparer"/* name */
	, ""/* namespaze */
	, DefaultComparer_t5448_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &EqualityComparer_1_t5447_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &EqualityComparer_1_t1970_il2cpp_TypeInfo/* nested_in */
	, &DefaultComparer_t5448_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, DefaultComparer_t5448_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &DefaultComparer_t5448_il2cpp_TypeInfo/* cast_class */
	, &DefaultComparer_t5448_0_0_0/* byval_arg */
	, &DefaultComparer_t5448_1_0_0/* this_arg */
	, DefaultComparer_t5448_InterfacesOffsets/* interface_offsets */
	, &DefaultComparer_t5448_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (DefaultComparer_t5448)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1057027/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 3/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 10/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t7710_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.LoaderOptimization>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.LoaderOptimization>
extern MethodInfo IEnumerator_1_get_Current_m53618_MethodInfo;
static PropertyInfo IEnumerator_1_t7710____Current_PropertyInfo = 
{
	&IEnumerator_1_t7710_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m53618_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t7710_PropertyInfos[] =
{
	&IEnumerator_1_t7710____Current_PropertyInfo,
	NULL
};
extern Il2CppType LoaderOptimization_t2378_0_0_0;
extern void* RuntimeInvoker_LoaderOptimization_t2378 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m53618_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.LoaderOptimization>::get_Current()
MethodInfo IEnumerator_1_get_Current_m53618_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t7710_il2cpp_TypeInfo/* declaring_type */
	, &LoaderOptimization_t2378_0_0_0/* return_type */
	, RuntimeInvoker_LoaderOptimization_t2378/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m53618_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t7710_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m53618_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t26_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t444_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t7710_InterfacesTypeInfos[] = 
{
	&IEnumerator_t26_il2cpp_TypeInfo,
	&IDisposable_t444_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t7710_0_0_0;
extern Il2CppType IEnumerator_1_t7710_1_0_0;
struct IEnumerator_1_t7710;
extern Il2CppGenericClass IEnumerator_1_t7710_GenericClass;
TypeInfo IEnumerator_1_t7710_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t7710_MethodInfos/* methods */
	, IEnumerator_1_t7710_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t7710_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t7710_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t7710_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t7710_0_0_0/* byval_arg */
	, &IEnumerator_1_t7710_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t7710_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t5449_il2cpp_TypeInfo;

extern TypeInfo LoaderOptimization_t2378_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t1657_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m31349_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m7566_MethodInfo;
extern MethodInfo Array_get_Length_m7572_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisLoaderOptimization_t2378_m41570_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.LoaderOptimization>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.LoaderOptimization>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisLoaderOptimization_t2378_m41570 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.LoaderOptimization>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m31345_MethodInfo;
 void InternalEnumerator_1__ctor_m31345 (InternalEnumerator_1_t5449 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.LoaderOptimization>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m31346_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m31346 (InternalEnumerator_1_t5449 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m31349(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m31349_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&LoaderOptimization_t2378_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.LoaderOptimization>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m31347_MethodInfo;
 void InternalEnumerator_1_Dispose_m31347 (InternalEnumerator_1_t5449 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.LoaderOptimization>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m31348_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m31348 (InternalEnumerator_1_t5449 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (__this->___array_0);
		NullCheck(L_1);
		int32_t L_2 = Array_get_Length_m7572(L_1, /*hidden argument*/&Array_get_Length_m7572_MethodInfo);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->___idx_1);
		int32_t L_5 = ((int32_t)(L_4-1));
		V_0 = L_5;
		__this->___idx_1 = L_5;
		G_B5_0 = ((((int32_t)((((int32_t)V_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.LoaderOptimization>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m31349 (InternalEnumerator_1_t5449 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t1657 * L_1 = (InvalidOperationException_t1657 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1657_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m7566(L_1, (String_t*) &_stringLiteral1838, /*hidden argument*/&InvalidOperationException__ctor_m7566_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->___idx_1);
		if ((((uint32_t)L_2) != ((uint32_t)(-1))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t1657 * L_3 = (InvalidOperationException_t1657 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1657_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m7566(L_3, (String_t*) &_stringLiteral1839, /*hidden argument*/&InvalidOperationException__ctor_m7566_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array_0);
		Array_t * L_5 = (__this->___array_0);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m7572(L_5, /*hidden argument*/&Array_get_Length_m7572_MethodInfo);
		int32_t L_7 = (__this->___idx_1);
		NullCheck(L_4);
		int32_t L_8 = Array_InternalArray__get_Item_TisLoaderOptimization_t2378_m41570(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisLoaderOptimization_t2378_m41570_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.LoaderOptimization>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t5449____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t5449_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t5449, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t386_0_0_1;
FieldInfo InternalEnumerator_1_t5449____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t386_0_0_1/* type */
	, &InternalEnumerator_1_t5449_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t5449, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t5449_FieldInfos[] =
{
	&InternalEnumerator_1_t5449____array_0_FieldInfo,
	&InternalEnumerator_1_t5449____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t5449____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5449_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m31346_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t5449____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5449_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m31349_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t5449_PropertyInfos[] =
{
	&InternalEnumerator_1_t5449____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t5449____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t5449_InternalEnumerator_1__ctor_m31345_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m31345_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.LoaderOptimization>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m31345_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m31345/* method */
	, &InternalEnumerator_1_t5449_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t/* invoker_method */
	, InternalEnumerator_1_t5449_InternalEnumerator_1__ctor_m31345_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1__ctor_m31345_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m31346_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.LoaderOptimization>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m31346_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m31346/* method */
	, &InternalEnumerator_1_t5449_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m31346_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m31347_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.LoaderOptimization>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m31347_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m31347/* method */
	, &InternalEnumerator_1_t5449_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_Dispose_m31347_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m31348_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.LoaderOptimization>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m31348_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m31348/* method */
	, &InternalEnumerator_1_t5449_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t379_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t379/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_MoveNext_m31348_GenericMethod/* genericMethod */

};
extern Il2CppType LoaderOptimization_t2378_0_0_0;
extern void* RuntimeInvoker_LoaderOptimization_t2378 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m31349_GenericMethod;
// T System.Array/InternalEnumerator`1<System.LoaderOptimization>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m31349_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m31349/* method */
	, &InternalEnumerator_1_t5449_il2cpp_TypeInfo/* declaring_type */
	, &LoaderOptimization_t2378_0_0_0/* return_type */
	, RuntimeInvoker_LoaderOptimization_t2378/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_get_Current_m31349_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t5449_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m31345_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m31346_MethodInfo,
	&InternalEnumerator_1_Dispose_m31347_MethodInfo,
	&InternalEnumerator_1_MoveNext_m31348_MethodInfo,
	&InternalEnumerator_1_get_Current_m31349_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m2156_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m2157_MethodInfo;
extern MethodInfo ValueType_ToString_m2158_MethodInfo;
static MethodInfo* InternalEnumerator_1_t5449_VTable[] =
{
	&ValueType_Equals_m2156_MethodInfo,
	&Object_Finalize_m1253_MethodInfo,
	&ValueType_GetHashCode_m2157_MethodInfo,
	&ValueType_ToString_m2158_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m31346_MethodInfo,
	&InternalEnumerator_1_MoveNext_m31348_MethodInfo,
	&InternalEnumerator_1_Dispose_m31347_MethodInfo,
	&InternalEnumerator_1_get_Current_m31349_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t5449_InterfacesTypeInfos[] = 
{
	&IEnumerator_t26_il2cpp_TypeInfo,
	&IDisposable_t444_il2cpp_TypeInfo,
	&IEnumerator_1_t7710_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t5449_InterfacesOffsets[] = 
{
	{ &IEnumerator_t26_il2cpp_TypeInfo, 4},
	{ &IDisposable_t444_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t7710_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t5449_0_0_0;
extern Il2CppType InternalEnumerator_1_t5449_1_0_0;
extern TypeInfo ValueType_t550_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t5449_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t5449_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t5449_MethodInfos/* methods */
	, InternalEnumerator_1_t5449_PropertyInfos/* properties */
	, InternalEnumerator_1_t5449_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t550_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t5449_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t5449_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t5449_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t5449_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t5449_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t5449_1_0_0/* this_arg */
	, InternalEnumerator_1_t5449_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t5449_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t5449)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t9974_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.LoaderOptimization>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.LoaderOptimization>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.LoaderOptimization>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.LoaderOptimization>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.LoaderOptimization>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.LoaderOptimization>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.LoaderOptimization>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.LoaderOptimization>
extern MethodInfo ICollection_1_get_Count_m53619_MethodInfo;
static PropertyInfo ICollection_1_t9974____Count_PropertyInfo = 
{
	&ICollection_1_t9974_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m53619_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m53620_MethodInfo;
static PropertyInfo ICollection_1_t9974____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t9974_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m53620_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t9974_PropertyInfos[] =
{
	&ICollection_1_t9974____Count_PropertyInfo,
	&ICollection_1_t9974____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t386_0_0_0;
extern void* RuntimeInvoker_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m53619_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.LoaderOptimization>::get_Count()
MethodInfo ICollection_1_get_Count_m53619_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t9974_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t386_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t386/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_Count_m53619_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m53620_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.LoaderOptimization>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m53620_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t9974_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t379_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t379/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_IsReadOnly_m53620_GenericMethod/* genericMethod */

};
extern Il2CppType LoaderOptimization_t2378_0_0_0;
extern Il2CppType LoaderOptimization_t2378_0_0_0;
static ParameterInfo ICollection_1_t9974_ICollection_1_Add_m53621_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &LoaderOptimization_t2378_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m53621_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.LoaderOptimization>::Add(T)
MethodInfo ICollection_1_Add_m53621_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t9974_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Int32_t386/* invoker_method */
	, ICollection_1_t9974_ICollection_1_Add_m53621_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m53621_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m53622_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.LoaderOptimization>::Clear()
MethodInfo ICollection_1_Clear_m53622_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t9974_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Clear_m53622_GenericMethod/* genericMethod */

};
extern Il2CppType LoaderOptimization_t2378_0_0_0;
static ParameterInfo ICollection_1_t9974_ICollection_1_Contains_m53623_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &LoaderOptimization_t2378_0_0_0},
};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m53623_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.LoaderOptimization>::Contains(T)
MethodInfo ICollection_1_Contains_m53623_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t9974_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t379_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t379_Int32_t386/* invoker_method */
	, ICollection_1_t9974_ICollection_1_Contains_m53623_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Contains_m53623_GenericMethod/* genericMethod */

};
extern Il2CppType LoaderOptimizationU5BU5D_t5663_0_0_0;
extern Il2CppType LoaderOptimizationU5BU5D_t5663_0_0_0;
extern Il2CppType Int32_t386_0_0_0;
extern Il2CppType Int32_t386_0_0_0;
static ParameterInfo ICollection_1_t9974_ICollection_1_CopyTo_m53624_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &LoaderOptimizationU5BU5D_t5663_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m53624_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.LoaderOptimization>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m53624_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t9974_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t_Int32_t386/* invoker_method */
	, ICollection_1_t9974_ICollection_1_CopyTo_m53624_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_CopyTo_m53624_GenericMethod/* genericMethod */

};
extern Il2CppType LoaderOptimization_t2378_0_0_0;
static ParameterInfo ICollection_1_t9974_ICollection_1_Remove_m53625_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &LoaderOptimization_t2378_0_0_0},
};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m53625_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.LoaderOptimization>::Remove(T)
MethodInfo ICollection_1_Remove_m53625_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t9974_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t379_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t379_Int32_t386/* invoker_method */
	, ICollection_1_t9974_ICollection_1_Remove_m53625_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Remove_m53625_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t9974_MethodInfos[] =
{
	&ICollection_1_get_Count_m53619_MethodInfo,
	&ICollection_1_get_IsReadOnly_m53620_MethodInfo,
	&ICollection_1_Add_m53621_MethodInfo,
	&ICollection_1_Clear_m53622_MethodInfo,
	&ICollection_1_Contains_m53623_MethodInfo,
	&ICollection_1_CopyTo_m53624_MethodInfo,
	&ICollection_1_Remove_m53625_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t55_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t9976_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t9974_InterfacesTypeInfos[] = 
{
	&IEnumerable_t55_il2cpp_TypeInfo,
	&IEnumerable_1_t9976_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t9974_0_0_0;
extern Il2CppType ICollection_1_t9974_1_0_0;
struct ICollection_1_t9974;
extern Il2CppGenericClass ICollection_1_t9974_GenericClass;
TypeInfo ICollection_1_t9974_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t9974_MethodInfos/* methods */
	, ICollection_1_t9974_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t9974_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t9974_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t9974_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t9974_0_0_0/* byval_arg */
	, &ICollection_1_t9974_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t9974_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.LoaderOptimization>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.LoaderOptimization>
extern Il2CppType IEnumerator_1_t7710_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m53626_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.LoaderOptimization>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m53626_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t9976_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t7710_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerable_1_GetEnumerator_m53626_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t9976_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m53626_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t9976_InterfacesTypeInfos[] = 
{
	&IEnumerable_t55_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t9976_0_0_0;
extern Il2CppType IEnumerable_1_t9976_1_0_0;
struct IEnumerable_1_t9976;
extern Il2CppGenericClass IEnumerable_1_t9976_GenericClass;
TypeInfo IEnumerable_1_t9976_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t9976_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t9976_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t9976_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t9976_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t9976_0_0_0/* byval_arg */
	, &IEnumerable_1_t9976_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t9976_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t9975_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.LoaderOptimization>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.LoaderOptimization>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.LoaderOptimization>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.LoaderOptimization>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.LoaderOptimization>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.LoaderOptimization>
extern MethodInfo IList_1_get_Item_m53627_MethodInfo;
extern MethodInfo IList_1_set_Item_m53628_MethodInfo;
static PropertyInfo IList_1_t9975____Item_PropertyInfo = 
{
	&IList_1_t9975_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m53627_MethodInfo/* get */
	, &IList_1_set_Item_m53628_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t9975_PropertyInfos[] =
{
	&IList_1_t9975____Item_PropertyInfo,
	NULL
};
extern Il2CppType LoaderOptimization_t2378_0_0_0;
static ParameterInfo IList_1_t9975_IList_1_IndexOf_m53629_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &LoaderOptimization_t2378_0_0_0},
};
extern Il2CppType Int32_t386_0_0_0;
extern void* RuntimeInvoker_Int32_t386_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m53629_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.LoaderOptimization>::IndexOf(T)
MethodInfo IList_1_IndexOf_m53629_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t9975_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t386_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t386_Int32_t386/* invoker_method */
	, IList_1_t9975_IList_1_IndexOf_m53629_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_IndexOf_m53629_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t386_0_0_0;
extern Il2CppType LoaderOptimization_t2378_0_0_0;
static ParameterInfo IList_1_t9975_IList_1_Insert_m53630_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &LoaderOptimization_t2378_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Int32_t386_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m53630_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.LoaderOptimization>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m53630_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t9975_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Int32_t386_Int32_t386/* invoker_method */
	, IList_1_t9975_IList_1_Insert_m53630_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_Insert_m53630_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t386_0_0_0;
static ParameterInfo IList_1_t9975_IList_1_RemoveAt_m53631_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m53631_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.LoaderOptimization>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m53631_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t9975_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Int32_t386/* invoker_method */
	, IList_1_t9975_IList_1_RemoveAt_m53631_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m53631_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t386_0_0_0;
static ParameterInfo IList_1_t9975_IList_1_get_Item_m53627_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
};
extern Il2CppType LoaderOptimization_t2378_0_0_0;
extern void* RuntimeInvoker_LoaderOptimization_t2378_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m53627_GenericMethod;
// T System.Collections.Generic.IList`1<System.LoaderOptimization>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m53627_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t9975_il2cpp_TypeInfo/* declaring_type */
	, &LoaderOptimization_t2378_0_0_0/* return_type */
	, RuntimeInvoker_LoaderOptimization_t2378_Int32_t386/* invoker_method */
	, IList_1_t9975_IList_1_get_Item_m53627_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_get_Item_m53627_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t386_0_0_0;
extern Il2CppType LoaderOptimization_t2378_0_0_0;
static ParameterInfo IList_1_t9975_IList_1_set_Item_m53628_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &LoaderOptimization_t2378_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Int32_t386_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m53628_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.LoaderOptimization>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m53628_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t9975_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Int32_t386_Int32_t386/* invoker_method */
	, IList_1_t9975_IList_1_set_Item_m53628_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_set_Item_m53628_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t9975_MethodInfos[] =
{
	&IList_1_IndexOf_m53629_MethodInfo,
	&IList_1_Insert_m53630_MethodInfo,
	&IList_1_RemoveAt_m53631_MethodInfo,
	&IList_1_get_Item_m53627_MethodInfo,
	&IList_1_set_Item_m53628_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t9975_InterfacesTypeInfos[] = 
{
	&IEnumerable_t55_il2cpp_TypeInfo,
	&ICollection_1_t9974_il2cpp_TypeInfo,
	&IEnumerable_1_t9976_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t9975_0_0_0;
extern Il2CppType IList_1_t9975_1_0_0;
struct IList_1_t9975;
extern Il2CppGenericClass IList_1_t9975_GenericClass;
extern CustomAttributesCache IList_1_t2638__CustomAttributeCache;
TypeInfo IList_1_t9975_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t9975_MethodInfos/* methods */
	, IList_1_t9975_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t9975_il2cpp_TypeInfo/* element_class */
	, IList_1_t9975_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2638__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t9975_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t9975_0_0_0/* byval_arg */
	, &IList_1_t9975_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t9975_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t7712_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.NonSerializedAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.NonSerializedAttribute>
extern MethodInfo IEnumerator_1_get_Current_m53632_MethodInfo;
static PropertyInfo IEnumerator_1_t7712____Current_PropertyInfo = 
{
	&IEnumerator_1_t7712_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m53632_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t7712_PropertyInfos[] =
{
	&IEnumerator_1_t7712____Current_PropertyInfo,
	NULL
};
extern Il2CppType NonSerializedAttribute_t2392_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m53632_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.NonSerializedAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m53632_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t7712_il2cpp_TypeInfo/* declaring_type */
	, &NonSerializedAttribute_t2392_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m53632_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t7712_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m53632_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t7712_InterfacesTypeInfos[] = 
{
	&IEnumerator_t26_il2cpp_TypeInfo,
	&IDisposable_t444_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t7712_0_0_0;
extern Il2CppType IEnumerator_1_t7712_1_0_0;
struct IEnumerator_1_t7712;
extern Il2CppGenericClass IEnumerator_1_t7712_GenericClass;
TypeInfo IEnumerator_1_t7712_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t7712_MethodInfos/* methods */
	, IEnumerator_1_t7712_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t7712_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t7712_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t7712_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t7712_0_0_0/* byval_arg */
	, &IEnumerator_1_t7712_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t7712_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t5450_il2cpp_TypeInfo;

extern TypeInfo NonSerializedAttribute_t2392_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m31354_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisNonSerializedAttribute_t2392_m41581_MethodInfo;
struct Array_t;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
 Object_t * Array_InternalArray__get_Item_TisObject_t_m31403_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisObject_t_m31403(__this, p0, method) (Object_t *)Array_InternalArray__get_Item_TisObject_t_m31403_gshared((Array_t *)__this, (int32_t)p0, method)
// Declaration !!0 System.Array::InternalArray__get_Item<System.NonSerializedAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.NonSerializedAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisNonSerializedAttribute_t2392_m41581(__this, p0, method) (NonSerializedAttribute_t2392 *)Array_InternalArray__get_Item_TisObject_t_m31403_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.NonSerializedAttribute>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.NonSerializedAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.NonSerializedAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.NonSerializedAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.NonSerializedAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.NonSerializedAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t5450____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t5450_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t5450, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t386_0_0_1;
FieldInfo InternalEnumerator_1_t5450____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t386_0_0_1/* type */
	, &InternalEnumerator_1_t5450_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t5450, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t5450_FieldInfos[] =
{
	&InternalEnumerator_1_t5450____array_0_FieldInfo,
	&InternalEnumerator_1_t5450____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m31351_MethodInfo;
static PropertyInfo InternalEnumerator_1_t5450____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5450_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m31351_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t5450____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5450_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m31354_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t5450_PropertyInfos[] =
{
	&InternalEnumerator_1_t5450____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t5450____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t5450_InternalEnumerator_1__ctor_m31350_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m31350_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.NonSerializedAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m31350_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m13935_gshared/* method */
	, &InternalEnumerator_1_t5450_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t/* invoker_method */
	, InternalEnumerator_1_t5450_InternalEnumerator_1__ctor_m31350_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1__ctor_m31350_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m31351_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.NonSerializedAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m31351_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13937_gshared/* method */
	, &InternalEnumerator_1_t5450_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m31351_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m31352_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.NonSerializedAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m31352_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m13939_gshared/* method */
	, &InternalEnumerator_1_t5450_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_Dispose_m31352_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m31353_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.NonSerializedAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m31353_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m13941_gshared/* method */
	, &InternalEnumerator_1_t5450_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t379_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t379/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_MoveNext_m31353_GenericMethod/* genericMethod */

};
extern Il2CppType NonSerializedAttribute_t2392_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m31354_GenericMethod;
// T System.Array/InternalEnumerator`1<System.NonSerializedAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m31354_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m13943_gshared/* method */
	, &InternalEnumerator_1_t5450_il2cpp_TypeInfo/* declaring_type */
	, &NonSerializedAttribute_t2392_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_get_Current_m31354_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t5450_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m31350_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m31351_MethodInfo,
	&InternalEnumerator_1_Dispose_m31352_MethodInfo,
	&InternalEnumerator_1_MoveNext_m31353_MethodInfo,
	&InternalEnumerator_1_get_Current_m31354_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m31353_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m31352_MethodInfo;
static MethodInfo* InternalEnumerator_1_t5450_VTable[] =
{
	&ValueType_Equals_m2156_MethodInfo,
	&Object_Finalize_m1253_MethodInfo,
	&ValueType_GetHashCode_m2157_MethodInfo,
	&ValueType_ToString_m2158_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m31351_MethodInfo,
	&InternalEnumerator_1_MoveNext_m31353_MethodInfo,
	&InternalEnumerator_1_Dispose_m31352_MethodInfo,
	&InternalEnumerator_1_get_Current_m31354_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t5450_InterfacesTypeInfos[] = 
{
	&IEnumerator_t26_il2cpp_TypeInfo,
	&IDisposable_t444_il2cpp_TypeInfo,
	&IEnumerator_1_t7712_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t5450_InterfacesOffsets[] = 
{
	{ &IEnumerator_t26_il2cpp_TypeInfo, 4},
	{ &IDisposable_t444_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t7712_il2cpp_TypeInfo, 7},
};
extern TypeInfo NonSerializedAttribute_t2392_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t5450_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m31354_MethodInfo/* Method Usage */,
	&NonSerializedAttribute_t2392_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisNonSerializedAttribute_t2392_m41581_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t5450_0_0_0;
extern Il2CppType InternalEnumerator_1_t5450_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t5450_GenericClass;
TypeInfo InternalEnumerator_1_t5450_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t5450_MethodInfos/* methods */
	, InternalEnumerator_1_t5450_PropertyInfos/* properties */
	, InternalEnumerator_1_t5450_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t550_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t5450_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t5450_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t5450_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t5450_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t5450_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t5450_1_0_0/* this_arg */
	, InternalEnumerator_1_t5450_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t5450_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t5450_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t5450)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t9977_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.NonSerializedAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.NonSerializedAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.NonSerializedAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.NonSerializedAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.NonSerializedAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.NonSerializedAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.NonSerializedAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.NonSerializedAttribute>
extern MethodInfo ICollection_1_get_Count_m53633_MethodInfo;
static PropertyInfo ICollection_1_t9977____Count_PropertyInfo = 
{
	&ICollection_1_t9977_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m53633_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m53634_MethodInfo;
static PropertyInfo ICollection_1_t9977____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t9977_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m53634_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t9977_PropertyInfos[] =
{
	&ICollection_1_t9977____Count_PropertyInfo,
	&ICollection_1_t9977____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t386_0_0_0;
extern void* RuntimeInvoker_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m53633_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.NonSerializedAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m53633_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t9977_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t386_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t386/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_Count_m53633_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m53634_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.NonSerializedAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m53634_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t9977_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t379_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t379/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_IsReadOnly_m53634_GenericMethod/* genericMethod */

};
extern Il2CppType NonSerializedAttribute_t2392_0_0_0;
extern Il2CppType NonSerializedAttribute_t2392_0_0_0;
static ParameterInfo ICollection_1_t9977_ICollection_1_Add_m53635_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &NonSerializedAttribute_t2392_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m53635_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.NonSerializedAttribute>::Add(T)
MethodInfo ICollection_1_Add_m53635_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t9977_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t/* invoker_method */
	, ICollection_1_t9977_ICollection_1_Add_m53635_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m53635_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m53636_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.NonSerializedAttribute>::Clear()
MethodInfo ICollection_1_Clear_m53636_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t9977_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Clear_m53636_GenericMethod/* genericMethod */

};
extern Il2CppType NonSerializedAttribute_t2392_0_0_0;
static ParameterInfo ICollection_1_t9977_ICollection_1_Contains_m53637_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &NonSerializedAttribute_t2392_0_0_0},
};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m53637_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.NonSerializedAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m53637_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t9977_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t379_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t379_Object_t/* invoker_method */
	, ICollection_1_t9977_ICollection_1_Contains_m53637_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Contains_m53637_GenericMethod/* genericMethod */

};
extern Il2CppType NonSerializedAttributeU5BU5D_t5664_0_0_0;
extern Il2CppType NonSerializedAttributeU5BU5D_t5664_0_0_0;
extern Il2CppType Int32_t386_0_0_0;
static ParameterInfo ICollection_1_t9977_ICollection_1_CopyTo_m53638_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &NonSerializedAttributeU5BU5D_t5664_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m53638_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.NonSerializedAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m53638_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t9977_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t_Int32_t386/* invoker_method */
	, ICollection_1_t9977_ICollection_1_CopyTo_m53638_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_CopyTo_m53638_GenericMethod/* genericMethod */

};
extern Il2CppType NonSerializedAttribute_t2392_0_0_0;
static ParameterInfo ICollection_1_t9977_ICollection_1_Remove_m53639_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &NonSerializedAttribute_t2392_0_0_0},
};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m53639_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.NonSerializedAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m53639_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t9977_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t379_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t379_Object_t/* invoker_method */
	, ICollection_1_t9977_ICollection_1_Remove_m53639_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Remove_m53639_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t9977_MethodInfos[] =
{
	&ICollection_1_get_Count_m53633_MethodInfo,
	&ICollection_1_get_IsReadOnly_m53634_MethodInfo,
	&ICollection_1_Add_m53635_MethodInfo,
	&ICollection_1_Clear_m53636_MethodInfo,
	&ICollection_1_Contains_m53637_MethodInfo,
	&ICollection_1_CopyTo_m53638_MethodInfo,
	&ICollection_1_Remove_m53639_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t9979_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t9977_InterfacesTypeInfos[] = 
{
	&IEnumerable_t55_il2cpp_TypeInfo,
	&IEnumerable_1_t9979_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t9977_0_0_0;
extern Il2CppType ICollection_1_t9977_1_0_0;
struct ICollection_1_t9977;
extern Il2CppGenericClass ICollection_1_t9977_GenericClass;
TypeInfo ICollection_1_t9977_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t9977_MethodInfos/* methods */
	, ICollection_1_t9977_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t9977_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t9977_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t9977_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t9977_0_0_0/* byval_arg */
	, &ICollection_1_t9977_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t9977_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.NonSerializedAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.NonSerializedAttribute>
extern Il2CppType IEnumerator_1_t7712_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m53640_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.NonSerializedAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m53640_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t9979_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t7712_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerable_1_GetEnumerator_m53640_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t9979_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m53640_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t9979_InterfacesTypeInfos[] = 
{
	&IEnumerable_t55_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t9979_0_0_0;
extern Il2CppType IEnumerable_1_t9979_1_0_0;
struct IEnumerable_1_t9979;
extern Il2CppGenericClass IEnumerable_1_t9979_GenericClass;
TypeInfo IEnumerable_1_t9979_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t9979_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t9979_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t9979_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t9979_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t9979_0_0_0/* byval_arg */
	, &IEnumerable_1_t9979_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t9979_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t9978_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.NonSerializedAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.NonSerializedAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.NonSerializedAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.NonSerializedAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.NonSerializedAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.NonSerializedAttribute>
extern MethodInfo IList_1_get_Item_m53641_MethodInfo;
extern MethodInfo IList_1_set_Item_m53642_MethodInfo;
static PropertyInfo IList_1_t9978____Item_PropertyInfo = 
{
	&IList_1_t9978_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m53641_MethodInfo/* get */
	, &IList_1_set_Item_m53642_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t9978_PropertyInfos[] =
{
	&IList_1_t9978____Item_PropertyInfo,
	NULL
};
extern Il2CppType NonSerializedAttribute_t2392_0_0_0;
static ParameterInfo IList_1_t9978_IList_1_IndexOf_m53643_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &NonSerializedAttribute_t2392_0_0_0},
};
extern Il2CppType Int32_t386_0_0_0;
extern void* RuntimeInvoker_Int32_t386_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m53643_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.NonSerializedAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m53643_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t9978_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t386_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t386_Object_t/* invoker_method */
	, IList_1_t9978_IList_1_IndexOf_m53643_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_IndexOf_m53643_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t386_0_0_0;
extern Il2CppType NonSerializedAttribute_t2392_0_0_0;
static ParameterInfo IList_1_t9978_IList_1_Insert_m53644_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &NonSerializedAttribute_t2392_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Int32_t386_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m53644_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.NonSerializedAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m53644_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t9978_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Int32_t386_Object_t/* invoker_method */
	, IList_1_t9978_IList_1_Insert_m53644_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_Insert_m53644_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t386_0_0_0;
static ParameterInfo IList_1_t9978_IList_1_RemoveAt_m53645_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m53645_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.NonSerializedAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m53645_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t9978_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Int32_t386/* invoker_method */
	, IList_1_t9978_IList_1_RemoveAt_m53645_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m53645_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t386_0_0_0;
static ParameterInfo IList_1_t9978_IList_1_get_Item_m53641_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
};
extern Il2CppType NonSerializedAttribute_t2392_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m53641_GenericMethod;
// T System.Collections.Generic.IList`1<System.NonSerializedAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m53641_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t9978_il2cpp_TypeInfo/* declaring_type */
	, &NonSerializedAttribute_t2392_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t386/* invoker_method */
	, IList_1_t9978_IList_1_get_Item_m53641_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_get_Item_m53641_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t386_0_0_0;
extern Il2CppType NonSerializedAttribute_t2392_0_0_0;
static ParameterInfo IList_1_t9978_IList_1_set_Item_m53642_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &NonSerializedAttribute_t2392_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Int32_t386_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m53642_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.NonSerializedAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m53642_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t9978_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Int32_t386_Object_t/* invoker_method */
	, IList_1_t9978_IList_1_set_Item_m53642_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_set_Item_m53642_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t9978_MethodInfos[] =
{
	&IList_1_IndexOf_m53643_MethodInfo,
	&IList_1_Insert_m53644_MethodInfo,
	&IList_1_RemoveAt_m53645_MethodInfo,
	&IList_1_get_Item_m53641_MethodInfo,
	&IList_1_set_Item_m53642_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t9978_InterfacesTypeInfos[] = 
{
	&IEnumerable_t55_il2cpp_TypeInfo,
	&ICollection_1_t9977_il2cpp_TypeInfo,
	&IEnumerable_1_t9979_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t9978_0_0_0;
extern Il2CppType IList_1_t9978_1_0_0;
struct IList_1_t9978;
extern Il2CppGenericClass IList_1_t9978_GenericClass;
extern CustomAttributesCache IList_1_t2638__CustomAttributeCache;
TypeInfo IList_1_t9978_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t9978_MethodInfos/* methods */
	, IList_1_t9978_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t9978_il2cpp_TypeInfo/* element_class */
	, IList_1_t9978_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2638__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t9978_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t9978_0_0_0/* byval_arg */
	, &IList_1_t9978_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t9978_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t7714_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.PlatformID>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.PlatformID>
extern MethodInfo IEnumerator_1_get_Current_m53646_MethodInfo;
static PropertyInfo IEnumerator_1_t7714____Current_PropertyInfo = 
{
	&IEnumerator_1_t7714_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m53646_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t7714_PropertyInfos[] =
{
	&IEnumerator_1_t7714____Current_PropertyInfo,
	NULL
};
extern Il2CppType PlatformID_t2397_0_0_0;
extern void* RuntimeInvoker_PlatformID_t2397 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m53646_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.PlatformID>::get_Current()
MethodInfo IEnumerator_1_get_Current_m53646_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t7714_il2cpp_TypeInfo/* declaring_type */
	, &PlatformID_t2397_0_0_0/* return_type */
	, RuntimeInvoker_PlatformID_t2397/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m53646_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t7714_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m53646_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t7714_InterfacesTypeInfos[] = 
{
	&IEnumerator_t26_il2cpp_TypeInfo,
	&IDisposable_t444_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t7714_0_0_0;
extern Il2CppType IEnumerator_1_t7714_1_0_0;
struct IEnumerator_1_t7714;
extern Il2CppGenericClass IEnumerator_1_t7714_GenericClass;
TypeInfo IEnumerator_1_t7714_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t7714_MethodInfos/* methods */
	, IEnumerator_1_t7714_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t7714_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t7714_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t7714_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t7714_0_0_0/* byval_arg */
	, &IEnumerator_1_t7714_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t7714_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t5451_il2cpp_TypeInfo;

extern TypeInfo PlatformID_t2397_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m31359_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisPlatformID_t2397_m41592_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.PlatformID>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.PlatformID>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisPlatformID_t2397_m41592 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.PlatformID>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m31355_MethodInfo;
 void InternalEnumerator_1__ctor_m31355 (InternalEnumerator_1_t5451 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.PlatformID>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m31356_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m31356 (InternalEnumerator_1_t5451 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m31359(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m31359_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&PlatformID_t2397_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.PlatformID>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m31357_MethodInfo;
 void InternalEnumerator_1_Dispose_m31357 (InternalEnumerator_1_t5451 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.PlatformID>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m31358_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m31358 (InternalEnumerator_1_t5451 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (__this->___array_0);
		NullCheck(L_1);
		int32_t L_2 = Array_get_Length_m7572(L_1, /*hidden argument*/&Array_get_Length_m7572_MethodInfo);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->___idx_1);
		int32_t L_5 = ((int32_t)(L_4-1));
		V_0 = L_5;
		__this->___idx_1 = L_5;
		G_B5_0 = ((((int32_t)((((int32_t)V_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.PlatformID>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m31359 (InternalEnumerator_1_t5451 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t1657 * L_1 = (InvalidOperationException_t1657 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1657_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m7566(L_1, (String_t*) &_stringLiteral1838, /*hidden argument*/&InvalidOperationException__ctor_m7566_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->___idx_1);
		if ((((uint32_t)L_2) != ((uint32_t)(-1))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t1657 * L_3 = (InvalidOperationException_t1657 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1657_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m7566(L_3, (String_t*) &_stringLiteral1839, /*hidden argument*/&InvalidOperationException__ctor_m7566_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array_0);
		Array_t * L_5 = (__this->___array_0);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m7572(L_5, /*hidden argument*/&Array_get_Length_m7572_MethodInfo);
		int32_t L_7 = (__this->___idx_1);
		NullCheck(L_4);
		int32_t L_8 = Array_InternalArray__get_Item_TisPlatformID_t2397_m41592(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisPlatformID_t2397_m41592_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.PlatformID>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t5451____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t5451_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t5451, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t386_0_0_1;
FieldInfo InternalEnumerator_1_t5451____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t386_0_0_1/* type */
	, &InternalEnumerator_1_t5451_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t5451, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t5451_FieldInfos[] =
{
	&InternalEnumerator_1_t5451____array_0_FieldInfo,
	&InternalEnumerator_1_t5451____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t5451____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5451_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m31356_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t5451____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5451_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m31359_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t5451_PropertyInfos[] =
{
	&InternalEnumerator_1_t5451____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t5451____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t5451_InternalEnumerator_1__ctor_m31355_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m31355_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.PlatformID>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m31355_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m31355/* method */
	, &InternalEnumerator_1_t5451_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t/* invoker_method */
	, InternalEnumerator_1_t5451_InternalEnumerator_1__ctor_m31355_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1__ctor_m31355_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m31356_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.PlatformID>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m31356_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m31356/* method */
	, &InternalEnumerator_1_t5451_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m31356_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m31357_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.PlatformID>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m31357_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m31357/* method */
	, &InternalEnumerator_1_t5451_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_Dispose_m31357_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m31358_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.PlatformID>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m31358_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m31358/* method */
	, &InternalEnumerator_1_t5451_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t379_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t379/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_MoveNext_m31358_GenericMethod/* genericMethod */

};
extern Il2CppType PlatformID_t2397_0_0_0;
extern void* RuntimeInvoker_PlatformID_t2397 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m31359_GenericMethod;
// T System.Array/InternalEnumerator`1<System.PlatformID>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m31359_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m31359/* method */
	, &InternalEnumerator_1_t5451_il2cpp_TypeInfo/* declaring_type */
	, &PlatformID_t2397_0_0_0/* return_type */
	, RuntimeInvoker_PlatformID_t2397/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_get_Current_m31359_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t5451_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m31355_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m31356_MethodInfo,
	&InternalEnumerator_1_Dispose_m31357_MethodInfo,
	&InternalEnumerator_1_MoveNext_m31358_MethodInfo,
	&InternalEnumerator_1_get_Current_m31359_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t5451_VTable[] =
{
	&ValueType_Equals_m2156_MethodInfo,
	&Object_Finalize_m1253_MethodInfo,
	&ValueType_GetHashCode_m2157_MethodInfo,
	&ValueType_ToString_m2158_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m31356_MethodInfo,
	&InternalEnumerator_1_MoveNext_m31358_MethodInfo,
	&InternalEnumerator_1_Dispose_m31357_MethodInfo,
	&InternalEnumerator_1_get_Current_m31359_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t5451_InterfacesTypeInfos[] = 
{
	&IEnumerator_t26_il2cpp_TypeInfo,
	&IDisposable_t444_il2cpp_TypeInfo,
	&IEnumerator_1_t7714_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t5451_InterfacesOffsets[] = 
{
	{ &IEnumerator_t26_il2cpp_TypeInfo, 4},
	{ &IDisposable_t444_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t7714_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t5451_0_0_0;
extern Il2CppType InternalEnumerator_1_t5451_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t5451_GenericClass;
TypeInfo InternalEnumerator_1_t5451_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t5451_MethodInfos/* methods */
	, InternalEnumerator_1_t5451_PropertyInfos/* properties */
	, InternalEnumerator_1_t5451_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t550_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t5451_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t5451_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t5451_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t5451_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t5451_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t5451_1_0_0/* this_arg */
	, InternalEnumerator_1_t5451_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t5451_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t5451)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t9980_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.PlatformID>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.PlatformID>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.PlatformID>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.PlatformID>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.PlatformID>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.PlatformID>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.PlatformID>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.PlatformID>
extern MethodInfo ICollection_1_get_Count_m53647_MethodInfo;
static PropertyInfo ICollection_1_t9980____Count_PropertyInfo = 
{
	&ICollection_1_t9980_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m53647_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m53648_MethodInfo;
static PropertyInfo ICollection_1_t9980____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t9980_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m53648_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t9980_PropertyInfos[] =
{
	&ICollection_1_t9980____Count_PropertyInfo,
	&ICollection_1_t9980____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t386_0_0_0;
extern void* RuntimeInvoker_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m53647_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.PlatformID>::get_Count()
MethodInfo ICollection_1_get_Count_m53647_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t9980_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t386_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t386/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_Count_m53647_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m53648_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.PlatformID>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m53648_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t9980_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t379_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t379/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_IsReadOnly_m53648_GenericMethod/* genericMethod */

};
extern Il2CppType PlatformID_t2397_0_0_0;
extern Il2CppType PlatformID_t2397_0_0_0;
static ParameterInfo ICollection_1_t9980_ICollection_1_Add_m53649_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &PlatformID_t2397_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m53649_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.PlatformID>::Add(T)
MethodInfo ICollection_1_Add_m53649_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t9980_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Int32_t386/* invoker_method */
	, ICollection_1_t9980_ICollection_1_Add_m53649_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m53649_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m53650_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.PlatformID>::Clear()
MethodInfo ICollection_1_Clear_m53650_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t9980_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Clear_m53650_GenericMethod/* genericMethod */

};
extern Il2CppType PlatformID_t2397_0_0_0;
static ParameterInfo ICollection_1_t9980_ICollection_1_Contains_m53651_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &PlatformID_t2397_0_0_0},
};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m53651_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.PlatformID>::Contains(T)
MethodInfo ICollection_1_Contains_m53651_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t9980_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t379_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t379_Int32_t386/* invoker_method */
	, ICollection_1_t9980_ICollection_1_Contains_m53651_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Contains_m53651_GenericMethod/* genericMethod */

};
extern Il2CppType PlatformIDU5BU5D_t5665_0_0_0;
extern Il2CppType PlatformIDU5BU5D_t5665_0_0_0;
extern Il2CppType Int32_t386_0_0_0;
static ParameterInfo ICollection_1_t9980_ICollection_1_CopyTo_m53652_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &PlatformIDU5BU5D_t5665_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m53652_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.PlatformID>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m53652_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t9980_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t_Int32_t386/* invoker_method */
	, ICollection_1_t9980_ICollection_1_CopyTo_m53652_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_CopyTo_m53652_GenericMethod/* genericMethod */

};
extern Il2CppType PlatformID_t2397_0_0_0;
static ParameterInfo ICollection_1_t9980_ICollection_1_Remove_m53653_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &PlatformID_t2397_0_0_0},
};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m53653_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.PlatformID>::Remove(T)
MethodInfo ICollection_1_Remove_m53653_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t9980_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t379_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t379_Int32_t386/* invoker_method */
	, ICollection_1_t9980_ICollection_1_Remove_m53653_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Remove_m53653_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t9980_MethodInfos[] =
{
	&ICollection_1_get_Count_m53647_MethodInfo,
	&ICollection_1_get_IsReadOnly_m53648_MethodInfo,
	&ICollection_1_Add_m53649_MethodInfo,
	&ICollection_1_Clear_m53650_MethodInfo,
	&ICollection_1_Contains_m53651_MethodInfo,
	&ICollection_1_CopyTo_m53652_MethodInfo,
	&ICollection_1_Remove_m53653_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t9982_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t9980_InterfacesTypeInfos[] = 
{
	&IEnumerable_t55_il2cpp_TypeInfo,
	&IEnumerable_1_t9982_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t9980_0_0_0;
extern Il2CppType ICollection_1_t9980_1_0_0;
struct ICollection_1_t9980;
extern Il2CppGenericClass ICollection_1_t9980_GenericClass;
TypeInfo ICollection_1_t9980_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t9980_MethodInfos/* methods */
	, ICollection_1_t9980_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t9980_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t9980_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t9980_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t9980_0_0_0/* byval_arg */
	, &ICollection_1_t9980_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t9980_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.PlatformID>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.PlatformID>
extern Il2CppType IEnumerator_1_t7714_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m53654_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.PlatformID>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m53654_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t9982_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t7714_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerable_1_GetEnumerator_m53654_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t9982_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m53654_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t9982_InterfacesTypeInfos[] = 
{
	&IEnumerable_t55_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t9982_0_0_0;
extern Il2CppType IEnumerable_1_t9982_1_0_0;
struct IEnumerable_1_t9982;
extern Il2CppGenericClass IEnumerable_1_t9982_GenericClass;
TypeInfo IEnumerable_1_t9982_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t9982_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t9982_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t9982_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t9982_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t9982_0_0_0/* byval_arg */
	, &IEnumerable_1_t9982_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t9982_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t9981_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.PlatformID>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.PlatformID>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.PlatformID>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.PlatformID>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.PlatformID>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.PlatformID>
extern MethodInfo IList_1_get_Item_m53655_MethodInfo;
extern MethodInfo IList_1_set_Item_m53656_MethodInfo;
static PropertyInfo IList_1_t9981____Item_PropertyInfo = 
{
	&IList_1_t9981_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m53655_MethodInfo/* get */
	, &IList_1_set_Item_m53656_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t9981_PropertyInfos[] =
{
	&IList_1_t9981____Item_PropertyInfo,
	NULL
};
extern Il2CppType PlatformID_t2397_0_0_0;
static ParameterInfo IList_1_t9981_IList_1_IndexOf_m53657_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &PlatformID_t2397_0_0_0},
};
extern Il2CppType Int32_t386_0_0_0;
extern void* RuntimeInvoker_Int32_t386_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m53657_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.PlatformID>::IndexOf(T)
MethodInfo IList_1_IndexOf_m53657_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t9981_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t386_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t386_Int32_t386/* invoker_method */
	, IList_1_t9981_IList_1_IndexOf_m53657_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_IndexOf_m53657_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t386_0_0_0;
extern Il2CppType PlatformID_t2397_0_0_0;
static ParameterInfo IList_1_t9981_IList_1_Insert_m53658_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &PlatformID_t2397_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Int32_t386_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m53658_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.PlatformID>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m53658_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t9981_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Int32_t386_Int32_t386/* invoker_method */
	, IList_1_t9981_IList_1_Insert_m53658_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_Insert_m53658_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t386_0_0_0;
static ParameterInfo IList_1_t9981_IList_1_RemoveAt_m53659_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m53659_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.PlatformID>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m53659_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t9981_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Int32_t386/* invoker_method */
	, IList_1_t9981_IList_1_RemoveAt_m53659_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m53659_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t386_0_0_0;
static ParameterInfo IList_1_t9981_IList_1_get_Item_m53655_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
};
extern Il2CppType PlatformID_t2397_0_0_0;
extern void* RuntimeInvoker_PlatformID_t2397_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m53655_GenericMethod;
// T System.Collections.Generic.IList`1<System.PlatformID>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m53655_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t9981_il2cpp_TypeInfo/* declaring_type */
	, &PlatformID_t2397_0_0_0/* return_type */
	, RuntimeInvoker_PlatformID_t2397_Int32_t386/* invoker_method */
	, IList_1_t9981_IList_1_get_Item_m53655_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_get_Item_m53655_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t386_0_0_0;
extern Il2CppType PlatformID_t2397_0_0_0;
static ParameterInfo IList_1_t9981_IList_1_set_Item_m53656_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &PlatformID_t2397_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Int32_t386_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m53656_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.PlatformID>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m53656_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t9981_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Int32_t386_Int32_t386/* invoker_method */
	, IList_1_t9981_IList_1_set_Item_m53656_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_set_Item_m53656_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t9981_MethodInfos[] =
{
	&IList_1_IndexOf_m53657_MethodInfo,
	&IList_1_Insert_m53658_MethodInfo,
	&IList_1_RemoveAt_m53659_MethodInfo,
	&IList_1_get_Item_m53655_MethodInfo,
	&IList_1_set_Item_m53656_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t9981_InterfacesTypeInfos[] = 
{
	&IEnumerable_t55_il2cpp_TypeInfo,
	&ICollection_1_t9980_il2cpp_TypeInfo,
	&IEnumerable_1_t9982_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t9981_0_0_0;
extern Il2CppType IList_1_t9981_1_0_0;
struct IList_1_t9981;
extern Il2CppGenericClass IList_1_t9981_GenericClass;
extern CustomAttributesCache IList_1_t2638__CustomAttributeCache;
TypeInfo IList_1_t9981_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t9981_MethodInfos/* methods */
	, IList_1_t9981_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t9981_il2cpp_TypeInfo/* element_class */
	, IList_1_t9981_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2638__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t9981_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t9981_0_0_0/* byval_arg */
	, &IList_1_t9981_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t9981_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t7716_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.StringComparison>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.StringComparison>
extern MethodInfo IEnumerator_1_get_Current_m53660_MethodInfo;
static PropertyInfo IEnumerator_1_t7716____Current_PropertyInfo = 
{
	&IEnumerator_1_t7716_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m53660_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t7716_PropertyInfos[] =
{
	&IEnumerator_1_t7716____Current_PropertyInfo,
	NULL
};
extern Il2CppType StringComparison_t2402_0_0_0;
extern void* RuntimeInvoker_StringComparison_t2402 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m53660_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.StringComparison>::get_Current()
MethodInfo IEnumerator_1_get_Current_m53660_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t7716_il2cpp_TypeInfo/* declaring_type */
	, &StringComparison_t2402_0_0_0/* return_type */
	, RuntimeInvoker_StringComparison_t2402/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m53660_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t7716_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m53660_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t7716_InterfacesTypeInfos[] = 
{
	&IEnumerator_t26_il2cpp_TypeInfo,
	&IDisposable_t444_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t7716_0_0_0;
extern Il2CppType IEnumerator_1_t7716_1_0_0;
struct IEnumerator_1_t7716;
extern Il2CppGenericClass IEnumerator_1_t7716_GenericClass;
TypeInfo IEnumerator_1_t7716_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t7716_MethodInfos/* methods */
	, IEnumerator_1_t7716_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t7716_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t7716_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t7716_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t7716_0_0_0/* byval_arg */
	, &IEnumerator_1_t7716_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t7716_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t5452_il2cpp_TypeInfo;

extern TypeInfo StringComparison_t2402_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m31364_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisStringComparison_t2402_m41603_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.StringComparison>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.StringComparison>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisStringComparison_t2402_m41603 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.StringComparison>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m31360_MethodInfo;
 void InternalEnumerator_1__ctor_m31360 (InternalEnumerator_1_t5452 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.StringComparison>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m31361_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m31361 (InternalEnumerator_1_t5452 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m31364(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m31364_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&StringComparison_t2402_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.StringComparison>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m31362_MethodInfo;
 void InternalEnumerator_1_Dispose_m31362 (InternalEnumerator_1_t5452 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.StringComparison>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m31363_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m31363 (InternalEnumerator_1_t5452 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (__this->___array_0);
		NullCheck(L_1);
		int32_t L_2 = Array_get_Length_m7572(L_1, /*hidden argument*/&Array_get_Length_m7572_MethodInfo);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->___idx_1);
		int32_t L_5 = ((int32_t)(L_4-1));
		V_0 = L_5;
		__this->___idx_1 = L_5;
		G_B5_0 = ((((int32_t)((((int32_t)V_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.StringComparison>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m31364 (InternalEnumerator_1_t5452 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t1657 * L_1 = (InvalidOperationException_t1657 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1657_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m7566(L_1, (String_t*) &_stringLiteral1838, /*hidden argument*/&InvalidOperationException__ctor_m7566_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->___idx_1);
		if ((((uint32_t)L_2) != ((uint32_t)(-1))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t1657 * L_3 = (InvalidOperationException_t1657 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1657_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m7566(L_3, (String_t*) &_stringLiteral1839, /*hidden argument*/&InvalidOperationException__ctor_m7566_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array_0);
		Array_t * L_5 = (__this->___array_0);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m7572(L_5, /*hidden argument*/&Array_get_Length_m7572_MethodInfo);
		int32_t L_7 = (__this->___idx_1);
		NullCheck(L_4);
		int32_t L_8 = Array_InternalArray__get_Item_TisStringComparison_t2402_m41603(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisStringComparison_t2402_m41603_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.StringComparison>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t5452____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t5452_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t5452, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t386_0_0_1;
FieldInfo InternalEnumerator_1_t5452____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t386_0_0_1/* type */
	, &InternalEnumerator_1_t5452_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t5452, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t5452_FieldInfos[] =
{
	&InternalEnumerator_1_t5452____array_0_FieldInfo,
	&InternalEnumerator_1_t5452____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t5452____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5452_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m31361_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t5452____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5452_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m31364_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t5452_PropertyInfos[] =
{
	&InternalEnumerator_1_t5452____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t5452____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t5452_InternalEnumerator_1__ctor_m31360_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m31360_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.StringComparison>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m31360_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m31360/* method */
	, &InternalEnumerator_1_t5452_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t/* invoker_method */
	, InternalEnumerator_1_t5452_InternalEnumerator_1__ctor_m31360_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1__ctor_m31360_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m31361_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.StringComparison>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m31361_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m31361/* method */
	, &InternalEnumerator_1_t5452_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m31361_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m31362_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.StringComparison>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m31362_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m31362/* method */
	, &InternalEnumerator_1_t5452_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_Dispose_m31362_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m31363_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.StringComparison>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m31363_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m31363/* method */
	, &InternalEnumerator_1_t5452_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t379_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t379/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_MoveNext_m31363_GenericMethod/* genericMethod */

};
extern Il2CppType StringComparison_t2402_0_0_0;
extern void* RuntimeInvoker_StringComparison_t2402 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m31364_GenericMethod;
// T System.Array/InternalEnumerator`1<System.StringComparison>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m31364_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m31364/* method */
	, &InternalEnumerator_1_t5452_il2cpp_TypeInfo/* declaring_type */
	, &StringComparison_t2402_0_0_0/* return_type */
	, RuntimeInvoker_StringComparison_t2402/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_get_Current_m31364_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t5452_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m31360_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m31361_MethodInfo,
	&InternalEnumerator_1_Dispose_m31362_MethodInfo,
	&InternalEnumerator_1_MoveNext_m31363_MethodInfo,
	&InternalEnumerator_1_get_Current_m31364_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t5452_VTable[] =
{
	&ValueType_Equals_m2156_MethodInfo,
	&Object_Finalize_m1253_MethodInfo,
	&ValueType_GetHashCode_m2157_MethodInfo,
	&ValueType_ToString_m2158_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m31361_MethodInfo,
	&InternalEnumerator_1_MoveNext_m31363_MethodInfo,
	&InternalEnumerator_1_Dispose_m31362_MethodInfo,
	&InternalEnumerator_1_get_Current_m31364_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t5452_InterfacesTypeInfos[] = 
{
	&IEnumerator_t26_il2cpp_TypeInfo,
	&IDisposable_t444_il2cpp_TypeInfo,
	&IEnumerator_1_t7716_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t5452_InterfacesOffsets[] = 
{
	{ &IEnumerator_t26_il2cpp_TypeInfo, 4},
	{ &IDisposable_t444_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t7716_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t5452_0_0_0;
extern Il2CppType InternalEnumerator_1_t5452_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t5452_GenericClass;
TypeInfo InternalEnumerator_1_t5452_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t5452_MethodInfos/* methods */
	, InternalEnumerator_1_t5452_PropertyInfos/* properties */
	, InternalEnumerator_1_t5452_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t550_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t5452_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t5452_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t5452_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t5452_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t5452_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t5452_1_0_0/* this_arg */
	, InternalEnumerator_1_t5452_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t5452_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t5452)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t9983_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.StringComparison>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.StringComparison>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.StringComparison>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.StringComparison>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.StringComparison>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.StringComparison>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.StringComparison>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.StringComparison>
extern MethodInfo ICollection_1_get_Count_m53661_MethodInfo;
static PropertyInfo ICollection_1_t9983____Count_PropertyInfo = 
{
	&ICollection_1_t9983_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m53661_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m53662_MethodInfo;
static PropertyInfo ICollection_1_t9983____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t9983_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m53662_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t9983_PropertyInfos[] =
{
	&ICollection_1_t9983____Count_PropertyInfo,
	&ICollection_1_t9983____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t386_0_0_0;
extern void* RuntimeInvoker_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m53661_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.StringComparison>::get_Count()
MethodInfo ICollection_1_get_Count_m53661_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t9983_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t386_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t386/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_Count_m53661_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m53662_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.StringComparison>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m53662_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t9983_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t379_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t379/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_IsReadOnly_m53662_GenericMethod/* genericMethod */

};
extern Il2CppType StringComparison_t2402_0_0_0;
extern Il2CppType StringComparison_t2402_0_0_0;
static ParameterInfo ICollection_1_t9983_ICollection_1_Add_m53663_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &StringComparison_t2402_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m53663_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.StringComparison>::Add(T)
MethodInfo ICollection_1_Add_m53663_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t9983_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Int32_t386/* invoker_method */
	, ICollection_1_t9983_ICollection_1_Add_m53663_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m53663_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m53664_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.StringComparison>::Clear()
MethodInfo ICollection_1_Clear_m53664_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t9983_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Clear_m53664_GenericMethod/* genericMethod */

};
extern Il2CppType StringComparison_t2402_0_0_0;
static ParameterInfo ICollection_1_t9983_ICollection_1_Contains_m53665_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &StringComparison_t2402_0_0_0},
};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m53665_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.StringComparison>::Contains(T)
MethodInfo ICollection_1_Contains_m53665_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t9983_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t379_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t379_Int32_t386/* invoker_method */
	, ICollection_1_t9983_ICollection_1_Contains_m53665_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Contains_m53665_GenericMethod/* genericMethod */

};
extern Il2CppType StringComparisonU5BU5D_t5666_0_0_0;
extern Il2CppType StringComparisonU5BU5D_t5666_0_0_0;
extern Il2CppType Int32_t386_0_0_0;
static ParameterInfo ICollection_1_t9983_ICollection_1_CopyTo_m53666_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &StringComparisonU5BU5D_t5666_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m53666_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.StringComparison>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m53666_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t9983_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t_Int32_t386/* invoker_method */
	, ICollection_1_t9983_ICollection_1_CopyTo_m53666_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_CopyTo_m53666_GenericMethod/* genericMethod */

};
extern Il2CppType StringComparison_t2402_0_0_0;
static ParameterInfo ICollection_1_t9983_ICollection_1_Remove_m53667_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &StringComparison_t2402_0_0_0},
};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m53667_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.StringComparison>::Remove(T)
MethodInfo ICollection_1_Remove_m53667_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t9983_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t379_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t379_Int32_t386/* invoker_method */
	, ICollection_1_t9983_ICollection_1_Remove_m53667_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Remove_m53667_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t9983_MethodInfos[] =
{
	&ICollection_1_get_Count_m53661_MethodInfo,
	&ICollection_1_get_IsReadOnly_m53662_MethodInfo,
	&ICollection_1_Add_m53663_MethodInfo,
	&ICollection_1_Clear_m53664_MethodInfo,
	&ICollection_1_Contains_m53665_MethodInfo,
	&ICollection_1_CopyTo_m53666_MethodInfo,
	&ICollection_1_Remove_m53667_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t9985_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t9983_InterfacesTypeInfos[] = 
{
	&IEnumerable_t55_il2cpp_TypeInfo,
	&IEnumerable_1_t9985_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t9983_0_0_0;
extern Il2CppType ICollection_1_t9983_1_0_0;
struct ICollection_1_t9983;
extern Il2CppGenericClass ICollection_1_t9983_GenericClass;
TypeInfo ICollection_1_t9983_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t9983_MethodInfos/* methods */
	, ICollection_1_t9983_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t9983_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t9983_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t9983_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t9983_0_0_0/* byval_arg */
	, &ICollection_1_t9983_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t9983_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.StringComparison>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.StringComparison>
extern Il2CppType IEnumerator_1_t7716_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m53668_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.StringComparison>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m53668_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t9985_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t7716_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerable_1_GetEnumerator_m53668_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t9985_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m53668_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t9985_InterfacesTypeInfos[] = 
{
	&IEnumerable_t55_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t9985_0_0_0;
extern Il2CppType IEnumerable_1_t9985_1_0_0;
struct IEnumerable_1_t9985;
extern Il2CppGenericClass IEnumerable_1_t9985_GenericClass;
TypeInfo IEnumerable_1_t9985_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t9985_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t9985_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t9985_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t9985_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t9985_0_0_0/* byval_arg */
	, &IEnumerable_1_t9985_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t9985_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t9984_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.StringComparison>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.StringComparison>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.StringComparison>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.StringComparison>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.StringComparison>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.StringComparison>
extern MethodInfo IList_1_get_Item_m53669_MethodInfo;
extern MethodInfo IList_1_set_Item_m53670_MethodInfo;
static PropertyInfo IList_1_t9984____Item_PropertyInfo = 
{
	&IList_1_t9984_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m53669_MethodInfo/* get */
	, &IList_1_set_Item_m53670_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t9984_PropertyInfos[] =
{
	&IList_1_t9984____Item_PropertyInfo,
	NULL
};
extern Il2CppType StringComparison_t2402_0_0_0;
static ParameterInfo IList_1_t9984_IList_1_IndexOf_m53671_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &StringComparison_t2402_0_0_0},
};
extern Il2CppType Int32_t386_0_0_0;
extern void* RuntimeInvoker_Int32_t386_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m53671_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.StringComparison>::IndexOf(T)
MethodInfo IList_1_IndexOf_m53671_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t9984_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t386_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t386_Int32_t386/* invoker_method */
	, IList_1_t9984_IList_1_IndexOf_m53671_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_IndexOf_m53671_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t386_0_0_0;
extern Il2CppType StringComparison_t2402_0_0_0;
static ParameterInfo IList_1_t9984_IList_1_Insert_m53672_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &StringComparison_t2402_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Int32_t386_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m53672_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.StringComparison>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m53672_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t9984_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Int32_t386_Int32_t386/* invoker_method */
	, IList_1_t9984_IList_1_Insert_m53672_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_Insert_m53672_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t386_0_0_0;
static ParameterInfo IList_1_t9984_IList_1_RemoveAt_m53673_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m53673_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.StringComparison>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m53673_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t9984_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Int32_t386/* invoker_method */
	, IList_1_t9984_IList_1_RemoveAt_m53673_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m53673_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t386_0_0_0;
static ParameterInfo IList_1_t9984_IList_1_get_Item_m53669_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
};
extern Il2CppType StringComparison_t2402_0_0_0;
extern void* RuntimeInvoker_StringComparison_t2402_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m53669_GenericMethod;
// T System.Collections.Generic.IList`1<System.StringComparison>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m53669_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t9984_il2cpp_TypeInfo/* declaring_type */
	, &StringComparison_t2402_0_0_0/* return_type */
	, RuntimeInvoker_StringComparison_t2402_Int32_t386/* invoker_method */
	, IList_1_t9984_IList_1_get_Item_m53669_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_get_Item_m53669_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t386_0_0_0;
extern Il2CppType StringComparison_t2402_0_0_0;
static ParameterInfo IList_1_t9984_IList_1_set_Item_m53670_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &StringComparison_t2402_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Int32_t386_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m53670_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.StringComparison>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m53670_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t9984_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Int32_t386_Int32_t386/* invoker_method */
	, IList_1_t9984_IList_1_set_Item_m53670_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_set_Item_m53670_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t9984_MethodInfos[] =
{
	&IList_1_IndexOf_m53671_MethodInfo,
	&IList_1_Insert_m53672_MethodInfo,
	&IList_1_RemoveAt_m53673_MethodInfo,
	&IList_1_get_Item_m53669_MethodInfo,
	&IList_1_set_Item_m53670_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t9984_InterfacesTypeInfos[] = 
{
	&IEnumerable_t55_il2cpp_TypeInfo,
	&ICollection_1_t9983_il2cpp_TypeInfo,
	&IEnumerable_1_t9985_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t9984_0_0_0;
extern Il2CppType IList_1_t9984_1_0_0;
struct IList_1_t9984;
extern Il2CppGenericClass IList_1_t9984_GenericClass;
extern CustomAttributesCache IList_1_t2638__CustomAttributeCache;
TypeInfo IList_1_t9984_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t9984_MethodInfos/* methods */
	, IList_1_t9984_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t9984_il2cpp_TypeInfo/* element_class */
	, IList_1_t9984_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2638__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t9984_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t9984_0_0_0/* byval_arg */
	, &IList_1_t9984_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t9984_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t7718_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.StringSplitOptions>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.StringSplitOptions>
extern MethodInfo IEnumerator_1_get_Current_m53674_MethodInfo;
static PropertyInfo IEnumerator_1_t7718____Current_PropertyInfo = 
{
	&IEnumerator_1_t7718_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m53674_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t7718_PropertyInfos[] =
{
	&IEnumerator_1_t7718____Current_PropertyInfo,
	NULL
};
extern Il2CppType StringSplitOptions_t2403_0_0_0;
extern void* RuntimeInvoker_StringSplitOptions_t2403 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m53674_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.StringSplitOptions>::get_Current()
MethodInfo IEnumerator_1_get_Current_m53674_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t7718_il2cpp_TypeInfo/* declaring_type */
	, &StringSplitOptions_t2403_0_0_0/* return_type */
	, RuntimeInvoker_StringSplitOptions_t2403/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m53674_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t7718_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m53674_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t7718_InterfacesTypeInfos[] = 
{
	&IEnumerator_t26_il2cpp_TypeInfo,
	&IDisposable_t444_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t7718_0_0_0;
extern Il2CppType IEnumerator_1_t7718_1_0_0;
struct IEnumerator_1_t7718;
extern Il2CppGenericClass IEnumerator_1_t7718_GenericClass;
TypeInfo IEnumerator_1_t7718_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t7718_MethodInfos/* methods */
	, IEnumerator_1_t7718_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t7718_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t7718_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t7718_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t7718_0_0_0/* byval_arg */
	, &IEnumerator_1_t7718_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t7718_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t5453_il2cpp_TypeInfo;

extern TypeInfo StringSplitOptions_t2403_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m31369_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisStringSplitOptions_t2403_m41614_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.StringSplitOptions>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.StringSplitOptions>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisStringSplitOptions_t2403_m41614 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.StringSplitOptions>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m31365_MethodInfo;
 void InternalEnumerator_1__ctor_m31365 (InternalEnumerator_1_t5453 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.StringSplitOptions>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m31366_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m31366 (InternalEnumerator_1_t5453 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m31369(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m31369_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&StringSplitOptions_t2403_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.StringSplitOptions>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m31367_MethodInfo;
 void InternalEnumerator_1_Dispose_m31367 (InternalEnumerator_1_t5453 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.StringSplitOptions>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m31368_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m31368 (InternalEnumerator_1_t5453 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (__this->___array_0);
		NullCheck(L_1);
		int32_t L_2 = Array_get_Length_m7572(L_1, /*hidden argument*/&Array_get_Length_m7572_MethodInfo);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->___idx_1);
		int32_t L_5 = ((int32_t)(L_4-1));
		V_0 = L_5;
		__this->___idx_1 = L_5;
		G_B5_0 = ((((int32_t)((((int32_t)V_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.StringSplitOptions>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m31369 (InternalEnumerator_1_t5453 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t1657 * L_1 = (InvalidOperationException_t1657 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1657_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m7566(L_1, (String_t*) &_stringLiteral1838, /*hidden argument*/&InvalidOperationException__ctor_m7566_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->___idx_1);
		if ((((uint32_t)L_2) != ((uint32_t)(-1))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t1657 * L_3 = (InvalidOperationException_t1657 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1657_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m7566(L_3, (String_t*) &_stringLiteral1839, /*hidden argument*/&InvalidOperationException__ctor_m7566_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array_0);
		Array_t * L_5 = (__this->___array_0);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m7572(L_5, /*hidden argument*/&Array_get_Length_m7572_MethodInfo);
		int32_t L_7 = (__this->___idx_1);
		NullCheck(L_4);
		int32_t L_8 = Array_InternalArray__get_Item_TisStringSplitOptions_t2403_m41614(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisStringSplitOptions_t2403_m41614_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.StringSplitOptions>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t5453____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t5453_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t5453, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t386_0_0_1;
FieldInfo InternalEnumerator_1_t5453____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t386_0_0_1/* type */
	, &InternalEnumerator_1_t5453_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t5453, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t5453_FieldInfos[] =
{
	&InternalEnumerator_1_t5453____array_0_FieldInfo,
	&InternalEnumerator_1_t5453____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t5453____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5453_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m31366_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t5453____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5453_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m31369_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t5453_PropertyInfos[] =
{
	&InternalEnumerator_1_t5453____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t5453____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t5453_InternalEnumerator_1__ctor_m31365_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m31365_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.StringSplitOptions>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m31365_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m31365/* method */
	, &InternalEnumerator_1_t5453_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t/* invoker_method */
	, InternalEnumerator_1_t5453_InternalEnumerator_1__ctor_m31365_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1__ctor_m31365_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m31366_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.StringSplitOptions>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m31366_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m31366/* method */
	, &InternalEnumerator_1_t5453_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m31366_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m31367_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.StringSplitOptions>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m31367_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m31367/* method */
	, &InternalEnumerator_1_t5453_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_Dispose_m31367_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m31368_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.StringSplitOptions>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m31368_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m31368/* method */
	, &InternalEnumerator_1_t5453_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t379_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t379/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_MoveNext_m31368_GenericMethod/* genericMethod */

};
extern Il2CppType StringSplitOptions_t2403_0_0_0;
extern void* RuntimeInvoker_StringSplitOptions_t2403 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m31369_GenericMethod;
// T System.Array/InternalEnumerator`1<System.StringSplitOptions>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m31369_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m31369/* method */
	, &InternalEnumerator_1_t5453_il2cpp_TypeInfo/* declaring_type */
	, &StringSplitOptions_t2403_0_0_0/* return_type */
	, RuntimeInvoker_StringSplitOptions_t2403/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_get_Current_m31369_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t5453_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m31365_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m31366_MethodInfo,
	&InternalEnumerator_1_Dispose_m31367_MethodInfo,
	&InternalEnumerator_1_MoveNext_m31368_MethodInfo,
	&InternalEnumerator_1_get_Current_m31369_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t5453_VTable[] =
{
	&ValueType_Equals_m2156_MethodInfo,
	&Object_Finalize_m1253_MethodInfo,
	&ValueType_GetHashCode_m2157_MethodInfo,
	&ValueType_ToString_m2158_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m31366_MethodInfo,
	&InternalEnumerator_1_MoveNext_m31368_MethodInfo,
	&InternalEnumerator_1_Dispose_m31367_MethodInfo,
	&InternalEnumerator_1_get_Current_m31369_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t5453_InterfacesTypeInfos[] = 
{
	&IEnumerator_t26_il2cpp_TypeInfo,
	&IDisposable_t444_il2cpp_TypeInfo,
	&IEnumerator_1_t7718_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t5453_InterfacesOffsets[] = 
{
	{ &IEnumerator_t26_il2cpp_TypeInfo, 4},
	{ &IDisposable_t444_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t7718_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t5453_0_0_0;
extern Il2CppType InternalEnumerator_1_t5453_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t5453_GenericClass;
TypeInfo InternalEnumerator_1_t5453_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t5453_MethodInfos/* methods */
	, InternalEnumerator_1_t5453_PropertyInfos/* properties */
	, InternalEnumerator_1_t5453_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t550_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t5453_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t5453_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t5453_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t5453_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t5453_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t5453_1_0_0/* this_arg */
	, InternalEnumerator_1_t5453_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t5453_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t5453)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t9986_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.StringSplitOptions>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.StringSplitOptions>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.StringSplitOptions>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.StringSplitOptions>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.StringSplitOptions>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.StringSplitOptions>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.StringSplitOptions>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.StringSplitOptions>
extern MethodInfo ICollection_1_get_Count_m53675_MethodInfo;
static PropertyInfo ICollection_1_t9986____Count_PropertyInfo = 
{
	&ICollection_1_t9986_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m53675_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m53676_MethodInfo;
static PropertyInfo ICollection_1_t9986____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t9986_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m53676_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t9986_PropertyInfos[] =
{
	&ICollection_1_t9986____Count_PropertyInfo,
	&ICollection_1_t9986____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t386_0_0_0;
extern void* RuntimeInvoker_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m53675_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.StringSplitOptions>::get_Count()
MethodInfo ICollection_1_get_Count_m53675_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t9986_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t386_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t386/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_Count_m53675_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m53676_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.StringSplitOptions>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m53676_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t9986_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t379_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t379/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_IsReadOnly_m53676_GenericMethod/* genericMethod */

};
extern Il2CppType StringSplitOptions_t2403_0_0_0;
extern Il2CppType StringSplitOptions_t2403_0_0_0;
static ParameterInfo ICollection_1_t9986_ICollection_1_Add_m53677_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &StringSplitOptions_t2403_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m53677_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.StringSplitOptions>::Add(T)
MethodInfo ICollection_1_Add_m53677_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t9986_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Int32_t386/* invoker_method */
	, ICollection_1_t9986_ICollection_1_Add_m53677_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m53677_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m53678_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.StringSplitOptions>::Clear()
MethodInfo ICollection_1_Clear_m53678_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t9986_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Clear_m53678_GenericMethod/* genericMethod */

};
extern Il2CppType StringSplitOptions_t2403_0_0_0;
static ParameterInfo ICollection_1_t9986_ICollection_1_Contains_m53679_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &StringSplitOptions_t2403_0_0_0},
};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m53679_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.StringSplitOptions>::Contains(T)
MethodInfo ICollection_1_Contains_m53679_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t9986_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t379_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t379_Int32_t386/* invoker_method */
	, ICollection_1_t9986_ICollection_1_Contains_m53679_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Contains_m53679_GenericMethod/* genericMethod */

};
extern Il2CppType StringSplitOptionsU5BU5D_t5667_0_0_0;
extern Il2CppType StringSplitOptionsU5BU5D_t5667_0_0_0;
extern Il2CppType Int32_t386_0_0_0;
static ParameterInfo ICollection_1_t9986_ICollection_1_CopyTo_m53680_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &StringSplitOptionsU5BU5D_t5667_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m53680_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.StringSplitOptions>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m53680_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t9986_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t_Int32_t386/* invoker_method */
	, ICollection_1_t9986_ICollection_1_CopyTo_m53680_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_CopyTo_m53680_GenericMethod/* genericMethod */

};
extern Il2CppType StringSplitOptions_t2403_0_0_0;
static ParameterInfo ICollection_1_t9986_ICollection_1_Remove_m53681_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &StringSplitOptions_t2403_0_0_0},
};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m53681_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.StringSplitOptions>::Remove(T)
MethodInfo ICollection_1_Remove_m53681_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t9986_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t379_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t379_Int32_t386/* invoker_method */
	, ICollection_1_t9986_ICollection_1_Remove_m53681_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Remove_m53681_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t9986_MethodInfos[] =
{
	&ICollection_1_get_Count_m53675_MethodInfo,
	&ICollection_1_get_IsReadOnly_m53676_MethodInfo,
	&ICollection_1_Add_m53677_MethodInfo,
	&ICollection_1_Clear_m53678_MethodInfo,
	&ICollection_1_Contains_m53679_MethodInfo,
	&ICollection_1_CopyTo_m53680_MethodInfo,
	&ICollection_1_Remove_m53681_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t9988_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t9986_InterfacesTypeInfos[] = 
{
	&IEnumerable_t55_il2cpp_TypeInfo,
	&IEnumerable_1_t9988_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t9986_0_0_0;
extern Il2CppType ICollection_1_t9986_1_0_0;
struct ICollection_1_t9986;
extern Il2CppGenericClass ICollection_1_t9986_GenericClass;
TypeInfo ICollection_1_t9986_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t9986_MethodInfos/* methods */
	, ICollection_1_t9986_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t9986_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t9986_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t9986_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t9986_0_0_0/* byval_arg */
	, &ICollection_1_t9986_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t9986_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.StringSplitOptions>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.StringSplitOptions>
extern Il2CppType IEnumerator_1_t7718_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m53682_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.StringSplitOptions>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m53682_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t9988_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t7718_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerable_1_GetEnumerator_m53682_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t9988_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m53682_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t9988_InterfacesTypeInfos[] = 
{
	&IEnumerable_t55_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t9988_0_0_0;
extern Il2CppType IEnumerable_1_t9988_1_0_0;
struct IEnumerable_1_t9988;
extern Il2CppGenericClass IEnumerable_1_t9988_GenericClass;
TypeInfo IEnumerable_1_t9988_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t9988_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t9988_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t9988_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t9988_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t9988_0_0_0/* byval_arg */
	, &IEnumerable_1_t9988_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t9988_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t9987_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.StringSplitOptions>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.StringSplitOptions>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.StringSplitOptions>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.StringSplitOptions>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.StringSplitOptions>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.StringSplitOptions>
extern MethodInfo IList_1_get_Item_m53683_MethodInfo;
extern MethodInfo IList_1_set_Item_m53684_MethodInfo;
static PropertyInfo IList_1_t9987____Item_PropertyInfo = 
{
	&IList_1_t9987_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m53683_MethodInfo/* get */
	, &IList_1_set_Item_m53684_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t9987_PropertyInfos[] =
{
	&IList_1_t9987____Item_PropertyInfo,
	NULL
};
extern Il2CppType StringSplitOptions_t2403_0_0_0;
static ParameterInfo IList_1_t9987_IList_1_IndexOf_m53685_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &StringSplitOptions_t2403_0_0_0},
};
extern Il2CppType Int32_t386_0_0_0;
extern void* RuntimeInvoker_Int32_t386_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m53685_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.StringSplitOptions>::IndexOf(T)
MethodInfo IList_1_IndexOf_m53685_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t9987_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t386_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t386_Int32_t386/* invoker_method */
	, IList_1_t9987_IList_1_IndexOf_m53685_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_IndexOf_m53685_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t386_0_0_0;
extern Il2CppType StringSplitOptions_t2403_0_0_0;
static ParameterInfo IList_1_t9987_IList_1_Insert_m53686_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &StringSplitOptions_t2403_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Int32_t386_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m53686_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.StringSplitOptions>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m53686_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t9987_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Int32_t386_Int32_t386/* invoker_method */
	, IList_1_t9987_IList_1_Insert_m53686_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_Insert_m53686_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t386_0_0_0;
static ParameterInfo IList_1_t9987_IList_1_RemoveAt_m53687_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m53687_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.StringSplitOptions>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m53687_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t9987_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Int32_t386/* invoker_method */
	, IList_1_t9987_IList_1_RemoveAt_m53687_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m53687_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t386_0_0_0;
static ParameterInfo IList_1_t9987_IList_1_get_Item_m53683_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
};
extern Il2CppType StringSplitOptions_t2403_0_0_0;
extern void* RuntimeInvoker_StringSplitOptions_t2403_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m53683_GenericMethod;
// T System.Collections.Generic.IList`1<System.StringSplitOptions>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m53683_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t9987_il2cpp_TypeInfo/* declaring_type */
	, &StringSplitOptions_t2403_0_0_0/* return_type */
	, RuntimeInvoker_StringSplitOptions_t2403_Int32_t386/* invoker_method */
	, IList_1_t9987_IList_1_get_Item_m53683_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_get_Item_m53683_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t386_0_0_0;
extern Il2CppType StringSplitOptions_t2403_0_0_0;
static ParameterInfo IList_1_t9987_IList_1_set_Item_m53684_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &StringSplitOptions_t2403_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Int32_t386_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m53684_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.StringSplitOptions>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m53684_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t9987_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Int32_t386_Int32_t386/* invoker_method */
	, IList_1_t9987_IList_1_set_Item_m53684_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_set_Item_m53684_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t9987_MethodInfos[] =
{
	&IList_1_IndexOf_m53685_MethodInfo,
	&IList_1_Insert_m53686_MethodInfo,
	&IList_1_RemoveAt_m53687_MethodInfo,
	&IList_1_get_Item_m53683_MethodInfo,
	&IList_1_set_Item_m53684_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t9987_InterfacesTypeInfos[] = 
{
	&IEnumerable_t55_il2cpp_TypeInfo,
	&ICollection_1_t9986_il2cpp_TypeInfo,
	&IEnumerable_1_t9988_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t9987_0_0_0;
extern Il2CppType IList_1_t9987_1_0_0;
struct IList_1_t9987;
extern Il2CppGenericClass IList_1_t9987_GenericClass;
extern CustomAttributesCache IList_1_t2638__CustomAttributeCache;
TypeInfo IList_1_t9987_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t9987_MethodInfos/* methods */
	, IList_1_t9987_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t9987_il2cpp_TypeInfo/* element_class */
	, IList_1_t9987_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2638__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t9987_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t9987_0_0_0/* byval_arg */
	, &IList_1_t9987_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t9987_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t7720_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.ThreadStaticAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.ThreadStaticAttribute>
extern MethodInfo IEnumerator_1_get_Current_m53688_MethodInfo;
static PropertyInfo IEnumerator_1_t7720____Current_PropertyInfo = 
{
	&IEnumerator_1_t7720_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m53688_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t7720_PropertyInfos[] =
{
	&IEnumerator_1_t7720____Current_PropertyInfo,
	NULL
};
extern Il2CppType ThreadStaticAttribute_t2404_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m53688_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.ThreadStaticAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m53688_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t7720_il2cpp_TypeInfo/* declaring_type */
	, &ThreadStaticAttribute_t2404_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m53688_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t7720_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m53688_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t7720_InterfacesTypeInfos[] = 
{
	&IEnumerator_t26_il2cpp_TypeInfo,
	&IDisposable_t444_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t7720_0_0_0;
extern Il2CppType IEnumerator_1_t7720_1_0_0;
struct IEnumerator_1_t7720;
extern Il2CppGenericClass IEnumerator_1_t7720_GenericClass;
TypeInfo IEnumerator_1_t7720_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t7720_MethodInfos/* methods */
	, IEnumerator_1_t7720_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t7720_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t7720_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t7720_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t7720_0_0_0/* byval_arg */
	, &IEnumerator_1_t7720_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t7720_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t5454_il2cpp_TypeInfo;

extern TypeInfo ThreadStaticAttribute_t2404_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m31374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisThreadStaticAttribute_t2404_m41625_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.ThreadStaticAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.ThreadStaticAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisThreadStaticAttribute_t2404_m41625(__this, p0, method) (ThreadStaticAttribute_t2404 *)Array_InternalArray__get_Item_TisObject_t_m31403_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.ThreadStaticAttribute>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.ThreadStaticAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.ThreadStaticAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.ThreadStaticAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.ThreadStaticAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.ThreadStaticAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t5454____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t5454_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t5454, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t386_0_0_1;
FieldInfo InternalEnumerator_1_t5454____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t386_0_0_1/* type */
	, &InternalEnumerator_1_t5454_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t5454, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t5454_FieldInfos[] =
{
	&InternalEnumerator_1_t5454____array_0_FieldInfo,
	&InternalEnumerator_1_t5454____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m31371_MethodInfo;
static PropertyInfo InternalEnumerator_1_t5454____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5454_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m31371_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t5454____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5454_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m31374_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t5454_PropertyInfos[] =
{
	&InternalEnumerator_1_t5454____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t5454____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t5454_InternalEnumerator_1__ctor_m31370_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m31370_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.ThreadStaticAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m31370_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m13935_gshared/* method */
	, &InternalEnumerator_1_t5454_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t/* invoker_method */
	, InternalEnumerator_1_t5454_InternalEnumerator_1__ctor_m31370_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1__ctor_m31370_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m31371_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.ThreadStaticAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m31371_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13937_gshared/* method */
	, &InternalEnumerator_1_t5454_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m31371_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m31372_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.ThreadStaticAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m31372_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m13939_gshared/* method */
	, &InternalEnumerator_1_t5454_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_Dispose_m31372_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m31373_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.ThreadStaticAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m31373_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m13941_gshared/* method */
	, &InternalEnumerator_1_t5454_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t379_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t379/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_MoveNext_m31373_GenericMethod/* genericMethod */

};
extern Il2CppType ThreadStaticAttribute_t2404_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m31374_GenericMethod;
// T System.Array/InternalEnumerator`1<System.ThreadStaticAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m31374_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m13943_gshared/* method */
	, &InternalEnumerator_1_t5454_il2cpp_TypeInfo/* declaring_type */
	, &ThreadStaticAttribute_t2404_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_get_Current_m31374_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t5454_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m31370_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m31371_MethodInfo,
	&InternalEnumerator_1_Dispose_m31372_MethodInfo,
	&InternalEnumerator_1_MoveNext_m31373_MethodInfo,
	&InternalEnumerator_1_get_Current_m31374_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m31373_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m31372_MethodInfo;
static MethodInfo* InternalEnumerator_1_t5454_VTable[] =
{
	&ValueType_Equals_m2156_MethodInfo,
	&Object_Finalize_m1253_MethodInfo,
	&ValueType_GetHashCode_m2157_MethodInfo,
	&ValueType_ToString_m2158_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m31371_MethodInfo,
	&InternalEnumerator_1_MoveNext_m31373_MethodInfo,
	&InternalEnumerator_1_Dispose_m31372_MethodInfo,
	&InternalEnumerator_1_get_Current_m31374_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t5454_InterfacesTypeInfos[] = 
{
	&IEnumerator_t26_il2cpp_TypeInfo,
	&IDisposable_t444_il2cpp_TypeInfo,
	&IEnumerator_1_t7720_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t5454_InterfacesOffsets[] = 
{
	{ &IEnumerator_t26_il2cpp_TypeInfo, 4},
	{ &IDisposable_t444_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t7720_il2cpp_TypeInfo, 7},
};
extern TypeInfo ThreadStaticAttribute_t2404_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t5454_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m31374_MethodInfo/* Method Usage */,
	&ThreadStaticAttribute_t2404_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisThreadStaticAttribute_t2404_m41625_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t5454_0_0_0;
extern Il2CppType InternalEnumerator_1_t5454_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t5454_GenericClass;
TypeInfo InternalEnumerator_1_t5454_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t5454_MethodInfos/* methods */
	, InternalEnumerator_1_t5454_PropertyInfos/* properties */
	, InternalEnumerator_1_t5454_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t550_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t5454_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t5454_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t5454_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t5454_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t5454_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t5454_1_0_0/* this_arg */
	, InternalEnumerator_1_t5454_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t5454_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t5454_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t5454)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t9989_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.ThreadStaticAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.ThreadStaticAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.ThreadStaticAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.ThreadStaticAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.ThreadStaticAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.ThreadStaticAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.ThreadStaticAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.ThreadStaticAttribute>
extern MethodInfo ICollection_1_get_Count_m53689_MethodInfo;
static PropertyInfo ICollection_1_t9989____Count_PropertyInfo = 
{
	&ICollection_1_t9989_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m53689_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m53690_MethodInfo;
static PropertyInfo ICollection_1_t9989____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t9989_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m53690_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t9989_PropertyInfos[] =
{
	&ICollection_1_t9989____Count_PropertyInfo,
	&ICollection_1_t9989____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t386_0_0_0;
extern void* RuntimeInvoker_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m53689_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.ThreadStaticAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m53689_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t9989_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t386_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t386/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_Count_m53689_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m53690_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.ThreadStaticAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m53690_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t9989_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t379_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t379/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_IsReadOnly_m53690_GenericMethod/* genericMethod */

};
extern Il2CppType ThreadStaticAttribute_t2404_0_0_0;
extern Il2CppType ThreadStaticAttribute_t2404_0_0_0;
static ParameterInfo ICollection_1_t9989_ICollection_1_Add_m53691_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ThreadStaticAttribute_t2404_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m53691_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.ThreadStaticAttribute>::Add(T)
MethodInfo ICollection_1_Add_m53691_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t9989_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t/* invoker_method */
	, ICollection_1_t9989_ICollection_1_Add_m53691_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m53691_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m53692_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.ThreadStaticAttribute>::Clear()
MethodInfo ICollection_1_Clear_m53692_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t9989_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Clear_m53692_GenericMethod/* genericMethod */

};
extern Il2CppType ThreadStaticAttribute_t2404_0_0_0;
static ParameterInfo ICollection_1_t9989_ICollection_1_Contains_m53693_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ThreadStaticAttribute_t2404_0_0_0},
};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m53693_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.ThreadStaticAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m53693_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t9989_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t379_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t379_Object_t/* invoker_method */
	, ICollection_1_t9989_ICollection_1_Contains_m53693_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Contains_m53693_GenericMethod/* genericMethod */

};
extern Il2CppType ThreadStaticAttributeU5BU5D_t5668_0_0_0;
extern Il2CppType ThreadStaticAttributeU5BU5D_t5668_0_0_0;
extern Il2CppType Int32_t386_0_0_0;
static ParameterInfo ICollection_1_t9989_ICollection_1_CopyTo_m53694_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ThreadStaticAttributeU5BU5D_t5668_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m53694_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.ThreadStaticAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m53694_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t9989_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t_Int32_t386/* invoker_method */
	, ICollection_1_t9989_ICollection_1_CopyTo_m53694_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_CopyTo_m53694_GenericMethod/* genericMethod */

};
extern Il2CppType ThreadStaticAttribute_t2404_0_0_0;
static ParameterInfo ICollection_1_t9989_ICollection_1_Remove_m53695_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ThreadStaticAttribute_t2404_0_0_0},
};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m53695_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.ThreadStaticAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m53695_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t9989_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t379_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t379_Object_t/* invoker_method */
	, ICollection_1_t9989_ICollection_1_Remove_m53695_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Remove_m53695_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t9989_MethodInfos[] =
{
	&ICollection_1_get_Count_m53689_MethodInfo,
	&ICollection_1_get_IsReadOnly_m53690_MethodInfo,
	&ICollection_1_Add_m53691_MethodInfo,
	&ICollection_1_Clear_m53692_MethodInfo,
	&ICollection_1_Contains_m53693_MethodInfo,
	&ICollection_1_CopyTo_m53694_MethodInfo,
	&ICollection_1_Remove_m53695_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t9991_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t9989_InterfacesTypeInfos[] = 
{
	&IEnumerable_t55_il2cpp_TypeInfo,
	&IEnumerable_1_t9991_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t9989_0_0_0;
extern Il2CppType ICollection_1_t9989_1_0_0;
struct ICollection_1_t9989;
extern Il2CppGenericClass ICollection_1_t9989_GenericClass;
TypeInfo ICollection_1_t9989_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t9989_MethodInfos/* methods */
	, ICollection_1_t9989_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t9989_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t9989_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t9989_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t9989_0_0_0/* byval_arg */
	, &ICollection_1_t9989_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t9989_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.ThreadStaticAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.ThreadStaticAttribute>
extern Il2CppType IEnumerator_1_t7720_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m53696_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.ThreadStaticAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m53696_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t9991_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t7720_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerable_1_GetEnumerator_m53696_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t9991_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m53696_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t9991_InterfacesTypeInfos[] = 
{
	&IEnumerable_t55_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t9991_0_0_0;
extern Il2CppType IEnumerable_1_t9991_1_0_0;
struct IEnumerable_1_t9991;
extern Il2CppGenericClass IEnumerable_1_t9991_GenericClass;
TypeInfo IEnumerable_1_t9991_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t9991_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t9991_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t9991_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t9991_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t9991_0_0_0/* byval_arg */
	, &IEnumerable_1_t9991_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t9991_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t9990_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.ThreadStaticAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.ThreadStaticAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.ThreadStaticAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.ThreadStaticAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.ThreadStaticAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.ThreadStaticAttribute>
extern MethodInfo IList_1_get_Item_m53697_MethodInfo;
extern MethodInfo IList_1_set_Item_m53698_MethodInfo;
static PropertyInfo IList_1_t9990____Item_PropertyInfo = 
{
	&IList_1_t9990_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m53697_MethodInfo/* get */
	, &IList_1_set_Item_m53698_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t9990_PropertyInfos[] =
{
	&IList_1_t9990____Item_PropertyInfo,
	NULL
};
extern Il2CppType ThreadStaticAttribute_t2404_0_0_0;
static ParameterInfo IList_1_t9990_IList_1_IndexOf_m53699_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ThreadStaticAttribute_t2404_0_0_0},
};
extern Il2CppType Int32_t386_0_0_0;
extern void* RuntimeInvoker_Int32_t386_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m53699_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.ThreadStaticAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m53699_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t9990_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t386_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t386_Object_t/* invoker_method */
	, IList_1_t9990_IList_1_IndexOf_m53699_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_IndexOf_m53699_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t386_0_0_0;
extern Il2CppType ThreadStaticAttribute_t2404_0_0_0;
static ParameterInfo IList_1_t9990_IList_1_Insert_m53700_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &ThreadStaticAttribute_t2404_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Int32_t386_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m53700_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.ThreadStaticAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m53700_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t9990_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Int32_t386_Object_t/* invoker_method */
	, IList_1_t9990_IList_1_Insert_m53700_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_Insert_m53700_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t386_0_0_0;
static ParameterInfo IList_1_t9990_IList_1_RemoveAt_m53701_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m53701_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.ThreadStaticAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m53701_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t9990_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Int32_t386/* invoker_method */
	, IList_1_t9990_IList_1_RemoveAt_m53701_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m53701_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t386_0_0_0;
static ParameterInfo IList_1_t9990_IList_1_get_Item_m53697_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
};
extern Il2CppType ThreadStaticAttribute_t2404_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m53697_GenericMethod;
// T System.Collections.Generic.IList`1<System.ThreadStaticAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m53697_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t9990_il2cpp_TypeInfo/* declaring_type */
	, &ThreadStaticAttribute_t2404_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t386/* invoker_method */
	, IList_1_t9990_IList_1_get_Item_m53697_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_get_Item_m53697_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t386_0_0_0;
extern Il2CppType ThreadStaticAttribute_t2404_0_0_0;
static ParameterInfo IList_1_t9990_IList_1_set_Item_m53698_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &ThreadStaticAttribute_t2404_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Int32_t386_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m53698_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.ThreadStaticAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m53698_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t9990_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Int32_t386_Object_t/* invoker_method */
	, IList_1_t9990_IList_1_set_Item_m53698_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_set_Item_m53698_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t9990_MethodInfos[] =
{
	&IList_1_IndexOf_m53699_MethodInfo,
	&IList_1_Insert_m53700_MethodInfo,
	&IList_1_RemoveAt_m53701_MethodInfo,
	&IList_1_get_Item_m53697_MethodInfo,
	&IList_1_set_Item_m53698_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t9990_InterfacesTypeInfos[] = 
{
	&IEnumerable_t55_il2cpp_TypeInfo,
	&ICollection_1_t9989_il2cpp_TypeInfo,
	&IEnumerable_1_t9991_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t9990_0_0_0;
extern Il2CppType IList_1_t9990_1_0_0;
struct IList_1_t9990;
extern Il2CppGenericClass IList_1_t9990_GenericClass;
extern CustomAttributesCache IList_1_t2638__CustomAttributeCache;
TypeInfo IList_1_t9990_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t9990_MethodInfos/* methods */
	, IList_1_t9990_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t9990_il2cpp_TypeInfo/* element_class */
	, IList_1_t9990_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2638__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t9990_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t9990_0_0_0/* byval_arg */
	, &IList_1_t9990_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t9990_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GenericComparer_1_t2840_il2cpp_TypeInfo;

extern TypeInfo TimeSpan_t438_il2cpp_TypeInfo;
extern TypeInfo IComparable_1_t2842_il2cpp_TypeInfo;
extern MethodInfo Comparer_1__ctor_m31376_MethodInfo;
extern MethodInfo IComparable_1_CompareTo_m53173_MethodInfo;


// System.Void System.Collections.Generic.GenericComparer`1<System.TimeSpan>::.ctor()
extern MethodInfo GenericComparer_1__ctor_m13875_MethodInfo;
 void GenericComparer_1__ctor_m13875 (GenericComparer_1_t2840 * __this, MethodInfo* method){
	{
		Comparer_1__ctor_m31376(__this, /*hidden argument*/&Comparer_1__ctor_m31376_MethodInfo);
		return;
	}
}
// System.Int32 System.Collections.Generic.GenericComparer`1<System.TimeSpan>::Compare(T,T)
extern MethodInfo GenericComparer_1_Compare_m31375_MethodInfo;
 int32_t GenericComparer_1_Compare_m31375 (GenericComparer_1_t2840 * __this, TimeSpan_t438  ___x, TimeSpan_t438  ___y, MethodInfo* method){
	int32_t G_B4_0 = 0;
	{
		TimeSpan_t438  L_0 = ___x;
		Object_t * L_1 = Box(InitializedTypeInfo(&TimeSpan_t438_il2cpp_TypeInfo), &L_0);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		TimeSpan_t438  L_2 = ___y;
		Object_t * L_3 = Box(InitializedTypeInfo(&TimeSpan_t438_il2cpp_TypeInfo), &L_2);
		if (L_3)
		{
			goto IL_0013;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_0014;
	}

IL_0013:
	{
		G_B4_0 = (-1);
	}

IL_0014:
	{
		return G_B4_0;
	}

IL_0015:
	{
		TimeSpan_t438  L_4 = ___y;
		Object_t * L_5 = Box(InitializedTypeInfo(&TimeSpan_t438_il2cpp_TypeInfo), &L_4);
		if (L_5)
		{
			goto IL_001f;
		}
	}
	{
		return 1;
	}

IL_001f:
	{
		NullCheck(Box(InitializedTypeInfo(&TimeSpan_t438_il2cpp_TypeInfo), &(*(&___x))));
		int32_t L_6 = (int32_t)InterfaceFuncInvoker1< int32_t, TimeSpan_t438  >::Invoke(&IComparable_1_CompareTo_m53173_MethodInfo, Box(InitializedTypeInfo(&TimeSpan_t438_il2cpp_TypeInfo), &(*(&___x))), ___y);
		return L_6;
	}
}
// Metadata Definition System.Collections.Generic.GenericComparer`1<System.TimeSpan>
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod GenericComparer_1__ctor_m13875_GenericMethod;
// System.Void System.Collections.Generic.GenericComparer`1<System.TimeSpan>::.ctor()
MethodInfo GenericComparer_1__ctor_m13875_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&GenericComparer_1__ctor_m13875/* method */
	, &GenericComparer_1_t2840_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &GenericComparer_1__ctor_m13875_GenericMethod/* genericMethod */

};
extern Il2CppType TimeSpan_t438_0_0_0;
extern Il2CppType TimeSpan_t438_0_0_0;
extern Il2CppType TimeSpan_t438_0_0_0;
static ParameterInfo GenericComparer_1_t2840_GenericComparer_1_Compare_m31375_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &TimeSpan_t438_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &TimeSpan_t438_0_0_0},
};
extern Il2CppType Int32_t386_0_0_0;
extern void* RuntimeInvoker_Int32_t386_TimeSpan_t438_TimeSpan_t438 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod GenericComparer_1_Compare_m31375_GenericMethod;
// System.Int32 System.Collections.Generic.GenericComparer`1<System.TimeSpan>::Compare(T,T)
MethodInfo GenericComparer_1_Compare_m31375_MethodInfo = 
{
	"Compare"/* name */
	, (methodPointerType)&GenericComparer_1_Compare_m31375/* method */
	, &GenericComparer_1_t2840_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t386_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t386_TimeSpan_t438_TimeSpan_t438/* invoker_method */
	, GenericComparer_1_t2840_GenericComparer_1_Compare_m31375_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &GenericComparer_1_Compare_m31375_GenericMethod/* genericMethod */

};
static MethodInfo* GenericComparer_1_t2840_MethodInfos[] =
{
	&GenericComparer_1__ctor_m13875_MethodInfo,
	&GenericComparer_1_Compare_m31375_MethodInfo,
	NULL
};
extern MethodInfo Comparer_1_System_Collections_IComparer_Compare_m31378_MethodInfo;
static MethodInfo* GenericComparer_1_t2840_VTable[] =
{
	&Object_Equals_m1252_MethodInfo,
	&Object_Finalize_m1253_MethodInfo,
	&Object_GetHashCode_m1254_MethodInfo,
	&Object_ToString_m1255_MethodInfo,
	&GenericComparer_1_Compare_m31375_MethodInfo,
	&Comparer_1_System_Collections_IComparer_Compare_m31378_MethodInfo,
	&GenericComparer_1_Compare_m31375_MethodInfo,
};
extern TypeInfo IComparer_1_t10403_il2cpp_TypeInfo;
extern TypeInfo IComparer_t1475_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair GenericComparer_1_t2840_InterfacesOffsets[] = 
{
	{ &IComparer_1_t10403_il2cpp_TypeInfo, 4},
	{ &IComparer_t1475_il2cpp_TypeInfo, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType GenericComparer_1_t2840_0_0_0;
extern Il2CppType GenericComparer_1_t2840_1_0_0;
extern TypeInfo Comparer_1_t5455_il2cpp_TypeInfo;
struct GenericComparer_1_t2840;
extern Il2CppGenericClass GenericComparer_1_t2840_GenericClass;
TypeInfo GenericComparer_1_t2840_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "GenericComparer`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, GenericComparer_1_t2840_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Comparer_1_t5455_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &GenericComparer_1_t2840_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, GenericComparer_1_t2840_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &GenericComparer_1_t2840_il2cpp_TypeInfo/* cast_class */
	, &GenericComparer_1_t2840_0_0_0/* byval_arg */
	, &GenericComparer_1_t2840_1_0_0/* this_arg */
	, GenericComparer_1_t2840_InterfacesOffsets/* interface_offsets */
	, &GenericComparer_1_t2840_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (GenericComparer_1_t2840)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1057024/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 2/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 7/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo GenericComparer_1_t1959_il2cpp_TypeInfo;
extern TypeInfo DefaultComparer_t5456_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t922_il2cpp_TypeInfo;
extern Il2CppType IComparable_1_t2842_0_0_0;
extern Il2CppType GenericComparer_1_t1959_0_0_0;
extern MethodInfo DefaultComparer__ctor_m31380_MethodInfo;
extern MethodInfo Comparer_1_Compare_m53702_MethodInfo;
extern MethodInfo ArgumentException__ctor_m12431_MethodInfo;


// System.Void System.Collections.Generic.Comparer`1<System.TimeSpan>::.ctor()
 void Comparer_1__ctor_m31376 (Comparer_1_t5455 * __this, MethodInfo* method){
	{
		Object__ctor_m1260(__this, /*hidden argument*/&Object__ctor_m1260_MethodInfo);
		return;
	}
}
// System.Void System.Collections.Generic.Comparer`1<System.TimeSpan>::.cctor()
extern MethodInfo Comparer_1__cctor_m31377_MethodInfo;
 void Comparer_1__cctor_m31377 (Object_t * __this/* static, unused */, MethodInfo* method){
	DefaultComparer_t5456 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (DefaultComparer_t5456 *)il2cpp_codegen_object_new(InitializedTypeInfo(&DefaultComparer_t5456_il2cpp_TypeInfo));
	DefaultComparer__ctor_m31380(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, &DefaultComparer__ctor_m31380_MethodInfo);
	((Comparer_1_t5455_StaticFields*)InitializedTypeInfo(&Comparer_1_t5455_il2cpp_TypeInfo)->static_fields)->____default_0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
// System.Int32 System.Collections.Generic.Comparer`1<System.TimeSpan>::System.Collections.IComparer.Compare(System.Object,System.Object)
 int32_t Comparer_1_System_Collections_IComparer_Compare_m31378 (Comparer_1_t5455 * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method){
	int32_t G_B4_0 = 0;
	{
		if (___x)
		{
			goto IL_000b;
		}
	}
	{
		if (___y)
		{
			goto IL_0009;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_000a;
	}

IL_0009:
	{
		G_B4_0 = (-1);
	}

IL_000a:
	{
		return G_B4_0;
	}

IL_000b:
	{
		if (___y)
		{
			goto IL_0010;
		}
	}
	{
		return 1;
	}

IL_0010:
	{
		if (!((Object_t *)IsInst(___x, InitializedTypeInfo(&TimeSpan_t438_il2cpp_TypeInfo))))
		{
			goto IL_0033;
		}
	}
	{
		if (!((Object_t *)IsInst(___y, InitializedTypeInfo(&TimeSpan_t438_il2cpp_TypeInfo))))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker2< int32_t, TimeSpan_t438 , TimeSpan_t438  >::Invoke(&Comparer_1_Compare_m53702_MethodInfo, __this, ((*(TimeSpan_t438 *)((TimeSpan_t438 *)UnBox (___x, InitializedTypeInfo(&TimeSpan_t438_il2cpp_TypeInfo))))), ((*(TimeSpan_t438 *)((TimeSpan_t438 *)UnBox (___y, InitializedTypeInfo(&TimeSpan_t438_il2cpp_TypeInfo))))));
		return L_0;
	}

IL_0033:
	{
		ArgumentException_t922 * L_1 = (ArgumentException_t922 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t922_il2cpp_TypeInfo));
		ArgumentException__ctor_m12431(L_1, /*hidden argument*/&ArgumentException__ctor_m12431_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}
}
// System.Int32 System.Collections.Generic.Comparer`1<System.TimeSpan>::Compare(T,T)
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<System.TimeSpan>::get_Default()
extern MethodInfo Comparer_1_get_Default_m31379_MethodInfo;
 Comparer_1_t5455 * Comparer_1_get_Default_m31379 (Object_t * __this/* static, unused */, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Comparer_1_t5455_il2cpp_TypeInfo));
		return (((Comparer_1_t5455_StaticFields*)InitializedTypeInfo(&Comparer_1_t5455_il2cpp_TypeInfo)->static_fields)->____default_0);
	}
}
// Metadata Definition System.Collections.Generic.Comparer`1<System.TimeSpan>
extern Il2CppType Comparer_1_t5455_0_0_49;
FieldInfo Comparer_1_t5455_____default_0_FieldInfo = 
{
	"_default"/* name */
	, &Comparer_1_t5455_0_0_49/* type */
	, &Comparer_1_t5455_il2cpp_TypeInfo/* parent */
	, offsetof(Comparer_1_t5455_StaticFields, ____default_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* Comparer_1_t5455_FieldInfos[] =
{
	&Comparer_1_t5455_____default_0_FieldInfo,
	NULL
};
static PropertyInfo Comparer_1_t5455____Default_PropertyInfo = 
{
	&Comparer_1_t5455_il2cpp_TypeInfo/* parent */
	, "Default"/* name */
	, &Comparer_1_get_Default_m31379_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* Comparer_1_t5455_PropertyInfos[] =
{
	&Comparer_1_t5455____Default_PropertyInfo,
	NULL
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod Comparer_1__ctor_m31376_GenericMethod;
// System.Void System.Collections.Generic.Comparer`1<System.TimeSpan>::.ctor()
MethodInfo Comparer_1__ctor_m31376_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Comparer_1__ctor_m31376/* method */
	, &Comparer_1_t5455_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6276/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &Comparer_1__ctor_m31376_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod Comparer_1__cctor_m31377_GenericMethod;
// System.Void System.Collections.Generic.Comparer`1<System.TimeSpan>::.cctor()
MethodInfo Comparer_1__cctor_m31377_MethodInfo = 
{
	".cctor"/* name */
	, (methodPointerType)&Comparer_1__cctor_m31377/* method */
	, &Comparer_1_t5455_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6161/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &Comparer_1__cctor_m31377_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo Comparer_1_t5455_Comparer_1_System_Collections_IComparer_Compare_m31378_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType Int32_t386_0_0_0;
extern void* RuntimeInvoker_Int32_t386_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod Comparer_1_System_Collections_IComparer_Compare_m31378_GenericMethod;
// System.Int32 System.Collections.Generic.Comparer`1<System.TimeSpan>::System.Collections.IComparer.Compare(System.Object,System.Object)
MethodInfo Comparer_1_System_Collections_IComparer_Compare_m31378_MethodInfo = 
{
	"System.Collections.IComparer.Compare"/* name */
	, (methodPointerType)&Comparer_1_System_Collections_IComparer_Compare_m31378/* method */
	, &Comparer_1_t5455_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t386_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t386_Object_t_Object_t/* invoker_method */
	, Comparer_1_t5455_Comparer_1_System_Collections_IComparer_Compare_m31378_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &Comparer_1_System_Collections_IComparer_Compare_m31378_GenericMethod/* genericMethod */

};
extern Il2CppType TimeSpan_t438_0_0_0;
extern Il2CppType TimeSpan_t438_0_0_0;
static ParameterInfo Comparer_1_t5455_Comparer_1_Compare_m53702_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &TimeSpan_t438_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &TimeSpan_t438_0_0_0},
};
extern Il2CppType Int32_t386_0_0_0;
extern void* RuntimeInvoker_Int32_t386_TimeSpan_t438_TimeSpan_t438 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod Comparer_1_Compare_m53702_GenericMethod;
// System.Int32 System.Collections.Generic.Comparer`1<System.TimeSpan>::Compare(T,T)
MethodInfo Comparer_1_Compare_m53702_MethodInfo = 
{
	"Compare"/* name */
	, NULL/* method */
	, &Comparer_1_t5455_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t386_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t386_TimeSpan_t438_TimeSpan_t438/* invoker_method */
	, Comparer_1_t5455_Comparer_1_Compare_m53702_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &Comparer_1_Compare_m53702_GenericMethod/* genericMethod */

};
extern Il2CppType Comparer_1_t5455_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod Comparer_1_get_Default_m31379_GenericMethod;
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<System.TimeSpan>::get_Default()
MethodInfo Comparer_1_get_Default_m31379_MethodInfo = 
{
	"get_Default"/* name */
	, (methodPointerType)&Comparer_1_get_Default_m31379/* method */
	, &Comparer_1_t5455_il2cpp_TypeInfo/* declaring_type */
	, &Comparer_1_t5455_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2198/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &Comparer_1_get_Default_m31379_GenericMethod/* genericMethod */

};
static MethodInfo* Comparer_1_t5455_MethodInfos[] =
{
	&Comparer_1__ctor_m31376_MethodInfo,
	&Comparer_1__cctor_m31377_MethodInfo,
	&Comparer_1_System_Collections_IComparer_Compare_m31378_MethodInfo,
	&Comparer_1_Compare_m53702_MethodInfo,
	&Comparer_1_get_Default_m31379_MethodInfo,
	NULL
};
static MethodInfo* Comparer_1_t5455_VTable[] =
{
	&Object_Equals_m1252_MethodInfo,
	&Object_Finalize_m1253_MethodInfo,
	&Object_GetHashCode_m1254_MethodInfo,
	&Object_ToString_m1255_MethodInfo,
	&Comparer_1_Compare_m53702_MethodInfo,
	&Comparer_1_System_Collections_IComparer_Compare_m31378_MethodInfo,
	NULL,
};
static TypeInfo* Comparer_1_t5455_InterfacesTypeInfos[] = 
{
	&IComparer_1_t10403_il2cpp_TypeInfo,
	&IComparer_t1475_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair Comparer_1_t5455_InterfacesOffsets[] = 
{
	{ &IComparer_1_t10403_il2cpp_TypeInfo, 4},
	{ &IComparer_t1475_il2cpp_TypeInfo, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType Comparer_1_t5455_0_0_0;
extern Il2CppType Comparer_1_t5455_1_0_0;
struct Comparer_1_t5455;
extern Il2CppGenericClass Comparer_1_t5455_GenericClass;
TypeInfo Comparer_1_t5455_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "Comparer`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, Comparer_1_t5455_MethodInfos/* methods */
	, Comparer_1_t5455_PropertyInfos/* properties */
	, Comparer_1_t5455_FieldInfos/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &Comparer_1_t5455_il2cpp_TypeInfo/* element_class */
	, Comparer_1_t5455_InterfacesTypeInfos/* implemented_interfaces */
	, Comparer_1_t5455_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &Comparer_1_t5455_il2cpp_TypeInfo/* cast_class */
	, &Comparer_1_t5455_0_0_0/* byval_arg */
	, &Comparer_1_t5455_1_0_0/* this_arg */
	, Comparer_1_t5455_InterfacesOffsets/* interface_offsets */
	, &Comparer_1_t5455_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Comparer_1_t5455)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(Comparer_1_t5455_StaticFields)/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 8321/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, true/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 7/* vtable_count */
	, 2/* interfaces_count */
	, 2/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.IComparer`1<System.TimeSpan>::Compare(T,T)
// Metadata Definition System.Collections.Generic.IComparer`1<System.TimeSpan>
extern Il2CppType TimeSpan_t438_0_0_0;
extern Il2CppType TimeSpan_t438_0_0_0;
static ParameterInfo IComparer_1_t10403_IComparer_1_Compare_m53703_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &TimeSpan_t438_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &TimeSpan_t438_0_0_0},
};
extern Il2CppType Int32_t386_0_0_0;
extern void* RuntimeInvoker_Int32_t386_TimeSpan_t438_TimeSpan_t438 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IComparer_1_Compare_m53703_GenericMethod;
// System.Int32 System.Collections.Generic.IComparer`1<System.TimeSpan>::Compare(T,T)
MethodInfo IComparer_1_Compare_m53703_MethodInfo = 
{
	"Compare"/* name */
	, NULL/* method */
	, &IComparer_1_t10403_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t386_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t386_TimeSpan_t438_TimeSpan_t438/* invoker_method */
	, IComparer_1_t10403_IComparer_1_Compare_m53703_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IComparer_1_Compare_m53703_GenericMethod/* genericMethod */

};
static MethodInfo* IComparer_1_t10403_MethodInfos[] =
{
	&IComparer_1_Compare_m53703_MethodInfo,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IComparer_1_t10403_0_0_0;
extern Il2CppType IComparer_1_t10403_1_0_0;
struct IComparer_1_t10403;
extern Il2CppGenericClass IComparer_1_t10403_GenericClass;
TypeInfo IComparer_1_t10403_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IComparer`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IComparer_1_t10403_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IComparer_1_t10403_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IComparer_1_t10403_il2cpp_TypeInfo/* cast_class */
	, &IComparer_1_t10403_0_0_0/* byval_arg */
	, &IComparer_1_t10403_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IComparer_1_t10403_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo IComparable_t442_il2cpp_TypeInfo;
extern MethodInfo IComparable_CompareTo_m13252_MethodInfo;
extern MethodInfo ArgumentException__ctor_m4333_MethodInfo;


// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>::.ctor()
 void DefaultComparer__ctor_m31380 (DefaultComparer_t5456 * __this, MethodInfo* method){
	{
		Comparer_1__ctor_m31376(__this, /*hidden argument*/&Comparer_1__ctor_m31376_MethodInfo);
		return;
	}
}
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>::Compare(T,T)
extern MethodInfo DefaultComparer_Compare_m31381_MethodInfo;
 int32_t DefaultComparer_Compare_m31381 (DefaultComparer_t5456 * __this, TimeSpan_t438  ___x, TimeSpan_t438  ___y, MethodInfo* method){
	int32_t G_B4_0 = 0;
	{
		TimeSpan_t438  L_0 = ___x;
		Object_t * L_1 = Box(InitializedTypeInfo(&TimeSpan_t438_il2cpp_TypeInfo), &L_0);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		TimeSpan_t438  L_2 = ___y;
		Object_t * L_3 = Box(InitializedTypeInfo(&TimeSpan_t438_il2cpp_TypeInfo), &L_2);
		if (L_3)
		{
			goto IL_0013;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_0014;
	}

IL_0013:
	{
		G_B4_0 = (-1);
	}

IL_0014:
	{
		return G_B4_0;
	}

IL_0015:
	{
		TimeSpan_t438  L_4 = ___y;
		Object_t * L_5 = Box(InitializedTypeInfo(&TimeSpan_t438_il2cpp_TypeInfo), &L_4);
		if (L_5)
		{
			goto IL_001f;
		}
	}
	{
		return 1;
	}

IL_001f:
	{
		TimeSpan_t438  L_6 = ___x;
		Object_t * L_7 = Box(InitializedTypeInfo(&TimeSpan_t438_il2cpp_TypeInfo), &L_6);
		if (!((Object_t*)IsInst(L_7, InitializedTypeInfo(&IComparable_1_t2842_il2cpp_TypeInfo))))
		{
			goto IL_003e;
		}
	}
	{
		TimeSpan_t438  L_8 = ___x;
		Object_t * L_9 = Box(InitializedTypeInfo(&TimeSpan_t438_il2cpp_TypeInfo), &L_8);
		NullCheck(((Object_t*)Castclass(L_9, InitializedTypeInfo(&IComparable_1_t2842_il2cpp_TypeInfo))));
		int32_t L_10 = (int32_t)InterfaceFuncInvoker1< int32_t, TimeSpan_t438  >::Invoke(&IComparable_1_CompareTo_m53173_MethodInfo, ((Object_t*)Castclass(L_9, InitializedTypeInfo(&IComparable_1_t2842_il2cpp_TypeInfo))), ___y);
		return L_10;
	}

IL_003e:
	{
		TimeSpan_t438  L_11 = ___x;
		Object_t * L_12 = Box(InitializedTypeInfo(&TimeSpan_t438_il2cpp_TypeInfo), &L_11);
		if (!((Object_t *)IsInst(L_12, InitializedTypeInfo(&IComparable_t442_il2cpp_TypeInfo))))
		{
			goto IL_0062;
		}
	}
	{
		TimeSpan_t438  L_13 = ___x;
		Object_t * L_14 = Box(InitializedTypeInfo(&TimeSpan_t438_il2cpp_TypeInfo), &L_13);
		TimeSpan_t438  L_15 = ___y;
		Object_t * L_16 = Box(InitializedTypeInfo(&TimeSpan_t438_il2cpp_TypeInfo), &L_15);
		NullCheck(((Object_t *)Castclass(L_14, InitializedTypeInfo(&IComparable_t442_il2cpp_TypeInfo))));
		int32_t L_17 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(&IComparable_CompareTo_m13252_MethodInfo, ((Object_t *)Castclass(L_14, InitializedTypeInfo(&IComparable_t442_il2cpp_TypeInfo))), L_16);
		return L_17;
	}

IL_0062:
	{
		ArgumentException_t922 * L_18 = (ArgumentException_t922 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t922_il2cpp_TypeInfo));
		ArgumentException__ctor_m4333(L_18, (String_t*) &_stringLiteral1962, /*hidden argument*/&ArgumentException__ctor_m4333_MethodInfo);
		il2cpp_codegen_raise_exception(L_18);
	}
}
// Metadata Definition System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod DefaultComparer__ctor_m31380_GenericMethod;
// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>::.ctor()
MethodInfo DefaultComparer__ctor_m31380_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&DefaultComparer__ctor_m31380/* method */
	, &DefaultComparer_t5456_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &DefaultComparer__ctor_m31380_GenericMethod/* genericMethod */

};
extern Il2CppType TimeSpan_t438_0_0_0;
extern Il2CppType TimeSpan_t438_0_0_0;
static ParameterInfo DefaultComparer_t5456_DefaultComparer_Compare_m31381_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &TimeSpan_t438_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &TimeSpan_t438_0_0_0},
};
extern Il2CppType Int32_t386_0_0_0;
extern void* RuntimeInvoker_Int32_t386_TimeSpan_t438_TimeSpan_t438 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod DefaultComparer_Compare_m31381_GenericMethod;
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>::Compare(T,T)
MethodInfo DefaultComparer_Compare_m31381_MethodInfo = 
{
	"Compare"/* name */
	, (methodPointerType)&DefaultComparer_Compare_m31381/* method */
	, &DefaultComparer_t5456_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t386_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t386_TimeSpan_t438_TimeSpan_t438/* invoker_method */
	, DefaultComparer_t5456_DefaultComparer_Compare_m31381_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &DefaultComparer_Compare_m31381_GenericMethod/* genericMethod */

};
static MethodInfo* DefaultComparer_t5456_MethodInfos[] =
{
	&DefaultComparer__ctor_m31380_MethodInfo,
	&DefaultComparer_Compare_m31381_MethodInfo,
	NULL
};
static MethodInfo* DefaultComparer_t5456_VTable[] =
{
	&Object_Equals_m1252_MethodInfo,
	&Object_Finalize_m1253_MethodInfo,
	&Object_GetHashCode_m1254_MethodInfo,
	&Object_ToString_m1255_MethodInfo,
	&DefaultComparer_Compare_m31381_MethodInfo,
	&Comparer_1_System_Collections_IComparer_Compare_m31378_MethodInfo,
	&DefaultComparer_Compare_m31381_MethodInfo,
};
static Il2CppInterfaceOffsetPair DefaultComparer_t5456_InterfacesOffsets[] = 
{
	{ &IComparer_1_t10403_il2cpp_TypeInfo, 4},
	{ &IComparer_t1475_il2cpp_TypeInfo, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType DefaultComparer_t5456_0_0_0;
extern Il2CppType DefaultComparer_t5456_1_0_0;
struct DefaultComparer_t5456;
extern Il2CppGenericClass DefaultComparer_t5456_GenericClass;
extern TypeInfo Comparer_1_t1958_il2cpp_TypeInfo;
TypeInfo DefaultComparer_t5456_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "DefaultComparer"/* name */
	, ""/* namespaze */
	, DefaultComparer_t5456_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Comparer_1_t5455_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Comparer_1_t1958_il2cpp_TypeInfo/* nested_in */
	, &DefaultComparer_t5456_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, DefaultComparer_t5456_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &DefaultComparer_t5456_il2cpp_TypeInfo/* cast_class */
	, &DefaultComparer_t5456_0_0_0/* byval_arg */
	, &DefaultComparer_t5456_1_0_0/* this_arg */
	, DefaultComparer_t5456_InterfacesOffsets/* interface_offsets */
	, &DefaultComparer_t5456_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (DefaultComparer_t5456)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048835/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 2/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 7/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GenericEqualityComparer_1_t2841_il2cpp_TypeInfo;

extern TypeInfo IEquatable_1_t2843_il2cpp_TypeInfo;
extern MethodInfo EqualityComparer_1__ctor_m31384_MethodInfo;
extern MethodInfo IEquatable_1_Equals_m53188_MethodInfo;


// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>::.ctor()
extern MethodInfo GenericEqualityComparer_1__ctor_m13876_MethodInfo;
 void GenericEqualityComparer_1__ctor_m13876 (GenericEqualityComparer_1_t2841 * __this, MethodInfo* method){
	{
		EqualityComparer_1__ctor_m31384(__this, /*hidden argument*/&EqualityComparer_1__ctor_m31384_MethodInfo);
		return;
	}
}
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>::GetHashCode(T)
extern MethodInfo GenericEqualityComparer_1_GetHashCode_m31382_MethodInfo;
 int32_t GenericEqualityComparer_1_GetHashCode_m31382 (GenericEqualityComparer_1_t2841 * __this, TimeSpan_t438  ___obj, MethodInfo* method){
	{
		TimeSpan_t438  L_0 = ___obj;
		Object_t * L_1 = Box(InitializedTypeInfo(&TimeSpan_t438_il2cpp_TypeInfo), &L_0);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		NullCheck(Box(InitializedTypeInfo(&TimeSpan_t438_il2cpp_TypeInfo), &(*(&___obj))));
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&Object_GetHashCode_m1254_MethodInfo, Box(InitializedTypeInfo(&TimeSpan_t438_il2cpp_TypeInfo), &(*(&___obj))));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>::Equals(T,T)
extern MethodInfo GenericEqualityComparer_1_Equals_m31383_MethodInfo;
 bool GenericEqualityComparer_1_Equals_m31383 (GenericEqualityComparer_1_t2841 * __this, TimeSpan_t438  ___x, TimeSpan_t438  ___y, MethodInfo* method){
	{
		TimeSpan_t438  L_0 = ___x;
		Object_t * L_1 = Box(InitializedTypeInfo(&TimeSpan_t438_il2cpp_TypeInfo), &L_0);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		TimeSpan_t438  L_2 = ___y;
		Object_t * L_3 = Box(InitializedTypeInfo(&TimeSpan_t438_il2cpp_TypeInfo), &L_2);
		return ((((Object_t *)L_3) == ((Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		NullCheck(Box(InitializedTypeInfo(&TimeSpan_t438_il2cpp_TypeInfo), &(*(&___x))));
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, TimeSpan_t438  >::Invoke(&IEquatable_1_Equals_m53188_MethodInfo, Box(InitializedTypeInfo(&TimeSpan_t438_il2cpp_TypeInfo), &(*(&___x))), ___y);
		return L_4;
	}
}
// Metadata Definition System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod GenericEqualityComparer_1__ctor_m13876_GenericMethod;
// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>::.ctor()
MethodInfo GenericEqualityComparer_1__ctor_m13876_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&GenericEqualityComparer_1__ctor_m13876/* method */
	, &GenericEqualityComparer_1_t2841_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &GenericEqualityComparer_1__ctor_m13876_GenericMethod/* genericMethod */

};
extern Il2CppType TimeSpan_t438_0_0_0;
static ParameterInfo GenericEqualityComparer_1_t2841_GenericEqualityComparer_1_GetHashCode_m31382_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &TimeSpan_t438_0_0_0},
};
extern Il2CppType Int32_t386_0_0_0;
extern void* RuntimeInvoker_Int32_t386_TimeSpan_t438 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod GenericEqualityComparer_1_GetHashCode_m31382_GenericMethod;
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>::GetHashCode(T)
MethodInfo GenericEqualityComparer_1_GetHashCode_m31382_MethodInfo = 
{
	"GetHashCode"/* name */
	, (methodPointerType)&GenericEqualityComparer_1_GetHashCode_m31382/* method */
	, &GenericEqualityComparer_1_t2841_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t386_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t386_TimeSpan_t438/* invoker_method */
	, GenericEqualityComparer_1_t2841_GenericEqualityComparer_1_GetHashCode_m31382_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &GenericEqualityComparer_1_GetHashCode_m31382_GenericMethod/* genericMethod */

};
extern Il2CppType TimeSpan_t438_0_0_0;
extern Il2CppType TimeSpan_t438_0_0_0;
static ParameterInfo GenericEqualityComparer_1_t2841_GenericEqualityComparer_1_Equals_m31383_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &TimeSpan_t438_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &TimeSpan_t438_0_0_0},
};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379_TimeSpan_t438_TimeSpan_t438 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod GenericEqualityComparer_1_Equals_m31383_GenericMethod;
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>::Equals(T,T)
MethodInfo GenericEqualityComparer_1_Equals_m31383_MethodInfo = 
{
	"Equals"/* name */
	, (methodPointerType)&GenericEqualityComparer_1_Equals_m31383/* method */
	, &GenericEqualityComparer_1_t2841_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t379_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t379_TimeSpan_t438_TimeSpan_t438/* invoker_method */
	, GenericEqualityComparer_1_t2841_GenericEqualityComparer_1_Equals_m31383_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 9/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &GenericEqualityComparer_1_Equals_m31383_GenericMethod/* genericMethod */

};
static MethodInfo* GenericEqualityComparer_1_t2841_MethodInfos[] =
{
	&GenericEqualityComparer_1__ctor_m13876_MethodInfo,
	&GenericEqualityComparer_1_GetHashCode_m31382_MethodInfo,
	&GenericEqualityComparer_1_Equals_m31383_MethodInfo,
	NULL
};
extern MethodInfo EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m31387_MethodInfo;
extern MethodInfo EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m31386_MethodInfo;
static MethodInfo* GenericEqualityComparer_1_t2841_VTable[] =
{
	&Object_Equals_m1252_MethodInfo,
	&Object_Finalize_m1253_MethodInfo,
	&Object_GetHashCode_m1254_MethodInfo,
	&Object_ToString_m1255_MethodInfo,
	&GenericEqualityComparer_1_Equals_m31383_MethodInfo,
	&GenericEqualityComparer_1_GetHashCode_m31382_MethodInfo,
	&EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m31387_MethodInfo,
	&EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m31386_MethodInfo,
	&GenericEqualityComparer_1_GetHashCode_m31382_MethodInfo,
	&GenericEqualityComparer_1_Equals_m31383_MethodInfo,
};
extern TypeInfo IEqualityComparer_1_t10404_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair GenericEqualityComparer_1_t2841_InterfacesOffsets[] = 
{
	{ &IEqualityComparer_1_t10404_il2cpp_TypeInfo, 4},
	{ &IEqualityComparer_t1482_il2cpp_TypeInfo, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType GenericEqualityComparer_1_t2841_0_0_0;
extern Il2CppType GenericEqualityComparer_1_t2841_1_0_0;
extern TypeInfo EqualityComparer_1_t5457_il2cpp_TypeInfo;
struct GenericEqualityComparer_1_t2841;
extern Il2CppGenericClass GenericEqualityComparer_1_t2841_GenericClass;
TypeInfo GenericEqualityComparer_1_t2841_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "GenericEqualityComparer`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, GenericEqualityComparer_1_t2841_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &EqualityComparer_1_t5457_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &GenericEqualityComparer_1_t2841_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, GenericEqualityComparer_1_t2841_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &GenericEqualityComparer_1_t2841_il2cpp_TypeInfo/* cast_class */
	, &GenericEqualityComparer_1_t2841_0_0_0/* byval_arg */
	, &GenericEqualityComparer_1_t2841_1_0_0/* this_arg */
	, GenericEqualityComparer_1_t2841_InterfacesOffsets/* interface_offsets */
	, &GenericEqualityComparer_1_t2841_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (GenericEqualityComparer_1_t2841)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1057024/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 3/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 10/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo DefaultComparer_t5458_il2cpp_TypeInfo;
extern Il2CppType IEquatable_1_t2843_0_0_0;
extern MethodInfo DefaultComparer__ctor_m31389_MethodInfo;
extern MethodInfo EqualityComparer_1_GetHashCode_m53704_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m53705_MethodInfo;


// System.Void System.Collections.Generic.EqualityComparer`1<System.TimeSpan>::.ctor()
 void EqualityComparer_1__ctor_m31384 (EqualityComparer_1_t5457 * __this, MethodInfo* method){
	{
		Object__ctor_m1260(__this, /*hidden argument*/&Object__ctor_m1260_MethodInfo);
		return;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1<System.TimeSpan>::.cctor()
extern MethodInfo EqualityComparer_1__cctor_m31385_MethodInfo;
 void EqualityComparer_1__cctor_m31385 (Object_t * __this/* static, unused */, MethodInfo* method){
	DefaultComparer_t5458 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (DefaultComparer_t5458 *)il2cpp_codegen_object_new(InitializedTypeInfo(&DefaultComparer_t5458_il2cpp_TypeInfo));
	DefaultComparer__ctor_m31389(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, &DefaultComparer__ctor_m31389_MethodInfo);
	((EqualityComparer_1_t5457_StaticFields*)InitializedTypeInfo(&EqualityComparer_1_t5457_il2cpp_TypeInfo)->static_fields)->____default_0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.TimeSpan>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
 int32_t EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m31386 (EqualityComparer_1_t5457 * __this, Object_t * ___obj, MethodInfo* method){
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker1< int32_t, TimeSpan_t438  >::Invoke(&EqualityComparer_1_GetHashCode_m53704_MethodInfo, __this, ((*(TimeSpan_t438 *)((TimeSpan_t438 *)UnBox (___obj, InitializedTypeInfo(&TimeSpan_t438_il2cpp_TypeInfo))))));
		return L_0;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.TimeSpan>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
 bool EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m31387 (EqualityComparer_1_t5457 * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method){
	{
		bool L_0 = (bool)VirtFuncInvoker2< bool, TimeSpan_t438 , TimeSpan_t438  >::Invoke(&EqualityComparer_1_Equals_m53705_MethodInfo, __this, ((*(TimeSpan_t438 *)((TimeSpan_t438 *)UnBox (___x, InitializedTypeInfo(&TimeSpan_t438_il2cpp_TypeInfo))))), ((*(TimeSpan_t438 *)((TimeSpan_t438 *)UnBox (___y, InitializedTypeInfo(&TimeSpan_t438_il2cpp_TypeInfo))))));
		return L_0;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.TimeSpan>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.TimeSpan>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<System.TimeSpan>::get_Default()
extern MethodInfo EqualityComparer_1_get_Default_m31388_MethodInfo;
 EqualityComparer_1_t5457 * EqualityComparer_1_get_Default_m31388 (Object_t * __this/* static, unused */, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&EqualityComparer_1_t5457_il2cpp_TypeInfo));
		return (((EqualityComparer_1_t5457_StaticFields*)InitializedTypeInfo(&EqualityComparer_1_t5457_il2cpp_TypeInfo)->static_fields)->____default_0);
	}
}
// Metadata Definition System.Collections.Generic.EqualityComparer`1<System.TimeSpan>
extern Il2CppType EqualityComparer_1_t5457_0_0_49;
FieldInfo EqualityComparer_1_t5457_____default_0_FieldInfo = 
{
	"_default"/* name */
	, &EqualityComparer_1_t5457_0_0_49/* type */
	, &EqualityComparer_1_t5457_il2cpp_TypeInfo/* parent */
	, offsetof(EqualityComparer_1_t5457_StaticFields, ____default_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* EqualityComparer_1_t5457_FieldInfos[] =
{
	&EqualityComparer_1_t5457_____default_0_FieldInfo,
	NULL
};
static PropertyInfo EqualityComparer_1_t5457____Default_PropertyInfo = 
{
	&EqualityComparer_1_t5457_il2cpp_TypeInfo/* parent */
	, "Default"/* name */
	, &EqualityComparer_1_get_Default_m31388_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* EqualityComparer_1_t5457_PropertyInfos[] =
{
	&EqualityComparer_1_t5457____Default_PropertyInfo,
	NULL
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod EqualityComparer_1__ctor_m31384_GenericMethod;
// System.Void System.Collections.Generic.EqualityComparer`1<System.TimeSpan>::.ctor()
MethodInfo EqualityComparer_1__ctor_m31384_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&EqualityComparer_1__ctor_m31384/* method */
	, &EqualityComparer_1_t5457_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6276/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &EqualityComparer_1__ctor_m31384_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod EqualityComparer_1__cctor_m31385_GenericMethod;
// System.Void System.Collections.Generic.EqualityComparer`1<System.TimeSpan>::.cctor()
MethodInfo EqualityComparer_1__cctor_m31385_MethodInfo = 
{
	".cctor"/* name */
	, (methodPointerType)&EqualityComparer_1__cctor_m31385/* method */
	, &EqualityComparer_1_t5457_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6161/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &EqualityComparer_1__cctor_m31385_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
static ParameterInfo EqualityComparer_1_t5457_EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m31386_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType Int32_t386_0_0_0;
extern void* RuntimeInvoker_Int32_t386_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m31386_GenericMethod;
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.TimeSpan>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
MethodInfo EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m31386_MethodInfo = 
{
	"System.Collections.IEqualityComparer.GetHashCode"/* name */
	, (methodPointerType)&EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m31386/* method */
	, &EqualityComparer_1_t5457_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t386_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t386_Object_t/* invoker_method */
	, EqualityComparer_1_t5457_EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m31386_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m31386_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo EqualityComparer_1_t5457_EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m31387_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m31387_GenericMethod;
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.TimeSpan>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
MethodInfo EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m31387_MethodInfo = 
{
	"System.Collections.IEqualityComparer.Equals"/* name */
	, (methodPointerType)&EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m31387/* method */
	, &EqualityComparer_1_t5457_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t379_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t379_Object_t_Object_t/* invoker_method */
	, EqualityComparer_1_t5457_EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m31387_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m31387_GenericMethod/* genericMethod */

};
extern Il2CppType TimeSpan_t438_0_0_0;
static ParameterInfo EqualityComparer_1_t5457_EqualityComparer_1_GetHashCode_m53704_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &TimeSpan_t438_0_0_0},
};
extern Il2CppType Int32_t386_0_0_0;
extern void* RuntimeInvoker_Int32_t386_TimeSpan_t438 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod EqualityComparer_1_GetHashCode_m53704_GenericMethod;
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.TimeSpan>::GetHashCode(T)
MethodInfo EqualityComparer_1_GetHashCode_m53704_MethodInfo = 
{
	"GetHashCode"/* name */
	, NULL/* method */
	, &EqualityComparer_1_t5457_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t386_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t386_TimeSpan_t438/* invoker_method */
	, EqualityComparer_1_t5457_EqualityComparer_1_GetHashCode_m53704_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &EqualityComparer_1_GetHashCode_m53704_GenericMethod/* genericMethod */

};
extern Il2CppType TimeSpan_t438_0_0_0;
extern Il2CppType TimeSpan_t438_0_0_0;
static ParameterInfo EqualityComparer_1_t5457_EqualityComparer_1_Equals_m53705_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &TimeSpan_t438_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &TimeSpan_t438_0_0_0},
};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379_TimeSpan_t438_TimeSpan_t438 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod EqualityComparer_1_Equals_m53705_GenericMethod;
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.TimeSpan>::Equals(T,T)
MethodInfo EqualityComparer_1_Equals_m53705_MethodInfo = 
{
	"Equals"/* name */
	, NULL/* method */
	, &EqualityComparer_1_t5457_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t379_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t379_TimeSpan_t438_TimeSpan_t438/* invoker_method */
	, EqualityComparer_1_t5457_EqualityComparer_1_Equals_m53705_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 9/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &EqualityComparer_1_Equals_m53705_GenericMethod/* genericMethod */

};
extern Il2CppType EqualityComparer_1_t5457_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod EqualityComparer_1_get_Default_m31388_GenericMethod;
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<System.TimeSpan>::get_Default()
MethodInfo EqualityComparer_1_get_Default_m31388_MethodInfo = 
{
	"get_Default"/* name */
	, (methodPointerType)&EqualityComparer_1_get_Default_m31388/* method */
	, &EqualityComparer_1_t5457_il2cpp_TypeInfo/* declaring_type */
	, &EqualityComparer_1_t5457_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2198/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &EqualityComparer_1_get_Default_m31388_GenericMethod/* genericMethod */

};
static MethodInfo* EqualityComparer_1_t5457_MethodInfos[] =
{
	&EqualityComparer_1__ctor_m31384_MethodInfo,
	&EqualityComparer_1__cctor_m31385_MethodInfo,
	&EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m31386_MethodInfo,
	&EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m31387_MethodInfo,
	&EqualityComparer_1_GetHashCode_m53704_MethodInfo,
	&EqualityComparer_1_Equals_m53705_MethodInfo,
	&EqualityComparer_1_get_Default_m31388_MethodInfo,
	NULL
};
static MethodInfo* EqualityComparer_1_t5457_VTable[] =
{
	&Object_Equals_m1252_MethodInfo,
	&Object_Finalize_m1253_MethodInfo,
	&Object_GetHashCode_m1254_MethodInfo,
	&Object_ToString_m1255_MethodInfo,
	&EqualityComparer_1_Equals_m53705_MethodInfo,
	&EqualityComparer_1_GetHashCode_m53704_MethodInfo,
	&EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m31387_MethodInfo,
	&EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m31386_MethodInfo,
	NULL,
	NULL,
};
static TypeInfo* EqualityComparer_1_t5457_InterfacesTypeInfos[] = 
{
	&IEqualityComparer_1_t10404_il2cpp_TypeInfo,
	&IEqualityComparer_t1482_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair EqualityComparer_1_t5457_InterfacesOffsets[] = 
{
	{ &IEqualityComparer_1_t10404_il2cpp_TypeInfo, 4},
	{ &IEqualityComparer_t1482_il2cpp_TypeInfo, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType EqualityComparer_1_t5457_0_0_0;
extern Il2CppType EqualityComparer_1_t5457_1_0_0;
struct EqualityComparer_1_t5457;
extern Il2CppGenericClass EqualityComparer_1_t5457_GenericClass;
TypeInfo EqualityComparer_1_t5457_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "EqualityComparer`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, EqualityComparer_1_t5457_MethodInfos/* methods */
	, EqualityComparer_1_t5457_PropertyInfos/* properties */
	, EqualityComparer_1_t5457_FieldInfos/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &EqualityComparer_1_t5457_il2cpp_TypeInfo/* element_class */
	, EqualityComparer_1_t5457_InterfacesTypeInfos/* implemented_interfaces */
	, EqualityComparer_1_t5457_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &EqualityComparer_1_t5457_il2cpp_TypeInfo/* cast_class */
	, &EqualityComparer_1_t5457_0_0_0/* byval_arg */
	, &EqualityComparer_1_t5457_1_0_0/* this_arg */
	, EqualityComparer_1_t5457_InterfacesOffsets/* interface_offsets */
	, &EqualityComparer_1_t5457_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (EqualityComparer_1_t5457)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(EqualityComparer_1_t5457_StaticFields)/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 8321/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, true/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 1/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 10/* vtable_count */
	, 2/* interfaces_count */
	, 2/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Boolean System.Collections.Generic.IEqualityComparer`1<System.TimeSpan>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<System.TimeSpan>::GetHashCode(T)
// Metadata Definition System.Collections.Generic.IEqualityComparer`1<System.TimeSpan>
extern Il2CppType TimeSpan_t438_0_0_0;
extern Il2CppType TimeSpan_t438_0_0_0;
static ParameterInfo IEqualityComparer_1_t10404_IEqualityComparer_1_Equals_m53706_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &TimeSpan_t438_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &TimeSpan_t438_0_0_0},
};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379_TimeSpan_t438_TimeSpan_t438 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEqualityComparer_1_Equals_m53706_GenericMethod;
// System.Boolean System.Collections.Generic.IEqualityComparer`1<System.TimeSpan>::Equals(T,T)
MethodInfo IEqualityComparer_1_Equals_m53706_MethodInfo = 
{
	"Equals"/* name */
	, NULL/* method */
	, &IEqualityComparer_1_t10404_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t379_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t379_TimeSpan_t438_TimeSpan_t438/* invoker_method */
	, IEqualityComparer_1_t10404_IEqualityComparer_1_Equals_m53706_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEqualityComparer_1_Equals_m53706_GenericMethod/* genericMethod */

};
extern Il2CppType TimeSpan_t438_0_0_0;
static ParameterInfo IEqualityComparer_1_t10404_IEqualityComparer_1_GetHashCode_m53707_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &TimeSpan_t438_0_0_0},
};
extern Il2CppType Int32_t386_0_0_0;
extern void* RuntimeInvoker_Int32_t386_TimeSpan_t438 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEqualityComparer_1_GetHashCode_m53707_GenericMethod;
// System.Int32 System.Collections.Generic.IEqualityComparer`1<System.TimeSpan>::GetHashCode(T)
MethodInfo IEqualityComparer_1_GetHashCode_m53707_MethodInfo = 
{
	"GetHashCode"/* name */
	, NULL/* method */
	, &IEqualityComparer_1_t10404_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t386_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t386_TimeSpan_t438/* invoker_method */
	, IEqualityComparer_1_t10404_IEqualityComparer_1_GetHashCode_m53707_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEqualityComparer_1_GetHashCode_m53707_GenericMethod/* genericMethod */

};
static MethodInfo* IEqualityComparer_1_t10404_MethodInfos[] =
{
	&IEqualityComparer_1_Equals_m53706_MethodInfo,
	&IEqualityComparer_1_GetHashCode_m53707_MethodInfo,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEqualityComparer_1_t10404_0_0_0;
extern Il2CppType IEqualityComparer_1_t10404_1_0_0;
struct IEqualityComparer_1_t10404;
extern Il2CppGenericClass IEqualityComparer_1_t10404_GenericClass;
TypeInfo IEqualityComparer_1_t10404_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEqualityComparer`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEqualityComparer_1_t10404_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEqualityComparer_1_t10404_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEqualityComparer_1_t10404_il2cpp_TypeInfo/* cast_class */
	, &IEqualityComparer_1_t10404_0_0_0/* byval_arg */
	, &IEqualityComparer_1_t10404_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEqualityComparer_1_t10404_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 2/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::.ctor()
 void DefaultComparer__ctor_m31389 (DefaultComparer_t5458 * __this, MethodInfo* method){
	{
		EqualityComparer_1__ctor_m31384(__this, /*hidden argument*/&EqualityComparer_1__ctor_m31384_MethodInfo);
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::GetHashCode(T)
extern MethodInfo DefaultComparer_GetHashCode_m31390_MethodInfo;
 int32_t DefaultComparer_GetHashCode_m31390 (DefaultComparer_t5458 * __this, TimeSpan_t438  ___obj, MethodInfo* method){
	{
		TimeSpan_t438  L_0 = ___obj;
		Object_t * L_1 = Box(InitializedTypeInfo(&TimeSpan_t438_il2cpp_TypeInfo), &L_0);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		NullCheck(Box(InitializedTypeInfo(&TimeSpan_t438_il2cpp_TypeInfo), &(*(&___obj))));
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&Object_GetHashCode_m1254_MethodInfo, Box(InitializedTypeInfo(&TimeSpan_t438_il2cpp_TypeInfo), &(*(&___obj))));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::Equals(T,T)
extern MethodInfo DefaultComparer_Equals_m31391_MethodInfo;
 bool DefaultComparer_Equals_m31391 (DefaultComparer_t5458 * __this, TimeSpan_t438  ___x, TimeSpan_t438  ___y, MethodInfo* method){
	{
		TimeSpan_t438  L_0 = ___x;
		Object_t * L_1 = Box(InitializedTypeInfo(&TimeSpan_t438_il2cpp_TypeInfo), &L_0);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		TimeSpan_t438  L_2 = ___y;
		Object_t * L_3 = Box(InitializedTypeInfo(&TimeSpan_t438_il2cpp_TypeInfo), &L_2);
		return ((((Object_t *)L_3) == ((Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		TimeSpan_t438  L_4 = ___y;
		Object_t * L_5 = Box(InitializedTypeInfo(&TimeSpan_t438_il2cpp_TypeInfo), &L_4);
		NullCheck(Box(InitializedTypeInfo(&TimeSpan_t438_il2cpp_TypeInfo), &(*(&___x))));
		bool L_6 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&Object_Equals_m1252_MethodInfo, Box(InitializedTypeInfo(&TimeSpan_t438_il2cpp_TypeInfo), &(*(&___x))), L_5);
		return L_6;
	}
}
// Metadata Definition System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod DefaultComparer__ctor_m31389_GenericMethod;
// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::.ctor()
MethodInfo DefaultComparer__ctor_m31389_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&DefaultComparer__ctor_m31389/* method */
	, &DefaultComparer_t5458_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &DefaultComparer__ctor_m31389_GenericMethod/* genericMethod */

};
extern Il2CppType TimeSpan_t438_0_0_0;
static ParameterInfo DefaultComparer_t5458_DefaultComparer_GetHashCode_m31390_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &TimeSpan_t438_0_0_0},
};
extern Il2CppType Int32_t386_0_0_0;
extern void* RuntimeInvoker_Int32_t386_TimeSpan_t438 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod DefaultComparer_GetHashCode_m31390_GenericMethod;
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::GetHashCode(T)
MethodInfo DefaultComparer_GetHashCode_m31390_MethodInfo = 
{
	"GetHashCode"/* name */
	, (methodPointerType)&DefaultComparer_GetHashCode_m31390/* method */
	, &DefaultComparer_t5458_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t386_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t386_TimeSpan_t438/* invoker_method */
	, DefaultComparer_t5458_DefaultComparer_GetHashCode_m31390_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &DefaultComparer_GetHashCode_m31390_GenericMethod/* genericMethod */

};
extern Il2CppType TimeSpan_t438_0_0_0;
extern Il2CppType TimeSpan_t438_0_0_0;
static ParameterInfo DefaultComparer_t5458_DefaultComparer_Equals_m31391_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &TimeSpan_t438_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &TimeSpan_t438_0_0_0},
};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379_TimeSpan_t438_TimeSpan_t438 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod DefaultComparer_Equals_m31391_GenericMethod;
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::Equals(T,T)
MethodInfo DefaultComparer_Equals_m31391_MethodInfo = 
{
	"Equals"/* name */
	, (methodPointerType)&DefaultComparer_Equals_m31391/* method */
	, &DefaultComparer_t5458_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t379_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t379_TimeSpan_t438_TimeSpan_t438/* invoker_method */
	, DefaultComparer_t5458_DefaultComparer_Equals_m31391_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 9/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &DefaultComparer_Equals_m31391_GenericMethod/* genericMethod */

};
static MethodInfo* DefaultComparer_t5458_MethodInfos[] =
{
	&DefaultComparer__ctor_m31389_MethodInfo,
	&DefaultComparer_GetHashCode_m31390_MethodInfo,
	&DefaultComparer_Equals_m31391_MethodInfo,
	NULL
};
static MethodInfo* DefaultComparer_t5458_VTable[] =
{
	&Object_Equals_m1252_MethodInfo,
	&Object_Finalize_m1253_MethodInfo,
	&Object_GetHashCode_m1254_MethodInfo,
	&Object_ToString_m1255_MethodInfo,
	&DefaultComparer_Equals_m31391_MethodInfo,
	&DefaultComparer_GetHashCode_m31390_MethodInfo,
	&EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m31387_MethodInfo,
	&EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m31386_MethodInfo,
	&DefaultComparer_GetHashCode_m31390_MethodInfo,
	&DefaultComparer_Equals_m31391_MethodInfo,
};
static Il2CppInterfaceOffsetPair DefaultComparer_t5458_InterfacesOffsets[] = 
{
	{ &IEqualityComparer_1_t10404_il2cpp_TypeInfo, 4},
	{ &IEqualityComparer_t1482_il2cpp_TypeInfo, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType DefaultComparer_t5458_0_0_0;
extern Il2CppType DefaultComparer_t5458_1_0_0;
struct DefaultComparer_t5458;
extern Il2CppGenericClass DefaultComparer_t5458_GenericClass;
TypeInfo DefaultComparer_t5458_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "DefaultComparer"/* name */
	, ""/* namespaze */
	, DefaultComparer_t5458_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &EqualityComparer_1_t5457_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &EqualityComparer_1_t1970_il2cpp_TypeInfo/* nested_in */
	, &DefaultComparer_t5458_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, DefaultComparer_t5458_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &DefaultComparer_t5458_il2cpp_TypeInfo/* cast_class */
	, &DefaultComparer_t5458_0_0_0/* byval_arg */
	, &DefaultComparer_t5458_1_0_0/* this_arg */
	, DefaultComparer_t5458_InterfacesOffsets/* interface_offsets */
	, &DefaultComparer_t5458_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (DefaultComparer_t5458)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1057027/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 3/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 10/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t7722_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.TypeCode>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.TypeCode>
extern MethodInfo IEnumerator_1_get_Current_m53708_MethodInfo;
static PropertyInfo IEnumerator_1_t7722____Current_PropertyInfo = 
{
	&IEnumerator_1_t7722_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m53708_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t7722_PropertyInfos[] =
{
	&IEnumerator_1_t7722____Current_PropertyInfo,
	NULL
};
extern Il2CppType TypeCode_t2406_0_0_0;
extern void* RuntimeInvoker_TypeCode_t2406 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m53708_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.TypeCode>::get_Current()
MethodInfo IEnumerator_1_get_Current_m53708_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t7722_il2cpp_TypeInfo/* declaring_type */
	, &TypeCode_t2406_0_0_0/* return_type */
	, RuntimeInvoker_TypeCode_t2406/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m53708_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t7722_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m53708_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t7722_InterfacesTypeInfos[] = 
{
	&IEnumerator_t26_il2cpp_TypeInfo,
	&IDisposable_t444_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t7722_0_0_0;
extern Il2CppType IEnumerator_1_t7722_1_0_0;
struct IEnumerator_1_t7722;
extern Il2CppGenericClass IEnumerator_1_t7722_GenericClass;
TypeInfo IEnumerator_1_t7722_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t7722_MethodInfos/* methods */
	, IEnumerator_1_t7722_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t7722_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t7722_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t7722_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t7722_0_0_0/* byval_arg */
	, &IEnumerator_1_t7722_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t7722_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t5459_il2cpp_TypeInfo;

extern TypeInfo TypeCode_t2406_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m31396_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisTypeCode_t2406_m41636_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.TypeCode>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.TypeCode>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisTypeCode_t2406_m41636 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.TypeCode>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m31392_MethodInfo;
 void InternalEnumerator_1__ctor_m31392 (InternalEnumerator_1_t5459 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.TypeCode>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m31393_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m31393 (InternalEnumerator_1_t5459 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m31396(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m31396_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&TypeCode_t2406_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.TypeCode>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m31394_MethodInfo;
 void InternalEnumerator_1_Dispose_m31394 (InternalEnumerator_1_t5459 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.TypeCode>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m31395_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m31395 (InternalEnumerator_1_t5459 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (__this->___array_0);
		NullCheck(L_1);
		int32_t L_2 = Array_get_Length_m7572(L_1, /*hidden argument*/&Array_get_Length_m7572_MethodInfo);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->___idx_1);
		int32_t L_5 = ((int32_t)(L_4-1));
		V_0 = L_5;
		__this->___idx_1 = L_5;
		G_B5_0 = ((((int32_t)((((int32_t)V_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.TypeCode>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m31396 (InternalEnumerator_1_t5459 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t1657 * L_1 = (InvalidOperationException_t1657 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1657_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m7566(L_1, (String_t*) &_stringLiteral1838, /*hidden argument*/&InvalidOperationException__ctor_m7566_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->___idx_1);
		if ((((uint32_t)L_2) != ((uint32_t)(-1))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t1657 * L_3 = (InvalidOperationException_t1657 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1657_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m7566(L_3, (String_t*) &_stringLiteral1839, /*hidden argument*/&InvalidOperationException__ctor_m7566_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array_0);
		Array_t * L_5 = (__this->___array_0);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m7572(L_5, /*hidden argument*/&Array_get_Length_m7572_MethodInfo);
		int32_t L_7 = (__this->___idx_1);
		NullCheck(L_4);
		int32_t L_8 = Array_InternalArray__get_Item_TisTypeCode_t2406_m41636(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisTypeCode_t2406_m41636_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.TypeCode>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t5459____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t5459_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t5459, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t386_0_0_1;
FieldInfo InternalEnumerator_1_t5459____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t386_0_0_1/* type */
	, &InternalEnumerator_1_t5459_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t5459, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t5459_FieldInfos[] =
{
	&InternalEnumerator_1_t5459____array_0_FieldInfo,
	&InternalEnumerator_1_t5459____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t5459____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5459_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m31393_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t5459____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5459_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m31396_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t5459_PropertyInfos[] =
{
	&InternalEnumerator_1_t5459____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t5459____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t5459_InternalEnumerator_1__ctor_m31392_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m31392_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.TypeCode>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m31392_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m31392/* method */
	, &InternalEnumerator_1_t5459_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t/* invoker_method */
	, InternalEnumerator_1_t5459_InternalEnumerator_1__ctor_m31392_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1__ctor_m31392_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m31393_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.TypeCode>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m31393_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m31393/* method */
	, &InternalEnumerator_1_t5459_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m31393_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m31394_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.TypeCode>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m31394_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m31394/* method */
	, &InternalEnumerator_1_t5459_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_Dispose_m31394_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m31395_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.TypeCode>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m31395_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m31395/* method */
	, &InternalEnumerator_1_t5459_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t379_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t379/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_MoveNext_m31395_GenericMethod/* genericMethod */

};
extern Il2CppType TypeCode_t2406_0_0_0;
extern void* RuntimeInvoker_TypeCode_t2406 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m31396_GenericMethod;
// T System.Array/InternalEnumerator`1<System.TypeCode>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m31396_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m31396/* method */
	, &InternalEnumerator_1_t5459_il2cpp_TypeInfo/* declaring_type */
	, &TypeCode_t2406_0_0_0/* return_type */
	, RuntimeInvoker_TypeCode_t2406/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_get_Current_m31396_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t5459_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m31392_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m31393_MethodInfo,
	&InternalEnumerator_1_Dispose_m31394_MethodInfo,
	&InternalEnumerator_1_MoveNext_m31395_MethodInfo,
	&InternalEnumerator_1_get_Current_m31396_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t5459_VTable[] =
{
	&ValueType_Equals_m2156_MethodInfo,
	&Object_Finalize_m1253_MethodInfo,
	&ValueType_GetHashCode_m2157_MethodInfo,
	&ValueType_ToString_m2158_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m31393_MethodInfo,
	&InternalEnumerator_1_MoveNext_m31395_MethodInfo,
	&InternalEnumerator_1_Dispose_m31394_MethodInfo,
	&InternalEnumerator_1_get_Current_m31396_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t5459_InterfacesTypeInfos[] = 
{
	&IEnumerator_t26_il2cpp_TypeInfo,
	&IDisposable_t444_il2cpp_TypeInfo,
	&IEnumerator_1_t7722_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t5459_InterfacesOffsets[] = 
{
	{ &IEnumerator_t26_il2cpp_TypeInfo, 4},
	{ &IDisposable_t444_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t7722_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t5459_0_0_0;
extern Il2CppType InternalEnumerator_1_t5459_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t5459_GenericClass;
TypeInfo InternalEnumerator_1_t5459_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t5459_MethodInfos/* methods */
	, InternalEnumerator_1_t5459_PropertyInfos/* properties */
	, InternalEnumerator_1_t5459_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t550_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t5459_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t5459_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t5459_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t5459_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t5459_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t5459_1_0_0/* this_arg */
	, InternalEnumerator_1_t5459_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t5459_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t5459)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t9992_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.TypeCode>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.TypeCode>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.TypeCode>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.TypeCode>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.TypeCode>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.TypeCode>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.TypeCode>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.TypeCode>
extern MethodInfo ICollection_1_get_Count_m53709_MethodInfo;
static PropertyInfo ICollection_1_t9992____Count_PropertyInfo = 
{
	&ICollection_1_t9992_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m53709_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m53710_MethodInfo;
static PropertyInfo ICollection_1_t9992____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t9992_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m53710_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t9992_PropertyInfos[] =
{
	&ICollection_1_t9992____Count_PropertyInfo,
	&ICollection_1_t9992____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t386_0_0_0;
extern void* RuntimeInvoker_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m53709_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.TypeCode>::get_Count()
MethodInfo ICollection_1_get_Count_m53709_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t9992_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t386_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t386/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_Count_m53709_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m53710_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.TypeCode>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m53710_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t9992_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t379_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t379/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_IsReadOnly_m53710_GenericMethod/* genericMethod */

};
extern Il2CppType TypeCode_t2406_0_0_0;
extern Il2CppType TypeCode_t2406_0_0_0;
static ParameterInfo ICollection_1_t9992_ICollection_1_Add_m53711_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TypeCode_t2406_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m53711_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.TypeCode>::Add(T)
MethodInfo ICollection_1_Add_m53711_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t9992_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Int32_t386/* invoker_method */
	, ICollection_1_t9992_ICollection_1_Add_m53711_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m53711_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m53712_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.TypeCode>::Clear()
MethodInfo ICollection_1_Clear_m53712_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t9992_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Clear_m53712_GenericMethod/* genericMethod */

};
extern Il2CppType TypeCode_t2406_0_0_0;
static ParameterInfo ICollection_1_t9992_ICollection_1_Contains_m53713_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TypeCode_t2406_0_0_0},
};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m53713_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.TypeCode>::Contains(T)
MethodInfo ICollection_1_Contains_m53713_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t9992_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t379_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t379_Int32_t386/* invoker_method */
	, ICollection_1_t9992_ICollection_1_Contains_m53713_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Contains_m53713_GenericMethod/* genericMethod */

};
extern Il2CppType TypeCodeU5BU5D_t5669_0_0_0;
extern Il2CppType TypeCodeU5BU5D_t5669_0_0_0;
extern Il2CppType Int32_t386_0_0_0;
static ParameterInfo ICollection_1_t9992_ICollection_1_CopyTo_m53714_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &TypeCodeU5BU5D_t5669_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m53714_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.TypeCode>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m53714_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t9992_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t_Int32_t386/* invoker_method */
	, ICollection_1_t9992_ICollection_1_CopyTo_m53714_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_CopyTo_m53714_GenericMethod/* genericMethod */

};
extern Il2CppType TypeCode_t2406_0_0_0;
static ParameterInfo ICollection_1_t9992_ICollection_1_Remove_m53715_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TypeCode_t2406_0_0_0},
};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m53715_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.TypeCode>::Remove(T)
MethodInfo ICollection_1_Remove_m53715_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t9992_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t379_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t379_Int32_t386/* invoker_method */
	, ICollection_1_t9992_ICollection_1_Remove_m53715_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Remove_m53715_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t9992_MethodInfos[] =
{
	&ICollection_1_get_Count_m53709_MethodInfo,
	&ICollection_1_get_IsReadOnly_m53710_MethodInfo,
	&ICollection_1_Add_m53711_MethodInfo,
	&ICollection_1_Clear_m53712_MethodInfo,
	&ICollection_1_Contains_m53713_MethodInfo,
	&ICollection_1_CopyTo_m53714_MethodInfo,
	&ICollection_1_Remove_m53715_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t9994_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t9992_InterfacesTypeInfos[] = 
{
	&IEnumerable_t55_il2cpp_TypeInfo,
	&IEnumerable_1_t9994_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t9992_0_0_0;
extern Il2CppType ICollection_1_t9992_1_0_0;
struct ICollection_1_t9992;
extern Il2CppGenericClass ICollection_1_t9992_GenericClass;
TypeInfo ICollection_1_t9992_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t9992_MethodInfos/* methods */
	, ICollection_1_t9992_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t9992_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t9992_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t9992_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t9992_0_0_0/* byval_arg */
	, &ICollection_1_t9992_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t9992_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.TypeCode>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.TypeCode>
extern Il2CppType IEnumerator_1_t7722_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m53716_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.TypeCode>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m53716_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t9994_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t7722_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerable_1_GetEnumerator_m53716_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t9994_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m53716_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t9994_InterfacesTypeInfos[] = 
{
	&IEnumerable_t55_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t9994_0_0_0;
extern Il2CppType IEnumerable_1_t9994_1_0_0;
struct IEnumerable_1_t9994;
extern Il2CppGenericClass IEnumerable_1_t9994_GenericClass;
TypeInfo IEnumerable_1_t9994_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t9994_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t9994_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t9994_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t9994_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t9994_0_0_0/* byval_arg */
	, &IEnumerable_1_t9994_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t9994_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t9993_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.TypeCode>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.TypeCode>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.TypeCode>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.TypeCode>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.TypeCode>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.TypeCode>
extern MethodInfo IList_1_get_Item_m53717_MethodInfo;
extern MethodInfo IList_1_set_Item_m53718_MethodInfo;
static PropertyInfo IList_1_t9993____Item_PropertyInfo = 
{
	&IList_1_t9993_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m53717_MethodInfo/* get */
	, &IList_1_set_Item_m53718_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t9993_PropertyInfos[] =
{
	&IList_1_t9993____Item_PropertyInfo,
	NULL
};
extern Il2CppType TypeCode_t2406_0_0_0;
static ParameterInfo IList_1_t9993_IList_1_IndexOf_m53719_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TypeCode_t2406_0_0_0},
};
extern Il2CppType Int32_t386_0_0_0;
extern void* RuntimeInvoker_Int32_t386_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m53719_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.TypeCode>::IndexOf(T)
MethodInfo IList_1_IndexOf_m53719_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t9993_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t386_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t386_Int32_t386/* invoker_method */
	, IList_1_t9993_IList_1_IndexOf_m53719_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_IndexOf_m53719_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t386_0_0_0;
extern Il2CppType TypeCode_t2406_0_0_0;
static ParameterInfo IList_1_t9993_IList_1_Insert_m53720_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &TypeCode_t2406_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Int32_t386_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m53720_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.TypeCode>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m53720_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t9993_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Int32_t386_Int32_t386/* invoker_method */
	, IList_1_t9993_IList_1_Insert_m53720_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_Insert_m53720_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t386_0_0_0;
static ParameterInfo IList_1_t9993_IList_1_RemoveAt_m53721_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m53721_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.TypeCode>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m53721_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t9993_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Int32_t386/* invoker_method */
	, IList_1_t9993_IList_1_RemoveAt_m53721_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m53721_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t386_0_0_0;
static ParameterInfo IList_1_t9993_IList_1_get_Item_m53717_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
};
extern Il2CppType TypeCode_t2406_0_0_0;
extern void* RuntimeInvoker_TypeCode_t2406_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m53717_GenericMethod;
// T System.Collections.Generic.IList`1<System.TypeCode>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m53717_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t9993_il2cpp_TypeInfo/* declaring_type */
	, &TypeCode_t2406_0_0_0/* return_type */
	, RuntimeInvoker_TypeCode_t2406_Int32_t386/* invoker_method */
	, IList_1_t9993_IList_1_get_Item_m53717_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_get_Item_m53717_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t386_0_0_0;
extern Il2CppType TypeCode_t2406_0_0_0;
static ParameterInfo IList_1_t9993_IList_1_set_Item_m53718_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &TypeCode_t2406_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Int32_t386_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m53718_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.TypeCode>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m53718_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t9993_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Int32_t386_Int32_t386/* invoker_method */
	, IList_1_t9993_IList_1_set_Item_m53718_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_set_Item_m53718_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t9993_MethodInfos[] =
{
	&IList_1_IndexOf_m53719_MethodInfo,
	&IList_1_Insert_m53720_MethodInfo,
	&IList_1_RemoveAt_m53721_MethodInfo,
	&IList_1_get_Item_m53717_MethodInfo,
	&IList_1_set_Item_m53718_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t9993_InterfacesTypeInfos[] = 
{
	&IEnumerable_t55_il2cpp_TypeInfo,
	&ICollection_1_t9992_il2cpp_TypeInfo,
	&IEnumerable_1_t9994_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t9993_0_0_0;
extern Il2CppType IList_1_t9993_1_0_0;
struct IList_1_t9993;
extern Il2CppGenericClass IList_1_t9993_GenericClass;
extern CustomAttributesCache IList_1_t2638__CustomAttributeCache;
TypeInfo IList_1_t9993_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t9993_MethodInfos/* methods */
	, IList_1_t9993_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t9993_il2cpp_TypeInfo/* element_class */
	, IList_1_t9993_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2638__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t9993_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t9993_0_0_0/* byval_arg */
	, &IList_1_t9993_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t9993_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t7724_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.UnitySerializationHolder/UnityType>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.UnitySerializationHolder/UnityType>
extern MethodInfo IEnumerator_1_get_Current_m53722_MethodInfo;
static PropertyInfo IEnumerator_1_t7724____Current_PropertyInfo = 
{
	&IEnumerator_1_t7724_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m53722_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t7724_PropertyInfos[] =
{
	&IEnumerator_1_t7724____Current_PropertyInfo,
	NULL
};
extern Il2CppType UnityType_t2409_0_0_0;
extern void* RuntimeInvoker_UnityType_t2409 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m53722_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.UnitySerializationHolder/UnityType>::get_Current()
MethodInfo IEnumerator_1_get_Current_m53722_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t7724_il2cpp_TypeInfo/* declaring_type */
	, &UnityType_t2409_0_0_0/* return_type */
	, RuntimeInvoker_UnityType_t2409/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m53722_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t7724_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m53722_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t7724_InterfacesTypeInfos[] = 
{
	&IEnumerator_t26_il2cpp_TypeInfo,
	&IDisposable_t444_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t7724_0_0_0;
extern Il2CppType IEnumerator_1_t7724_1_0_0;
struct IEnumerator_1_t7724;
extern Il2CppGenericClass IEnumerator_1_t7724_GenericClass;
TypeInfo IEnumerator_1_t7724_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t7724_MethodInfos/* methods */
	, IEnumerator_1_t7724_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t7724_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t7724_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t7724_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t7724_0_0_0/* byval_arg */
	, &IEnumerator_1_t7724_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t7724_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t5460_il2cpp_TypeInfo;

extern TypeInfo UnityType_t2409_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m31401_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisUnityType_t2409_m41647_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.UnitySerializationHolder/UnityType>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.UnitySerializationHolder/UnityType>(System.Int32)
 uint8_t Array_InternalArray__get_Item_TisUnityType_t2409_m41647 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.UnitySerializationHolder/UnityType>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m31397_MethodInfo;
 void InternalEnumerator_1__ctor_m31397 (InternalEnumerator_1_t5460 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.UnitySerializationHolder/UnityType>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m31398_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m31398 (InternalEnumerator_1_t5460 * __this, MethodInfo* method){
	{
		uint8_t L_0 = InternalEnumerator_1_get_Current_m31401(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m31401_MethodInfo);
		uint8_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&UnityType_t2409_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.UnitySerializationHolder/UnityType>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m31399_MethodInfo;
 void InternalEnumerator_1_Dispose_m31399 (InternalEnumerator_1_t5460 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.UnitySerializationHolder/UnityType>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m31400_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m31400 (InternalEnumerator_1_t5460 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (__this->___array_0);
		NullCheck(L_1);
		int32_t L_2 = Array_get_Length_m7572(L_1, /*hidden argument*/&Array_get_Length_m7572_MethodInfo);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->___idx_1);
		int32_t L_5 = ((int32_t)(L_4-1));
		V_0 = L_5;
		__this->___idx_1 = L_5;
		G_B5_0 = ((((int32_t)((((int32_t)V_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.UnitySerializationHolder/UnityType>::get_Current()
 uint8_t InternalEnumerator_1_get_Current_m31401 (InternalEnumerator_1_t5460 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t1657 * L_1 = (InvalidOperationException_t1657 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1657_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m7566(L_1, (String_t*) &_stringLiteral1838, /*hidden argument*/&InvalidOperationException__ctor_m7566_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->___idx_1);
		if ((((uint32_t)L_2) != ((uint32_t)(-1))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t1657 * L_3 = (InvalidOperationException_t1657 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1657_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m7566(L_3, (String_t*) &_stringLiteral1839, /*hidden argument*/&InvalidOperationException__ctor_m7566_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array_0);
		Array_t * L_5 = (__this->___array_0);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m7572(L_5, /*hidden argument*/&Array_get_Length_m7572_MethodInfo);
		int32_t L_7 = (__this->___idx_1);
		NullCheck(L_4);
		uint8_t L_8 = Array_InternalArray__get_Item_TisUnityType_t2409_m41647(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisUnityType_t2409_m41647_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.UnitySerializationHolder/UnityType>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t5460____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t5460_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t5460, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t386_0_0_1;
FieldInfo InternalEnumerator_1_t5460____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t386_0_0_1/* type */
	, &InternalEnumerator_1_t5460_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t5460, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t5460_FieldInfos[] =
{
	&InternalEnumerator_1_t5460____array_0_FieldInfo,
	&InternalEnumerator_1_t5460____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t5460____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5460_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m31398_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t5460____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5460_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m31401_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t5460_PropertyInfos[] =
{
	&InternalEnumerator_1_t5460____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t5460____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t5460_InternalEnumerator_1__ctor_m31397_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m31397_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.UnitySerializationHolder/UnityType>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m31397_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m31397/* method */
	, &InternalEnumerator_1_t5460_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t/* invoker_method */
	, InternalEnumerator_1_t5460_InternalEnumerator_1__ctor_m31397_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1__ctor_m31397_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m31398_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.UnitySerializationHolder/UnityType>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m31398_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m31398/* method */
	, &InternalEnumerator_1_t5460_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m31398_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m31399_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.UnitySerializationHolder/UnityType>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m31399_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m31399/* method */
	, &InternalEnumerator_1_t5460_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_Dispose_m31399_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m31400_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.UnitySerializationHolder/UnityType>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m31400_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m31400/* method */
	, &InternalEnumerator_1_t5460_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t379_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t379/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_MoveNext_m31400_GenericMethod/* genericMethod */

};
extern Il2CppType UnityType_t2409_0_0_0;
extern void* RuntimeInvoker_UnityType_t2409 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m31401_GenericMethod;
// T System.Array/InternalEnumerator`1<System.UnitySerializationHolder/UnityType>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m31401_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m31401/* method */
	, &InternalEnumerator_1_t5460_il2cpp_TypeInfo/* declaring_type */
	, &UnityType_t2409_0_0_0/* return_type */
	, RuntimeInvoker_UnityType_t2409/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_get_Current_m31401_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t5460_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m31397_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m31398_MethodInfo,
	&InternalEnumerator_1_Dispose_m31399_MethodInfo,
	&InternalEnumerator_1_MoveNext_m31400_MethodInfo,
	&InternalEnumerator_1_get_Current_m31401_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t5460_VTable[] =
{
	&ValueType_Equals_m2156_MethodInfo,
	&Object_Finalize_m1253_MethodInfo,
	&ValueType_GetHashCode_m2157_MethodInfo,
	&ValueType_ToString_m2158_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m31398_MethodInfo,
	&InternalEnumerator_1_MoveNext_m31400_MethodInfo,
	&InternalEnumerator_1_Dispose_m31399_MethodInfo,
	&InternalEnumerator_1_get_Current_m31401_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t5460_InterfacesTypeInfos[] = 
{
	&IEnumerator_t26_il2cpp_TypeInfo,
	&IDisposable_t444_il2cpp_TypeInfo,
	&IEnumerator_1_t7724_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t5460_InterfacesOffsets[] = 
{
	{ &IEnumerator_t26_il2cpp_TypeInfo, 4},
	{ &IDisposable_t444_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t7724_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t5460_0_0_0;
extern Il2CppType InternalEnumerator_1_t5460_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t5460_GenericClass;
TypeInfo InternalEnumerator_1_t5460_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t5460_MethodInfos/* methods */
	, InternalEnumerator_1_t5460_PropertyInfos/* properties */
	, InternalEnumerator_1_t5460_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t550_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t5460_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t5460_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t5460_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t5460_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t5460_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t5460_1_0_0/* this_arg */
	, InternalEnumerator_1_t5460_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t5460_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t5460)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t9995_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.UnitySerializationHolder/UnityType>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.UnitySerializationHolder/UnityType>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.UnitySerializationHolder/UnityType>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.UnitySerializationHolder/UnityType>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.UnitySerializationHolder/UnityType>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.UnitySerializationHolder/UnityType>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.UnitySerializationHolder/UnityType>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.UnitySerializationHolder/UnityType>
extern MethodInfo ICollection_1_get_Count_m53723_MethodInfo;
static PropertyInfo ICollection_1_t9995____Count_PropertyInfo = 
{
	&ICollection_1_t9995_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m53723_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m53724_MethodInfo;
static PropertyInfo ICollection_1_t9995____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t9995_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m53724_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t9995_PropertyInfos[] =
{
	&ICollection_1_t9995____Count_PropertyInfo,
	&ICollection_1_t9995____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t386_0_0_0;
extern void* RuntimeInvoker_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m53723_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.UnitySerializationHolder/UnityType>::get_Count()
MethodInfo ICollection_1_get_Count_m53723_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t9995_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t386_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t386/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_Count_m53723_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m53724_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.UnitySerializationHolder/UnityType>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m53724_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t9995_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t379_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t379/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_IsReadOnly_m53724_GenericMethod/* genericMethod */

};
extern Il2CppType UnityType_t2409_0_0_0;
extern Il2CppType UnityType_t2409_0_0_0;
static ParameterInfo ICollection_1_t9995_ICollection_1_Add_m53725_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UnityType_t2409_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Byte_t493 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m53725_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.UnitySerializationHolder/UnityType>::Add(T)
MethodInfo ICollection_1_Add_m53725_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t9995_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Byte_t493/* invoker_method */
	, ICollection_1_t9995_ICollection_1_Add_m53725_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m53725_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m53726_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.UnitySerializationHolder/UnityType>::Clear()
MethodInfo ICollection_1_Clear_m53726_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t9995_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Clear_m53726_GenericMethod/* genericMethod */

};
extern Il2CppType UnityType_t2409_0_0_0;
static ParameterInfo ICollection_1_t9995_ICollection_1_Contains_m53727_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UnityType_t2409_0_0_0},
};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379_Byte_t493 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m53727_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.UnitySerializationHolder/UnityType>::Contains(T)
MethodInfo ICollection_1_Contains_m53727_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t9995_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t379_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t379_Byte_t493/* invoker_method */
	, ICollection_1_t9995_ICollection_1_Contains_m53727_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Contains_m53727_GenericMethod/* genericMethod */

};
extern Il2CppType UnityTypeU5BU5D_t5670_0_0_0;
extern Il2CppType UnityTypeU5BU5D_t5670_0_0_0;
extern Il2CppType Int32_t386_0_0_0;
static ParameterInfo ICollection_1_t9995_ICollection_1_CopyTo_m53728_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &UnityTypeU5BU5D_t5670_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m53728_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.UnitySerializationHolder/UnityType>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m53728_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t9995_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t_Int32_t386/* invoker_method */
	, ICollection_1_t9995_ICollection_1_CopyTo_m53728_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_CopyTo_m53728_GenericMethod/* genericMethod */

};
extern Il2CppType UnityType_t2409_0_0_0;
static ParameterInfo ICollection_1_t9995_ICollection_1_Remove_m53729_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UnityType_t2409_0_0_0},
};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379_Byte_t493 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m53729_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.UnitySerializationHolder/UnityType>::Remove(T)
MethodInfo ICollection_1_Remove_m53729_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t9995_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t379_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t379_Byte_t493/* invoker_method */
	, ICollection_1_t9995_ICollection_1_Remove_m53729_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Remove_m53729_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t9995_MethodInfos[] =
{
	&ICollection_1_get_Count_m53723_MethodInfo,
	&ICollection_1_get_IsReadOnly_m53724_MethodInfo,
	&ICollection_1_Add_m53725_MethodInfo,
	&ICollection_1_Clear_m53726_MethodInfo,
	&ICollection_1_Contains_m53727_MethodInfo,
	&ICollection_1_CopyTo_m53728_MethodInfo,
	&ICollection_1_Remove_m53729_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t9997_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t9995_InterfacesTypeInfos[] = 
{
	&IEnumerable_t55_il2cpp_TypeInfo,
	&IEnumerable_1_t9997_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t9995_0_0_0;
extern Il2CppType ICollection_1_t9995_1_0_0;
struct ICollection_1_t9995;
extern Il2CppGenericClass ICollection_1_t9995_GenericClass;
TypeInfo ICollection_1_t9995_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t9995_MethodInfos/* methods */
	, ICollection_1_t9995_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t9995_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t9995_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t9995_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t9995_0_0_0/* byval_arg */
	, &ICollection_1_t9995_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t9995_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.UnitySerializationHolder/UnityType>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.UnitySerializationHolder/UnityType>
extern Il2CppType IEnumerator_1_t7724_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m53730_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.UnitySerializationHolder/UnityType>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m53730_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t9997_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t7724_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerable_1_GetEnumerator_m53730_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t9997_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m53730_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t9997_InterfacesTypeInfos[] = 
{
	&IEnumerable_t55_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t9997_0_0_0;
extern Il2CppType IEnumerable_1_t9997_1_0_0;
struct IEnumerable_1_t9997;
extern Il2CppGenericClass IEnumerable_1_t9997_GenericClass;
TypeInfo IEnumerable_1_t9997_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t9997_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t9997_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t9997_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t9997_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t9997_0_0_0/* byval_arg */
	, &IEnumerable_1_t9997_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t9997_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t9996_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.UnitySerializationHolder/UnityType>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.UnitySerializationHolder/UnityType>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.UnitySerializationHolder/UnityType>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.UnitySerializationHolder/UnityType>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.UnitySerializationHolder/UnityType>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.UnitySerializationHolder/UnityType>
extern MethodInfo IList_1_get_Item_m53731_MethodInfo;
extern MethodInfo IList_1_set_Item_m53732_MethodInfo;
static PropertyInfo IList_1_t9996____Item_PropertyInfo = 
{
	&IList_1_t9996_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m53731_MethodInfo/* get */
	, &IList_1_set_Item_m53732_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t9996_PropertyInfos[] =
{
	&IList_1_t9996____Item_PropertyInfo,
	NULL
};
extern Il2CppType UnityType_t2409_0_0_0;
static ParameterInfo IList_1_t9996_IList_1_IndexOf_m53733_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UnityType_t2409_0_0_0},
};
extern Il2CppType Int32_t386_0_0_0;
extern void* RuntimeInvoker_Int32_t386_Byte_t493 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m53733_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.UnitySerializationHolder/UnityType>::IndexOf(T)
MethodInfo IList_1_IndexOf_m53733_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t9996_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t386_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t386_Byte_t493/* invoker_method */
	, IList_1_t9996_IList_1_IndexOf_m53733_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_IndexOf_m53733_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t386_0_0_0;
extern Il2CppType UnityType_t2409_0_0_0;
static ParameterInfo IList_1_t9996_IList_1_Insert_m53734_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &UnityType_t2409_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Int32_t386_Byte_t493 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m53734_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.UnitySerializationHolder/UnityType>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m53734_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t9996_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Int32_t386_Byte_t493/* invoker_method */
	, IList_1_t9996_IList_1_Insert_m53734_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_Insert_m53734_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t386_0_0_0;
static ParameterInfo IList_1_t9996_IList_1_RemoveAt_m53735_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m53735_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.UnitySerializationHolder/UnityType>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m53735_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t9996_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Int32_t386/* invoker_method */
	, IList_1_t9996_IList_1_RemoveAt_m53735_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m53735_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t386_0_0_0;
static ParameterInfo IList_1_t9996_IList_1_get_Item_m53731_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
};
extern Il2CppType UnityType_t2409_0_0_0;
extern void* RuntimeInvoker_UnityType_t2409_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m53731_GenericMethod;
// T System.Collections.Generic.IList`1<System.UnitySerializationHolder/UnityType>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m53731_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t9996_il2cpp_TypeInfo/* declaring_type */
	, &UnityType_t2409_0_0_0/* return_type */
	, RuntimeInvoker_UnityType_t2409_Int32_t386/* invoker_method */
	, IList_1_t9996_IList_1_get_Item_m53731_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_get_Item_m53731_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t386_0_0_0;
extern Il2CppType UnityType_t2409_0_0_0;
static ParameterInfo IList_1_t9996_IList_1_set_Item_m53732_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &UnityType_t2409_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Int32_t386_Byte_t493 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m53732_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.UnitySerializationHolder/UnityType>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m53732_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t9996_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Int32_t386_Byte_t493/* invoker_method */
	, IList_1_t9996_IList_1_set_Item_m53732_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_set_Item_m53732_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t9996_MethodInfos[] =
{
	&IList_1_IndexOf_m53733_MethodInfo,
	&IList_1_Insert_m53734_MethodInfo,
	&IList_1_RemoveAt_m53735_MethodInfo,
	&IList_1_get_Item_m53731_MethodInfo,
	&IList_1_set_Item_m53732_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t9996_InterfacesTypeInfos[] = 
{
	&IEnumerable_t55_il2cpp_TypeInfo,
	&ICollection_1_t9995_il2cpp_TypeInfo,
	&IEnumerable_1_t9997_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t9996_0_0_0;
extern Il2CppType IList_1_t9996_1_0_0;
struct IList_1_t9996;
extern Il2CppGenericClass IList_1_t9996_GenericClass;
extern CustomAttributesCache IList_1_t2638__CustomAttributeCache;
TypeInfo IList_1_t9996_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t9996_MethodInfos/* methods */
	, IList_1_t9996_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t9996_il2cpp_TypeInfo/* element_class */
	, IList_1_t9996_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2638__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t9996_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t9996_0_0_0/* byval_arg */
	, &IList_1_t9996_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t9996_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparable_1_t2846_il2cpp_TypeInfo;



// System.Int32 System.IComparable`1<System.Version>::CompareTo(T)
// Metadata Definition System.IComparable`1<System.Version>
extern Il2CppType Version_t1504_0_0_0;
extern Il2CppType Version_t1504_0_0_0;
static ParameterInfo IComparable_1_t2846_IComparable_1_CompareTo_m53736_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &Version_t1504_0_0_0},
};
extern Il2CppType Int32_t386_0_0_0;
extern void* RuntimeInvoker_Int32_t386_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IComparable_1_CompareTo_m53736_GenericMethod;
// System.Int32 System.IComparable`1<System.Version>::CompareTo(T)
MethodInfo IComparable_1_CompareTo_m53736_MethodInfo = 
{
	"CompareTo"/* name */
	, NULL/* method */
	, &IComparable_1_t2846_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t386_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t386_Object_t/* invoker_method */
	, IComparable_1_t2846_IComparable_1_CompareTo_m53736_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IComparable_1_CompareTo_m53736_GenericMethod/* genericMethod */

};
static MethodInfo* IComparable_1_t2846_MethodInfos[] =
{
	&IComparable_1_CompareTo_m53736_MethodInfo,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IComparable_1_t2846_0_0_0;
extern Il2CppType IComparable_1_t2846_1_0_0;
struct IComparable_1_t2846;
extern Il2CppGenericClass IComparable_1_t2846_GenericClass;
TypeInfo IComparable_1_t2846_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IComparable`1"/* name */
	, "System"/* namespaze */
	, IComparable_1_t2846_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IComparable_1_t2846_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IComparable_1_t2846_il2cpp_TypeInfo/* cast_class */
	, &IComparable_1_t2846_0_0_0/* byval_arg */
	, &IComparable_1_t2846_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IComparable_1_t2846_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t2847_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<System.Version>::Equals(T)
// Metadata Definition System.IEquatable`1<System.Version>
extern Il2CppType Version_t1504_0_0_0;
static ParameterInfo IEquatable_1_t2847_IEquatable_1_Equals_m53737_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &Version_t1504_0_0_0},
};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEquatable_1_Equals_m53737_GenericMethod;
// System.Boolean System.IEquatable`1<System.Version>::Equals(T)
MethodInfo IEquatable_1_Equals_m53737_MethodInfo = 
{
	"Equals"/* name */
	, NULL/* method */
	, &IEquatable_1_t2847_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t379_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t379_Object_t/* invoker_method */
	, IEquatable_1_t2847_IEquatable_1_Equals_m53737_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEquatable_1_Equals_m53737_GenericMethod/* genericMethod */

};
static MethodInfo* IEquatable_1_t2847_MethodInfos[] =
{
	&IEquatable_1_Equals_m53737_MethodInfo,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEquatable_1_t2847_0_0_0;
extern Il2CppType IEquatable_1_t2847_1_0_0;
struct IEquatable_1_t2847;
extern Il2CppGenericClass IEquatable_1_t2847_GenericClass;
TypeInfo IEquatable_1_t2847_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEquatable`1"/* name */
	, "System"/* namespaze */
	, IEquatable_1_t2847_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEquatable_1_t2847_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEquatable_1_t2847_il2cpp_TypeInfo/* cast_class */
	, &IEquatable_1_t2847_0_0_0/* byval_arg */
	, &IEquatable_1_t2847_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEquatable_1_t2847_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
