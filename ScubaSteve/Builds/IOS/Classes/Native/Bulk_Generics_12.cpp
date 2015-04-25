#include "il2cpp_precompiled_header.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3495_il2cpp_TypeInfo;

extern TypeInfo HDRBloomMode_t225_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t1657_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m19257_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m7566_MethodInfo;
extern MethodInfo Array_get_Length_m7572_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisHDRBloomMode_t225_m33178_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityStandardAssets.ImageEffects.HDRBloomMode>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityStandardAssets.ImageEffects.HDRBloomMode>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisHDRBloomMode_t225_m33178 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.HDRBloomMode>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m19253_MethodInfo;
 void InternalEnumerator_1__ctor_m19253 (InternalEnumerator_1_t3495 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.HDRBloomMode>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19254_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19254 (InternalEnumerator_1_t3495 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m19257(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m19257_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&HDRBloomMode_t225_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.HDRBloomMode>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m19255_MethodInfo;
 void InternalEnumerator_1_Dispose_m19255 (InternalEnumerator_1_t3495 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.HDRBloomMode>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m19256_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m19256 (InternalEnumerator_1_t3495 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.HDRBloomMode>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m19257 (InternalEnumerator_1_t3495 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisHDRBloomMode_t225_m33178(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisHDRBloomMode_t225_m33178_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.HDRBloomMode>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3495____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3495_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3495, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t386_0_0_1;
FieldInfo InternalEnumerator_1_t3495____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t386_0_0_1/* type */
	, &InternalEnumerator_1_t3495_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3495, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3495_FieldInfos[] =
{
	&InternalEnumerator_1_t3495____array_0_FieldInfo,
	&InternalEnumerator_1_t3495____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t3495____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3495_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19254_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3495____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3495_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m19257_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3495_PropertyInfos[] =
{
	&InternalEnumerator_1_t3495____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3495____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3495_InternalEnumerator_1__ctor_m19253_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m19253_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.HDRBloomMode>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m19253_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m19253/* method */
	, &InternalEnumerator_1_t3495_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t/* invoker_method */
	, InternalEnumerator_1_t3495_InternalEnumerator_1__ctor_m19253_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m19253_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19254_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.HDRBloomMode>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19254_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19254/* method */
	, &InternalEnumerator_1_t3495_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19254_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m19255_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.HDRBloomMode>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m19255_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m19255/* method */
	, &InternalEnumerator_1_t3495_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m19255_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m19256_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.HDRBloomMode>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m19256_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m19256/* method */
	, &InternalEnumerator_1_t3495_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m19256_GenericMethod/* genericMethod */

};
extern Il2CppType HDRBloomMode_t225_0_0_0;
extern void* RuntimeInvoker_HDRBloomMode_t225 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19257_GenericMethod;
// T System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.HDRBloomMode>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m19257_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m19257/* method */
	, &InternalEnumerator_1_t3495_il2cpp_TypeInfo/* declaring_type */
	, &HDRBloomMode_t225_0_0_0/* return_type */
	, RuntimeInvoker_HDRBloomMode_t225/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m19257_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3495_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m19253_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19254_MethodInfo,
	&InternalEnumerator_1_Dispose_m19255_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19256_MethodInfo,
	&InternalEnumerator_1_get_Current_m19257_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m2156_MethodInfo;
extern MethodInfo Object_Finalize_m1253_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m2157_MethodInfo;
extern MethodInfo ValueType_ToString_m2158_MethodInfo;
static MethodInfo* InternalEnumerator_1_t3495_VTable[] =
{
	&ValueType_Equals_m2156_MethodInfo,
	&Object_Finalize_m1253_MethodInfo,
	&ValueType_GetHashCode_m2157_MethodInfo,
	&ValueType_ToString_m2158_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19254_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19256_MethodInfo,
	&InternalEnumerator_1_Dispose_m19255_MethodInfo,
	&InternalEnumerator_1_get_Current_m19257_MethodInfo,
};
extern TypeInfo IEnumerator_t26_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t444_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t6329_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t3495_InterfacesTypeInfos[] = 
{
	&IEnumerator_t26_il2cpp_TypeInfo,
	&IDisposable_t444_il2cpp_TypeInfo,
	&IEnumerator_1_t6329_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3495_InterfacesOffsets[] = 
{
	{ &IEnumerator_t26_il2cpp_TypeInfo, 4},
	{ &IDisposable_t444_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6329_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3495_0_0_0;
extern Il2CppType InternalEnumerator_1_t3495_1_0_0;
extern TypeInfo ValueType_t550_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t3495_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t3495_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3495_MethodInfos/* methods */
	, InternalEnumerator_1_t3495_PropertyInfos/* properties */
	, InternalEnumerator_1_t3495_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t550_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3495_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3495_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3495_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3495_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3495_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3495_1_0_0/* this_arg */
	, InternalEnumerator_1_t3495_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3495_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3495)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8021_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.HDRBloomMode>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.HDRBloomMode>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.HDRBloomMode>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.HDRBloomMode>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.HDRBloomMode>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.HDRBloomMode>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.HDRBloomMode>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.HDRBloomMode>
extern MethodInfo ICollection_1_get_Count_m43627_MethodInfo;
static PropertyInfo ICollection_1_t8021____Count_PropertyInfo = 
{
	&ICollection_1_t8021_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m43627_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m43628_MethodInfo;
static PropertyInfo ICollection_1_t8021____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8021_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m43628_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8021_PropertyInfos[] =
{
	&ICollection_1_t8021____Count_PropertyInfo,
	&ICollection_1_t8021____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t386_0_0_0;
extern void* RuntimeInvoker_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m43627_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.HDRBloomMode>::get_Count()
MethodInfo ICollection_1_get_Count_m43627_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8021_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m43627_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m43628_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.HDRBloomMode>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m43628_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8021_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m43628_GenericMethod/* genericMethod */

};
extern Il2CppType HDRBloomMode_t225_0_0_0;
extern Il2CppType HDRBloomMode_t225_0_0_0;
static ParameterInfo ICollection_1_t8021_ICollection_1_Add_m43629_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &HDRBloomMode_t225_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m43629_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.HDRBloomMode>::Add(T)
MethodInfo ICollection_1_Add_m43629_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8021_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Int32_t386/* invoker_method */
	, ICollection_1_t8021_ICollection_1_Add_m43629_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m43629_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m43630_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.HDRBloomMode>::Clear()
MethodInfo ICollection_1_Clear_m43630_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8021_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m43630_GenericMethod/* genericMethod */

};
extern Il2CppType HDRBloomMode_t225_0_0_0;
static ParameterInfo ICollection_1_t8021_ICollection_1_Contains_m43631_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &HDRBloomMode_t225_0_0_0},
};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m43631_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.HDRBloomMode>::Contains(T)
MethodInfo ICollection_1_Contains_m43631_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8021_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t379_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t379_Int32_t386/* invoker_method */
	, ICollection_1_t8021_ICollection_1_Contains_m43631_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m43631_GenericMethod/* genericMethod */

};
extern Il2CppType HDRBloomModeU5BU5D_t5713_0_0_0;
extern Il2CppType HDRBloomModeU5BU5D_t5713_0_0_0;
extern Il2CppType Int32_t386_0_0_0;
extern Il2CppType Int32_t386_0_0_0;
static ParameterInfo ICollection_1_t8021_ICollection_1_CopyTo_m43632_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &HDRBloomModeU5BU5D_t5713_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m43632_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.HDRBloomMode>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m43632_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8021_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t_Int32_t386/* invoker_method */
	, ICollection_1_t8021_ICollection_1_CopyTo_m43632_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m43632_GenericMethod/* genericMethod */

};
extern Il2CppType HDRBloomMode_t225_0_0_0;
static ParameterInfo ICollection_1_t8021_ICollection_1_Remove_m43633_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &HDRBloomMode_t225_0_0_0},
};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m43633_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.HDRBloomMode>::Remove(T)
MethodInfo ICollection_1_Remove_m43633_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8021_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t379_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t379_Int32_t386/* invoker_method */
	, ICollection_1_t8021_ICollection_1_Remove_m43633_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m43633_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8021_MethodInfos[] =
{
	&ICollection_1_get_Count_m43627_MethodInfo,
	&ICollection_1_get_IsReadOnly_m43628_MethodInfo,
	&ICollection_1_Add_m43629_MethodInfo,
	&ICollection_1_Clear_m43630_MethodInfo,
	&ICollection_1_Contains_m43631_MethodInfo,
	&ICollection_1_CopyTo_m43632_MethodInfo,
	&ICollection_1_Remove_m43633_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t55_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t8023_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8021_InterfacesTypeInfos[] = 
{
	&IEnumerable_t55_il2cpp_TypeInfo,
	&IEnumerable_1_t8023_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8021_0_0_0;
extern Il2CppType ICollection_1_t8021_1_0_0;
struct ICollection_1_t8021;
extern Il2CppGenericClass ICollection_1_t8021_GenericClass;
TypeInfo ICollection_1_t8021_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8021_MethodInfos/* methods */
	, ICollection_1_t8021_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8021_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8021_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8021_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8021_0_0_0/* byval_arg */
	, &ICollection_1_t8021_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8021_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityStandardAssets.ImageEffects.HDRBloomMode>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityStandardAssets.ImageEffects.HDRBloomMode>
extern Il2CppType IEnumerator_1_t6329_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m43634_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityStandardAssets.ImageEffects.HDRBloomMode>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m43634_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8023_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6329_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m43634_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8023_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m43634_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8023_InterfacesTypeInfos[] = 
{
	&IEnumerable_t55_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8023_0_0_0;
extern Il2CppType IEnumerable_1_t8023_1_0_0;
struct IEnumerable_1_t8023;
extern Il2CppGenericClass IEnumerable_1_t8023_GenericClass;
TypeInfo IEnumerable_1_t8023_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8023_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8023_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8023_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8023_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8023_0_0_0/* byval_arg */
	, &IEnumerable_1_t8023_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8023_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t8022_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.HDRBloomMode>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.HDRBloomMode>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.HDRBloomMode>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.HDRBloomMode>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.HDRBloomMode>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.HDRBloomMode>
extern MethodInfo IList_1_get_Item_m43635_MethodInfo;
extern MethodInfo IList_1_set_Item_m43636_MethodInfo;
static PropertyInfo IList_1_t8022____Item_PropertyInfo = 
{
	&IList_1_t8022_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m43635_MethodInfo/* get */
	, &IList_1_set_Item_m43636_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8022_PropertyInfos[] =
{
	&IList_1_t8022____Item_PropertyInfo,
	NULL
};
extern Il2CppType HDRBloomMode_t225_0_0_0;
static ParameterInfo IList_1_t8022_IList_1_IndexOf_m43637_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &HDRBloomMode_t225_0_0_0},
};
extern Il2CppType Int32_t386_0_0_0;
extern void* RuntimeInvoker_Int32_t386_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m43637_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.HDRBloomMode>::IndexOf(T)
MethodInfo IList_1_IndexOf_m43637_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8022_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t386_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t386_Int32_t386/* invoker_method */
	, IList_1_t8022_IList_1_IndexOf_m43637_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m43637_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t386_0_0_0;
extern Il2CppType HDRBloomMode_t225_0_0_0;
static ParameterInfo IList_1_t8022_IList_1_Insert_m43638_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &HDRBloomMode_t225_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Int32_t386_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m43638_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.HDRBloomMode>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m43638_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8022_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Int32_t386_Int32_t386/* invoker_method */
	, IList_1_t8022_IList_1_Insert_m43638_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m43638_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t386_0_0_0;
static ParameterInfo IList_1_t8022_IList_1_RemoveAt_m43639_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m43639_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.HDRBloomMode>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m43639_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8022_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Int32_t386/* invoker_method */
	, IList_1_t8022_IList_1_RemoveAt_m43639_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m43639_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t386_0_0_0;
static ParameterInfo IList_1_t8022_IList_1_get_Item_m43635_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
};
extern Il2CppType HDRBloomMode_t225_0_0_0;
extern void* RuntimeInvoker_HDRBloomMode_t225_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m43635_GenericMethod;
// T System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.HDRBloomMode>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m43635_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8022_il2cpp_TypeInfo/* declaring_type */
	, &HDRBloomMode_t225_0_0_0/* return_type */
	, RuntimeInvoker_HDRBloomMode_t225_Int32_t386/* invoker_method */
	, IList_1_t8022_IList_1_get_Item_m43635_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m43635_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t386_0_0_0;
extern Il2CppType HDRBloomMode_t225_0_0_0;
static ParameterInfo IList_1_t8022_IList_1_set_Item_m43636_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &HDRBloomMode_t225_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Int32_t386_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m43636_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.HDRBloomMode>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m43636_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8022_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Int32_t386_Int32_t386/* invoker_method */
	, IList_1_t8022_IList_1_set_Item_m43636_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m43636_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8022_MethodInfos[] =
{
	&IList_1_IndexOf_m43637_MethodInfo,
	&IList_1_Insert_m43638_MethodInfo,
	&IList_1_RemoveAt_m43639_MethodInfo,
	&IList_1_get_Item_m43635_MethodInfo,
	&IList_1_set_Item_m43636_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8022_InterfacesTypeInfos[] = 
{
	&IEnumerable_t55_il2cpp_TypeInfo,
	&ICollection_1_t8021_il2cpp_TypeInfo,
	&IEnumerable_1_t8023_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8022_0_0_0;
extern Il2CppType IList_1_t8022_1_0_0;
struct IList_1_t8022;
extern Il2CppGenericClass IList_1_t8022_GenericClass;
extern CustomAttributesCache IList_1_t2638__CustomAttributeCache;
TypeInfo IList_1_t8022_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8022_MethodInfos/* methods */
	, IList_1_t8022_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8022_il2cpp_TypeInfo/* element_class */
	, IList_1_t8022_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2638__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8022_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8022_0_0_0/* byval_arg */
	, &IList_1_t8022_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8022_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t6331_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<UnityStandardAssets.ImageEffects.BloomScreenBlendMode>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityStandardAssets.ImageEffects.BloomScreenBlendMode>
extern MethodInfo IEnumerator_1_get_Current_m43640_MethodInfo;
static PropertyInfo IEnumerator_1_t6331____Current_PropertyInfo = 
{
	&IEnumerator_1_t6331_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m43640_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6331_PropertyInfos[] =
{
	&IEnumerator_1_t6331____Current_PropertyInfo,
	NULL
};
extern Il2CppType BloomScreenBlendMode_t226_0_0_0;
extern void* RuntimeInvoker_BloomScreenBlendMode_t226 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m43640_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<UnityStandardAssets.ImageEffects.BloomScreenBlendMode>::get_Current()
MethodInfo IEnumerator_1_get_Current_m43640_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6331_il2cpp_TypeInfo/* declaring_type */
	, &BloomScreenBlendMode_t226_0_0_0/* return_type */
	, RuntimeInvoker_BloomScreenBlendMode_t226/* invoker_method */
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
	, &IEnumerator_1_get_Current_m43640_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6331_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m43640_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6331_InterfacesTypeInfos[] = 
{
	&IEnumerator_t26_il2cpp_TypeInfo,
	&IDisposable_t444_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6331_0_0_0;
extern Il2CppType IEnumerator_1_t6331_1_0_0;
struct IEnumerator_1_t6331;
extern Il2CppGenericClass IEnumerator_1_t6331_GenericClass;
TypeInfo IEnumerator_1_t6331_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6331_MethodInfos/* methods */
	, IEnumerator_1_t6331_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6331_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6331_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6331_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6331_0_0_0/* byval_arg */
	, &IEnumerator_1_t6331_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6331_GenericClass/* generic_class */
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
extern TypeInfo InternalEnumerator_1_t3496_il2cpp_TypeInfo;

extern TypeInfo BloomScreenBlendMode_t226_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m19262_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisBloomScreenBlendMode_t226_m33189_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityStandardAssets.ImageEffects.BloomScreenBlendMode>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityStandardAssets.ImageEffects.BloomScreenBlendMode>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisBloomScreenBlendMode_t226_m33189 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.BloomScreenBlendMode>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m19258_MethodInfo;
 void InternalEnumerator_1__ctor_m19258 (InternalEnumerator_1_t3496 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.BloomScreenBlendMode>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19259_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19259 (InternalEnumerator_1_t3496 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m19262(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m19262_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&BloomScreenBlendMode_t226_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.BloomScreenBlendMode>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m19260_MethodInfo;
 void InternalEnumerator_1_Dispose_m19260 (InternalEnumerator_1_t3496 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.BloomScreenBlendMode>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m19261_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m19261 (InternalEnumerator_1_t3496 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.BloomScreenBlendMode>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m19262 (InternalEnumerator_1_t3496 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisBloomScreenBlendMode_t226_m33189(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisBloomScreenBlendMode_t226_m33189_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.BloomScreenBlendMode>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3496____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3496_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3496, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t386_0_0_1;
FieldInfo InternalEnumerator_1_t3496____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t386_0_0_1/* type */
	, &InternalEnumerator_1_t3496_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3496, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3496_FieldInfos[] =
{
	&InternalEnumerator_1_t3496____array_0_FieldInfo,
	&InternalEnumerator_1_t3496____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t3496____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3496_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19259_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3496____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3496_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m19262_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3496_PropertyInfos[] =
{
	&InternalEnumerator_1_t3496____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3496____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3496_InternalEnumerator_1__ctor_m19258_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m19258_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.BloomScreenBlendMode>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m19258_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m19258/* method */
	, &InternalEnumerator_1_t3496_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t/* invoker_method */
	, InternalEnumerator_1_t3496_InternalEnumerator_1__ctor_m19258_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m19258_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19259_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.BloomScreenBlendMode>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19259_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19259/* method */
	, &InternalEnumerator_1_t3496_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19259_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m19260_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.BloomScreenBlendMode>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m19260_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m19260/* method */
	, &InternalEnumerator_1_t3496_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m19260_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m19261_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.BloomScreenBlendMode>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m19261_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m19261/* method */
	, &InternalEnumerator_1_t3496_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m19261_GenericMethod/* genericMethod */

};
extern Il2CppType BloomScreenBlendMode_t226_0_0_0;
extern void* RuntimeInvoker_BloomScreenBlendMode_t226 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19262_GenericMethod;
// T System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.BloomScreenBlendMode>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m19262_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m19262/* method */
	, &InternalEnumerator_1_t3496_il2cpp_TypeInfo/* declaring_type */
	, &BloomScreenBlendMode_t226_0_0_0/* return_type */
	, RuntimeInvoker_BloomScreenBlendMode_t226/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m19262_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3496_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m19258_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19259_MethodInfo,
	&InternalEnumerator_1_Dispose_m19260_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19261_MethodInfo,
	&InternalEnumerator_1_get_Current_m19262_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t3496_VTable[] =
{
	&ValueType_Equals_m2156_MethodInfo,
	&Object_Finalize_m1253_MethodInfo,
	&ValueType_GetHashCode_m2157_MethodInfo,
	&ValueType_ToString_m2158_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19259_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19261_MethodInfo,
	&InternalEnumerator_1_Dispose_m19260_MethodInfo,
	&InternalEnumerator_1_get_Current_m19262_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3496_InterfacesTypeInfos[] = 
{
	&IEnumerator_t26_il2cpp_TypeInfo,
	&IDisposable_t444_il2cpp_TypeInfo,
	&IEnumerator_1_t6331_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3496_InterfacesOffsets[] = 
{
	{ &IEnumerator_t26_il2cpp_TypeInfo, 4},
	{ &IDisposable_t444_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6331_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3496_0_0_0;
extern Il2CppType InternalEnumerator_1_t3496_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3496_GenericClass;
TypeInfo InternalEnumerator_1_t3496_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3496_MethodInfos/* methods */
	, InternalEnumerator_1_t3496_PropertyInfos/* properties */
	, InternalEnumerator_1_t3496_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t550_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3496_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3496_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3496_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3496_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3496_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3496_1_0_0/* this_arg */
	, InternalEnumerator_1_t3496_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3496_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3496)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8024_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.BloomScreenBlendMode>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.BloomScreenBlendMode>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.BloomScreenBlendMode>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.BloomScreenBlendMode>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.BloomScreenBlendMode>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.BloomScreenBlendMode>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.BloomScreenBlendMode>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.BloomScreenBlendMode>
extern MethodInfo ICollection_1_get_Count_m43641_MethodInfo;
static PropertyInfo ICollection_1_t8024____Count_PropertyInfo = 
{
	&ICollection_1_t8024_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m43641_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m43642_MethodInfo;
static PropertyInfo ICollection_1_t8024____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8024_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m43642_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8024_PropertyInfos[] =
{
	&ICollection_1_t8024____Count_PropertyInfo,
	&ICollection_1_t8024____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t386_0_0_0;
extern void* RuntimeInvoker_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m43641_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.BloomScreenBlendMode>::get_Count()
MethodInfo ICollection_1_get_Count_m43641_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8024_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m43641_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m43642_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.BloomScreenBlendMode>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m43642_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8024_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m43642_GenericMethod/* genericMethod */

};
extern Il2CppType BloomScreenBlendMode_t226_0_0_0;
extern Il2CppType BloomScreenBlendMode_t226_0_0_0;
static ParameterInfo ICollection_1_t8024_ICollection_1_Add_m43643_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &BloomScreenBlendMode_t226_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m43643_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.BloomScreenBlendMode>::Add(T)
MethodInfo ICollection_1_Add_m43643_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8024_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Int32_t386/* invoker_method */
	, ICollection_1_t8024_ICollection_1_Add_m43643_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m43643_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m43644_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.BloomScreenBlendMode>::Clear()
MethodInfo ICollection_1_Clear_m43644_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8024_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m43644_GenericMethod/* genericMethod */

};
extern Il2CppType BloomScreenBlendMode_t226_0_0_0;
static ParameterInfo ICollection_1_t8024_ICollection_1_Contains_m43645_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &BloomScreenBlendMode_t226_0_0_0},
};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m43645_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.BloomScreenBlendMode>::Contains(T)
MethodInfo ICollection_1_Contains_m43645_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8024_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t379_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t379_Int32_t386/* invoker_method */
	, ICollection_1_t8024_ICollection_1_Contains_m43645_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m43645_GenericMethod/* genericMethod */

};
extern Il2CppType BloomScreenBlendModeU5BU5D_t5714_0_0_0;
extern Il2CppType BloomScreenBlendModeU5BU5D_t5714_0_0_0;
extern Il2CppType Int32_t386_0_0_0;
static ParameterInfo ICollection_1_t8024_ICollection_1_CopyTo_m43646_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &BloomScreenBlendModeU5BU5D_t5714_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m43646_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.BloomScreenBlendMode>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m43646_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8024_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t_Int32_t386/* invoker_method */
	, ICollection_1_t8024_ICollection_1_CopyTo_m43646_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m43646_GenericMethod/* genericMethod */

};
extern Il2CppType BloomScreenBlendMode_t226_0_0_0;
static ParameterInfo ICollection_1_t8024_ICollection_1_Remove_m43647_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &BloomScreenBlendMode_t226_0_0_0},
};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m43647_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.BloomScreenBlendMode>::Remove(T)
MethodInfo ICollection_1_Remove_m43647_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8024_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t379_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t379_Int32_t386/* invoker_method */
	, ICollection_1_t8024_ICollection_1_Remove_m43647_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m43647_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8024_MethodInfos[] =
{
	&ICollection_1_get_Count_m43641_MethodInfo,
	&ICollection_1_get_IsReadOnly_m43642_MethodInfo,
	&ICollection_1_Add_m43643_MethodInfo,
	&ICollection_1_Clear_m43644_MethodInfo,
	&ICollection_1_Contains_m43645_MethodInfo,
	&ICollection_1_CopyTo_m43646_MethodInfo,
	&ICollection_1_Remove_m43647_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8026_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8024_InterfacesTypeInfos[] = 
{
	&IEnumerable_t55_il2cpp_TypeInfo,
	&IEnumerable_1_t8026_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8024_0_0_0;
extern Il2CppType ICollection_1_t8024_1_0_0;
struct ICollection_1_t8024;
extern Il2CppGenericClass ICollection_1_t8024_GenericClass;
TypeInfo ICollection_1_t8024_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8024_MethodInfos/* methods */
	, ICollection_1_t8024_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8024_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8024_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8024_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8024_0_0_0/* byval_arg */
	, &ICollection_1_t8024_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8024_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityStandardAssets.ImageEffects.BloomScreenBlendMode>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityStandardAssets.ImageEffects.BloomScreenBlendMode>
extern Il2CppType IEnumerator_1_t6331_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m43648_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityStandardAssets.ImageEffects.BloomScreenBlendMode>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m43648_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8026_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6331_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m43648_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8026_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m43648_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8026_InterfacesTypeInfos[] = 
{
	&IEnumerable_t55_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8026_0_0_0;
extern Il2CppType IEnumerable_1_t8026_1_0_0;
struct IEnumerable_1_t8026;
extern Il2CppGenericClass IEnumerable_1_t8026_GenericClass;
TypeInfo IEnumerable_1_t8026_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8026_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8026_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8026_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8026_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8026_0_0_0/* byval_arg */
	, &IEnumerable_1_t8026_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8026_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t8025_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.BloomScreenBlendMode>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.BloomScreenBlendMode>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.BloomScreenBlendMode>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.BloomScreenBlendMode>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.BloomScreenBlendMode>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.BloomScreenBlendMode>
extern MethodInfo IList_1_get_Item_m43649_MethodInfo;
extern MethodInfo IList_1_set_Item_m43650_MethodInfo;
static PropertyInfo IList_1_t8025____Item_PropertyInfo = 
{
	&IList_1_t8025_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m43649_MethodInfo/* get */
	, &IList_1_set_Item_m43650_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8025_PropertyInfos[] =
{
	&IList_1_t8025____Item_PropertyInfo,
	NULL
};
extern Il2CppType BloomScreenBlendMode_t226_0_0_0;
static ParameterInfo IList_1_t8025_IList_1_IndexOf_m43651_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &BloomScreenBlendMode_t226_0_0_0},
};
extern Il2CppType Int32_t386_0_0_0;
extern void* RuntimeInvoker_Int32_t386_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m43651_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.BloomScreenBlendMode>::IndexOf(T)
MethodInfo IList_1_IndexOf_m43651_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8025_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t386_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t386_Int32_t386/* invoker_method */
	, IList_1_t8025_IList_1_IndexOf_m43651_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m43651_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t386_0_0_0;
extern Il2CppType BloomScreenBlendMode_t226_0_0_0;
static ParameterInfo IList_1_t8025_IList_1_Insert_m43652_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &BloomScreenBlendMode_t226_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Int32_t386_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m43652_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.BloomScreenBlendMode>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m43652_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8025_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Int32_t386_Int32_t386/* invoker_method */
	, IList_1_t8025_IList_1_Insert_m43652_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m43652_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t386_0_0_0;
static ParameterInfo IList_1_t8025_IList_1_RemoveAt_m43653_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m43653_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.BloomScreenBlendMode>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m43653_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8025_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Int32_t386/* invoker_method */
	, IList_1_t8025_IList_1_RemoveAt_m43653_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m43653_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t386_0_0_0;
static ParameterInfo IList_1_t8025_IList_1_get_Item_m43649_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
};
extern Il2CppType BloomScreenBlendMode_t226_0_0_0;
extern void* RuntimeInvoker_BloomScreenBlendMode_t226_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m43649_GenericMethod;
// T System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.BloomScreenBlendMode>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m43649_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8025_il2cpp_TypeInfo/* declaring_type */
	, &BloomScreenBlendMode_t226_0_0_0/* return_type */
	, RuntimeInvoker_BloomScreenBlendMode_t226_Int32_t386/* invoker_method */
	, IList_1_t8025_IList_1_get_Item_m43649_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m43649_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t386_0_0_0;
extern Il2CppType BloomScreenBlendMode_t226_0_0_0;
static ParameterInfo IList_1_t8025_IList_1_set_Item_m43650_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &BloomScreenBlendMode_t226_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Int32_t386_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m43650_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.BloomScreenBlendMode>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m43650_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8025_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Int32_t386_Int32_t386/* invoker_method */
	, IList_1_t8025_IList_1_set_Item_m43650_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m43650_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8025_MethodInfos[] =
{
	&IList_1_IndexOf_m43651_MethodInfo,
	&IList_1_Insert_m43652_MethodInfo,
	&IList_1_RemoveAt_m43653_MethodInfo,
	&IList_1_get_Item_m43649_MethodInfo,
	&IList_1_set_Item_m43650_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8025_InterfacesTypeInfos[] = 
{
	&IEnumerable_t55_il2cpp_TypeInfo,
	&ICollection_1_t8024_il2cpp_TypeInfo,
	&IEnumerable_1_t8026_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8025_0_0_0;
extern Il2CppType IList_1_t8025_1_0_0;
struct IList_1_t8025;
extern Il2CppGenericClass IList_1_t8025_GenericClass;
extern CustomAttributesCache IList_1_t2638__CustomAttributeCache;
TypeInfo IList_1_t8025_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8025_MethodInfos/* methods */
	, IList_1_t8025_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8025_il2cpp_TypeInfo/* element_class */
	, IList_1_t8025_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2638__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8025_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8025_0_0_0/* byval_arg */
	, &IList_1_t8025_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8025_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t6333_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<UnityStandardAssets.ImageEffects.BloomAndFlares>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityStandardAssets.ImageEffects.BloomAndFlares>
extern MethodInfo IEnumerator_1_get_Current_m43654_MethodInfo;
static PropertyInfo IEnumerator_1_t6333____Current_PropertyInfo = 
{
	&IEnumerator_1_t6333_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m43654_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6333_PropertyInfos[] =
{
	&IEnumerator_1_t6333____Current_PropertyInfo,
	NULL
};
extern Il2CppType BloomAndFlares_t227_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m43654_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<UnityStandardAssets.ImageEffects.BloomAndFlares>::get_Current()
MethodInfo IEnumerator_1_get_Current_m43654_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6333_il2cpp_TypeInfo/* declaring_type */
	, &BloomAndFlares_t227_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m43654_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6333_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m43654_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6333_InterfacesTypeInfos[] = 
{
	&IEnumerator_t26_il2cpp_TypeInfo,
	&IDisposable_t444_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6333_0_0_0;
extern Il2CppType IEnumerator_1_t6333_1_0_0;
struct IEnumerator_1_t6333;
extern Il2CppGenericClass IEnumerator_1_t6333_GenericClass;
TypeInfo IEnumerator_1_t6333_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6333_MethodInfos/* methods */
	, IEnumerator_1_t6333_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6333_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6333_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6333_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6333_0_0_0/* byval_arg */
	, &IEnumerator_1_t6333_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6333_GenericClass/* generic_class */
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
extern TypeInfo InternalEnumerator_1_t3497_il2cpp_TypeInfo;

extern TypeInfo BloomAndFlares_t227_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m19267_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisBloomAndFlares_t227_m33200_MethodInfo;
struct Array_t;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
 Object_t * Array_InternalArray__get_Item_TisObject_t_m31403_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisObject_t_m31403(__this, p0, method) (Object_t *)Array_InternalArray__get_Item_TisObject_t_m31403_gshared((Array_t *)__this, (int32_t)p0, method)
// Declaration !!0 System.Array::InternalArray__get_Item<UnityStandardAssets.ImageEffects.BloomAndFlares>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityStandardAssets.ImageEffects.BloomAndFlares>(System.Int32)
#define Array_InternalArray__get_Item_TisBloomAndFlares_t227_m33200(__this, p0, method) (BloomAndFlares_t227 *)Array_InternalArray__get_Item_TisObject_t_m31403_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.BloomAndFlares>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.BloomAndFlares>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.BloomAndFlares>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.BloomAndFlares>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.BloomAndFlares>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.BloomAndFlares>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3497____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3497_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3497, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t386_0_0_1;
FieldInfo InternalEnumerator_1_t3497____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t386_0_0_1/* type */
	, &InternalEnumerator_1_t3497_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3497, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3497_FieldInfos[] =
{
	&InternalEnumerator_1_t3497____array_0_FieldInfo,
	&InternalEnumerator_1_t3497____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19264_MethodInfo;
static PropertyInfo InternalEnumerator_1_t3497____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3497_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19264_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3497____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3497_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m19267_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3497_PropertyInfos[] =
{
	&InternalEnumerator_1_t3497____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3497____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3497_InternalEnumerator_1__ctor_m19263_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m19263_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.BloomAndFlares>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m19263_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m13935_gshared/* method */
	, &InternalEnumerator_1_t3497_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t/* invoker_method */
	, InternalEnumerator_1_t3497_InternalEnumerator_1__ctor_m19263_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m19263_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19264_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.BloomAndFlares>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19264_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13937_gshared/* method */
	, &InternalEnumerator_1_t3497_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19264_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m19265_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.BloomAndFlares>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m19265_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m13939_gshared/* method */
	, &InternalEnumerator_1_t3497_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m19265_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m19266_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.BloomAndFlares>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m19266_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m13941_gshared/* method */
	, &InternalEnumerator_1_t3497_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m19266_GenericMethod/* genericMethod */

};
extern Il2CppType BloomAndFlares_t227_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19267_GenericMethod;
// T System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.BloomAndFlares>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m19267_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m13943_gshared/* method */
	, &InternalEnumerator_1_t3497_il2cpp_TypeInfo/* declaring_type */
	, &BloomAndFlares_t227_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m19267_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3497_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m19263_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19264_MethodInfo,
	&InternalEnumerator_1_Dispose_m19265_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19266_MethodInfo,
	&InternalEnumerator_1_get_Current_m19267_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m19266_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m19265_MethodInfo;
static MethodInfo* InternalEnumerator_1_t3497_VTable[] =
{
	&ValueType_Equals_m2156_MethodInfo,
	&Object_Finalize_m1253_MethodInfo,
	&ValueType_GetHashCode_m2157_MethodInfo,
	&ValueType_ToString_m2158_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19264_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19266_MethodInfo,
	&InternalEnumerator_1_Dispose_m19265_MethodInfo,
	&InternalEnumerator_1_get_Current_m19267_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3497_InterfacesTypeInfos[] = 
{
	&IEnumerator_t26_il2cpp_TypeInfo,
	&IDisposable_t444_il2cpp_TypeInfo,
	&IEnumerator_1_t6333_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3497_InterfacesOffsets[] = 
{
	{ &IEnumerator_t26_il2cpp_TypeInfo, 4},
	{ &IDisposable_t444_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6333_il2cpp_TypeInfo, 7},
};
extern TypeInfo BloomAndFlares_t227_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t3497_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m19267_MethodInfo/* Method Usage */,
	&BloomAndFlares_t227_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisBloomAndFlares_t227_m33200_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3497_0_0_0;
extern Il2CppType InternalEnumerator_1_t3497_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3497_GenericClass;
TypeInfo InternalEnumerator_1_t3497_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3497_MethodInfos/* methods */
	, InternalEnumerator_1_t3497_PropertyInfos/* properties */
	, InternalEnumerator_1_t3497_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t550_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3497_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3497_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3497_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3497_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3497_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3497_1_0_0/* this_arg */
	, InternalEnumerator_1_t3497_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3497_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t3497_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3497)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8027_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.BloomAndFlares>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.BloomAndFlares>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.BloomAndFlares>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.BloomAndFlares>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.BloomAndFlares>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.BloomAndFlares>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.BloomAndFlares>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.BloomAndFlares>
extern MethodInfo ICollection_1_get_Count_m43655_MethodInfo;
static PropertyInfo ICollection_1_t8027____Count_PropertyInfo = 
{
	&ICollection_1_t8027_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m43655_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m43656_MethodInfo;
static PropertyInfo ICollection_1_t8027____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8027_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m43656_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8027_PropertyInfos[] =
{
	&ICollection_1_t8027____Count_PropertyInfo,
	&ICollection_1_t8027____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t386_0_0_0;
extern void* RuntimeInvoker_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m43655_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.BloomAndFlares>::get_Count()
MethodInfo ICollection_1_get_Count_m43655_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8027_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m43655_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m43656_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.BloomAndFlares>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m43656_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8027_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m43656_GenericMethod/* genericMethod */

};
extern Il2CppType BloomAndFlares_t227_0_0_0;
extern Il2CppType BloomAndFlares_t227_0_0_0;
static ParameterInfo ICollection_1_t8027_ICollection_1_Add_m43657_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &BloomAndFlares_t227_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m43657_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.BloomAndFlares>::Add(T)
MethodInfo ICollection_1_Add_m43657_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8027_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t/* invoker_method */
	, ICollection_1_t8027_ICollection_1_Add_m43657_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m43657_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m43658_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.BloomAndFlares>::Clear()
MethodInfo ICollection_1_Clear_m43658_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8027_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m43658_GenericMethod/* genericMethod */

};
extern Il2CppType BloomAndFlares_t227_0_0_0;
static ParameterInfo ICollection_1_t8027_ICollection_1_Contains_m43659_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &BloomAndFlares_t227_0_0_0},
};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m43659_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.BloomAndFlares>::Contains(T)
MethodInfo ICollection_1_Contains_m43659_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8027_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t379_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t379_Object_t/* invoker_method */
	, ICollection_1_t8027_ICollection_1_Contains_m43659_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m43659_GenericMethod/* genericMethod */

};
extern Il2CppType BloomAndFlaresU5BU5D_t5715_0_0_0;
extern Il2CppType BloomAndFlaresU5BU5D_t5715_0_0_0;
extern Il2CppType Int32_t386_0_0_0;
static ParameterInfo ICollection_1_t8027_ICollection_1_CopyTo_m43660_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &BloomAndFlaresU5BU5D_t5715_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m43660_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.BloomAndFlares>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m43660_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8027_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t_Int32_t386/* invoker_method */
	, ICollection_1_t8027_ICollection_1_CopyTo_m43660_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m43660_GenericMethod/* genericMethod */

};
extern Il2CppType BloomAndFlares_t227_0_0_0;
static ParameterInfo ICollection_1_t8027_ICollection_1_Remove_m43661_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &BloomAndFlares_t227_0_0_0},
};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m43661_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.BloomAndFlares>::Remove(T)
MethodInfo ICollection_1_Remove_m43661_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8027_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t379_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t379_Object_t/* invoker_method */
	, ICollection_1_t8027_ICollection_1_Remove_m43661_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m43661_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8027_MethodInfos[] =
{
	&ICollection_1_get_Count_m43655_MethodInfo,
	&ICollection_1_get_IsReadOnly_m43656_MethodInfo,
	&ICollection_1_Add_m43657_MethodInfo,
	&ICollection_1_Clear_m43658_MethodInfo,
	&ICollection_1_Contains_m43659_MethodInfo,
	&ICollection_1_CopyTo_m43660_MethodInfo,
	&ICollection_1_Remove_m43661_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8029_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8027_InterfacesTypeInfos[] = 
{
	&IEnumerable_t55_il2cpp_TypeInfo,
	&IEnumerable_1_t8029_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8027_0_0_0;
extern Il2CppType ICollection_1_t8027_1_0_0;
struct ICollection_1_t8027;
extern Il2CppGenericClass ICollection_1_t8027_GenericClass;
TypeInfo ICollection_1_t8027_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8027_MethodInfos/* methods */
	, ICollection_1_t8027_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8027_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8027_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8027_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8027_0_0_0/* byval_arg */
	, &ICollection_1_t8027_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8027_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityStandardAssets.ImageEffects.BloomAndFlares>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityStandardAssets.ImageEffects.BloomAndFlares>
extern Il2CppType IEnumerator_1_t6333_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m43662_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityStandardAssets.ImageEffects.BloomAndFlares>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m43662_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8029_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6333_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m43662_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8029_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m43662_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8029_InterfacesTypeInfos[] = 
{
	&IEnumerable_t55_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8029_0_0_0;
extern Il2CppType IEnumerable_1_t8029_1_0_0;
struct IEnumerable_1_t8029;
extern Il2CppGenericClass IEnumerable_1_t8029_GenericClass;
TypeInfo IEnumerable_1_t8029_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8029_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8029_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8029_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8029_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8029_0_0_0/* byval_arg */
	, &IEnumerable_1_t8029_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8029_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t8028_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.BloomAndFlares>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.BloomAndFlares>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.BloomAndFlares>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.BloomAndFlares>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.BloomAndFlares>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.BloomAndFlares>
extern MethodInfo IList_1_get_Item_m43663_MethodInfo;
extern MethodInfo IList_1_set_Item_m43664_MethodInfo;
static PropertyInfo IList_1_t8028____Item_PropertyInfo = 
{
	&IList_1_t8028_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m43663_MethodInfo/* get */
	, &IList_1_set_Item_m43664_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8028_PropertyInfos[] =
{
	&IList_1_t8028____Item_PropertyInfo,
	NULL
};
extern Il2CppType BloomAndFlares_t227_0_0_0;
static ParameterInfo IList_1_t8028_IList_1_IndexOf_m43665_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &BloomAndFlares_t227_0_0_0},
};
extern Il2CppType Int32_t386_0_0_0;
extern void* RuntimeInvoker_Int32_t386_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m43665_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.BloomAndFlares>::IndexOf(T)
MethodInfo IList_1_IndexOf_m43665_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8028_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t386_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t386_Object_t/* invoker_method */
	, IList_1_t8028_IList_1_IndexOf_m43665_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m43665_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t386_0_0_0;
extern Il2CppType BloomAndFlares_t227_0_0_0;
static ParameterInfo IList_1_t8028_IList_1_Insert_m43666_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &BloomAndFlares_t227_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Int32_t386_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m43666_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.BloomAndFlares>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m43666_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8028_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Int32_t386_Object_t/* invoker_method */
	, IList_1_t8028_IList_1_Insert_m43666_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m43666_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t386_0_0_0;
static ParameterInfo IList_1_t8028_IList_1_RemoveAt_m43667_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m43667_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.BloomAndFlares>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m43667_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8028_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Int32_t386/* invoker_method */
	, IList_1_t8028_IList_1_RemoveAt_m43667_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m43667_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t386_0_0_0;
static ParameterInfo IList_1_t8028_IList_1_get_Item_m43663_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
};
extern Il2CppType BloomAndFlares_t227_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m43663_GenericMethod;
// T System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.BloomAndFlares>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m43663_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8028_il2cpp_TypeInfo/* declaring_type */
	, &BloomAndFlares_t227_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t386/* invoker_method */
	, IList_1_t8028_IList_1_get_Item_m43663_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m43663_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t386_0_0_0;
extern Il2CppType BloomAndFlares_t227_0_0_0;
static ParameterInfo IList_1_t8028_IList_1_set_Item_m43664_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &BloomAndFlares_t227_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Int32_t386_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m43664_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.BloomAndFlares>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m43664_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8028_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Int32_t386_Object_t/* invoker_method */
	, IList_1_t8028_IList_1_set_Item_m43664_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m43664_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8028_MethodInfos[] =
{
	&IList_1_IndexOf_m43665_MethodInfo,
	&IList_1_Insert_m43666_MethodInfo,
	&IList_1_RemoveAt_m43667_MethodInfo,
	&IList_1_get_Item_m43663_MethodInfo,
	&IList_1_set_Item_m43664_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8028_InterfacesTypeInfos[] = 
{
	&IEnumerable_t55_il2cpp_TypeInfo,
	&ICollection_1_t8027_il2cpp_TypeInfo,
	&IEnumerable_1_t8029_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8028_0_0_0;
extern Il2CppType IList_1_t8028_1_0_0;
struct IList_1_t8028;
extern Il2CppGenericClass IList_1_t8028_GenericClass;
extern CustomAttributesCache IList_1_t2638__CustomAttributeCache;
TypeInfo IList_1_t8028_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8028_MethodInfos/* methods */
	, IList_1_t8028_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8028_il2cpp_TypeInfo/* element_class */
	, IList_1_t8028_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2638__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8028_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8028_0_0_0/* byval_arg */
	, &IList_1_t8028_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8028_GenericClass/* generic_class */
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
extern TypeInfo CachedInvokableCall_1_t3498_il2cpp_TypeInfo;

extern TypeInfo ObjectU5BU5D_t470_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo InvokableCall_1_t3499_il2cpp_TypeInfo;
extern TypeInfo Void_t30_il2cpp_TypeInfo;
extern MethodInfo InvokableCall_1__ctor_m19270_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m19272_MethodInfo;


// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityStandardAssets.ImageEffects.BloomAndFlares>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityStandardAssets.ImageEffects.BloomAndFlares>::Invoke(System.Object[])
// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<UnityStandardAssets.ImageEffects.BloomAndFlares>
extern Il2CppType ObjectU5BU5D_t470_0_0_33;
FieldInfo CachedInvokableCall_1_t3498____m_Arg1_1_FieldInfo = 
{
	"m_Arg1"/* name */
	, &ObjectU5BU5D_t470_0_0_33/* type */
	, &CachedInvokableCall_1_t3498_il2cpp_TypeInfo/* parent */
	, offsetof(CachedInvokableCall_1_t3498, ___m_Arg1_1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* CachedInvokableCall_1_t3498_FieldInfos[] =
{
	&CachedInvokableCall_1_t3498____m_Arg1_1_FieldInfo,
	NULL
};
extern Il2CppType Object_t326_0_0_0;
extern Il2CppType Object_t326_0_0_0;
extern Il2CppType MethodInfo_t1253_0_0_0;
extern Il2CppType MethodInfo_t1253_0_0_0;
extern Il2CppType BloomAndFlares_t227_0_0_0;
static ParameterInfo CachedInvokableCall_1_t3498_CachedInvokableCall_1__ctor_m19268_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t326_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1253_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &BloomAndFlares_t227_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod CachedInvokableCall_1__ctor_m19268_GenericMethod;
// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityStandardAssets.ImageEffects.BloomAndFlares>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
MethodInfo CachedInvokableCall_1__ctor_m19268_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CachedInvokableCall_1__ctor_m15540_gshared/* method */
	, &CachedInvokableCall_1_t3498_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t_Object_t_Object_t/* invoker_method */
	, CachedInvokableCall_1_t3498_CachedInvokableCall_1__ctor_m19268_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &CachedInvokableCall_1__ctor_m19268_GenericMethod/* genericMethod */

};
extern Il2CppType ObjectU5BU5D_t470_0_0_0;
extern Il2CppType ObjectU5BU5D_t470_0_0_0;
static ParameterInfo CachedInvokableCall_1_t3498_CachedInvokableCall_1_Invoke_m19269_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t470_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod CachedInvokableCall_1_Invoke_m19269_GenericMethod;
// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityStandardAssets.ImageEffects.BloomAndFlares>::Invoke(System.Object[])
MethodInfo CachedInvokableCall_1_Invoke_m19269_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&CachedInvokableCall_1_Invoke_m15542_gshared/* method */
	, &CachedInvokableCall_1_t3498_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t/* invoker_method */
	, CachedInvokableCall_1_t3498_CachedInvokableCall_1_Invoke_m19269_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &CachedInvokableCall_1_Invoke_m19269_GenericMethod/* genericMethod */

};
static MethodInfo* CachedInvokableCall_1_t3498_MethodInfos[] =
{
	&CachedInvokableCall_1__ctor_m19268_MethodInfo,
	&CachedInvokableCall_1_Invoke_m19269_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m1252_MethodInfo;
extern MethodInfo Object_GetHashCode_m1254_MethodInfo;
extern MethodInfo Object_ToString_m1255_MethodInfo;
extern MethodInfo CachedInvokableCall_1_Invoke_m19269_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m19273_MethodInfo;
static MethodInfo* CachedInvokableCall_1_t3498_VTable[] =
{
	&Object_Equals_m1252_MethodInfo,
	&Object_Finalize_m1253_MethodInfo,
	&Object_GetHashCode_m1254_MethodInfo,
	&Object_ToString_m1255_MethodInfo,
	&CachedInvokableCall_1_Invoke_m19269_MethodInfo,
	&InvokableCall_1_Find_m19273_MethodInfo,
};
extern Il2CppType UnityAction_1_t3500_0_0_0;
extern TypeInfo UnityAction_1_t3500_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisBloomAndFlares_t227_m33210_MethodInfo;
extern TypeInfo BloomAndFlares_t227_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m19275_MethodInfo;
extern TypeInfo BloomAndFlares_t227_il2cpp_TypeInfo;
static Il2CppRGCTXData CachedInvokableCall_1_t3498_RGCTXData[8] = 
{
	&UnityAction_1_t3500_0_0_0/* Type Usage */,
	&UnityAction_1_t3500_il2cpp_TypeInfo/* Class Usage */,
	&BaseInvokableCall_ThrowOnInvalidArg_TisBloomAndFlares_t227_m33210_MethodInfo/* Method Usage */,
	&BloomAndFlares_t227_il2cpp_TypeInfo/* Class Usage */,
	&UnityAction_1_Invoke_m19275_MethodInfo/* Method Usage */,
	&InvokableCall_1__ctor_m19270_MethodInfo/* Method Usage */,
	&BloomAndFlares_t227_il2cpp_TypeInfo/* Class Usage */,
	&InvokableCall_1_Invoke_m19272_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType CachedInvokableCall_1_t3498_0_0_0;
extern Il2CppType CachedInvokableCall_1_t3498_1_0_0;
struct CachedInvokableCall_1_t3498;
extern Il2CppGenericClass CachedInvokableCall_1_t3498_GenericClass;
TypeInfo CachedInvokableCall_1_t3498_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "CachedInvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, CachedInvokableCall_1_t3498_MethodInfos/* methods */
	, NULL/* properties */
	, CachedInvokableCall_1_t3498_FieldInfos/* fields */
	, NULL/* events */
	, &InvokableCall_1_t3499_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CachedInvokableCall_1_t3498_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, CachedInvokableCall_1_t3498_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CachedInvokableCall_1_t3498_il2cpp_TypeInfo/* cast_class */
	, &CachedInvokableCall_1_t3498_0_0_0/* byval_arg */
	, &CachedInvokableCall_1_t3498_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &CachedInvokableCall_1_t3498_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, CachedInvokableCall_1_t3498_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CachedInvokableCall_1_t3498)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
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
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo UnityAction_1_t3500_il2cpp_TypeInfo;
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t922_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall__ctor_m6280_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m1784_MethodInfo;
extern MethodInfo Delegate_CreateDelegate_m6473_MethodInfo;
extern MethodInfo Delegate_Combine_m2508_MethodInfo;
extern MethodInfo BaseInvokableCall__ctor_m6279_MethodInfo;
extern MethodInfo ArgumentException__ctor_m4333_MethodInfo;
extern MethodInfo BaseInvokableCall_AllowInvoke_m6281_MethodInfo;
extern MethodInfo Delegate_get_Target_m6469_MethodInfo;
extern MethodInfo Delegate_get_Method_m6467_MethodInfo;
struct BaseInvokableCall_t1252;
struct BaseInvokableCall_t1252;
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<System.Object>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<System.Object>(System.Object)
 void BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m31937_gshared (Object_t * __this/* static, unused */, Object_t * p0, MethodInfo* method);
#define BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m31937(__this/* static, unused */, p0, method) (void)BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m31937_gshared((Object_t *)__this/* static, unused */, (Object_t *)p0, method)
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<UnityStandardAssets.ImageEffects.BloomAndFlares>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<UnityStandardAssets.ImageEffects.BloomAndFlares>(System.Object)
#define BaseInvokableCall_ThrowOnInvalidArg_TisBloomAndFlares_t227_m33210(__this/* static, unused */, p0, method) (void)BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m31937_gshared((Object_t *)__this/* static, unused */, (Object_t *)p0, method)


// System.Void UnityEngine.Events.InvokableCall`1<UnityStandardAssets.ImageEffects.BloomAndFlares>::.ctor(System.Object,System.Reflection.MethodInfo)
// System.Void UnityEngine.Events.InvokableCall`1<UnityStandardAssets.ImageEffects.BloomAndFlares>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
// System.Void UnityEngine.Events.InvokableCall`1<UnityStandardAssets.ImageEffects.BloomAndFlares>::Invoke(System.Object[])
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityStandardAssets.ImageEffects.BloomAndFlares>::Find(System.Object,System.Reflection.MethodInfo)
// Metadata Definition UnityEngine.Events.InvokableCall`1<UnityStandardAssets.ImageEffects.BloomAndFlares>
extern Il2CppType UnityAction_1_t3500_0_0_1;
FieldInfo InvokableCall_1_t3499____Delegate_0_FieldInfo = 
{
	"Delegate"/* name */
	, &UnityAction_1_t3500_0_0_1/* type */
	, &InvokableCall_1_t3499_il2cpp_TypeInfo/* parent */
	, offsetof(InvokableCall_1_t3499, ___Delegate_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InvokableCall_1_t3499_FieldInfos[] =
{
	&InvokableCall_1_t3499____Delegate_0_FieldInfo,
	NULL
};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t1253_0_0_0;
static ParameterInfo InvokableCall_1_t3499_InvokableCall_1__ctor_m19270_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1253_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InvokableCall_1__ctor_m19270_GenericMethod;
// System.Void UnityEngine.Events.InvokableCall`1<UnityStandardAssets.ImageEffects.BloomAndFlares>::.ctor(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1__ctor_m19270_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m15543_gshared/* method */
	, &InvokableCall_1_t3499_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t3499_InvokableCall_1__ctor_m19270_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InvokableCall_1__ctor_m19270_GenericMethod/* genericMethod */

};
extern Il2CppType UnityAction_1_t3500_0_0_0;
static ParameterInfo InvokableCall_1_t3499_InvokableCall_1__ctor_m19271_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &UnityAction_1_t3500_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InvokableCall_1__ctor_m19271_GenericMethod;
// System.Void UnityEngine.Events.InvokableCall`1<UnityStandardAssets.ImageEffects.BloomAndFlares>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
MethodInfo InvokableCall_1__ctor_m19271_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m15544_gshared/* method */
	, &InvokableCall_1_t3499_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t/* invoker_method */
	, InvokableCall_1_t3499_InvokableCall_1__ctor_m19271_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InvokableCall_1__ctor_m19271_GenericMethod/* genericMethod */

};
extern Il2CppType ObjectU5BU5D_t470_0_0_0;
static ParameterInfo InvokableCall_1_t3499_InvokableCall_1_Invoke_m19272_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t470_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InvokableCall_1_Invoke_m19272_GenericMethod;
// System.Void UnityEngine.Events.InvokableCall`1<UnityStandardAssets.ImageEffects.BloomAndFlares>::Invoke(System.Object[])
MethodInfo InvokableCall_1_Invoke_m19272_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&InvokableCall_1_Invoke_m15545_gshared/* method */
	, &InvokableCall_1_t3499_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t/* invoker_method */
	, InvokableCall_1_t3499_InvokableCall_1_Invoke_m19272_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InvokableCall_1_Invoke_m19272_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t1253_0_0_0;
static ParameterInfo InvokableCall_1_t3499_InvokableCall_1_Find_m19273_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1253_0_0_0},
};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InvokableCall_1_Find_m19273_GenericMethod;
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityStandardAssets.ImageEffects.BloomAndFlares>::Find(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1_Find_m19273_MethodInfo = 
{
	"Find"/* name */
	, (methodPointerType)&InvokableCall_1_Find_m15546_gshared/* method */
	, &InvokableCall_1_t3499_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t379_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t379_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t3499_InvokableCall_1_Find_m19273_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InvokableCall_1_Find_m19273_GenericMethod/* genericMethod */

};
static MethodInfo* InvokableCall_1_t3499_MethodInfos[] =
{
	&InvokableCall_1__ctor_m19270_MethodInfo,
	&InvokableCall_1__ctor_m19271_MethodInfo,
	&InvokableCall_1_Invoke_m19272_MethodInfo,
	&InvokableCall_1_Find_m19273_MethodInfo,
	NULL
};
static MethodInfo* InvokableCall_1_t3499_VTable[] =
{
	&Object_Equals_m1252_MethodInfo,
	&Object_Finalize_m1253_MethodInfo,
	&Object_GetHashCode_m1254_MethodInfo,
	&Object_ToString_m1255_MethodInfo,
	&InvokableCall_1_Invoke_m19272_MethodInfo,
	&InvokableCall_1_Find_m19273_MethodInfo,
};
extern TypeInfo UnityAction_1_t3500_il2cpp_TypeInfo;
extern TypeInfo BloomAndFlares_t227_il2cpp_TypeInfo;
static Il2CppRGCTXData InvokableCall_1_t3499_RGCTXData[5] = 
{
	&UnityAction_1_t3500_0_0_0/* Type Usage */,
	&UnityAction_1_t3500_il2cpp_TypeInfo/* Class Usage */,
	&BaseInvokableCall_ThrowOnInvalidArg_TisBloomAndFlares_t227_m33210_MethodInfo/* Method Usage */,
	&BloomAndFlares_t227_il2cpp_TypeInfo/* Class Usage */,
	&UnityAction_1_Invoke_m19275_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType InvokableCall_1_t3499_0_0_0;
extern Il2CppType InvokableCall_1_t3499_1_0_0;
extern TypeInfo BaseInvokableCall_t1252_il2cpp_TypeInfo;
struct InvokableCall_1_t3499;
extern Il2CppGenericClass InvokableCall_1_t3499_GenericClass;
TypeInfo InvokableCall_1_t3499_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "InvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, InvokableCall_1_t3499_MethodInfos/* methods */
	, NULL/* properties */
	, InvokableCall_1_t3499_FieldInfos/* fields */
	, NULL/* events */
	, &BaseInvokableCall_t1252_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &InvokableCall_1_t3499_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, InvokableCall_1_t3499_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InvokableCall_1_t3499_il2cpp_TypeInfo/* cast_class */
	, &InvokableCall_1_t3499_0_0_0/* byval_arg */
	, &InvokableCall_1_t3499_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &InvokableCall_1_t3499_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InvokableCall_1_t3499_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InvokableCall_1_t3499)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
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
	, 4/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.Events.UnityAction`1<UnityStandardAssets.ImageEffects.BloomAndFlares>::.ctor(System.Object,System.IntPtr)
// System.Void UnityEngine.Events.UnityAction`1<UnityStandardAssets.ImageEffects.BloomAndFlares>::Invoke(T0)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityStandardAssets.ImageEffects.BloomAndFlares>::BeginInvoke(T0,System.AsyncCallback,System.Object)
// System.Void UnityEngine.Events.UnityAction`1<UnityStandardAssets.ImageEffects.BloomAndFlares>::EndInvoke(System.IAsyncResult)
// Metadata Definition UnityEngine.Events.UnityAction`1<UnityStandardAssets.ImageEffects.BloomAndFlares>
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t35_0_0_0;
extern Il2CppType IntPtr_t35_0_0_0;
static ParameterInfo UnityAction_1_t3500_UnityAction_1__ctor_m19274_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &IntPtr_t35_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t_IntPtr_t35 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod UnityAction_1__ctor_m19274_GenericMethod;
// System.Void UnityEngine.Events.UnityAction`1<UnityStandardAssets.ImageEffects.BloomAndFlares>::.ctor(System.Object,System.IntPtr)
MethodInfo UnityAction_1__ctor_m19274_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UnityAction_1__ctor_m15547_gshared/* method */
	, &UnityAction_1_t3500_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t_IntPtr_t35/* invoker_method */
	, UnityAction_1_t3500_UnityAction_1__ctor_m19274_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &UnityAction_1__ctor_m19274_GenericMethod/* genericMethod */

};
extern Il2CppType BloomAndFlares_t227_0_0_0;
static ParameterInfo UnityAction_1_t3500_UnityAction_1_Invoke_m19275_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &BloomAndFlares_t227_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod UnityAction_1_Invoke_m19275_GenericMethod;
// System.Void UnityEngine.Events.UnityAction`1<UnityStandardAssets.ImageEffects.BloomAndFlares>::Invoke(T0)
MethodInfo UnityAction_1_Invoke_m19275_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&UnityAction_1_Invoke_m15548_gshared/* method */
	, &UnityAction_1_t3500_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t/* invoker_method */
	, UnityAction_1_t3500_UnityAction_1_Invoke_m19275_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 10/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &UnityAction_1_Invoke_m19275_GenericMethod/* genericMethod */

};
extern Il2CppType BloomAndFlares_t227_0_0_0;
extern Il2CppType AsyncCallback_t32_0_0_0;
extern Il2CppType AsyncCallback_t32_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo UnityAction_1_t3500_UnityAction_1_BeginInvoke_m19276_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &BloomAndFlares_t227_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &AsyncCallback_t32_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType IAsyncResult_t31_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod UnityAction_1_BeginInvoke_m19276_GenericMethod;
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityStandardAssets.ImageEffects.BloomAndFlares>::BeginInvoke(T0,System.AsyncCallback,System.Object)
MethodInfo UnityAction_1_BeginInvoke_m19276_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&UnityAction_1_BeginInvoke_m15549_gshared/* method */
	, &UnityAction_1_t3500_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t31_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, UnityAction_1_t3500_UnityAction_1_BeginInvoke_m19276_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &UnityAction_1_BeginInvoke_m19276_GenericMethod/* genericMethod */

};
extern Il2CppType IAsyncResult_t31_0_0_0;
extern Il2CppType IAsyncResult_t31_0_0_0;
static ParameterInfo UnityAction_1_t3500_UnityAction_1_EndInvoke_m19277_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &IAsyncResult_t31_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod UnityAction_1_EndInvoke_m19277_GenericMethod;
// System.Void UnityEngine.Events.UnityAction`1<UnityStandardAssets.ImageEffects.BloomAndFlares>::EndInvoke(System.IAsyncResult)
MethodInfo UnityAction_1_EndInvoke_m19277_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&UnityAction_1_EndInvoke_m15550_gshared/* method */
	, &UnityAction_1_t3500_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t/* invoker_method */
	, UnityAction_1_t3500_UnityAction_1_EndInvoke_m19277_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &UnityAction_1_EndInvoke_m19277_GenericMethod/* genericMethod */

};
static MethodInfo* UnityAction_1_t3500_MethodInfos[] =
{
	&UnityAction_1__ctor_m19274_MethodInfo,
	&UnityAction_1_Invoke_m19275_MethodInfo,
	&UnityAction_1_BeginInvoke_m19276_MethodInfo,
	&UnityAction_1_EndInvoke_m19277_MethodInfo,
	NULL
};
extern MethodInfo MulticastDelegate_Equals_m1395_MethodInfo;
extern MethodInfo MulticastDelegate_GetHashCode_m1396_MethodInfo;
extern MethodInfo MulticastDelegate_GetObjectData_m1397_MethodInfo;
extern MethodInfo Delegate_Clone_m1398_MethodInfo;
extern MethodInfo MulticastDelegate_GetInvocationList_m1399_MethodInfo;
extern MethodInfo MulticastDelegate_CombineImpl_m1400_MethodInfo;
extern MethodInfo MulticastDelegate_RemoveImpl_m1401_MethodInfo;
extern MethodInfo UnityAction_1_BeginInvoke_m19276_MethodInfo;
extern MethodInfo UnityAction_1_EndInvoke_m19277_MethodInfo;
static MethodInfo* UnityAction_1_t3500_VTable[] =
{
	&MulticastDelegate_Equals_m1395_MethodInfo,
	&Object_Finalize_m1253_MethodInfo,
	&MulticastDelegate_GetHashCode_m1396_MethodInfo,
	&Object_ToString_m1255_MethodInfo,
	&MulticastDelegate_GetObjectData_m1397_MethodInfo,
	&Delegate_Clone_m1398_MethodInfo,
	&MulticastDelegate_GetObjectData_m1397_MethodInfo,
	&MulticastDelegate_GetInvocationList_m1399_MethodInfo,
	&MulticastDelegate_CombineImpl_m1400_MethodInfo,
	&MulticastDelegate_RemoveImpl_m1401_MethodInfo,
	&UnityAction_1_Invoke_m19275_MethodInfo,
	&UnityAction_1_BeginInvoke_m19276_MethodInfo,
	&UnityAction_1_EndInvoke_m19277_MethodInfo,
};
extern TypeInfo ICloneable_t434_il2cpp_TypeInfo;
extern TypeInfo ISerializable_t435_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair UnityAction_1_t3500_InterfacesOffsets[] = 
{
	{ &ICloneable_t434_il2cpp_TypeInfo, 4},
	{ &ISerializable_t435_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType UnityAction_1_t3500_1_0_0;
extern TypeInfo MulticastDelegate_t34_il2cpp_TypeInfo;
struct UnityAction_1_t3500;
extern Il2CppGenericClass UnityAction_1_t3500_GenericClass;
TypeInfo UnityAction_1_t3500_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnityAction`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, UnityAction_1_t3500_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MulticastDelegate_t34_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &UnityAction_1_t3500_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, UnityAction_1_t3500_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &UnityAction_1_t3500_il2cpp_TypeInfo/* cast_class */
	, &UnityAction_1_t3500_0_0_0/* byval_arg */
	, &UnityAction_1_t3500_1_0_0/* this_arg */
	, UnityAction_1_t3500_InterfacesOffsets/* interface_offsets */
	, &UnityAction_1_t3500_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UnityAction_1_t3500)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 257/* flags */
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
	, 4/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 13/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t6335_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<UnityStandardAssets.ImageEffects.BloomOptimized>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityStandardAssets.ImageEffects.BloomOptimized>
extern MethodInfo IEnumerator_1_get_Current_m43668_MethodInfo;
static PropertyInfo IEnumerator_1_t6335____Current_PropertyInfo = 
{
	&IEnumerator_1_t6335_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m43668_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6335_PropertyInfos[] =
{
	&IEnumerator_1_t6335____Current_PropertyInfo,
	NULL
};
extern Il2CppType BloomOptimized_t230_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m43668_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<UnityStandardAssets.ImageEffects.BloomOptimized>::get_Current()
MethodInfo IEnumerator_1_get_Current_m43668_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6335_il2cpp_TypeInfo/* declaring_type */
	, &BloomOptimized_t230_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m43668_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6335_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m43668_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6335_InterfacesTypeInfos[] = 
{
	&IEnumerator_t26_il2cpp_TypeInfo,
	&IDisposable_t444_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6335_0_0_0;
extern Il2CppType IEnumerator_1_t6335_1_0_0;
struct IEnumerator_1_t6335;
extern Il2CppGenericClass IEnumerator_1_t6335_GenericClass;
TypeInfo IEnumerator_1_t6335_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6335_MethodInfos/* methods */
	, IEnumerator_1_t6335_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6335_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6335_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6335_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6335_0_0_0/* byval_arg */
	, &IEnumerator_1_t6335_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6335_GenericClass/* generic_class */
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
extern TypeInfo InternalEnumerator_1_t3501_il2cpp_TypeInfo;

extern TypeInfo BloomOptimized_t230_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m19282_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisBloomOptimized_t230_m33212_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityStandardAssets.ImageEffects.BloomOptimized>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityStandardAssets.ImageEffects.BloomOptimized>(System.Int32)
#define Array_InternalArray__get_Item_TisBloomOptimized_t230_m33212(__this, p0, method) (BloomOptimized_t230 *)Array_InternalArray__get_Item_TisObject_t_m31403_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.BloomOptimized>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.BloomOptimized>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.BloomOptimized>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.BloomOptimized>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.BloomOptimized>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.BloomOptimized>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3501____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3501_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3501, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t386_0_0_1;
FieldInfo InternalEnumerator_1_t3501____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t386_0_0_1/* type */
	, &InternalEnumerator_1_t3501_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3501, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3501_FieldInfos[] =
{
	&InternalEnumerator_1_t3501____array_0_FieldInfo,
	&InternalEnumerator_1_t3501____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19279_MethodInfo;
static PropertyInfo InternalEnumerator_1_t3501____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3501_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19279_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3501____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3501_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m19282_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3501_PropertyInfos[] =
{
	&InternalEnumerator_1_t3501____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3501____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3501_InternalEnumerator_1__ctor_m19278_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m19278_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.BloomOptimized>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m19278_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m13935_gshared/* method */
	, &InternalEnumerator_1_t3501_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t/* invoker_method */
	, InternalEnumerator_1_t3501_InternalEnumerator_1__ctor_m19278_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m19278_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19279_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.BloomOptimized>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19279_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13937_gshared/* method */
	, &InternalEnumerator_1_t3501_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19279_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m19280_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.BloomOptimized>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m19280_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m13939_gshared/* method */
	, &InternalEnumerator_1_t3501_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m19280_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m19281_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.BloomOptimized>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m19281_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m13941_gshared/* method */
	, &InternalEnumerator_1_t3501_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m19281_GenericMethod/* genericMethod */

};
extern Il2CppType BloomOptimized_t230_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19282_GenericMethod;
// T System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.BloomOptimized>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m19282_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m13943_gshared/* method */
	, &InternalEnumerator_1_t3501_il2cpp_TypeInfo/* declaring_type */
	, &BloomOptimized_t230_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m19282_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3501_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m19278_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19279_MethodInfo,
	&InternalEnumerator_1_Dispose_m19280_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19281_MethodInfo,
	&InternalEnumerator_1_get_Current_m19282_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m19281_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m19280_MethodInfo;
static MethodInfo* InternalEnumerator_1_t3501_VTable[] =
{
	&ValueType_Equals_m2156_MethodInfo,
	&Object_Finalize_m1253_MethodInfo,
	&ValueType_GetHashCode_m2157_MethodInfo,
	&ValueType_ToString_m2158_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19279_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19281_MethodInfo,
	&InternalEnumerator_1_Dispose_m19280_MethodInfo,
	&InternalEnumerator_1_get_Current_m19282_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3501_InterfacesTypeInfos[] = 
{
	&IEnumerator_t26_il2cpp_TypeInfo,
	&IDisposable_t444_il2cpp_TypeInfo,
	&IEnumerator_1_t6335_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3501_InterfacesOffsets[] = 
{
	{ &IEnumerator_t26_il2cpp_TypeInfo, 4},
	{ &IDisposable_t444_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6335_il2cpp_TypeInfo, 7},
};
extern TypeInfo BloomOptimized_t230_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t3501_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m19282_MethodInfo/* Method Usage */,
	&BloomOptimized_t230_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisBloomOptimized_t230_m33212_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3501_0_0_0;
extern Il2CppType InternalEnumerator_1_t3501_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3501_GenericClass;
TypeInfo InternalEnumerator_1_t3501_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3501_MethodInfos/* methods */
	, InternalEnumerator_1_t3501_PropertyInfos/* properties */
	, InternalEnumerator_1_t3501_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t550_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3501_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3501_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3501_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3501_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3501_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3501_1_0_0/* this_arg */
	, InternalEnumerator_1_t3501_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3501_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t3501_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3501)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8030_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.BloomOptimized>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.BloomOptimized>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.BloomOptimized>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.BloomOptimized>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.BloomOptimized>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.BloomOptimized>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.BloomOptimized>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.BloomOptimized>
extern MethodInfo ICollection_1_get_Count_m43669_MethodInfo;
static PropertyInfo ICollection_1_t8030____Count_PropertyInfo = 
{
	&ICollection_1_t8030_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m43669_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m43670_MethodInfo;
static PropertyInfo ICollection_1_t8030____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8030_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m43670_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8030_PropertyInfos[] =
{
	&ICollection_1_t8030____Count_PropertyInfo,
	&ICollection_1_t8030____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t386_0_0_0;
extern void* RuntimeInvoker_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m43669_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.BloomOptimized>::get_Count()
MethodInfo ICollection_1_get_Count_m43669_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8030_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m43669_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m43670_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.BloomOptimized>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m43670_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8030_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m43670_GenericMethod/* genericMethod */

};
extern Il2CppType BloomOptimized_t230_0_0_0;
extern Il2CppType BloomOptimized_t230_0_0_0;
static ParameterInfo ICollection_1_t8030_ICollection_1_Add_m43671_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &BloomOptimized_t230_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m43671_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.BloomOptimized>::Add(T)
MethodInfo ICollection_1_Add_m43671_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8030_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t/* invoker_method */
	, ICollection_1_t8030_ICollection_1_Add_m43671_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m43671_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m43672_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.BloomOptimized>::Clear()
MethodInfo ICollection_1_Clear_m43672_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8030_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m43672_GenericMethod/* genericMethod */

};
extern Il2CppType BloomOptimized_t230_0_0_0;
static ParameterInfo ICollection_1_t8030_ICollection_1_Contains_m43673_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &BloomOptimized_t230_0_0_0},
};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m43673_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.BloomOptimized>::Contains(T)
MethodInfo ICollection_1_Contains_m43673_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8030_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t379_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t379_Object_t/* invoker_method */
	, ICollection_1_t8030_ICollection_1_Contains_m43673_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m43673_GenericMethod/* genericMethod */

};
extern Il2CppType BloomOptimizedU5BU5D_t5716_0_0_0;
extern Il2CppType BloomOptimizedU5BU5D_t5716_0_0_0;
extern Il2CppType Int32_t386_0_0_0;
static ParameterInfo ICollection_1_t8030_ICollection_1_CopyTo_m43674_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &BloomOptimizedU5BU5D_t5716_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m43674_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.BloomOptimized>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m43674_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8030_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t_Int32_t386/* invoker_method */
	, ICollection_1_t8030_ICollection_1_CopyTo_m43674_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m43674_GenericMethod/* genericMethod */

};
extern Il2CppType BloomOptimized_t230_0_0_0;
static ParameterInfo ICollection_1_t8030_ICollection_1_Remove_m43675_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &BloomOptimized_t230_0_0_0},
};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m43675_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.BloomOptimized>::Remove(T)
MethodInfo ICollection_1_Remove_m43675_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8030_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t379_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t379_Object_t/* invoker_method */
	, ICollection_1_t8030_ICollection_1_Remove_m43675_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m43675_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8030_MethodInfos[] =
{
	&ICollection_1_get_Count_m43669_MethodInfo,
	&ICollection_1_get_IsReadOnly_m43670_MethodInfo,
	&ICollection_1_Add_m43671_MethodInfo,
	&ICollection_1_Clear_m43672_MethodInfo,
	&ICollection_1_Contains_m43673_MethodInfo,
	&ICollection_1_CopyTo_m43674_MethodInfo,
	&ICollection_1_Remove_m43675_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8032_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8030_InterfacesTypeInfos[] = 
{
	&IEnumerable_t55_il2cpp_TypeInfo,
	&IEnumerable_1_t8032_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8030_0_0_0;
extern Il2CppType ICollection_1_t8030_1_0_0;
struct ICollection_1_t8030;
extern Il2CppGenericClass ICollection_1_t8030_GenericClass;
TypeInfo ICollection_1_t8030_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8030_MethodInfos/* methods */
	, ICollection_1_t8030_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8030_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8030_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8030_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8030_0_0_0/* byval_arg */
	, &ICollection_1_t8030_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8030_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityStandardAssets.ImageEffects.BloomOptimized>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityStandardAssets.ImageEffects.BloomOptimized>
extern Il2CppType IEnumerator_1_t6335_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m43676_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityStandardAssets.ImageEffects.BloomOptimized>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m43676_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8032_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6335_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m43676_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8032_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m43676_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8032_InterfacesTypeInfos[] = 
{
	&IEnumerable_t55_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8032_0_0_0;
extern Il2CppType IEnumerable_1_t8032_1_0_0;
struct IEnumerable_1_t8032;
extern Il2CppGenericClass IEnumerable_1_t8032_GenericClass;
TypeInfo IEnumerable_1_t8032_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8032_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8032_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8032_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8032_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8032_0_0_0/* byval_arg */
	, &IEnumerable_1_t8032_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8032_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t8031_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.BloomOptimized>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.BloomOptimized>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.BloomOptimized>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.BloomOptimized>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.BloomOptimized>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.BloomOptimized>
extern MethodInfo IList_1_get_Item_m43677_MethodInfo;
extern MethodInfo IList_1_set_Item_m43678_MethodInfo;
static PropertyInfo IList_1_t8031____Item_PropertyInfo = 
{
	&IList_1_t8031_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m43677_MethodInfo/* get */
	, &IList_1_set_Item_m43678_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8031_PropertyInfos[] =
{
	&IList_1_t8031____Item_PropertyInfo,
	NULL
};
extern Il2CppType BloomOptimized_t230_0_0_0;
static ParameterInfo IList_1_t8031_IList_1_IndexOf_m43679_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &BloomOptimized_t230_0_0_0},
};
extern Il2CppType Int32_t386_0_0_0;
extern void* RuntimeInvoker_Int32_t386_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m43679_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.BloomOptimized>::IndexOf(T)
MethodInfo IList_1_IndexOf_m43679_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8031_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t386_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t386_Object_t/* invoker_method */
	, IList_1_t8031_IList_1_IndexOf_m43679_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m43679_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t386_0_0_0;
extern Il2CppType BloomOptimized_t230_0_0_0;
static ParameterInfo IList_1_t8031_IList_1_Insert_m43680_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &BloomOptimized_t230_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Int32_t386_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m43680_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.BloomOptimized>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m43680_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8031_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Int32_t386_Object_t/* invoker_method */
	, IList_1_t8031_IList_1_Insert_m43680_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m43680_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t386_0_0_0;
static ParameterInfo IList_1_t8031_IList_1_RemoveAt_m43681_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m43681_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.BloomOptimized>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m43681_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8031_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Int32_t386/* invoker_method */
	, IList_1_t8031_IList_1_RemoveAt_m43681_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m43681_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t386_0_0_0;
static ParameterInfo IList_1_t8031_IList_1_get_Item_m43677_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
};
extern Il2CppType BloomOptimized_t230_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m43677_GenericMethod;
// T System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.BloomOptimized>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m43677_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8031_il2cpp_TypeInfo/* declaring_type */
	, &BloomOptimized_t230_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t386/* invoker_method */
	, IList_1_t8031_IList_1_get_Item_m43677_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m43677_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t386_0_0_0;
extern Il2CppType BloomOptimized_t230_0_0_0;
static ParameterInfo IList_1_t8031_IList_1_set_Item_m43678_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &BloomOptimized_t230_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Int32_t386_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m43678_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.BloomOptimized>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m43678_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8031_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Int32_t386_Object_t/* invoker_method */
	, IList_1_t8031_IList_1_set_Item_m43678_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m43678_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8031_MethodInfos[] =
{
	&IList_1_IndexOf_m43679_MethodInfo,
	&IList_1_Insert_m43680_MethodInfo,
	&IList_1_RemoveAt_m43681_MethodInfo,
	&IList_1_get_Item_m43677_MethodInfo,
	&IList_1_set_Item_m43678_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8031_InterfacesTypeInfos[] = 
{
	&IEnumerable_t55_il2cpp_TypeInfo,
	&ICollection_1_t8030_il2cpp_TypeInfo,
	&IEnumerable_1_t8032_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8031_0_0_0;
extern Il2CppType IList_1_t8031_1_0_0;
struct IList_1_t8031;
extern Il2CppGenericClass IList_1_t8031_GenericClass;
extern CustomAttributesCache IList_1_t2638__CustomAttributeCache;
TypeInfo IList_1_t8031_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8031_MethodInfos/* methods */
	, IList_1_t8031_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8031_il2cpp_TypeInfo/* element_class */
	, IList_1_t8031_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2638__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8031_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8031_0_0_0/* byval_arg */
	, &IList_1_t8031_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8031_GenericClass/* generic_class */
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
extern TypeInfo CachedInvokableCall_1_t3502_il2cpp_TypeInfo;

extern TypeInfo InvokableCall_1_t3503_il2cpp_TypeInfo;
extern MethodInfo InvokableCall_1__ctor_m19285_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m19287_MethodInfo;


// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityStandardAssets.ImageEffects.BloomOptimized>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityStandardAssets.ImageEffects.BloomOptimized>::Invoke(System.Object[])
// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<UnityStandardAssets.ImageEffects.BloomOptimized>
extern Il2CppType ObjectU5BU5D_t470_0_0_33;
FieldInfo CachedInvokableCall_1_t3502____m_Arg1_1_FieldInfo = 
{
	"m_Arg1"/* name */
	, &ObjectU5BU5D_t470_0_0_33/* type */
	, &CachedInvokableCall_1_t3502_il2cpp_TypeInfo/* parent */
	, offsetof(CachedInvokableCall_1_t3502, ___m_Arg1_1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* CachedInvokableCall_1_t3502_FieldInfos[] =
{
	&CachedInvokableCall_1_t3502____m_Arg1_1_FieldInfo,
	NULL
};
extern Il2CppType Object_t326_0_0_0;
extern Il2CppType MethodInfo_t1253_0_0_0;
extern Il2CppType BloomOptimized_t230_0_0_0;
static ParameterInfo CachedInvokableCall_1_t3502_CachedInvokableCall_1__ctor_m19283_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t326_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1253_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &BloomOptimized_t230_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod CachedInvokableCall_1__ctor_m19283_GenericMethod;
// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityStandardAssets.ImageEffects.BloomOptimized>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
MethodInfo CachedInvokableCall_1__ctor_m19283_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CachedInvokableCall_1__ctor_m15540_gshared/* method */
	, &CachedInvokableCall_1_t3502_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t_Object_t_Object_t/* invoker_method */
	, CachedInvokableCall_1_t3502_CachedInvokableCall_1__ctor_m19283_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &CachedInvokableCall_1__ctor_m19283_GenericMethod/* genericMethod */

};
extern Il2CppType ObjectU5BU5D_t470_0_0_0;
static ParameterInfo CachedInvokableCall_1_t3502_CachedInvokableCall_1_Invoke_m19284_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t470_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod CachedInvokableCall_1_Invoke_m19284_GenericMethod;
// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityStandardAssets.ImageEffects.BloomOptimized>::Invoke(System.Object[])
MethodInfo CachedInvokableCall_1_Invoke_m19284_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&CachedInvokableCall_1_Invoke_m15542_gshared/* method */
	, &CachedInvokableCall_1_t3502_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t/* invoker_method */
	, CachedInvokableCall_1_t3502_CachedInvokableCall_1_Invoke_m19284_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &CachedInvokableCall_1_Invoke_m19284_GenericMethod/* genericMethod */

};
static MethodInfo* CachedInvokableCall_1_t3502_MethodInfos[] =
{
	&CachedInvokableCall_1__ctor_m19283_MethodInfo,
	&CachedInvokableCall_1_Invoke_m19284_MethodInfo,
	NULL
};
extern MethodInfo CachedInvokableCall_1_Invoke_m19284_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m19288_MethodInfo;
static MethodInfo* CachedInvokableCall_1_t3502_VTable[] =
{
	&Object_Equals_m1252_MethodInfo,
	&Object_Finalize_m1253_MethodInfo,
	&Object_GetHashCode_m1254_MethodInfo,
	&Object_ToString_m1255_MethodInfo,
	&CachedInvokableCall_1_Invoke_m19284_MethodInfo,
	&InvokableCall_1_Find_m19288_MethodInfo,
};
extern Il2CppType UnityAction_1_t3504_0_0_0;
extern TypeInfo UnityAction_1_t3504_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisBloomOptimized_t230_m33222_MethodInfo;
extern TypeInfo BloomOptimized_t230_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m19290_MethodInfo;
extern TypeInfo BloomOptimized_t230_il2cpp_TypeInfo;
static Il2CppRGCTXData CachedInvokableCall_1_t3502_RGCTXData[8] = 
{
	&UnityAction_1_t3504_0_0_0/* Type Usage */,
	&UnityAction_1_t3504_il2cpp_TypeInfo/* Class Usage */,
	&BaseInvokableCall_ThrowOnInvalidArg_TisBloomOptimized_t230_m33222_MethodInfo/* Method Usage */,
	&BloomOptimized_t230_il2cpp_TypeInfo/* Class Usage */,
	&UnityAction_1_Invoke_m19290_MethodInfo/* Method Usage */,
	&InvokableCall_1__ctor_m19285_MethodInfo/* Method Usage */,
	&BloomOptimized_t230_il2cpp_TypeInfo/* Class Usage */,
	&InvokableCall_1_Invoke_m19287_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType CachedInvokableCall_1_t3502_0_0_0;
extern Il2CppType CachedInvokableCall_1_t3502_1_0_0;
struct CachedInvokableCall_1_t3502;
extern Il2CppGenericClass CachedInvokableCall_1_t3502_GenericClass;
TypeInfo CachedInvokableCall_1_t3502_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "CachedInvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, CachedInvokableCall_1_t3502_MethodInfos/* methods */
	, NULL/* properties */
	, CachedInvokableCall_1_t3502_FieldInfos/* fields */
	, NULL/* events */
	, &InvokableCall_1_t3503_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CachedInvokableCall_1_t3502_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, CachedInvokableCall_1_t3502_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CachedInvokableCall_1_t3502_il2cpp_TypeInfo/* cast_class */
	, &CachedInvokableCall_1_t3502_0_0_0/* byval_arg */
	, &CachedInvokableCall_1_t3502_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &CachedInvokableCall_1_t3502_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, CachedInvokableCall_1_t3502_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CachedInvokableCall_1_t3502)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
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
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo UnityAction_1_t3504_il2cpp_TypeInfo;
struct BaseInvokableCall_t1252;
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<UnityStandardAssets.ImageEffects.BloomOptimized>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<UnityStandardAssets.ImageEffects.BloomOptimized>(System.Object)
#define BaseInvokableCall_ThrowOnInvalidArg_TisBloomOptimized_t230_m33222(__this/* static, unused */, p0, method) (void)BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m31937_gshared((Object_t *)__this/* static, unused */, (Object_t *)p0, method)


// System.Void UnityEngine.Events.InvokableCall`1<UnityStandardAssets.ImageEffects.BloomOptimized>::.ctor(System.Object,System.Reflection.MethodInfo)
// System.Void UnityEngine.Events.InvokableCall`1<UnityStandardAssets.ImageEffects.BloomOptimized>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
// System.Void UnityEngine.Events.InvokableCall`1<UnityStandardAssets.ImageEffects.BloomOptimized>::Invoke(System.Object[])
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityStandardAssets.ImageEffects.BloomOptimized>::Find(System.Object,System.Reflection.MethodInfo)
// Metadata Definition UnityEngine.Events.InvokableCall`1<UnityStandardAssets.ImageEffects.BloomOptimized>
extern Il2CppType UnityAction_1_t3504_0_0_1;
FieldInfo InvokableCall_1_t3503____Delegate_0_FieldInfo = 
{
	"Delegate"/* name */
	, &UnityAction_1_t3504_0_0_1/* type */
	, &InvokableCall_1_t3503_il2cpp_TypeInfo/* parent */
	, offsetof(InvokableCall_1_t3503, ___Delegate_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InvokableCall_1_t3503_FieldInfos[] =
{
	&InvokableCall_1_t3503____Delegate_0_FieldInfo,
	NULL
};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t1253_0_0_0;
static ParameterInfo InvokableCall_1_t3503_InvokableCall_1__ctor_m19285_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1253_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InvokableCall_1__ctor_m19285_GenericMethod;
// System.Void UnityEngine.Events.InvokableCall`1<UnityStandardAssets.ImageEffects.BloomOptimized>::.ctor(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1__ctor_m19285_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m15543_gshared/* method */
	, &InvokableCall_1_t3503_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t3503_InvokableCall_1__ctor_m19285_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InvokableCall_1__ctor_m19285_GenericMethod/* genericMethod */

};
extern Il2CppType UnityAction_1_t3504_0_0_0;
static ParameterInfo InvokableCall_1_t3503_InvokableCall_1__ctor_m19286_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &UnityAction_1_t3504_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InvokableCall_1__ctor_m19286_GenericMethod;
// System.Void UnityEngine.Events.InvokableCall`1<UnityStandardAssets.ImageEffects.BloomOptimized>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
MethodInfo InvokableCall_1__ctor_m19286_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m15544_gshared/* method */
	, &InvokableCall_1_t3503_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t/* invoker_method */
	, InvokableCall_1_t3503_InvokableCall_1__ctor_m19286_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InvokableCall_1__ctor_m19286_GenericMethod/* genericMethod */

};
extern Il2CppType ObjectU5BU5D_t470_0_0_0;
static ParameterInfo InvokableCall_1_t3503_InvokableCall_1_Invoke_m19287_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t470_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InvokableCall_1_Invoke_m19287_GenericMethod;
// System.Void UnityEngine.Events.InvokableCall`1<UnityStandardAssets.ImageEffects.BloomOptimized>::Invoke(System.Object[])
MethodInfo InvokableCall_1_Invoke_m19287_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&InvokableCall_1_Invoke_m15545_gshared/* method */
	, &InvokableCall_1_t3503_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t/* invoker_method */
	, InvokableCall_1_t3503_InvokableCall_1_Invoke_m19287_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InvokableCall_1_Invoke_m19287_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t1253_0_0_0;
static ParameterInfo InvokableCall_1_t3503_InvokableCall_1_Find_m19288_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1253_0_0_0},
};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InvokableCall_1_Find_m19288_GenericMethod;
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityStandardAssets.ImageEffects.BloomOptimized>::Find(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1_Find_m19288_MethodInfo = 
{
	"Find"/* name */
	, (methodPointerType)&InvokableCall_1_Find_m15546_gshared/* method */
	, &InvokableCall_1_t3503_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t379_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t379_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t3503_InvokableCall_1_Find_m19288_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InvokableCall_1_Find_m19288_GenericMethod/* genericMethod */

};
static MethodInfo* InvokableCall_1_t3503_MethodInfos[] =
{
	&InvokableCall_1__ctor_m19285_MethodInfo,
	&InvokableCall_1__ctor_m19286_MethodInfo,
	&InvokableCall_1_Invoke_m19287_MethodInfo,
	&InvokableCall_1_Find_m19288_MethodInfo,
	NULL
};
static MethodInfo* InvokableCall_1_t3503_VTable[] =
{
	&Object_Equals_m1252_MethodInfo,
	&Object_Finalize_m1253_MethodInfo,
	&Object_GetHashCode_m1254_MethodInfo,
	&Object_ToString_m1255_MethodInfo,
	&InvokableCall_1_Invoke_m19287_MethodInfo,
	&InvokableCall_1_Find_m19288_MethodInfo,
};
extern TypeInfo UnityAction_1_t3504_il2cpp_TypeInfo;
extern TypeInfo BloomOptimized_t230_il2cpp_TypeInfo;
static Il2CppRGCTXData InvokableCall_1_t3503_RGCTXData[5] = 
{
	&UnityAction_1_t3504_0_0_0/* Type Usage */,
	&UnityAction_1_t3504_il2cpp_TypeInfo/* Class Usage */,
	&BaseInvokableCall_ThrowOnInvalidArg_TisBloomOptimized_t230_m33222_MethodInfo/* Method Usage */,
	&BloomOptimized_t230_il2cpp_TypeInfo/* Class Usage */,
	&UnityAction_1_Invoke_m19290_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType InvokableCall_1_t3503_0_0_0;
extern Il2CppType InvokableCall_1_t3503_1_0_0;
struct InvokableCall_1_t3503;
extern Il2CppGenericClass InvokableCall_1_t3503_GenericClass;
TypeInfo InvokableCall_1_t3503_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "InvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, InvokableCall_1_t3503_MethodInfos/* methods */
	, NULL/* properties */
	, InvokableCall_1_t3503_FieldInfos/* fields */
	, NULL/* events */
	, &BaseInvokableCall_t1252_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &InvokableCall_1_t3503_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, InvokableCall_1_t3503_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InvokableCall_1_t3503_il2cpp_TypeInfo/* cast_class */
	, &InvokableCall_1_t3503_0_0_0/* byval_arg */
	, &InvokableCall_1_t3503_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &InvokableCall_1_t3503_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InvokableCall_1_t3503_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InvokableCall_1_t3503)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
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
	, 4/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.Events.UnityAction`1<UnityStandardAssets.ImageEffects.BloomOptimized>::.ctor(System.Object,System.IntPtr)
// System.Void UnityEngine.Events.UnityAction`1<UnityStandardAssets.ImageEffects.BloomOptimized>::Invoke(T0)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityStandardAssets.ImageEffects.BloomOptimized>::BeginInvoke(T0,System.AsyncCallback,System.Object)
// System.Void UnityEngine.Events.UnityAction`1<UnityStandardAssets.ImageEffects.BloomOptimized>::EndInvoke(System.IAsyncResult)
// Metadata Definition UnityEngine.Events.UnityAction`1<UnityStandardAssets.ImageEffects.BloomOptimized>
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t35_0_0_0;
static ParameterInfo UnityAction_1_t3504_UnityAction_1__ctor_m19289_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &IntPtr_t35_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t_IntPtr_t35 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod UnityAction_1__ctor_m19289_GenericMethod;
// System.Void UnityEngine.Events.UnityAction`1<UnityStandardAssets.ImageEffects.BloomOptimized>::.ctor(System.Object,System.IntPtr)
MethodInfo UnityAction_1__ctor_m19289_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UnityAction_1__ctor_m15547_gshared/* method */
	, &UnityAction_1_t3504_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t_IntPtr_t35/* invoker_method */
	, UnityAction_1_t3504_UnityAction_1__ctor_m19289_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &UnityAction_1__ctor_m19289_GenericMethod/* genericMethod */

};
extern Il2CppType BloomOptimized_t230_0_0_0;
static ParameterInfo UnityAction_1_t3504_UnityAction_1_Invoke_m19290_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &BloomOptimized_t230_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod UnityAction_1_Invoke_m19290_GenericMethod;
// System.Void UnityEngine.Events.UnityAction`1<UnityStandardAssets.ImageEffects.BloomOptimized>::Invoke(T0)
MethodInfo UnityAction_1_Invoke_m19290_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&UnityAction_1_Invoke_m15548_gshared/* method */
	, &UnityAction_1_t3504_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t/* invoker_method */
	, UnityAction_1_t3504_UnityAction_1_Invoke_m19290_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 10/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &UnityAction_1_Invoke_m19290_GenericMethod/* genericMethod */

};
extern Il2CppType BloomOptimized_t230_0_0_0;
extern Il2CppType AsyncCallback_t32_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo UnityAction_1_t3504_UnityAction_1_BeginInvoke_m19291_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &BloomOptimized_t230_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &AsyncCallback_t32_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType IAsyncResult_t31_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod UnityAction_1_BeginInvoke_m19291_GenericMethod;
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityStandardAssets.ImageEffects.BloomOptimized>::BeginInvoke(T0,System.AsyncCallback,System.Object)
MethodInfo UnityAction_1_BeginInvoke_m19291_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&UnityAction_1_BeginInvoke_m15549_gshared/* method */
	, &UnityAction_1_t3504_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t31_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, UnityAction_1_t3504_UnityAction_1_BeginInvoke_m19291_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &UnityAction_1_BeginInvoke_m19291_GenericMethod/* genericMethod */

};
extern Il2CppType IAsyncResult_t31_0_0_0;
static ParameterInfo UnityAction_1_t3504_UnityAction_1_EndInvoke_m19292_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &IAsyncResult_t31_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod UnityAction_1_EndInvoke_m19292_GenericMethod;
// System.Void UnityEngine.Events.UnityAction`1<UnityStandardAssets.ImageEffects.BloomOptimized>::EndInvoke(System.IAsyncResult)
MethodInfo UnityAction_1_EndInvoke_m19292_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&UnityAction_1_EndInvoke_m15550_gshared/* method */
	, &UnityAction_1_t3504_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t/* invoker_method */
	, UnityAction_1_t3504_UnityAction_1_EndInvoke_m19292_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &UnityAction_1_EndInvoke_m19292_GenericMethod/* genericMethod */

};
static MethodInfo* UnityAction_1_t3504_MethodInfos[] =
{
	&UnityAction_1__ctor_m19289_MethodInfo,
	&UnityAction_1_Invoke_m19290_MethodInfo,
	&UnityAction_1_BeginInvoke_m19291_MethodInfo,
	&UnityAction_1_EndInvoke_m19292_MethodInfo,
	NULL
};
extern MethodInfo UnityAction_1_BeginInvoke_m19291_MethodInfo;
extern MethodInfo UnityAction_1_EndInvoke_m19292_MethodInfo;
static MethodInfo* UnityAction_1_t3504_VTable[] =
{
	&MulticastDelegate_Equals_m1395_MethodInfo,
	&Object_Finalize_m1253_MethodInfo,
	&MulticastDelegate_GetHashCode_m1396_MethodInfo,
	&Object_ToString_m1255_MethodInfo,
	&MulticastDelegate_GetObjectData_m1397_MethodInfo,
	&Delegate_Clone_m1398_MethodInfo,
	&MulticastDelegate_GetObjectData_m1397_MethodInfo,
	&MulticastDelegate_GetInvocationList_m1399_MethodInfo,
	&MulticastDelegate_CombineImpl_m1400_MethodInfo,
	&MulticastDelegate_RemoveImpl_m1401_MethodInfo,
	&UnityAction_1_Invoke_m19290_MethodInfo,
	&UnityAction_1_BeginInvoke_m19291_MethodInfo,
	&UnityAction_1_EndInvoke_m19292_MethodInfo,
};
static Il2CppInterfaceOffsetPair UnityAction_1_t3504_InterfacesOffsets[] = 
{
	{ &ICloneable_t434_il2cpp_TypeInfo, 4},
	{ &ISerializable_t435_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType UnityAction_1_t3504_1_0_0;
struct UnityAction_1_t3504;
extern Il2CppGenericClass UnityAction_1_t3504_GenericClass;
TypeInfo UnityAction_1_t3504_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnityAction`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, UnityAction_1_t3504_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MulticastDelegate_t34_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &UnityAction_1_t3504_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, UnityAction_1_t3504_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &UnityAction_1_t3504_il2cpp_TypeInfo/* cast_class */
	, &UnityAction_1_t3504_0_0_0/* byval_arg */
	, &UnityAction_1_t3504_1_0_0/* this_arg */
	, UnityAction_1_t3504_InterfacesOffsets/* interface_offsets */
	, &UnityAction_1_t3504_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UnityAction_1_t3504)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 257/* flags */
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
	, 4/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 13/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t6337_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<UnityStandardAssets.ImageEffects.BloomOptimized/Resolution>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityStandardAssets.ImageEffects.BloomOptimized/Resolution>
extern MethodInfo IEnumerator_1_get_Current_m43682_MethodInfo;
static PropertyInfo IEnumerator_1_t6337____Current_PropertyInfo = 
{
	&IEnumerator_1_t6337_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m43682_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6337_PropertyInfos[] =
{
	&IEnumerator_1_t6337____Current_PropertyInfo,
	NULL
};
extern Il2CppType Resolution_t228_0_0_0;
extern void* RuntimeInvoker_Resolution_t228 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m43682_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<UnityStandardAssets.ImageEffects.BloomOptimized/Resolution>::get_Current()
MethodInfo IEnumerator_1_get_Current_m43682_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6337_il2cpp_TypeInfo/* declaring_type */
	, &Resolution_t228_0_0_0/* return_type */
	, RuntimeInvoker_Resolution_t228/* invoker_method */
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
	, &IEnumerator_1_get_Current_m43682_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6337_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m43682_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6337_InterfacesTypeInfos[] = 
{
	&IEnumerator_t26_il2cpp_TypeInfo,
	&IDisposable_t444_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6337_0_0_0;
extern Il2CppType IEnumerator_1_t6337_1_0_0;
struct IEnumerator_1_t6337;
extern Il2CppGenericClass IEnumerator_1_t6337_GenericClass;
TypeInfo IEnumerator_1_t6337_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6337_MethodInfos/* methods */
	, IEnumerator_1_t6337_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6337_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6337_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6337_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6337_0_0_0/* byval_arg */
	, &IEnumerator_1_t6337_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6337_GenericClass/* generic_class */
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
extern TypeInfo InternalEnumerator_1_t3505_il2cpp_TypeInfo;

extern TypeInfo Resolution_t228_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m19297_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisResolution_t228_m33224_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityStandardAssets.ImageEffects.BloomOptimized/Resolution>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityStandardAssets.ImageEffects.BloomOptimized/Resolution>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisResolution_t228_m33224 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.BloomOptimized/Resolution>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m19293_MethodInfo;
 void InternalEnumerator_1__ctor_m19293 (InternalEnumerator_1_t3505 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.BloomOptimized/Resolution>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19294_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19294 (InternalEnumerator_1_t3505 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m19297(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m19297_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&Resolution_t228_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.BloomOptimized/Resolution>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m19295_MethodInfo;
 void InternalEnumerator_1_Dispose_m19295 (InternalEnumerator_1_t3505 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.BloomOptimized/Resolution>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m19296_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m19296 (InternalEnumerator_1_t3505 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.BloomOptimized/Resolution>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m19297 (InternalEnumerator_1_t3505 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisResolution_t228_m33224(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisResolution_t228_m33224_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.BloomOptimized/Resolution>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3505____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3505_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3505, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t386_0_0_1;
FieldInfo InternalEnumerator_1_t3505____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t386_0_0_1/* type */
	, &InternalEnumerator_1_t3505_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3505, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3505_FieldInfos[] =
{
	&InternalEnumerator_1_t3505____array_0_FieldInfo,
	&InternalEnumerator_1_t3505____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t3505____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3505_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19294_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3505____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3505_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m19297_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3505_PropertyInfos[] =
{
	&InternalEnumerator_1_t3505____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3505____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3505_InternalEnumerator_1__ctor_m19293_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m19293_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.BloomOptimized/Resolution>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m19293_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m19293/* method */
	, &InternalEnumerator_1_t3505_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t/* invoker_method */
	, InternalEnumerator_1_t3505_InternalEnumerator_1__ctor_m19293_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m19293_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19294_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.BloomOptimized/Resolution>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19294_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19294/* method */
	, &InternalEnumerator_1_t3505_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19294_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m19295_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.BloomOptimized/Resolution>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m19295_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m19295/* method */
	, &InternalEnumerator_1_t3505_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m19295_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m19296_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.BloomOptimized/Resolution>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m19296_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m19296/* method */
	, &InternalEnumerator_1_t3505_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m19296_GenericMethod/* genericMethod */

};
extern Il2CppType Resolution_t228_0_0_0;
extern void* RuntimeInvoker_Resolution_t228 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19297_GenericMethod;
// T System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.BloomOptimized/Resolution>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m19297_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m19297/* method */
	, &InternalEnumerator_1_t3505_il2cpp_TypeInfo/* declaring_type */
	, &Resolution_t228_0_0_0/* return_type */
	, RuntimeInvoker_Resolution_t228/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m19297_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3505_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m19293_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19294_MethodInfo,
	&InternalEnumerator_1_Dispose_m19295_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19296_MethodInfo,
	&InternalEnumerator_1_get_Current_m19297_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t3505_VTable[] =
{
	&ValueType_Equals_m2156_MethodInfo,
	&Object_Finalize_m1253_MethodInfo,
	&ValueType_GetHashCode_m2157_MethodInfo,
	&ValueType_ToString_m2158_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19294_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19296_MethodInfo,
	&InternalEnumerator_1_Dispose_m19295_MethodInfo,
	&InternalEnumerator_1_get_Current_m19297_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3505_InterfacesTypeInfos[] = 
{
	&IEnumerator_t26_il2cpp_TypeInfo,
	&IDisposable_t444_il2cpp_TypeInfo,
	&IEnumerator_1_t6337_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3505_InterfacesOffsets[] = 
{
	{ &IEnumerator_t26_il2cpp_TypeInfo, 4},
	{ &IDisposable_t444_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6337_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3505_0_0_0;
extern Il2CppType InternalEnumerator_1_t3505_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3505_GenericClass;
TypeInfo InternalEnumerator_1_t3505_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3505_MethodInfos/* methods */
	, InternalEnumerator_1_t3505_PropertyInfos/* properties */
	, InternalEnumerator_1_t3505_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t550_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3505_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3505_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3505_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3505_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3505_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3505_1_0_0/* this_arg */
	, InternalEnumerator_1_t3505_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3505_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3505)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8033_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.BloomOptimized/Resolution>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.BloomOptimized/Resolution>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.BloomOptimized/Resolution>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.BloomOptimized/Resolution>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.BloomOptimized/Resolution>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.BloomOptimized/Resolution>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.BloomOptimized/Resolution>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.BloomOptimized/Resolution>
extern MethodInfo ICollection_1_get_Count_m43683_MethodInfo;
static PropertyInfo ICollection_1_t8033____Count_PropertyInfo = 
{
	&ICollection_1_t8033_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m43683_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m43684_MethodInfo;
static PropertyInfo ICollection_1_t8033____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8033_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m43684_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8033_PropertyInfos[] =
{
	&ICollection_1_t8033____Count_PropertyInfo,
	&ICollection_1_t8033____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t386_0_0_0;
extern void* RuntimeInvoker_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m43683_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.BloomOptimized/Resolution>::get_Count()
MethodInfo ICollection_1_get_Count_m43683_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8033_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m43683_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m43684_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.BloomOptimized/Resolution>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m43684_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8033_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m43684_GenericMethod/* genericMethod */

};
extern Il2CppType Resolution_t228_0_0_0;
extern Il2CppType Resolution_t228_0_0_0;
static ParameterInfo ICollection_1_t8033_ICollection_1_Add_m43685_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Resolution_t228_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m43685_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.BloomOptimized/Resolution>::Add(T)
MethodInfo ICollection_1_Add_m43685_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8033_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Int32_t386/* invoker_method */
	, ICollection_1_t8033_ICollection_1_Add_m43685_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m43685_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m43686_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.BloomOptimized/Resolution>::Clear()
MethodInfo ICollection_1_Clear_m43686_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8033_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m43686_GenericMethod/* genericMethod */

};
extern Il2CppType Resolution_t228_0_0_0;
static ParameterInfo ICollection_1_t8033_ICollection_1_Contains_m43687_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Resolution_t228_0_0_0},
};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m43687_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.BloomOptimized/Resolution>::Contains(T)
MethodInfo ICollection_1_Contains_m43687_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8033_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t379_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t379_Int32_t386/* invoker_method */
	, ICollection_1_t8033_ICollection_1_Contains_m43687_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m43687_GenericMethod/* genericMethod */

};
extern Il2CppType ResolutionU5BU5D_t5717_0_0_0;
extern Il2CppType ResolutionU5BU5D_t5717_0_0_0;
extern Il2CppType Int32_t386_0_0_0;
static ParameterInfo ICollection_1_t8033_ICollection_1_CopyTo_m43688_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ResolutionU5BU5D_t5717_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m43688_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.BloomOptimized/Resolution>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m43688_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8033_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t_Int32_t386/* invoker_method */
	, ICollection_1_t8033_ICollection_1_CopyTo_m43688_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m43688_GenericMethod/* genericMethod */

};
extern Il2CppType Resolution_t228_0_0_0;
static ParameterInfo ICollection_1_t8033_ICollection_1_Remove_m43689_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Resolution_t228_0_0_0},
};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m43689_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.BloomOptimized/Resolution>::Remove(T)
MethodInfo ICollection_1_Remove_m43689_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8033_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t379_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t379_Int32_t386/* invoker_method */
	, ICollection_1_t8033_ICollection_1_Remove_m43689_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m43689_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8033_MethodInfos[] =
{
	&ICollection_1_get_Count_m43683_MethodInfo,
	&ICollection_1_get_IsReadOnly_m43684_MethodInfo,
	&ICollection_1_Add_m43685_MethodInfo,
	&ICollection_1_Clear_m43686_MethodInfo,
	&ICollection_1_Contains_m43687_MethodInfo,
	&ICollection_1_CopyTo_m43688_MethodInfo,
	&ICollection_1_Remove_m43689_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8035_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8033_InterfacesTypeInfos[] = 
{
	&IEnumerable_t55_il2cpp_TypeInfo,
	&IEnumerable_1_t8035_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8033_0_0_0;
extern Il2CppType ICollection_1_t8033_1_0_0;
struct ICollection_1_t8033;
extern Il2CppGenericClass ICollection_1_t8033_GenericClass;
TypeInfo ICollection_1_t8033_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8033_MethodInfos/* methods */
	, ICollection_1_t8033_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8033_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8033_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8033_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8033_0_0_0/* byval_arg */
	, &ICollection_1_t8033_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8033_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityStandardAssets.ImageEffects.BloomOptimized/Resolution>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityStandardAssets.ImageEffects.BloomOptimized/Resolution>
extern Il2CppType IEnumerator_1_t6337_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m43690_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityStandardAssets.ImageEffects.BloomOptimized/Resolution>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m43690_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8035_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6337_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m43690_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8035_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m43690_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8035_InterfacesTypeInfos[] = 
{
	&IEnumerable_t55_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8035_0_0_0;
extern Il2CppType IEnumerable_1_t8035_1_0_0;
struct IEnumerable_1_t8035;
extern Il2CppGenericClass IEnumerable_1_t8035_GenericClass;
TypeInfo IEnumerable_1_t8035_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8035_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8035_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8035_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8035_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8035_0_0_0/* byval_arg */
	, &IEnumerable_1_t8035_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8035_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t8034_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.BloomOptimized/Resolution>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.BloomOptimized/Resolution>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.BloomOptimized/Resolution>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.BloomOptimized/Resolution>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.BloomOptimized/Resolution>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.BloomOptimized/Resolution>
extern MethodInfo IList_1_get_Item_m43691_MethodInfo;
extern MethodInfo IList_1_set_Item_m43692_MethodInfo;
static PropertyInfo IList_1_t8034____Item_PropertyInfo = 
{
	&IList_1_t8034_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m43691_MethodInfo/* get */
	, &IList_1_set_Item_m43692_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8034_PropertyInfos[] =
{
	&IList_1_t8034____Item_PropertyInfo,
	NULL
};
extern Il2CppType Resolution_t228_0_0_0;
static ParameterInfo IList_1_t8034_IList_1_IndexOf_m43693_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Resolution_t228_0_0_0},
};
extern Il2CppType Int32_t386_0_0_0;
extern void* RuntimeInvoker_Int32_t386_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m43693_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.BloomOptimized/Resolution>::IndexOf(T)
MethodInfo IList_1_IndexOf_m43693_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8034_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t386_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t386_Int32_t386/* invoker_method */
	, IList_1_t8034_IList_1_IndexOf_m43693_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m43693_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t386_0_0_0;
extern Il2CppType Resolution_t228_0_0_0;
static ParameterInfo IList_1_t8034_IList_1_Insert_m43694_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &Resolution_t228_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Int32_t386_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m43694_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.BloomOptimized/Resolution>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m43694_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8034_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Int32_t386_Int32_t386/* invoker_method */
	, IList_1_t8034_IList_1_Insert_m43694_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m43694_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t386_0_0_0;
static ParameterInfo IList_1_t8034_IList_1_RemoveAt_m43695_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m43695_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.BloomOptimized/Resolution>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m43695_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8034_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Int32_t386/* invoker_method */
	, IList_1_t8034_IList_1_RemoveAt_m43695_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m43695_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t386_0_0_0;
static ParameterInfo IList_1_t8034_IList_1_get_Item_m43691_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
};
extern Il2CppType Resolution_t228_0_0_0;
extern void* RuntimeInvoker_Resolution_t228_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m43691_GenericMethod;
// T System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.BloomOptimized/Resolution>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m43691_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8034_il2cpp_TypeInfo/* declaring_type */
	, &Resolution_t228_0_0_0/* return_type */
	, RuntimeInvoker_Resolution_t228_Int32_t386/* invoker_method */
	, IList_1_t8034_IList_1_get_Item_m43691_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m43691_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t386_0_0_0;
extern Il2CppType Resolution_t228_0_0_0;
static ParameterInfo IList_1_t8034_IList_1_set_Item_m43692_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &Resolution_t228_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Int32_t386_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m43692_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.BloomOptimized/Resolution>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m43692_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8034_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Int32_t386_Int32_t386/* invoker_method */
	, IList_1_t8034_IList_1_set_Item_m43692_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m43692_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8034_MethodInfos[] =
{
	&IList_1_IndexOf_m43693_MethodInfo,
	&IList_1_Insert_m43694_MethodInfo,
	&IList_1_RemoveAt_m43695_MethodInfo,
	&IList_1_get_Item_m43691_MethodInfo,
	&IList_1_set_Item_m43692_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8034_InterfacesTypeInfos[] = 
{
	&IEnumerable_t55_il2cpp_TypeInfo,
	&ICollection_1_t8033_il2cpp_TypeInfo,
	&IEnumerable_1_t8035_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8034_0_0_0;
extern Il2CppType IList_1_t8034_1_0_0;
struct IList_1_t8034;
extern Il2CppGenericClass IList_1_t8034_GenericClass;
extern CustomAttributesCache IList_1_t2638__CustomAttributeCache;
TypeInfo IList_1_t8034_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8034_MethodInfos/* methods */
	, IList_1_t8034_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8034_il2cpp_TypeInfo/* element_class */
	, IList_1_t8034_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2638__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8034_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8034_0_0_0/* byval_arg */
	, &IList_1_t8034_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8034_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t6339_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<UnityStandardAssets.ImageEffects.BloomOptimized/BlurType>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityStandardAssets.ImageEffects.BloomOptimized/BlurType>
extern MethodInfo IEnumerator_1_get_Current_m43696_MethodInfo;
static PropertyInfo IEnumerator_1_t6339____Current_PropertyInfo = 
{
	&IEnumerator_1_t6339_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m43696_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6339_PropertyInfos[] =
{
	&IEnumerator_1_t6339____Current_PropertyInfo,
	NULL
};
extern Il2CppType BlurType_t229_0_0_0;
extern void* RuntimeInvoker_BlurType_t229 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m43696_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<UnityStandardAssets.ImageEffects.BloomOptimized/BlurType>::get_Current()
MethodInfo IEnumerator_1_get_Current_m43696_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6339_il2cpp_TypeInfo/* declaring_type */
	, &BlurType_t229_0_0_0/* return_type */
	, RuntimeInvoker_BlurType_t229/* invoker_method */
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
	, &IEnumerator_1_get_Current_m43696_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6339_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m43696_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6339_InterfacesTypeInfos[] = 
{
	&IEnumerator_t26_il2cpp_TypeInfo,
	&IDisposable_t444_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6339_0_0_0;
extern Il2CppType IEnumerator_1_t6339_1_0_0;
struct IEnumerator_1_t6339;
extern Il2CppGenericClass IEnumerator_1_t6339_GenericClass;
TypeInfo IEnumerator_1_t6339_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6339_MethodInfos/* methods */
	, IEnumerator_1_t6339_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6339_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6339_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6339_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6339_0_0_0/* byval_arg */
	, &IEnumerator_1_t6339_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6339_GenericClass/* generic_class */
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
extern TypeInfo InternalEnumerator_1_t3506_il2cpp_TypeInfo;

extern TypeInfo BlurType_t229_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m19302_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisBlurType_t229_m33235_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityStandardAssets.ImageEffects.BloomOptimized/BlurType>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityStandardAssets.ImageEffects.BloomOptimized/BlurType>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisBlurType_t229_m33235 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.BloomOptimized/BlurType>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m19298_MethodInfo;
 void InternalEnumerator_1__ctor_m19298 (InternalEnumerator_1_t3506 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.BloomOptimized/BlurType>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19299_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19299 (InternalEnumerator_1_t3506 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m19302(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m19302_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&BlurType_t229_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.BloomOptimized/BlurType>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m19300_MethodInfo;
 void InternalEnumerator_1_Dispose_m19300 (InternalEnumerator_1_t3506 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.BloomOptimized/BlurType>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m19301_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m19301 (InternalEnumerator_1_t3506 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.BloomOptimized/BlurType>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m19302 (InternalEnumerator_1_t3506 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisBlurType_t229_m33235(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisBlurType_t229_m33235_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.BloomOptimized/BlurType>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3506____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3506_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3506, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t386_0_0_1;
FieldInfo InternalEnumerator_1_t3506____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t386_0_0_1/* type */
	, &InternalEnumerator_1_t3506_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3506, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3506_FieldInfos[] =
{
	&InternalEnumerator_1_t3506____array_0_FieldInfo,
	&InternalEnumerator_1_t3506____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t3506____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3506_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19299_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3506____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3506_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m19302_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3506_PropertyInfos[] =
{
	&InternalEnumerator_1_t3506____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3506____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3506_InternalEnumerator_1__ctor_m19298_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m19298_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.BloomOptimized/BlurType>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m19298_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m19298/* method */
	, &InternalEnumerator_1_t3506_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t/* invoker_method */
	, InternalEnumerator_1_t3506_InternalEnumerator_1__ctor_m19298_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m19298_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19299_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.BloomOptimized/BlurType>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19299_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19299/* method */
	, &InternalEnumerator_1_t3506_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19299_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m19300_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.BloomOptimized/BlurType>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m19300_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m19300/* method */
	, &InternalEnumerator_1_t3506_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m19300_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m19301_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.BloomOptimized/BlurType>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m19301_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m19301/* method */
	, &InternalEnumerator_1_t3506_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m19301_GenericMethod/* genericMethod */

};
extern Il2CppType BlurType_t229_0_0_0;
extern void* RuntimeInvoker_BlurType_t229 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19302_GenericMethod;
// T System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.BloomOptimized/BlurType>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m19302_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m19302/* method */
	, &InternalEnumerator_1_t3506_il2cpp_TypeInfo/* declaring_type */
	, &BlurType_t229_0_0_0/* return_type */
	, RuntimeInvoker_BlurType_t229/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m19302_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3506_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m19298_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19299_MethodInfo,
	&InternalEnumerator_1_Dispose_m19300_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19301_MethodInfo,
	&InternalEnumerator_1_get_Current_m19302_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t3506_VTable[] =
{
	&ValueType_Equals_m2156_MethodInfo,
	&Object_Finalize_m1253_MethodInfo,
	&ValueType_GetHashCode_m2157_MethodInfo,
	&ValueType_ToString_m2158_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19299_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19301_MethodInfo,
	&InternalEnumerator_1_Dispose_m19300_MethodInfo,
	&InternalEnumerator_1_get_Current_m19302_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3506_InterfacesTypeInfos[] = 
{
	&IEnumerator_t26_il2cpp_TypeInfo,
	&IDisposable_t444_il2cpp_TypeInfo,
	&IEnumerator_1_t6339_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3506_InterfacesOffsets[] = 
{
	{ &IEnumerator_t26_il2cpp_TypeInfo, 4},
	{ &IDisposable_t444_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6339_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3506_0_0_0;
extern Il2CppType InternalEnumerator_1_t3506_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3506_GenericClass;
TypeInfo InternalEnumerator_1_t3506_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3506_MethodInfos/* methods */
	, InternalEnumerator_1_t3506_PropertyInfos/* properties */
	, InternalEnumerator_1_t3506_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t550_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3506_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3506_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3506_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3506_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3506_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3506_1_0_0/* this_arg */
	, InternalEnumerator_1_t3506_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3506_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3506)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8036_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.BloomOptimized/BlurType>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.BloomOptimized/BlurType>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.BloomOptimized/BlurType>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.BloomOptimized/BlurType>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.BloomOptimized/BlurType>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.BloomOptimized/BlurType>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.BloomOptimized/BlurType>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.BloomOptimized/BlurType>
extern MethodInfo ICollection_1_get_Count_m43697_MethodInfo;
static PropertyInfo ICollection_1_t8036____Count_PropertyInfo = 
{
	&ICollection_1_t8036_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m43697_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m43698_MethodInfo;
static PropertyInfo ICollection_1_t8036____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8036_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m43698_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8036_PropertyInfos[] =
{
	&ICollection_1_t8036____Count_PropertyInfo,
	&ICollection_1_t8036____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t386_0_0_0;
extern void* RuntimeInvoker_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m43697_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.BloomOptimized/BlurType>::get_Count()
MethodInfo ICollection_1_get_Count_m43697_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8036_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m43697_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m43698_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.BloomOptimized/BlurType>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m43698_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8036_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m43698_GenericMethod/* genericMethod */

};
extern Il2CppType BlurType_t229_0_0_0;
extern Il2CppType BlurType_t229_0_0_0;
static ParameterInfo ICollection_1_t8036_ICollection_1_Add_m43699_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &BlurType_t229_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m43699_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.BloomOptimized/BlurType>::Add(T)
MethodInfo ICollection_1_Add_m43699_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8036_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Int32_t386/* invoker_method */
	, ICollection_1_t8036_ICollection_1_Add_m43699_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m43699_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m43700_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.BloomOptimized/BlurType>::Clear()
MethodInfo ICollection_1_Clear_m43700_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8036_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m43700_GenericMethod/* genericMethod */

};
extern Il2CppType BlurType_t229_0_0_0;
static ParameterInfo ICollection_1_t8036_ICollection_1_Contains_m43701_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &BlurType_t229_0_0_0},
};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m43701_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.BloomOptimized/BlurType>::Contains(T)
MethodInfo ICollection_1_Contains_m43701_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8036_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t379_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t379_Int32_t386/* invoker_method */
	, ICollection_1_t8036_ICollection_1_Contains_m43701_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m43701_GenericMethod/* genericMethod */

};
extern Il2CppType BlurTypeU5BU5D_t5718_0_0_0;
extern Il2CppType BlurTypeU5BU5D_t5718_0_0_0;
extern Il2CppType Int32_t386_0_0_0;
static ParameterInfo ICollection_1_t8036_ICollection_1_CopyTo_m43702_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &BlurTypeU5BU5D_t5718_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m43702_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.BloomOptimized/BlurType>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m43702_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8036_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t_Int32_t386/* invoker_method */
	, ICollection_1_t8036_ICollection_1_CopyTo_m43702_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m43702_GenericMethod/* genericMethod */

};
extern Il2CppType BlurType_t229_0_0_0;
static ParameterInfo ICollection_1_t8036_ICollection_1_Remove_m43703_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &BlurType_t229_0_0_0},
};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m43703_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.BloomOptimized/BlurType>::Remove(T)
MethodInfo ICollection_1_Remove_m43703_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8036_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t379_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t379_Int32_t386/* invoker_method */
	, ICollection_1_t8036_ICollection_1_Remove_m43703_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m43703_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8036_MethodInfos[] =
{
	&ICollection_1_get_Count_m43697_MethodInfo,
	&ICollection_1_get_IsReadOnly_m43698_MethodInfo,
	&ICollection_1_Add_m43699_MethodInfo,
	&ICollection_1_Clear_m43700_MethodInfo,
	&ICollection_1_Contains_m43701_MethodInfo,
	&ICollection_1_CopyTo_m43702_MethodInfo,
	&ICollection_1_Remove_m43703_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8038_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8036_InterfacesTypeInfos[] = 
{
	&IEnumerable_t55_il2cpp_TypeInfo,
	&IEnumerable_1_t8038_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8036_0_0_0;
extern Il2CppType ICollection_1_t8036_1_0_0;
struct ICollection_1_t8036;
extern Il2CppGenericClass ICollection_1_t8036_GenericClass;
TypeInfo ICollection_1_t8036_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8036_MethodInfos/* methods */
	, ICollection_1_t8036_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8036_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8036_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8036_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8036_0_0_0/* byval_arg */
	, &ICollection_1_t8036_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8036_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityStandardAssets.ImageEffects.BloomOptimized/BlurType>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityStandardAssets.ImageEffects.BloomOptimized/BlurType>
extern Il2CppType IEnumerator_1_t6339_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m43704_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityStandardAssets.ImageEffects.BloomOptimized/BlurType>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m43704_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8038_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6339_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m43704_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8038_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m43704_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8038_InterfacesTypeInfos[] = 
{
	&IEnumerable_t55_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8038_0_0_0;
extern Il2CppType IEnumerable_1_t8038_1_0_0;
struct IEnumerable_1_t8038;
extern Il2CppGenericClass IEnumerable_1_t8038_GenericClass;
TypeInfo IEnumerable_1_t8038_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8038_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8038_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8038_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8038_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8038_0_0_0/* byval_arg */
	, &IEnumerable_1_t8038_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8038_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t8037_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.BloomOptimized/BlurType>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.BloomOptimized/BlurType>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.BloomOptimized/BlurType>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.BloomOptimized/BlurType>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.BloomOptimized/BlurType>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.BloomOptimized/BlurType>
extern MethodInfo IList_1_get_Item_m43705_MethodInfo;
extern MethodInfo IList_1_set_Item_m43706_MethodInfo;
static PropertyInfo IList_1_t8037____Item_PropertyInfo = 
{
	&IList_1_t8037_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m43705_MethodInfo/* get */
	, &IList_1_set_Item_m43706_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8037_PropertyInfos[] =
{
	&IList_1_t8037____Item_PropertyInfo,
	NULL
};
extern Il2CppType BlurType_t229_0_0_0;
static ParameterInfo IList_1_t8037_IList_1_IndexOf_m43707_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &BlurType_t229_0_0_0},
};
extern Il2CppType Int32_t386_0_0_0;
extern void* RuntimeInvoker_Int32_t386_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m43707_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.BloomOptimized/BlurType>::IndexOf(T)
MethodInfo IList_1_IndexOf_m43707_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8037_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t386_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t386_Int32_t386/* invoker_method */
	, IList_1_t8037_IList_1_IndexOf_m43707_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m43707_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t386_0_0_0;
extern Il2CppType BlurType_t229_0_0_0;
static ParameterInfo IList_1_t8037_IList_1_Insert_m43708_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &BlurType_t229_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Int32_t386_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m43708_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.BloomOptimized/BlurType>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m43708_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8037_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Int32_t386_Int32_t386/* invoker_method */
	, IList_1_t8037_IList_1_Insert_m43708_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m43708_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t386_0_0_0;
static ParameterInfo IList_1_t8037_IList_1_RemoveAt_m43709_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m43709_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.BloomOptimized/BlurType>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m43709_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8037_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Int32_t386/* invoker_method */
	, IList_1_t8037_IList_1_RemoveAt_m43709_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m43709_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t386_0_0_0;
static ParameterInfo IList_1_t8037_IList_1_get_Item_m43705_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
};
extern Il2CppType BlurType_t229_0_0_0;
extern void* RuntimeInvoker_BlurType_t229_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m43705_GenericMethod;
// T System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.BloomOptimized/BlurType>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m43705_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8037_il2cpp_TypeInfo/* declaring_type */
	, &BlurType_t229_0_0_0/* return_type */
	, RuntimeInvoker_BlurType_t229_Int32_t386/* invoker_method */
	, IList_1_t8037_IList_1_get_Item_m43705_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m43705_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t386_0_0_0;
extern Il2CppType BlurType_t229_0_0_0;
static ParameterInfo IList_1_t8037_IList_1_set_Item_m43706_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &BlurType_t229_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Int32_t386_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m43706_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.BloomOptimized/BlurType>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m43706_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8037_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Int32_t386_Int32_t386/* invoker_method */
	, IList_1_t8037_IList_1_set_Item_m43706_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m43706_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8037_MethodInfos[] =
{
	&IList_1_IndexOf_m43707_MethodInfo,
	&IList_1_Insert_m43708_MethodInfo,
	&IList_1_RemoveAt_m43709_MethodInfo,
	&IList_1_get_Item_m43705_MethodInfo,
	&IList_1_set_Item_m43706_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8037_InterfacesTypeInfos[] = 
{
	&IEnumerable_t55_il2cpp_TypeInfo,
	&ICollection_1_t8036_il2cpp_TypeInfo,
	&IEnumerable_1_t8038_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8037_0_0_0;
extern Il2CppType IList_1_t8037_1_0_0;
struct IList_1_t8037;
extern Il2CppGenericClass IList_1_t8037_GenericClass;
extern CustomAttributesCache IList_1_t2638__CustomAttributeCache;
TypeInfo IList_1_t8037_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8037_MethodInfos/* methods */
	, IList_1_t8037_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8037_il2cpp_TypeInfo/* element_class */
	, IList_1_t8037_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2638__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8037_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8037_0_0_0/* byval_arg */
	, &IList_1_t8037_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8037_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t6341_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<UnityStandardAssets.ImageEffects.Blur>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityStandardAssets.ImageEffects.Blur>
extern MethodInfo IEnumerator_1_get_Current_m43710_MethodInfo;
static PropertyInfo IEnumerator_1_t6341____Current_PropertyInfo = 
{
	&IEnumerator_1_t6341_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m43710_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6341_PropertyInfos[] =
{
	&IEnumerator_1_t6341____Current_PropertyInfo,
	NULL
};
extern Il2CppType Blur_t231_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m43710_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<UnityStandardAssets.ImageEffects.Blur>::get_Current()
MethodInfo IEnumerator_1_get_Current_m43710_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6341_il2cpp_TypeInfo/* declaring_type */
	, &Blur_t231_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m43710_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6341_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m43710_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6341_InterfacesTypeInfos[] = 
{
	&IEnumerator_t26_il2cpp_TypeInfo,
	&IDisposable_t444_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6341_0_0_0;
extern Il2CppType IEnumerator_1_t6341_1_0_0;
struct IEnumerator_1_t6341;
extern Il2CppGenericClass IEnumerator_1_t6341_GenericClass;
TypeInfo IEnumerator_1_t6341_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6341_MethodInfos/* methods */
	, IEnumerator_1_t6341_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6341_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6341_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6341_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6341_0_0_0/* byval_arg */
	, &IEnumerator_1_t6341_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6341_GenericClass/* generic_class */
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
extern TypeInfo InternalEnumerator_1_t3507_il2cpp_TypeInfo;

extern TypeInfo Blur_t231_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m19307_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisBlur_t231_m33246_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityStandardAssets.ImageEffects.Blur>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityStandardAssets.ImageEffects.Blur>(System.Int32)
#define Array_InternalArray__get_Item_TisBlur_t231_m33246(__this, p0, method) (Blur_t231 *)Array_InternalArray__get_Item_TisObject_t_m31403_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.Blur>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.Blur>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.Blur>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.Blur>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.Blur>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.Blur>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3507____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3507_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3507, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t386_0_0_1;
FieldInfo InternalEnumerator_1_t3507____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t386_0_0_1/* type */
	, &InternalEnumerator_1_t3507_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3507, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3507_FieldInfos[] =
{
	&InternalEnumerator_1_t3507____array_0_FieldInfo,
	&InternalEnumerator_1_t3507____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19304_MethodInfo;
static PropertyInfo InternalEnumerator_1_t3507____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3507_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19304_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3507____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3507_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m19307_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3507_PropertyInfos[] =
{
	&InternalEnumerator_1_t3507____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3507____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3507_InternalEnumerator_1__ctor_m19303_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m19303_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.Blur>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m19303_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m13935_gshared/* method */
	, &InternalEnumerator_1_t3507_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t/* invoker_method */
	, InternalEnumerator_1_t3507_InternalEnumerator_1__ctor_m19303_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m19303_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19304_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.Blur>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19304_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13937_gshared/* method */
	, &InternalEnumerator_1_t3507_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19304_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m19305_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.Blur>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m19305_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m13939_gshared/* method */
	, &InternalEnumerator_1_t3507_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m19305_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m19306_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.Blur>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m19306_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m13941_gshared/* method */
	, &InternalEnumerator_1_t3507_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m19306_GenericMethod/* genericMethod */

};
extern Il2CppType Blur_t231_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19307_GenericMethod;
// T System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.Blur>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m19307_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m13943_gshared/* method */
	, &InternalEnumerator_1_t3507_il2cpp_TypeInfo/* declaring_type */
	, &Blur_t231_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m19307_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3507_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m19303_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19304_MethodInfo,
	&InternalEnumerator_1_Dispose_m19305_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19306_MethodInfo,
	&InternalEnumerator_1_get_Current_m19307_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m19306_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m19305_MethodInfo;
static MethodInfo* InternalEnumerator_1_t3507_VTable[] =
{
	&ValueType_Equals_m2156_MethodInfo,
	&Object_Finalize_m1253_MethodInfo,
	&ValueType_GetHashCode_m2157_MethodInfo,
	&ValueType_ToString_m2158_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19304_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19306_MethodInfo,
	&InternalEnumerator_1_Dispose_m19305_MethodInfo,
	&InternalEnumerator_1_get_Current_m19307_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3507_InterfacesTypeInfos[] = 
{
	&IEnumerator_t26_il2cpp_TypeInfo,
	&IDisposable_t444_il2cpp_TypeInfo,
	&IEnumerator_1_t6341_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3507_InterfacesOffsets[] = 
{
	{ &IEnumerator_t26_il2cpp_TypeInfo, 4},
	{ &IDisposable_t444_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6341_il2cpp_TypeInfo, 7},
};
extern TypeInfo Blur_t231_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t3507_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m19307_MethodInfo/* Method Usage */,
	&Blur_t231_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisBlur_t231_m33246_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3507_0_0_0;
extern Il2CppType InternalEnumerator_1_t3507_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3507_GenericClass;
TypeInfo InternalEnumerator_1_t3507_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3507_MethodInfos/* methods */
	, InternalEnumerator_1_t3507_PropertyInfos/* properties */
	, InternalEnumerator_1_t3507_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t550_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3507_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3507_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3507_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3507_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3507_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3507_1_0_0/* this_arg */
	, InternalEnumerator_1_t3507_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3507_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t3507_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3507)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8039_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.Blur>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.Blur>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.Blur>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.Blur>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.Blur>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.Blur>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.Blur>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.Blur>
extern MethodInfo ICollection_1_get_Count_m43711_MethodInfo;
static PropertyInfo ICollection_1_t8039____Count_PropertyInfo = 
{
	&ICollection_1_t8039_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m43711_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m43712_MethodInfo;
static PropertyInfo ICollection_1_t8039____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8039_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m43712_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8039_PropertyInfos[] =
{
	&ICollection_1_t8039____Count_PropertyInfo,
	&ICollection_1_t8039____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t386_0_0_0;
extern void* RuntimeInvoker_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m43711_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.Blur>::get_Count()
MethodInfo ICollection_1_get_Count_m43711_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8039_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m43711_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m43712_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.Blur>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m43712_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8039_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m43712_GenericMethod/* genericMethod */

};
extern Il2CppType Blur_t231_0_0_0;
extern Il2CppType Blur_t231_0_0_0;
static ParameterInfo ICollection_1_t8039_ICollection_1_Add_m43713_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Blur_t231_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m43713_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.Blur>::Add(T)
MethodInfo ICollection_1_Add_m43713_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8039_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t/* invoker_method */
	, ICollection_1_t8039_ICollection_1_Add_m43713_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m43713_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m43714_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.Blur>::Clear()
MethodInfo ICollection_1_Clear_m43714_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8039_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m43714_GenericMethod/* genericMethod */

};
extern Il2CppType Blur_t231_0_0_0;
static ParameterInfo ICollection_1_t8039_ICollection_1_Contains_m43715_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Blur_t231_0_0_0},
};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m43715_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.Blur>::Contains(T)
MethodInfo ICollection_1_Contains_m43715_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8039_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t379_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t379_Object_t/* invoker_method */
	, ICollection_1_t8039_ICollection_1_Contains_m43715_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m43715_GenericMethod/* genericMethod */

};
extern Il2CppType BlurU5BU5D_t5719_0_0_0;
extern Il2CppType BlurU5BU5D_t5719_0_0_0;
extern Il2CppType Int32_t386_0_0_0;
static ParameterInfo ICollection_1_t8039_ICollection_1_CopyTo_m43716_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &BlurU5BU5D_t5719_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m43716_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.Blur>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m43716_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8039_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t_Int32_t386/* invoker_method */
	, ICollection_1_t8039_ICollection_1_CopyTo_m43716_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m43716_GenericMethod/* genericMethod */

};
extern Il2CppType Blur_t231_0_0_0;
static ParameterInfo ICollection_1_t8039_ICollection_1_Remove_m43717_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Blur_t231_0_0_0},
};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m43717_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.Blur>::Remove(T)
MethodInfo ICollection_1_Remove_m43717_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8039_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t379_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t379_Object_t/* invoker_method */
	, ICollection_1_t8039_ICollection_1_Remove_m43717_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m43717_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8039_MethodInfos[] =
{
	&ICollection_1_get_Count_m43711_MethodInfo,
	&ICollection_1_get_IsReadOnly_m43712_MethodInfo,
	&ICollection_1_Add_m43713_MethodInfo,
	&ICollection_1_Clear_m43714_MethodInfo,
	&ICollection_1_Contains_m43715_MethodInfo,
	&ICollection_1_CopyTo_m43716_MethodInfo,
	&ICollection_1_Remove_m43717_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8041_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8039_InterfacesTypeInfos[] = 
{
	&IEnumerable_t55_il2cpp_TypeInfo,
	&IEnumerable_1_t8041_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8039_0_0_0;
extern Il2CppType ICollection_1_t8039_1_0_0;
struct ICollection_1_t8039;
extern Il2CppGenericClass ICollection_1_t8039_GenericClass;
TypeInfo ICollection_1_t8039_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8039_MethodInfos/* methods */
	, ICollection_1_t8039_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8039_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8039_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8039_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8039_0_0_0/* byval_arg */
	, &ICollection_1_t8039_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8039_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityStandardAssets.ImageEffects.Blur>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityStandardAssets.ImageEffects.Blur>
extern Il2CppType IEnumerator_1_t6341_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m43718_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityStandardAssets.ImageEffects.Blur>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m43718_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8041_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6341_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m43718_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8041_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m43718_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8041_InterfacesTypeInfos[] = 
{
	&IEnumerable_t55_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8041_0_0_0;
extern Il2CppType IEnumerable_1_t8041_1_0_0;
struct IEnumerable_1_t8041;
extern Il2CppGenericClass IEnumerable_1_t8041_GenericClass;
TypeInfo IEnumerable_1_t8041_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8041_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8041_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8041_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8041_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8041_0_0_0/* byval_arg */
	, &IEnumerable_1_t8041_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8041_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t8040_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.Blur>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.Blur>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.Blur>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.Blur>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.Blur>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.Blur>
extern MethodInfo IList_1_get_Item_m43719_MethodInfo;
extern MethodInfo IList_1_set_Item_m43720_MethodInfo;
static PropertyInfo IList_1_t8040____Item_PropertyInfo = 
{
	&IList_1_t8040_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m43719_MethodInfo/* get */
	, &IList_1_set_Item_m43720_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8040_PropertyInfos[] =
{
	&IList_1_t8040____Item_PropertyInfo,
	NULL
};
extern Il2CppType Blur_t231_0_0_0;
static ParameterInfo IList_1_t8040_IList_1_IndexOf_m43721_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Blur_t231_0_0_0},
};
extern Il2CppType Int32_t386_0_0_0;
extern void* RuntimeInvoker_Int32_t386_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m43721_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.Blur>::IndexOf(T)
MethodInfo IList_1_IndexOf_m43721_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8040_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t386_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t386_Object_t/* invoker_method */
	, IList_1_t8040_IList_1_IndexOf_m43721_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m43721_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t386_0_0_0;
extern Il2CppType Blur_t231_0_0_0;
static ParameterInfo IList_1_t8040_IList_1_Insert_m43722_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &Blur_t231_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Int32_t386_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m43722_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.Blur>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m43722_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8040_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Int32_t386_Object_t/* invoker_method */
	, IList_1_t8040_IList_1_Insert_m43722_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m43722_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t386_0_0_0;
static ParameterInfo IList_1_t8040_IList_1_RemoveAt_m43723_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m43723_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.Blur>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m43723_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8040_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Int32_t386/* invoker_method */
	, IList_1_t8040_IList_1_RemoveAt_m43723_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m43723_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t386_0_0_0;
static ParameterInfo IList_1_t8040_IList_1_get_Item_m43719_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
};
extern Il2CppType Blur_t231_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m43719_GenericMethod;
// T System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.Blur>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m43719_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8040_il2cpp_TypeInfo/* declaring_type */
	, &Blur_t231_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t386/* invoker_method */
	, IList_1_t8040_IList_1_get_Item_m43719_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m43719_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t386_0_0_0;
extern Il2CppType Blur_t231_0_0_0;
static ParameterInfo IList_1_t8040_IList_1_set_Item_m43720_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &Blur_t231_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Int32_t386_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m43720_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.Blur>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m43720_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8040_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Int32_t386_Object_t/* invoker_method */
	, IList_1_t8040_IList_1_set_Item_m43720_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m43720_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8040_MethodInfos[] =
{
	&IList_1_IndexOf_m43721_MethodInfo,
	&IList_1_Insert_m43722_MethodInfo,
	&IList_1_RemoveAt_m43723_MethodInfo,
	&IList_1_get_Item_m43719_MethodInfo,
	&IList_1_set_Item_m43720_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8040_InterfacesTypeInfos[] = 
{
	&IEnumerable_t55_il2cpp_TypeInfo,
	&ICollection_1_t8039_il2cpp_TypeInfo,
	&IEnumerable_1_t8041_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8040_0_0_0;
extern Il2CppType IList_1_t8040_1_0_0;
struct IList_1_t8040;
extern Il2CppGenericClass IList_1_t8040_GenericClass;
extern CustomAttributesCache IList_1_t2638__CustomAttributeCache;
TypeInfo IList_1_t8040_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8040_MethodInfos/* methods */
	, IList_1_t8040_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8040_il2cpp_TypeInfo/* element_class */
	, IList_1_t8040_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2638__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8040_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8040_0_0_0/* byval_arg */
	, &IList_1_t8040_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8040_GenericClass/* generic_class */
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
extern TypeInfo CachedInvokableCall_1_t3508_il2cpp_TypeInfo;

extern TypeInfo InvokableCall_1_t3509_il2cpp_TypeInfo;
extern MethodInfo InvokableCall_1__ctor_m19310_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m19312_MethodInfo;


// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityStandardAssets.ImageEffects.Blur>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityStandardAssets.ImageEffects.Blur>::Invoke(System.Object[])
// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<UnityStandardAssets.ImageEffects.Blur>
extern Il2CppType ObjectU5BU5D_t470_0_0_33;
FieldInfo CachedInvokableCall_1_t3508____m_Arg1_1_FieldInfo = 
{
	"m_Arg1"/* name */
	, &ObjectU5BU5D_t470_0_0_33/* type */
	, &CachedInvokableCall_1_t3508_il2cpp_TypeInfo/* parent */
	, offsetof(CachedInvokableCall_1_t3508, ___m_Arg1_1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* CachedInvokableCall_1_t3508_FieldInfos[] =
{
	&CachedInvokableCall_1_t3508____m_Arg1_1_FieldInfo,
	NULL
};
extern Il2CppType Object_t326_0_0_0;
extern Il2CppType MethodInfo_t1253_0_0_0;
extern Il2CppType Blur_t231_0_0_0;
static ParameterInfo CachedInvokableCall_1_t3508_CachedInvokableCall_1__ctor_m19308_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t326_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1253_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &Blur_t231_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod CachedInvokableCall_1__ctor_m19308_GenericMethod;
// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityStandardAssets.ImageEffects.Blur>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
MethodInfo CachedInvokableCall_1__ctor_m19308_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CachedInvokableCall_1__ctor_m15540_gshared/* method */
	, &CachedInvokableCall_1_t3508_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t_Object_t_Object_t/* invoker_method */
	, CachedInvokableCall_1_t3508_CachedInvokableCall_1__ctor_m19308_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &CachedInvokableCall_1__ctor_m19308_GenericMethod/* genericMethod */

};
extern Il2CppType ObjectU5BU5D_t470_0_0_0;
static ParameterInfo CachedInvokableCall_1_t3508_CachedInvokableCall_1_Invoke_m19309_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t470_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod CachedInvokableCall_1_Invoke_m19309_GenericMethod;
// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityStandardAssets.ImageEffects.Blur>::Invoke(System.Object[])
MethodInfo CachedInvokableCall_1_Invoke_m19309_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&CachedInvokableCall_1_Invoke_m15542_gshared/* method */
	, &CachedInvokableCall_1_t3508_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t/* invoker_method */
	, CachedInvokableCall_1_t3508_CachedInvokableCall_1_Invoke_m19309_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &CachedInvokableCall_1_Invoke_m19309_GenericMethod/* genericMethod */

};
static MethodInfo* CachedInvokableCall_1_t3508_MethodInfos[] =
{
	&CachedInvokableCall_1__ctor_m19308_MethodInfo,
	&CachedInvokableCall_1_Invoke_m19309_MethodInfo,
	NULL
};
extern MethodInfo CachedInvokableCall_1_Invoke_m19309_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m19313_MethodInfo;
static MethodInfo* CachedInvokableCall_1_t3508_VTable[] =
{
	&Object_Equals_m1252_MethodInfo,
	&Object_Finalize_m1253_MethodInfo,
	&Object_GetHashCode_m1254_MethodInfo,
	&Object_ToString_m1255_MethodInfo,
	&CachedInvokableCall_1_Invoke_m19309_MethodInfo,
	&InvokableCall_1_Find_m19313_MethodInfo,
};
extern Il2CppType UnityAction_1_t3510_0_0_0;
extern TypeInfo UnityAction_1_t3510_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisBlur_t231_m33256_MethodInfo;
extern TypeInfo Blur_t231_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m19315_MethodInfo;
extern TypeInfo Blur_t231_il2cpp_TypeInfo;
static Il2CppRGCTXData CachedInvokableCall_1_t3508_RGCTXData[8] = 
{
	&UnityAction_1_t3510_0_0_0/* Type Usage */,
	&UnityAction_1_t3510_il2cpp_TypeInfo/* Class Usage */,
	&BaseInvokableCall_ThrowOnInvalidArg_TisBlur_t231_m33256_MethodInfo/* Method Usage */,
	&Blur_t231_il2cpp_TypeInfo/* Class Usage */,
	&UnityAction_1_Invoke_m19315_MethodInfo/* Method Usage */,
	&InvokableCall_1__ctor_m19310_MethodInfo/* Method Usage */,
	&Blur_t231_il2cpp_TypeInfo/* Class Usage */,
	&InvokableCall_1_Invoke_m19312_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType CachedInvokableCall_1_t3508_0_0_0;
extern Il2CppType CachedInvokableCall_1_t3508_1_0_0;
struct CachedInvokableCall_1_t3508;
extern Il2CppGenericClass CachedInvokableCall_1_t3508_GenericClass;
TypeInfo CachedInvokableCall_1_t3508_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "CachedInvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, CachedInvokableCall_1_t3508_MethodInfos/* methods */
	, NULL/* properties */
	, CachedInvokableCall_1_t3508_FieldInfos/* fields */
	, NULL/* events */
	, &InvokableCall_1_t3509_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CachedInvokableCall_1_t3508_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, CachedInvokableCall_1_t3508_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CachedInvokableCall_1_t3508_il2cpp_TypeInfo/* cast_class */
	, &CachedInvokableCall_1_t3508_0_0_0/* byval_arg */
	, &CachedInvokableCall_1_t3508_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &CachedInvokableCall_1_t3508_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, CachedInvokableCall_1_t3508_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CachedInvokableCall_1_t3508)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
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
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo UnityAction_1_t3510_il2cpp_TypeInfo;
struct BaseInvokableCall_t1252;
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<UnityStandardAssets.ImageEffects.Blur>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<UnityStandardAssets.ImageEffects.Blur>(System.Object)
#define BaseInvokableCall_ThrowOnInvalidArg_TisBlur_t231_m33256(__this/* static, unused */, p0, method) (void)BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m31937_gshared((Object_t *)__this/* static, unused */, (Object_t *)p0, method)


// System.Void UnityEngine.Events.InvokableCall`1<UnityStandardAssets.ImageEffects.Blur>::.ctor(System.Object,System.Reflection.MethodInfo)
// System.Void UnityEngine.Events.InvokableCall`1<UnityStandardAssets.ImageEffects.Blur>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
// System.Void UnityEngine.Events.InvokableCall`1<UnityStandardAssets.ImageEffects.Blur>::Invoke(System.Object[])
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityStandardAssets.ImageEffects.Blur>::Find(System.Object,System.Reflection.MethodInfo)
// Metadata Definition UnityEngine.Events.InvokableCall`1<UnityStandardAssets.ImageEffects.Blur>
extern Il2CppType UnityAction_1_t3510_0_0_1;
FieldInfo InvokableCall_1_t3509____Delegate_0_FieldInfo = 
{
	"Delegate"/* name */
	, &UnityAction_1_t3510_0_0_1/* type */
	, &InvokableCall_1_t3509_il2cpp_TypeInfo/* parent */
	, offsetof(InvokableCall_1_t3509, ___Delegate_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InvokableCall_1_t3509_FieldInfos[] =
{
	&InvokableCall_1_t3509____Delegate_0_FieldInfo,
	NULL
};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t1253_0_0_0;
static ParameterInfo InvokableCall_1_t3509_InvokableCall_1__ctor_m19310_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1253_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InvokableCall_1__ctor_m19310_GenericMethod;
// System.Void UnityEngine.Events.InvokableCall`1<UnityStandardAssets.ImageEffects.Blur>::.ctor(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1__ctor_m19310_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m15543_gshared/* method */
	, &InvokableCall_1_t3509_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t3509_InvokableCall_1__ctor_m19310_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InvokableCall_1__ctor_m19310_GenericMethod/* genericMethod */

};
extern Il2CppType UnityAction_1_t3510_0_0_0;
static ParameterInfo InvokableCall_1_t3509_InvokableCall_1__ctor_m19311_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &UnityAction_1_t3510_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InvokableCall_1__ctor_m19311_GenericMethod;
// System.Void UnityEngine.Events.InvokableCall`1<UnityStandardAssets.ImageEffects.Blur>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
MethodInfo InvokableCall_1__ctor_m19311_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m15544_gshared/* method */
	, &InvokableCall_1_t3509_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t/* invoker_method */
	, InvokableCall_1_t3509_InvokableCall_1__ctor_m19311_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InvokableCall_1__ctor_m19311_GenericMethod/* genericMethod */

};
extern Il2CppType ObjectU5BU5D_t470_0_0_0;
static ParameterInfo InvokableCall_1_t3509_InvokableCall_1_Invoke_m19312_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t470_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InvokableCall_1_Invoke_m19312_GenericMethod;
// System.Void UnityEngine.Events.InvokableCall`1<UnityStandardAssets.ImageEffects.Blur>::Invoke(System.Object[])
MethodInfo InvokableCall_1_Invoke_m19312_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&InvokableCall_1_Invoke_m15545_gshared/* method */
	, &InvokableCall_1_t3509_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t/* invoker_method */
	, InvokableCall_1_t3509_InvokableCall_1_Invoke_m19312_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InvokableCall_1_Invoke_m19312_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t1253_0_0_0;
static ParameterInfo InvokableCall_1_t3509_InvokableCall_1_Find_m19313_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1253_0_0_0},
};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InvokableCall_1_Find_m19313_GenericMethod;
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityStandardAssets.ImageEffects.Blur>::Find(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1_Find_m19313_MethodInfo = 
{
	"Find"/* name */
	, (methodPointerType)&InvokableCall_1_Find_m15546_gshared/* method */
	, &InvokableCall_1_t3509_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t379_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t379_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t3509_InvokableCall_1_Find_m19313_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InvokableCall_1_Find_m19313_GenericMethod/* genericMethod */

};
static MethodInfo* InvokableCall_1_t3509_MethodInfos[] =
{
	&InvokableCall_1__ctor_m19310_MethodInfo,
	&InvokableCall_1__ctor_m19311_MethodInfo,
	&InvokableCall_1_Invoke_m19312_MethodInfo,
	&InvokableCall_1_Find_m19313_MethodInfo,
	NULL
};
static MethodInfo* InvokableCall_1_t3509_VTable[] =
{
	&Object_Equals_m1252_MethodInfo,
	&Object_Finalize_m1253_MethodInfo,
	&Object_GetHashCode_m1254_MethodInfo,
	&Object_ToString_m1255_MethodInfo,
	&InvokableCall_1_Invoke_m19312_MethodInfo,
	&InvokableCall_1_Find_m19313_MethodInfo,
};
extern TypeInfo UnityAction_1_t3510_il2cpp_TypeInfo;
extern TypeInfo Blur_t231_il2cpp_TypeInfo;
static Il2CppRGCTXData InvokableCall_1_t3509_RGCTXData[5] = 
{
	&UnityAction_1_t3510_0_0_0/* Type Usage */,
	&UnityAction_1_t3510_il2cpp_TypeInfo/* Class Usage */,
	&BaseInvokableCall_ThrowOnInvalidArg_TisBlur_t231_m33256_MethodInfo/* Method Usage */,
	&Blur_t231_il2cpp_TypeInfo/* Class Usage */,
	&UnityAction_1_Invoke_m19315_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType InvokableCall_1_t3509_0_0_0;
extern Il2CppType InvokableCall_1_t3509_1_0_0;
struct InvokableCall_1_t3509;
extern Il2CppGenericClass InvokableCall_1_t3509_GenericClass;
TypeInfo InvokableCall_1_t3509_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "InvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, InvokableCall_1_t3509_MethodInfos/* methods */
	, NULL/* properties */
	, InvokableCall_1_t3509_FieldInfos/* fields */
	, NULL/* events */
	, &BaseInvokableCall_t1252_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &InvokableCall_1_t3509_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, InvokableCall_1_t3509_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InvokableCall_1_t3509_il2cpp_TypeInfo/* cast_class */
	, &InvokableCall_1_t3509_0_0_0/* byval_arg */
	, &InvokableCall_1_t3509_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &InvokableCall_1_t3509_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InvokableCall_1_t3509_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InvokableCall_1_t3509)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
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
	, 4/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.Events.UnityAction`1<UnityStandardAssets.ImageEffects.Blur>::.ctor(System.Object,System.IntPtr)
// System.Void UnityEngine.Events.UnityAction`1<UnityStandardAssets.ImageEffects.Blur>::Invoke(T0)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityStandardAssets.ImageEffects.Blur>::BeginInvoke(T0,System.AsyncCallback,System.Object)
// System.Void UnityEngine.Events.UnityAction`1<UnityStandardAssets.ImageEffects.Blur>::EndInvoke(System.IAsyncResult)
// Metadata Definition UnityEngine.Events.UnityAction`1<UnityStandardAssets.ImageEffects.Blur>
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t35_0_0_0;
static ParameterInfo UnityAction_1_t3510_UnityAction_1__ctor_m19314_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &IntPtr_t35_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t_IntPtr_t35 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod UnityAction_1__ctor_m19314_GenericMethod;
// System.Void UnityEngine.Events.UnityAction`1<UnityStandardAssets.ImageEffects.Blur>::.ctor(System.Object,System.IntPtr)
MethodInfo UnityAction_1__ctor_m19314_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UnityAction_1__ctor_m15547_gshared/* method */
	, &UnityAction_1_t3510_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t_IntPtr_t35/* invoker_method */
	, UnityAction_1_t3510_UnityAction_1__ctor_m19314_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &UnityAction_1__ctor_m19314_GenericMethod/* genericMethod */

};
extern Il2CppType Blur_t231_0_0_0;
static ParameterInfo UnityAction_1_t3510_UnityAction_1_Invoke_m19315_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &Blur_t231_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod UnityAction_1_Invoke_m19315_GenericMethod;
// System.Void UnityEngine.Events.UnityAction`1<UnityStandardAssets.ImageEffects.Blur>::Invoke(T0)
MethodInfo UnityAction_1_Invoke_m19315_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&UnityAction_1_Invoke_m15548_gshared/* method */
	, &UnityAction_1_t3510_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t/* invoker_method */
	, UnityAction_1_t3510_UnityAction_1_Invoke_m19315_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 10/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &UnityAction_1_Invoke_m19315_GenericMethod/* genericMethod */

};
extern Il2CppType Blur_t231_0_0_0;
extern Il2CppType AsyncCallback_t32_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo UnityAction_1_t3510_UnityAction_1_BeginInvoke_m19316_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &Blur_t231_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &AsyncCallback_t32_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType IAsyncResult_t31_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod UnityAction_1_BeginInvoke_m19316_GenericMethod;
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityStandardAssets.ImageEffects.Blur>::BeginInvoke(T0,System.AsyncCallback,System.Object)
MethodInfo UnityAction_1_BeginInvoke_m19316_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&UnityAction_1_BeginInvoke_m15549_gshared/* method */
	, &UnityAction_1_t3510_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t31_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, UnityAction_1_t3510_UnityAction_1_BeginInvoke_m19316_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &UnityAction_1_BeginInvoke_m19316_GenericMethod/* genericMethod */

};
extern Il2CppType IAsyncResult_t31_0_0_0;
static ParameterInfo UnityAction_1_t3510_UnityAction_1_EndInvoke_m19317_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &IAsyncResult_t31_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod UnityAction_1_EndInvoke_m19317_GenericMethod;
// System.Void UnityEngine.Events.UnityAction`1<UnityStandardAssets.ImageEffects.Blur>::EndInvoke(System.IAsyncResult)
MethodInfo UnityAction_1_EndInvoke_m19317_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&UnityAction_1_EndInvoke_m15550_gshared/* method */
	, &UnityAction_1_t3510_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t/* invoker_method */
	, UnityAction_1_t3510_UnityAction_1_EndInvoke_m19317_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &UnityAction_1_EndInvoke_m19317_GenericMethod/* genericMethod */

};
static MethodInfo* UnityAction_1_t3510_MethodInfos[] =
{
	&UnityAction_1__ctor_m19314_MethodInfo,
	&UnityAction_1_Invoke_m19315_MethodInfo,
	&UnityAction_1_BeginInvoke_m19316_MethodInfo,
	&UnityAction_1_EndInvoke_m19317_MethodInfo,
	NULL
};
extern MethodInfo UnityAction_1_BeginInvoke_m19316_MethodInfo;
extern MethodInfo UnityAction_1_EndInvoke_m19317_MethodInfo;
static MethodInfo* UnityAction_1_t3510_VTable[] =
{
	&MulticastDelegate_Equals_m1395_MethodInfo,
	&Object_Finalize_m1253_MethodInfo,
	&MulticastDelegate_GetHashCode_m1396_MethodInfo,
	&Object_ToString_m1255_MethodInfo,
	&MulticastDelegate_GetObjectData_m1397_MethodInfo,
	&Delegate_Clone_m1398_MethodInfo,
	&MulticastDelegate_GetObjectData_m1397_MethodInfo,
	&MulticastDelegate_GetInvocationList_m1399_MethodInfo,
	&MulticastDelegate_CombineImpl_m1400_MethodInfo,
	&MulticastDelegate_RemoveImpl_m1401_MethodInfo,
	&UnityAction_1_Invoke_m19315_MethodInfo,
	&UnityAction_1_BeginInvoke_m19316_MethodInfo,
	&UnityAction_1_EndInvoke_m19317_MethodInfo,
};
static Il2CppInterfaceOffsetPair UnityAction_1_t3510_InterfacesOffsets[] = 
{
	{ &ICloneable_t434_il2cpp_TypeInfo, 4},
	{ &ISerializable_t435_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType UnityAction_1_t3510_1_0_0;
struct UnityAction_1_t3510;
extern Il2CppGenericClass UnityAction_1_t3510_GenericClass;
TypeInfo UnityAction_1_t3510_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnityAction`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, UnityAction_1_t3510_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MulticastDelegate_t34_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &UnityAction_1_t3510_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, UnityAction_1_t3510_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &UnityAction_1_t3510_il2cpp_TypeInfo/* cast_class */
	, &UnityAction_1_t3510_0_0_0/* byval_arg */
	, &UnityAction_1_t3510_1_0_0/* this_arg */
	, UnityAction_1_t3510_InterfacesOffsets/* interface_offsets */
	, &UnityAction_1_t3510_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UnityAction_1_t3510)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 257/* flags */
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
	, 4/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 13/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t6342_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<UnityEngine.Vector2>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.Vector2>
extern MethodInfo IEnumerator_1_get_Current_m43724_MethodInfo;
static PropertyInfo IEnumerator_1_t6342____Current_PropertyInfo = 
{
	&IEnumerator_1_t6342_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m43724_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6342_PropertyInfos[] =
{
	&IEnumerator_1_t6342____Current_PropertyInfo,
	NULL
};
extern Il2CppType Vector2_t177_0_0_0;
extern void* RuntimeInvoker_Vector2_t177 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m43724_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<UnityEngine.Vector2>::get_Current()
MethodInfo IEnumerator_1_get_Current_m43724_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6342_il2cpp_TypeInfo/* declaring_type */
	, &Vector2_t177_0_0_0/* return_type */
	, RuntimeInvoker_Vector2_t177/* invoker_method */
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
	, &IEnumerator_1_get_Current_m43724_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6342_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m43724_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6342_InterfacesTypeInfos[] = 
{
	&IEnumerator_t26_il2cpp_TypeInfo,
	&IDisposable_t444_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6342_0_0_0;
extern Il2CppType IEnumerator_1_t6342_1_0_0;
struct IEnumerator_1_t6342;
extern Il2CppGenericClass IEnumerator_1_t6342_GenericClass;
TypeInfo IEnumerator_1_t6342_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6342_MethodInfos/* methods */
	, IEnumerator_1_t6342_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6342_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6342_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6342_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6342_0_0_0/* byval_arg */
	, &IEnumerator_1_t6342_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6342_GenericClass/* generic_class */
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
extern TypeInfo InternalEnumerator_1_t3511_il2cpp_TypeInfo;

extern TypeInfo Vector2_t177_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m19322_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisVector2_t177_m33258_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.Vector2>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.Vector2>(System.Int32)
 Vector2_t177  Array_InternalArray__get_Item_TisVector2_t177_m33258 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.Vector2>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m19318_MethodInfo;
 void InternalEnumerator_1__ctor_m19318 (InternalEnumerator_1_t3511 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.Vector2>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19319_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19319 (InternalEnumerator_1_t3511 * __this, MethodInfo* method){
	{
		Vector2_t177  L_0 = InternalEnumerator_1_get_Current_m19322(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m19322_MethodInfo);
		Vector2_t177  L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&Vector2_t177_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Vector2>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m19320_MethodInfo;
 void InternalEnumerator_1_Dispose_m19320 (InternalEnumerator_1_t3511 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.Vector2>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m19321_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m19321 (InternalEnumerator_1_t3511 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<UnityEngine.Vector2>::get_Current()
 Vector2_t177  InternalEnumerator_1_get_Current_m19322 (InternalEnumerator_1_t3511 * __this, MethodInfo* method){
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
		Vector2_t177  L_8 = Array_InternalArray__get_Item_TisVector2_t177_m33258(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisVector2_t177_m33258_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.Vector2>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3511____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3511_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3511, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t386_0_0_1;
FieldInfo InternalEnumerator_1_t3511____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t386_0_0_1/* type */
	, &InternalEnumerator_1_t3511_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3511, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3511_FieldInfos[] =
{
	&InternalEnumerator_1_t3511____array_0_FieldInfo,
	&InternalEnumerator_1_t3511____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t3511____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3511_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19319_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3511____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3511_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m19322_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3511_PropertyInfos[] =
{
	&InternalEnumerator_1_t3511____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3511____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3511_InternalEnumerator_1__ctor_m19318_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m19318_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Vector2>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m19318_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m19318/* method */
	, &InternalEnumerator_1_t3511_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t/* invoker_method */
	, InternalEnumerator_1_t3511_InternalEnumerator_1__ctor_m19318_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m19318_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19319_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<UnityEngine.Vector2>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19319_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19319/* method */
	, &InternalEnumerator_1_t3511_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19319_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m19320_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Vector2>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m19320_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m19320/* method */
	, &InternalEnumerator_1_t3511_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m19320_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m19321_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.Vector2>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m19321_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m19321/* method */
	, &InternalEnumerator_1_t3511_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m19321_GenericMethod/* genericMethod */

};
extern Il2CppType Vector2_t177_0_0_0;
extern void* RuntimeInvoker_Vector2_t177 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19322_GenericMethod;
// T System.Array/InternalEnumerator`1<UnityEngine.Vector2>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m19322_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m19322/* method */
	, &InternalEnumerator_1_t3511_il2cpp_TypeInfo/* declaring_type */
	, &Vector2_t177_0_0_0/* return_type */
	, RuntimeInvoker_Vector2_t177/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m19322_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3511_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m19318_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19319_MethodInfo,
	&InternalEnumerator_1_Dispose_m19320_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19321_MethodInfo,
	&InternalEnumerator_1_get_Current_m19322_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t3511_VTable[] =
{
	&ValueType_Equals_m2156_MethodInfo,
	&Object_Finalize_m1253_MethodInfo,
	&ValueType_GetHashCode_m2157_MethodInfo,
	&ValueType_ToString_m2158_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19319_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19321_MethodInfo,
	&InternalEnumerator_1_Dispose_m19320_MethodInfo,
	&InternalEnumerator_1_get_Current_m19322_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3511_InterfacesTypeInfos[] = 
{
	&IEnumerator_t26_il2cpp_TypeInfo,
	&IDisposable_t444_il2cpp_TypeInfo,
	&IEnumerator_1_t6342_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3511_InterfacesOffsets[] = 
{
	{ &IEnumerator_t26_il2cpp_TypeInfo, 4},
	{ &IDisposable_t444_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6342_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3511_0_0_0;
extern Il2CppType InternalEnumerator_1_t3511_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3511_GenericClass;
TypeInfo InternalEnumerator_1_t3511_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3511_MethodInfos/* methods */
	, InternalEnumerator_1_t3511_PropertyInfos/* properties */
	, InternalEnumerator_1_t3511_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t550_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3511_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3511_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3511_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3511_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3511_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3511_1_0_0/* this_arg */
	, InternalEnumerator_1_t3511_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3511_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3511)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8042_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Vector2>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Vector2>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Vector2>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Vector2>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Vector2>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Vector2>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Vector2>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.Vector2>
extern MethodInfo ICollection_1_get_Count_m43725_MethodInfo;
static PropertyInfo ICollection_1_t8042____Count_PropertyInfo = 
{
	&ICollection_1_t8042_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m43725_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m43726_MethodInfo;
static PropertyInfo ICollection_1_t8042____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8042_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m43726_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8042_PropertyInfos[] =
{
	&ICollection_1_t8042____Count_PropertyInfo,
	&ICollection_1_t8042____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t386_0_0_0;
extern void* RuntimeInvoker_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m43725_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Vector2>::get_Count()
MethodInfo ICollection_1_get_Count_m43725_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8042_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m43725_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m43726_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Vector2>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m43726_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8042_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m43726_GenericMethod/* genericMethod */

};
extern Il2CppType Vector2_t177_0_0_0;
extern Il2CppType Vector2_t177_0_0_0;
static ParameterInfo ICollection_1_t8042_ICollection_1_Add_m43727_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Vector2_t177_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Vector2_t177 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m43727_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Vector2>::Add(T)
MethodInfo ICollection_1_Add_m43727_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8042_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Vector2_t177/* invoker_method */
	, ICollection_1_t8042_ICollection_1_Add_m43727_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m43727_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m43728_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Vector2>::Clear()
MethodInfo ICollection_1_Clear_m43728_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8042_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m43728_GenericMethod/* genericMethod */

};
extern Il2CppType Vector2_t177_0_0_0;
static ParameterInfo ICollection_1_t8042_ICollection_1_Contains_m43729_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Vector2_t177_0_0_0},
};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379_Vector2_t177 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m43729_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Vector2>::Contains(T)
MethodInfo ICollection_1_Contains_m43729_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8042_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t379_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t379_Vector2_t177/* invoker_method */
	, ICollection_1_t8042_ICollection_1_Contains_m43729_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m43729_GenericMethod/* genericMethod */

};
extern Il2CppType Vector2U5BU5D_t524_0_0_0;
extern Il2CppType Vector2U5BU5D_t524_0_0_0;
extern Il2CppType Int32_t386_0_0_0;
static ParameterInfo ICollection_1_t8042_ICollection_1_CopyTo_m43730_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Vector2U5BU5D_t524_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m43730_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Vector2>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m43730_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8042_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t_Int32_t386/* invoker_method */
	, ICollection_1_t8042_ICollection_1_CopyTo_m43730_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m43730_GenericMethod/* genericMethod */

};
extern Il2CppType Vector2_t177_0_0_0;
static ParameterInfo ICollection_1_t8042_ICollection_1_Remove_m43731_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Vector2_t177_0_0_0},
};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379_Vector2_t177 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m43731_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Vector2>::Remove(T)
MethodInfo ICollection_1_Remove_m43731_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8042_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t379_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t379_Vector2_t177/* invoker_method */
	, ICollection_1_t8042_ICollection_1_Remove_m43731_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m43731_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8042_MethodInfos[] =
{
	&ICollection_1_get_Count_m43725_MethodInfo,
	&ICollection_1_get_IsReadOnly_m43726_MethodInfo,
	&ICollection_1_Add_m43727_MethodInfo,
	&ICollection_1_Clear_m43728_MethodInfo,
	&ICollection_1_Contains_m43729_MethodInfo,
	&ICollection_1_CopyTo_m43730_MethodInfo,
	&ICollection_1_Remove_m43731_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8044_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8042_InterfacesTypeInfos[] = 
{
	&IEnumerable_t55_il2cpp_TypeInfo,
	&IEnumerable_1_t8044_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8042_0_0_0;
extern Il2CppType ICollection_1_t8042_1_0_0;
struct ICollection_1_t8042;
extern Il2CppGenericClass ICollection_1_t8042_GenericClass;
TypeInfo ICollection_1_t8042_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8042_MethodInfos/* methods */
	, ICollection_1_t8042_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8042_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8042_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8042_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8042_0_0_0/* byval_arg */
	, &ICollection_1_t8042_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8042_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Vector2>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.Vector2>
extern Il2CppType IEnumerator_1_t6342_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m43732_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Vector2>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m43732_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8044_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6342_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m43732_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8044_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m43732_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8044_InterfacesTypeInfos[] = 
{
	&IEnumerable_t55_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8044_0_0_0;
extern Il2CppType IEnumerable_1_t8044_1_0_0;
struct IEnumerable_1_t8044;
extern Il2CppGenericClass IEnumerable_1_t8044_GenericClass;
TypeInfo IEnumerable_1_t8044_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8044_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8044_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8044_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8044_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8044_0_0_0/* byval_arg */
	, &IEnumerable_1_t8044_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8044_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t8043_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.Vector2>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Vector2>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Vector2>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.Vector2>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Vector2>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.Vector2>
extern MethodInfo IList_1_get_Item_m43733_MethodInfo;
extern MethodInfo IList_1_set_Item_m43734_MethodInfo;
static PropertyInfo IList_1_t8043____Item_PropertyInfo = 
{
	&IList_1_t8043_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m43733_MethodInfo/* get */
	, &IList_1_set_Item_m43734_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8043_PropertyInfos[] =
{
	&IList_1_t8043____Item_PropertyInfo,
	NULL
};
extern Il2CppType Vector2_t177_0_0_0;
static ParameterInfo IList_1_t8043_IList_1_IndexOf_m43735_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Vector2_t177_0_0_0},
};
extern Il2CppType Int32_t386_0_0_0;
extern void* RuntimeInvoker_Int32_t386_Vector2_t177 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m43735_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<UnityEngine.Vector2>::IndexOf(T)
MethodInfo IList_1_IndexOf_m43735_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8043_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t386_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t386_Vector2_t177/* invoker_method */
	, IList_1_t8043_IList_1_IndexOf_m43735_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m43735_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t386_0_0_0;
extern Il2CppType Vector2_t177_0_0_0;
static ParameterInfo IList_1_t8043_IList_1_Insert_m43736_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &Vector2_t177_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Int32_t386_Vector2_t177 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m43736_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityEngine.Vector2>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m43736_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8043_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Int32_t386_Vector2_t177/* invoker_method */
	, IList_1_t8043_IList_1_Insert_m43736_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m43736_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t386_0_0_0;
static ParameterInfo IList_1_t8043_IList_1_RemoveAt_m43737_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m43737_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityEngine.Vector2>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m43737_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8043_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Int32_t386/* invoker_method */
	, IList_1_t8043_IList_1_RemoveAt_m43737_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m43737_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t386_0_0_0;
static ParameterInfo IList_1_t8043_IList_1_get_Item_m43733_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
};
extern Il2CppType Vector2_t177_0_0_0;
extern void* RuntimeInvoker_Vector2_t177_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m43733_GenericMethod;
// T System.Collections.Generic.IList`1<UnityEngine.Vector2>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m43733_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8043_il2cpp_TypeInfo/* declaring_type */
	, &Vector2_t177_0_0_0/* return_type */
	, RuntimeInvoker_Vector2_t177_Int32_t386/* invoker_method */
	, IList_1_t8043_IList_1_get_Item_m43733_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m43733_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t386_0_0_0;
extern Il2CppType Vector2_t177_0_0_0;
static ParameterInfo IList_1_t8043_IList_1_set_Item_m43734_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &Vector2_t177_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Int32_t386_Vector2_t177 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m43734_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityEngine.Vector2>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m43734_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8043_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Int32_t386_Vector2_t177/* invoker_method */
	, IList_1_t8043_IList_1_set_Item_m43734_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m43734_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8043_MethodInfos[] =
{
	&IList_1_IndexOf_m43735_MethodInfo,
	&IList_1_Insert_m43736_MethodInfo,
	&IList_1_RemoveAt_m43737_MethodInfo,
	&IList_1_get_Item_m43733_MethodInfo,
	&IList_1_set_Item_m43734_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8043_InterfacesTypeInfos[] = 
{
	&IEnumerable_t55_il2cpp_TypeInfo,
	&ICollection_1_t8042_il2cpp_TypeInfo,
	&IEnumerable_1_t8044_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8043_0_0_0;
extern Il2CppType IList_1_t8043_1_0_0;
struct IList_1_t8043;
extern Il2CppGenericClass IList_1_t8043_GenericClass;
extern CustomAttributesCache IList_1_t2638__CustomAttributeCache;
TypeInfo IList_1_t8043_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8043_MethodInfos/* methods */
	, IList_1_t8043_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8043_il2cpp_TypeInfo/* element_class */
	, IList_1_t8043_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2638__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8043_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8043_0_0_0/* byval_arg */
	, &IList_1_t8043_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8043_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t6344_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<UnityStandardAssets.ImageEffects.BlurOptimized>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityStandardAssets.ImageEffects.BlurOptimized>
extern MethodInfo IEnumerator_1_get_Current_m43738_MethodInfo;
static PropertyInfo IEnumerator_1_t6344____Current_PropertyInfo = 
{
	&IEnumerator_1_t6344_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m43738_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6344_PropertyInfos[] =
{
	&IEnumerator_1_t6344____Current_PropertyInfo,
	NULL
};
extern Il2CppType BlurOptimized_t233_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m43738_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<UnityStandardAssets.ImageEffects.BlurOptimized>::get_Current()
MethodInfo IEnumerator_1_get_Current_m43738_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6344_il2cpp_TypeInfo/* declaring_type */
	, &BlurOptimized_t233_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m43738_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6344_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m43738_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6344_InterfacesTypeInfos[] = 
{
	&IEnumerator_t26_il2cpp_TypeInfo,
	&IDisposable_t444_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6344_0_0_0;
extern Il2CppType IEnumerator_1_t6344_1_0_0;
struct IEnumerator_1_t6344;
extern Il2CppGenericClass IEnumerator_1_t6344_GenericClass;
TypeInfo IEnumerator_1_t6344_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6344_MethodInfos/* methods */
	, IEnumerator_1_t6344_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6344_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6344_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6344_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6344_0_0_0/* byval_arg */
	, &IEnumerator_1_t6344_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6344_GenericClass/* generic_class */
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
extern TypeInfo InternalEnumerator_1_t3512_il2cpp_TypeInfo;

extern TypeInfo BlurOptimized_t233_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m19327_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisBlurOptimized_t233_m33269_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityStandardAssets.ImageEffects.BlurOptimized>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityStandardAssets.ImageEffects.BlurOptimized>(System.Int32)
#define Array_InternalArray__get_Item_TisBlurOptimized_t233_m33269(__this, p0, method) (BlurOptimized_t233 *)Array_InternalArray__get_Item_TisObject_t_m31403_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.BlurOptimized>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.BlurOptimized>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.BlurOptimized>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.BlurOptimized>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.BlurOptimized>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.BlurOptimized>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3512____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3512_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3512, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t386_0_0_1;
FieldInfo InternalEnumerator_1_t3512____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t386_0_0_1/* type */
	, &InternalEnumerator_1_t3512_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3512, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3512_FieldInfos[] =
{
	&InternalEnumerator_1_t3512____array_0_FieldInfo,
	&InternalEnumerator_1_t3512____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19324_MethodInfo;
static PropertyInfo InternalEnumerator_1_t3512____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3512_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19324_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3512____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3512_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m19327_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3512_PropertyInfos[] =
{
	&InternalEnumerator_1_t3512____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3512____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3512_InternalEnumerator_1__ctor_m19323_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m19323_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.BlurOptimized>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m19323_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m13935_gshared/* method */
	, &InternalEnumerator_1_t3512_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t/* invoker_method */
	, InternalEnumerator_1_t3512_InternalEnumerator_1__ctor_m19323_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m19323_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19324_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.BlurOptimized>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19324_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13937_gshared/* method */
	, &InternalEnumerator_1_t3512_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19324_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m19325_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.BlurOptimized>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m19325_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m13939_gshared/* method */
	, &InternalEnumerator_1_t3512_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m19325_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m19326_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.BlurOptimized>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m19326_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m13941_gshared/* method */
	, &InternalEnumerator_1_t3512_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m19326_GenericMethod/* genericMethod */

};
extern Il2CppType BlurOptimized_t233_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19327_GenericMethod;
// T System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.BlurOptimized>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m19327_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m13943_gshared/* method */
	, &InternalEnumerator_1_t3512_il2cpp_TypeInfo/* declaring_type */
	, &BlurOptimized_t233_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m19327_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3512_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m19323_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19324_MethodInfo,
	&InternalEnumerator_1_Dispose_m19325_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19326_MethodInfo,
	&InternalEnumerator_1_get_Current_m19327_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m19326_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m19325_MethodInfo;
static MethodInfo* InternalEnumerator_1_t3512_VTable[] =
{
	&ValueType_Equals_m2156_MethodInfo,
	&Object_Finalize_m1253_MethodInfo,
	&ValueType_GetHashCode_m2157_MethodInfo,
	&ValueType_ToString_m2158_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19324_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19326_MethodInfo,
	&InternalEnumerator_1_Dispose_m19325_MethodInfo,
	&InternalEnumerator_1_get_Current_m19327_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3512_InterfacesTypeInfos[] = 
{
	&IEnumerator_t26_il2cpp_TypeInfo,
	&IDisposable_t444_il2cpp_TypeInfo,
	&IEnumerator_1_t6344_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3512_InterfacesOffsets[] = 
{
	{ &IEnumerator_t26_il2cpp_TypeInfo, 4},
	{ &IDisposable_t444_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6344_il2cpp_TypeInfo, 7},
};
extern TypeInfo BlurOptimized_t233_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t3512_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m19327_MethodInfo/* Method Usage */,
	&BlurOptimized_t233_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisBlurOptimized_t233_m33269_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3512_0_0_0;
extern Il2CppType InternalEnumerator_1_t3512_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3512_GenericClass;
TypeInfo InternalEnumerator_1_t3512_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3512_MethodInfos/* methods */
	, InternalEnumerator_1_t3512_PropertyInfos/* properties */
	, InternalEnumerator_1_t3512_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t550_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3512_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3512_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3512_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3512_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3512_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3512_1_0_0/* this_arg */
	, InternalEnumerator_1_t3512_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3512_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t3512_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3512)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8045_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.BlurOptimized>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.BlurOptimized>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.BlurOptimized>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.BlurOptimized>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.BlurOptimized>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.BlurOptimized>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.BlurOptimized>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.BlurOptimized>
extern MethodInfo ICollection_1_get_Count_m43739_MethodInfo;
static PropertyInfo ICollection_1_t8045____Count_PropertyInfo = 
{
	&ICollection_1_t8045_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m43739_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m43740_MethodInfo;
static PropertyInfo ICollection_1_t8045____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8045_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m43740_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8045_PropertyInfos[] =
{
	&ICollection_1_t8045____Count_PropertyInfo,
	&ICollection_1_t8045____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t386_0_0_0;
extern void* RuntimeInvoker_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m43739_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.BlurOptimized>::get_Count()
MethodInfo ICollection_1_get_Count_m43739_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8045_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m43739_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m43740_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.BlurOptimized>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m43740_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8045_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m43740_GenericMethod/* genericMethod */

};
extern Il2CppType BlurOptimized_t233_0_0_0;
extern Il2CppType BlurOptimized_t233_0_0_0;
static ParameterInfo ICollection_1_t8045_ICollection_1_Add_m43741_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &BlurOptimized_t233_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m43741_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.BlurOptimized>::Add(T)
MethodInfo ICollection_1_Add_m43741_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8045_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t/* invoker_method */
	, ICollection_1_t8045_ICollection_1_Add_m43741_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m43741_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m43742_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.BlurOptimized>::Clear()
MethodInfo ICollection_1_Clear_m43742_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8045_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m43742_GenericMethod/* genericMethod */

};
extern Il2CppType BlurOptimized_t233_0_0_0;
static ParameterInfo ICollection_1_t8045_ICollection_1_Contains_m43743_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &BlurOptimized_t233_0_0_0},
};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m43743_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.BlurOptimized>::Contains(T)
MethodInfo ICollection_1_Contains_m43743_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8045_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t379_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t379_Object_t/* invoker_method */
	, ICollection_1_t8045_ICollection_1_Contains_m43743_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m43743_GenericMethod/* genericMethod */

};
extern Il2CppType BlurOptimizedU5BU5D_t5720_0_0_0;
extern Il2CppType BlurOptimizedU5BU5D_t5720_0_0_0;
extern Il2CppType Int32_t386_0_0_0;
static ParameterInfo ICollection_1_t8045_ICollection_1_CopyTo_m43744_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &BlurOptimizedU5BU5D_t5720_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m43744_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.BlurOptimized>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m43744_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8045_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t_Int32_t386/* invoker_method */
	, ICollection_1_t8045_ICollection_1_CopyTo_m43744_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m43744_GenericMethod/* genericMethod */

};
extern Il2CppType BlurOptimized_t233_0_0_0;
static ParameterInfo ICollection_1_t8045_ICollection_1_Remove_m43745_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &BlurOptimized_t233_0_0_0},
};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m43745_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.BlurOptimized>::Remove(T)
MethodInfo ICollection_1_Remove_m43745_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8045_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t379_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t379_Object_t/* invoker_method */
	, ICollection_1_t8045_ICollection_1_Remove_m43745_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m43745_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8045_MethodInfos[] =
{
	&ICollection_1_get_Count_m43739_MethodInfo,
	&ICollection_1_get_IsReadOnly_m43740_MethodInfo,
	&ICollection_1_Add_m43741_MethodInfo,
	&ICollection_1_Clear_m43742_MethodInfo,
	&ICollection_1_Contains_m43743_MethodInfo,
	&ICollection_1_CopyTo_m43744_MethodInfo,
	&ICollection_1_Remove_m43745_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8047_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8045_InterfacesTypeInfos[] = 
{
	&IEnumerable_t55_il2cpp_TypeInfo,
	&IEnumerable_1_t8047_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8045_0_0_0;
extern Il2CppType ICollection_1_t8045_1_0_0;
struct ICollection_1_t8045;
extern Il2CppGenericClass ICollection_1_t8045_GenericClass;
TypeInfo ICollection_1_t8045_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8045_MethodInfos/* methods */
	, ICollection_1_t8045_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8045_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8045_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8045_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8045_0_0_0/* byval_arg */
	, &ICollection_1_t8045_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8045_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityStandardAssets.ImageEffects.BlurOptimized>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityStandardAssets.ImageEffects.BlurOptimized>
extern Il2CppType IEnumerator_1_t6344_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m43746_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityStandardAssets.ImageEffects.BlurOptimized>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m43746_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8047_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6344_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m43746_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8047_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m43746_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8047_InterfacesTypeInfos[] = 
{
	&IEnumerable_t55_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8047_0_0_0;
extern Il2CppType IEnumerable_1_t8047_1_0_0;
struct IEnumerable_1_t8047;
extern Il2CppGenericClass IEnumerable_1_t8047_GenericClass;
TypeInfo IEnumerable_1_t8047_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8047_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8047_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8047_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8047_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8047_0_0_0/* byval_arg */
	, &IEnumerable_1_t8047_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8047_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t8046_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.BlurOptimized>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.BlurOptimized>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.BlurOptimized>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.BlurOptimized>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.BlurOptimized>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.BlurOptimized>
extern MethodInfo IList_1_get_Item_m43747_MethodInfo;
extern MethodInfo IList_1_set_Item_m43748_MethodInfo;
static PropertyInfo IList_1_t8046____Item_PropertyInfo = 
{
	&IList_1_t8046_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m43747_MethodInfo/* get */
	, &IList_1_set_Item_m43748_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8046_PropertyInfos[] =
{
	&IList_1_t8046____Item_PropertyInfo,
	NULL
};
extern Il2CppType BlurOptimized_t233_0_0_0;
static ParameterInfo IList_1_t8046_IList_1_IndexOf_m43749_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &BlurOptimized_t233_0_0_0},
};
extern Il2CppType Int32_t386_0_0_0;
extern void* RuntimeInvoker_Int32_t386_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m43749_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.BlurOptimized>::IndexOf(T)
MethodInfo IList_1_IndexOf_m43749_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8046_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t386_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t386_Object_t/* invoker_method */
	, IList_1_t8046_IList_1_IndexOf_m43749_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m43749_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t386_0_0_0;
extern Il2CppType BlurOptimized_t233_0_0_0;
static ParameterInfo IList_1_t8046_IList_1_Insert_m43750_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &BlurOptimized_t233_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Int32_t386_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m43750_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.BlurOptimized>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m43750_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8046_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Int32_t386_Object_t/* invoker_method */
	, IList_1_t8046_IList_1_Insert_m43750_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m43750_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t386_0_0_0;
static ParameterInfo IList_1_t8046_IList_1_RemoveAt_m43751_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m43751_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.BlurOptimized>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m43751_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8046_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Int32_t386/* invoker_method */
	, IList_1_t8046_IList_1_RemoveAt_m43751_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m43751_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t386_0_0_0;
static ParameterInfo IList_1_t8046_IList_1_get_Item_m43747_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
};
extern Il2CppType BlurOptimized_t233_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m43747_GenericMethod;
// T System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.BlurOptimized>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m43747_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8046_il2cpp_TypeInfo/* declaring_type */
	, &BlurOptimized_t233_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t386/* invoker_method */
	, IList_1_t8046_IList_1_get_Item_m43747_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m43747_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t386_0_0_0;
extern Il2CppType BlurOptimized_t233_0_0_0;
static ParameterInfo IList_1_t8046_IList_1_set_Item_m43748_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &BlurOptimized_t233_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Int32_t386_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m43748_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.BlurOptimized>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m43748_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8046_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Int32_t386_Object_t/* invoker_method */
	, IList_1_t8046_IList_1_set_Item_m43748_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m43748_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8046_MethodInfos[] =
{
	&IList_1_IndexOf_m43749_MethodInfo,
	&IList_1_Insert_m43750_MethodInfo,
	&IList_1_RemoveAt_m43751_MethodInfo,
	&IList_1_get_Item_m43747_MethodInfo,
	&IList_1_set_Item_m43748_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8046_InterfacesTypeInfos[] = 
{
	&IEnumerable_t55_il2cpp_TypeInfo,
	&ICollection_1_t8045_il2cpp_TypeInfo,
	&IEnumerable_1_t8047_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8046_0_0_0;
extern Il2CppType IList_1_t8046_1_0_0;
struct IList_1_t8046;
extern Il2CppGenericClass IList_1_t8046_GenericClass;
extern CustomAttributesCache IList_1_t2638__CustomAttributeCache;
TypeInfo IList_1_t8046_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8046_MethodInfos/* methods */
	, IList_1_t8046_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8046_il2cpp_TypeInfo/* element_class */
	, IList_1_t8046_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2638__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8046_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8046_0_0_0/* byval_arg */
	, &IList_1_t8046_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8046_GenericClass/* generic_class */
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
extern TypeInfo CachedInvokableCall_1_t3513_il2cpp_TypeInfo;

extern TypeInfo InvokableCall_1_t3514_il2cpp_TypeInfo;
extern MethodInfo InvokableCall_1__ctor_m19330_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m19332_MethodInfo;


// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityStandardAssets.ImageEffects.BlurOptimized>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityStandardAssets.ImageEffects.BlurOptimized>::Invoke(System.Object[])
// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<UnityStandardAssets.ImageEffects.BlurOptimized>
extern Il2CppType ObjectU5BU5D_t470_0_0_33;
FieldInfo CachedInvokableCall_1_t3513____m_Arg1_1_FieldInfo = 
{
	"m_Arg1"/* name */
	, &ObjectU5BU5D_t470_0_0_33/* type */
	, &CachedInvokableCall_1_t3513_il2cpp_TypeInfo/* parent */
	, offsetof(CachedInvokableCall_1_t3513, ___m_Arg1_1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* CachedInvokableCall_1_t3513_FieldInfos[] =
{
	&CachedInvokableCall_1_t3513____m_Arg1_1_FieldInfo,
	NULL
};
extern Il2CppType Object_t326_0_0_0;
extern Il2CppType MethodInfo_t1253_0_0_0;
extern Il2CppType BlurOptimized_t233_0_0_0;
static ParameterInfo CachedInvokableCall_1_t3513_CachedInvokableCall_1__ctor_m19328_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t326_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1253_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &BlurOptimized_t233_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod CachedInvokableCall_1__ctor_m19328_GenericMethod;
// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityStandardAssets.ImageEffects.BlurOptimized>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
MethodInfo CachedInvokableCall_1__ctor_m19328_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CachedInvokableCall_1__ctor_m15540_gshared/* method */
	, &CachedInvokableCall_1_t3513_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t_Object_t_Object_t/* invoker_method */
	, CachedInvokableCall_1_t3513_CachedInvokableCall_1__ctor_m19328_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &CachedInvokableCall_1__ctor_m19328_GenericMethod/* genericMethod */

};
extern Il2CppType ObjectU5BU5D_t470_0_0_0;
static ParameterInfo CachedInvokableCall_1_t3513_CachedInvokableCall_1_Invoke_m19329_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t470_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod CachedInvokableCall_1_Invoke_m19329_GenericMethod;
// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityStandardAssets.ImageEffects.BlurOptimized>::Invoke(System.Object[])
MethodInfo CachedInvokableCall_1_Invoke_m19329_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&CachedInvokableCall_1_Invoke_m15542_gshared/* method */
	, &CachedInvokableCall_1_t3513_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t/* invoker_method */
	, CachedInvokableCall_1_t3513_CachedInvokableCall_1_Invoke_m19329_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &CachedInvokableCall_1_Invoke_m19329_GenericMethod/* genericMethod */

};
static MethodInfo* CachedInvokableCall_1_t3513_MethodInfos[] =
{
	&CachedInvokableCall_1__ctor_m19328_MethodInfo,
	&CachedInvokableCall_1_Invoke_m19329_MethodInfo,
	NULL
};
extern MethodInfo CachedInvokableCall_1_Invoke_m19329_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m19333_MethodInfo;
static MethodInfo* CachedInvokableCall_1_t3513_VTable[] =
{
	&Object_Equals_m1252_MethodInfo,
	&Object_Finalize_m1253_MethodInfo,
	&Object_GetHashCode_m1254_MethodInfo,
	&Object_ToString_m1255_MethodInfo,
	&CachedInvokableCall_1_Invoke_m19329_MethodInfo,
	&InvokableCall_1_Find_m19333_MethodInfo,
};
extern Il2CppType UnityAction_1_t3515_0_0_0;
extern TypeInfo UnityAction_1_t3515_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisBlurOptimized_t233_m33279_MethodInfo;
extern TypeInfo BlurOptimized_t233_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m19335_MethodInfo;
extern TypeInfo BlurOptimized_t233_il2cpp_TypeInfo;
static Il2CppRGCTXData CachedInvokableCall_1_t3513_RGCTXData[8] = 
{
	&UnityAction_1_t3515_0_0_0/* Type Usage */,
	&UnityAction_1_t3515_il2cpp_TypeInfo/* Class Usage */,
	&BaseInvokableCall_ThrowOnInvalidArg_TisBlurOptimized_t233_m33279_MethodInfo/* Method Usage */,
	&BlurOptimized_t233_il2cpp_TypeInfo/* Class Usage */,
	&UnityAction_1_Invoke_m19335_MethodInfo/* Method Usage */,
	&InvokableCall_1__ctor_m19330_MethodInfo/* Method Usage */,
	&BlurOptimized_t233_il2cpp_TypeInfo/* Class Usage */,
	&InvokableCall_1_Invoke_m19332_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType CachedInvokableCall_1_t3513_0_0_0;
extern Il2CppType CachedInvokableCall_1_t3513_1_0_0;
struct CachedInvokableCall_1_t3513;
extern Il2CppGenericClass CachedInvokableCall_1_t3513_GenericClass;
TypeInfo CachedInvokableCall_1_t3513_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "CachedInvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, CachedInvokableCall_1_t3513_MethodInfos/* methods */
	, NULL/* properties */
	, CachedInvokableCall_1_t3513_FieldInfos/* fields */
	, NULL/* events */
	, &InvokableCall_1_t3514_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CachedInvokableCall_1_t3513_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, CachedInvokableCall_1_t3513_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CachedInvokableCall_1_t3513_il2cpp_TypeInfo/* cast_class */
	, &CachedInvokableCall_1_t3513_0_0_0/* byval_arg */
	, &CachedInvokableCall_1_t3513_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &CachedInvokableCall_1_t3513_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, CachedInvokableCall_1_t3513_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CachedInvokableCall_1_t3513)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
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
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo UnityAction_1_t3515_il2cpp_TypeInfo;
struct BaseInvokableCall_t1252;
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<UnityStandardAssets.ImageEffects.BlurOptimized>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<UnityStandardAssets.ImageEffects.BlurOptimized>(System.Object)
#define BaseInvokableCall_ThrowOnInvalidArg_TisBlurOptimized_t233_m33279(__this/* static, unused */, p0, method) (void)BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m31937_gshared((Object_t *)__this/* static, unused */, (Object_t *)p0, method)


// System.Void UnityEngine.Events.InvokableCall`1<UnityStandardAssets.ImageEffects.BlurOptimized>::.ctor(System.Object,System.Reflection.MethodInfo)
// System.Void UnityEngine.Events.InvokableCall`1<UnityStandardAssets.ImageEffects.BlurOptimized>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
// System.Void UnityEngine.Events.InvokableCall`1<UnityStandardAssets.ImageEffects.BlurOptimized>::Invoke(System.Object[])
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityStandardAssets.ImageEffects.BlurOptimized>::Find(System.Object,System.Reflection.MethodInfo)
// Metadata Definition UnityEngine.Events.InvokableCall`1<UnityStandardAssets.ImageEffects.BlurOptimized>
extern Il2CppType UnityAction_1_t3515_0_0_1;
FieldInfo InvokableCall_1_t3514____Delegate_0_FieldInfo = 
{
	"Delegate"/* name */
	, &UnityAction_1_t3515_0_0_1/* type */
	, &InvokableCall_1_t3514_il2cpp_TypeInfo/* parent */
	, offsetof(InvokableCall_1_t3514, ___Delegate_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InvokableCall_1_t3514_FieldInfos[] =
{
	&InvokableCall_1_t3514____Delegate_0_FieldInfo,
	NULL
};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t1253_0_0_0;
static ParameterInfo InvokableCall_1_t3514_InvokableCall_1__ctor_m19330_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1253_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InvokableCall_1__ctor_m19330_GenericMethod;
// System.Void UnityEngine.Events.InvokableCall`1<UnityStandardAssets.ImageEffects.BlurOptimized>::.ctor(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1__ctor_m19330_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m15543_gshared/* method */
	, &InvokableCall_1_t3514_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t3514_InvokableCall_1__ctor_m19330_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InvokableCall_1__ctor_m19330_GenericMethod/* genericMethod */

};
extern Il2CppType UnityAction_1_t3515_0_0_0;
static ParameterInfo InvokableCall_1_t3514_InvokableCall_1__ctor_m19331_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &UnityAction_1_t3515_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InvokableCall_1__ctor_m19331_GenericMethod;
// System.Void UnityEngine.Events.InvokableCall`1<UnityStandardAssets.ImageEffects.BlurOptimized>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
MethodInfo InvokableCall_1__ctor_m19331_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m15544_gshared/* method */
	, &InvokableCall_1_t3514_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t/* invoker_method */
	, InvokableCall_1_t3514_InvokableCall_1__ctor_m19331_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InvokableCall_1__ctor_m19331_GenericMethod/* genericMethod */

};
extern Il2CppType ObjectU5BU5D_t470_0_0_0;
static ParameterInfo InvokableCall_1_t3514_InvokableCall_1_Invoke_m19332_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t470_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InvokableCall_1_Invoke_m19332_GenericMethod;
// System.Void UnityEngine.Events.InvokableCall`1<UnityStandardAssets.ImageEffects.BlurOptimized>::Invoke(System.Object[])
MethodInfo InvokableCall_1_Invoke_m19332_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&InvokableCall_1_Invoke_m15545_gshared/* method */
	, &InvokableCall_1_t3514_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t/* invoker_method */
	, InvokableCall_1_t3514_InvokableCall_1_Invoke_m19332_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InvokableCall_1_Invoke_m19332_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t1253_0_0_0;
static ParameterInfo InvokableCall_1_t3514_InvokableCall_1_Find_m19333_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1253_0_0_0},
};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InvokableCall_1_Find_m19333_GenericMethod;
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityStandardAssets.ImageEffects.BlurOptimized>::Find(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1_Find_m19333_MethodInfo = 
{
	"Find"/* name */
	, (methodPointerType)&InvokableCall_1_Find_m15546_gshared/* method */
	, &InvokableCall_1_t3514_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t379_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t379_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t3514_InvokableCall_1_Find_m19333_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InvokableCall_1_Find_m19333_GenericMethod/* genericMethod */

};
static MethodInfo* InvokableCall_1_t3514_MethodInfos[] =
{
	&InvokableCall_1__ctor_m19330_MethodInfo,
	&InvokableCall_1__ctor_m19331_MethodInfo,
	&InvokableCall_1_Invoke_m19332_MethodInfo,
	&InvokableCall_1_Find_m19333_MethodInfo,
	NULL
};
static MethodInfo* InvokableCall_1_t3514_VTable[] =
{
	&Object_Equals_m1252_MethodInfo,
	&Object_Finalize_m1253_MethodInfo,
	&Object_GetHashCode_m1254_MethodInfo,
	&Object_ToString_m1255_MethodInfo,
	&InvokableCall_1_Invoke_m19332_MethodInfo,
	&InvokableCall_1_Find_m19333_MethodInfo,
};
extern TypeInfo UnityAction_1_t3515_il2cpp_TypeInfo;
extern TypeInfo BlurOptimized_t233_il2cpp_TypeInfo;
static Il2CppRGCTXData InvokableCall_1_t3514_RGCTXData[5] = 
{
	&UnityAction_1_t3515_0_0_0/* Type Usage */,
	&UnityAction_1_t3515_il2cpp_TypeInfo/* Class Usage */,
	&BaseInvokableCall_ThrowOnInvalidArg_TisBlurOptimized_t233_m33279_MethodInfo/* Method Usage */,
	&BlurOptimized_t233_il2cpp_TypeInfo/* Class Usage */,
	&UnityAction_1_Invoke_m19335_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType InvokableCall_1_t3514_0_0_0;
extern Il2CppType InvokableCall_1_t3514_1_0_0;
struct InvokableCall_1_t3514;
extern Il2CppGenericClass InvokableCall_1_t3514_GenericClass;
TypeInfo InvokableCall_1_t3514_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "InvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, InvokableCall_1_t3514_MethodInfos/* methods */
	, NULL/* properties */
	, InvokableCall_1_t3514_FieldInfos/* fields */
	, NULL/* events */
	, &BaseInvokableCall_t1252_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &InvokableCall_1_t3514_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, InvokableCall_1_t3514_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InvokableCall_1_t3514_il2cpp_TypeInfo/* cast_class */
	, &InvokableCall_1_t3514_0_0_0/* byval_arg */
	, &InvokableCall_1_t3514_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &InvokableCall_1_t3514_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InvokableCall_1_t3514_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InvokableCall_1_t3514)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
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
	, 4/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.Events.UnityAction`1<UnityStandardAssets.ImageEffects.BlurOptimized>::.ctor(System.Object,System.IntPtr)
// System.Void UnityEngine.Events.UnityAction`1<UnityStandardAssets.ImageEffects.BlurOptimized>::Invoke(T0)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityStandardAssets.ImageEffects.BlurOptimized>::BeginInvoke(T0,System.AsyncCallback,System.Object)
// System.Void UnityEngine.Events.UnityAction`1<UnityStandardAssets.ImageEffects.BlurOptimized>::EndInvoke(System.IAsyncResult)
// Metadata Definition UnityEngine.Events.UnityAction`1<UnityStandardAssets.ImageEffects.BlurOptimized>
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t35_0_0_0;
static ParameterInfo UnityAction_1_t3515_UnityAction_1__ctor_m19334_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &IntPtr_t35_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t_IntPtr_t35 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod UnityAction_1__ctor_m19334_GenericMethod;
// System.Void UnityEngine.Events.UnityAction`1<UnityStandardAssets.ImageEffects.BlurOptimized>::.ctor(System.Object,System.IntPtr)
MethodInfo UnityAction_1__ctor_m19334_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UnityAction_1__ctor_m15547_gshared/* method */
	, &UnityAction_1_t3515_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t_IntPtr_t35/* invoker_method */
	, UnityAction_1_t3515_UnityAction_1__ctor_m19334_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &UnityAction_1__ctor_m19334_GenericMethod/* genericMethod */

};
extern Il2CppType BlurOptimized_t233_0_0_0;
static ParameterInfo UnityAction_1_t3515_UnityAction_1_Invoke_m19335_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &BlurOptimized_t233_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod UnityAction_1_Invoke_m19335_GenericMethod;
// System.Void UnityEngine.Events.UnityAction`1<UnityStandardAssets.ImageEffects.BlurOptimized>::Invoke(T0)
MethodInfo UnityAction_1_Invoke_m19335_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&UnityAction_1_Invoke_m15548_gshared/* method */
	, &UnityAction_1_t3515_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t/* invoker_method */
	, UnityAction_1_t3515_UnityAction_1_Invoke_m19335_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 10/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &UnityAction_1_Invoke_m19335_GenericMethod/* genericMethod */

};
extern Il2CppType BlurOptimized_t233_0_0_0;
extern Il2CppType AsyncCallback_t32_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo UnityAction_1_t3515_UnityAction_1_BeginInvoke_m19336_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &BlurOptimized_t233_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &AsyncCallback_t32_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType IAsyncResult_t31_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod UnityAction_1_BeginInvoke_m19336_GenericMethod;
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityStandardAssets.ImageEffects.BlurOptimized>::BeginInvoke(T0,System.AsyncCallback,System.Object)
MethodInfo UnityAction_1_BeginInvoke_m19336_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&UnityAction_1_BeginInvoke_m15549_gshared/* method */
	, &UnityAction_1_t3515_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t31_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, UnityAction_1_t3515_UnityAction_1_BeginInvoke_m19336_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &UnityAction_1_BeginInvoke_m19336_GenericMethod/* genericMethod */

};
extern Il2CppType IAsyncResult_t31_0_0_0;
static ParameterInfo UnityAction_1_t3515_UnityAction_1_EndInvoke_m19337_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &IAsyncResult_t31_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod UnityAction_1_EndInvoke_m19337_GenericMethod;
// System.Void UnityEngine.Events.UnityAction`1<UnityStandardAssets.ImageEffects.BlurOptimized>::EndInvoke(System.IAsyncResult)
MethodInfo UnityAction_1_EndInvoke_m19337_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&UnityAction_1_EndInvoke_m15550_gshared/* method */
	, &UnityAction_1_t3515_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t/* invoker_method */
	, UnityAction_1_t3515_UnityAction_1_EndInvoke_m19337_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &UnityAction_1_EndInvoke_m19337_GenericMethod/* genericMethod */

};
static MethodInfo* UnityAction_1_t3515_MethodInfos[] =
{
	&UnityAction_1__ctor_m19334_MethodInfo,
	&UnityAction_1_Invoke_m19335_MethodInfo,
	&UnityAction_1_BeginInvoke_m19336_MethodInfo,
	&UnityAction_1_EndInvoke_m19337_MethodInfo,
	NULL
};
extern MethodInfo UnityAction_1_BeginInvoke_m19336_MethodInfo;
extern MethodInfo UnityAction_1_EndInvoke_m19337_MethodInfo;
static MethodInfo* UnityAction_1_t3515_VTable[] =
{
	&MulticastDelegate_Equals_m1395_MethodInfo,
	&Object_Finalize_m1253_MethodInfo,
	&MulticastDelegate_GetHashCode_m1396_MethodInfo,
	&Object_ToString_m1255_MethodInfo,
	&MulticastDelegate_GetObjectData_m1397_MethodInfo,
	&Delegate_Clone_m1398_MethodInfo,
	&MulticastDelegate_GetObjectData_m1397_MethodInfo,
	&MulticastDelegate_GetInvocationList_m1399_MethodInfo,
	&MulticastDelegate_CombineImpl_m1400_MethodInfo,
	&MulticastDelegate_RemoveImpl_m1401_MethodInfo,
	&UnityAction_1_Invoke_m19335_MethodInfo,
	&UnityAction_1_BeginInvoke_m19336_MethodInfo,
	&UnityAction_1_EndInvoke_m19337_MethodInfo,
};
static Il2CppInterfaceOffsetPair UnityAction_1_t3515_InterfacesOffsets[] = 
{
	{ &ICloneable_t434_il2cpp_TypeInfo, 4},
	{ &ISerializable_t435_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType UnityAction_1_t3515_1_0_0;
struct UnityAction_1_t3515;
extern Il2CppGenericClass UnityAction_1_t3515_GenericClass;
TypeInfo UnityAction_1_t3515_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnityAction`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, UnityAction_1_t3515_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MulticastDelegate_t34_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &UnityAction_1_t3515_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, UnityAction_1_t3515_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &UnityAction_1_t3515_il2cpp_TypeInfo/* cast_class */
	, &UnityAction_1_t3515_0_0_0/* byval_arg */
	, &UnityAction_1_t3515_1_0_0/* this_arg */
	, UnityAction_1_t3515_InterfacesOffsets/* interface_offsets */
	, &UnityAction_1_t3515_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UnityAction_1_t3515)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 257/* flags */
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
	, 4/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 13/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t6346_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<UnityStandardAssets.ImageEffects.BlurOptimized/BlurType>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityStandardAssets.ImageEffects.BlurOptimized/BlurType>
extern MethodInfo IEnumerator_1_get_Current_m43752_MethodInfo;
static PropertyInfo IEnumerator_1_t6346____Current_PropertyInfo = 
{
	&IEnumerator_1_t6346_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m43752_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6346_PropertyInfos[] =
{
	&IEnumerator_1_t6346____Current_PropertyInfo,
	NULL
};
extern Il2CppType BlurType_t232_0_0_0;
extern void* RuntimeInvoker_BlurType_t232 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m43752_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<UnityStandardAssets.ImageEffects.BlurOptimized/BlurType>::get_Current()
MethodInfo IEnumerator_1_get_Current_m43752_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6346_il2cpp_TypeInfo/* declaring_type */
	, &BlurType_t232_0_0_0/* return_type */
	, RuntimeInvoker_BlurType_t232/* invoker_method */
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
	, &IEnumerator_1_get_Current_m43752_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6346_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m43752_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6346_InterfacesTypeInfos[] = 
{
	&IEnumerator_t26_il2cpp_TypeInfo,
	&IDisposable_t444_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6346_0_0_0;
extern Il2CppType IEnumerator_1_t6346_1_0_0;
struct IEnumerator_1_t6346;
extern Il2CppGenericClass IEnumerator_1_t6346_GenericClass;
TypeInfo IEnumerator_1_t6346_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6346_MethodInfos/* methods */
	, IEnumerator_1_t6346_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6346_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6346_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6346_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6346_0_0_0/* byval_arg */
	, &IEnumerator_1_t6346_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6346_GenericClass/* generic_class */
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
extern TypeInfo InternalEnumerator_1_t3516_il2cpp_TypeInfo;

extern TypeInfo BlurType_t232_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m19342_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisBlurType_t232_m33281_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityStandardAssets.ImageEffects.BlurOptimized/BlurType>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityStandardAssets.ImageEffects.BlurOptimized/BlurType>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisBlurType_t232_m33281 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.BlurOptimized/BlurType>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m19338_MethodInfo;
 void InternalEnumerator_1__ctor_m19338 (InternalEnumerator_1_t3516 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.BlurOptimized/BlurType>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19339_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19339 (InternalEnumerator_1_t3516 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m19342(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m19342_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&BlurType_t232_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.BlurOptimized/BlurType>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m19340_MethodInfo;
 void InternalEnumerator_1_Dispose_m19340 (InternalEnumerator_1_t3516 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.BlurOptimized/BlurType>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m19341_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m19341 (InternalEnumerator_1_t3516 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.BlurOptimized/BlurType>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m19342 (InternalEnumerator_1_t3516 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisBlurType_t232_m33281(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisBlurType_t232_m33281_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.BlurOptimized/BlurType>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3516____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3516_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3516, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t386_0_0_1;
FieldInfo InternalEnumerator_1_t3516____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t386_0_0_1/* type */
	, &InternalEnumerator_1_t3516_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3516, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3516_FieldInfos[] =
{
	&InternalEnumerator_1_t3516____array_0_FieldInfo,
	&InternalEnumerator_1_t3516____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t3516____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3516_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19339_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3516____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3516_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m19342_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3516_PropertyInfos[] =
{
	&InternalEnumerator_1_t3516____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3516____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3516_InternalEnumerator_1__ctor_m19338_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m19338_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.BlurOptimized/BlurType>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m19338_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m19338/* method */
	, &InternalEnumerator_1_t3516_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t/* invoker_method */
	, InternalEnumerator_1_t3516_InternalEnumerator_1__ctor_m19338_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m19338_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19339_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.BlurOptimized/BlurType>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19339_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19339/* method */
	, &InternalEnumerator_1_t3516_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19339_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m19340_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.BlurOptimized/BlurType>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m19340_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m19340/* method */
	, &InternalEnumerator_1_t3516_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m19340_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m19341_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.BlurOptimized/BlurType>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m19341_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m19341/* method */
	, &InternalEnumerator_1_t3516_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m19341_GenericMethod/* genericMethod */

};
extern Il2CppType BlurType_t232_0_0_0;
extern void* RuntimeInvoker_BlurType_t232 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19342_GenericMethod;
// T System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.BlurOptimized/BlurType>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m19342_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m19342/* method */
	, &InternalEnumerator_1_t3516_il2cpp_TypeInfo/* declaring_type */
	, &BlurType_t232_0_0_0/* return_type */
	, RuntimeInvoker_BlurType_t232/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m19342_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3516_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m19338_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19339_MethodInfo,
	&InternalEnumerator_1_Dispose_m19340_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19341_MethodInfo,
	&InternalEnumerator_1_get_Current_m19342_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t3516_VTable[] =
{
	&ValueType_Equals_m2156_MethodInfo,
	&Object_Finalize_m1253_MethodInfo,
	&ValueType_GetHashCode_m2157_MethodInfo,
	&ValueType_ToString_m2158_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19339_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19341_MethodInfo,
	&InternalEnumerator_1_Dispose_m19340_MethodInfo,
	&InternalEnumerator_1_get_Current_m19342_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3516_InterfacesTypeInfos[] = 
{
	&IEnumerator_t26_il2cpp_TypeInfo,
	&IDisposable_t444_il2cpp_TypeInfo,
	&IEnumerator_1_t6346_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3516_InterfacesOffsets[] = 
{
	{ &IEnumerator_t26_il2cpp_TypeInfo, 4},
	{ &IDisposable_t444_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6346_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3516_0_0_0;
extern Il2CppType InternalEnumerator_1_t3516_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3516_GenericClass;
TypeInfo InternalEnumerator_1_t3516_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3516_MethodInfos/* methods */
	, InternalEnumerator_1_t3516_PropertyInfos/* properties */
	, InternalEnumerator_1_t3516_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t550_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3516_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3516_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3516_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3516_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3516_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3516_1_0_0/* this_arg */
	, InternalEnumerator_1_t3516_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3516_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3516)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8048_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.BlurOptimized/BlurType>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.BlurOptimized/BlurType>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.BlurOptimized/BlurType>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.BlurOptimized/BlurType>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.BlurOptimized/BlurType>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.BlurOptimized/BlurType>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.BlurOptimized/BlurType>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.BlurOptimized/BlurType>
extern MethodInfo ICollection_1_get_Count_m43753_MethodInfo;
static PropertyInfo ICollection_1_t8048____Count_PropertyInfo = 
{
	&ICollection_1_t8048_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m43753_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m43754_MethodInfo;
static PropertyInfo ICollection_1_t8048____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8048_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m43754_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8048_PropertyInfos[] =
{
	&ICollection_1_t8048____Count_PropertyInfo,
	&ICollection_1_t8048____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t386_0_0_0;
extern void* RuntimeInvoker_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m43753_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.BlurOptimized/BlurType>::get_Count()
MethodInfo ICollection_1_get_Count_m43753_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8048_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m43753_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m43754_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.BlurOptimized/BlurType>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m43754_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8048_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m43754_GenericMethod/* genericMethod */

};
extern Il2CppType BlurType_t232_0_0_0;
extern Il2CppType BlurType_t232_0_0_0;
static ParameterInfo ICollection_1_t8048_ICollection_1_Add_m43755_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &BlurType_t232_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m43755_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.BlurOptimized/BlurType>::Add(T)
MethodInfo ICollection_1_Add_m43755_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8048_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Int32_t386/* invoker_method */
	, ICollection_1_t8048_ICollection_1_Add_m43755_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m43755_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m43756_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.BlurOptimized/BlurType>::Clear()
MethodInfo ICollection_1_Clear_m43756_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8048_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m43756_GenericMethod/* genericMethod */

};
extern Il2CppType BlurType_t232_0_0_0;
static ParameterInfo ICollection_1_t8048_ICollection_1_Contains_m43757_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &BlurType_t232_0_0_0},
};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m43757_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.BlurOptimized/BlurType>::Contains(T)
MethodInfo ICollection_1_Contains_m43757_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8048_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t379_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t379_Int32_t386/* invoker_method */
	, ICollection_1_t8048_ICollection_1_Contains_m43757_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m43757_GenericMethod/* genericMethod */

};
extern Il2CppType BlurTypeU5BU5D_t5721_0_0_0;
extern Il2CppType BlurTypeU5BU5D_t5721_0_0_0;
extern Il2CppType Int32_t386_0_0_0;
static ParameterInfo ICollection_1_t8048_ICollection_1_CopyTo_m43758_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &BlurTypeU5BU5D_t5721_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m43758_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.BlurOptimized/BlurType>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m43758_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8048_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t_Int32_t386/* invoker_method */
	, ICollection_1_t8048_ICollection_1_CopyTo_m43758_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m43758_GenericMethod/* genericMethod */

};
extern Il2CppType BlurType_t232_0_0_0;
static ParameterInfo ICollection_1_t8048_ICollection_1_Remove_m43759_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &BlurType_t232_0_0_0},
};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m43759_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.BlurOptimized/BlurType>::Remove(T)
MethodInfo ICollection_1_Remove_m43759_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8048_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t379_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t379_Int32_t386/* invoker_method */
	, ICollection_1_t8048_ICollection_1_Remove_m43759_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m43759_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8048_MethodInfos[] =
{
	&ICollection_1_get_Count_m43753_MethodInfo,
	&ICollection_1_get_IsReadOnly_m43754_MethodInfo,
	&ICollection_1_Add_m43755_MethodInfo,
	&ICollection_1_Clear_m43756_MethodInfo,
	&ICollection_1_Contains_m43757_MethodInfo,
	&ICollection_1_CopyTo_m43758_MethodInfo,
	&ICollection_1_Remove_m43759_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8050_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8048_InterfacesTypeInfos[] = 
{
	&IEnumerable_t55_il2cpp_TypeInfo,
	&IEnumerable_1_t8050_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8048_0_0_0;
extern Il2CppType ICollection_1_t8048_1_0_0;
struct ICollection_1_t8048;
extern Il2CppGenericClass ICollection_1_t8048_GenericClass;
TypeInfo ICollection_1_t8048_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8048_MethodInfos/* methods */
	, ICollection_1_t8048_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8048_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8048_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8048_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8048_0_0_0/* byval_arg */
	, &ICollection_1_t8048_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8048_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityStandardAssets.ImageEffects.BlurOptimized/BlurType>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityStandardAssets.ImageEffects.BlurOptimized/BlurType>
extern Il2CppType IEnumerator_1_t6346_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m43760_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityStandardAssets.ImageEffects.BlurOptimized/BlurType>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m43760_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8050_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6346_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m43760_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8050_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m43760_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8050_InterfacesTypeInfos[] = 
{
	&IEnumerable_t55_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8050_0_0_0;
extern Il2CppType IEnumerable_1_t8050_1_0_0;
struct IEnumerable_1_t8050;
extern Il2CppGenericClass IEnumerable_1_t8050_GenericClass;
TypeInfo IEnumerable_1_t8050_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8050_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8050_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8050_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8050_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8050_0_0_0/* byval_arg */
	, &IEnumerable_1_t8050_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8050_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t8049_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.BlurOptimized/BlurType>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.BlurOptimized/BlurType>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.BlurOptimized/BlurType>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.BlurOptimized/BlurType>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.BlurOptimized/BlurType>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.BlurOptimized/BlurType>
extern MethodInfo IList_1_get_Item_m43761_MethodInfo;
extern MethodInfo IList_1_set_Item_m43762_MethodInfo;
static PropertyInfo IList_1_t8049____Item_PropertyInfo = 
{
	&IList_1_t8049_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m43761_MethodInfo/* get */
	, &IList_1_set_Item_m43762_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8049_PropertyInfos[] =
{
	&IList_1_t8049____Item_PropertyInfo,
	NULL
};
extern Il2CppType BlurType_t232_0_0_0;
static ParameterInfo IList_1_t8049_IList_1_IndexOf_m43763_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &BlurType_t232_0_0_0},
};
extern Il2CppType Int32_t386_0_0_0;
extern void* RuntimeInvoker_Int32_t386_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m43763_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.BlurOptimized/BlurType>::IndexOf(T)
MethodInfo IList_1_IndexOf_m43763_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8049_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t386_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t386_Int32_t386/* invoker_method */
	, IList_1_t8049_IList_1_IndexOf_m43763_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m43763_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t386_0_0_0;
extern Il2CppType BlurType_t232_0_0_0;
static ParameterInfo IList_1_t8049_IList_1_Insert_m43764_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &BlurType_t232_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Int32_t386_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m43764_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.BlurOptimized/BlurType>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m43764_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8049_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Int32_t386_Int32_t386/* invoker_method */
	, IList_1_t8049_IList_1_Insert_m43764_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m43764_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t386_0_0_0;
static ParameterInfo IList_1_t8049_IList_1_RemoveAt_m43765_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m43765_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.BlurOptimized/BlurType>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m43765_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8049_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Int32_t386/* invoker_method */
	, IList_1_t8049_IList_1_RemoveAt_m43765_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m43765_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t386_0_0_0;
static ParameterInfo IList_1_t8049_IList_1_get_Item_m43761_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
};
extern Il2CppType BlurType_t232_0_0_0;
extern void* RuntimeInvoker_BlurType_t232_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m43761_GenericMethod;
// T System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.BlurOptimized/BlurType>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m43761_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8049_il2cpp_TypeInfo/* declaring_type */
	, &BlurType_t232_0_0_0/* return_type */
	, RuntimeInvoker_BlurType_t232_Int32_t386/* invoker_method */
	, IList_1_t8049_IList_1_get_Item_m43761_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m43761_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t386_0_0_0;
extern Il2CppType BlurType_t232_0_0_0;
static ParameterInfo IList_1_t8049_IList_1_set_Item_m43762_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &BlurType_t232_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Int32_t386_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m43762_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.BlurOptimized/BlurType>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m43762_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8049_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Int32_t386_Int32_t386/* invoker_method */
	, IList_1_t8049_IList_1_set_Item_m43762_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m43762_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8049_MethodInfos[] =
{
	&IList_1_IndexOf_m43763_MethodInfo,
	&IList_1_Insert_m43764_MethodInfo,
	&IList_1_RemoveAt_m43765_MethodInfo,
	&IList_1_get_Item_m43761_MethodInfo,
	&IList_1_set_Item_m43762_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8049_InterfacesTypeInfos[] = 
{
	&IEnumerable_t55_il2cpp_TypeInfo,
	&ICollection_1_t8048_il2cpp_TypeInfo,
	&IEnumerable_1_t8050_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8049_0_0_0;
extern Il2CppType IList_1_t8049_1_0_0;
struct IList_1_t8049;
extern Il2CppGenericClass IList_1_t8049_GenericClass;
extern CustomAttributesCache IList_1_t2638__CustomAttributeCache;
TypeInfo IList_1_t8049_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8049_MethodInfos/* methods */
	, IList_1_t8049_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8049_il2cpp_TypeInfo/* element_class */
	, IList_1_t8049_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2638__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8049_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8049_0_0_0/* byval_arg */
	, &IList_1_t8049_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8049_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t6348_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<UnityStandardAssets.ImageEffects.CameraMotionBlur>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityStandardAssets.ImageEffects.CameraMotionBlur>
extern MethodInfo IEnumerator_1_get_Current_m43766_MethodInfo;
static PropertyInfo IEnumerator_1_t6348____Current_PropertyInfo = 
{
	&IEnumerator_1_t6348_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m43766_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6348_PropertyInfos[] =
{
	&IEnumerator_1_t6348____Current_PropertyInfo,
	NULL
};
extern Il2CppType CameraMotionBlur_t237_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m43766_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<UnityStandardAssets.ImageEffects.CameraMotionBlur>::get_Current()
MethodInfo IEnumerator_1_get_Current_m43766_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6348_il2cpp_TypeInfo/* declaring_type */
	, &CameraMotionBlur_t237_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m43766_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6348_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m43766_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6348_InterfacesTypeInfos[] = 
{
	&IEnumerator_t26_il2cpp_TypeInfo,
	&IDisposable_t444_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6348_0_0_0;
extern Il2CppType IEnumerator_1_t6348_1_0_0;
struct IEnumerator_1_t6348;
extern Il2CppGenericClass IEnumerator_1_t6348_GenericClass;
TypeInfo IEnumerator_1_t6348_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6348_MethodInfos/* methods */
	, IEnumerator_1_t6348_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6348_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6348_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6348_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6348_0_0_0/* byval_arg */
	, &IEnumerator_1_t6348_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6348_GenericClass/* generic_class */
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
extern TypeInfo InternalEnumerator_1_t3517_il2cpp_TypeInfo;

extern TypeInfo CameraMotionBlur_t237_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m19347_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisCameraMotionBlur_t237_m33292_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityStandardAssets.ImageEffects.CameraMotionBlur>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityStandardAssets.ImageEffects.CameraMotionBlur>(System.Int32)
#define Array_InternalArray__get_Item_TisCameraMotionBlur_t237_m33292(__this, p0, method) (CameraMotionBlur_t237 *)Array_InternalArray__get_Item_TisObject_t_m31403_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.CameraMotionBlur>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.CameraMotionBlur>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.CameraMotionBlur>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.CameraMotionBlur>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.CameraMotionBlur>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.CameraMotionBlur>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3517____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3517_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3517, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t386_0_0_1;
FieldInfo InternalEnumerator_1_t3517____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t386_0_0_1/* type */
	, &InternalEnumerator_1_t3517_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3517, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3517_FieldInfos[] =
{
	&InternalEnumerator_1_t3517____array_0_FieldInfo,
	&InternalEnumerator_1_t3517____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19344_MethodInfo;
static PropertyInfo InternalEnumerator_1_t3517____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3517_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19344_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3517____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3517_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m19347_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3517_PropertyInfos[] =
{
	&InternalEnumerator_1_t3517____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3517____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3517_InternalEnumerator_1__ctor_m19343_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m19343_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.CameraMotionBlur>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m19343_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m13935_gshared/* method */
	, &InternalEnumerator_1_t3517_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t/* invoker_method */
	, InternalEnumerator_1_t3517_InternalEnumerator_1__ctor_m19343_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m19343_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19344_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.CameraMotionBlur>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19344_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13937_gshared/* method */
	, &InternalEnumerator_1_t3517_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19344_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m19345_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.CameraMotionBlur>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m19345_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m13939_gshared/* method */
	, &InternalEnumerator_1_t3517_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m19345_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m19346_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.CameraMotionBlur>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m19346_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m13941_gshared/* method */
	, &InternalEnumerator_1_t3517_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m19346_GenericMethod/* genericMethod */

};
extern Il2CppType CameraMotionBlur_t237_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19347_GenericMethod;
// T System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.CameraMotionBlur>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m19347_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m13943_gshared/* method */
	, &InternalEnumerator_1_t3517_il2cpp_TypeInfo/* declaring_type */
	, &CameraMotionBlur_t237_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m19347_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3517_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m19343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19344_MethodInfo,
	&InternalEnumerator_1_Dispose_m19345_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19346_MethodInfo,
	&InternalEnumerator_1_get_Current_m19347_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m19346_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m19345_MethodInfo;
static MethodInfo* InternalEnumerator_1_t3517_VTable[] =
{
	&ValueType_Equals_m2156_MethodInfo,
	&Object_Finalize_m1253_MethodInfo,
	&ValueType_GetHashCode_m2157_MethodInfo,
	&ValueType_ToString_m2158_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19344_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19346_MethodInfo,
	&InternalEnumerator_1_Dispose_m19345_MethodInfo,
	&InternalEnumerator_1_get_Current_m19347_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3517_InterfacesTypeInfos[] = 
{
	&IEnumerator_t26_il2cpp_TypeInfo,
	&IDisposable_t444_il2cpp_TypeInfo,
	&IEnumerator_1_t6348_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3517_InterfacesOffsets[] = 
{
	{ &IEnumerator_t26_il2cpp_TypeInfo, 4},
	{ &IDisposable_t444_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6348_il2cpp_TypeInfo, 7},
};
extern TypeInfo CameraMotionBlur_t237_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t3517_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m19347_MethodInfo/* Method Usage */,
	&CameraMotionBlur_t237_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisCameraMotionBlur_t237_m33292_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3517_0_0_0;
extern Il2CppType InternalEnumerator_1_t3517_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3517_GenericClass;
TypeInfo InternalEnumerator_1_t3517_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3517_MethodInfos/* methods */
	, InternalEnumerator_1_t3517_PropertyInfos/* properties */
	, InternalEnumerator_1_t3517_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t550_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3517_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3517_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3517_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3517_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3517_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3517_1_0_0/* this_arg */
	, InternalEnumerator_1_t3517_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3517_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t3517_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3517)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8051_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.CameraMotionBlur>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.CameraMotionBlur>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.CameraMotionBlur>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.CameraMotionBlur>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.CameraMotionBlur>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.CameraMotionBlur>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.CameraMotionBlur>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.CameraMotionBlur>
extern MethodInfo ICollection_1_get_Count_m43767_MethodInfo;
static PropertyInfo ICollection_1_t8051____Count_PropertyInfo = 
{
	&ICollection_1_t8051_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m43767_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m43768_MethodInfo;
static PropertyInfo ICollection_1_t8051____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8051_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m43768_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8051_PropertyInfos[] =
{
	&ICollection_1_t8051____Count_PropertyInfo,
	&ICollection_1_t8051____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t386_0_0_0;
extern void* RuntimeInvoker_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m43767_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.CameraMotionBlur>::get_Count()
MethodInfo ICollection_1_get_Count_m43767_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8051_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m43767_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m43768_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.CameraMotionBlur>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m43768_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8051_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m43768_GenericMethod/* genericMethod */

};
extern Il2CppType CameraMotionBlur_t237_0_0_0;
extern Il2CppType CameraMotionBlur_t237_0_0_0;
static ParameterInfo ICollection_1_t8051_ICollection_1_Add_m43769_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CameraMotionBlur_t237_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m43769_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.CameraMotionBlur>::Add(T)
MethodInfo ICollection_1_Add_m43769_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8051_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t/* invoker_method */
	, ICollection_1_t8051_ICollection_1_Add_m43769_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m43769_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m43770_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.CameraMotionBlur>::Clear()
MethodInfo ICollection_1_Clear_m43770_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8051_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m43770_GenericMethod/* genericMethod */

};
extern Il2CppType CameraMotionBlur_t237_0_0_0;
static ParameterInfo ICollection_1_t8051_ICollection_1_Contains_m43771_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CameraMotionBlur_t237_0_0_0},
};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m43771_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.CameraMotionBlur>::Contains(T)
MethodInfo ICollection_1_Contains_m43771_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8051_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t379_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t379_Object_t/* invoker_method */
	, ICollection_1_t8051_ICollection_1_Contains_m43771_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m43771_GenericMethod/* genericMethod */

};
extern Il2CppType CameraMotionBlurU5BU5D_t5722_0_0_0;
extern Il2CppType CameraMotionBlurU5BU5D_t5722_0_0_0;
extern Il2CppType Int32_t386_0_0_0;
static ParameterInfo ICollection_1_t8051_ICollection_1_CopyTo_m43772_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &CameraMotionBlurU5BU5D_t5722_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m43772_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.CameraMotionBlur>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m43772_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8051_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t_Int32_t386/* invoker_method */
	, ICollection_1_t8051_ICollection_1_CopyTo_m43772_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m43772_GenericMethod/* genericMethod */

};
extern Il2CppType CameraMotionBlur_t237_0_0_0;
static ParameterInfo ICollection_1_t8051_ICollection_1_Remove_m43773_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CameraMotionBlur_t237_0_0_0},
};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m43773_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.CameraMotionBlur>::Remove(T)
MethodInfo ICollection_1_Remove_m43773_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8051_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t379_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t379_Object_t/* invoker_method */
	, ICollection_1_t8051_ICollection_1_Remove_m43773_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m43773_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8051_MethodInfos[] =
{
	&ICollection_1_get_Count_m43767_MethodInfo,
	&ICollection_1_get_IsReadOnly_m43768_MethodInfo,
	&ICollection_1_Add_m43769_MethodInfo,
	&ICollection_1_Clear_m43770_MethodInfo,
	&ICollection_1_Contains_m43771_MethodInfo,
	&ICollection_1_CopyTo_m43772_MethodInfo,
	&ICollection_1_Remove_m43773_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8053_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8051_InterfacesTypeInfos[] = 
{
	&IEnumerable_t55_il2cpp_TypeInfo,
	&IEnumerable_1_t8053_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8051_0_0_0;
extern Il2CppType ICollection_1_t8051_1_0_0;
struct ICollection_1_t8051;
extern Il2CppGenericClass ICollection_1_t8051_GenericClass;
TypeInfo ICollection_1_t8051_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8051_MethodInfos/* methods */
	, ICollection_1_t8051_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8051_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8051_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8051_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8051_0_0_0/* byval_arg */
	, &ICollection_1_t8051_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8051_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityStandardAssets.ImageEffects.CameraMotionBlur>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityStandardAssets.ImageEffects.CameraMotionBlur>
extern Il2CppType IEnumerator_1_t6348_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m43774_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityStandardAssets.ImageEffects.CameraMotionBlur>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m43774_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8053_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6348_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m43774_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8053_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m43774_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8053_InterfacesTypeInfos[] = 
{
	&IEnumerable_t55_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8053_0_0_0;
extern Il2CppType IEnumerable_1_t8053_1_0_0;
struct IEnumerable_1_t8053;
extern Il2CppGenericClass IEnumerable_1_t8053_GenericClass;
TypeInfo IEnumerable_1_t8053_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8053_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8053_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8053_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8053_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8053_0_0_0/* byval_arg */
	, &IEnumerable_1_t8053_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8053_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t8052_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.CameraMotionBlur>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.CameraMotionBlur>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.CameraMotionBlur>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.CameraMotionBlur>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.CameraMotionBlur>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.CameraMotionBlur>
extern MethodInfo IList_1_get_Item_m43775_MethodInfo;
extern MethodInfo IList_1_set_Item_m43776_MethodInfo;
static PropertyInfo IList_1_t8052____Item_PropertyInfo = 
{
	&IList_1_t8052_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m43775_MethodInfo/* get */
	, &IList_1_set_Item_m43776_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8052_PropertyInfos[] =
{
	&IList_1_t8052____Item_PropertyInfo,
	NULL
};
extern Il2CppType CameraMotionBlur_t237_0_0_0;
static ParameterInfo IList_1_t8052_IList_1_IndexOf_m43777_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CameraMotionBlur_t237_0_0_0},
};
extern Il2CppType Int32_t386_0_0_0;
extern void* RuntimeInvoker_Int32_t386_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m43777_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.CameraMotionBlur>::IndexOf(T)
MethodInfo IList_1_IndexOf_m43777_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8052_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t386_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t386_Object_t/* invoker_method */
	, IList_1_t8052_IList_1_IndexOf_m43777_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m43777_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t386_0_0_0;
extern Il2CppType CameraMotionBlur_t237_0_0_0;
static ParameterInfo IList_1_t8052_IList_1_Insert_m43778_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &CameraMotionBlur_t237_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Int32_t386_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m43778_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.CameraMotionBlur>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m43778_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8052_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Int32_t386_Object_t/* invoker_method */
	, IList_1_t8052_IList_1_Insert_m43778_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m43778_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t386_0_0_0;
static ParameterInfo IList_1_t8052_IList_1_RemoveAt_m43779_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m43779_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.CameraMotionBlur>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m43779_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8052_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Int32_t386/* invoker_method */
	, IList_1_t8052_IList_1_RemoveAt_m43779_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m43779_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t386_0_0_0;
static ParameterInfo IList_1_t8052_IList_1_get_Item_m43775_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
};
extern Il2CppType CameraMotionBlur_t237_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m43775_GenericMethod;
// T System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.CameraMotionBlur>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m43775_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8052_il2cpp_TypeInfo/* declaring_type */
	, &CameraMotionBlur_t237_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t386/* invoker_method */
	, IList_1_t8052_IList_1_get_Item_m43775_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m43775_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t386_0_0_0;
extern Il2CppType CameraMotionBlur_t237_0_0_0;
static ParameterInfo IList_1_t8052_IList_1_set_Item_m43776_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &CameraMotionBlur_t237_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Int32_t386_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m43776_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.CameraMotionBlur>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m43776_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8052_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Int32_t386_Object_t/* invoker_method */
	, IList_1_t8052_IList_1_set_Item_m43776_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m43776_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8052_MethodInfos[] =
{
	&IList_1_IndexOf_m43777_MethodInfo,
	&IList_1_Insert_m43778_MethodInfo,
	&IList_1_RemoveAt_m43779_MethodInfo,
	&IList_1_get_Item_m43775_MethodInfo,
	&IList_1_set_Item_m43776_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8052_InterfacesTypeInfos[] = 
{
	&IEnumerable_t55_il2cpp_TypeInfo,
	&ICollection_1_t8051_il2cpp_TypeInfo,
	&IEnumerable_1_t8053_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8052_0_0_0;
extern Il2CppType IList_1_t8052_1_0_0;
struct IList_1_t8052;
extern Il2CppGenericClass IList_1_t8052_GenericClass;
extern CustomAttributesCache IList_1_t2638__CustomAttributeCache;
TypeInfo IList_1_t8052_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8052_MethodInfos/* methods */
	, IList_1_t8052_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8052_il2cpp_TypeInfo/* element_class */
	, IList_1_t8052_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2638__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8052_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8052_0_0_0/* byval_arg */
	, &IList_1_t8052_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8052_GenericClass/* generic_class */
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
extern TypeInfo CachedInvokableCall_1_t3518_il2cpp_TypeInfo;

extern TypeInfo InvokableCall_1_t3519_il2cpp_TypeInfo;
extern MethodInfo InvokableCall_1__ctor_m19350_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m19352_MethodInfo;


// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityStandardAssets.ImageEffects.CameraMotionBlur>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityStandardAssets.ImageEffects.CameraMotionBlur>::Invoke(System.Object[])
// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<UnityStandardAssets.ImageEffects.CameraMotionBlur>
extern Il2CppType ObjectU5BU5D_t470_0_0_33;
FieldInfo CachedInvokableCall_1_t3518____m_Arg1_1_FieldInfo = 
{
	"m_Arg1"/* name */
	, &ObjectU5BU5D_t470_0_0_33/* type */
	, &CachedInvokableCall_1_t3518_il2cpp_TypeInfo/* parent */
	, offsetof(CachedInvokableCall_1_t3518, ___m_Arg1_1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* CachedInvokableCall_1_t3518_FieldInfos[] =
{
	&CachedInvokableCall_1_t3518____m_Arg1_1_FieldInfo,
	NULL
};
extern Il2CppType Object_t326_0_0_0;
extern Il2CppType MethodInfo_t1253_0_0_0;
extern Il2CppType CameraMotionBlur_t237_0_0_0;
static ParameterInfo CachedInvokableCall_1_t3518_CachedInvokableCall_1__ctor_m19348_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t326_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1253_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &CameraMotionBlur_t237_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod CachedInvokableCall_1__ctor_m19348_GenericMethod;
// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityStandardAssets.ImageEffects.CameraMotionBlur>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
MethodInfo CachedInvokableCall_1__ctor_m19348_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CachedInvokableCall_1__ctor_m15540_gshared/* method */
	, &CachedInvokableCall_1_t3518_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t_Object_t_Object_t/* invoker_method */
	, CachedInvokableCall_1_t3518_CachedInvokableCall_1__ctor_m19348_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &CachedInvokableCall_1__ctor_m19348_GenericMethod/* genericMethod */

};
extern Il2CppType ObjectU5BU5D_t470_0_0_0;
static ParameterInfo CachedInvokableCall_1_t3518_CachedInvokableCall_1_Invoke_m19349_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t470_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod CachedInvokableCall_1_Invoke_m19349_GenericMethod;
// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityStandardAssets.ImageEffects.CameraMotionBlur>::Invoke(System.Object[])
MethodInfo CachedInvokableCall_1_Invoke_m19349_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&CachedInvokableCall_1_Invoke_m15542_gshared/* method */
	, &CachedInvokableCall_1_t3518_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t/* invoker_method */
	, CachedInvokableCall_1_t3518_CachedInvokableCall_1_Invoke_m19349_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &CachedInvokableCall_1_Invoke_m19349_GenericMethod/* genericMethod */

};
static MethodInfo* CachedInvokableCall_1_t3518_MethodInfos[] =
{
	&CachedInvokableCall_1__ctor_m19348_MethodInfo,
	&CachedInvokableCall_1_Invoke_m19349_MethodInfo,
	NULL
};
extern MethodInfo CachedInvokableCall_1_Invoke_m19349_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m19353_MethodInfo;
static MethodInfo* CachedInvokableCall_1_t3518_VTable[] =
{
	&Object_Equals_m1252_MethodInfo,
	&Object_Finalize_m1253_MethodInfo,
	&Object_GetHashCode_m1254_MethodInfo,
	&Object_ToString_m1255_MethodInfo,
	&CachedInvokableCall_1_Invoke_m19349_MethodInfo,
	&InvokableCall_1_Find_m19353_MethodInfo,
};
extern Il2CppType UnityAction_1_t3520_0_0_0;
extern TypeInfo UnityAction_1_t3520_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisCameraMotionBlur_t237_m33302_MethodInfo;
extern TypeInfo CameraMotionBlur_t237_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m19355_MethodInfo;
extern TypeInfo CameraMotionBlur_t237_il2cpp_TypeInfo;
static Il2CppRGCTXData CachedInvokableCall_1_t3518_RGCTXData[8] = 
{
	&UnityAction_1_t3520_0_0_0/* Type Usage */,
	&UnityAction_1_t3520_il2cpp_TypeInfo/* Class Usage */,
	&BaseInvokableCall_ThrowOnInvalidArg_TisCameraMotionBlur_t237_m33302_MethodInfo/* Method Usage */,
	&CameraMotionBlur_t237_il2cpp_TypeInfo/* Class Usage */,
	&UnityAction_1_Invoke_m19355_MethodInfo/* Method Usage */,
	&InvokableCall_1__ctor_m19350_MethodInfo/* Method Usage */,
	&CameraMotionBlur_t237_il2cpp_TypeInfo/* Class Usage */,
	&InvokableCall_1_Invoke_m19352_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType CachedInvokableCall_1_t3518_0_0_0;
extern Il2CppType CachedInvokableCall_1_t3518_1_0_0;
struct CachedInvokableCall_1_t3518;
extern Il2CppGenericClass CachedInvokableCall_1_t3518_GenericClass;
TypeInfo CachedInvokableCall_1_t3518_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "CachedInvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, CachedInvokableCall_1_t3518_MethodInfos/* methods */
	, NULL/* properties */
	, CachedInvokableCall_1_t3518_FieldInfos/* fields */
	, NULL/* events */
	, &InvokableCall_1_t3519_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CachedInvokableCall_1_t3518_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, CachedInvokableCall_1_t3518_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CachedInvokableCall_1_t3518_il2cpp_TypeInfo/* cast_class */
	, &CachedInvokableCall_1_t3518_0_0_0/* byval_arg */
	, &CachedInvokableCall_1_t3518_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &CachedInvokableCall_1_t3518_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, CachedInvokableCall_1_t3518_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CachedInvokableCall_1_t3518)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
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
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo UnityAction_1_t3520_il2cpp_TypeInfo;
struct BaseInvokableCall_t1252;
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<UnityStandardAssets.ImageEffects.CameraMotionBlur>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<UnityStandardAssets.ImageEffects.CameraMotionBlur>(System.Object)
#define BaseInvokableCall_ThrowOnInvalidArg_TisCameraMotionBlur_t237_m33302(__this/* static, unused */, p0, method) (void)BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m31937_gshared((Object_t *)__this/* static, unused */, (Object_t *)p0, method)


// System.Void UnityEngine.Events.InvokableCall`1<UnityStandardAssets.ImageEffects.CameraMotionBlur>::.ctor(System.Object,System.Reflection.MethodInfo)
// System.Void UnityEngine.Events.InvokableCall`1<UnityStandardAssets.ImageEffects.CameraMotionBlur>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
// System.Void UnityEngine.Events.InvokableCall`1<UnityStandardAssets.ImageEffects.CameraMotionBlur>::Invoke(System.Object[])
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityStandardAssets.ImageEffects.CameraMotionBlur>::Find(System.Object,System.Reflection.MethodInfo)
// Metadata Definition UnityEngine.Events.InvokableCall`1<UnityStandardAssets.ImageEffects.CameraMotionBlur>
extern Il2CppType UnityAction_1_t3520_0_0_1;
FieldInfo InvokableCall_1_t3519____Delegate_0_FieldInfo = 
{
	"Delegate"/* name */
	, &UnityAction_1_t3520_0_0_1/* type */
	, &InvokableCall_1_t3519_il2cpp_TypeInfo/* parent */
	, offsetof(InvokableCall_1_t3519, ___Delegate_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InvokableCall_1_t3519_FieldInfos[] =
{
	&InvokableCall_1_t3519____Delegate_0_FieldInfo,
	NULL
};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t1253_0_0_0;
static ParameterInfo InvokableCall_1_t3519_InvokableCall_1__ctor_m19350_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1253_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InvokableCall_1__ctor_m19350_GenericMethod;
// System.Void UnityEngine.Events.InvokableCall`1<UnityStandardAssets.ImageEffects.CameraMotionBlur>::.ctor(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1__ctor_m19350_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m15543_gshared/* method */
	, &InvokableCall_1_t3519_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t3519_InvokableCall_1__ctor_m19350_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InvokableCall_1__ctor_m19350_GenericMethod/* genericMethod */

};
extern Il2CppType UnityAction_1_t3520_0_0_0;
static ParameterInfo InvokableCall_1_t3519_InvokableCall_1__ctor_m19351_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &UnityAction_1_t3520_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InvokableCall_1__ctor_m19351_GenericMethod;
// System.Void UnityEngine.Events.InvokableCall`1<UnityStandardAssets.ImageEffects.CameraMotionBlur>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
MethodInfo InvokableCall_1__ctor_m19351_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m15544_gshared/* method */
	, &InvokableCall_1_t3519_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t/* invoker_method */
	, InvokableCall_1_t3519_InvokableCall_1__ctor_m19351_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InvokableCall_1__ctor_m19351_GenericMethod/* genericMethod */

};
extern Il2CppType ObjectU5BU5D_t470_0_0_0;
static ParameterInfo InvokableCall_1_t3519_InvokableCall_1_Invoke_m19352_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t470_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InvokableCall_1_Invoke_m19352_GenericMethod;
// System.Void UnityEngine.Events.InvokableCall`1<UnityStandardAssets.ImageEffects.CameraMotionBlur>::Invoke(System.Object[])
MethodInfo InvokableCall_1_Invoke_m19352_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&InvokableCall_1_Invoke_m15545_gshared/* method */
	, &InvokableCall_1_t3519_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t/* invoker_method */
	, InvokableCall_1_t3519_InvokableCall_1_Invoke_m19352_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InvokableCall_1_Invoke_m19352_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t1253_0_0_0;
static ParameterInfo InvokableCall_1_t3519_InvokableCall_1_Find_m19353_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1253_0_0_0},
};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InvokableCall_1_Find_m19353_GenericMethod;
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityStandardAssets.ImageEffects.CameraMotionBlur>::Find(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1_Find_m19353_MethodInfo = 
{
	"Find"/* name */
	, (methodPointerType)&InvokableCall_1_Find_m15546_gshared/* method */
	, &InvokableCall_1_t3519_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t379_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t379_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t3519_InvokableCall_1_Find_m19353_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InvokableCall_1_Find_m19353_GenericMethod/* genericMethod */

};
static MethodInfo* InvokableCall_1_t3519_MethodInfos[] =
{
	&InvokableCall_1__ctor_m19350_MethodInfo,
	&InvokableCall_1__ctor_m19351_MethodInfo,
	&InvokableCall_1_Invoke_m19352_MethodInfo,
	&InvokableCall_1_Find_m19353_MethodInfo,
	NULL
};
static MethodInfo* InvokableCall_1_t3519_VTable[] =
{
	&Object_Equals_m1252_MethodInfo,
	&Object_Finalize_m1253_MethodInfo,
	&Object_GetHashCode_m1254_MethodInfo,
	&Object_ToString_m1255_MethodInfo,
	&InvokableCall_1_Invoke_m19352_MethodInfo,
	&InvokableCall_1_Find_m19353_MethodInfo,
};
extern TypeInfo UnityAction_1_t3520_il2cpp_TypeInfo;
extern TypeInfo CameraMotionBlur_t237_il2cpp_TypeInfo;
static Il2CppRGCTXData InvokableCall_1_t3519_RGCTXData[5] = 
{
	&UnityAction_1_t3520_0_0_0/* Type Usage */,
	&UnityAction_1_t3520_il2cpp_TypeInfo/* Class Usage */,
	&BaseInvokableCall_ThrowOnInvalidArg_TisCameraMotionBlur_t237_m33302_MethodInfo/* Method Usage */,
	&CameraMotionBlur_t237_il2cpp_TypeInfo/* Class Usage */,
	&UnityAction_1_Invoke_m19355_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType InvokableCall_1_t3519_0_0_0;
extern Il2CppType InvokableCall_1_t3519_1_0_0;
struct InvokableCall_1_t3519;
extern Il2CppGenericClass InvokableCall_1_t3519_GenericClass;
TypeInfo InvokableCall_1_t3519_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "InvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, InvokableCall_1_t3519_MethodInfos/* methods */
	, NULL/* properties */
	, InvokableCall_1_t3519_FieldInfos/* fields */
	, NULL/* events */
	, &BaseInvokableCall_t1252_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &InvokableCall_1_t3519_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, InvokableCall_1_t3519_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InvokableCall_1_t3519_il2cpp_TypeInfo/* cast_class */
	, &InvokableCall_1_t3519_0_0_0/* byval_arg */
	, &InvokableCall_1_t3519_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &InvokableCall_1_t3519_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InvokableCall_1_t3519_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InvokableCall_1_t3519)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
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
	, 4/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.Events.UnityAction`1<UnityStandardAssets.ImageEffects.CameraMotionBlur>::.ctor(System.Object,System.IntPtr)
// System.Void UnityEngine.Events.UnityAction`1<UnityStandardAssets.ImageEffects.CameraMotionBlur>::Invoke(T0)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityStandardAssets.ImageEffects.CameraMotionBlur>::BeginInvoke(T0,System.AsyncCallback,System.Object)
// System.Void UnityEngine.Events.UnityAction`1<UnityStandardAssets.ImageEffects.CameraMotionBlur>::EndInvoke(System.IAsyncResult)
// Metadata Definition UnityEngine.Events.UnityAction`1<UnityStandardAssets.ImageEffects.CameraMotionBlur>
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t35_0_0_0;
static ParameterInfo UnityAction_1_t3520_UnityAction_1__ctor_m19354_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &IntPtr_t35_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t_IntPtr_t35 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod UnityAction_1__ctor_m19354_GenericMethod;
// System.Void UnityEngine.Events.UnityAction`1<UnityStandardAssets.ImageEffects.CameraMotionBlur>::.ctor(System.Object,System.IntPtr)
MethodInfo UnityAction_1__ctor_m19354_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UnityAction_1__ctor_m15547_gshared/* method */
	, &UnityAction_1_t3520_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t_IntPtr_t35/* invoker_method */
	, UnityAction_1_t3520_UnityAction_1__ctor_m19354_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &UnityAction_1__ctor_m19354_GenericMethod/* genericMethod */

};
extern Il2CppType CameraMotionBlur_t237_0_0_0;
static ParameterInfo UnityAction_1_t3520_UnityAction_1_Invoke_m19355_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &CameraMotionBlur_t237_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod UnityAction_1_Invoke_m19355_GenericMethod;
// System.Void UnityEngine.Events.UnityAction`1<UnityStandardAssets.ImageEffects.CameraMotionBlur>::Invoke(T0)
MethodInfo UnityAction_1_Invoke_m19355_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&UnityAction_1_Invoke_m15548_gshared/* method */
	, &UnityAction_1_t3520_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t/* invoker_method */
	, UnityAction_1_t3520_UnityAction_1_Invoke_m19355_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 10/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &UnityAction_1_Invoke_m19355_GenericMethod/* genericMethod */

};
extern Il2CppType CameraMotionBlur_t237_0_0_0;
extern Il2CppType AsyncCallback_t32_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo UnityAction_1_t3520_UnityAction_1_BeginInvoke_m19356_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &CameraMotionBlur_t237_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &AsyncCallback_t32_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType IAsyncResult_t31_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod UnityAction_1_BeginInvoke_m19356_GenericMethod;
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityStandardAssets.ImageEffects.CameraMotionBlur>::BeginInvoke(T0,System.AsyncCallback,System.Object)
MethodInfo UnityAction_1_BeginInvoke_m19356_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&UnityAction_1_BeginInvoke_m15549_gshared/* method */
	, &UnityAction_1_t3520_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t31_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, UnityAction_1_t3520_UnityAction_1_BeginInvoke_m19356_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &UnityAction_1_BeginInvoke_m19356_GenericMethod/* genericMethod */

};
extern Il2CppType IAsyncResult_t31_0_0_0;
static ParameterInfo UnityAction_1_t3520_UnityAction_1_EndInvoke_m19357_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &IAsyncResult_t31_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod UnityAction_1_EndInvoke_m19357_GenericMethod;
// System.Void UnityEngine.Events.UnityAction`1<UnityStandardAssets.ImageEffects.CameraMotionBlur>::EndInvoke(System.IAsyncResult)
MethodInfo UnityAction_1_EndInvoke_m19357_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&UnityAction_1_EndInvoke_m15550_gshared/* method */
	, &UnityAction_1_t3520_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t/* invoker_method */
	, UnityAction_1_t3520_UnityAction_1_EndInvoke_m19357_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &UnityAction_1_EndInvoke_m19357_GenericMethod/* genericMethod */

};
static MethodInfo* UnityAction_1_t3520_MethodInfos[] =
{
	&UnityAction_1__ctor_m19354_MethodInfo,
	&UnityAction_1_Invoke_m19355_MethodInfo,
	&UnityAction_1_BeginInvoke_m19356_MethodInfo,
	&UnityAction_1_EndInvoke_m19357_MethodInfo,
	NULL
};
extern MethodInfo UnityAction_1_BeginInvoke_m19356_MethodInfo;
extern MethodInfo UnityAction_1_EndInvoke_m19357_MethodInfo;
static MethodInfo* UnityAction_1_t3520_VTable[] =
{
	&MulticastDelegate_Equals_m1395_MethodInfo,
	&Object_Finalize_m1253_MethodInfo,
	&MulticastDelegate_GetHashCode_m1396_MethodInfo,
	&Object_ToString_m1255_MethodInfo,
	&MulticastDelegate_GetObjectData_m1397_MethodInfo,
	&Delegate_Clone_m1398_MethodInfo,
	&MulticastDelegate_GetObjectData_m1397_MethodInfo,
	&MulticastDelegate_GetInvocationList_m1399_MethodInfo,
	&MulticastDelegate_CombineImpl_m1400_MethodInfo,
	&MulticastDelegate_RemoveImpl_m1401_MethodInfo,
	&UnityAction_1_Invoke_m19355_MethodInfo,
	&UnityAction_1_BeginInvoke_m19356_MethodInfo,
	&UnityAction_1_EndInvoke_m19357_MethodInfo,
};
static Il2CppInterfaceOffsetPair UnityAction_1_t3520_InterfacesOffsets[] = 
{
	{ &ICloneable_t434_il2cpp_TypeInfo, 4},
	{ &ISerializable_t435_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType UnityAction_1_t3520_1_0_0;
struct UnityAction_1_t3520;
extern Il2CppGenericClass UnityAction_1_t3520_GenericClass;
TypeInfo UnityAction_1_t3520_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnityAction`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, UnityAction_1_t3520_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MulticastDelegate_t34_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &UnityAction_1_t3520_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, UnityAction_1_t3520_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &UnityAction_1_t3520_il2cpp_TypeInfo/* cast_class */
	, &UnityAction_1_t3520_0_0_0/* byval_arg */
	, &UnityAction_1_t3520_1_0_0/* this_arg */
	, UnityAction_1_t3520_InterfacesOffsets/* interface_offsets */
	, &UnityAction_1_t3520_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UnityAction_1_t3520)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 257/* flags */
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
	, 4/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 13/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t6350_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<UnityEngine.Camera>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.Camera>
extern MethodInfo IEnumerator_1_get_Current_m43780_MethodInfo;
static PropertyInfo IEnumerator_1_t6350____Current_PropertyInfo = 
{
	&IEnumerator_1_t6350_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m43780_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6350_PropertyInfos[] =
{
	&IEnumerator_1_t6350____Current_PropertyInfo,
	NULL
};
extern Il2CppType Camera_t236_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m43780_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<UnityEngine.Camera>::get_Current()
MethodInfo IEnumerator_1_get_Current_m43780_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6350_il2cpp_TypeInfo/* declaring_type */
	, &Camera_t236_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m43780_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6350_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m43780_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6350_InterfacesTypeInfos[] = 
{
	&IEnumerator_t26_il2cpp_TypeInfo,
	&IDisposable_t444_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6350_0_0_0;
extern Il2CppType IEnumerator_1_t6350_1_0_0;
struct IEnumerator_1_t6350;
extern Il2CppGenericClass IEnumerator_1_t6350_GenericClass;
TypeInfo IEnumerator_1_t6350_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6350_MethodInfos/* methods */
	, IEnumerator_1_t6350_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6350_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6350_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6350_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6350_0_0_0/* byval_arg */
	, &IEnumerator_1_t6350_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6350_GenericClass/* generic_class */
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
extern TypeInfo InternalEnumerator_1_t3521_il2cpp_TypeInfo;

extern TypeInfo Camera_t236_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m19362_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisCamera_t236_m33304_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.Camera>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.Camera>(System.Int32)
#define Array_InternalArray__get_Item_TisCamera_t236_m33304(__this, p0, method) (Camera_t236 *)Array_InternalArray__get_Item_TisObject_t_m31403_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<UnityEngine.Camera>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.Camera>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Camera>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.Camera>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.Camera>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.Camera>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3521____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3521_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3521, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t386_0_0_1;
FieldInfo InternalEnumerator_1_t3521____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t386_0_0_1/* type */
	, &InternalEnumerator_1_t3521_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3521, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3521_FieldInfos[] =
{
	&InternalEnumerator_1_t3521____array_0_FieldInfo,
	&InternalEnumerator_1_t3521____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19359_MethodInfo;
static PropertyInfo InternalEnumerator_1_t3521____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3521_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19359_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3521____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3521_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m19362_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3521_PropertyInfos[] =
{
	&InternalEnumerator_1_t3521____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3521____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3521_InternalEnumerator_1__ctor_m19358_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m19358_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Camera>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m19358_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m13935_gshared/* method */
	, &InternalEnumerator_1_t3521_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t/* invoker_method */
	, InternalEnumerator_1_t3521_InternalEnumerator_1__ctor_m19358_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m19358_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19359_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<UnityEngine.Camera>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19359_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13937_gshared/* method */
	, &InternalEnumerator_1_t3521_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19359_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m19360_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Camera>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m19360_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m13939_gshared/* method */
	, &InternalEnumerator_1_t3521_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m19360_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m19361_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.Camera>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m19361_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m13941_gshared/* method */
	, &InternalEnumerator_1_t3521_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m19361_GenericMethod/* genericMethod */

};
extern Il2CppType Camera_t236_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19362_GenericMethod;
// T System.Array/InternalEnumerator`1<UnityEngine.Camera>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m19362_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m13943_gshared/* method */
	, &InternalEnumerator_1_t3521_il2cpp_TypeInfo/* declaring_type */
	, &Camera_t236_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m19362_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3521_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m19358_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19359_MethodInfo,
	&InternalEnumerator_1_Dispose_m19360_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19361_MethodInfo,
	&InternalEnumerator_1_get_Current_m19362_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m19361_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m19360_MethodInfo;
static MethodInfo* InternalEnumerator_1_t3521_VTable[] =
{
	&ValueType_Equals_m2156_MethodInfo,
	&Object_Finalize_m1253_MethodInfo,
	&ValueType_GetHashCode_m2157_MethodInfo,
	&ValueType_ToString_m2158_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19359_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19361_MethodInfo,
	&InternalEnumerator_1_Dispose_m19360_MethodInfo,
	&InternalEnumerator_1_get_Current_m19362_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3521_InterfacesTypeInfos[] = 
{
	&IEnumerator_t26_il2cpp_TypeInfo,
	&IDisposable_t444_il2cpp_TypeInfo,
	&IEnumerator_1_t6350_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3521_InterfacesOffsets[] = 
{
	{ &IEnumerator_t26_il2cpp_TypeInfo, 4},
	{ &IDisposable_t444_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6350_il2cpp_TypeInfo, 7},
};
extern TypeInfo Camera_t236_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t3521_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m19362_MethodInfo/* Method Usage */,
	&Camera_t236_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisCamera_t236_m33304_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3521_0_0_0;
extern Il2CppType InternalEnumerator_1_t3521_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3521_GenericClass;
TypeInfo InternalEnumerator_1_t3521_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3521_MethodInfos/* methods */
	, InternalEnumerator_1_t3521_PropertyInfos/* properties */
	, InternalEnumerator_1_t3521_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t550_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3521_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3521_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3521_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3521_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3521_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3521_1_0_0/* this_arg */
	, InternalEnumerator_1_t3521_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3521_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t3521_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3521)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8054_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Camera>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Camera>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Camera>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Camera>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Camera>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Camera>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Camera>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.Camera>
extern MethodInfo ICollection_1_get_Count_m43781_MethodInfo;
static PropertyInfo ICollection_1_t8054____Count_PropertyInfo = 
{
	&ICollection_1_t8054_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m43781_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m43782_MethodInfo;
static PropertyInfo ICollection_1_t8054____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8054_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m43782_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8054_PropertyInfos[] =
{
	&ICollection_1_t8054____Count_PropertyInfo,
	&ICollection_1_t8054____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t386_0_0_0;
extern void* RuntimeInvoker_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m43781_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Camera>::get_Count()
MethodInfo ICollection_1_get_Count_m43781_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8054_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m43781_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m43782_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Camera>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m43782_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8054_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m43782_GenericMethod/* genericMethod */

};
extern Il2CppType Camera_t236_0_0_0;
extern Il2CppType Camera_t236_0_0_0;
static ParameterInfo ICollection_1_t8054_ICollection_1_Add_m43783_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Camera_t236_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m43783_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Camera>::Add(T)
MethodInfo ICollection_1_Add_m43783_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8054_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t/* invoker_method */
	, ICollection_1_t8054_ICollection_1_Add_m43783_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m43783_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m43784_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Camera>::Clear()
MethodInfo ICollection_1_Clear_m43784_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8054_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m43784_GenericMethod/* genericMethod */

};
extern Il2CppType Camera_t236_0_0_0;
static ParameterInfo ICollection_1_t8054_ICollection_1_Contains_m43785_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Camera_t236_0_0_0},
};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m43785_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Camera>::Contains(T)
MethodInfo ICollection_1_Contains_m43785_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8054_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t379_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t379_Object_t/* invoker_method */
	, ICollection_1_t8054_ICollection_1_Contains_m43785_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m43785_GenericMethod/* genericMethod */

};
extern Il2CppType CameraU5BU5D_t1156_0_0_0;
extern Il2CppType CameraU5BU5D_t1156_0_0_0;
extern Il2CppType Int32_t386_0_0_0;
static ParameterInfo ICollection_1_t8054_ICollection_1_CopyTo_m43786_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &CameraU5BU5D_t1156_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m43786_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Camera>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m43786_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8054_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t_Int32_t386/* invoker_method */
	, ICollection_1_t8054_ICollection_1_CopyTo_m43786_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m43786_GenericMethod/* genericMethod */

};
extern Il2CppType Camera_t236_0_0_0;
static ParameterInfo ICollection_1_t8054_ICollection_1_Remove_m43787_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Camera_t236_0_0_0},
};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m43787_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Camera>::Remove(T)
MethodInfo ICollection_1_Remove_m43787_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8054_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t379_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t379_Object_t/* invoker_method */
	, ICollection_1_t8054_ICollection_1_Remove_m43787_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m43787_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8054_MethodInfos[] =
{
	&ICollection_1_get_Count_m43781_MethodInfo,
	&ICollection_1_get_IsReadOnly_m43782_MethodInfo,
	&ICollection_1_Add_m43783_MethodInfo,
	&ICollection_1_Clear_m43784_MethodInfo,
	&ICollection_1_Contains_m43785_MethodInfo,
	&ICollection_1_CopyTo_m43786_MethodInfo,
	&ICollection_1_Remove_m43787_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8056_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8054_InterfacesTypeInfos[] = 
{
	&IEnumerable_t55_il2cpp_TypeInfo,
	&IEnumerable_1_t8056_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8054_0_0_0;
extern Il2CppType ICollection_1_t8054_1_0_0;
struct ICollection_1_t8054;
extern Il2CppGenericClass ICollection_1_t8054_GenericClass;
TypeInfo ICollection_1_t8054_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8054_MethodInfos/* methods */
	, ICollection_1_t8054_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8054_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8054_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8054_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8054_0_0_0/* byval_arg */
	, &ICollection_1_t8054_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8054_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Camera>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.Camera>
extern Il2CppType IEnumerator_1_t6350_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m43788_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Camera>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m43788_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8056_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6350_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m43788_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8056_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m43788_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8056_InterfacesTypeInfos[] = 
{
	&IEnumerable_t55_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8056_0_0_0;
extern Il2CppType IEnumerable_1_t8056_1_0_0;
struct IEnumerable_1_t8056;
extern Il2CppGenericClass IEnumerable_1_t8056_GenericClass;
TypeInfo IEnumerable_1_t8056_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8056_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8056_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8056_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8056_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8056_0_0_0/* byval_arg */
	, &IEnumerable_1_t8056_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8056_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t8055_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.Camera>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Camera>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Camera>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.Camera>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Camera>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.Camera>
extern MethodInfo IList_1_get_Item_m43789_MethodInfo;
extern MethodInfo IList_1_set_Item_m43790_MethodInfo;
static PropertyInfo IList_1_t8055____Item_PropertyInfo = 
{
	&IList_1_t8055_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m43789_MethodInfo/* get */
	, &IList_1_set_Item_m43790_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8055_PropertyInfos[] =
{
	&IList_1_t8055____Item_PropertyInfo,
	NULL
};
extern Il2CppType Camera_t236_0_0_0;
static ParameterInfo IList_1_t8055_IList_1_IndexOf_m43791_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Camera_t236_0_0_0},
};
extern Il2CppType Int32_t386_0_0_0;
extern void* RuntimeInvoker_Int32_t386_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m43791_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<UnityEngine.Camera>::IndexOf(T)
MethodInfo IList_1_IndexOf_m43791_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8055_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t386_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t386_Object_t/* invoker_method */
	, IList_1_t8055_IList_1_IndexOf_m43791_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m43791_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t386_0_0_0;
extern Il2CppType Camera_t236_0_0_0;
static ParameterInfo IList_1_t8055_IList_1_Insert_m43792_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &Camera_t236_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Int32_t386_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m43792_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityEngine.Camera>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m43792_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8055_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Int32_t386_Object_t/* invoker_method */
	, IList_1_t8055_IList_1_Insert_m43792_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m43792_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t386_0_0_0;
static ParameterInfo IList_1_t8055_IList_1_RemoveAt_m43793_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m43793_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityEngine.Camera>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m43793_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8055_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Int32_t386/* invoker_method */
	, IList_1_t8055_IList_1_RemoveAt_m43793_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m43793_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t386_0_0_0;
static ParameterInfo IList_1_t8055_IList_1_get_Item_m43789_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
};
extern Il2CppType Camera_t236_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m43789_GenericMethod;
// T System.Collections.Generic.IList`1<UnityEngine.Camera>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m43789_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8055_il2cpp_TypeInfo/* declaring_type */
	, &Camera_t236_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t386/* invoker_method */
	, IList_1_t8055_IList_1_get_Item_m43789_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m43789_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t386_0_0_0;
extern Il2CppType Camera_t236_0_0_0;
static ParameterInfo IList_1_t8055_IList_1_set_Item_m43790_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &Camera_t236_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Int32_t386_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m43790_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityEngine.Camera>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m43790_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8055_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Int32_t386_Object_t/* invoker_method */
	, IList_1_t8055_IList_1_set_Item_m43790_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m43790_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8055_MethodInfos[] =
{
	&IList_1_IndexOf_m43791_MethodInfo,
	&IList_1_Insert_m43792_MethodInfo,
	&IList_1_RemoveAt_m43793_MethodInfo,
	&IList_1_get_Item_m43789_MethodInfo,
	&IList_1_set_Item_m43790_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8055_InterfacesTypeInfos[] = 
{
	&IEnumerable_t55_il2cpp_TypeInfo,
	&ICollection_1_t8054_il2cpp_TypeInfo,
	&IEnumerable_1_t8056_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8055_0_0_0;
extern Il2CppType IList_1_t8055_1_0_0;
struct IList_1_t8055;
extern Il2CppGenericClass IList_1_t8055_GenericClass;
extern CustomAttributesCache IList_1_t2638__CustomAttributeCache;
TypeInfo IList_1_t8055_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8055_MethodInfos/* methods */
	, IList_1_t8055_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8055_il2cpp_TypeInfo/* element_class */
	, IList_1_t8055_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2638__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8055_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8055_0_0_0/* byval_arg */
	, &IList_1_t8055_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8055_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t6352_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<UnityStandardAssets.ImageEffects.CameraMotionBlur/MotionBlurFilter>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityStandardAssets.ImageEffects.CameraMotionBlur/MotionBlurFilter>
extern MethodInfo IEnumerator_1_get_Current_m43794_MethodInfo;
static PropertyInfo IEnumerator_1_t6352____Current_PropertyInfo = 
{
	&IEnumerator_1_t6352_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m43794_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6352_PropertyInfos[] =
{
	&IEnumerator_1_t6352____Current_PropertyInfo,
	NULL
};
extern Il2CppType MotionBlurFilter_t234_0_0_0;
extern void* RuntimeInvoker_MotionBlurFilter_t234 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m43794_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<UnityStandardAssets.ImageEffects.CameraMotionBlur/MotionBlurFilter>::get_Current()
MethodInfo IEnumerator_1_get_Current_m43794_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6352_il2cpp_TypeInfo/* declaring_type */
	, &MotionBlurFilter_t234_0_0_0/* return_type */
	, RuntimeInvoker_MotionBlurFilter_t234/* invoker_method */
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
	, &IEnumerator_1_get_Current_m43794_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6352_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m43794_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6352_InterfacesTypeInfos[] = 
{
	&IEnumerator_t26_il2cpp_TypeInfo,
	&IDisposable_t444_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6352_0_0_0;
extern Il2CppType IEnumerator_1_t6352_1_0_0;
struct IEnumerator_1_t6352;
extern Il2CppGenericClass IEnumerator_1_t6352_GenericClass;
TypeInfo IEnumerator_1_t6352_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6352_MethodInfos/* methods */
	, IEnumerator_1_t6352_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6352_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6352_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6352_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6352_0_0_0/* byval_arg */
	, &IEnumerator_1_t6352_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6352_GenericClass/* generic_class */
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
extern TypeInfo InternalEnumerator_1_t3522_il2cpp_TypeInfo;

extern TypeInfo MotionBlurFilter_t234_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m19367_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisMotionBlurFilter_t234_m33315_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityStandardAssets.ImageEffects.CameraMotionBlur/MotionBlurFilter>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityStandardAssets.ImageEffects.CameraMotionBlur/MotionBlurFilter>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisMotionBlurFilter_t234_m33315 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.CameraMotionBlur/MotionBlurFilter>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m19363_MethodInfo;
 void InternalEnumerator_1__ctor_m19363 (InternalEnumerator_1_t3522 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.CameraMotionBlur/MotionBlurFilter>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19364_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19364 (InternalEnumerator_1_t3522 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m19367(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m19367_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&MotionBlurFilter_t234_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.CameraMotionBlur/MotionBlurFilter>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m19365_MethodInfo;
 void InternalEnumerator_1_Dispose_m19365 (InternalEnumerator_1_t3522 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.CameraMotionBlur/MotionBlurFilter>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m19366_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m19366 (InternalEnumerator_1_t3522 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.CameraMotionBlur/MotionBlurFilter>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m19367 (InternalEnumerator_1_t3522 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisMotionBlurFilter_t234_m33315(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisMotionBlurFilter_t234_m33315_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.CameraMotionBlur/MotionBlurFilter>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3522____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3522_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3522, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t386_0_0_1;
FieldInfo InternalEnumerator_1_t3522____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t386_0_0_1/* type */
	, &InternalEnumerator_1_t3522_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3522, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3522_FieldInfos[] =
{
	&InternalEnumerator_1_t3522____array_0_FieldInfo,
	&InternalEnumerator_1_t3522____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t3522____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3522_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19364_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3522____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3522_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m19367_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3522_PropertyInfos[] =
{
	&InternalEnumerator_1_t3522____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3522____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3522_InternalEnumerator_1__ctor_m19363_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m19363_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.CameraMotionBlur/MotionBlurFilter>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m19363_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m19363/* method */
	, &InternalEnumerator_1_t3522_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t/* invoker_method */
	, InternalEnumerator_1_t3522_InternalEnumerator_1__ctor_m19363_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m19363_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19364_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.CameraMotionBlur/MotionBlurFilter>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19364_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19364/* method */
	, &InternalEnumerator_1_t3522_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19364_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m19365_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.CameraMotionBlur/MotionBlurFilter>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m19365_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m19365/* method */
	, &InternalEnumerator_1_t3522_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m19365_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m19366_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.CameraMotionBlur/MotionBlurFilter>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m19366_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m19366/* method */
	, &InternalEnumerator_1_t3522_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m19366_GenericMethod/* genericMethod */

};
extern Il2CppType MotionBlurFilter_t234_0_0_0;
extern void* RuntimeInvoker_MotionBlurFilter_t234 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19367_GenericMethod;
// T System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.CameraMotionBlur/MotionBlurFilter>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m19367_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m19367/* method */
	, &InternalEnumerator_1_t3522_il2cpp_TypeInfo/* declaring_type */
	, &MotionBlurFilter_t234_0_0_0/* return_type */
	, RuntimeInvoker_MotionBlurFilter_t234/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m19367_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3522_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m19363_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19364_MethodInfo,
	&InternalEnumerator_1_Dispose_m19365_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19366_MethodInfo,
	&InternalEnumerator_1_get_Current_m19367_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t3522_VTable[] =
{
	&ValueType_Equals_m2156_MethodInfo,
	&Object_Finalize_m1253_MethodInfo,
	&ValueType_GetHashCode_m2157_MethodInfo,
	&ValueType_ToString_m2158_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19364_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19366_MethodInfo,
	&InternalEnumerator_1_Dispose_m19365_MethodInfo,
	&InternalEnumerator_1_get_Current_m19367_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3522_InterfacesTypeInfos[] = 
{
	&IEnumerator_t26_il2cpp_TypeInfo,
	&IDisposable_t444_il2cpp_TypeInfo,
	&IEnumerator_1_t6352_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3522_InterfacesOffsets[] = 
{
	{ &IEnumerator_t26_il2cpp_TypeInfo, 4},
	{ &IDisposable_t444_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6352_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3522_0_0_0;
extern Il2CppType InternalEnumerator_1_t3522_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3522_GenericClass;
TypeInfo InternalEnumerator_1_t3522_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3522_MethodInfos/* methods */
	, InternalEnumerator_1_t3522_PropertyInfos/* properties */
	, InternalEnumerator_1_t3522_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t550_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3522_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3522_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3522_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3522_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3522_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3522_1_0_0/* this_arg */
	, InternalEnumerator_1_t3522_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3522_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3522)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8057_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.CameraMotionBlur/MotionBlurFilter>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.CameraMotionBlur/MotionBlurFilter>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.CameraMotionBlur/MotionBlurFilter>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.CameraMotionBlur/MotionBlurFilter>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.CameraMotionBlur/MotionBlurFilter>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.CameraMotionBlur/MotionBlurFilter>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.CameraMotionBlur/MotionBlurFilter>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.CameraMotionBlur/MotionBlurFilter>
extern MethodInfo ICollection_1_get_Count_m43795_MethodInfo;
static PropertyInfo ICollection_1_t8057____Count_PropertyInfo = 
{
	&ICollection_1_t8057_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m43795_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m43796_MethodInfo;
static PropertyInfo ICollection_1_t8057____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8057_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m43796_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8057_PropertyInfos[] =
{
	&ICollection_1_t8057____Count_PropertyInfo,
	&ICollection_1_t8057____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t386_0_0_0;
extern void* RuntimeInvoker_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m43795_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.CameraMotionBlur/MotionBlurFilter>::get_Count()
MethodInfo ICollection_1_get_Count_m43795_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8057_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m43795_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m43796_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.CameraMotionBlur/MotionBlurFilter>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m43796_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8057_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m43796_GenericMethod/* genericMethod */

};
extern Il2CppType MotionBlurFilter_t234_0_0_0;
extern Il2CppType MotionBlurFilter_t234_0_0_0;
static ParameterInfo ICollection_1_t8057_ICollection_1_Add_m43797_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MotionBlurFilter_t234_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m43797_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.CameraMotionBlur/MotionBlurFilter>::Add(T)
MethodInfo ICollection_1_Add_m43797_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8057_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Int32_t386/* invoker_method */
	, ICollection_1_t8057_ICollection_1_Add_m43797_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m43797_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m43798_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.CameraMotionBlur/MotionBlurFilter>::Clear()
MethodInfo ICollection_1_Clear_m43798_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8057_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m43798_GenericMethod/* genericMethod */

};
extern Il2CppType MotionBlurFilter_t234_0_0_0;
static ParameterInfo ICollection_1_t8057_ICollection_1_Contains_m43799_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MotionBlurFilter_t234_0_0_0},
};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m43799_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.CameraMotionBlur/MotionBlurFilter>::Contains(T)
MethodInfo ICollection_1_Contains_m43799_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8057_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t379_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t379_Int32_t386/* invoker_method */
	, ICollection_1_t8057_ICollection_1_Contains_m43799_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m43799_GenericMethod/* genericMethod */

};
extern Il2CppType MotionBlurFilterU5BU5D_t5723_0_0_0;
extern Il2CppType MotionBlurFilterU5BU5D_t5723_0_0_0;
extern Il2CppType Int32_t386_0_0_0;
static ParameterInfo ICollection_1_t8057_ICollection_1_CopyTo_m43800_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &MotionBlurFilterU5BU5D_t5723_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m43800_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.CameraMotionBlur/MotionBlurFilter>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m43800_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8057_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t_Int32_t386/* invoker_method */
	, ICollection_1_t8057_ICollection_1_CopyTo_m43800_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m43800_GenericMethod/* genericMethod */

};
extern Il2CppType MotionBlurFilter_t234_0_0_0;
static ParameterInfo ICollection_1_t8057_ICollection_1_Remove_m43801_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MotionBlurFilter_t234_0_0_0},
};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m43801_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.CameraMotionBlur/MotionBlurFilter>::Remove(T)
MethodInfo ICollection_1_Remove_m43801_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8057_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t379_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t379_Int32_t386/* invoker_method */
	, ICollection_1_t8057_ICollection_1_Remove_m43801_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m43801_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8057_MethodInfos[] =
{
	&ICollection_1_get_Count_m43795_MethodInfo,
	&ICollection_1_get_IsReadOnly_m43796_MethodInfo,
	&ICollection_1_Add_m43797_MethodInfo,
	&ICollection_1_Clear_m43798_MethodInfo,
	&ICollection_1_Contains_m43799_MethodInfo,
	&ICollection_1_CopyTo_m43800_MethodInfo,
	&ICollection_1_Remove_m43801_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8059_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8057_InterfacesTypeInfos[] = 
{
	&IEnumerable_t55_il2cpp_TypeInfo,
	&IEnumerable_1_t8059_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8057_0_0_0;
extern Il2CppType ICollection_1_t8057_1_0_0;
struct ICollection_1_t8057;
extern Il2CppGenericClass ICollection_1_t8057_GenericClass;
TypeInfo ICollection_1_t8057_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8057_MethodInfos/* methods */
	, ICollection_1_t8057_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8057_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8057_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8057_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8057_0_0_0/* byval_arg */
	, &ICollection_1_t8057_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8057_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityStandardAssets.ImageEffects.CameraMotionBlur/MotionBlurFilter>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityStandardAssets.ImageEffects.CameraMotionBlur/MotionBlurFilter>
extern Il2CppType IEnumerator_1_t6352_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m43802_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityStandardAssets.ImageEffects.CameraMotionBlur/MotionBlurFilter>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m43802_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8059_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6352_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m43802_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8059_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m43802_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8059_InterfacesTypeInfos[] = 
{
	&IEnumerable_t55_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8059_0_0_0;
extern Il2CppType IEnumerable_1_t8059_1_0_0;
struct IEnumerable_1_t8059;
extern Il2CppGenericClass IEnumerable_1_t8059_GenericClass;
TypeInfo IEnumerable_1_t8059_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8059_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8059_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8059_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8059_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8059_0_0_0/* byval_arg */
	, &IEnumerable_1_t8059_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8059_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t8058_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.CameraMotionBlur/MotionBlurFilter>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.CameraMotionBlur/MotionBlurFilter>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.CameraMotionBlur/MotionBlurFilter>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.CameraMotionBlur/MotionBlurFilter>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.CameraMotionBlur/MotionBlurFilter>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.CameraMotionBlur/MotionBlurFilter>
extern MethodInfo IList_1_get_Item_m43803_MethodInfo;
extern MethodInfo IList_1_set_Item_m43804_MethodInfo;
static PropertyInfo IList_1_t8058____Item_PropertyInfo = 
{
	&IList_1_t8058_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m43803_MethodInfo/* get */
	, &IList_1_set_Item_m43804_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8058_PropertyInfos[] =
{
	&IList_1_t8058____Item_PropertyInfo,
	NULL
};
extern Il2CppType MotionBlurFilter_t234_0_0_0;
static ParameterInfo IList_1_t8058_IList_1_IndexOf_m43805_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MotionBlurFilter_t234_0_0_0},
};
extern Il2CppType Int32_t386_0_0_0;
extern void* RuntimeInvoker_Int32_t386_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m43805_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.CameraMotionBlur/MotionBlurFilter>::IndexOf(T)
MethodInfo IList_1_IndexOf_m43805_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8058_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t386_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t386_Int32_t386/* invoker_method */
	, IList_1_t8058_IList_1_IndexOf_m43805_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m43805_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t386_0_0_0;
extern Il2CppType MotionBlurFilter_t234_0_0_0;
static ParameterInfo IList_1_t8058_IList_1_Insert_m43806_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &MotionBlurFilter_t234_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Int32_t386_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m43806_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.CameraMotionBlur/MotionBlurFilter>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m43806_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8058_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Int32_t386_Int32_t386/* invoker_method */
	, IList_1_t8058_IList_1_Insert_m43806_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m43806_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t386_0_0_0;
static ParameterInfo IList_1_t8058_IList_1_RemoveAt_m43807_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m43807_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.CameraMotionBlur/MotionBlurFilter>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m43807_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8058_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Int32_t386/* invoker_method */
	, IList_1_t8058_IList_1_RemoveAt_m43807_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m43807_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t386_0_0_0;
static ParameterInfo IList_1_t8058_IList_1_get_Item_m43803_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
};
extern Il2CppType MotionBlurFilter_t234_0_0_0;
extern void* RuntimeInvoker_MotionBlurFilter_t234_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m43803_GenericMethod;
// T System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.CameraMotionBlur/MotionBlurFilter>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m43803_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8058_il2cpp_TypeInfo/* declaring_type */
	, &MotionBlurFilter_t234_0_0_0/* return_type */
	, RuntimeInvoker_MotionBlurFilter_t234_Int32_t386/* invoker_method */
	, IList_1_t8058_IList_1_get_Item_m43803_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m43803_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t386_0_0_0;
extern Il2CppType MotionBlurFilter_t234_0_0_0;
static ParameterInfo IList_1_t8058_IList_1_set_Item_m43804_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &MotionBlurFilter_t234_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Int32_t386_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m43804_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.CameraMotionBlur/MotionBlurFilter>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m43804_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8058_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Int32_t386_Int32_t386/* invoker_method */
	, IList_1_t8058_IList_1_set_Item_m43804_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m43804_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8058_MethodInfos[] =
{
	&IList_1_IndexOf_m43805_MethodInfo,
	&IList_1_Insert_m43806_MethodInfo,
	&IList_1_RemoveAt_m43807_MethodInfo,
	&IList_1_get_Item_m43803_MethodInfo,
	&IList_1_set_Item_m43804_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8058_InterfacesTypeInfos[] = 
{
	&IEnumerable_t55_il2cpp_TypeInfo,
	&ICollection_1_t8057_il2cpp_TypeInfo,
	&IEnumerable_1_t8059_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8058_0_0_0;
extern Il2CppType IList_1_t8058_1_0_0;
struct IList_1_t8058;
extern Il2CppGenericClass IList_1_t8058_GenericClass;
extern CustomAttributesCache IList_1_t2638__CustomAttributeCache;
TypeInfo IList_1_t8058_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8058_MethodInfos/* methods */
	, IList_1_t8058_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8058_il2cpp_TypeInfo/* element_class */
	, IList_1_t8058_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2638__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8058_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8058_0_0_0/* byval_arg */
	, &IList_1_t8058_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8058_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t6354_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<UnityStandardAssets.ImageEffects.ColorCorrectionCurves>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityStandardAssets.ImageEffects.ColorCorrectionCurves>
extern MethodInfo IEnumerator_1_get_Current_m43808_MethodInfo;
static PropertyInfo IEnumerator_1_t6354____Current_PropertyInfo = 
{
	&IEnumerator_1_t6354_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m43808_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6354_PropertyInfos[] =
{
	&IEnumerator_1_t6354____Current_PropertyInfo,
	NULL
};
extern Il2CppType ColorCorrectionCurves_t241_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m43808_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<UnityStandardAssets.ImageEffects.ColorCorrectionCurves>::get_Current()
MethodInfo IEnumerator_1_get_Current_m43808_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6354_il2cpp_TypeInfo/* declaring_type */
	, &ColorCorrectionCurves_t241_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m43808_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6354_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m43808_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6354_InterfacesTypeInfos[] = 
{
	&IEnumerator_t26_il2cpp_TypeInfo,
	&IDisposable_t444_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6354_0_0_0;
extern Il2CppType IEnumerator_1_t6354_1_0_0;
struct IEnumerator_1_t6354;
extern Il2CppGenericClass IEnumerator_1_t6354_GenericClass;
TypeInfo IEnumerator_1_t6354_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6354_MethodInfos/* methods */
	, IEnumerator_1_t6354_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6354_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6354_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6354_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6354_0_0_0/* byval_arg */
	, &IEnumerator_1_t6354_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6354_GenericClass/* generic_class */
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
extern TypeInfo InternalEnumerator_1_t3523_il2cpp_TypeInfo;

extern TypeInfo ColorCorrectionCurves_t241_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m19372_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisColorCorrectionCurves_t241_m33326_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityStandardAssets.ImageEffects.ColorCorrectionCurves>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityStandardAssets.ImageEffects.ColorCorrectionCurves>(System.Int32)
#define Array_InternalArray__get_Item_TisColorCorrectionCurves_t241_m33326(__this, p0, method) (ColorCorrectionCurves_t241 *)Array_InternalArray__get_Item_TisObject_t_m31403_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.ColorCorrectionCurves>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.ColorCorrectionCurves>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.ColorCorrectionCurves>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.ColorCorrectionCurves>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.ColorCorrectionCurves>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.ColorCorrectionCurves>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3523____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3523_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3523, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t386_0_0_1;
FieldInfo InternalEnumerator_1_t3523____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t386_0_0_1/* type */
	, &InternalEnumerator_1_t3523_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3523, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3523_FieldInfos[] =
{
	&InternalEnumerator_1_t3523____array_0_FieldInfo,
	&InternalEnumerator_1_t3523____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19369_MethodInfo;
static PropertyInfo InternalEnumerator_1_t3523____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3523_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19369_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3523____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3523_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m19372_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3523_PropertyInfos[] =
{
	&InternalEnumerator_1_t3523____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3523____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3523_InternalEnumerator_1__ctor_m19368_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m19368_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.ColorCorrectionCurves>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m19368_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m13935_gshared/* method */
	, &InternalEnumerator_1_t3523_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t/* invoker_method */
	, InternalEnumerator_1_t3523_InternalEnumerator_1__ctor_m19368_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m19368_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19369_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.ColorCorrectionCurves>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19369_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13937_gshared/* method */
	, &InternalEnumerator_1_t3523_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19369_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m19370_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.ColorCorrectionCurves>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m19370_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m13939_gshared/* method */
	, &InternalEnumerator_1_t3523_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m19370_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m19371_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.ColorCorrectionCurves>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m19371_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m13941_gshared/* method */
	, &InternalEnumerator_1_t3523_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m19371_GenericMethod/* genericMethod */

};
extern Il2CppType ColorCorrectionCurves_t241_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19372_GenericMethod;
// T System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.ColorCorrectionCurves>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m19372_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m13943_gshared/* method */
	, &InternalEnumerator_1_t3523_il2cpp_TypeInfo/* declaring_type */
	, &ColorCorrectionCurves_t241_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m19372_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3523_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m19368_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19369_MethodInfo,
	&InternalEnumerator_1_Dispose_m19370_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19371_MethodInfo,
	&InternalEnumerator_1_get_Current_m19372_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m19371_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m19370_MethodInfo;
static MethodInfo* InternalEnumerator_1_t3523_VTable[] =
{
	&ValueType_Equals_m2156_MethodInfo,
	&Object_Finalize_m1253_MethodInfo,
	&ValueType_GetHashCode_m2157_MethodInfo,
	&ValueType_ToString_m2158_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19369_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19371_MethodInfo,
	&InternalEnumerator_1_Dispose_m19370_MethodInfo,
	&InternalEnumerator_1_get_Current_m19372_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3523_InterfacesTypeInfos[] = 
{
	&IEnumerator_t26_il2cpp_TypeInfo,
	&IDisposable_t444_il2cpp_TypeInfo,
	&IEnumerator_1_t6354_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3523_InterfacesOffsets[] = 
{
	{ &IEnumerator_t26_il2cpp_TypeInfo, 4},
	{ &IDisposable_t444_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6354_il2cpp_TypeInfo, 7},
};
extern TypeInfo ColorCorrectionCurves_t241_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t3523_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m19372_MethodInfo/* Method Usage */,
	&ColorCorrectionCurves_t241_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisColorCorrectionCurves_t241_m33326_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3523_0_0_0;
extern Il2CppType InternalEnumerator_1_t3523_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3523_GenericClass;
TypeInfo InternalEnumerator_1_t3523_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3523_MethodInfos/* methods */
	, InternalEnumerator_1_t3523_PropertyInfos/* properties */
	, InternalEnumerator_1_t3523_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t550_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3523_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3523_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3523_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3523_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3523_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3523_1_0_0/* this_arg */
	, InternalEnumerator_1_t3523_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3523_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t3523_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3523)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8060_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.ColorCorrectionCurves>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.ColorCorrectionCurves>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.ColorCorrectionCurves>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.ColorCorrectionCurves>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.ColorCorrectionCurves>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.ColorCorrectionCurves>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.ColorCorrectionCurves>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.ColorCorrectionCurves>
extern MethodInfo ICollection_1_get_Count_m43809_MethodInfo;
static PropertyInfo ICollection_1_t8060____Count_PropertyInfo = 
{
	&ICollection_1_t8060_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m43809_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m43810_MethodInfo;
static PropertyInfo ICollection_1_t8060____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8060_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m43810_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8060_PropertyInfos[] =
{
	&ICollection_1_t8060____Count_PropertyInfo,
	&ICollection_1_t8060____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t386_0_0_0;
extern void* RuntimeInvoker_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m43809_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.ColorCorrectionCurves>::get_Count()
MethodInfo ICollection_1_get_Count_m43809_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8060_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m43809_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m43810_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.ColorCorrectionCurves>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m43810_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8060_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m43810_GenericMethod/* genericMethod */

};
extern Il2CppType ColorCorrectionCurves_t241_0_0_0;
extern Il2CppType ColorCorrectionCurves_t241_0_0_0;
static ParameterInfo ICollection_1_t8060_ICollection_1_Add_m43811_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ColorCorrectionCurves_t241_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m43811_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.ColorCorrectionCurves>::Add(T)
MethodInfo ICollection_1_Add_m43811_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8060_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t/* invoker_method */
	, ICollection_1_t8060_ICollection_1_Add_m43811_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m43811_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m43812_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.ColorCorrectionCurves>::Clear()
MethodInfo ICollection_1_Clear_m43812_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8060_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m43812_GenericMethod/* genericMethod */

};
extern Il2CppType ColorCorrectionCurves_t241_0_0_0;
static ParameterInfo ICollection_1_t8060_ICollection_1_Contains_m43813_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ColorCorrectionCurves_t241_0_0_0},
};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m43813_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.ColorCorrectionCurves>::Contains(T)
MethodInfo ICollection_1_Contains_m43813_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8060_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t379_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t379_Object_t/* invoker_method */
	, ICollection_1_t8060_ICollection_1_Contains_m43813_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m43813_GenericMethod/* genericMethod */

};
extern Il2CppType ColorCorrectionCurvesU5BU5D_t5724_0_0_0;
extern Il2CppType ColorCorrectionCurvesU5BU5D_t5724_0_0_0;
extern Il2CppType Int32_t386_0_0_0;
static ParameterInfo ICollection_1_t8060_ICollection_1_CopyTo_m43814_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ColorCorrectionCurvesU5BU5D_t5724_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m43814_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.ColorCorrectionCurves>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m43814_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8060_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t_Int32_t386/* invoker_method */
	, ICollection_1_t8060_ICollection_1_CopyTo_m43814_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m43814_GenericMethod/* genericMethod */

};
extern Il2CppType ColorCorrectionCurves_t241_0_0_0;
static ParameterInfo ICollection_1_t8060_ICollection_1_Remove_m43815_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ColorCorrectionCurves_t241_0_0_0},
};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m43815_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.ColorCorrectionCurves>::Remove(T)
MethodInfo ICollection_1_Remove_m43815_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8060_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t379_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t379_Object_t/* invoker_method */
	, ICollection_1_t8060_ICollection_1_Remove_m43815_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m43815_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8060_MethodInfos[] =
{
	&ICollection_1_get_Count_m43809_MethodInfo,
	&ICollection_1_get_IsReadOnly_m43810_MethodInfo,
	&ICollection_1_Add_m43811_MethodInfo,
	&ICollection_1_Clear_m43812_MethodInfo,
	&ICollection_1_Contains_m43813_MethodInfo,
	&ICollection_1_CopyTo_m43814_MethodInfo,
	&ICollection_1_Remove_m43815_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8062_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8060_InterfacesTypeInfos[] = 
{
	&IEnumerable_t55_il2cpp_TypeInfo,
	&IEnumerable_1_t8062_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8060_0_0_0;
extern Il2CppType ICollection_1_t8060_1_0_0;
struct ICollection_1_t8060;
extern Il2CppGenericClass ICollection_1_t8060_GenericClass;
TypeInfo ICollection_1_t8060_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8060_MethodInfos/* methods */
	, ICollection_1_t8060_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8060_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8060_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8060_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8060_0_0_0/* byval_arg */
	, &ICollection_1_t8060_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8060_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityStandardAssets.ImageEffects.ColorCorrectionCurves>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityStandardAssets.ImageEffects.ColorCorrectionCurves>
extern Il2CppType IEnumerator_1_t6354_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m43816_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityStandardAssets.ImageEffects.ColorCorrectionCurves>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m43816_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8062_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6354_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m43816_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8062_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m43816_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8062_InterfacesTypeInfos[] = 
{
	&IEnumerable_t55_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8062_0_0_0;
extern Il2CppType IEnumerable_1_t8062_1_0_0;
struct IEnumerable_1_t8062;
extern Il2CppGenericClass IEnumerable_1_t8062_GenericClass;
TypeInfo IEnumerable_1_t8062_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8062_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8062_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8062_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8062_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8062_0_0_0/* byval_arg */
	, &IEnumerable_1_t8062_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8062_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t8061_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.ColorCorrectionCurves>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.ColorCorrectionCurves>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.ColorCorrectionCurves>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.ColorCorrectionCurves>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.ColorCorrectionCurves>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.ColorCorrectionCurves>
extern MethodInfo IList_1_get_Item_m43817_MethodInfo;
extern MethodInfo IList_1_set_Item_m43818_MethodInfo;
static PropertyInfo IList_1_t8061____Item_PropertyInfo = 
{
	&IList_1_t8061_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m43817_MethodInfo/* get */
	, &IList_1_set_Item_m43818_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8061_PropertyInfos[] =
{
	&IList_1_t8061____Item_PropertyInfo,
	NULL
};
extern Il2CppType ColorCorrectionCurves_t241_0_0_0;
static ParameterInfo IList_1_t8061_IList_1_IndexOf_m43819_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ColorCorrectionCurves_t241_0_0_0},
};
extern Il2CppType Int32_t386_0_0_0;
extern void* RuntimeInvoker_Int32_t386_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m43819_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.ColorCorrectionCurves>::IndexOf(T)
MethodInfo IList_1_IndexOf_m43819_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8061_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t386_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t386_Object_t/* invoker_method */
	, IList_1_t8061_IList_1_IndexOf_m43819_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m43819_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t386_0_0_0;
extern Il2CppType ColorCorrectionCurves_t241_0_0_0;
static ParameterInfo IList_1_t8061_IList_1_Insert_m43820_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &ColorCorrectionCurves_t241_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Int32_t386_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m43820_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.ColorCorrectionCurves>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m43820_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8061_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Int32_t386_Object_t/* invoker_method */
	, IList_1_t8061_IList_1_Insert_m43820_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m43820_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t386_0_0_0;
static ParameterInfo IList_1_t8061_IList_1_RemoveAt_m43821_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m43821_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.ColorCorrectionCurves>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m43821_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8061_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Int32_t386/* invoker_method */
	, IList_1_t8061_IList_1_RemoveAt_m43821_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m43821_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t386_0_0_0;
static ParameterInfo IList_1_t8061_IList_1_get_Item_m43817_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
};
extern Il2CppType ColorCorrectionCurves_t241_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m43817_GenericMethod;
// T System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.ColorCorrectionCurves>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m43817_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8061_il2cpp_TypeInfo/* declaring_type */
	, &ColorCorrectionCurves_t241_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t386/* invoker_method */
	, IList_1_t8061_IList_1_get_Item_m43817_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m43817_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t386_0_0_0;
extern Il2CppType ColorCorrectionCurves_t241_0_0_0;
static ParameterInfo IList_1_t8061_IList_1_set_Item_m43818_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &ColorCorrectionCurves_t241_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Int32_t386_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m43818_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.ColorCorrectionCurves>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m43818_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8061_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Int32_t386_Object_t/* invoker_method */
	, IList_1_t8061_IList_1_set_Item_m43818_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m43818_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8061_MethodInfos[] =
{
	&IList_1_IndexOf_m43819_MethodInfo,
	&IList_1_Insert_m43820_MethodInfo,
	&IList_1_RemoveAt_m43821_MethodInfo,
	&IList_1_get_Item_m43817_MethodInfo,
	&IList_1_set_Item_m43818_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8061_InterfacesTypeInfos[] = 
{
	&IEnumerable_t55_il2cpp_TypeInfo,
	&ICollection_1_t8060_il2cpp_TypeInfo,
	&IEnumerable_1_t8062_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8061_0_0_0;
extern Il2CppType IList_1_t8061_1_0_0;
struct IList_1_t8061;
extern Il2CppGenericClass IList_1_t8061_GenericClass;
extern CustomAttributesCache IList_1_t2638__CustomAttributeCache;
TypeInfo IList_1_t8061_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8061_MethodInfos/* methods */
	, IList_1_t8061_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8061_il2cpp_TypeInfo/* element_class */
	, IList_1_t8061_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2638__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8061_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8061_0_0_0/* byval_arg */
	, &IList_1_t8061_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8061_GenericClass/* generic_class */
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
extern TypeInfo CachedInvokableCall_1_t3524_il2cpp_TypeInfo;

extern TypeInfo InvokableCall_1_t3525_il2cpp_TypeInfo;
extern MethodInfo InvokableCall_1__ctor_m19375_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m19377_MethodInfo;


// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityStandardAssets.ImageEffects.ColorCorrectionCurves>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityStandardAssets.ImageEffects.ColorCorrectionCurves>::Invoke(System.Object[])
// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<UnityStandardAssets.ImageEffects.ColorCorrectionCurves>
extern Il2CppType ObjectU5BU5D_t470_0_0_33;
FieldInfo CachedInvokableCall_1_t3524____m_Arg1_1_FieldInfo = 
{
	"m_Arg1"/* name */
	, &ObjectU5BU5D_t470_0_0_33/* type */
	, &CachedInvokableCall_1_t3524_il2cpp_TypeInfo/* parent */
	, offsetof(CachedInvokableCall_1_t3524, ___m_Arg1_1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* CachedInvokableCall_1_t3524_FieldInfos[] =
{
	&CachedInvokableCall_1_t3524____m_Arg1_1_FieldInfo,
	NULL
};
extern Il2CppType Object_t326_0_0_0;
extern Il2CppType MethodInfo_t1253_0_0_0;
extern Il2CppType ColorCorrectionCurves_t241_0_0_0;
static ParameterInfo CachedInvokableCall_1_t3524_CachedInvokableCall_1__ctor_m19373_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t326_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1253_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &ColorCorrectionCurves_t241_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod CachedInvokableCall_1__ctor_m19373_GenericMethod;
// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityStandardAssets.ImageEffects.ColorCorrectionCurves>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
MethodInfo CachedInvokableCall_1__ctor_m19373_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CachedInvokableCall_1__ctor_m15540_gshared/* method */
	, &CachedInvokableCall_1_t3524_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t_Object_t_Object_t/* invoker_method */
	, CachedInvokableCall_1_t3524_CachedInvokableCall_1__ctor_m19373_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &CachedInvokableCall_1__ctor_m19373_GenericMethod/* genericMethod */

};
extern Il2CppType ObjectU5BU5D_t470_0_0_0;
static ParameterInfo CachedInvokableCall_1_t3524_CachedInvokableCall_1_Invoke_m19374_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t470_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod CachedInvokableCall_1_Invoke_m19374_GenericMethod;
// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityStandardAssets.ImageEffects.ColorCorrectionCurves>::Invoke(System.Object[])
MethodInfo CachedInvokableCall_1_Invoke_m19374_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&CachedInvokableCall_1_Invoke_m15542_gshared/* method */
	, &CachedInvokableCall_1_t3524_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t/* invoker_method */
	, CachedInvokableCall_1_t3524_CachedInvokableCall_1_Invoke_m19374_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &CachedInvokableCall_1_Invoke_m19374_GenericMethod/* genericMethod */

};
static MethodInfo* CachedInvokableCall_1_t3524_MethodInfos[] =
{
	&CachedInvokableCall_1__ctor_m19373_MethodInfo,
	&CachedInvokableCall_1_Invoke_m19374_MethodInfo,
	NULL
};
extern MethodInfo CachedInvokableCall_1_Invoke_m19374_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m19378_MethodInfo;
static MethodInfo* CachedInvokableCall_1_t3524_VTable[] =
{
	&Object_Equals_m1252_MethodInfo,
	&Object_Finalize_m1253_MethodInfo,
	&Object_GetHashCode_m1254_MethodInfo,
	&Object_ToString_m1255_MethodInfo,
	&CachedInvokableCall_1_Invoke_m19374_MethodInfo,
	&InvokableCall_1_Find_m19378_MethodInfo,
};
extern Il2CppType UnityAction_1_t3526_0_0_0;
extern TypeInfo UnityAction_1_t3526_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisColorCorrectionCurves_t241_m33336_MethodInfo;
extern TypeInfo ColorCorrectionCurves_t241_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m19380_MethodInfo;
extern TypeInfo ColorCorrectionCurves_t241_il2cpp_TypeInfo;
static Il2CppRGCTXData CachedInvokableCall_1_t3524_RGCTXData[8] = 
{
	&UnityAction_1_t3526_0_0_0/* Type Usage */,
	&UnityAction_1_t3526_il2cpp_TypeInfo/* Class Usage */,
	&BaseInvokableCall_ThrowOnInvalidArg_TisColorCorrectionCurves_t241_m33336_MethodInfo/* Method Usage */,
	&ColorCorrectionCurves_t241_il2cpp_TypeInfo/* Class Usage */,
	&UnityAction_1_Invoke_m19380_MethodInfo/* Method Usage */,
	&InvokableCall_1__ctor_m19375_MethodInfo/* Method Usage */,
	&ColorCorrectionCurves_t241_il2cpp_TypeInfo/* Class Usage */,
	&InvokableCall_1_Invoke_m19377_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType CachedInvokableCall_1_t3524_0_0_0;
extern Il2CppType CachedInvokableCall_1_t3524_1_0_0;
struct CachedInvokableCall_1_t3524;
extern Il2CppGenericClass CachedInvokableCall_1_t3524_GenericClass;
TypeInfo CachedInvokableCall_1_t3524_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "CachedInvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, CachedInvokableCall_1_t3524_MethodInfos/* methods */
	, NULL/* properties */
	, CachedInvokableCall_1_t3524_FieldInfos/* fields */
	, NULL/* events */
	, &InvokableCall_1_t3525_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CachedInvokableCall_1_t3524_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, CachedInvokableCall_1_t3524_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CachedInvokableCall_1_t3524_il2cpp_TypeInfo/* cast_class */
	, &CachedInvokableCall_1_t3524_0_0_0/* byval_arg */
	, &CachedInvokableCall_1_t3524_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &CachedInvokableCall_1_t3524_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, CachedInvokableCall_1_t3524_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CachedInvokableCall_1_t3524)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
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
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo UnityAction_1_t3526_il2cpp_TypeInfo;
struct BaseInvokableCall_t1252;
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<UnityStandardAssets.ImageEffects.ColorCorrectionCurves>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<UnityStandardAssets.ImageEffects.ColorCorrectionCurves>(System.Object)
#define BaseInvokableCall_ThrowOnInvalidArg_TisColorCorrectionCurves_t241_m33336(__this/* static, unused */, p0, method) (void)BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m31937_gshared((Object_t *)__this/* static, unused */, (Object_t *)p0, method)


// System.Void UnityEngine.Events.InvokableCall`1<UnityStandardAssets.ImageEffects.ColorCorrectionCurves>::.ctor(System.Object,System.Reflection.MethodInfo)
// System.Void UnityEngine.Events.InvokableCall`1<UnityStandardAssets.ImageEffects.ColorCorrectionCurves>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
// System.Void UnityEngine.Events.InvokableCall`1<UnityStandardAssets.ImageEffects.ColorCorrectionCurves>::Invoke(System.Object[])
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityStandardAssets.ImageEffects.ColorCorrectionCurves>::Find(System.Object,System.Reflection.MethodInfo)
// Metadata Definition UnityEngine.Events.InvokableCall`1<UnityStandardAssets.ImageEffects.ColorCorrectionCurves>
extern Il2CppType UnityAction_1_t3526_0_0_1;
FieldInfo InvokableCall_1_t3525____Delegate_0_FieldInfo = 
{
	"Delegate"/* name */
	, &UnityAction_1_t3526_0_0_1/* type */
	, &InvokableCall_1_t3525_il2cpp_TypeInfo/* parent */
	, offsetof(InvokableCall_1_t3525, ___Delegate_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InvokableCall_1_t3525_FieldInfos[] =
{
	&InvokableCall_1_t3525____Delegate_0_FieldInfo,
	NULL
};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t1253_0_0_0;
static ParameterInfo InvokableCall_1_t3525_InvokableCall_1__ctor_m19375_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1253_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InvokableCall_1__ctor_m19375_GenericMethod;
// System.Void UnityEngine.Events.InvokableCall`1<UnityStandardAssets.ImageEffects.ColorCorrectionCurves>::.ctor(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1__ctor_m19375_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m15543_gshared/* method */
	, &InvokableCall_1_t3525_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t3525_InvokableCall_1__ctor_m19375_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InvokableCall_1__ctor_m19375_GenericMethod/* genericMethod */

};
extern Il2CppType UnityAction_1_t3526_0_0_0;
static ParameterInfo InvokableCall_1_t3525_InvokableCall_1__ctor_m19376_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &UnityAction_1_t3526_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InvokableCall_1__ctor_m19376_GenericMethod;
// System.Void UnityEngine.Events.InvokableCall`1<UnityStandardAssets.ImageEffects.ColorCorrectionCurves>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
MethodInfo InvokableCall_1__ctor_m19376_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m15544_gshared/* method */
	, &InvokableCall_1_t3525_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t/* invoker_method */
	, InvokableCall_1_t3525_InvokableCall_1__ctor_m19376_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InvokableCall_1__ctor_m19376_GenericMethod/* genericMethod */

};
extern Il2CppType ObjectU5BU5D_t470_0_0_0;
static ParameterInfo InvokableCall_1_t3525_InvokableCall_1_Invoke_m19377_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t470_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InvokableCall_1_Invoke_m19377_GenericMethod;
// System.Void UnityEngine.Events.InvokableCall`1<UnityStandardAssets.ImageEffects.ColorCorrectionCurves>::Invoke(System.Object[])
MethodInfo InvokableCall_1_Invoke_m19377_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&InvokableCall_1_Invoke_m15545_gshared/* method */
	, &InvokableCall_1_t3525_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t/* invoker_method */
	, InvokableCall_1_t3525_InvokableCall_1_Invoke_m19377_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InvokableCall_1_Invoke_m19377_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t1253_0_0_0;
static ParameterInfo InvokableCall_1_t3525_InvokableCall_1_Find_m19378_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1253_0_0_0},
};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InvokableCall_1_Find_m19378_GenericMethod;
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityStandardAssets.ImageEffects.ColorCorrectionCurves>::Find(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1_Find_m19378_MethodInfo = 
{
	"Find"/* name */
	, (methodPointerType)&InvokableCall_1_Find_m15546_gshared/* method */
	, &InvokableCall_1_t3525_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t379_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t379_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t3525_InvokableCall_1_Find_m19378_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InvokableCall_1_Find_m19378_GenericMethod/* genericMethod */

};
static MethodInfo* InvokableCall_1_t3525_MethodInfos[] =
{
	&InvokableCall_1__ctor_m19375_MethodInfo,
	&InvokableCall_1__ctor_m19376_MethodInfo,
	&InvokableCall_1_Invoke_m19377_MethodInfo,
	&InvokableCall_1_Find_m19378_MethodInfo,
	NULL
};
static MethodInfo* InvokableCall_1_t3525_VTable[] =
{
	&Object_Equals_m1252_MethodInfo,
	&Object_Finalize_m1253_MethodInfo,
	&Object_GetHashCode_m1254_MethodInfo,
	&Object_ToString_m1255_MethodInfo,
	&InvokableCall_1_Invoke_m19377_MethodInfo,
	&InvokableCall_1_Find_m19378_MethodInfo,
};
extern TypeInfo UnityAction_1_t3526_il2cpp_TypeInfo;
extern TypeInfo ColorCorrectionCurves_t241_il2cpp_TypeInfo;
static Il2CppRGCTXData InvokableCall_1_t3525_RGCTXData[5] = 
{
	&UnityAction_1_t3526_0_0_0/* Type Usage */,
	&UnityAction_1_t3526_il2cpp_TypeInfo/* Class Usage */,
	&BaseInvokableCall_ThrowOnInvalidArg_TisColorCorrectionCurves_t241_m33336_MethodInfo/* Method Usage */,
	&ColorCorrectionCurves_t241_il2cpp_TypeInfo/* Class Usage */,
	&UnityAction_1_Invoke_m19380_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType InvokableCall_1_t3525_0_0_0;
extern Il2CppType InvokableCall_1_t3525_1_0_0;
struct InvokableCall_1_t3525;
extern Il2CppGenericClass InvokableCall_1_t3525_GenericClass;
TypeInfo InvokableCall_1_t3525_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "InvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, InvokableCall_1_t3525_MethodInfos/* methods */
	, NULL/* properties */
	, InvokableCall_1_t3525_FieldInfos/* fields */
	, NULL/* events */
	, &BaseInvokableCall_t1252_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &InvokableCall_1_t3525_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, InvokableCall_1_t3525_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InvokableCall_1_t3525_il2cpp_TypeInfo/* cast_class */
	, &InvokableCall_1_t3525_0_0_0/* byval_arg */
	, &InvokableCall_1_t3525_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &InvokableCall_1_t3525_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InvokableCall_1_t3525_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InvokableCall_1_t3525)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
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
	, 4/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.Events.UnityAction`1<UnityStandardAssets.ImageEffects.ColorCorrectionCurves>::.ctor(System.Object,System.IntPtr)
// System.Void UnityEngine.Events.UnityAction`1<UnityStandardAssets.ImageEffects.ColorCorrectionCurves>::Invoke(T0)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityStandardAssets.ImageEffects.ColorCorrectionCurves>::BeginInvoke(T0,System.AsyncCallback,System.Object)
// System.Void UnityEngine.Events.UnityAction`1<UnityStandardAssets.ImageEffects.ColorCorrectionCurves>::EndInvoke(System.IAsyncResult)
// Metadata Definition UnityEngine.Events.UnityAction`1<UnityStandardAssets.ImageEffects.ColorCorrectionCurves>
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t35_0_0_0;
static ParameterInfo UnityAction_1_t3526_UnityAction_1__ctor_m19379_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &IntPtr_t35_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t_IntPtr_t35 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod UnityAction_1__ctor_m19379_GenericMethod;
// System.Void UnityEngine.Events.UnityAction`1<UnityStandardAssets.ImageEffects.ColorCorrectionCurves>::.ctor(System.Object,System.IntPtr)
MethodInfo UnityAction_1__ctor_m19379_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UnityAction_1__ctor_m15547_gshared/* method */
	, &UnityAction_1_t3526_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t_IntPtr_t35/* invoker_method */
	, UnityAction_1_t3526_UnityAction_1__ctor_m19379_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &UnityAction_1__ctor_m19379_GenericMethod/* genericMethod */

};
extern Il2CppType ColorCorrectionCurves_t241_0_0_0;
static ParameterInfo UnityAction_1_t3526_UnityAction_1_Invoke_m19380_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &ColorCorrectionCurves_t241_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod UnityAction_1_Invoke_m19380_GenericMethod;
// System.Void UnityEngine.Events.UnityAction`1<UnityStandardAssets.ImageEffects.ColorCorrectionCurves>::Invoke(T0)
MethodInfo UnityAction_1_Invoke_m19380_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&UnityAction_1_Invoke_m15548_gshared/* method */
	, &UnityAction_1_t3526_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t/* invoker_method */
	, UnityAction_1_t3526_UnityAction_1_Invoke_m19380_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 10/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &UnityAction_1_Invoke_m19380_GenericMethod/* genericMethod */

};
extern Il2CppType ColorCorrectionCurves_t241_0_0_0;
extern Il2CppType AsyncCallback_t32_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo UnityAction_1_t3526_UnityAction_1_BeginInvoke_m19381_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &ColorCorrectionCurves_t241_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &AsyncCallback_t32_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType IAsyncResult_t31_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod UnityAction_1_BeginInvoke_m19381_GenericMethod;
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityStandardAssets.ImageEffects.ColorCorrectionCurves>::BeginInvoke(T0,System.AsyncCallback,System.Object)
MethodInfo UnityAction_1_BeginInvoke_m19381_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&UnityAction_1_BeginInvoke_m15549_gshared/* method */
	, &UnityAction_1_t3526_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t31_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, UnityAction_1_t3526_UnityAction_1_BeginInvoke_m19381_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &UnityAction_1_BeginInvoke_m19381_GenericMethod/* genericMethod */

};
extern Il2CppType IAsyncResult_t31_0_0_0;
static ParameterInfo UnityAction_1_t3526_UnityAction_1_EndInvoke_m19382_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &IAsyncResult_t31_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod UnityAction_1_EndInvoke_m19382_GenericMethod;
// System.Void UnityEngine.Events.UnityAction`1<UnityStandardAssets.ImageEffects.ColorCorrectionCurves>::EndInvoke(System.IAsyncResult)
MethodInfo UnityAction_1_EndInvoke_m19382_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&UnityAction_1_EndInvoke_m15550_gshared/* method */
	, &UnityAction_1_t3526_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t/* invoker_method */
	, UnityAction_1_t3526_UnityAction_1_EndInvoke_m19382_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &UnityAction_1_EndInvoke_m19382_GenericMethod/* genericMethod */

};
static MethodInfo* UnityAction_1_t3526_MethodInfos[] =
{
	&UnityAction_1__ctor_m19379_MethodInfo,
	&UnityAction_1_Invoke_m19380_MethodInfo,
	&UnityAction_1_BeginInvoke_m19381_MethodInfo,
	&UnityAction_1_EndInvoke_m19382_MethodInfo,
	NULL
};
extern MethodInfo UnityAction_1_BeginInvoke_m19381_MethodInfo;
extern MethodInfo UnityAction_1_EndInvoke_m19382_MethodInfo;
static MethodInfo* UnityAction_1_t3526_VTable[] =
{
	&MulticastDelegate_Equals_m1395_MethodInfo,
	&Object_Finalize_m1253_MethodInfo,
	&MulticastDelegate_GetHashCode_m1396_MethodInfo,
	&Object_ToString_m1255_MethodInfo,
	&MulticastDelegate_GetObjectData_m1397_MethodInfo,
	&Delegate_Clone_m1398_MethodInfo,
	&MulticastDelegate_GetObjectData_m1397_MethodInfo,
	&MulticastDelegate_GetInvocationList_m1399_MethodInfo,
	&MulticastDelegate_CombineImpl_m1400_MethodInfo,
	&MulticastDelegate_RemoveImpl_m1401_MethodInfo,
	&UnityAction_1_Invoke_m19380_MethodInfo,
	&UnityAction_1_BeginInvoke_m19381_MethodInfo,
	&UnityAction_1_EndInvoke_m19382_MethodInfo,
};
static Il2CppInterfaceOffsetPair UnityAction_1_t3526_InterfacesOffsets[] = 
{
	{ &ICloneable_t434_il2cpp_TypeInfo, 4},
	{ &ISerializable_t435_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType UnityAction_1_t3526_1_0_0;
struct UnityAction_1_t3526;
extern Il2CppGenericClass UnityAction_1_t3526_GenericClass;
TypeInfo UnityAction_1_t3526_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnityAction`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, UnityAction_1_t3526_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MulticastDelegate_t34_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &UnityAction_1_t3526_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, UnityAction_1_t3526_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &UnityAction_1_t3526_il2cpp_TypeInfo/* cast_class */
	, &UnityAction_1_t3526_0_0_0/* byval_arg */
	, &UnityAction_1_t3526_1_0_0/* this_arg */
	, UnityAction_1_t3526_InterfacesOffsets/* interface_offsets */
	, &UnityAction_1_t3526_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UnityAction_1_t3526)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 257/* flags */
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
	, 4/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 13/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t6356_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<UnityEngine.Keyframe>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.Keyframe>
extern MethodInfo IEnumerator_1_get_Current_m43822_MethodInfo;
static PropertyInfo IEnumerator_1_t6356____Current_PropertyInfo = 
{
	&IEnumerator_1_t6356_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m43822_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6356_PropertyInfos[] =
{
	&IEnumerator_1_t6356____Current_PropertyInfo,
	NULL
};
extern Il2CppType Keyframe_t527_0_0_0;
extern void* RuntimeInvoker_Keyframe_t527 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m43822_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<UnityEngine.Keyframe>::get_Current()
MethodInfo IEnumerator_1_get_Current_m43822_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6356_il2cpp_TypeInfo/* declaring_type */
	, &Keyframe_t527_0_0_0/* return_type */
	, RuntimeInvoker_Keyframe_t527/* invoker_method */
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
	, &IEnumerator_1_get_Current_m43822_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6356_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m43822_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6356_InterfacesTypeInfos[] = 
{
	&IEnumerator_t26_il2cpp_TypeInfo,
	&IDisposable_t444_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6356_0_0_0;
extern Il2CppType IEnumerator_1_t6356_1_0_0;
struct IEnumerator_1_t6356;
extern Il2CppGenericClass IEnumerator_1_t6356_GenericClass;
TypeInfo IEnumerator_1_t6356_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6356_MethodInfos/* methods */
	, IEnumerator_1_t6356_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6356_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6356_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6356_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6356_0_0_0/* byval_arg */
	, &IEnumerator_1_t6356_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6356_GenericClass/* generic_class */
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
extern TypeInfo InternalEnumerator_1_t3527_il2cpp_TypeInfo;

extern TypeInfo Keyframe_t527_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m19387_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisKeyframe_t527_m33338_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.Keyframe>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.Keyframe>(System.Int32)
 Keyframe_t527  Array_InternalArray__get_Item_TisKeyframe_t527_m33338 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.Keyframe>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m19383_MethodInfo;
 void InternalEnumerator_1__ctor_m19383 (InternalEnumerator_1_t3527 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.Keyframe>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19384_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19384 (InternalEnumerator_1_t3527 * __this, MethodInfo* method){
	{
		Keyframe_t527  L_0 = InternalEnumerator_1_get_Current_m19387(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m19387_MethodInfo);
		Keyframe_t527  L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&Keyframe_t527_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Keyframe>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m19385_MethodInfo;
 void InternalEnumerator_1_Dispose_m19385 (InternalEnumerator_1_t3527 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.Keyframe>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m19386_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m19386 (InternalEnumerator_1_t3527 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<UnityEngine.Keyframe>::get_Current()
 Keyframe_t527  InternalEnumerator_1_get_Current_m19387 (InternalEnumerator_1_t3527 * __this, MethodInfo* method){
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
		Keyframe_t527  L_8 = Array_InternalArray__get_Item_TisKeyframe_t527_m33338(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisKeyframe_t527_m33338_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.Keyframe>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3527____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3527_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3527, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t386_0_0_1;
FieldInfo InternalEnumerator_1_t3527____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t386_0_0_1/* type */
	, &InternalEnumerator_1_t3527_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3527, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3527_FieldInfos[] =
{
	&InternalEnumerator_1_t3527____array_0_FieldInfo,
	&InternalEnumerator_1_t3527____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t3527____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3527_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19384_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3527____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3527_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m19387_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3527_PropertyInfos[] =
{
	&InternalEnumerator_1_t3527____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3527____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3527_InternalEnumerator_1__ctor_m19383_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m19383_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Keyframe>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m19383_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m19383/* method */
	, &InternalEnumerator_1_t3527_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t/* invoker_method */
	, InternalEnumerator_1_t3527_InternalEnumerator_1__ctor_m19383_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m19383_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19384_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<UnityEngine.Keyframe>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19384_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19384/* method */
	, &InternalEnumerator_1_t3527_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19384_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m19385_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Keyframe>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m19385_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m19385/* method */
	, &InternalEnumerator_1_t3527_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m19385_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m19386_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.Keyframe>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m19386_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m19386/* method */
	, &InternalEnumerator_1_t3527_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m19386_GenericMethod/* genericMethod */

};
extern Il2CppType Keyframe_t527_0_0_0;
extern void* RuntimeInvoker_Keyframe_t527 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19387_GenericMethod;
// T System.Array/InternalEnumerator`1<UnityEngine.Keyframe>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m19387_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m19387/* method */
	, &InternalEnumerator_1_t3527_il2cpp_TypeInfo/* declaring_type */
	, &Keyframe_t527_0_0_0/* return_type */
	, RuntimeInvoker_Keyframe_t527/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m19387_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3527_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m19383_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19384_MethodInfo,
	&InternalEnumerator_1_Dispose_m19385_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19386_MethodInfo,
	&InternalEnumerator_1_get_Current_m19387_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t3527_VTable[] =
{
	&ValueType_Equals_m2156_MethodInfo,
	&Object_Finalize_m1253_MethodInfo,
	&ValueType_GetHashCode_m2157_MethodInfo,
	&ValueType_ToString_m2158_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19384_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19386_MethodInfo,
	&InternalEnumerator_1_Dispose_m19385_MethodInfo,
	&InternalEnumerator_1_get_Current_m19387_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3527_InterfacesTypeInfos[] = 
{
	&IEnumerator_t26_il2cpp_TypeInfo,
	&IDisposable_t444_il2cpp_TypeInfo,
	&IEnumerator_1_t6356_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3527_InterfacesOffsets[] = 
{
	{ &IEnumerator_t26_il2cpp_TypeInfo, 4},
	{ &IDisposable_t444_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6356_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3527_0_0_0;
extern Il2CppType InternalEnumerator_1_t3527_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3527_GenericClass;
TypeInfo InternalEnumerator_1_t3527_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3527_MethodInfos/* methods */
	, InternalEnumerator_1_t3527_PropertyInfos/* properties */
	, InternalEnumerator_1_t3527_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t550_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3527_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3527_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3527_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3527_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3527_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3527_1_0_0/* this_arg */
	, InternalEnumerator_1_t3527_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3527_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3527)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8063_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Keyframe>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Keyframe>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Keyframe>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Keyframe>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Keyframe>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Keyframe>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Keyframe>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.Keyframe>
extern MethodInfo ICollection_1_get_Count_m43823_MethodInfo;
static PropertyInfo ICollection_1_t8063____Count_PropertyInfo = 
{
	&ICollection_1_t8063_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m43823_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m43824_MethodInfo;
static PropertyInfo ICollection_1_t8063____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8063_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m43824_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8063_PropertyInfos[] =
{
	&ICollection_1_t8063____Count_PropertyInfo,
	&ICollection_1_t8063____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t386_0_0_0;
extern void* RuntimeInvoker_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m43823_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Keyframe>::get_Count()
MethodInfo ICollection_1_get_Count_m43823_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8063_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m43823_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m43824_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Keyframe>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m43824_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8063_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m43824_GenericMethod/* genericMethod */

};
extern Il2CppType Keyframe_t527_0_0_0;
extern Il2CppType Keyframe_t527_0_0_0;
static ParameterInfo ICollection_1_t8063_ICollection_1_Add_m43825_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Keyframe_t527_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Keyframe_t527 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m43825_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Keyframe>::Add(T)
MethodInfo ICollection_1_Add_m43825_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8063_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Keyframe_t527/* invoker_method */
	, ICollection_1_t8063_ICollection_1_Add_m43825_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m43825_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m43826_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Keyframe>::Clear()
MethodInfo ICollection_1_Clear_m43826_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8063_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m43826_GenericMethod/* genericMethod */

};
extern Il2CppType Keyframe_t527_0_0_0;
static ParameterInfo ICollection_1_t8063_ICollection_1_Contains_m43827_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Keyframe_t527_0_0_0},
};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379_Keyframe_t527 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m43827_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Keyframe>::Contains(T)
MethodInfo ICollection_1_Contains_m43827_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8063_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t379_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t379_Keyframe_t527/* invoker_method */
	, ICollection_1_t8063_ICollection_1_Contains_m43827_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m43827_GenericMethod/* genericMethod */

};
extern Il2CppType KeyframeU5BU5D_t526_0_0_0;
extern Il2CppType KeyframeU5BU5D_t526_0_0_0;
extern Il2CppType Int32_t386_0_0_0;
static ParameterInfo ICollection_1_t8063_ICollection_1_CopyTo_m43828_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &KeyframeU5BU5D_t526_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m43828_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Keyframe>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m43828_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8063_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t_Int32_t386/* invoker_method */
	, ICollection_1_t8063_ICollection_1_CopyTo_m43828_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m43828_GenericMethod/* genericMethod */

};
extern Il2CppType Keyframe_t527_0_0_0;
static ParameterInfo ICollection_1_t8063_ICollection_1_Remove_m43829_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Keyframe_t527_0_0_0},
};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379_Keyframe_t527 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m43829_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Keyframe>::Remove(T)
MethodInfo ICollection_1_Remove_m43829_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8063_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t379_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t379_Keyframe_t527/* invoker_method */
	, ICollection_1_t8063_ICollection_1_Remove_m43829_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m43829_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8063_MethodInfos[] =
{
	&ICollection_1_get_Count_m43823_MethodInfo,
	&ICollection_1_get_IsReadOnly_m43824_MethodInfo,
	&ICollection_1_Add_m43825_MethodInfo,
	&ICollection_1_Clear_m43826_MethodInfo,
	&ICollection_1_Contains_m43827_MethodInfo,
	&ICollection_1_CopyTo_m43828_MethodInfo,
	&ICollection_1_Remove_m43829_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8065_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8063_InterfacesTypeInfos[] = 
{
	&IEnumerable_t55_il2cpp_TypeInfo,
	&IEnumerable_1_t8065_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8063_0_0_0;
extern Il2CppType ICollection_1_t8063_1_0_0;
struct ICollection_1_t8063;
extern Il2CppGenericClass ICollection_1_t8063_GenericClass;
TypeInfo ICollection_1_t8063_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8063_MethodInfos/* methods */
	, ICollection_1_t8063_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8063_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8063_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8063_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8063_0_0_0/* byval_arg */
	, &ICollection_1_t8063_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8063_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Keyframe>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.Keyframe>
extern Il2CppType IEnumerator_1_t6356_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m43830_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Keyframe>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m43830_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8065_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6356_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m43830_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8065_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m43830_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8065_InterfacesTypeInfos[] = 
{
	&IEnumerable_t55_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8065_0_0_0;
extern Il2CppType IEnumerable_1_t8065_1_0_0;
struct IEnumerable_1_t8065;
extern Il2CppGenericClass IEnumerable_1_t8065_GenericClass;
TypeInfo IEnumerable_1_t8065_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8065_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8065_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8065_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8065_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8065_0_0_0/* byval_arg */
	, &IEnumerable_1_t8065_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8065_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t8064_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.Keyframe>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Keyframe>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Keyframe>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.Keyframe>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Keyframe>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.Keyframe>
extern MethodInfo IList_1_get_Item_m43831_MethodInfo;
extern MethodInfo IList_1_set_Item_m43832_MethodInfo;
static PropertyInfo IList_1_t8064____Item_PropertyInfo = 
{
	&IList_1_t8064_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m43831_MethodInfo/* get */
	, &IList_1_set_Item_m43832_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8064_PropertyInfos[] =
{
	&IList_1_t8064____Item_PropertyInfo,
	NULL
};
extern Il2CppType Keyframe_t527_0_0_0;
static ParameterInfo IList_1_t8064_IList_1_IndexOf_m43833_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Keyframe_t527_0_0_0},
};
extern Il2CppType Int32_t386_0_0_0;
extern void* RuntimeInvoker_Int32_t386_Keyframe_t527 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m43833_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<UnityEngine.Keyframe>::IndexOf(T)
MethodInfo IList_1_IndexOf_m43833_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8064_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t386_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t386_Keyframe_t527/* invoker_method */
	, IList_1_t8064_IList_1_IndexOf_m43833_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m43833_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t386_0_0_0;
extern Il2CppType Keyframe_t527_0_0_0;
static ParameterInfo IList_1_t8064_IList_1_Insert_m43834_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &Keyframe_t527_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Int32_t386_Keyframe_t527 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m43834_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityEngine.Keyframe>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m43834_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8064_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Int32_t386_Keyframe_t527/* invoker_method */
	, IList_1_t8064_IList_1_Insert_m43834_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m43834_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t386_0_0_0;
static ParameterInfo IList_1_t8064_IList_1_RemoveAt_m43835_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m43835_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityEngine.Keyframe>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m43835_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8064_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Int32_t386/* invoker_method */
	, IList_1_t8064_IList_1_RemoveAt_m43835_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m43835_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t386_0_0_0;
static ParameterInfo IList_1_t8064_IList_1_get_Item_m43831_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
};
extern Il2CppType Keyframe_t527_0_0_0;
extern void* RuntimeInvoker_Keyframe_t527_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m43831_GenericMethod;
// T System.Collections.Generic.IList`1<UnityEngine.Keyframe>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m43831_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8064_il2cpp_TypeInfo/* declaring_type */
	, &Keyframe_t527_0_0_0/* return_type */
	, RuntimeInvoker_Keyframe_t527_Int32_t386/* invoker_method */
	, IList_1_t8064_IList_1_get_Item_m43831_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m43831_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t386_0_0_0;
extern Il2CppType Keyframe_t527_0_0_0;
static ParameterInfo IList_1_t8064_IList_1_set_Item_m43832_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &Keyframe_t527_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Int32_t386_Keyframe_t527 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m43832_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityEngine.Keyframe>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m43832_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8064_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Int32_t386_Keyframe_t527/* invoker_method */
	, IList_1_t8064_IList_1_set_Item_m43832_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m43832_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8064_MethodInfos[] =
{
	&IList_1_IndexOf_m43833_MethodInfo,
	&IList_1_Insert_m43834_MethodInfo,
	&IList_1_RemoveAt_m43835_MethodInfo,
	&IList_1_get_Item_m43831_MethodInfo,
	&IList_1_set_Item_m43832_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8064_InterfacesTypeInfos[] = 
{
	&IEnumerable_t55_il2cpp_TypeInfo,
	&ICollection_1_t8063_il2cpp_TypeInfo,
	&IEnumerable_1_t8065_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8064_0_0_0;
extern Il2CppType IList_1_t8064_1_0_0;
struct IList_1_t8064;
extern Il2CppGenericClass IList_1_t8064_GenericClass;
extern CustomAttributesCache IList_1_t2638__CustomAttributeCache;
TypeInfo IList_1_t8064_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8064_MethodInfos/* methods */
	, IList_1_t8064_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8064_il2cpp_TypeInfo/* element_class */
	, IList_1_t8064_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2638__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8064_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8064_0_0_0/* byval_arg */
	, &IList_1_t8064_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8064_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t6358_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<UnityStandardAssets.ImageEffects.ColorCorrectionCurves/ColorCorrectionMode>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityStandardAssets.ImageEffects.ColorCorrectionCurves/ColorCorrectionMode>
extern MethodInfo IEnumerator_1_get_Current_m43836_MethodInfo;
static PropertyInfo IEnumerator_1_t6358____Current_PropertyInfo = 
{
	&IEnumerator_1_t6358_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m43836_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6358_PropertyInfos[] =
{
	&IEnumerator_1_t6358____Current_PropertyInfo,
	NULL
};
extern Il2CppType ColorCorrectionMode_t239_0_0_0;
extern void* RuntimeInvoker_ColorCorrectionMode_t239 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m43836_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<UnityStandardAssets.ImageEffects.ColorCorrectionCurves/ColorCorrectionMode>::get_Current()
MethodInfo IEnumerator_1_get_Current_m43836_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6358_il2cpp_TypeInfo/* declaring_type */
	, &ColorCorrectionMode_t239_0_0_0/* return_type */
	, RuntimeInvoker_ColorCorrectionMode_t239/* invoker_method */
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
	, &IEnumerator_1_get_Current_m43836_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6358_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m43836_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6358_InterfacesTypeInfos[] = 
{
	&IEnumerator_t26_il2cpp_TypeInfo,
	&IDisposable_t444_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6358_0_0_0;
extern Il2CppType IEnumerator_1_t6358_1_0_0;
struct IEnumerator_1_t6358;
extern Il2CppGenericClass IEnumerator_1_t6358_GenericClass;
TypeInfo IEnumerator_1_t6358_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6358_MethodInfos/* methods */
	, IEnumerator_1_t6358_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6358_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6358_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6358_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6358_0_0_0/* byval_arg */
	, &IEnumerator_1_t6358_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6358_GenericClass/* generic_class */
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
extern TypeInfo InternalEnumerator_1_t3528_il2cpp_TypeInfo;

extern TypeInfo ColorCorrectionMode_t239_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m19392_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisColorCorrectionMode_t239_m33349_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityStandardAssets.ImageEffects.ColorCorrectionCurves/ColorCorrectionMode>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityStandardAssets.ImageEffects.ColorCorrectionCurves/ColorCorrectionMode>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisColorCorrectionMode_t239_m33349 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.ColorCorrectionCurves/ColorCorrectionMode>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m19388_MethodInfo;
 void InternalEnumerator_1__ctor_m19388 (InternalEnumerator_1_t3528 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.ColorCorrectionCurves/ColorCorrectionMode>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19389_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19389 (InternalEnumerator_1_t3528 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m19392(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m19392_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&ColorCorrectionMode_t239_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.ColorCorrectionCurves/ColorCorrectionMode>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m19390_MethodInfo;
 void InternalEnumerator_1_Dispose_m19390 (InternalEnumerator_1_t3528 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.ColorCorrectionCurves/ColorCorrectionMode>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m19391_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m19391 (InternalEnumerator_1_t3528 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.ColorCorrectionCurves/ColorCorrectionMode>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m19392 (InternalEnumerator_1_t3528 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisColorCorrectionMode_t239_m33349(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisColorCorrectionMode_t239_m33349_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.ColorCorrectionCurves/ColorCorrectionMode>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3528____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3528_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3528, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t386_0_0_1;
FieldInfo InternalEnumerator_1_t3528____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t386_0_0_1/* type */
	, &InternalEnumerator_1_t3528_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3528, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3528_FieldInfos[] =
{
	&InternalEnumerator_1_t3528____array_0_FieldInfo,
	&InternalEnumerator_1_t3528____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t3528____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3528_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19389_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3528____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3528_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m19392_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3528_PropertyInfos[] =
{
	&InternalEnumerator_1_t3528____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3528____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3528_InternalEnumerator_1__ctor_m19388_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m19388_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.ColorCorrectionCurves/ColorCorrectionMode>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m19388_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m19388/* method */
	, &InternalEnumerator_1_t3528_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t/* invoker_method */
	, InternalEnumerator_1_t3528_InternalEnumerator_1__ctor_m19388_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m19388_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19389_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.ColorCorrectionCurves/ColorCorrectionMode>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19389_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19389/* method */
	, &InternalEnumerator_1_t3528_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19389_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m19390_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.ColorCorrectionCurves/ColorCorrectionMode>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m19390_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m19390/* method */
	, &InternalEnumerator_1_t3528_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m19390_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m19391_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.ColorCorrectionCurves/ColorCorrectionMode>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m19391_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m19391/* method */
	, &InternalEnumerator_1_t3528_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m19391_GenericMethod/* genericMethod */

};
extern Il2CppType ColorCorrectionMode_t239_0_0_0;
extern void* RuntimeInvoker_ColorCorrectionMode_t239 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19392_GenericMethod;
// T System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.ColorCorrectionCurves/ColorCorrectionMode>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m19392_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m19392/* method */
	, &InternalEnumerator_1_t3528_il2cpp_TypeInfo/* declaring_type */
	, &ColorCorrectionMode_t239_0_0_0/* return_type */
	, RuntimeInvoker_ColorCorrectionMode_t239/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m19392_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3528_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m19388_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19389_MethodInfo,
	&InternalEnumerator_1_Dispose_m19390_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19391_MethodInfo,
	&InternalEnumerator_1_get_Current_m19392_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t3528_VTable[] =
{
	&ValueType_Equals_m2156_MethodInfo,
	&Object_Finalize_m1253_MethodInfo,
	&ValueType_GetHashCode_m2157_MethodInfo,
	&ValueType_ToString_m2158_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19389_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19391_MethodInfo,
	&InternalEnumerator_1_Dispose_m19390_MethodInfo,
	&InternalEnumerator_1_get_Current_m19392_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3528_InterfacesTypeInfos[] = 
{
	&IEnumerator_t26_il2cpp_TypeInfo,
	&IDisposable_t444_il2cpp_TypeInfo,
	&IEnumerator_1_t6358_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3528_InterfacesOffsets[] = 
{
	{ &IEnumerator_t26_il2cpp_TypeInfo, 4},
	{ &IDisposable_t444_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6358_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3528_0_0_0;
extern Il2CppType InternalEnumerator_1_t3528_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3528_GenericClass;
TypeInfo InternalEnumerator_1_t3528_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3528_MethodInfos/* methods */
	, InternalEnumerator_1_t3528_PropertyInfos/* properties */
	, InternalEnumerator_1_t3528_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t550_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3528_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3528_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3528_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3528_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3528_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3528_1_0_0/* this_arg */
	, InternalEnumerator_1_t3528_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3528_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3528)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8066_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.ColorCorrectionCurves/ColorCorrectionMode>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.ColorCorrectionCurves/ColorCorrectionMode>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.ColorCorrectionCurves/ColorCorrectionMode>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.ColorCorrectionCurves/ColorCorrectionMode>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.ColorCorrectionCurves/ColorCorrectionMode>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.ColorCorrectionCurves/ColorCorrectionMode>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.ColorCorrectionCurves/ColorCorrectionMode>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.ColorCorrectionCurves/ColorCorrectionMode>
extern MethodInfo ICollection_1_get_Count_m43837_MethodInfo;
static PropertyInfo ICollection_1_t8066____Count_PropertyInfo = 
{
	&ICollection_1_t8066_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m43837_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m43838_MethodInfo;
static PropertyInfo ICollection_1_t8066____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8066_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m43838_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8066_PropertyInfos[] =
{
	&ICollection_1_t8066____Count_PropertyInfo,
	&ICollection_1_t8066____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t386_0_0_0;
extern void* RuntimeInvoker_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m43837_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.ColorCorrectionCurves/ColorCorrectionMode>::get_Count()
MethodInfo ICollection_1_get_Count_m43837_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8066_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m43837_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m43838_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.ColorCorrectionCurves/ColorCorrectionMode>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m43838_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8066_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m43838_GenericMethod/* genericMethod */

};
extern Il2CppType ColorCorrectionMode_t239_0_0_0;
extern Il2CppType ColorCorrectionMode_t239_0_0_0;
static ParameterInfo ICollection_1_t8066_ICollection_1_Add_m43839_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ColorCorrectionMode_t239_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m43839_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.ColorCorrectionCurves/ColorCorrectionMode>::Add(T)
MethodInfo ICollection_1_Add_m43839_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8066_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Int32_t386/* invoker_method */
	, ICollection_1_t8066_ICollection_1_Add_m43839_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m43839_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m43840_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.ColorCorrectionCurves/ColorCorrectionMode>::Clear()
MethodInfo ICollection_1_Clear_m43840_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8066_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m43840_GenericMethod/* genericMethod */

};
extern Il2CppType ColorCorrectionMode_t239_0_0_0;
static ParameterInfo ICollection_1_t8066_ICollection_1_Contains_m43841_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ColorCorrectionMode_t239_0_0_0},
};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m43841_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.ColorCorrectionCurves/ColorCorrectionMode>::Contains(T)
MethodInfo ICollection_1_Contains_m43841_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8066_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t379_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t379_Int32_t386/* invoker_method */
	, ICollection_1_t8066_ICollection_1_Contains_m43841_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m43841_GenericMethod/* genericMethod */

};
extern Il2CppType ColorCorrectionModeU5BU5D_t5725_0_0_0;
extern Il2CppType ColorCorrectionModeU5BU5D_t5725_0_0_0;
extern Il2CppType Int32_t386_0_0_0;
static ParameterInfo ICollection_1_t8066_ICollection_1_CopyTo_m43842_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ColorCorrectionModeU5BU5D_t5725_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m43842_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.ColorCorrectionCurves/ColorCorrectionMode>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m43842_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8066_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t_Int32_t386/* invoker_method */
	, ICollection_1_t8066_ICollection_1_CopyTo_m43842_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m43842_GenericMethod/* genericMethod */

};
extern Il2CppType ColorCorrectionMode_t239_0_0_0;
static ParameterInfo ICollection_1_t8066_ICollection_1_Remove_m43843_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ColorCorrectionMode_t239_0_0_0},
};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m43843_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.ColorCorrectionCurves/ColorCorrectionMode>::Remove(T)
MethodInfo ICollection_1_Remove_m43843_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8066_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t379_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t379_Int32_t386/* invoker_method */
	, ICollection_1_t8066_ICollection_1_Remove_m43843_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m43843_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8066_MethodInfos[] =
{
	&ICollection_1_get_Count_m43837_MethodInfo,
	&ICollection_1_get_IsReadOnly_m43838_MethodInfo,
	&ICollection_1_Add_m43839_MethodInfo,
	&ICollection_1_Clear_m43840_MethodInfo,
	&ICollection_1_Contains_m43841_MethodInfo,
	&ICollection_1_CopyTo_m43842_MethodInfo,
	&ICollection_1_Remove_m43843_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8068_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8066_InterfacesTypeInfos[] = 
{
	&IEnumerable_t55_il2cpp_TypeInfo,
	&IEnumerable_1_t8068_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8066_0_0_0;
extern Il2CppType ICollection_1_t8066_1_0_0;
struct ICollection_1_t8066;
extern Il2CppGenericClass ICollection_1_t8066_GenericClass;
TypeInfo ICollection_1_t8066_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8066_MethodInfos/* methods */
	, ICollection_1_t8066_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8066_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8066_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8066_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8066_0_0_0/* byval_arg */
	, &ICollection_1_t8066_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8066_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityStandardAssets.ImageEffects.ColorCorrectionCurves/ColorCorrectionMode>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityStandardAssets.ImageEffects.ColorCorrectionCurves/ColorCorrectionMode>
extern Il2CppType IEnumerator_1_t6358_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m43844_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityStandardAssets.ImageEffects.ColorCorrectionCurves/ColorCorrectionMode>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m43844_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8068_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6358_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m43844_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8068_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m43844_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8068_InterfacesTypeInfos[] = 
{
	&IEnumerable_t55_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8068_0_0_0;
extern Il2CppType IEnumerable_1_t8068_1_0_0;
struct IEnumerable_1_t8068;
extern Il2CppGenericClass IEnumerable_1_t8068_GenericClass;
TypeInfo IEnumerable_1_t8068_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8068_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8068_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8068_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8068_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8068_0_0_0/* byval_arg */
	, &IEnumerable_1_t8068_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8068_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t8067_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.ColorCorrectionCurves/ColorCorrectionMode>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.ColorCorrectionCurves/ColorCorrectionMode>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.ColorCorrectionCurves/ColorCorrectionMode>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.ColorCorrectionCurves/ColorCorrectionMode>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.ColorCorrectionCurves/ColorCorrectionMode>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.ColorCorrectionCurves/ColorCorrectionMode>
extern MethodInfo IList_1_get_Item_m43845_MethodInfo;
extern MethodInfo IList_1_set_Item_m43846_MethodInfo;
static PropertyInfo IList_1_t8067____Item_PropertyInfo = 
{
	&IList_1_t8067_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m43845_MethodInfo/* get */
	, &IList_1_set_Item_m43846_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8067_PropertyInfos[] =
{
	&IList_1_t8067____Item_PropertyInfo,
	NULL
};
extern Il2CppType ColorCorrectionMode_t239_0_0_0;
static ParameterInfo IList_1_t8067_IList_1_IndexOf_m43847_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ColorCorrectionMode_t239_0_0_0},
};
extern Il2CppType Int32_t386_0_0_0;
extern void* RuntimeInvoker_Int32_t386_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m43847_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.ColorCorrectionCurves/ColorCorrectionMode>::IndexOf(T)
MethodInfo IList_1_IndexOf_m43847_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8067_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t386_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t386_Int32_t386/* invoker_method */
	, IList_1_t8067_IList_1_IndexOf_m43847_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m43847_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t386_0_0_0;
extern Il2CppType ColorCorrectionMode_t239_0_0_0;
static ParameterInfo IList_1_t8067_IList_1_Insert_m43848_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &ColorCorrectionMode_t239_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Int32_t386_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m43848_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.ColorCorrectionCurves/ColorCorrectionMode>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m43848_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8067_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Int32_t386_Int32_t386/* invoker_method */
	, IList_1_t8067_IList_1_Insert_m43848_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m43848_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t386_0_0_0;
static ParameterInfo IList_1_t8067_IList_1_RemoveAt_m43849_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m43849_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.ColorCorrectionCurves/ColorCorrectionMode>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m43849_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8067_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Int32_t386/* invoker_method */
	, IList_1_t8067_IList_1_RemoveAt_m43849_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m43849_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t386_0_0_0;
static ParameterInfo IList_1_t8067_IList_1_get_Item_m43845_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
};
extern Il2CppType ColorCorrectionMode_t239_0_0_0;
extern void* RuntimeInvoker_ColorCorrectionMode_t239_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m43845_GenericMethod;
// T System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.ColorCorrectionCurves/ColorCorrectionMode>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m43845_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8067_il2cpp_TypeInfo/* declaring_type */
	, &ColorCorrectionMode_t239_0_0_0/* return_type */
	, RuntimeInvoker_ColorCorrectionMode_t239_Int32_t386/* invoker_method */
	, IList_1_t8067_IList_1_get_Item_m43845_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m43845_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t386_0_0_0;
extern Il2CppType ColorCorrectionMode_t239_0_0_0;
static ParameterInfo IList_1_t8067_IList_1_set_Item_m43846_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &ColorCorrectionMode_t239_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Int32_t386_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m43846_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityStandardAssets.ImageEffects.ColorCorrectionCurves/ColorCorrectionMode>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m43846_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8067_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Int32_t386_Int32_t386/* invoker_method */
	, IList_1_t8067_IList_1_set_Item_m43846_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m43846_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8067_MethodInfos[] =
{
	&IList_1_IndexOf_m43847_MethodInfo,
	&IList_1_Insert_m43848_MethodInfo,
	&IList_1_RemoveAt_m43849_MethodInfo,
	&IList_1_get_Item_m43845_MethodInfo,
	&IList_1_set_Item_m43846_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8067_InterfacesTypeInfos[] = 
{
	&IEnumerable_t55_il2cpp_TypeInfo,
	&ICollection_1_t8066_il2cpp_TypeInfo,
	&IEnumerable_1_t8068_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8067_0_0_0;
extern Il2CppType IList_1_t8067_1_0_0;
struct IList_1_t8067;
extern Il2CppGenericClass IList_1_t8067_GenericClass;
extern CustomAttributesCache IList_1_t2638__CustomAttributeCache;
TypeInfo IList_1_t8067_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8067_MethodInfos/* methods */
	, IList_1_t8067_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8067_il2cpp_TypeInfo/* element_class */
	, IList_1_t8067_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2638__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8067_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8067_0_0_0/* byval_arg */
	, &IList_1_t8067_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8067_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t6360_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<UnityStandardAssets.ImageEffects.ColorCorrectionLookup>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityStandardAssets.ImageEffects.ColorCorrectionLookup>
extern MethodInfo IEnumerator_1_get_Current_m43850_MethodInfo;
static PropertyInfo IEnumerator_1_t6360____Current_PropertyInfo = 
{
	&IEnumerator_1_t6360_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m43850_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6360_PropertyInfos[] =
{
	&IEnumerator_1_t6360____Current_PropertyInfo,
	NULL
};
extern Il2CppType ColorCorrectionLookup_t243_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m43850_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<UnityStandardAssets.ImageEffects.ColorCorrectionLookup>::get_Current()
MethodInfo IEnumerator_1_get_Current_m43850_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6360_il2cpp_TypeInfo/* declaring_type */
	, &ColorCorrectionLookup_t243_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m43850_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6360_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m43850_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6360_InterfacesTypeInfos[] = 
{
	&IEnumerator_t26_il2cpp_TypeInfo,
	&IDisposable_t444_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6360_0_0_0;
extern Il2CppType IEnumerator_1_t6360_1_0_0;
struct IEnumerator_1_t6360;
extern Il2CppGenericClass IEnumerator_1_t6360_GenericClass;
TypeInfo IEnumerator_1_t6360_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6360_MethodInfos/* methods */
	, IEnumerator_1_t6360_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6360_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6360_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6360_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6360_0_0_0/* byval_arg */
	, &IEnumerator_1_t6360_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6360_GenericClass/* generic_class */
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
extern TypeInfo InternalEnumerator_1_t3529_il2cpp_TypeInfo;

extern TypeInfo ColorCorrectionLookup_t243_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m19397_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisColorCorrectionLookup_t243_m33360_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityStandardAssets.ImageEffects.ColorCorrectionLookup>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityStandardAssets.ImageEffects.ColorCorrectionLookup>(System.Int32)
#define Array_InternalArray__get_Item_TisColorCorrectionLookup_t243_m33360(__this, p0, method) (ColorCorrectionLookup_t243 *)Array_InternalArray__get_Item_TisObject_t_m31403_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.ColorCorrectionLookup>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.ColorCorrectionLookup>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.ColorCorrectionLookup>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.ColorCorrectionLookup>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.ColorCorrectionLookup>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.ColorCorrectionLookup>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3529____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3529_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3529, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t386_0_0_1;
FieldInfo InternalEnumerator_1_t3529____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t386_0_0_1/* type */
	, &InternalEnumerator_1_t3529_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3529, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3529_FieldInfos[] =
{
	&InternalEnumerator_1_t3529____array_0_FieldInfo,
	&InternalEnumerator_1_t3529____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19394_MethodInfo;
static PropertyInfo InternalEnumerator_1_t3529____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3529_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19394_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3529____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3529_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m19397_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3529_PropertyInfos[] =
{
	&InternalEnumerator_1_t3529____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3529____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3529_InternalEnumerator_1__ctor_m19393_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m19393_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.ColorCorrectionLookup>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m19393_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m13935_gshared/* method */
	, &InternalEnumerator_1_t3529_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t/* invoker_method */
	, InternalEnumerator_1_t3529_InternalEnumerator_1__ctor_m19393_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m19393_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19394_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.ColorCorrectionLookup>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19394_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13937_gshared/* method */
	, &InternalEnumerator_1_t3529_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19394_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m19395_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.ColorCorrectionLookup>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m19395_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m13939_gshared/* method */
	, &InternalEnumerator_1_t3529_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m19395_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m19396_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.ColorCorrectionLookup>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m19396_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m13941_gshared/* method */
	, &InternalEnumerator_1_t3529_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m19396_GenericMethod/* genericMethod */

};
extern Il2CppType ColorCorrectionLookup_t243_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19397_GenericMethod;
// T System.Array/InternalEnumerator`1<UnityStandardAssets.ImageEffects.ColorCorrectionLookup>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m19397_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m13943_gshared/* method */
	, &InternalEnumerator_1_t3529_il2cpp_TypeInfo/* declaring_type */
	, &ColorCorrectionLookup_t243_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m19397_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3529_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m19393_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19394_MethodInfo,
	&InternalEnumerator_1_Dispose_m19395_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19396_MethodInfo,
	&InternalEnumerator_1_get_Current_m19397_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m19396_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m19395_MethodInfo;
static MethodInfo* InternalEnumerator_1_t3529_VTable[] =
{
	&ValueType_Equals_m2156_MethodInfo,
	&Object_Finalize_m1253_MethodInfo,
	&ValueType_GetHashCode_m2157_MethodInfo,
	&ValueType_ToString_m2158_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19394_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19396_MethodInfo,
	&InternalEnumerator_1_Dispose_m19395_MethodInfo,
	&InternalEnumerator_1_get_Current_m19397_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3529_InterfacesTypeInfos[] = 
{
	&IEnumerator_t26_il2cpp_TypeInfo,
	&IDisposable_t444_il2cpp_TypeInfo,
	&IEnumerator_1_t6360_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3529_InterfacesOffsets[] = 
{
	{ &IEnumerator_t26_il2cpp_TypeInfo, 4},
	{ &IDisposable_t444_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6360_il2cpp_TypeInfo, 7},
};
extern TypeInfo ColorCorrectionLookup_t243_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t3529_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m19397_MethodInfo/* Method Usage */,
	&ColorCorrectionLookup_t243_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisColorCorrectionLookup_t243_m33360_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3529_0_0_0;
extern Il2CppType InternalEnumerator_1_t3529_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3529_GenericClass;
TypeInfo InternalEnumerator_1_t3529_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3529_MethodInfos/* methods */
	, InternalEnumerator_1_t3529_PropertyInfos/* properties */
	, InternalEnumerator_1_t3529_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t550_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3529_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3529_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3529_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3529_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3529_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3529_1_0_0/* this_arg */
	, InternalEnumerator_1_t3529_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3529_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t3529_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3529)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8069_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.ColorCorrectionLookup>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.ColorCorrectionLookup>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.ColorCorrectionLookup>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.ColorCorrectionLookup>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.ColorCorrectionLookup>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.ColorCorrectionLookup>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.ColorCorrectionLookup>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.ColorCorrectionLookup>
extern MethodInfo ICollection_1_get_Count_m43851_MethodInfo;
static PropertyInfo ICollection_1_t8069____Count_PropertyInfo = 
{
	&ICollection_1_t8069_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m43851_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m43852_MethodInfo;
static PropertyInfo ICollection_1_t8069____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8069_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m43852_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8069_PropertyInfos[] =
{
	&ICollection_1_t8069____Count_PropertyInfo,
	&ICollection_1_t8069____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t386_0_0_0;
extern void* RuntimeInvoker_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m43851_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.ColorCorrectionLookup>::get_Count()
MethodInfo ICollection_1_get_Count_m43851_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8069_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m43851_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m43852_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.ColorCorrectionLookup>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m43852_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8069_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m43852_GenericMethod/* genericMethod */

};
extern Il2CppType ColorCorrectionLookup_t243_0_0_0;
extern Il2CppType ColorCorrectionLookup_t243_0_0_0;
static ParameterInfo ICollection_1_t8069_ICollection_1_Add_m43853_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ColorCorrectionLookup_t243_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m43853_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.ColorCorrectionLookup>::Add(T)
MethodInfo ICollection_1_Add_m43853_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8069_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t/* invoker_method */
	, ICollection_1_t8069_ICollection_1_Add_m43853_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m43853_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m43854_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.ColorCorrectionLookup>::Clear()
MethodInfo ICollection_1_Clear_m43854_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8069_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m43854_GenericMethod/* genericMethod */

};
extern Il2CppType ColorCorrectionLookup_t243_0_0_0;
static ParameterInfo ICollection_1_t8069_ICollection_1_Contains_m43855_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ColorCorrectionLookup_t243_0_0_0},
};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m43855_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.ColorCorrectionLookup>::Contains(T)
MethodInfo ICollection_1_Contains_m43855_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8069_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t379_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t379_Object_t/* invoker_method */
	, ICollection_1_t8069_ICollection_1_Contains_m43855_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m43855_GenericMethod/* genericMethod */

};
extern Il2CppType ColorCorrectionLookupU5BU5D_t5726_0_0_0;
extern Il2CppType ColorCorrectionLookupU5BU5D_t5726_0_0_0;
extern Il2CppType Int32_t386_0_0_0;
static ParameterInfo ICollection_1_t8069_ICollection_1_CopyTo_m43856_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ColorCorrectionLookupU5BU5D_t5726_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t386_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t_Int32_t386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m43856_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.ColorCorrectionLookup>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m43856_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8069_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t_Int32_t386/* invoker_method */
	, ICollection_1_t8069_ICollection_1_CopyTo_m43856_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m43856_GenericMethod/* genericMethod */

};
extern Il2CppType ColorCorrectionLookup_t243_0_0_0;
static ParameterInfo ICollection_1_t8069_ICollection_1_Remove_m43857_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ColorCorrectionLookup_t243_0_0_0},
};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m43857_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityStandardAssets.ImageEffects.ColorCorrectionLookup>::Remove(T)
MethodInfo ICollection_1_Remove_m43857_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8069_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t379_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t379_Object_t/* invoker_method */
	, ICollection_1_t8069_ICollection_1_Remove_m43857_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m43857_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8069_MethodInfos[] =
{
	&ICollection_1_get_Count_m43851_MethodInfo,
	&ICollection_1_get_IsReadOnly_m43852_MethodInfo,
	&ICollection_1_Add_m43853_MethodInfo,
	&ICollection_1_Clear_m43854_MethodInfo,
	&ICollection_1_Contains_m43855_MethodInfo,
	&ICollection_1_CopyTo_m43856_MethodInfo,
	&ICollection_1_Remove_m43857_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8071_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8069_InterfacesTypeInfos[] = 
{
	&IEnumerable_t55_il2cpp_TypeInfo,
	&IEnumerable_1_t8071_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8069_0_0_0;
extern Il2CppType ICollection_1_t8069_1_0_0;
struct ICollection_1_t8069;
extern Il2CppGenericClass ICollection_1_t8069_GenericClass;
TypeInfo ICollection_1_t8069_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8069_MethodInfos/* methods */
	, ICollection_1_t8069_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8069_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8069_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8069_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8069_0_0_0/* byval_arg */
	, &ICollection_1_t8069_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8069_GenericClass/* generic_class */
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
