#include "il2cpp_precompiled_header.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifndef _MSC_VER
#else
#endif
extern TypeInfo U3CStartU3Ec__Iterator4_t298_il2cpp_TypeInfo;

extern TypeInfo ParticleSystemMultiplier_t318_il2cpp_TypeInfo;
extern TypeInfo ExplosionFireAndDebris_t297_il2cpp_TypeInfo;
extern TypeInfo Ray_t300_il2cpp_TypeInfo;
extern TypeInfo NotSupportedException_t445_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m1260_MethodInfo;
extern MethodInfo Component_GetComponent_TisParticleSystemMultiplier_t318_m2020_MethodInfo;
extern MethodInfo Random_Range_m2021_MethodInfo;
extern MethodInfo Component_get_transform_m1739_MethodInfo;
extern MethodInfo Transform_get_position_m1738_MethodInfo;
extern MethodInfo Random_get_insideUnitSphere_m2022_MethodInfo;
extern MethodInfo Vector3_op_Multiply_m1746_MethodInfo;
extern MethodInfo Vector3_op_Addition_m1750_MethodInfo;
extern MethodInfo Random_get_rotation_m2023_MethodInfo;
extern MethodInfo Object_Instantiate_m2024_MethodInfo;
extern MethodInfo Physics_OverlapSphere_m2006_MethodInfo;
extern MethodInfo Vector3_op_Subtraction_m1740_MethodInfo;
extern MethodInfo Ray__ctor_m2025_MethodInfo;
extern MethodInfo Collider_Raycast_m2026_MethodInfo;
extern MethodInfo RaycastHit_get_point_m2027_MethodInfo;
extern MethodInfo RaycastHit_get_normal_m2028_MethodInfo;
extern MethodInfo ExplosionFireAndDebris_AddFire_m1065_MethodInfo;
extern MethodInfo Vector3_get_up_m1876_MethodInfo;
extern MethodInfo Random_get_onUnitSphere_m2029_MethodInfo;
extern MethodInfo Physics_Raycast_m2030_MethodInfo;
extern MethodInfo NotSupportedException__ctor_m1445_MethodInfo;
struct Component_t507;
struct Component_t507;
// Declaration !!0 UnityEngine.Component::GetComponent<System.Object>()
// !!0 UnityEngine.Component::GetComponent<System.Object>()
 Object_t * Component_GetComponent_TisObject_t_m1761_gshared (Component_t507 * __this, MethodInfo* method);
#define Component_GetComponent_TisObject_t_m1761(__this, method) (Object_t *)Component_GetComponent_TisObject_t_m1761_gshared((Component_t507 *)__this, method)
// Declaration !!0 UnityEngine.Component::GetComponent<UnityStandardAssets.Effects.ParticleSystemMultiplier>()
// !!0 UnityEngine.Component::GetComponent<UnityStandardAssets.Effects.ParticleSystemMultiplier>()
#define Component_GetComponent_TisParticleSystemMultiplier_t318_m2020(__this, method) (ParticleSystemMultiplier_t318 *)Component_GetComponent_TisObject_t_m1761_gshared((Component_t507 *)__this, method)


// System.Void UnityStandardAssets.Effects.ExplosionFireAndDebris/<Start>c__Iterator4::.ctor()
extern MethodInfo U3CStartU3Ec__Iterator4__ctor_m1057_MethodInfo;
 void U3CStartU3Ec__Iterator4__ctor_m1057 (U3CStartU3Ec__Iterator4_t298 * __this, MethodInfo* method){
	{
		Object__ctor_m1260(__this, /*hidden argument*/&Object__ctor_m1260_MethodInfo);
		return;
	}
}
// System.Object UnityStandardAssets.Effects.ExplosionFireAndDebris/<Start>c__Iterator4::System.Collections.Generic.IEnumerator<object>.get_Current()
extern MethodInfo U3CStartU3Ec__Iterator4_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1058_MethodInfo;
 Object_t * U3CStartU3Ec__Iterator4_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1058 (U3CStartU3Ec__Iterator4_t298 * __this, MethodInfo* method){
	{
		Object_t * L_0 = (__this->___$current_16);
		return L_0;
	}
}
// System.Object UnityStandardAssets.Effects.ExplosionFireAndDebris/<Start>c__Iterator4::System.Collections.IEnumerator.get_Current()
extern MethodInfo U3CStartU3Ec__Iterator4_System_Collections_IEnumerator_get_Current_m1059_MethodInfo;
 Object_t * U3CStartU3Ec__Iterator4_System_Collections_IEnumerator_get_Current_m1059 (U3CStartU3Ec__Iterator4_t298 * __this, MethodInfo* method){
	{
		Object_t * L_0 = (__this->___$current_16);
		return L_0;
	}
}
// System.Boolean UnityStandardAssets.Effects.ExplosionFireAndDebris/<Start>c__Iterator4::MoveNext()
extern MethodInfo U3CStartU3Ec__Iterator4_MoveNext_m1060_MethodInfo;
 bool U3CStartU3Ec__Iterator4_MoveNext_m1060 (U3CStartU3Ec__Iterator4_t298 * __this, MethodInfo* method){
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = (__this->___$PC_15);
		V_0 = L_0;
		__this->___$PC_15 = (-1);
		if (V_0 == 0)
		{
			goto IL_0021;
		}
		if (V_0 == 1)
		{
			goto IL_0100;
		}
	}
	{
		goto IL_02fe;
	}

IL_0021:
	{
		ExplosionFireAndDebris_t297 * L_1 = (__this->___U3CU3Ef__this_17);
		NullCheck(L_1);
		ParticleSystemMultiplier_t318 * L_2 = Component_GetComponent_TisParticleSystemMultiplier_t318_m2020(L_1, /*hidden argument*/&Component_GetComponent_TisParticleSystemMultiplier_t318_m2020_MethodInfo);
		NullCheck(L_2);
		float L_3 = (L_2->___multiplier_2);
		__this->___U3CmultiplierU3E__0_0 = L_3;
		__this->___U3CnU3E__1_1 = 0;
		goto IL_00ce;
	}

IL_0043:
	{
		ExplosionFireAndDebris_t297 * L_4 = (__this->___U3CU3Ef__this_17);
		NullCheck(L_4);
		TransformU5BU5D_t302* L_5 = (L_4->___debrisPrefabs_2);
		ExplosionFireAndDebris_t297 * L_6 = (__this->___U3CU3Ef__this_17);
		NullCheck(L_6);
		TransformU5BU5D_t302* L_7 = (L_6->___debrisPrefabs_2);
		NullCheck(L_7);
		int32_t L_8 = Random_Range_m2021(NULL /*static, unused*/, 0, (((int32_t)(((Array_t *)L_7)->max_length))), /*hidden argument*/&Random_Range_m2021_MethodInfo);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_8);
		int32_t L_9 = L_8;
		__this->___U3CprefabU3E__2_2 = (*(Transform_t173 **)(Transform_t173 **)SZArrayLdElema(L_5, L_9));
		ExplosionFireAndDebris_t297 * L_10 = (__this->___U3CU3Ef__this_17);
		NullCheck(L_10);
		Transform_t173 * L_11 = Component_get_transform_m1739(L_10, /*hidden argument*/&Component_get_transform_m1739_MethodInfo);
		NullCheck(L_11);
		Vector3_t175  L_12 = Transform_get_position_m1738(L_11, /*hidden argument*/&Transform_get_position_m1738_MethodInfo);
		Vector3_t175  L_13 = Random_get_insideUnitSphere_m2022(NULL /*static, unused*/, /*hidden argument*/&Random_get_insideUnitSphere_m2022_MethodInfo);
		Vector3_t175  L_14 = Vector3_op_Multiply_m1746(NULL /*static, unused*/, L_13, (3.0f), /*hidden argument*/&Vector3_op_Multiply_m1746_MethodInfo);
		float L_15 = (__this->___U3CmultiplierU3E__0_0);
		Vector3_t175  L_16 = Vector3_op_Multiply_m1746(NULL /*static, unused*/, L_14, L_15, /*hidden argument*/&Vector3_op_Multiply_m1746_MethodInfo);
		Vector3_t175  L_17 = Vector3_op_Addition_m1750(NULL /*static, unused*/, L_12, L_16, /*hidden argument*/&Vector3_op_Addition_m1750_MethodInfo);
		__this->___U3CposU3E__3_3 = L_17;
		Quaternion_t299  L_18 = Random_get_rotation_m2023(NULL /*static, unused*/, /*hidden argument*/&Random_get_rotation_m2023_MethodInfo);
		__this->___U3CrotU3E__4_4 = L_18;
		Transform_t173 * L_19 = (__this->___U3CprefabU3E__2_2);
		Vector3_t175  L_20 = (__this->___U3CposU3E__3_3);
		Quaternion_t299  L_21 = (__this->___U3CrotU3E__4_4);
		Object_Instantiate_m2024(NULL /*static, unused*/, L_19, L_20, L_21, /*hidden argument*/&Object_Instantiate_m2024_MethodInfo);
		int32_t L_22 = (__this->___U3CnU3E__1_1);
		__this->___U3CnU3E__1_1 = ((int32_t)(L_22+1));
	}

IL_00ce:
	{
		int32_t L_23 = (__this->___U3CnU3E__1_1);
		ExplosionFireAndDebris_t297 * L_24 = (__this->___U3CU3Ef__this_17);
		NullCheck(L_24);
		int32_t L_25 = (L_24->___numDebrisPieces_4);
		float L_26 = (__this->___U3CmultiplierU3E__0_0);
		if ((((float)(((float)L_23))) < ((float)((float)((float)(((float)L_25))*(float)L_26)))))
		{
			goto IL_0043;
		}
	}
	{
		__this->___$current_16 = NULL;
		__this->___$PC_15 = 1;
		goto IL_0300;
	}

IL_0100:
	{
		float L_27 = (__this->___U3CmultiplierU3E__0_0);
		__this->___U3CrU3E__5_5 = ((float)((float)(10.0f)*(float)L_27));
		ExplosionFireAndDebris_t297 * L_28 = (__this->___U3CU3Ef__this_17);
		NullCheck(L_28);
		Transform_t173 * L_29 = Component_get_transform_m1739(L_28, /*hidden argument*/&Component_get_transform_m1739_MethodInfo);
		NullCheck(L_29);
		Vector3_t175  L_30 = Transform_get_position_m1738(L_29, /*hidden argument*/&Transform_get_position_m1738_MethodInfo);
		float L_31 = (__this->___U3CrU3E__5_5);
		ColliderU5BU5D_t293* L_32 = Physics_OverlapSphere_m2006(NULL /*static, unused*/, L_30, L_31, /*hidden argument*/&Physics_OverlapSphere_m2006_MethodInfo);
		__this->___U3CcolsU3E__6_6 = L_32;
		ColliderU5BU5D_t293* L_33 = (__this->___U3CcolsU3E__6_6);
		__this->___U3C$s_60U3E__7_7 = L_33;
		__this->___U3C$s_61U3E__8_8 = 0;
		goto IL_021e;
	}

IL_014b:
	{
		ColliderU5BU5D_t293* L_34 = (__this->___U3C$s_60U3E__7_7);
		int32_t L_35 = (__this->___U3C$s_61U3E__8_8);
		NullCheck(L_34);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_34, L_35);
		int32_t L_36 = L_35;
		__this->___U3CcolU3E__9_9 = (*(Collider_t296 **)(Collider_t296 **)SZArrayLdElema(L_34, L_36));
		ExplosionFireAndDebris_t297 * L_37 = (__this->___U3CU3Ef__this_17);
		NullCheck(L_37);
		int32_t L_38 = (L_37->___numFires_5);
		if ((((int32_t)L_38) <= ((int32_t)0)))
		{
			goto IL_0210;
		}
	}
	{
		ExplosionFireAndDebris_t297 * L_39 = (__this->___U3CU3Ef__this_17);
		NullCheck(L_39);
		Transform_t173 * L_40 = Component_get_transform_m1739(L_39, /*hidden argument*/&Component_get_transform_m1739_MethodInfo);
		NullCheck(L_40);
		Vector3_t175  L_41 = Transform_get_position_m1738(L_40, /*hidden argument*/&Transform_get_position_m1738_MethodInfo);
		Collider_t296 * L_42 = (__this->___U3CcolU3E__9_9);
		NullCheck(L_42);
		Transform_t173 * L_43 = Component_get_transform_m1739(L_42, /*hidden argument*/&Component_get_transform_m1739_MethodInfo);
		NullCheck(L_43);
		Vector3_t175  L_44 = Transform_get_position_m1738(L_43, /*hidden argument*/&Transform_get_position_m1738_MethodInfo);
		ExplosionFireAndDebris_t297 * L_45 = (__this->___U3CU3Ef__this_17);
		NullCheck(L_45);
		Transform_t173 * L_46 = Component_get_transform_m1739(L_45, /*hidden argument*/&Component_get_transform_m1739_MethodInfo);
		NullCheck(L_46);
		Vector3_t175  L_47 = Transform_get_position_m1738(L_46, /*hidden argument*/&Transform_get_position_m1738_MethodInfo);
		Vector3_t175  L_48 = Vector3_op_Subtraction_m1740(NULL /*static, unused*/, L_44, L_47, /*hidden argument*/&Vector3_op_Subtraction_m1740_MethodInfo);
		Ray_t300  L_49 = {0};
		Ray__ctor_m2025(&L_49, L_41, L_48, /*hidden argument*/&Ray__ctor_m2025_MethodInfo);
		__this->___U3CfireRayU3E__10_10 = L_49;
		Collider_t296 * L_50 = (__this->___U3CcolU3E__9_9);
		Ray_t300  L_51 = (__this->___U3CfireRayU3E__10_10);
		RaycastHit_t301 * L_52 = &(__this->___U3CfireHitU3E__11_11);
		float L_53 = (__this->___U3CrU3E__5_5);
		NullCheck(L_50);
		bool L_54 = Collider_Raycast_m2026(L_50, L_51, L_52, L_53, /*hidden argument*/&Collider_Raycast_m2026_MethodInfo);
		if (!L_54)
		{
			goto IL_0210;
		}
	}
	{
		ExplosionFireAndDebris_t297 * L_55 = (__this->___U3CU3Ef__this_17);
		Collider_t296 * L_56 = (__this->___U3CcolU3E__9_9);
		NullCheck(L_56);
		Transform_t173 * L_57 = Component_get_transform_m1739(L_56, /*hidden argument*/&Component_get_transform_m1739_MethodInfo);
		RaycastHit_t301 * L_58 = &(__this->___U3CfireHitU3E__11_11);
		Vector3_t175  L_59 = RaycastHit_get_point_m2027(L_58, /*hidden argument*/&RaycastHit_get_point_m2027_MethodInfo);
		RaycastHit_t301 * L_60 = &(__this->___U3CfireHitU3E__11_11);
		Vector3_t175  L_61 = RaycastHit_get_normal_m2028(L_60, /*hidden argument*/&RaycastHit_get_normal_m2028_MethodInfo);
		NullCheck(L_55);
		ExplosionFireAndDebris_AddFire_m1065(L_55, L_57, L_59, L_61, /*hidden argument*/&ExplosionFireAndDebris_AddFire_m1065_MethodInfo);
		ExplosionFireAndDebris_t297 * L_62 = (__this->___U3CU3Ef__this_17);
		ExplosionFireAndDebris_t297 * L_63 = L_62;
		NullCheck(L_63);
		int32_t L_64 = (L_63->___numFires_5);
		NullCheck(L_63);
		L_63->___numFires_5 = ((int32_t)(L_64-1));
	}

IL_0210:
	{
		int32_t L_65 = (__this->___U3C$s_61U3E__8_8);
		__this->___U3C$s_61U3E__8_8 = ((int32_t)(L_65+1));
	}

IL_021e:
	{
		int32_t L_66 = (__this->___U3C$s_61U3E__8_8);
		ColliderU5BU5D_t293* L_67 = (__this->___U3C$s_60U3E__7_7);
		NullCheck(L_67);
		if ((((int32_t)L_66) < ((int32_t)(((int32_t)(((Array_t *)L_67)->max_length))))))
		{
			goto IL_014b;
		}
	}
	{
		__this->___U3CtestRU3E__12_12 = (0.0f);
		goto IL_02d5;
	}

IL_0241:
	{
		ExplosionFireAndDebris_t297 * L_68 = (__this->___U3CU3Ef__this_17);
		NullCheck(L_68);
		Transform_t173 * L_69 = Component_get_transform_m1739(L_68, /*hidden argument*/&Component_get_transform_m1739_MethodInfo);
		NullCheck(L_69);
		Vector3_t175  L_70 = Transform_get_position_m1738(L_69, /*hidden argument*/&Transform_get_position_m1738_MethodInfo);
		Vector3_t175  L_71 = Vector3_get_up_m1876(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_up_m1876_MethodInfo);
		Vector3_t175  L_72 = Vector3_op_Addition_m1750(NULL /*static, unused*/, L_70, L_71, /*hidden argument*/&Vector3_op_Addition_m1750_MethodInfo);
		Vector3_t175  L_73 = Random_get_onUnitSphere_m2029(NULL /*static, unused*/, /*hidden argument*/&Random_get_onUnitSphere_m2029_MethodInfo);
		Ray_t300  L_74 = {0};
		Ray__ctor_m2025(&L_74, L_72, L_73, /*hidden argument*/&Ray__ctor_m2025_MethodInfo);
		__this->___U3CfireRayU3E__13_13 = L_74;
		Ray_t300  L_75 = (__this->___U3CfireRayU3E__13_13);
		RaycastHit_t301 * L_76 = &(__this->___U3CfireHitU3E__14_14);
		float L_77 = (__this->___U3CtestRU3E__12_12);
		bool L_78 = Physics_Raycast_m2030(NULL /*static, unused*/, L_75, L_76, L_77, /*hidden argument*/&Physics_Raycast_m2030_MethodInfo);
		if (!L_78)
		{
			goto IL_02bc;
		}
	}
	{
		ExplosionFireAndDebris_t297 * L_79 = (__this->___U3CU3Ef__this_17);
		RaycastHit_t301 * L_80 = &(__this->___U3CfireHitU3E__14_14);
		Vector3_t175  L_81 = RaycastHit_get_point_m2027(L_80, /*hidden argument*/&RaycastHit_get_point_m2027_MethodInfo);
		RaycastHit_t301 * L_82 = &(__this->___U3CfireHitU3E__14_14);
		Vector3_t175  L_83 = RaycastHit_get_normal_m2028(L_82, /*hidden argument*/&RaycastHit_get_normal_m2028_MethodInfo);
		NullCheck(L_79);
		ExplosionFireAndDebris_AddFire_m1065(L_79, (Transform_t173 *)NULL, L_81, L_83, /*hidden argument*/&ExplosionFireAndDebris_AddFire_m1065_MethodInfo);
		ExplosionFireAndDebris_t297 * L_84 = (__this->___U3CU3Ef__this_17);
		ExplosionFireAndDebris_t297 * L_85 = L_84;
		NullCheck(L_85);
		int32_t L_86 = (L_85->___numFires_5);
		NullCheck(L_85);
		L_85->___numFires_5 = ((int32_t)(L_86-1));
	}

IL_02bc:
	{
		float L_87 = (__this->___U3CtestRU3E__12_12);
		float L_88 = (__this->___U3CrU3E__5_5);
		__this->___U3CtestRU3E__12_12 = ((float)(L_87+((float)((float)L_88*(float)(0.1f)))));
	}

IL_02d5:
	{
		ExplosionFireAndDebris_t297 * L_89 = (__this->___U3CU3Ef__this_17);
		NullCheck(L_89);
		int32_t L_90 = (L_89->___numFires_5);
		if ((((int32_t)L_90) <= ((int32_t)0)))
		{
			goto IL_02f7;
		}
	}
	{
		float L_91 = (__this->___U3CtestRU3E__12_12);
		float L_92 = (__this->___U3CrU3E__5_5);
		if ((((float)L_91) < ((float)L_92)))
		{
			goto IL_0241;
		}
	}

IL_02f7:
	{
		__this->___$PC_15 = (-1);
	}

IL_02fe:
	{
		return 0;
	}

IL_0300:
	{
		return 1;
	}
	// Dead block : IL_0302: ldloc.1
}
// System.Void UnityStandardAssets.Effects.ExplosionFireAndDebris/<Start>c__Iterator4::Dispose()
extern MethodInfo U3CStartU3Ec__Iterator4_Dispose_m1061_MethodInfo;
 void U3CStartU3Ec__Iterator4_Dispose_m1061 (U3CStartU3Ec__Iterator4_t298 * __this, MethodInfo* method){
	{
		__this->___$PC_15 = (-1);
		return;
	}
}
// System.Void UnityStandardAssets.Effects.ExplosionFireAndDebris/<Start>c__Iterator4::Reset()
extern MethodInfo U3CStartU3Ec__Iterator4_Reset_m1062_MethodInfo;
 void U3CStartU3Ec__Iterator4_Reset_m1062 (U3CStartU3Ec__Iterator4_t298 * __this, MethodInfo* method){
	{
		NotSupportedException_t445 * L_0 = (NotSupportedException_t445 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t445_il2cpp_TypeInfo));
		NotSupportedException__ctor_m1445(L_0, /*hidden argument*/&NotSupportedException__ctor_m1445_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// Metadata Definition UnityStandardAssets.Effects.ExplosionFireAndDebris/<Start>c__Iterator4
extern Il2CppType Single_t448_0_0_3;
FieldInfo U3CStartU3Ec__Iterator4_t298____U3CmultiplierU3E__0_0_FieldInfo = 
{
	"<multiplier>__0"/* name */
	, &Single_t448_0_0_3/* type */
	, &U3CStartU3Ec__Iterator4_t298_il2cpp_TypeInfo/* parent */
	, offsetof(U3CStartU3Ec__Iterator4_t298, ___U3CmultiplierU3E__0_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t386_0_0_3;
FieldInfo U3CStartU3Ec__Iterator4_t298____U3CnU3E__1_1_FieldInfo = 
{
	"<n>__1"/* name */
	, &Int32_t386_0_0_3/* type */
	, &U3CStartU3Ec__Iterator4_t298_il2cpp_TypeInfo/* parent */
	, offsetof(U3CStartU3Ec__Iterator4_t298, ___U3CnU3E__1_1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Transform_t173_0_0_3;
FieldInfo U3CStartU3Ec__Iterator4_t298____U3CprefabU3E__2_2_FieldInfo = 
{
	"<prefab>__2"/* name */
	, &Transform_t173_0_0_3/* type */
	, &U3CStartU3Ec__Iterator4_t298_il2cpp_TypeInfo/* parent */
	, offsetof(U3CStartU3Ec__Iterator4_t298, ___U3CprefabU3E__2_2)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Vector3_t175_0_0_3;
FieldInfo U3CStartU3Ec__Iterator4_t298____U3CposU3E__3_3_FieldInfo = 
{
	"<pos>__3"/* name */
	, &Vector3_t175_0_0_3/* type */
	, &U3CStartU3Ec__Iterator4_t298_il2cpp_TypeInfo/* parent */
	, offsetof(U3CStartU3Ec__Iterator4_t298, ___U3CposU3E__3_3)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Quaternion_t299_0_0_3;
FieldInfo U3CStartU3Ec__Iterator4_t298____U3CrotU3E__4_4_FieldInfo = 
{
	"<rot>__4"/* name */
	, &Quaternion_t299_0_0_3/* type */
	, &U3CStartU3Ec__Iterator4_t298_il2cpp_TypeInfo/* parent */
	, offsetof(U3CStartU3Ec__Iterator4_t298, ___U3CrotU3E__4_4)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Single_t448_0_0_3;
FieldInfo U3CStartU3Ec__Iterator4_t298____U3CrU3E__5_5_FieldInfo = 
{
	"<r>__5"/* name */
	, &Single_t448_0_0_3/* type */
	, &U3CStartU3Ec__Iterator4_t298_il2cpp_TypeInfo/* parent */
	, offsetof(U3CStartU3Ec__Iterator4_t298, ___U3CrU3E__5_5)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType ColliderU5BU5D_t293_0_0_3;
FieldInfo U3CStartU3Ec__Iterator4_t298____U3CcolsU3E__6_6_FieldInfo = 
{
	"<cols>__6"/* name */
	, &ColliderU5BU5D_t293_0_0_3/* type */
	, &U3CStartU3Ec__Iterator4_t298_il2cpp_TypeInfo/* parent */
	, offsetof(U3CStartU3Ec__Iterator4_t298, ___U3CcolsU3E__6_6)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType ColliderU5BU5D_t293_0_0_3;
FieldInfo U3CStartU3Ec__Iterator4_t298____U3C$s_60U3E__7_7_FieldInfo = 
{
	"<$s_60>__7"/* name */
	, &ColliderU5BU5D_t293_0_0_3/* type */
	, &U3CStartU3Ec__Iterator4_t298_il2cpp_TypeInfo/* parent */
	, offsetof(U3CStartU3Ec__Iterator4_t298, ___U3C$s_60U3E__7_7)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t386_0_0_3;
FieldInfo U3CStartU3Ec__Iterator4_t298____U3C$s_61U3E__8_8_FieldInfo = 
{
	"<$s_61>__8"/* name */
	, &Int32_t386_0_0_3/* type */
	, &U3CStartU3Ec__Iterator4_t298_il2cpp_TypeInfo/* parent */
	, offsetof(U3CStartU3Ec__Iterator4_t298, ___U3C$s_61U3E__8_8)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Collider_t296_0_0_3;
FieldInfo U3CStartU3Ec__Iterator4_t298____U3CcolU3E__9_9_FieldInfo = 
{
	"<col>__9"/* name */
	, &Collider_t296_0_0_3/* type */
	, &U3CStartU3Ec__Iterator4_t298_il2cpp_TypeInfo/* parent */
	, offsetof(U3CStartU3Ec__Iterator4_t298, ___U3CcolU3E__9_9)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Ray_t300_0_0_3;
FieldInfo U3CStartU3Ec__Iterator4_t298____U3CfireRayU3E__10_10_FieldInfo = 
{
	"<fireRay>__10"/* name */
	, &Ray_t300_0_0_3/* type */
	, &U3CStartU3Ec__Iterator4_t298_il2cpp_TypeInfo/* parent */
	, offsetof(U3CStartU3Ec__Iterator4_t298, ___U3CfireRayU3E__10_10)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType RaycastHit_t301_0_0_3;
FieldInfo U3CStartU3Ec__Iterator4_t298____U3CfireHitU3E__11_11_FieldInfo = 
{
	"<fireHit>__11"/* name */
	, &RaycastHit_t301_0_0_3/* type */
	, &U3CStartU3Ec__Iterator4_t298_il2cpp_TypeInfo/* parent */
	, offsetof(U3CStartU3Ec__Iterator4_t298, ___U3CfireHitU3E__11_11)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Single_t448_0_0_3;
FieldInfo U3CStartU3Ec__Iterator4_t298____U3CtestRU3E__12_12_FieldInfo = 
{
	"<testR>__12"/* name */
	, &Single_t448_0_0_3/* type */
	, &U3CStartU3Ec__Iterator4_t298_il2cpp_TypeInfo/* parent */
	, offsetof(U3CStartU3Ec__Iterator4_t298, ___U3CtestRU3E__12_12)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Ray_t300_0_0_3;
FieldInfo U3CStartU3Ec__Iterator4_t298____U3CfireRayU3E__13_13_FieldInfo = 
{
	"<fireRay>__13"/* name */
	, &Ray_t300_0_0_3/* type */
	, &U3CStartU3Ec__Iterator4_t298_il2cpp_TypeInfo/* parent */
	, offsetof(U3CStartU3Ec__Iterator4_t298, ___U3CfireRayU3E__13_13)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType RaycastHit_t301_0_0_3;
FieldInfo U3CStartU3Ec__Iterator4_t298____U3CfireHitU3E__14_14_FieldInfo = 
{
	"<fireHit>__14"/* name */
	, &RaycastHit_t301_0_0_3/* type */
	, &U3CStartU3Ec__Iterator4_t298_il2cpp_TypeInfo/* parent */
	, offsetof(U3CStartU3Ec__Iterator4_t298, ___U3CfireHitU3E__14_14)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t386_0_0_3;
FieldInfo U3CStartU3Ec__Iterator4_t298____$PC_15_FieldInfo = 
{
	"$PC"/* name */
	, &Int32_t386_0_0_3/* type */
	, &U3CStartU3Ec__Iterator4_t298_il2cpp_TypeInfo/* parent */
	, offsetof(U3CStartU3Ec__Iterator4_t298, ___$PC_15)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Object_t_0_0_3;
FieldInfo U3CStartU3Ec__Iterator4_t298____$current_16_FieldInfo = 
{
	"$current"/* name */
	, &Object_t_0_0_3/* type */
	, &U3CStartU3Ec__Iterator4_t298_il2cpp_TypeInfo/* parent */
	, offsetof(U3CStartU3Ec__Iterator4_t298, ___$current_16)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType ExplosionFireAndDebris_t297_0_0_3;
FieldInfo U3CStartU3Ec__Iterator4_t298____U3CU3Ef__this_17_FieldInfo = 
{
	"<>f__this"/* name */
	, &ExplosionFireAndDebris_t297_0_0_3/* type */
	, &U3CStartU3Ec__Iterator4_t298_il2cpp_TypeInfo/* parent */
	, offsetof(U3CStartU3Ec__Iterator4_t298, ___U3CU3Ef__this_17)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* U3CStartU3Ec__Iterator4_t298_FieldInfos[] =
{
	&U3CStartU3Ec__Iterator4_t298____U3CmultiplierU3E__0_0_FieldInfo,
	&U3CStartU3Ec__Iterator4_t298____U3CnU3E__1_1_FieldInfo,
	&U3CStartU3Ec__Iterator4_t298____U3CprefabU3E__2_2_FieldInfo,
	&U3CStartU3Ec__Iterator4_t298____U3CposU3E__3_3_FieldInfo,
	&U3CStartU3Ec__Iterator4_t298____U3CrotU3E__4_4_FieldInfo,
	&U3CStartU3Ec__Iterator4_t298____U3CrU3E__5_5_FieldInfo,
	&U3CStartU3Ec__Iterator4_t298____U3CcolsU3E__6_6_FieldInfo,
	&U3CStartU3Ec__Iterator4_t298____U3C$s_60U3E__7_7_FieldInfo,
	&U3CStartU3Ec__Iterator4_t298____U3C$s_61U3E__8_8_FieldInfo,
	&U3CStartU3Ec__Iterator4_t298____U3CcolU3E__9_9_FieldInfo,
	&U3CStartU3Ec__Iterator4_t298____U3CfireRayU3E__10_10_FieldInfo,
	&U3CStartU3Ec__Iterator4_t298____U3CfireHitU3E__11_11_FieldInfo,
	&U3CStartU3Ec__Iterator4_t298____U3CtestRU3E__12_12_FieldInfo,
	&U3CStartU3Ec__Iterator4_t298____U3CfireRayU3E__13_13_FieldInfo,
	&U3CStartU3Ec__Iterator4_t298____U3CfireHitU3E__14_14_FieldInfo,
	&U3CStartU3Ec__Iterator4_t298____$PC_15_FieldInfo,
	&U3CStartU3Ec__Iterator4_t298____$current_16_FieldInfo,
	&U3CStartU3Ec__Iterator4_t298____U3CU3Ef__this_17_FieldInfo,
	NULL
};
static PropertyInfo U3CStartU3Ec__Iterator4_t298____System_Collections_Generic_IEnumeratorU3CobjectU3E_Current_PropertyInfo = 
{
	&U3CStartU3Ec__Iterator4_t298_il2cpp_TypeInfo/* parent */
	, "System.Collections.Generic.IEnumerator<object>.Current"/* name */
	, &U3CStartU3Ec__Iterator4_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1058_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo U3CStartU3Ec__Iterator4_t298____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&U3CStartU3Ec__Iterator4_t298_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &U3CStartU3Ec__Iterator4_System_Collections_IEnumerator_get_Current_m1059_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* U3CStartU3Ec__Iterator4_t298_PropertyInfos[] =
{
	&U3CStartU3Ec__Iterator4_t298____System_Collections_Generic_IEnumeratorU3CobjectU3E_Current_PropertyInfo,
	&U3CStartU3Ec__Iterator4_t298____System_Collections_IEnumerator_Current_PropertyInfo,
	NULL
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
// System.Void UnityStandardAssets.Effects.ExplosionFireAndDebris/<Start>c__Iterator4::.ctor()
MethodInfo U3CStartU3Ec__Iterator4__ctor_m1057_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&U3CStartU3Ec__Iterator4__ctor_m1057/* method */
	, &U3CStartU3Ec__Iterator4_t298_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1155/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache U3CStartU3Ec__Iterator4_t298__CustomAttributeCache_U3CStartU3Ec__Iterator4_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1058;
// System.Object UnityStandardAssets.Effects.ExplosionFireAndDebris/<Start>c__Iterator4::System.Collections.Generic.IEnumerator<object>.get_Current()
MethodInfo U3CStartU3Ec__Iterator4_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1058_MethodInfo = 
{
	"System.Collections.Generic.IEnumerator<object>.get_Current"/* name */
	, (methodPointerType)&U3CStartU3Ec__Iterator4_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1058/* method */
	, &U3CStartU3Ec__Iterator4_t298_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &U3CStartU3Ec__Iterator4_t298__CustomAttributeCache_U3CStartU3Ec__Iterator4_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1058/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1156/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache U3CStartU3Ec__Iterator4_t298__CustomAttributeCache_U3CStartU3Ec__Iterator4_System_Collections_IEnumerator_get_Current_m1059;
// System.Object UnityStandardAssets.Effects.ExplosionFireAndDebris/<Start>c__Iterator4::System.Collections.IEnumerator.get_Current()
MethodInfo U3CStartU3Ec__Iterator4_System_Collections_IEnumerator_get_Current_m1059_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&U3CStartU3Ec__Iterator4_System_Collections_IEnumerator_get_Current_m1059/* method */
	, &U3CStartU3Ec__Iterator4_t298_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &U3CStartU3Ec__Iterator4_t298__CustomAttributeCache_U3CStartU3Ec__Iterator4_System_Collections_IEnumerator_get_Current_m1059/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1157/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379 (MethodInfo* method, void* obj, void** args);
// System.Boolean UnityStandardAssets.Effects.ExplosionFireAndDebris/<Start>c__Iterator4::MoveNext()
MethodInfo U3CStartU3Ec__Iterator4_MoveNext_m1060_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&U3CStartU3Ec__Iterator4_MoveNext_m1060/* method */
	, &U3CStartU3Ec__Iterator4_t298_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t379_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t379/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1158/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache U3CStartU3Ec__Iterator4_t298__CustomAttributeCache_U3CStartU3Ec__Iterator4_Dispose_m1061;
// System.Void UnityStandardAssets.Effects.ExplosionFireAndDebris/<Start>c__Iterator4::Dispose()
MethodInfo U3CStartU3Ec__Iterator4_Dispose_m1061_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&U3CStartU3Ec__Iterator4_Dispose_m1061/* method */
	, &U3CStartU3Ec__Iterator4_t298_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &U3CStartU3Ec__Iterator4_t298__CustomAttributeCache_U3CStartU3Ec__Iterator4_Dispose_m1061/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1159/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache U3CStartU3Ec__Iterator4_t298__CustomAttributeCache_U3CStartU3Ec__Iterator4_Reset_m1062;
// System.Void UnityStandardAssets.Effects.ExplosionFireAndDebris/<Start>c__Iterator4::Reset()
MethodInfo U3CStartU3Ec__Iterator4_Reset_m1062_MethodInfo = 
{
	"Reset"/* name */
	, (methodPointerType)&U3CStartU3Ec__Iterator4_Reset_m1062/* method */
	, &U3CStartU3Ec__Iterator4_t298_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &U3CStartU3Ec__Iterator4_t298__CustomAttributeCache_U3CStartU3Ec__Iterator4_Reset_m1062/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1160/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* U3CStartU3Ec__Iterator4_t298_MethodInfos[] =
{
	&U3CStartU3Ec__Iterator4__ctor_m1057_MethodInfo,
	&U3CStartU3Ec__Iterator4_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1058_MethodInfo,
	&U3CStartU3Ec__Iterator4_System_Collections_IEnumerator_get_Current_m1059_MethodInfo,
	&U3CStartU3Ec__Iterator4_MoveNext_m1060_MethodInfo,
	&U3CStartU3Ec__Iterator4_Dispose_m1061_MethodInfo,
	&U3CStartU3Ec__Iterator4_Reset_m1062_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m1252_MethodInfo;
extern MethodInfo Object_Finalize_m1253_MethodInfo;
extern MethodInfo Object_GetHashCode_m1254_MethodInfo;
extern MethodInfo Object_ToString_m1255_MethodInfo;
static MethodInfo* U3CStartU3Ec__Iterator4_t298_VTable[] =
{
	&Object_Equals_m1252_MethodInfo,
	&Object_Finalize_m1253_MethodInfo,
	&Object_GetHashCode_m1254_MethodInfo,
	&Object_ToString_m1255_MethodInfo,
	&U3CStartU3Ec__Iterator4_Dispose_m1061_MethodInfo,
	&U3CStartU3Ec__Iterator4_System_Collections_IEnumerator_get_Current_m1059_MethodInfo,
	&U3CStartU3Ec__Iterator4_MoveNext_m1060_MethodInfo,
	&U3CStartU3Ec__Iterator4_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1058_MethodInfo,
	&U3CStartU3Ec__Iterator4_Reset_m1062_MethodInfo,
};
extern TypeInfo IDisposable_t444_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_t26_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t53_il2cpp_TypeInfo;
static TypeInfo* U3CStartU3Ec__Iterator4_t298_InterfacesTypeInfos[] = 
{
	&IDisposable_t444_il2cpp_TypeInfo,
	&IEnumerator_t26_il2cpp_TypeInfo,
	&IEnumerator_1_t53_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair U3CStartU3Ec__Iterator4_t298_InterfacesOffsets[] = 
{
	{ &IDisposable_t444_il2cpp_TypeInfo, 4},
	{ &IEnumerator_t26_il2cpp_TypeInfo, 5},
	{ &IEnumerator_1_t53_il2cpp_TypeInfo, 7},
};
extern TypeInfo CompilerGeneratedAttribute_t384_il2cpp_TypeInfo;
extern MethodInfo CompilerGeneratedAttribute__ctor_m1269_MethodInfo;
void U3CStartU3Ec__Iterator4_t298_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t384 * tmp;
		tmp = (CompilerGeneratedAttribute_t384 *)il2cpp_codegen_object_new (&CompilerGeneratedAttribute_t384_il2cpp_TypeInfo);
		CompilerGeneratedAttribute__ctor_m1269(tmp, &CompilerGeneratedAttribute__ctor_m1269_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo DebuggerHiddenAttribute_t447_il2cpp_TypeInfo;
extern MethodInfo DebuggerHiddenAttribute__ctor_m1446_MethodInfo;
void U3CStartU3Ec__Iterator4_t298_CustomAttributesCacheGenerator_U3CStartU3Ec__Iterator4_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1058(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t447 * tmp;
		tmp = (DebuggerHiddenAttribute_t447 *)il2cpp_codegen_object_new (&DebuggerHiddenAttribute_t447_il2cpp_TypeInfo);
		DebuggerHiddenAttribute__ctor_m1446(tmp, &DebuggerHiddenAttribute__ctor_m1446_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void U3CStartU3Ec__Iterator4_t298_CustomAttributesCacheGenerator_U3CStartU3Ec__Iterator4_System_Collections_IEnumerator_get_Current_m1059(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t447 * tmp;
		tmp = (DebuggerHiddenAttribute_t447 *)il2cpp_codegen_object_new (&DebuggerHiddenAttribute_t447_il2cpp_TypeInfo);
		DebuggerHiddenAttribute__ctor_m1446(tmp, &DebuggerHiddenAttribute__ctor_m1446_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void U3CStartU3Ec__Iterator4_t298_CustomAttributesCacheGenerator_U3CStartU3Ec__Iterator4_Dispose_m1061(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t447 * tmp;
		tmp = (DebuggerHiddenAttribute_t447 *)il2cpp_codegen_object_new (&DebuggerHiddenAttribute_t447_il2cpp_TypeInfo);
		DebuggerHiddenAttribute__ctor_m1446(tmp, &DebuggerHiddenAttribute__ctor_m1446_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void U3CStartU3Ec__Iterator4_t298_CustomAttributesCacheGenerator_U3CStartU3Ec__Iterator4_Reset_m1062(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t447 * tmp;
		tmp = (DebuggerHiddenAttribute_t447 *)il2cpp_codegen_object_new (&DebuggerHiddenAttribute_t447_il2cpp_TypeInfo);
		DebuggerHiddenAttribute__ctor_m1446(tmp, &DebuggerHiddenAttribute__ctor_m1446_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache U3CStartU3Ec__Iterator4_t298__CustomAttributeCache = {
1,
NULL,
&U3CStartU3Ec__Iterator4_t298_CustomAttributesCacheGenerator
};
CustomAttributesCache U3CStartU3Ec__Iterator4_t298__CustomAttributeCache_U3CStartU3Ec__Iterator4_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1058 = {
1,
NULL,
&U3CStartU3Ec__Iterator4_t298_CustomAttributesCacheGenerator_U3CStartU3Ec__Iterator4_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1058
};
CustomAttributesCache U3CStartU3Ec__Iterator4_t298__CustomAttributeCache_U3CStartU3Ec__Iterator4_System_Collections_IEnumerator_get_Current_m1059 = {
1,
NULL,
&U3CStartU3Ec__Iterator4_t298_CustomAttributesCacheGenerator_U3CStartU3Ec__Iterator4_System_Collections_IEnumerator_get_Current_m1059
};
CustomAttributesCache U3CStartU3Ec__Iterator4_t298__CustomAttributeCache_U3CStartU3Ec__Iterator4_Dispose_m1061 = {
1,
NULL,
&U3CStartU3Ec__Iterator4_t298_CustomAttributesCacheGenerator_U3CStartU3Ec__Iterator4_Dispose_m1061
};
CustomAttributesCache U3CStartU3Ec__Iterator4_t298__CustomAttributeCache_U3CStartU3Ec__Iterator4_Reset_m1062 = {
1,
NULL,
&U3CStartU3Ec__Iterator4_t298_CustomAttributesCacheGenerator_U3CStartU3Ec__Iterator4_Reset_m1062
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType U3CStartU3Ec__Iterator4_t298_0_0_0;
extern Il2CppType U3CStartU3Ec__Iterator4_t298_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct U3CStartU3Ec__Iterator4_t298;
extern CustomAttributesCache U3CStartU3Ec__Iterator4_t298__CustomAttributeCache;
extern CustomAttributesCache U3CStartU3Ec__Iterator4_t298__CustomAttributeCache_U3CStartU3Ec__Iterator4_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1058;
extern CustomAttributesCache U3CStartU3Ec__Iterator4_t298__CustomAttributeCache_U3CStartU3Ec__Iterator4_System_Collections_IEnumerator_get_Current_m1059;
extern CustomAttributesCache U3CStartU3Ec__Iterator4_t298__CustomAttributeCache_U3CStartU3Ec__Iterator4_Dispose_m1061;
extern CustomAttributesCache U3CStartU3Ec__Iterator4_t298__CustomAttributeCache_U3CStartU3Ec__Iterator4_Reset_m1062;
TypeInfo U3CStartU3Ec__Iterator4_t298_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image/* image */
	, NULL/* gc_desc */
	, "<Start>c__Iterator4"/* name */
	, ""/* namespaze */
	, U3CStartU3Ec__Iterator4_t298_MethodInfos/* methods */
	, U3CStartU3Ec__Iterator4_t298_PropertyInfos/* properties */
	, U3CStartU3Ec__Iterator4_t298_FieldInfos/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &ExplosionFireAndDebris_t297_il2cpp_TypeInfo/* nested_in */
	, &U3CStartU3Ec__Iterator4_t298_il2cpp_TypeInfo/* element_class */
	, U3CStartU3Ec__Iterator4_t298_InterfacesTypeInfos/* implemented_interfaces */
	, U3CStartU3Ec__Iterator4_t298_VTable/* vtable */
	, &U3CStartU3Ec__Iterator4_t298__CustomAttributeCache/* custom_attributes_cache */
	, &U3CStartU3Ec__Iterator4_t298_il2cpp_TypeInfo/* cast_class */
	, &U3CStartU3Ec__Iterator4_t298_0_0_0/* byval_arg */
	, &U3CStartU3Ec__Iterator4_t298_1_0_0/* this_arg */
	, U3CStartU3Ec__Iterator4_t298_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (U3CStartU3Ec__Iterator4_t298)/* instance_size */
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
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 6/* method_count */
	, 2/* property_count */
	, 18/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 9/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo Transform_t173_il2cpp_TypeInfo;
extern MethodInfo MonoBehaviour__ctor_m1402_MethodInfo;
extern MethodInfo Quaternion_get_identity_m1891_MethodInfo;
extern MethodInfo Transform_set_parent_m1741_MethodInfo;


// System.Void UnityStandardAssets.Effects.ExplosionFireAndDebris::.ctor()
extern MethodInfo ExplosionFireAndDebris__ctor_m1063_MethodInfo;
 void ExplosionFireAndDebris__ctor_m1063 (ExplosionFireAndDebris_t297 * __this, MethodInfo* method){
	{
		MonoBehaviour__ctor_m1402(__this, /*hidden argument*/&MonoBehaviour__ctor_m1402_MethodInfo);
		return;
	}
}
// System.Collections.IEnumerator UnityStandardAssets.Effects.ExplosionFireAndDebris::Start()
extern MethodInfo ExplosionFireAndDebris_Start_m1064_MethodInfo;
 Object_t * ExplosionFireAndDebris_Start_m1064 (ExplosionFireAndDebris_t297 * __this, MethodInfo* method){
	U3CStartU3Ec__Iterator4_t298 * V_0 = {0};
	{
		U3CStartU3Ec__Iterator4_t298 * L_0 = (U3CStartU3Ec__Iterator4_t298 *)il2cpp_codegen_object_new (InitializedTypeInfo(&U3CStartU3Ec__Iterator4_t298_il2cpp_TypeInfo));
		U3CStartU3Ec__Iterator4__ctor_m1057(L_0, /*hidden argument*/&U3CStartU3Ec__Iterator4__ctor_m1057_MethodInfo);
		V_0 = L_0;
		NullCheck(V_0);
		V_0->___U3CU3Ef__this_17 = __this;
		return V_0;
	}
}
// System.Void UnityStandardAssets.Effects.ExplosionFireAndDebris::AddFire(UnityEngine.Transform,UnityEngine.Vector3,UnityEngine.Vector3)
 void ExplosionFireAndDebris_AddFire_m1065 (ExplosionFireAndDebris_t297 * __this, Transform_t173 * ___t, Vector3_t175  ___pos, Vector3_t175  ___normal, MethodInfo* method){
	Transform_t173 * V_0 = {0};
	{
		Vector3_t175  L_0 = Vector3_op_Multiply_m1746(NULL /*static, unused*/, ___normal, (0.5f), /*hidden argument*/&Vector3_op_Multiply_m1746_MethodInfo);
		Vector3_t175  L_1 = Vector3_op_Addition_m1750(NULL /*static, unused*/, ___pos, L_0, /*hidden argument*/&Vector3_op_Addition_m1750_MethodInfo);
		___pos = L_1;
		Transform_t173 * L_2 = (__this->___firePrefab_3);
		Quaternion_t299  L_3 = Quaternion_get_identity_m1891(NULL /*static, unused*/, /*hidden argument*/&Quaternion_get_identity_m1891_MethodInfo);
		Object_t326 * L_4 = Object_Instantiate_m2024(NULL /*static, unused*/, L_2, ___pos, L_3, /*hidden argument*/&Object_Instantiate_m2024_MethodInfo);
		V_0 = ((Transform_t173 *)Castclass(L_4, InitializedTypeInfo(&Transform_t173_il2cpp_TypeInfo)));
		NullCheck(V_0);
		Transform_set_parent_m1741(V_0, ___t, /*hidden argument*/&Transform_set_parent_m1741_MethodInfo);
		return;
	}
}
// Metadata Definition UnityStandardAssets.Effects.ExplosionFireAndDebris
extern Il2CppType TransformU5BU5D_t302_0_0_6;
FieldInfo ExplosionFireAndDebris_t297____debrisPrefabs_2_FieldInfo = 
{
	"debrisPrefabs"/* name */
	, &TransformU5BU5D_t302_0_0_6/* type */
	, &ExplosionFireAndDebris_t297_il2cpp_TypeInfo/* parent */
	, offsetof(ExplosionFireAndDebris_t297, ___debrisPrefabs_2)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Transform_t173_0_0_6;
FieldInfo ExplosionFireAndDebris_t297____firePrefab_3_FieldInfo = 
{
	"firePrefab"/* name */
	, &Transform_t173_0_0_6/* type */
	, &ExplosionFireAndDebris_t297_il2cpp_TypeInfo/* parent */
	, offsetof(ExplosionFireAndDebris_t297, ___firePrefab_3)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t386_0_0_6;
FieldInfo ExplosionFireAndDebris_t297____numDebrisPieces_4_FieldInfo = 
{
	"numDebrisPieces"/* name */
	, &Int32_t386_0_0_6/* type */
	, &ExplosionFireAndDebris_t297_il2cpp_TypeInfo/* parent */
	, offsetof(ExplosionFireAndDebris_t297, ___numDebrisPieces_4)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t386_0_0_6;
FieldInfo ExplosionFireAndDebris_t297____numFires_5_FieldInfo = 
{
	"numFires"/* name */
	, &Int32_t386_0_0_6/* type */
	, &ExplosionFireAndDebris_t297_il2cpp_TypeInfo/* parent */
	, offsetof(ExplosionFireAndDebris_t297, ___numFires_5)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* ExplosionFireAndDebris_t297_FieldInfos[] =
{
	&ExplosionFireAndDebris_t297____debrisPrefabs_2_FieldInfo,
	&ExplosionFireAndDebris_t297____firePrefab_3_FieldInfo,
	&ExplosionFireAndDebris_t297____numDebrisPieces_4_FieldInfo,
	&ExplosionFireAndDebris_t297____numFires_5_FieldInfo,
	NULL
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
// System.Void UnityStandardAssets.Effects.ExplosionFireAndDebris::.ctor()
MethodInfo ExplosionFireAndDebris__ctor_m1063_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&ExplosionFireAndDebris__ctor_m1063/* method */
	, &ExplosionFireAndDebris_t297_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1152/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType IEnumerator_t26_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache ExplosionFireAndDebris_t297__CustomAttributeCache_ExplosionFireAndDebris_Start_m1064;
// System.Collections.IEnumerator UnityStandardAssets.Effects.ExplosionFireAndDebris::Start()
MethodInfo ExplosionFireAndDebris_Start_m1064_MethodInfo = 
{
	"Start"/* name */
	, (methodPointerType)&ExplosionFireAndDebris_Start_m1064/* method */
	, &ExplosionFireAndDebris_t297_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_t26_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &ExplosionFireAndDebris_t297__CustomAttributeCache_ExplosionFireAndDebris_Start_m1064/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1153/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Transform_t173_0_0_0;
extern Il2CppType Transform_t173_0_0_0;
extern Il2CppType Vector3_t175_0_0_0;
extern Il2CppType Vector3_t175_0_0_0;
extern Il2CppType Vector3_t175_0_0_0;
static ParameterInfo ExplosionFireAndDebris_t297_ExplosionFireAndDebris_AddFire_m1065_ParameterInfos[] = 
{
	{"t", 0, 134218754, &EmptyCustomAttributesCache, &Transform_t173_0_0_0},
	{"pos", 1, 134218755, &EmptyCustomAttributesCache, &Vector3_t175_0_0_0},
	{"normal", 2, 134218756, &EmptyCustomAttributesCache, &Vector3_t175_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t_Vector3_t175_Vector3_t175 (MethodInfo* method, void* obj, void** args);
// System.Void UnityStandardAssets.Effects.ExplosionFireAndDebris::AddFire(UnityEngine.Transform,UnityEngine.Vector3,UnityEngine.Vector3)
MethodInfo ExplosionFireAndDebris_AddFire_m1065_MethodInfo = 
{
	"AddFire"/* name */
	, (methodPointerType)&ExplosionFireAndDebris_AddFire_m1065/* method */
	, &ExplosionFireAndDebris_t297_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t_Vector3_t175_Vector3_t175/* invoker_method */
	, ExplosionFireAndDebris_t297_ExplosionFireAndDebris_AddFire_m1065_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1154/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* ExplosionFireAndDebris_t297_MethodInfos[] =
{
	&ExplosionFireAndDebris__ctor_m1063_MethodInfo,
	&ExplosionFireAndDebris_Start_m1064_MethodInfo,
	&ExplosionFireAndDebris_AddFire_m1065_MethodInfo,
	NULL
};
extern TypeInfo U3CStartU3Ec__Iterator4_t298_il2cpp_TypeInfo;
static TypeInfo* ExplosionFireAndDebris_t297_il2cpp_TypeInfo__nestedTypes[2] =
{
	&U3CStartU3Ec__Iterator4_t298_il2cpp_TypeInfo,
	NULL
};
extern MethodInfo Object_Equals_m1333_MethodInfo;
extern MethodInfo Object_GetHashCode_m1334_MethodInfo;
extern MethodInfo Object_ToString_m1335_MethodInfo;
static MethodInfo* ExplosionFireAndDebris_t297_VTable[] =
{
	&Object_Equals_m1333_MethodInfo,
	&Object_Finalize_m1253_MethodInfo,
	&Object_GetHashCode_m1334_MethodInfo,
	&Object_ToString_m1335_MethodInfo,
};
void ExplosionFireAndDebris_t297_CustomAttributesCacheGenerator_ExplosionFireAndDebris_Start_m1064(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t447 * tmp;
		tmp = (DebuggerHiddenAttribute_t447 *)il2cpp_codegen_object_new (&DebuggerHiddenAttribute_t447_il2cpp_TypeInfo);
		DebuggerHiddenAttribute__ctor_m1446(tmp, &DebuggerHiddenAttribute__ctor_m1446_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache ExplosionFireAndDebris_t297__CustomAttributeCache_ExplosionFireAndDebris_Start_m1064 = {
1,
NULL,
&ExplosionFireAndDebris_t297_CustomAttributesCacheGenerator_ExplosionFireAndDebris_Start_m1064
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType ExplosionFireAndDebris_t297_0_0_0;
extern Il2CppType ExplosionFireAndDebris_t297_1_0_0;
extern TypeInfo MonoBehaviour_t39_il2cpp_TypeInfo;
struct ExplosionFireAndDebris_t297;
extern CustomAttributesCache ExplosionFireAndDebris_t297__CustomAttributeCache_ExplosionFireAndDebris_Start_m1064;
TypeInfo ExplosionFireAndDebris_t297_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image/* image */
	, NULL/* gc_desc */
	, "ExplosionFireAndDebris"/* name */
	, "UnityStandardAssets.Effects"/* namespaze */
	, ExplosionFireAndDebris_t297_MethodInfos/* methods */
	, NULL/* properties */
	, ExplosionFireAndDebris_t297_FieldInfos/* fields */
	, NULL/* events */
	, &MonoBehaviour_t39_il2cpp_TypeInfo/* parent */
	, ExplosionFireAndDebris_t297_il2cpp_TypeInfo__nestedTypes/* nested_types */
	, NULL/* nested_in */
	, &ExplosionFireAndDebris_t297_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, ExplosionFireAndDebris_t297_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ExplosionFireAndDebris_t297_il2cpp_TypeInfo/* cast_class */
	, &ExplosionFireAndDebris_t297_0_0_0/* byval_arg */
	, &ExplosionFireAndDebris_t297_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (ExplosionFireAndDebris_t297)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048577/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 3/* method_count */
	, 0/* property_count */
	, 4/* field_count */
	, 0/* event_count */
	, 1/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo U3CStartU3Ec__Iterator5_t306_il2cpp_TypeInfo;

extern TypeInfo List_1_t303_il2cpp_TypeInfo;
extern TypeInfo Boolean_t379_il2cpp_TypeInfo;
extern TypeInfo Rigidbody_t304_il2cpp_TypeInfo;
extern TypeInfo Void_t30_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t307_il2cpp_TypeInfo;
extern TypeInfo ExplosionPhysicsForce_t305_il2cpp_TypeInfo;
extern MethodInfo List_1__ctor_m2031_MethodInfo;
extern MethodInfo Collider_get_attachedRigidbody_m2007_MethodInfo;
extern MethodInfo Object_op_Inequality_m1769_MethodInfo;
extern MethodInfo List_1_Contains_m2032_MethodInfo;
extern MethodInfo List_1_Add_m2033_MethodInfo;
extern MethodInfo List_1_GetEnumerator_m2034_MethodInfo;
extern MethodInfo Enumerator_get_Current_m2035_MethodInfo;
extern MethodInfo Rigidbody_AddExplosionForce_m2036_MethodInfo;
extern MethodInfo Enumerator_MoveNext_m2037_MethodInfo;
extern MethodInfo IDisposable_Dispose_m1444_MethodInfo;


// System.Void UnityStandardAssets.Effects.ExplosionPhysicsForce/<Start>c__Iterator5::.ctor()
extern MethodInfo U3CStartU3Ec__Iterator5__ctor_m1066_MethodInfo;
 void U3CStartU3Ec__Iterator5__ctor_m1066 (U3CStartU3Ec__Iterator5_t306 * __this, MethodInfo* method){
	{
		Object__ctor_m1260(__this, /*hidden argument*/&Object__ctor_m1260_MethodInfo);
		return;
	}
}
// System.Object UnityStandardAssets.Effects.ExplosionPhysicsForce/<Start>c__Iterator5::System.Collections.Generic.IEnumerator<object>.get_Current()
extern MethodInfo U3CStartU3Ec__Iterator5_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1067_MethodInfo;
 Object_t * U3CStartU3Ec__Iterator5_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1067 (U3CStartU3Ec__Iterator5_t306 * __this, MethodInfo* method){
	{
		Object_t * L_0 = (__this->___$current_10);
		return L_0;
	}
}
// System.Object UnityStandardAssets.Effects.ExplosionPhysicsForce/<Start>c__Iterator5::System.Collections.IEnumerator.get_Current()
extern MethodInfo U3CStartU3Ec__Iterator5_System_Collections_IEnumerator_get_Current_m1068_MethodInfo;
 Object_t * U3CStartU3Ec__Iterator5_System_Collections_IEnumerator_get_Current_m1068 (U3CStartU3Ec__Iterator5_t306 * __this, MethodInfo* method){
	{
		Object_t * L_0 = (__this->___$current_10);
		return L_0;
	}
}
// System.Boolean UnityStandardAssets.Effects.ExplosionPhysicsForce/<Start>c__Iterator5::MoveNext()
extern MethodInfo U3CStartU3Ec__Iterator5_MoveNext_m1069_MethodInfo;
 bool U3CStartU3Ec__Iterator5_MoveNext_m1069 (U3CStartU3Ec__Iterator5_t306 * __this, MethodInfo* method){
	uint32_t V_0 = 0;
	bool V_1 = false;
	int32_t leaveInstructions[1] = {0};
	Exception_t151 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t151 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		int32_t L_0 = (__this->___$PC_9);
		V_0 = L_0;
		__this->___$PC_9 = (-1);
		if (V_0 == 0)
		{
			goto IL_0021;
		}
		if (V_0 == 1)
		{
			goto IL_0034;
		}
	}
	{
		goto IL_01af;
	}

IL_0021:
	{
		__this->___$current_10 = NULL;
		__this->___$PC_9 = 1;
		goto IL_01b1;
	}

IL_0034:
	{
		ExplosionPhysicsForce_t305 * L_1 = (__this->___U3CU3Ef__this_11);
		NullCheck(L_1);
		ParticleSystemMultiplier_t318 * L_2 = Component_GetComponent_TisParticleSystemMultiplier_t318_m2020(L_1, /*hidden argument*/&Component_GetComponent_TisParticleSystemMultiplier_t318_m2020_MethodInfo);
		NullCheck(L_2);
		float L_3 = (L_2->___multiplier_2);
		__this->___U3CmultiplierU3E__0_0 = L_3;
		float L_4 = (__this->___U3CmultiplierU3E__0_0);
		__this->___U3CrU3E__1_1 = ((float)((float)(10.0f)*(float)L_4));
		ExplosionPhysicsForce_t305 * L_5 = (__this->___U3CU3Ef__this_11);
		NullCheck(L_5);
		Transform_t173 * L_6 = Component_get_transform_m1739(L_5, /*hidden argument*/&Component_get_transform_m1739_MethodInfo);
		NullCheck(L_6);
		Vector3_t175  L_7 = Transform_get_position_m1738(L_6, /*hidden argument*/&Transform_get_position_m1738_MethodInfo);
		float L_8 = (__this->___U3CrU3E__1_1);
		ColliderU5BU5D_t293* L_9 = Physics_OverlapSphere_m2006(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/&Physics_OverlapSphere_m2006_MethodInfo);
		__this->___U3CcolsU3E__2_2 = L_9;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&List_1_t303_il2cpp_TypeInfo));
		List_1_t303 * L_10 = (List_1_t303 *)il2cpp_codegen_object_new (InitializedTypeInfo(&List_1_t303_il2cpp_TypeInfo));
		List_1__ctor_m2031(L_10, /*hidden argument*/&List_1__ctor_m2031_MethodInfo);
		__this->___U3CrigidbodiesU3E__3_3 = L_10;
		ColliderU5BU5D_t293* L_11 = (__this->___U3CcolsU3E__2_2);
		__this->___U3C$s_62U3E__4_4 = L_11;
		__this->___U3C$s_63U3E__5_5 = 0;
		goto IL_0108;
	}

IL_00a0:
	{
		ColliderU5BU5D_t293* L_12 = (__this->___U3C$s_62U3E__4_4);
		int32_t L_13 = (__this->___U3C$s_63U3E__5_5);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, L_13);
		int32_t L_14 = L_13;
		__this->___U3CcolU3E__6_6 = (*(Collider_t296 **)(Collider_t296 **)SZArrayLdElema(L_12, L_14));
		Collider_t296 * L_15 = (__this->___U3CcolU3E__6_6);
		NullCheck(L_15);
		Rigidbody_t304 * L_16 = Collider_get_attachedRigidbody_m2007(L_15, /*hidden argument*/&Collider_get_attachedRigidbody_m2007_MethodInfo);
		bool L_17 = Object_op_Inequality_m1769(NULL /*static, unused*/, L_16, (Object_t326 *)NULL, /*hidden argument*/&Object_op_Inequality_m1769_MethodInfo);
		if (!L_17)
		{
			goto IL_00fa;
		}
	}
	{
		List_1_t303 * L_18 = (__this->___U3CrigidbodiesU3E__3_3);
		Collider_t296 * L_19 = (__this->___U3CcolU3E__6_6);
		NullCheck(L_19);
		Rigidbody_t304 * L_20 = Collider_get_attachedRigidbody_m2007(L_19, /*hidden argument*/&Collider_get_attachedRigidbody_m2007_MethodInfo);
		NullCheck(L_18);
		bool L_21 = (bool)VirtFuncInvoker1< bool, Rigidbody_t304 * >::Invoke(&List_1_Contains_m2032_MethodInfo, L_18, L_20);
		if (L_21)
		{
			goto IL_00fa;
		}
	}
	{
		List_1_t303 * L_22 = (__this->___U3CrigidbodiesU3E__3_3);
		Collider_t296 * L_23 = (__this->___U3CcolU3E__6_6);
		NullCheck(L_23);
		Rigidbody_t304 * L_24 = Collider_get_attachedRigidbody_m2007(L_23, /*hidden argument*/&Collider_get_attachedRigidbody_m2007_MethodInfo);
		NullCheck(L_22);
		VirtActionInvoker1< Rigidbody_t304 * >::Invoke(&List_1_Add_m2033_MethodInfo, L_22, L_24);
	}

IL_00fa:
	{
		int32_t L_25 = (__this->___U3C$s_63U3E__5_5);
		__this->___U3C$s_63U3E__5_5 = ((int32_t)(L_25+1));
	}

IL_0108:
	{
		int32_t L_26 = (__this->___U3C$s_63U3E__5_5);
		ColliderU5BU5D_t293* L_27 = (__this->___U3C$s_62U3E__4_4);
		NullCheck(L_27);
		if ((((int32_t)L_26) < ((int32_t)(((int32_t)(((Array_t *)L_27)->max_length))))))
		{
			goto IL_00a0;
		}
	}
	{
		List_1_t303 * L_28 = (__this->___U3CrigidbodiesU3E__3_3);
		NullCheck(L_28);
		Enumerator_t307  L_29 = List_1_GetEnumerator_m2034(L_28, /*hidden argument*/&List_1_GetEnumerator_m2034_MethodInfo);
		__this->___U3C$s_64U3E__7_7 = L_29;
	}

IL_012c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0182;
		}

IL_0131:
		{
			Enumerator_t307 * L_30 = &(__this->___U3C$s_64U3E__7_7);
			Rigidbody_t304 * L_31 = Enumerator_get_Current_m2035(L_30, /*hidden argument*/&Enumerator_get_Current_m2035_MethodInfo);
			__this->___U3CrbU3E__8_8 = L_31;
			Rigidbody_t304 * L_32 = (__this->___U3CrbU3E__8_8);
			ExplosionPhysicsForce_t305 * L_33 = (__this->___U3CU3Ef__this_11);
			NullCheck(L_33);
			float L_34 = (L_33->___explosionForce_2);
			float L_35 = (__this->___U3CmultiplierU3E__0_0);
			ExplosionPhysicsForce_t305 * L_36 = (__this->___U3CU3Ef__this_11);
			NullCheck(L_36);
			Transform_t173 * L_37 = Component_get_transform_m1739(L_36, /*hidden argument*/&Component_get_transform_m1739_MethodInfo);
			NullCheck(L_37);
			Vector3_t175  L_38 = Transform_get_position_m1738(L_37, /*hidden argument*/&Transform_get_position_m1738_MethodInfo);
			float L_39 = (__this->___U3CrU3E__1_1);
			float L_40 = (__this->___U3CmultiplierU3E__0_0);
			NullCheck(L_32);
			Rigidbody_AddExplosionForce_m2036(L_32, ((float)((float)L_34*(float)L_35)), L_38, L_39, ((float)((float)(1.0f)*(float)L_40)), 1, /*hidden argument*/&Rigidbody_AddExplosionForce_m2036_MethodInfo);
		}

IL_0182:
		{
			Enumerator_t307 * L_41 = &(__this->___U3C$s_64U3E__7_7);
			bool L_42 = Enumerator_MoveNext_m2037(L_41, /*hidden argument*/&Enumerator_MoveNext_m2037_MethodInfo);
			if (L_42)
			{
				goto IL_0131;
			}
		}

IL_0192:
		{
			// IL_0192: leave IL_01a8
			leaveInstructions[0] = 0x1A8; // 1
			THROW_SENTINEL(IL_01a8);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_0197;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t151 *)e.ex;
		goto IL_0197;
	}

IL_0197:
	{ // begin finally (depth: 1)
		Enumerator_t307  L_43 = (__this->___U3C$s_64U3E__7_7);
		Enumerator_t307  L_44 = L_43;
		Object_t * L_45 = Box(InitializedTypeInfo(&Enumerator_t307_il2cpp_TypeInfo), &L_44);
		NullCheck(L_45);
		InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m1444_MethodInfo, L_45);
		// finally node depth: 1
		switch (leaveInstructions[0])
		{
			case 0x1A8:
				goto IL_01a8;
			default:
			{
				#if IL2CPP_DEBUG
				assert( __last_unhandled_exception != 0 && "invalid leaveInstruction at depth 1, __last_unhandled_exception has not been set");
				#endif
				Exception_t151 * _tmp_exception_local = __last_unhandled_exception;
				__last_unhandled_exception = 0;
				il2cpp_codegen_raise_exception(_tmp_exception_local);
			}
		}
	} // end finally (depth: 1)

IL_01a8:
	{
		__this->___$PC_9 = (-1);
	}

IL_01af:
	{
		return 0;
	}

IL_01b1:
	{
		return 1;
	}
	// Dead block : IL_01b3: ldloc.1
}
// System.Void UnityStandardAssets.Effects.ExplosionPhysicsForce/<Start>c__Iterator5::Dispose()
extern MethodInfo U3CStartU3Ec__Iterator5_Dispose_m1070_MethodInfo;
 void U3CStartU3Ec__Iterator5_Dispose_m1070 (U3CStartU3Ec__Iterator5_t306 * __this, MethodInfo* method){
	{
		__this->___$PC_9 = (-1);
		return;
	}
}
// System.Void UnityStandardAssets.Effects.ExplosionPhysicsForce/<Start>c__Iterator5::Reset()
extern MethodInfo U3CStartU3Ec__Iterator5_Reset_m1071_MethodInfo;
 void U3CStartU3Ec__Iterator5_Reset_m1071 (U3CStartU3Ec__Iterator5_t306 * __this, MethodInfo* method){
	{
		NotSupportedException_t445 * L_0 = (NotSupportedException_t445 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t445_il2cpp_TypeInfo));
		NotSupportedException__ctor_m1445(L_0, /*hidden argument*/&NotSupportedException__ctor_m1445_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// Metadata Definition UnityStandardAssets.Effects.ExplosionPhysicsForce/<Start>c__Iterator5
extern Il2CppType Single_t448_0_0_3;
FieldInfo U3CStartU3Ec__Iterator5_t306____U3CmultiplierU3E__0_0_FieldInfo = 
{
	"<multiplier>__0"/* name */
	, &Single_t448_0_0_3/* type */
	, &U3CStartU3Ec__Iterator5_t306_il2cpp_TypeInfo/* parent */
	, offsetof(U3CStartU3Ec__Iterator5_t306, ___U3CmultiplierU3E__0_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Single_t448_0_0_3;
FieldInfo U3CStartU3Ec__Iterator5_t306____U3CrU3E__1_1_FieldInfo = 
{
	"<r>__1"/* name */
	, &Single_t448_0_0_3/* type */
	, &U3CStartU3Ec__Iterator5_t306_il2cpp_TypeInfo/* parent */
	, offsetof(U3CStartU3Ec__Iterator5_t306, ___U3CrU3E__1_1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType ColliderU5BU5D_t293_0_0_3;
FieldInfo U3CStartU3Ec__Iterator5_t306____U3CcolsU3E__2_2_FieldInfo = 
{
	"<cols>__2"/* name */
	, &ColliderU5BU5D_t293_0_0_3/* type */
	, &U3CStartU3Ec__Iterator5_t306_il2cpp_TypeInfo/* parent */
	, offsetof(U3CStartU3Ec__Iterator5_t306, ___U3CcolsU3E__2_2)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType List_1_t303_0_0_3;
FieldInfo U3CStartU3Ec__Iterator5_t306____U3CrigidbodiesU3E__3_3_FieldInfo = 
{
	"<rigidbodies>__3"/* name */
	, &List_1_t303_0_0_3/* type */
	, &U3CStartU3Ec__Iterator5_t306_il2cpp_TypeInfo/* parent */
	, offsetof(U3CStartU3Ec__Iterator5_t306, ___U3CrigidbodiesU3E__3_3)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType ColliderU5BU5D_t293_0_0_3;
FieldInfo U3CStartU3Ec__Iterator5_t306____U3C$s_62U3E__4_4_FieldInfo = 
{
	"<$s_62>__4"/* name */
	, &ColliderU5BU5D_t293_0_0_3/* type */
	, &U3CStartU3Ec__Iterator5_t306_il2cpp_TypeInfo/* parent */
	, offsetof(U3CStartU3Ec__Iterator5_t306, ___U3C$s_62U3E__4_4)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t386_0_0_3;
FieldInfo U3CStartU3Ec__Iterator5_t306____U3C$s_63U3E__5_5_FieldInfo = 
{
	"<$s_63>__5"/* name */
	, &Int32_t386_0_0_3/* type */
	, &U3CStartU3Ec__Iterator5_t306_il2cpp_TypeInfo/* parent */
	, offsetof(U3CStartU3Ec__Iterator5_t306, ___U3C$s_63U3E__5_5)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Collider_t296_0_0_3;
FieldInfo U3CStartU3Ec__Iterator5_t306____U3CcolU3E__6_6_FieldInfo = 
{
	"<col>__6"/* name */
	, &Collider_t296_0_0_3/* type */
	, &U3CStartU3Ec__Iterator5_t306_il2cpp_TypeInfo/* parent */
	, offsetof(U3CStartU3Ec__Iterator5_t306, ___U3CcolU3E__6_6)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Enumerator_t307_0_0_3;
FieldInfo U3CStartU3Ec__Iterator5_t306____U3C$s_64U3E__7_7_FieldInfo = 
{
	"<$s_64>__7"/* name */
	, &Enumerator_t307_0_0_3/* type */
	, &U3CStartU3Ec__Iterator5_t306_il2cpp_TypeInfo/* parent */
	, offsetof(U3CStartU3Ec__Iterator5_t306, ___U3C$s_64U3E__7_7)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Rigidbody_t304_0_0_3;
FieldInfo U3CStartU3Ec__Iterator5_t306____U3CrbU3E__8_8_FieldInfo = 
{
	"<rb>__8"/* name */
	, &Rigidbody_t304_0_0_3/* type */
	, &U3CStartU3Ec__Iterator5_t306_il2cpp_TypeInfo/* parent */
	, offsetof(U3CStartU3Ec__Iterator5_t306, ___U3CrbU3E__8_8)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t386_0_0_3;
FieldInfo U3CStartU3Ec__Iterator5_t306____$PC_9_FieldInfo = 
{
	"$PC"/* name */
	, &Int32_t386_0_0_3/* type */
	, &U3CStartU3Ec__Iterator5_t306_il2cpp_TypeInfo/* parent */
	, offsetof(U3CStartU3Ec__Iterator5_t306, ___$PC_9)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Object_t_0_0_3;
FieldInfo U3CStartU3Ec__Iterator5_t306____$current_10_FieldInfo = 
{
	"$current"/* name */
	, &Object_t_0_0_3/* type */
	, &U3CStartU3Ec__Iterator5_t306_il2cpp_TypeInfo/* parent */
	, offsetof(U3CStartU3Ec__Iterator5_t306, ___$current_10)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType ExplosionPhysicsForce_t305_0_0_3;
FieldInfo U3CStartU3Ec__Iterator5_t306____U3CU3Ef__this_11_FieldInfo = 
{
	"<>f__this"/* name */
	, &ExplosionPhysicsForce_t305_0_0_3/* type */
	, &U3CStartU3Ec__Iterator5_t306_il2cpp_TypeInfo/* parent */
	, offsetof(U3CStartU3Ec__Iterator5_t306, ___U3CU3Ef__this_11)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* U3CStartU3Ec__Iterator5_t306_FieldInfos[] =
{
	&U3CStartU3Ec__Iterator5_t306____U3CmultiplierU3E__0_0_FieldInfo,
	&U3CStartU3Ec__Iterator5_t306____U3CrU3E__1_1_FieldInfo,
	&U3CStartU3Ec__Iterator5_t306____U3CcolsU3E__2_2_FieldInfo,
	&U3CStartU3Ec__Iterator5_t306____U3CrigidbodiesU3E__3_3_FieldInfo,
	&U3CStartU3Ec__Iterator5_t306____U3C$s_62U3E__4_4_FieldInfo,
	&U3CStartU3Ec__Iterator5_t306____U3C$s_63U3E__5_5_FieldInfo,
	&U3CStartU3Ec__Iterator5_t306____U3CcolU3E__6_6_FieldInfo,
	&U3CStartU3Ec__Iterator5_t306____U3C$s_64U3E__7_7_FieldInfo,
	&U3CStartU3Ec__Iterator5_t306____U3CrbU3E__8_8_FieldInfo,
	&U3CStartU3Ec__Iterator5_t306____$PC_9_FieldInfo,
	&U3CStartU3Ec__Iterator5_t306____$current_10_FieldInfo,
	&U3CStartU3Ec__Iterator5_t306____U3CU3Ef__this_11_FieldInfo,
	NULL
};
static PropertyInfo U3CStartU3Ec__Iterator5_t306____System_Collections_Generic_IEnumeratorU3CobjectU3E_Current_PropertyInfo = 
{
	&U3CStartU3Ec__Iterator5_t306_il2cpp_TypeInfo/* parent */
	, "System.Collections.Generic.IEnumerator<object>.Current"/* name */
	, &U3CStartU3Ec__Iterator5_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1067_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo U3CStartU3Ec__Iterator5_t306____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&U3CStartU3Ec__Iterator5_t306_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &U3CStartU3Ec__Iterator5_System_Collections_IEnumerator_get_Current_m1068_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* U3CStartU3Ec__Iterator5_t306_PropertyInfos[] =
{
	&U3CStartU3Ec__Iterator5_t306____System_Collections_Generic_IEnumeratorU3CobjectU3E_Current_PropertyInfo,
	&U3CStartU3Ec__Iterator5_t306____System_Collections_IEnumerator_Current_PropertyInfo,
	NULL
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
// System.Void UnityStandardAssets.Effects.ExplosionPhysicsForce/<Start>c__Iterator5::.ctor()
MethodInfo U3CStartU3Ec__Iterator5__ctor_m1066_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&U3CStartU3Ec__Iterator5__ctor_m1066/* method */
	, &U3CStartU3Ec__Iterator5_t306_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1163/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache U3CStartU3Ec__Iterator5_t306__CustomAttributeCache_U3CStartU3Ec__Iterator5_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1067;
// System.Object UnityStandardAssets.Effects.ExplosionPhysicsForce/<Start>c__Iterator5::System.Collections.Generic.IEnumerator<object>.get_Current()
MethodInfo U3CStartU3Ec__Iterator5_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1067_MethodInfo = 
{
	"System.Collections.Generic.IEnumerator<object>.get_Current"/* name */
	, (methodPointerType)&U3CStartU3Ec__Iterator5_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1067/* method */
	, &U3CStartU3Ec__Iterator5_t306_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &U3CStartU3Ec__Iterator5_t306__CustomAttributeCache_U3CStartU3Ec__Iterator5_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1067/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1164/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache U3CStartU3Ec__Iterator5_t306__CustomAttributeCache_U3CStartU3Ec__Iterator5_System_Collections_IEnumerator_get_Current_m1068;
// System.Object UnityStandardAssets.Effects.ExplosionPhysicsForce/<Start>c__Iterator5::System.Collections.IEnumerator.get_Current()
MethodInfo U3CStartU3Ec__Iterator5_System_Collections_IEnumerator_get_Current_m1068_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&U3CStartU3Ec__Iterator5_System_Collections_IEnumerator_get_Current_m1068/* method */
	, &U3CStartU3Ec__Iterator5_t306_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &U3CStartU3Ec__Iterator5_t306__CustomAttributeCache_U3CStartU3Ec__Iterator5_System_Collections_IEnumerator_get_Current_m1068/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1165/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379 (MethodInfo* method, void* obj, void** args);
// System.Boolean UnityStandardAssets.Effects.ExplosionPhysicsForce/<Start>c__Iterator5::MoveNext()
MethodInfo U3CStartU3Ec__Iterator5_MoveNext_m1069_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&U3CStartU3Ec__Iterator5_MoveNext_m1069/* method */
	, &U3CStartU3Ec__Iterator5_t306_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t379_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t379/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1166/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache U3CStartU3Ec__Iterator5_t306__CustomAttributeCache_U3CStartU3Ec__Iterator5_Dispose_m1070;
// System.Void UnityStandardAssets.Effects.ExplosionPhysicsForce/<Start>c__Iterator5::Dispose()
MethodInfo U3CStartU3Ec__Iterator5_Dispose_m1070_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&U3CStartU3Ec__Iterator5_Dispose_m1070/* method */
	, &U3CStartU3Ec__Iterator5_t306_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &U3CStartU3Ec__Iterator5_t306__CustomAttributeCache_U3CStartU3Ec__Iterator5_Dispose_m1070/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1167/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache U3CStartU3Ec__Iterator5_t306__CustomAttributeCache_U3CStartU3Ec__Iterator5_Reset_m1071;
// System.Void UnityStandardAssets.Effects.ExplosionPhysicsForce/<Start>c__Iterator5::Reset()
MethodInfo U3CStartU3Ec__Iterator5_Reset_m1071_MethodInfo = 
{
	"Reset"/* name */
	, (methodPointerType)&U3CStartU3Ec__Iterator5_Reset_m1071/* method */
	, &U3CStartU3Ec__Iterator5_t306_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &U3CStartU3Ec__Iterator5_t306__CustomAttributeCache_U3CStartU3Ec__Iterator5_Reset_m1071/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1168/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* U3CStartU3Ec__Iterator5_t306_MethodInfos[] =
{
	&U3CStartU3Ec__Iterator5__ctor_m1066_MethodInfo,
	&U3CStartU3Ec__Iterator5_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1067_MethodInfo,
	&U3CStartU3Ec__Iterator5_System_Collections_IEnumerator_get_Current_m1068_MethodInfo,
	&U3CStartU3Ec__Iterator5_MoveNext_m1069_MethodInfo,
	&U3CStartU3Ec__Iterator5_Dispose_m1070_MethodInfo,
	&U3CStartU3Ec__Iterator5_Reset_m1071_MethodInfo,
	NULL
};
static MethodInfo* U3CStartU3Ec__Iterator5_t306_VTable[] =
{
	&Object_Equals_m1252_MethodInfo,
	&Object_Finalize_m1253_MethodInfo,
	&Object_GetHashCode_m1254_MethodInfo,
	&Object_ToString_m1255_MethodInfo,
	&U3CStartU3Ec__Iterator5_Dispose_m1070_MethodInfo,
	&U3CStartU3Ec__Iterator5_System_Collections_IEnumerator_get_Current_m1068_MethodInfo,
	&U3CStartU3Ec__Iterator5_MoveNext_m1069_MethodInfo,
	&U3CStartU3Ec__Iterator5_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1067_MethodInfo,
	&U3CStartU3Ec__Iterator5_Reset_m1071_MethodInfo,
};
static TypeInfo* U3CStartU3Ec__Iterator5_t306_InterfacesTypeInfos[] = 
{
	&IDisposable_t444_il2cpp_TypeInfo,
	&IEnumerator_t26_il2cpp_TypeInfo,
	&IEnumerator_1_t53_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair U3CStartU3Ec__Iterator5_t306_InterfacesOffsets[] = 
{
	{ &IDisposable_t444_il2cpp_TypeInfo, 4},
	{ &IEnumerator_t26_il2cpp_TypeInfo, 5},
	{ &IEnumerator_1_t53_il2cpp_TypeInfo, 7},
};
void U3CStartU3Ec__Iterator5_t306_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t384 * tmp;
		tmp = (CompilerGeneratedAttribute_t384 *)il2cpp_codegen_object_new (&CompilerGeneratedAttribute_t384_il2cpp_TypeInfo);
		CompilerGeneratedAttribute__ctor_m1269(tmp, &CompilerGeneratedAttribute__ctor_m1269_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void U3CStartU3Ec__Iterator5_t306_CustomAttributesCacheGenerator_U3CStartU3Ec__Iterator5_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1067(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t447 * tmp;
		tmp = (DebuggerHiddenAttribute_t447 *)il2cpp_codegen_object_new (&DebuggerHiddenAttribute_t447_il2cpp_TypeInfo);
		DebuggerHiddenAttribute__ctor_m1446(tmp, &DebuggerHiddenAttribute__ctor_m1446_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void U3CStartU3Ec__Iterator5_t306_CustomAttributesCacheGenerator_U3CStartU3Ec__Iterator5_System_Collections_IEnumerator_get_Current_m1068(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t447 * tmp;
		tmp = (DebuggerHiddenAttribute_t447 *)il2cpp_codegen_object_new (&DebuggerHiddenAttribute_t447_il2cpp_TypeInfo);
		DebuggerHiddenAttribute__ctor_m1446(tmp, &DebuggerHiddenAttribute__ctor_m1446_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void U3CStartU3Ec__Iterator5_t306_CustomAttributesCacheGenerator_U3CStartU3Ec__Iterator5_Dispose_m1070(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t447 * tmp;
		tmp = (DebuggerHiddenAttribute_t447 *)il2cpp_codegen_object_new (&DebuggerHiddenAttribute_t447_il2cpp_TypeInfo);
		DebuggerHiddenAttribute__ctor_m1446(tmp, &DebuggerHiddenAttribute__ctor_m1446_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void U3CStartU3Ec__Iterator5_t306_CustomAttributesCacheGenerator_U3CStartU3Ec__Iterator5_Reset_m1071(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t447 * tmp;
		tmp = (DebuggerHiddenAttribute_t447 *)il2cpp_codegen_object_new (&DebuggerHiddenAttribute_t447_il2cpp_TypeInfo);
		DebuggerHiddenAttribute__ctor_m1446(tmp, &DebuggerHiddenAttribute__ctor_m1446_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache U3CStartU3Ec__Iterator5_t306__CustomAttributeCache = {
1,
NULL,
&U3CStartU3Ec__Iterator5_t306_CustomAttributesCacheGenerator
};
CustomAttributesCache U3CStartU3Ec__Iterator5_t306__CustomAttributeCache_U3CStartU3Ec__Iterator5_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1067 = {
1,
NULL,
&U3CStartU3Ec__Iterator5_t306_CustomAttributesCacheGenerator_U3CStartU3Ec__Iterator5_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1067
};
CustomAttributesCache U3CStartU3Ec__Iterator5_t306__CustomAttributeCache_U3CStartU3Ec__Iterator5_System_Collections_IEnumerator_get_Current_m1068 = {
1,
NULL,
&U3CStartU3Ec__Iterator5_t306_CustomAttributesCacheGenerator_U3CStartU3Ec__Iterator5_System_Collections_IEnumerator_get_Current_m1068
};
CustomAttributesCache U3CStartU3Ec__Iterator5_t306__CustomAttributeCache_U3CStartU3Ec__Iterator5_Dispose_m1070 = {
1,
NULL,
&U3CStartU3Ec__Iterator5_t306_CustomAttributesCacheGenerator_U3CStartU3Ec__Iterator5_Dispose_m1070
};
CustomAttributesCache U3CStartU3Ec__Iterator5_t306__CustomAttributeCache_U3CStartU3Ec__Iterator5_Reset_m1071 = {
1,
NULL,
&U3CStartU3Ec__Iterator5_t306_CustomAttributesCacheGenerator_U3CStartU3Ec__Iterator5_Reset_m1071
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType U3CStartU3Ec__Iterator5_t306_0_0_0;
extern Il2CppType U3CStartU3Ec__Iterator5_t306_1_0_0;
struct U3CStartU3Ec__Iterator5_t306;
extern CustomAttributesCache U3CStartU3Ec__Iterator5_t306__CustomAttributeCache;
extern CustomAttributesCache U3CStartU3Ec__Iterator5_t306__CustomAttributeCache_U3CStartU3Ec__Iterator5_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1067;
extern CustomAttributesCache U3CStartU3Ec__Iterator5_t306__CustomAttributeCache_U3CStartU3Ec__Iterator5_System_Collections_IEnumerator_get_Current_m1068;
extern CustomAttributesCache U3CStartU3Ec__Iterator5_t306__CustomAttributeCache_U3CStartU3Ec__Iterator5_Dispose_m1070;
extern CustomAttributesCache U3CStartU3Ec__Iterator5_t306__CustomAttributeCache_U3CStartU3Ec__Iterator5_Reset_m1071;
TypeInfo U3CStartU3Ec__Iterator5_t306_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image/* image */
	, NULL/* gc_desc */
	, "<Start>c__Iterator5"/* name */
	, ""/* namespaze */
	, U3CStartU3Ec__Iterator5_t306_MethodInfos/* methods */
	, U3CStartU3Ec__Iterator5_t306_PropertyInfos/* properties */
	, U3CStartU3Ec__Iterator5_t306_FieldInfos/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &ExplosionPhysicsForce_t305_il2cpp_TypeInfo/* nested_in */
	, &U3CStartU3Ec__Iterator5_t306_il2cpp_TypeInfo/* element_class */
	, U3CStartU3Ec__Iterator5_t306_InterfacesTypeInfos/* implemented_interfaces */
	, U3CStartU3Ec__Iterator5_t306_VTable/* vtable */
	, &U3CStartU3Ec__Iterator5_t306__CustomAttributeCache/* custom_attributes_cache */
	, &U3CStartU3Ec__Iterator5_t306_il2cpp_TypeInfo/* cast_class */
	, &U3CStartU3Ec__Iterator5_t306_0_0_0/* byval_arg */
	, &U3CStartU3Ec__Iterator5_t306_1_0_0/* this_arg */
	, U3CStartU3Ec__Iterator5_t306_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (U3CStartU3Ec__Iterator5_t306)/* instance_size */
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
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 6/* method_count */
	, 2/* property_count */
	, 12/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 9/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Void UnityStandardAssets.Effects.ExplosionPhysicsForce::.ctor()
extern MethodInfo ExplosionPhysicsForce__ctor_m1072_MethodInfo;
 void ExplosionPhysicsForce__ctor_m1072 (ExplosionPhysicsForce_t305 * __this, MethodInfo* method){
	{
		__this->___explosionForce_2 = (4.0f);
		MonoBehaviour__ctor_m1402(__this, /*hidden argument*/&MonoBehaviour__ctor_m1402_MethodInfo);
		return;
	}
}
// System.Collections.IEnumerator UnityStandardAssets.Effects.ExplosionPhysicsForce::Start()
extern MethodInfo ExplosionPhysicsForce_Start_m1073_MethodInfo;
 Object_t * ExplosionPhysicsForce_Start_m1073 (ExplosionPhysicsForce_t305 * __this, MethodInfo* method){
	U3CStartU3Ec__Iterator5_t306 * V_0 = {0};
	{
		U3CStartU3Ec__Iterator5_t306 * L_0 = (U3CStartU3Ec__Iterator5_t306 *)il2cpp_codegen_object_new (InitializedTypeInfo(&U3CStartU3Ec__Iterator5_t306_il2cpp_TypeInfo));
		U3CStartU3Ec__Iterator5__ctor_m1066(L_0, /*hidden argument*/&U3CStartU3Ec__Iterator5__ctor_m1066_MethodInfo);
		V_0 = L_0;
		NullCheck(V_0);
		V_0->___U3CU3Ef__this_11 = __this;
		return V_0;
	}
}
// Metadata Definition UnityStandardAssets.Effects.ExplosionPhysicsForce
extern Il2CppType Single_t448_0_0_6;
FieldInfo ExplosionPhysicsForce_t305____explosionForce_2_FieldInfo = 
{
	"explosionForce"/* name */
	, &Single_t448_0_0_6/* type */
	, &ExplosionPhysicsForce_t305_il2cpp_TypeInfo/* parent */
	, offsetof(ExplosionPhysicsForce_t305, ___explosionForce_2)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* ExplosionPhysicsForce_t305_FieldInfos[] =
{
	&ExplosionPhysicsForce_t305____explosionForce_2_FieldInfo,
	NULL
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
// System.Void UnityStandardAssets.Effects.ExplosionPhysicsForce::.ctor()
MethodInfo ExplosionPhysicsForce__ctor_m1072_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&ExplosionPhysicsForce__ctor_m1072/* method */
	, &ExplosionPhysicsForce_t305_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1161/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType IEnumerator_t26_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache ExplosionPhysicsForce_t305__CustomAttributeCache_ExplosionPhysicsForce_Start_m1073;
// System.Collections.IEnumerator UnityStandardAssets.Effects.ExplosionPhysicsForce::Start()
MethodInfo ExplosionPhysicsForce_Start_m1073_MethodInfo = 
{
	"Start"/* name */
	, (methodPointerType)&ExplosionPhysicsForce_Start_m1073/* method */
	, &ExplosionPhysicsForce_t305_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_t26_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &ExplosionPhysicsForce_t305__CustomAttributeCache_ExplosionPhysicsForce_Start_m1073/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1162/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* ExplosionPhysicsForce_t305_MethodInfos[] =
{
	&ExplosionPhysicsForce__ctor_m1072_MethodInfo,
	&ExplosionPhysicsForce_Start_m1073_MethodInfo,
	NULL
};
extern TypeInfo U3CStartU3Ec__Iterator5_t306_il2cpp_TypeInfo;
static TypeInfo* ExplosionPhysicsForce_t305_il2cpp_TypeInfo__nestedTypes[2] =
{
	&U3CStartU3Ec__Iterator5_t306_il2cpp_TypeInfo,
	NULL
};
static MethodInfo* ExplosionPhysicsForce_t305_VTable[] =
{
	&Object_Equals_m1333_MethodInfo,
	&Object_Finalize_m1253_MethodInfo,
	&Object_GetHashCode_m1334_MethodInfo,
	&Object_ToString_m1335_MethodInfo,
};
void ExplosionPhysicsForce_t305_CustomAttributesCacheGenerator_ExplosionPhysicsForce_Start_m1073(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t447 * tmp;
		tmp = (DebuggerHiddenAttribute_t447 *)il2cpp_codegen_object_new (&DebuggerHiddenAttribute_t447_il2cpp_TypeInfo);
		DebuggerHiddenAttribute__ctor_m1446(tmp, &DebuggerHiddenAttribute__ctor_m1446_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache ExplosionPhysicsForce_t305__CustomAttributeCache_ExplosionPhysicsForce_Start_m1073 = {
1,
NULL,
&ExplosionPhysicsForce_t305_CustomAttributesCacheGenerator_ExplosionPhysicsForce_Start_m1073
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType ExplosionPhysicsForce_t305_0_0_0;
extern Il2CppType ExplosionPhysicsForce_t305_1_0_0;
struct ExplosionPhysicsForce_t305;
extern CustomAttributesCache ExplosionPhysicsForce_t305__CustomAttributeCache_ExplosionPhysicsForce_Start_m1073;
TypeInfo ExplosionPhysicsForce_t305_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image/* image */
	, NULL/* gc_desc */
	, "ExplosionPhysicsForce"/* name */
	, "UnityStandardAssets.Effects"/* namespaze */
	, ExplosionPhysicsForce_t305_MethodInfos/* methods */
	, NULL/* properties */
	, ExplosionPhysicsForce_t305_FieldInfos/* fields */
	, NULL/* events */
	, &MonoBehaviour_t39_il2cpp_TypeInfo/* parent */
	, ExplosionPhysicsForce_t305_il2cpp_TypeInfo__nestedTypes/* nested_types */
	, NULL/* nested_in */
	, &ExplosionPhysicsForce_t305_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, ExplosionPhysicsForce_t305_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ExplosionPhysicsForce_t305_il2cpp_TypeInfo/* cast_class */
	, &ExplosionPhysicsForce_t305_0_0_0/* byval_arg */
	, &ExplosionPhysicsForce_t305_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (ExplosionPhysicsForce_t305)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048577/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
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
	, 1/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo U3COnCollisionEnterU3Ec__Iterator6_t310_il2cpp_TypeInfo;

extern TypeInfo Explosive_t309_il2cpp_TypeInfo;
extern MethodInfo Behaviour_get_enabled_m2038_MethodInfo;
extern MethodInfo Collision_get_contacts_m2039_MethodInfo;
extern MethodInfo Collision_get_relativeVelocity_m2040_MethodInfo;
extern MethodInfo ContactPoint_get_normal_m2041_MethodInfo;
extern MethodInfo Vector3_Project_m2042_MethodInfo;
extern MethodInfo Vector3_get_magnitude_m1896_MethodInfo;
extern MethodInfo ContactPoint_get_point_m2043_MethodInfo;
extern MethodInfo Quaternion_LookRotation_m2044_MethodInfo;
extern MethodInfo Component_SendMessage_m2045_MethodInfo;
extern MethodInfo ObjectResetter_DelayedReset_m1174_MethodInfo;


// System.Void UnityStandardAssets.Effects.Explosive/<OnCollisionEnter>c__Iterator6::.ctor()
extern MethodInfo U3COnCollisionEnterU3Ec__Iterator6__ctor_m1074_MethodInfo;
 void U3COnCollisionEnterU3Ec__Iterator6__ctor_m1074 (U3COnCollisionEnterU3Ec__Iterator6_t310 * __this, MethodInfo* method){
	{
		Object__ctor_m1260(__this, /*hidden argument*/&Object__ctor_m1260_MethodInfo);
		return;
	}
}
// System.Object UnityStandardAssets.Effects.Explosive/<OnCollisionEnter>c__Iterator6::System.Collections.Generic.IEnumerator<object>.get_Current()
extern MethodInfo U3COnCollisionEnterU3Ec__Iterator6_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1075_MethodInfo;
 Object_t * U3COnCollisionEnterU3Ec__Iterator6_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1075 (U3COnCollisionEnterU3Ec__Iterator6_t310 * __this, MethodInfo* method){
	{
		Object_t * L_0 = (__this->___$current_3);
		return L_0;
	}
}
// System.Object UnityStandardAssets.Effects.Explosive/<OnCollisionEnter>c__Iterator6::System.Collections.IEnumerator.get_Current()
extern MethodInfo U3COnCollisionEnterU3Ec__Iterator6_System_Collections_IEnumerator_get_Current_m1076_MethodInfo;
 Object_t * U3COnCollisionEnterU3Ec__Iterator6_System_Collections_IEnumerator_get_Current_m1076 (U3COnCollisionEnterU3Ec__Iterator6_t310 * __this, MethodInfo* method){
	{
		Object_t * L_0 = (__this->___$current_3);
		return L_0;
	}
}
// System.Boolean UnityStandardAssets.Effects.Explosive/<OnCollisionEnter>c__Iterator6::MoveNext()
extern MethodInfo U3COnCollisionEnterU3Ec__Iterator6_MoveNext_m1077_MethodInfo;
 bool U3COnCollisionEnterU3Ec__Iterator6_MoveNext_m1077 (U3COnCollisionEnterU3Ec__Iterator6_t310 * __this, MethodInfo* method){
	uint32_t V_0 = 0;
	Vector3_t175  V_1 = {0};
	bool V_2 = false;
	{
		int32_t L_0 = (__this->___$PC_2);
		V_0 = L_0;
		__this->___$PC_2 = (-1);
		if (V_0 == 0)
		{
			goto IL_0021;
		}
		if (V_0 == 1)
		{
			goto IL_014a;
		}
	}
	{
		goto IL_0151;
	}

IL_0021:
	{
		Explosive_t309 * L_1 = (__this->___U3CU3Ef__this_5);
		NullCheck(L_1);
		bool L_2 = Behaviour_get_enabled_m2038(L_1, /*hidden argument*/&Behaviour_get_enabled_m2038_MethodInfo);
		if (!L_2)
		{
			goto IL_0137;
		}
	}
	{
		Collision_t308 * L_3 = (__this->___col_0);
		NullCheck(L_3);
		ContactPointU5BU5D_t536* L_4 = Collision_get_contacts_m2039(L_3, /*hidden argument*/&Collision_get_contacts_m2039_MethodInfo);
		NullCheck(L_4);
		if ((((int32_t)(((int32_t)(((Array_t *)L_4)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_0137;
		}
	}
	{
		Collision_t308 * L_5 = (__this->___col_0);
		NullCheck(L_5);
		Vector3_t175  L_6 = Collision_get_relativeVelocity_m2040(L_5, /*hidden argument*/&Collision_get_relativeVelocity_m2040_MethodInfo);
		Collision_t308 * L_7 = (__this->___col_0);
		NullCheck(L_7);
		ContactPointU5BU5D_t536* L_8 = Collision_get_contacts_m2039(L_7, /*hidden argument*/&Collision_get_contacts_m2039_MethodInfo);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 0);
		Vector3_t175  L_9 = ContactPoint_get_normal_m2041(((ContactPoint_t537 *)(ContactPoint_t537 *)SZArrayLdElema(L_8, 0)), /*hidden argument*/&ContactPoint_get_normal_m2041_MethodInfo);
		Vector3_t175  L_10 = Vector3_Project_m2042(NULL /*static, unused*/, L_6, L_9, /*hidden argument*/&Vector3_Project_m2042_MethodInfo);
		V_1 = L_10;
		float L_11 = Vector3_get_magnitude_m1896((&V_1), /*hidden argument*/&Vector3_get_magnitude_m1896_MethodInfo);
		__this->___U3CvelocityAlongCollisionNormalU3E__0_1 = L_11;
		float L_12 = (__this->___U3CvelocityAlongCollisionNormalU3E__0_1);
		Explosive_t309 * L_13 = (__this->___U3CU3Ef__this_5);
		NullCheck(L_13);
		float L_14 = (L_13->___detonationImpactVelocity_3);
		if ((((float)L_12) > ((float)L_14)))
		{
			goto IL_009e;
		}
	}
	{
		Explosive_t309 * L_15 = (__this->___U3CU3Ef__this_5);
		NullCheck(L_15);
		bool L_16 = (L_15->___m_Exploded_7);
		if (!L_16)
		{
			goto IL_0137;
		}
	}

IL_009e:
	{
		Explosive_t309 * L_17 = (__this->___U3CU3Ef__this_5);
		NullCheck(L_17);
		bool L_18 = (L_17->___m_Exploded_7);
		if (L_18)
		{
			goto IL_0137;
		}
	}
	{
		Explosive_t309 * L_19 = (__this->___U3CU3Ef__this_5);
		NullCheck(L_19);
		Transform_t173 * L_20 = (L_19->___explosionPrefab_2);
		Collision_t308 * L_21 = (__this->___col_0);
		NullCheck(L_21);
		ContactPointU5BU5D_t536* L_22 = Collision_get_contacts_m2039(L_21, /*hidden argument*/&Collision_get_contacts_m2039_MethodInfo);
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, 0);
		Vector3_t175  L_23 = ContactPoint_get_point_m2043(((ContactPoint_t537 *)(ContactPoint_t537 *)SZArrayLdElema(L_22, 0)), /*hidden argument*/&ContactPoint_get_point_m2043_MethodInfo);
		Collision_t308 * L_24 = (__this->___col_0);
		NullCheck(L_24);
		ContactPointU5BU5D_t536* L_25 = Collision_get_contacts_m2039(L_24, /*hidden argument*/&Collision_get_contacts_m2039_MethodInfo);
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, 0);
		Vector3_t175  L_26 = ContactPoint_get_normal_m2041(((ContactPoint_t537 *)(ContactPoint_t537 *)SZArrayLdElema(L_25, 0)), /*hidden argument*/&ContactPoint_get_normal_m2041_MethodInfo);
		Quaternion_t299  L_27 = Quaternion_LookRotation_m2044(NULL /*static, unused*/, L_26, /*hidden argument*/&Quaternion_LookRotation_m2044_MethodInfo);
		Object_Instantiate_m2024(NULL /*static, unused*/, L_20, L_23, L_27, /*hidden argument*/&Object_Instantiate_m2024_MethodInfo);
		Explosive_t309 * L_28 = (__this->___U3CU3Ef__this_5);
		NullCheck(L_28);
		L_28->___m_Exploded_7 = 1;
		Explosive_t309 * L_29 = (__this->___U3CU3Ef__this_5);
		NullCheck(L_29);
		Component_SendMessage_m2045(L_29, (String_t*) &_stringLiteral445, /*hidden argument*/&Component_SendMessage_m2045_MethodInfo);
		Explosive_t309 * L_30 = (__this->___U3CU3Ef__this_5);
		NullCheck(L_30);
		bool L_31 = (L_30->___reset_5);
		if (!L_31)
		{
			goto IL_0137;
		}
	}
	{
		Explosive_t309 * L_32 = (__this->___U3CU3Ef__this_5);
		NullCheck(L_32);
		ObjectResetter_t311 * L_33 = (L_32->___m_ObjectResetter_8);
		Explosive_t309 * L_34 = (__this->___U3CU3Ef__this_5);
		NullCheck(L_34);
		float L_35 = (L_34->___resetTimeDelay_6);
		NullCheck(L_33);
		ObjectResetter_DelayedReset_m1174(L_33, L_35, /*hidden argument*/&ObjectResetter_DelayedReset_m1174_MethodInfo);
	}

IL_0137:
	{
		__this->___$current_3 = NULL;
		__this->___$PC_2 = 1;
		goto IL_0153;
	}

IL_014a:
	{
		__this->___$PC_2 = (-1);
	}

IL_0151:
	{
		return 0;
	}

IL_0153:
	{
		return 1;
	}
	// Dead block : IL_0155: ldloc.2
}
// System.Void UnityStandardAssets.Effects.Explosive/<OnCollisionEnter>c__Iterator6::Dispose()
extern MethodInfo U3COnCollisionEnterU3Ec__Iterator6_Dispose_m1078_MethodInfo;
 void U3COnCollisionEnterU3Ec__Iterator6_Dispose_m1078 (U3COnCollisionEnterU3Ec__Iterator6_t310 * __this, MethodInfo* method){
	{
		__this->___$PC_2 = (-1);
		return;
	}
}
// System.Void UnityStandardAssets.Effects.Explosive/<OnCollisionEnter>c__Iterator6::Reset()
extern MethodInfo U3COnCollisionEnterU3Ec__Iterator6_Reset_m1079_MethodInfo;
 void U3COnCollisionEnterU3Ec__Iterator6_Reset_m1079 (U3COnCollisionEnterU3Ec__Iterator6_t310 * __this, MethodInfo* method){
	{
		NotSupportedException_t445 * L_0 = (NotSupportedException_t445 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t445_il2cpp_TypeInfo));
		NotSupportedException__ctor_m1445(L_0, /*hidden argument*/&NotSupportedException__ctor_m1445_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// Metadata Definition UnityStandardAssets.Effects.Explosive/<OnCollisionEnter>c__Iterator6
extern Il2CppType Collision_t308_0_0_3;
FieldInfo U3COnCollisionEnterU3Ec__Iterator6_t310____col_0_FieldInfo = 
{
	"col"/* name */
	, &Collision_t308_0_0_3/* type */
	, &U3COnCollisionEnterU3Ec__Iterator6_t310_il2cpp_TypeInfo/* parent */
	, offsetof(U3COnCollisionEnterU3Ec__Iterator6_t310, ___col_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Single_t448_0_0_3;
FieldInfo U3COnCollisionEnterU3Ec__Iterator6_t310____U3CvelocityAlongCollisionNormalU3E__0_1_FieldInfo = 
{
	"<velocityAlongCollisionNormal>__0"/* name */
	, &Single_t448_0_0_3/* type */
	, &U3COnCollisionEnterU3Ec__Iterator6_t310_il2cpp_TypeInfo/* parent */
	, offsetof(U3COnCollisionEnterU3Ec__Iterator6_t310, ___U3CvelocityAlongCollisionNormalU3E__0_1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t386_0_0_3;
FieldInfo U3COnCollisionEnterU3Ec__Iterator6_t310____$PC_2_FieldInfo = 
{
	"$PC"/* name */
	, &Int32_t386_0_0_3/* type */
	, &U3COnCollisionEnterU3Ec__Iterator6_t310_il2cpp_TypeInfo/* parent */
	, offsetof(U3COnCollisionEnterU3Ec__Iterator6_t310, ___$PC_2)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Object_t_0_0_3;
FieldInfo U3COnCollisionEnterU3Ec__Iterator6_t310____$current_3_FieldInfo = 
{
	"$current"/* name */
	, &Object_t_0_0_3/* type */
	, &U3COnCollisionEnterU3Ec__Iterator6_t310_il2cpp_TypeInfo/* parent */
	, offsetof(U3COnCollisionEnterU3Ec__Iterator6_t310, ___$current_3)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Collision_t308_0_0_3;
FieldInfo U3COnCollisionEnterU3Ec__Iterator6_t310____U3C$U3Ecol_4_FieldInfo = 
{
	"<$>col"/* name */
	, &Collision_t308_0_0_3/* type */
	, &U3COnCollisionEnterU3Ec__Iterator6_t310_il2cpp_TypeInfo/* parent */
	, offsetof(U3COnCollisionEnterU3Ec__Iterator6_t310, ___U3C$U3Ecol_4)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Explosive_t309_0_0_3;
FieldInfo U3COnCollisionEnterU3Ec__Iterator6_t310____U3CU3Ef__this_5_FieldInfo = 
{
	"<>f__this"/* name */
	, &Explosive_t309_0_0_3/* type */
	, &U3COnCollisionEnterU3Ec__Iterator6_t310_il2cpp_TypeInfo/* parent */
	, offsetof(U3COnCollisionEnterU3Ec__Iterator6_t310, ___U3CU3Ef__this_5)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* U3COnCollisionEnterU3Ec__Iterator6_t310_FieldInfos[] =
{
	&U3COnCollisionEnterU3Ec__Iterator6_t310____col_0_FieldInfo,
	&U3COnCollisionEnterU3Ec__Iterator6_t310____U3CvelocityAlongCollisionNormalU3E__0_1_FieldInfo,
	&U3COnCollisionEnterU3Ec__Iterator6_t310____$PC_2_FieldInfo,
	&U3COnCollisionEnterU3Ec__Iterator6_t310____$current_3_FieldInfo,
	&U3COnCollisionEnterU3Ec__Iterator6_t310____U3C$U3Ecol_4_FieldInfo,
	&U3COnCollisionEnterU3Ec__Iterator6_t310____U3CU3Ef__this_5_FieldInfo,
	NULL
};
static PropertyInfo U3COnCollisionEnterU3Ec__Iterator6_t310____System_Collections_Generic_IEnumeratorU3CobjectU3E_Current_PropertyInfo = 
{
	&U3COnCollisionEnterU3Ec__Iterator6_t310_il2cpp_TypeInfo/* parent */
	, "System.Collections.Generic.IEnumerator<object>.Current"/* name */
	, &U3COnCollisionEnterU3Ec__Iterator6_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1075_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo U3COnCollisionEnterU3Ec__Iterator6_t310____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&U3COnCollisionEnterU3Ec__Iterator6_t310_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &U3COnCollisionEnterU3Ec__Iterator6_System_Collections_IEnumerator_get_Current_m1076_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* U3COnCollisionEnterU3Ec__Iterator6_t310_PropertyInfos[] =
{
	&U3COnCollisionEnterU3Ec__Iterator6_t310____System_Collections_Generic_IEnumeratorU3CobjectU3E_Current_PropertyInfo,
	&U3COnCollisionEnterU3Ec__Iterator6_t310____System_Collections_IEnumerator_Current_PropertyInfo,
	NULL
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
// System.Void UnityStandardAssets.Effects.Explosive/<OnCollisionEnter>c__Iterator6::.ctor()
MethodInfo U3COnCollisionEnterU3Ec__Iterator6__ctor_m1074_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&U3COnCollisionEnterU3Ec__Iterator6__ctor_m1074/* method */
	, &U3COnCollisionEnterU3Ec__Iterator6_t310_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1173/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache U3COnCollisionEnterU3Ec__Iterator6_t310__CustomAttributeCache_U3COnCollisionEnterU3Ec__Iterator6_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1075;
// System.Object UnityStandardAssets.Effects.Explosive/<OnCollisionEnter>c__Iterator6::System.Collections.Generic.IEnumerator<object>.get_Current()
MethodInfo U3COnCollisionEnterU3Ec__Iterator6_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1075_MethodInfo = 
{
	"System.Collections.Generic.IEnumerator<object>.get_Current"/* name */
	, (methodPointerType)&U3COnCollisionEnterU3Ec__Iterator6_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1075/* method */
	, &U3COnCollisionEnterU3Ec__Iterator6_t310_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &U3COnCollisionEnterU3Ec__Iterator6_t310__CustomAttributeCache_U3COnCollisionEnterU3Ec__Iterator6_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1075/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1174/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache U3COnCollisionEnterU3Ec__Iterator6_t310__CustomAttributeCache_U3COnCollisionEnterU3Ec__Iterator6_System_Collections_IEnumerator_get_Current_m1076;
// System.Object UnityStandardAssets.Effects.Explosive/<OnCollisionEnter>c__Iterator6::System.Collections.IEnumerator.get_Current()
MethodInfo U3COnCollisionEnterU3Ec__Iterator6_System_Collections_IEnumerator_get_Current_m1076_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&U3COnCollisionEnterU3Ec__Iterator6_System_Collections_IEnumerator_get_Current_m1076/* method */
	, &U3COnCollisionEnterU3Ec__Iterator6_t310_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &U3COnCollisionEnterU3Ec__Iterator6_t310__CustomAttributeCache_U3COnCollisionEnterU3Ec__Iterator6_System_Collections_IEnumerator_get_Current_m1076/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1175/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379 (MethodInfo* method, void* obj, void** args);
// System.Boolean UnityStandardAssets.Effects.Explosive/<OnCollisionEnter>c__Iterator6::MoveNext()
MethodInfo U3COnCollisionEnterU3Ec__Iterator6_MoveNext_m1077_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&U3COnCollisionEnterU3Ec__Iterator6_MoveNext_m1077/* method */
	, &U3COnCollisionEnterU3Ec__Iterator6_t310_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t379_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t379/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1176/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache U3COnCollisionEnterU3Ec__Iterator6_t310__CustomAttributeCache_U3COnCollisionEnterU3Ec__Iterator6_Dispose_m1078;
// System.Void UnityStandardAssets.Effects.Explosive/<OnCollisionEnter>c__Iterator6::Dispose()
MethodInfo U3COnCollisionEnterU3Ec__Iterator6_Dispose_m1078_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&U3COnCollisionEnterU3Ec__Iterator6_Dispose_m1078/* method */
	, &U3COnCollisionEnterU3Ec__Iterator6_t310_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &U3COnCollisionEnterU3Ec__Iterator6_t310__CustomAttributeCache_U3COnCollisionEnterU3Ec__Iterator6_Dispose_m1078/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1177/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache U3COnCollisionEnterU3Ec__Iterator6_t310__CustomAttributeCache_U3COnCollisionEnterU3Ec__Iterator6_Reset_m1079;
// System.Void UnityStandardAssets.Effects.Explosive/<OnCollisionEnter>c__Iterator6::Reset()
MethodInfo U3COnCollisionEnterU3Ec__Iterator6_Reset_m1079_MethodInfo = 
{
	"Reset"/* name */
	, (methodPointerType)&U3COnCollisionEnterU3Ec__Iterator6_Reset_m1079/* method */
	, &U3COnCollisionEnterU3Ec__Iterator6_t310_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &U3COnCollisionEnterU3Ec__Iterator6_t310__CustomAttributeCache_U3COnCollisionEnterU3Ec__Iterator6_Reset_m1079/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1178/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* U3COnCollisionEnterU3Ec__Iterator6_t310_MethodInfos[] =
{
	&U3COnCollisionEnterU3Ec__Iterator6__ctor_m1074_MethodInfo,
	&U3COnCollisionEnterU3Ec__Iterator6_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1075_MethodInfo,
	&U3COnCollisionEnterU3Ec__Iterator6_System_Collections_IEnumerator_get_Current_m1076_MethodInfo,
	&U3COnCollisionEnterU3Ec__Iterator6_MoveNext_m1077_MethodInfo,
	&U3COnCollisionEnterU3Ec__Iterator6_Dispose_m1078_MethodInfo,
	&U3COnCollisionEnterU3Ec__Iterator6_Reset_m1079_MethodInfo,
	NULL
};
static MethodInfo* U3COnCollisionEnterU3Ec__Iterator6_t310_VTable[] =
{
	&Object_Equals_m1252_MethodInfo,
	&Object_Finalize_m1253_MethodInfo,
	&Object_GetHashCode_m1254_MethodInfo,
	&Object_ToString_m1255_MethodInfo,
	&U3COnCollisionEnterU3Ec__Iterator6_Dispose_m1078_MethodInfo,
	&U3COnCollisionEnterU3Ec__Iterator6_System_Collections_IEnumerator_get_Current_m1076_MethodInfo,
	&U3COnCollisionEnterU3Ec__Iterator6_MoveNext_m1077_MethodInfo,
	&U3COnCollisionEnterU3Ec__Iterator6_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1075_MethodInfo,
	&U3COnCollisionEnterU3Ec__Iterator6_Reset_m1079_MethodInfo,
};
static TypeInfo* U3COnCollisionEnterU3Ec__Iterator6_t310_InterfacesTypeInfos[] = 
{
	&IDisposable_t444_il2cpp_TypeInfo,
	&IEnumerator_t26_il2cpp_TypeInfo,
	&IEnumerator_1_t53_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair U3COnCollisionEnterU3Ec__Iterator6_t310_InterfacesOffsets[] = 
{
	{ &IDisposable_t444_il2cpp_TypeInfo, 4},
	{ &IEnumerator_t26_il2cpp_TypeInfo, 5},
	{ &IEnumerator_1_t53_il2cpp_TypeInfo, 7},
};
void U3COnCollisionEnterU3Ec__Iterator6_t310_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t384 * tmp;
		tmp = (CompilerGeneratedAttribute_t384 *)il2cpp_codegen_object_new (&CompilerGeneratedAttribute_t384_il2cpp_TypeInfo);
		CompilerGeneratedAttribute__ctor_m1269(tmp, &CompilerGeneratedAttribute__ctor_m1269_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void U3COnCollisionEnterU3Ec__Iterator6_t310_CustomAttributesCacheGenerator_U3COnCollisionEnterU3Ec__Iterator6_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1075(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t447 * tmp;
		tmp = (DebuggerHiddenAttribute_t447 *)il2cpp_codegen_object_new (&DebuggerHiddenAttribute_t447_il2cpp_TypeInfo);
		DebuggerHiddenAttribute__ctor_m1446(tmp, &DebuggerHiddenAttribute__ctor_m1446_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void U3COnCollisionEnterU3Ec__Iterator6_t310_CustomAttributesCacheGenerator_U3COnCollisionEnterU3Ec__Iterator6_System_Collections_IEnumerator_get_Current_m1076(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t447 * tmp;
		tmp = (DebuggerHiddenAttribute_t447 *)il2cpp_codegen_object_new (&DebuggerHiddenAttribute_t447_il2cpp_TypeInfo);
		DebuggerHiddenAttribute__ctor_m1446(tmp, &DebuggerHiddenAttribute__ctor_m1446_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void U3COnCollisionEnterU3Ec__Iterator6_t310_CustomAttributesCacheGenerator_U3COnCollisionEnterU3Ec__Iterator6_Dispose_m1078(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t447 * tmp;
		tmp = (DebuggerHiddenAttribute_t447 *)il2cpp_codegen_object_new (&DebuggerHiddenAttribute_t447_il2cpp_TypeInfo);
		DebuggerHiddenAttribute__ctor_m1446(tmp, &DebuggerHiddenAttribute__ctor_m1446_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void U3COnCollisionEnterU3Ec__Iterator6_t310_CustomAttributesCacheGenerator_U3COnCollisionEnterU3Ec__Iterator6_Reset_m1079(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t447 * tmp;
		tmp = (DebuggerHiddenAttribute_t447 *)il2cpp_codegen_object_new (&DebuggerHiddenAttribute_t447_il2cpp_TypeInfo);
		DebuggerHiddenAttribute__ctor_m1446(tmp, &DebuggerHiddenAttribute__ctor_m1446_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache U3COnCollisionEnterU3Ec__Iterator6_t310__CustomAttributeCache = {
1,
NULL,
&U3COnCollisionEnterU3Ec__Iterator6_t310_CustomAttributesCacheGenerator
};
CustomAttributesCache U3COnCollisionEnterU3Ec__Iterator6_t310__CustomAttributeCache_U3COnCollisionEnterU3Ec__Iterator6_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1075 = {
1,
NULL,
&U3COnCollisionEnterU3Ec__Iterator6_t310_CustomAttributesCacheGenerator_U3COnCollisionEnterU3Ec__Iterator6_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1075
};
CustomAttributesCache U3COnCollisionEnterU3Ec__Iterator6_t310__CustomAttributeCache_U3COnCollisionEnterU3Ec__Iterator6_System_Collections_IEnumerator_get_Current_m1076 = {
1,
NULL,
&U3COnCollisionEnterU3Ec__Iterator6_t310_CustomAttributesCacheGenerator_U3COnCollisionEnterU3Ec__Iterator6_System_Collections_IEnumerator_get_Current_m1076
};
CustomAttributesCache U3COnCollisionEnterU3Ec__Iterator6_t310__CustomAttributeCache_U3COnCollisionEnterU3Ec__Iterator6_Dispose_m1078 = {
1,
NULL,
&U3COnCollisionEnterU3Ec__Iterator6_t310_CustomAttributesCacheGenerator_U3COnCollisionEnterU3Ec__Iterator6_Dispose_m1078
};
CustomAttributesCache U3COnCollisionEnterU3Ec__Iterator6_t310__CustomAttributeCache_U3COnCollisionEnterU3Ec__Iterator6_Reset_m1079 = {
1,
NULL,
&U3COnCollisionEnterU3Ec__Iterator6_t310_CustomAttributesCacheGenerator_U3COnCollisionEnterU3Ec__Iterator6_Reset_m1079
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType U3COnCollisionEnterU3Ec__Iterator6_t310_0_0_0;
extern Il2CppType U3COnCollisionEnterU3Ec__Iterator6_t310_1_0_0;
struct U3COnCollisionEnterU3Ec__Iterator6_t310;
extern CustomAttributesCache U3COnCollisionEnterU3Ec__Iterator6_t310__CustomAttributeCache;
extern CustomAttributesCache U3COnCollisionEnterU3Ec__Iterator6_t310__CustomAttributeCache_U3COnCollisionEnterU3Ec__Iterator6_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1075;
extern CustomAttributesCache U3COnCollisionEnterU3Ec__Iterator6_t310__CustomAttributeCache_U3COnCollisionEnterU3Ec__Iterator6_System_Collections_IEnumerator_get_Current_m1076;
extern CustomAttributesCache U3COnCollisionEnterU3Ec__Iterator6_t310__CustomAttributeCache_U3COnCollisionEnterU3Ec__Iterator6_Dispose_m1078;
extern CustomAttributesCache U3COnCollisionEnterU3Ec__Iterator6_t310__CustomAttributeCache_U3COnCollisionEnterU3Ec__Iterator6_Reset_m1079;
TypeInfo U3COnCollisionEnterU3Ec__Iterator6_t310_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image/* image */
	, NULL/* gc_desc */
	, "<OnCollisionEnter>c__Iterator6"/* name */
	, ""/* namespaze */
	, U3COnCollisionEnterU3Ec__Iterator6_t310_MethodInfos/* methods */
	, U3COnCollisionEnterU3Ec__Iterator6_t310_PropertyInfos/* properties */
	, U3COnCollisionEnterU3Ec__Iterator6_t310_FieldInfos/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Explosive_t309_il2cpp_TypeInfo/* nested_in */
	, &U3COnCollisionEnterU3Ec__Iterator6_t310_il2cpp_TypeInfo/* element_class */
	, U3COnCollisionEnterU3Ec__Iterator6_t310_InterfacesTypeInfos/* implemented_interfaces */
	, U3COnCollisionEnterU3Ec__Iterator6_t310_VTable/* vtable */
	, &U3COnCollisionEnterU3Ec__Iterator6_t310__CustomAttributeCache/* custom_attributes_cache */
	, &U3COnCollisionEnterU3Ec__Iterator6_t310_il2cpp_TypeInfo/* cast_class */
	, &U3COnCollisionEnterU3Ec__Iterator6_t310_0_0_0/* byval_arg */
	, &U3COnCollisionEnterU3Ec__Iterator6_t310_1_0_0/* this_arg */
	, U3COnCollisionEnterU3Ec__Iterator6_t310_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (U3COnCollisionEnterU3Ec__Iterator6_t310)/* instance_size */
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
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 6/* method_count */
	, 2/* property_count */
	, 6/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 9/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo Component_GetComponent_TisObjectResetter_t311_m2046_MethodInfo;
struct Component_t507;
// Declaration !!0 UnityEngine.Component::GetComponent<UnityStandardAssets.Utility.ObjectResetter>()
// !!0 UnityEngine.Component::GetComponent<UnityStandardAssets.Utility.ObjectResetter>()
#define Component_GetComponent_TisObjectResetter_t311_m2046(__this, method) (ObjectResetter_t311 *)Component_GetComponent_TisObject_t_m1761_gshared((Component_t507 *)__this, method)


// System.Void UnityStandardAssets.Effects.Explosive::.ctor()
extern MethodInfo Explosive__ctor_m1080_MethodInfo;
 void Explosive__ctor_m1080 (Explosive_t309 * __this, MethodInfo* method){
	{
		__this->___detonationImpactVelocity_3 = (10.0f);
		__this->___sizeMultiplier_4 = (1.0f);
		__this->___reset_5 = 1;
		__this->___resetTimeDelay_6 = (10.0f);
		MonoBehaviour__ctor_m1402(__this, /*hidden argument*/&MonoBehaviour__ctor_m1402_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Effects.Explosive::Start()
extern MethodInfo Explosive_Start_m1081_MethodInfo;
 void Explosive_Start_m1081 (Explosive_t309 * __this, MethodInfo* method){
	{
		ObjectResetter_t311 * L_0 = Component_GetComponent_TisObjectResetter_t311_m2046(__this, /*hidden argument*/&Component_GetComponent_TisObjectResetter_t311_m2046_MethodInfo);
		__this->___m_ObjectResetter_8 = L_0;
		return;
	}
}
// System.Collections.IEnumerator UnityStandardAssets.Effects.Explosive::OnCollisionEnter(UnityEngine.Collision)
extern MethodInfo Explosive_OnCollisionEnter_m1082_MethodInfo;
 Object_t * Explosive_OnCollisionEnter_m1082 (Explosive_t309 * __this, Collision_t308 * ___col, MethodInfo* method){
	U3COnCollisionEnterU3Ec__Iterator6_t310 * V_0 = {0};
	{
		U3COnCollisionEnterU3Ec__Iterator6_t310 * L_0 = (U3COnCollisionEnterU3Ec__Iterator6_t310 *)il2cpp_codegen_object_new (InitializedTypeInfo(&U3COnCollisionEnterU3Ec__Iterator6_t310_il2cpp_TypeInfo));
		U3COnCollisionEnterU3Ec__Iterator6__ctor_m1074(L_0, /*hidden argument*/&U3COnCollisionEnterU3Ec__Iterator6__ctor_m1074_MethodInfo);
		V_0 = L_0;
		NullCheck(V_0);
		V_0->___col_0 = ___col;
		NullCheck(V_0);
		V_0->___U3C$U3Ecol_4 = ___col;
		NullCheck(V_0);
		V_0->___U3CU3Ef__this_5 = __this;
		return V_0;
	}
}
// System.Void UnityStandardAssets.Effects.Explosive::Reset()
extern MethodInfo Explosive_Reset_m1083_MethodInfo;
 void Explosive_Reset_m1083 (Explosive_t309 * __this, MethodInfo* method){
	{
		__this->___m_Exploded_7 = 0;
		return;
	}
}
// Metadata Definition UnityStandardAssets.Effects.Explosive
extern Il2CppType Transform_t173_0_0_6;
FieldInfo Explosive_t309____explosionPrefab_2_FieldInfo = 
{
	"explosionPrefab"/* name */
	, &Transform_t173_0_0_6/* type */
	, &Explosive_t309_il2cpp_TypeInfo/* parent */
	, offsetof(Explosive_t309, ___explosionPrefab_2)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Single_t448_0_0_6;
FieldInfo Explosive_t309____detonationImpactVelocity_3_FieldInfo = 
{
	"detonationImpactVelocity"/* name */
	, &Single_t448_0_0_6/* type */
	, &Explosive_t309_il2cpp_TypeInfo/* parent */
	, offsetof(Explosive_t309, ___detonationImpactVelocity_3)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Single_t448_0_0_6;
FieldInfo Explosive_t309____sizeMultiplier_4_FieldInfo = 
{
	"sizeMultiplier"/* name */
	, &Single_t448_0_0_6/* type */
	, &Explosive_t309_il2cpp_TypeInfo/* parent */
	, offsetof(Explosive_t309, ___sizeMultiplier_4)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Boolean_t379_0_0_6;
FieldInfo Explosive_t309____reset_5_FieldInfo = 
{
	"reset"/* name */
	, &Boolean_t379_0_0_6/* type */
	, &Explosive_t309_il2cpp_TypeInfo/* parent */
	, offsetof(Explosive_t309, ___reset_5)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Single_t448_0_0_6;
FieldInfo Explosive_t309____resetTimeDelay_6_FieldInfo = 
{
	"resetTimeDelay"/* name */
	, &Single_t448_0_0_6/* type */
	, &Explosive_t309_il2cpp_TypeInfo/* parent */
	, offsetof(Explosive_t309, ___resetTimeDelay_6)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Boolean_t379_0_0_1;
FieldInfo Explosive_t309____m_Exploded_7_FieldInfo = 
{
	"m_Exploded"/* name */
	, &Boolean_t379_0_0_1/* type */
	, &Explosive_t309_il2cpp_TypeInfo/* parent */
	, offsetof(Explosive_t309, ___m_Exploded_7)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType ObjectResetter_t311_0_0_1;
FieldInfo Explosive_t309____m_ObjectResetter_8_FieldInfo = 
{
	"m_ObjectResetter"/* name */
	, &ObjectResetter_t311_0_0_1/* type */
	, &Explosive_t309_il2cpp_TypeInfo/* parent */
	, offsetof(Explosive_t309, ___m_ObjectResetter_8)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* Explosive_t309_FieldInfos[] =
{
	&Explosive_t309____explosionPrefab_2_FieldInfo,
	&Explosive_t309____detonationImpactVelocity_3_FieldInfo,
	&Explosive_t309____sizeMultiplier_4_FieldInfo,
	&Explosive_t309____reset_5_FieldInfo,
	&Explosive_t309____resetTimeDelay_6_FieldInfo,
	&Explosive_t309____m_Exploded_7_FieldInfo,
	&Explosive_t309____m_ObjectResetter_8_FieldInfo,
	NULL
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
// System.Void UnityStandardAssets.Effects.Explosive::.ctor()
MethodInfo Explosive__ctor_m1080_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Explosive__ctor_m1080/* method */
	, &Explosive_t309_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1169/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
// System.Void UnityStandardAssets.Effects.Explosive::Start()
MethodInfo Explosive_Start_m1081_MethodInfo = 
{
	"Start"/* name */
	, (methodPointerType)&Explosive_Start_m1081/* method */
	, &Explosive_t309_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1170/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Collision_t308_0_0_0;
extern Il2CppType Collision_t308_0_0_0;
static ParameterInfo Explosive_t309_Explosive_OnCollisionEnter_m1082_ParameterInfos[] = 
{
	{"col", 0, 134218757, &EmptyCustomAttributesCache, &Collision_t308_0_0_0},
};
extern Il2CppType IEnumerator_t26_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache Explosive_t309__CustomAttributeCache_Explosive_OnCollisionEnter_m1082;
// System.Collections.IEnumerator UnityStandardAssets.Effects.Explosive::OnCollisionEnter(UnityEngine.Collision)
MethodInfo Explosive_OnCollisionEnter_m1082_MethodInfo = 
{
	"OnCollisionEnter"/* name */
	, (methodPointerType)&Explosive_OnCollisionEnter_m1082/* method */
	, &Explosive_t309_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_t26_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, Explosive_t309_Explosive_OnCollisionEnter_m1082_ParameterInfos/* parameters */
	, &Explosive_t309__CustomAttributeCache_Explosive_OnCollisionEnter_m1082/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1171/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
// System.Void UnityStandardAssets.Effects.Explosive::Reset()
MethodInfo Explosive_Reset_m1083_MethodInfo = 
{
	"Reset"/* name */
	, (methodPointerType)&Explosive_Reset_m1083/* method */
	, &Explosive_t309_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1172/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* Explosive_t309_MethodInfos[] =
{
	&Explosive__ctor_m1080_MethodInfo,
	&Explosive_Start_m1081_MethodInfo,
	&Explosive_OnCollisionEnter_m1082_MethodInfo,
	&Explosive_Reset_m1083_MethodInfo,
	NULL
};
extern TypeInfo U3COnCollisionEnterU3Ec__Iterator6_t310_il2cpp_TypeInfo;
static TypeInfo* Explosive_t309_il2cpp_TypeInfo__nestedTypes[2] =
{
	&U3COnCollisionEnterU3Ec__Iterator6_t310_il2cpp_TypeInfo,
	NULL
};
static MethodInfo* Explosive_t309_VTable[] =
{
	&Object_Equals_m1333_MethodInfo,
	&Object_Finalize_m1253_MethodInfo,
	&Object_GetHashCode_m1334_MethodInfo,
	&Object_ToString_m1335_MethodInfo,
};
void Explosive_t309_CustomAttributesCacheGenerator_Explosive_OnCollisionEnter_m1082(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t447 * tmp;
		tmp = (DebuggerHiddenAttribute_t447 *)il2cpp_codegen_object_new (&DebuggerHiddenAttribute_t447_il2cpp_TypeInfo);
		DebuggerHiddenAttribute__ctor_m1446(tmp, &DebuggerHiddenAttribute__ctor_m1446_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache Explosive_t309__CustomAttributeCache_Explosive_OnCollisionEnter_m1082 = {
1,
NULL,
&Explosive_t309_CustomAttributesCacheGenerator_Explosive_OnCollisionEnter_m1082
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType Explosive_t309_0_0_0;
extern Il2CppType Explosive_t309_1_0_0;
struct Explosive_t309;
extern CustomAttributesCache Explosive_t309__CustomAttributeCache_Explosive_OnCollisionEnter_m1082;
TypeInfo Explosive_t309_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image/* image */
	, NULL/* gc_desc */
	, "Explosive"/* name */
	, "UnityStandardAssets.Effects"/* namespaze */
	, Explosive_t309_MethodInfos/* methods */
	, NULL/* properties */
	, Explosive_t309_FieldInfos/* fields */
	, NULL/* events */
	, &MonoBehaviour_t39_il2cpp_TypeInfo/* parent */
	, Explosive_t309_il2cpp_TypeInfo__nestedTypes/* nested_types */
	, NULL/* nested_in */
	, &Explosive_t309_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, Explosive_t309_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &Explosive_t309_il2cpp_TypeInfo/* cast_class */
	, &Explosive_t309_0_0_0/* byval_arg */
	, &Explosive_t309_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Explosive_t309)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048577/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 4/* method_count */
	, 0/* property_count */
	, 7/* field_count */
	, 0/* event_count */
	, 1/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ExtinguishableParticleSystem_t313_il2cpp_TypeInfo;

extern MethodInfo Component_GetComponentsInChildren_TisParticleSystem_t323_m2047_MethodInfo;
extern MethodInfo ParticleSystem_set_enableEmission_m2048_MethodInfo;
struct Component_t507;
struct Component_t507;
// Declaration !!0[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
// !!0[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
 ObjectU5BU5D_t470* Component_GetComponentsInChildren_TisObject_t_m2049_gshared (Component_t507 * __this, MethodInfo* method);
#define Component_GetComponentsInChildren_TisObject_t_m2049(__this, method) (ObjectU5BU5D_t470*)Component_GetComponentsInChildren_TisObject_t_m2049_gshared((Component_t507 *)__this, method)
// Declaration !!0[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.ParticleSystem>()
// !!0[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.ParticleSystem>()
#define Component_GetComponentsInChildren_TisParticleSystem_t323_m2047(__this, method) (ParticleSystemU5BU5D_t312*)Component_GetComponentsInChildren_TisObject_t_m2049_gshared((Component_t507 *)__this, method)


// System.Void UnityStandardAssets.Effects.ExtinguishableParticleSystem::.ctor()
extern MethodInfo ExtinguishableParticleSystem__ctor_m1084_MethodInfo;
 void ExtinguishableParticleSystem__ctor_m1084 (ExtinguishableParticleSystem_t313 * __this, MethodInfo* method){
	{
		__this->___multiplier_2 = (1.0f);
		MonoBehaviour__ctor_m1402(__this, /*hidden argument*/&MonoBehaviour__ctor_m1402_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Effects.ExtinguishableParticleSystem::Start()
extern MethodInfo ExtinguishableParticleSystem_Start_m1085_MethodInfo;
 void ExtinguishableParticleSystem_Start_m1085 (ExtinguishableParticleSystem_t313 * __this, MethodInfo* method){
	{
		ParticleSystemU5BU5D_t312* L_0 = Component_GetComponentsInChildren_TisParticleSystem_t323_m2047(__this, /*hidden argument*/&Component_GetComponentsInChildren_TisParticleSystem_t323_m2047_MethodInfo);
		__this->___m_Systems_3 = L_0;
		return;
	}
}
// System.Void UnityStandardAssets.Effects.ExtinguishableParticleSystem::Extinguish()
extern MethodInfo ExtinguishableParticleSystem_Extinguish_m1086_MethodInfo;
 void ExtinguishableParticleSystem_Extinguish_m1086 (ExtinguishableParticleSystem_t313 * __this, MethodInfo* method){
	ParticleSystem_t323 * V_0 = {0};
	ParticleSystemU5BU5D_t312* V_1 = {0};
	int32_t V_2 = 0;
	{
		ParticleSystemU5BU5D_t312* L_0 = (__this->___m_Systems_3);
		V_1 = L_0;
		V_2 = 0;
		goto IL_001d;
	}

IL_000e:
	{
		NullCheck(V_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_1, V_2);
		int32_t L_1 = V_2;
		V_0 = (*(ParticleSystem_t323 **)(ParticleSystem_t323 **)SZArrayLdElema(V_1, L_1));
		NullCheck(V_0);
		ParticleSystem_set_enableEmission_m2048(V_0, 0, /*hidden argument*/&ParticleSystem_set_enableEmission_m2048_MethodInfo);
		V_2 = ((int32_t)(V_2+1));
	}

IL_001d:
	{
		NullCheck(V_1);
		if ((((int32_t)V_2) < ((int32_t)(((int32_t)(((Array_t *)V_1)->max_length))))))
		{
			goto IL_000e;
		}
	}
	{
		return;
	}
}
// Metadata Definition UnityStandardAssets.Effects.ExtinguishableParticleSystem
extern Il2CppType Single_t448_0_0_6;
FieldInfo ExtinguishableParticleSystem_t313____multiplier_2_FieldInfo = 
{
	"multiplier"/* name */
	, &Single_t448_0_0_6/* type */
	, &ExtinguishableParticleSystem_t313_il2cpp_TypeInfo/* parent */
	, offsetof(ExtinguishableParticleSystem_t313, ___multiplier_2)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType ParticleSystemU5BU5D_t312_0_0_1;
FieldInfo ExtinguishableParticleSystem_t313____m_Systems_3_FieldInfo = 
{
	"m_Systems"/* name */
	, &ParticleSystemU5BU5D_t312_0_0_1/* type */
	, &ExtinguishableParticleSystem_t313_il2cpp_TypeInfo/* parent */
	, offsetof(ExtinguishableParticleSystem_t313, ___m_Systems_3)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* ExtinguishableParticleSystem_t313_FieldInfos[] =
{
	&ExtinguishableParticleSystem_t313____multiplier_2_FieldInfo,
	&ExtinguishableParticleSystem_t313____m_Systems_3_FieldInfo,
	NULL
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
// System.Void UnityStandardAssets.Effects.ExtinguishableParticleSystem::.ctor()
MethodInfo ExtinguishableParticleSystem__ctor_m1084_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&ExtinguishableParticleSystem__ctor_m1084/* method */
	, &ExtinguishableParticleSystem_t313_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1179/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
// System.Void UnityStandardAssets.Effects.ExtinguishableParticleSystem::Start()
MethodInfo ExtinguishableParticleSystem_Start_m1085_MethodInfo = 
{
	"Start"/* name */
	, (methodPointerType)&ExtinguishableParticleSystem_Start_m1085/* method */
	, &ExtinguishableParticleSystem_t313_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1180/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
// System.Void UnityStandardAssets.Effects.ExtinguishableParticleSystem::Extinguish()
MethodInfo ExtinguishableParticleSystem_Extinguish_m1086_MethodInfo = 
{
	"Extinguish"/* name */
	, (methodPointerType)&ExtinguishableParticleSystem_Extinguish_m1086/* method */
	, &ExtinguishableParticleSystem_t313_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1181/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* ExtinguishableParticleSystem_t313_MethodInfos[] =
{
	&ExtinguishableParticleSystem__ctor_m1084_MethodInfo,
	&ExtinguishableParticleSystem_Start_m1085_MethodInfo,
	&ExtinguishableParticleSystem_Extinguish_m1086_MethodInfo,
	NULL
};
static MethodInfo* ExtinguishableParticleSystem_t313_VTable[] =
{
	&Object_Equals_m1333_MethodInfo,
	&Object_Finalize_m1253_MethodInfo,
	&Object_GetHashCode_m1334_MethodInfo,
	&Object_ToString_m1335_MethodInfo,
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType ExtinguishableParticleSystem_t313_0_0_0;
extern Il2CppType ExtinguishableParticleSystem_t313_1_0_0;
struct ExtinguishableParticleSystem_t313;
TypeInfo ExtinguishableParticleSystem_t313_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image/* image */
	, NULL/* gc_desc */
	, "ExtinguishableParticleSystem"/* name */
	, "UnityStandardAssets.Effects"/* namespaze */
	, ExtinguishableParticleSystem_t313_MethodInfos/* methods */
	, NULL/* properties */
	, ExtinguishableParticleSystem_t313_FieldInfos/* fields */
	, NULL/* events */
	, &MonoBehaviour_t39_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ExtinguishableParticleSystem_t313_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, ExtinguishableParticleSystem_t313_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ExtinguishableParticleSystem_t313_il2cpp_TypeInfo/* cast_class */
	, &ExtinguishableParticleSystem_t313_0_0_0/* byval_arg */
	, &ExtinguishableParticleSystem_t313_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (ExtinguishableParticleSystem_t313)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048577/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 3/* method_count */
	, 0/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo FireLight_t315_il2cpp_TypeInfo;

extern TypeInfo Mathf_t505_il2cpp_TypeInfo;
extern TypeInfo Vector3_t175_il2cpp_TypeInfo;
extern MethodInfo Random_get_value_m1978_MethodInfo;
extern MethodInfo Component_GetComponent_TisLight_t314_m2050_MethodInfo;
extern MethodInfo Time_get_time_m2051_MethodInfo;
extern MethodInfo Mathf_PerlinNoise_m2052_MethodInfo;
extern MethodInfo Light_set_intensity_m2053_MethodInfo;
extern MethodInfo Vector3__ctor_m1758_MethodInfo;
extern MethodInfo Transform_set_localPosition_m2054_MethodInfo;
extern MethodInfo Behaviour_set_enabled_m1870_MethodInfo;
struct Component_t507;
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.Light>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Light>()
#define Component_GetComponent_TisLight_t314_m2050(__this, method) (Light_t314 *)Component_GetComponent_TisObject_t_m1761_gshared((Component_t507 *)__this, method)


// System.Void UnityStandardAssets.Effects.FireLight::.ctor()
extern MethodInfo FireLight__ctor_m1087_MethodInfo;
 void FireLight__ctor_m1087 (FireLight_t315 * __this, MethodInfo* method){
	{
		__this->___m_Burning_3 = 1;
		MonoBehaviour__ctor_m1402(__this, /*hidden argument*/&MonoBehaviour__ctor_m1402_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Effects.FireLight::Start()
extern MethodInfo FireLight_Start_m1088_MethodInfo;
 void FireLight_Start_m1088 (FireLight_t315 * __this, MethodInfo* method){
	{
		float L_0 = Random_get_value_m1978(NULL /*static, unused*/, /*hidden argument*/&Random_get_value_m1978_MethodInfo);
		__this->___m_Rnd_2 = ((float)((float)L_0*(float)(100.0f)));
		Light_t314 * L_1 = Component_GetComponent_TisLight_t314_m2050(__this, /*hidden argument*/&Component_GetComponent_TisLight_t314_m2050_MethodInfo);
		__this->___m_Light_4 = L_1;
		return;
	}
}
// System.Void UnityStandardAssets.Effects.FireLight::Update()
extern MethodInfo FireLight_Update_m1089_MethodInfo;
 void FireLight_Update_m1089 (FireLight_t315 * __this, MethodInfo* method){
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		bool L_0 = (__this->___m_Burning_3);
		if (!L_0)
		{
			goto IL_011a;
		}
	}
	{
		Light_t314 * L_1 = (__this->___m_Light_4);
		float L_2 = (__this->___m_Rnd_2);
		float L_3 = Time_get_time_m2051(NULL /*static, unused*/, /*hidden argument*/&Time_get_time_m2051_MethodInfo);
		float L_4 = (__this->___m_Rnd_2);
		float L_5 = Time_get_time_m2051(NULL /*static, unused*/, /*hidden argument*/&Time_get_time_m2051_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t505_il2cpp_TypeInfo));
		float L_6 = Mathf_PerlinNoise_m2052(NULL /*static, unused*/, ((float)(L_2+L_3)), ((float)(((float)(L_4+(1.0f)))+((float)((float)L_5*(float)(1.0f))))), /*hidden argument*/&Mathf_PerlinNoise_m2052_MethodInfo);
		NullCheck(L_1);
		Light_set_intensity_m2053(L_1, ((float)((float)(2.0f)*(float)L_6)), /*hidden argument*/&Light_set_intensity_m2053_MethodInfo);
		float L_7 = (__this->___m_Rnd_2);
		float L_8 = Time_get_time_m2051(NULL /*static, unused*/, /*hidden argument*/&Time_get_time_m2051_MethodInfo);
		float L_9 = (__this->___m_Rnd_2);
		float L_10 = Time_get_time_m2051(NULL /*static, unused*/, /*hidden argument*/&Time_get_time_m2051_MethodInfo);
		float L_11 = Mathf_PerlinNoise_m2052(NULL /*static, unused*/, ((float)(L_7+((float)((float)L_8*(float)(2.0f))))), ((float)(((float)(L_9+(1.0f)))+((float)((float)L_10*(float)(2.0f))))), /*hidden argument*/&Mathf_PerlinNoise_m2052_MethodInfo);
		V_0 = ((float)(L_11-(0.5f)));
		float L_12 = (__this->___m_Rnd_2);
		float L_13 = Time_get_time_m2051(NULL /*static, unused*/, /*hidden argument*/&Time_get_time_m2051_MethodInfo);
		float L_14 = (__this->___m_Rnd_2);
		float L_15 = Time_get_time_m2051(NULL /*static, unused*/, /*hidden argument*/&Time_get_time_m2051_MethodInfo);
		float L_16 = Mathf_PerlinNoise_m2052(NULL /*static, unused*/, ((float)(((float)(L_12+(2.0f)))+((float)((float)L_13*(float)(2.0f))))), ((float)(((float)(L_14+(3.0f)))+((float)((float)L_15*(float)(2.0f))))), /*hidden argument*/&Mathf_PerlinNoise_m2052_MethodInfo);
		V_1 = ((float)(L_16-(0.5f)));
		float L_17 = (__this->___m_Rnd_2);
		float L_18 = Time_get_time_m2051(NULL /*static, unused*/, /*hidden argument*/&Time_get_time_m2051_MethodInfo);
		float L_19 = (__this->___m_Rnd_2);
		float L_20 = Time_get_time_m2051(NULL /*static, unused*/, /*hidden argument*/&Time_get_time_m2051_MethodInfo);
		float L_21 = Mathf_PerlinNoise_m2052(NULL /*static, unused*/, ((float)(((float)(L_17+(4.0f)))+((float)((float)L_18*(float)(2.0f))))), ((float)(((float)(L_19+(5.0f)))+((float)((float)L_20*(float)(2.0f))))), /*hidden argument*/&Mathf_PerlinNoise_m2052_MethodInfo);
		V_2 = ((float)(L_21-(0.5f)));
		Transform_t173 * L_22 = Component_get_transform_m1739(__this, /*hidden argument*/&Component_get_transform_m1739_MethodInfo);
		Vector3_t175  L_23 = Vector3_get_up_m1876(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_up_m1876_MethodInfo);
		Vector3_t175  L_24 = {0};
		Vector3__ctor_m1758(&L_24, V_0, V_1, V_2, /*hidden argument*/&Vector3__ctor_m1758_MethodInfo);
		Vector3_t175  L_25 = Vector3_op_Multiply_m1746(NULL /*static, unused*/, L_24, (1.0f), /*hidden argument*/&Vector3_op_Multiply_m1746_MethodInfo);
		Vector3_t175  L_26 = Vector3_op_Addition_m1750(NULL /*static, unused*/, L_23, L_25, /*hidden argument*/&Vector3_op_Addition_m1750_MethodInfo);
		NullCheck(L_22);
		Transform_set_localPosition_m2054(L_22, L_26, /*hidden argument*/&Transform_set_localPosition_m2054_MethodInfo);
	}

IL_011a:
	{
		return;
	}
}
// System.Void UnityStandardAssets.Effects.FireLight::Extinguish()
extern MethodInfo FireLight_Extinguish_m1090_MethodInfo;
 void FireLight_Extinguish_m1090 (FireLight_t315 * __this, MethodInfo* method){
	{
		__this->___m_Burning_3 = 0;
		Light_t314 * L_0 = (__this->___m_Light_4);
		NullCheck(L_0);
		Behaviour_set_enabled_m1870(L_0, 0, /*hidden argument*/&Behaviour_set_enabled_m1870_MethodInfo);
		return;
	}
}
// Metadata Definition UnityStandardAssets.Effects.FireLight
extern Il2CppType Single_t448_0_0_1;
FieldInfo FireLight_t315____m_Rnd_2_FieldInfo = 
{
	"m_Rnd"/* name */
	, &Single_t448_0_0_1/* type */
	, &FireLight_t315_il2cpp_TypeInfo/* parent */
	, offsetof(FireLight_t315, ___m_Rnd_2)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Boolean_t379_0_0_1;
FieldInfo FireLight_t315____m_Burning_3_FieldInfo = 
{
	"m_Burning"/* name */
	, &Boolean_t379_0_0_1/* type */
	, &FireLight_t315_il2cpp_TypeInfo/* parent */
	, offsetof(FireLight_t315, ___m_Burning_3)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Light_t314_0_0_1;
FieldInfo FireLight_t315____m_Light_4_FieldInfo = 
{
	"m_Light"/* name */
	, &Light_t314_0_0_1/* type */
	, &FireLight_t315_il2cpp_TypeInfo/* parent */
	, offsetof(FireLight_t315, ___m_Light_4)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* FireLight_t315_FieldInfos[] =
{
	&FireLight_t315____m_Rnd_2_FieldInfo,
	&FireLight_t315____m_Burning_3_FieldInfo,
	&FireLight_t315____m_Light_4_FieldInfo,
	NULL
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
// System.Void UnityStandardAssets.Effects.FireLight::.ctor()
MethodInfo FireLight__ctor_m1087_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&FireLight__ctor_m1087/* method */
	, &FireLight_t315_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1182/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
// System.Void UnityStandardAssets.Effects.FireLight::Start()
MethodInfo FireLight_Start_m1088_MethodInfo = 
{
	"Start"/* name */
	, (methodPointerType)&FireLight_Start_m1088/* method */
	, &FireLight_t315_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1183/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
// System.Void UnityStandardAssets.Effects.FireLight::Update()
MethodInfo FireLight_Update_m1089_MethodInfo = 
{
	"Update"/* name */
	, (methodPointerType)&FireLight_Update_m1089/* method */
	, &FireLight_t315_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1184/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
// System.Void UnityStandardAssets.Effects.FireLight::Extinguish()
MethodInfo FireLight_Extinguish_m1090_MethodInfo = 
{
	"Extinguish"/* name */
	, (methodPointerType)&FireLight_Extinguish_m1090/* method */
	, &FireLight_t315_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1185/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* FireLight_t315_MethodInfos[] =
{
	&FireLight__ctor_m1087_MethodInfo,
	&FireLight_Start_m1088_MethodInfo,
	&FireLight_Update_m1089_MethodInfo,
	&FireLight_Extinguish_m1090_MethodInfo,
	NULL
};
static MethodInfo* FireLight_t315_VTable[] =
{
	&Object_Equals_m1333_MethodInfo,
	&Object_Finalize_m1253_MethodInfo,
	&Object_GetHashCode_m1334_MethodInfo,
	&Object_ToString_m1335_MethodInfo,
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType FireLight_t315_0_0_0;
extern Il2CppType FireLight_t315_1_0_0;
struct FireLight_t315;
TypeInfo FireLight_t315_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image/* image */
	, NULL/* gc_desc */
	, "FireLight"/* name */
	, "UnityStandardAssets.Effects"/* namespaze */
	, FireLight_t315_MethodInfos/* methods */
	, NULL/* properties */
	, FireLight_t315_FieldInfos/* fields */
	, NULL/* events */
	, &MonoBehaviour_t39_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &FireLight_t315_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, FireLight_t315_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &FireLight_t315_il2cpp_TypeInfo/* cast_class */
	, &FireLight_t315_0_0_0/* byval_arg */
	, &FireLight_t315_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (FireLight_t315)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048577/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 4/* method_count */
	, 0/* property_count */
	, 3/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Hose_t317_il2cpp_TypeInfo;

extern TypeInfo Input_t506_il2cpp_TypeInfo;
extern MethodInfo Input_GetMouseButton_m2055_MethodInfo;
extern MethodInfo Time_get_deltaTime_m1748_MethodInfo;
extern MethodInfo Mathf_Lerp_m1756_MethodInfo;
extern MethodInfo Input_GetKeyDown_m2056_MethodInfo;
extern MethodInfo Renderer_get_enabled_m2057_MethodInfo;
extern MethodInfo Renderer_set_enabled_m2058_MethodInfo;
extern MethodInfo ParticleSystem_set_startSpeed_m2059_MethodInfo;


// System.Void UnityStandardAssets.Effects.Hose::.ctor()
extern MethodInfo Hose__ctor_m1091_MethodInfo;
 void Hose__ctor_m1091 (Hose_t317 * __this, MethodInfo* method){
	{
		__this->___maxPower_2 = (20.0f);
		__this->___minPower_3 = (5.0f);
		__this->___changeSpeed_4 = (5.0f);
		MonoBehaviour__ctor_m1402(__this, /*hidden argument*/&MonoBehaviour__ctor_m1402_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Effects.Hose::Update()
extern MethodInfo Hose_Update_m1092_MethodInfo;
 void Hose_Update_m1092 (Hose_t317 * __this, MethodInfo* method){
	ParticleSystem_t323 * V_0 = {0};
	ParticleSystemU5BU5D_t312* V_1 = {0};
	int32_t V_2 = 0;
	float G_B2_0 = 0.0f;
	Hose_t317 * G_B2_1 = {0};
	float G_B1_0 = 0.0f;
	Hose_t317 * G_B1_1 = {0};
	float G_B3_0 = 0.0f;
	float G_B3_1 = 0.0f;
	Hose_t317 * G_B3_2 = {0};
	{
		float L_0 = (__this->___m_Power_7);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Input_t506_il2cpp_TypeInfo));
		bool L_1 = Input_GetMouseButton_m2055(NULL /*static, unused*/, 0, /*hidden argument*/&Input_GetMouseButton_m2055_MethodInfo);
		G_B1_0 = L_0;
		G_B1_1 = __this;
		if (!L_1)
		{
			G_B2_0 = L_0;
			G_B2_1 = __this;
			goto IL_001d;
		}
	}
	{
		float L_2 = (__this->___maxPower_2);
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_0023;
	}

IL_001d:
	{
		float L_3 = (__this->___minPower_3);
		G_B3_0 = L_3;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_0023:
	{
		float L_4 = Time_get_deltaTime_m1748(NULL /*static, unused*/, /*hidden argument*/&Time_get_deltaTime_m1748_MethodInfo);
		float L_5 = (__this->___changeSpeed_4);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t505_il2cpp_TypeInfo));
		float L_6 = Mathf_Lerp_m1756(NULL /*static, unused*/, G_B3_1, G_B3_0, ((float)((float)L_4*(float)L_5)), /*hidden argument*/&Mathf_Lerp_m1756_MethodInfo);
		NullCheck(G_B3_2);
		G_B3_2->___m_Power_7 = L_6;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Input_t506_il2cpp_TypeInfo));
		bool L_7 = Input_GetKeyDown_m2056(NULL /*static, unused*/, ((int32_t)49), /*hidden argument*/&Input_GetKeyDown_m2056_MethodInfo);
		if (!L_7)
		{
			goto IL_005e;
		}
	}
	{
		Renderer_t316 * L_8 = (__this->___systemRenderer_6);
		Renderer_t316 * L_9 = (__this->___systemRenderer_6);
		NullCheck(L_9);
		bool L_10 = Renderer_get_enabled_m2057(L_9, /*hidden argument*/&Renderer_get_enabled_m2057_MethodInfo);
		NullCheck(L_8);
		Renderer_set_enabled_m2058(L_8, ((((int32_t)L_10) == ((int32_t)0))? 1 : 0), /*hidden argument*/&Renderer_set_enabled_m2058_MethodInfo);
	}

IL_005e:
	{
		ParticleSystemU5BU5D_t312* L_11 = (__this->___hoseWaterSystems_5);
		V_1 = L_11;
		V_2 = 0;
		goto IL_009a;
	}

IL_006c:
	{
		NullCheck(V_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_1, V_2);
		int32_t L_12 = V_2;
		V_0 = (*(ParticleSystem_t323 **)(ParticleSystem_t323 **)SZArrayLdElema(V_1, L_12));
		float L_13 = (__this->___m_Power_7);
		NullCheck(V_0);
		ParticleSystem_set_startSpeed_m2059(V_0, L_13, /*hidden argument*/&ParticleSystem_set_startSpeed_m2059_MethodInfo);
		float L_14 = (__this->___m_Power_7);
		float L_15 = (__this->___minPower_3);
		NullCheck(V_0);
		ParticleSystem_set_enableEmission_m2048(V_0, ((((float)L_14) > ((float)((float)((float)L_15*(float)(1.1f)))))? 1 : 0), /*hidden argument*/&ParticleSystem_set_enableEmission_m2048_MethodInfo);
		V_2 = ((int32_t)(V_2+1));
	}

IL_009a:
	{
		NullCheck(V_1);
		if ((((int32_t)V_2) < ((int32_t)(((int32_t)(((Array_t *)V_1)->max_length))))))
		{
			goto IL_006c;
		}
	}
	{
		return;
	}
}
// Metadata Definition UnityStandardAssets.Effects.Hose
extern Il2CppType Single_t448_0_0_6;
FieldInfo Hose_t317____maxPower_2_FieldInfo = 
{
	"maxPower"/* name */
	, &Single_t448_0_0_6/* type */
	, &Hose_t317_il2cpp_TypeInfo/* parent */
	, offsetof(Hose_t317, ___maxPower_2)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Single_t448_0_0_6;
FieldInfo Hose_t317____minPower_3_FieldInfo = 
{
	"minPower"/* name */
	, &Single_t448_0_0_6/* type */
	, &Hose_t317_il2cpp_TypeInfo/* parent */
	, offsetof(Hose_t317, ___minPower_3)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Single_t448_0_0_6;
FieldInfo Hose_t317____changeSpeed_4_FieldInfo = 
{
	"changeSpeed"/* name */
	, &Single_t448_0_0_6/* type */
	, &Hose_t317_il2cpp_TypeInfo/* parent */
	, offsetof(Hose_t317, ___changeSpeed_4)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType ParticleSystemU5BU5D_t312_0_0_6;
FieldInfo Hose_t317____hoseWaterSystems_5_FieldInfo = 
{
	"hoseWaterSystems"/* name */
	, &ParticleSystemU5BU5D_t312_0_0_6/* type */
	, &Hose_t317_il2cpp_TypeInfo/* parent */
	, offsetof(Hose_t317, ___hoseWaterSystems_5)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Renderer_t316_0_0_6;
FieldInfo Hose_t317____systemRenderer_6_FieldInfo = 
{
	"systemRenderer"/* name */
	, &Renderer_t316_0_0_6/* type */
	, &Hose_t317_il2cpp_TypeInfo/* parent */
	, offsetof(Hose_t317, ___systemRenderer_6)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Single_t448_0_0_1;
FieldInfo Hose_t317____m_Power_7_FieldInfo = 
{
	"m_Power"/* name */
	, &Single_t448_0_0_1/* type */
	, &Hose_t317_il2cpp_TypeInfo/* parent */
	, offsetof(Hose_t317, ___m_Power_7)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* Hose_t317_FieldInfos[] =
{
	&Hose_t317____maxPower_2_FieldInfo,
	&Hose_t317____minPower_3_FieldInfo,
	&Hose_t317____changeSpeed_4_FieldInfo,
	&Hose_t317____hoseWaterSystems_5_FieldInfo,
	&Hose_t317____systemRenderer_6_FieldInfo,
	&Hose_t317____m_Power_7_FieldInfo,
	NULL
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
// System.Void UnityStandardAssets.Effects.Hose::.ctor()
MethodInfo Hose__ctor_m1091_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Hose__ctor_m1091/* method */
	, &Hose_t317_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1186/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
// System.Void UnityStandardAssets.Effects.Hose::Update()
MethodInfo Hose_Update_m1092_MethodInfo = 
{
	"Update"/* name */
	, (methodPointerType)&Hose_Update_m1092/* method */
	, &Hose_t317_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1187/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* Hose_t317_MethodInfos[] =
{
	&Hose__ctor_m1091_MethodInfo,
	&Hose_Update_m1092_MethodInfo,
	NULL
};
static MethodInfo* Hose_t317_VTable[] =
{
	&Object_Equals_m1333_MethodInfo,
	&Object_Finalize_m1253_MethodInfo,
	&Object_GetHashCode_m1334_MethodInfo,
	&Object_ToString_m1335_MethodInfo,
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType Hose_t317_0_0_0;
extern Il2CppType Hose_t317_1_0_0;
struct Hose_t317;
TypeInfo Hose_t317_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image/* image */
	, NULL/* gc_desc */
	, "Hose"/* name */
	, "UnityStandardAssets.Effects"/* namespaze */
	, Hose_t317_MethodInfos/* methods */
	, NULL/* properties */
	, Hose_t317_FieldInfos/* fields */
	, NULL/* events */
	, &MonoBehaviour_t39_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &Hose_t317_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, Hose_t317_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &Hose_t317_il2cpp_TypeInfo/* cast_class */
	, &Hose_t317_0_0_0/* byval_arg */
	, &Hose_t317_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Hose_t317)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048577/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 2/* method_count */
	, 0/* property_count */
	, 6/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo ParticleSystem_get_startSize_m2060_MethodInfo;
extern MethodInfo ParticleSystem_set_startSize_m2061_MethodInfo;
extern MethodInfo ParticleSystem_get_startSpeed_m2062_MethodInfo;
extern MethodInfo ParticleSystem_get_startLifetime_m2063_MethodInfo;
extern MethodInfo ParticleSystem_set_startLifetime_m2064_MethodInfo;
extern MethodInfo ParticleSystem_Clear_m2065_MethodInfo;
extern MethodInfo ParticleSystem_Play_m2066_MethodInfo;


// System.Void UnityStandardAssets.Effects.ParticleSystemMultiplier::.ctor()
extern MethodInfo ParticleSystemMultiplier__ctor_m1093_MethodInfo;
 void ParticleSystemMultiplier__ctor_m1093 (ParticleSystemMultiplier_t318 * __this, MethodInfo* method){
	{
		__this->___multiplier_2 = (1.0f);
		MonoBehaviour__ctor_m1402(__this, /*hidden argument*/&MonoBehaviour__ctor_m1402_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Effects.ParticleSystemMultiplier::Start()
extern MethodInfo ParticleSystemMultiplier_Start_m1094_MethodInfo;
 void ParticleSystemMultiplier_Start_m1094 (ParticleSystemMultiplier_t318 * __this, MethodInfo* method){
	ParticleSystemU5BU5D_t312* V_0 = {0};
	ParticleSystem_t323 * V_1 = {0};
	ParticleSystemU5BU5D_t312* V_2 = {0};
	int32_t V_3 = 0;
	{
		ParticleSystemU5BU5D_t312* L_0 = Component_GetComponentsInChildren_TisParticleSystem_t323_m2047(__this, /*hidden argument*/&Component_GetComponentsInChildren_TisParticleSystem_t323_m2047_MethodInfo);
		V_0 = L_0;
		V_2 = V_0;
		V_3 = 0;
		goto IL_006c;
	}

IL_0010:
	{
		NullCheck(V_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_2, V_3);
		int32_t L_1 = V_3;
		V_1 = (*(ParticleSystem_t323 **)(ParticleSystem_t323 **)SZArrayLdElema(V_2, L_1));
		ParticleSystem_t323 * L_2 = V_1;
		NullCheck(L_2);
		float L_3 = ParticleSystem_get_startSize_m2060(L_2, /*hidden argument*/&ParticleSystem_get_startSize_m2060_MethodInfo);
		float L_4 = (__this->___multiplier_2);
		NullCheck(L_2);
		ParticleSystem_set_startSize_m2061(L_2, ((float)((float)L_3*(float)L_4)), /*hidden argument*/&ParticleSystem_set_startSize_m2061_MethodInfo);
		ParticleSystem_t323 * L_5 = V_1;
		NullCheck(L_5);
		float L_6 = ParticleSystem_get_startSpeed_m2062(L_5, /*hidden argument*/&ParticleSystem_get_startSpeed_m2062_MethodInfo);
		float L_7 = (__this->___multiplier_2);
		NullCheck(L_5);
		ParticleSystem_set_startSpeed_m2059(L_5, ((float)((float)L_6*(float)L_7)), /*hidden argument*/&ParticleSystem_set_startSpeed_m2059_MethodInfo);
		ParticleSystem_t323 * L_8 = V_1;
		NullCheck(L_8);
		float L_9 = ParticleSystem_get_startLifetime_m2063(L_8, /*hidden argument*/&ParticleSystem_get_startLifetime_m2063_MethodInfo);
		float L_10 = (__this->___multiplier_2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t505_il2cpp_TypeInfo));
		float L_11 = Mathf_Lerp_m1756(NULL /*static, unused*/, L_10, (1.0f), (0.5f), /*hidden argument*/&Mathf_Lerp_m1756_MethodInfo);
		NullCheck(L_8);
		ParticleSystem_set_startLifetime_m2064(L_8, ((float)((float)L_9*(float)L_11)), /*hidden argument*/&ParticleSystem_set_startLifetime_m2064_MethodInfo);
		NullCheck(V_1);
		ParticleSystem_Clear_m2065(V_1, /*hidden argument*/&ParticleSystem_Clear_m2065_MethodInfo);
		NullCheck(V_1);
		ParticleSystem_Play_m2066(V_1, /*hidden argument*/&ParticleSystem_Play_m2066_MethodInfo);
		V_3 = ((int32_t)(V_3+1));
	}

IL_006c:
	{
		NullCheck(V_2);
		if ((((int32_t)V_3) < ((int32_t)(((int32_t)(((Array_t *)V_2)->max_length))))))
		{
			goto IL_0010;
		}
	}
	{
		return;
	}
}
// Metadata Definition UnityStandardAssets.Effects.ParticleSystemMultiplier
extern Il2CppType Single_t448_0_0_6;
FieldInfo ParticleSystemMultiplier_t318____multiplier_2_FieldInfo = 
{
	"multiplier"/* name */
	, &Single_t448_0_0_6/* type */
	, &ParticleSystemMultiplier_t318_il2cpp_TypeInfo/* parent */
	, offsetof(ParticleSystemMultiplier_t318, ___multiplier_2)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* ParticleSystemMultiplier_t318_FieldInfos[] =
{
	&ParticleSystemMultiplier_t318____multiplier_2_FieldInfo,
	NULL
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
// System.Void UnityStandardAssets.Effects.ParticleSystemMultiplier::.ctor()
MethodInfo ParticleSystemMultiplier__ctor_m1093_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&ParticleSystemMultiplier__ctor_m1093/* method */
	, &ParticleSystemMultiplier_t318_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1188/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
// System.Void UnityStandardAssets.Effects.ParticleSystemMultiplier::Start()
MethodInfo ParticleSystemMultiplier_Start_m1094_MethodInfo = 
{
	"Start"/* name */
	, (methodPointerType)&ParticleSystemMultiplier_Start_m1094/* method */
	, &ParticleSystemMultiplier_t318_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1189/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* ParticleSystemMultiplier_t318_MethodInfos[] =
{
	&ParticleSystemMultiplier__ctor_m1093_MethodInfo,
	&ParticleSystemMultiplier_Start_m1094_MethodInfo,
	NULL
};
static MethodInfo* ParticleSystemMultiplier_t318_VTable[] =
{
	&Object_Equals_m1333_MethodInfo,
	&Object_Finalize_m1253_MethodInfo,
	&Object_GetHashCode_m1334_MethodInfo,
	&Object_ToString_m1335_MethodInfo,
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType ParticleSystemMultiplier_t318_0_0_0;
extern Il2CppType ParticleSystemMultiplier_t318_1_0_0;
struct ParticleSystemMultiplier_t318;
TypeInfo ParticleSystemMultiplier_t318_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image/* image */
	, NULL/* gc_desc */
	, "ParticleSystemMultiplier"/* name */
	, "UnityStandardAssets.Effects"/* namespaze */
	, ParticleSystemMultiplier_t318_MethodInfos/* methods */
	, NULL/* properties */
	, ParticleSystemMultiplier_t318_FieldInfos/* fields */
	, NULL/* events */
	, &MonoBehaviour_t39_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ParticleSystemMultiplier_t318_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, ParticleSystemMultiplier_t318_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ParticleSystemMultiplier_t318_il2cpp_TypeInfo/* cast_class */
	, &ParticleSystemMultiplier_t318_0_0_0/* byval_arg */
	, &ParticleSystemMultiplier_t318_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (ParticleSystemMultiplier_t318)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048577/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
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
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo SmokeParticles_t320_il2cpp_TypeInfo;

extern MethodInfo Component_GetComponent_TisAudioSource_t538_m2067_MethodInfo;
extern MethodInfo AudioSource_set_clip_m2068_MethodInfo;
extern MethodInfo AudioSource_Play_m2069_MethodInfo;
struct Component_t507;
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
#define Component_GetComponent_TisAudioSource_t538_m2067(__this, method) (AudioSource_t538 *)Component_GetComponent_TisObject_t_m1761_gshared((Component_t507 *)__this, method)


// System.Void UnityStandardAssets.Effects.SmokeParticles::.ctor()
extern MethodInfo SmokeParticles__ctor_m1095_MethodInfo;
 void SmokeParticles__ctor_m1095 (SmokeParticles_t320 * __this, MethodInfo* method){
	{
		MonoBehaviour__ctor_m1402(__this, /*hidden argument*/&MonoBehaviour__ctor_m1402_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Effects.SmokeParticles::Start()
extern MethodInfo SmokeParticles_Start_m1096_MethodInfo;
 void SmokeParticles_Start_m1096 (SmokeParticles_t320 * __this, MethodInfo* method){
	{
		AudioSource_t538 * L_0 = Component_GetComponent_TisAudioSource_t538_m2067(__this, /*hidden argument*/&Component_GetComponent_TisAudioSource_t538_m2067_MethodInfo);
		AudioClipU5BU5D_t319* L_1 = (__this->___extinguishSounds_2);
		AudioClipU5BU5D_t319* L_2 = (__this->___extinguishSounds_2);
		NullCheck(L_2);
		int32_t L_3 = Random_Range_m2021(NULL /*static, unused*/, 0, (((int32_t)(((Array_t *)L_2)->max_length))), /*hidden argument*/&Random_Range_m2021_MethodInfo);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_3);
		int32_t L_4 = L_3;
		NullCheck(L_0);
		AudioSource_set_clip_m2068(L_0, (*(AudioClip_t539 **)(AudioClip_t539 **)SZArrayLdElema(L_1, L_4)), /*hidden argument*/&AudioSource_set_clip_m2068_MethodInfo);
		AudioSource_t538 * L_5 = Component_GetComponent_TisAudioSource_t538_m2067(__this, /*hidden argument*/&Component_GetComponent_TisAudioSource_t538_m2067_MethodInfo);
		NullCheck(L_5);
		AudioSource_Play_m2069(L_5, /*hidden argument*/&AudioSource_Play_m2069_MethodInfo);
		return;
	}
}
// Metadata Definition UnityStandardAssets.Effects.SmokeParticles
extern Il2CppType AudioClipU5BU5D_t319_0_0_6;
FieldInfo SmokeParticles_t320____extinguishSounds_2_FieldInfo = 
{
	"extinguishSounds"/* name */
	, &AudioClipU5BU5D_t319_0_0_6/* type */
	, &SmokeParticles_t320_il2cpp_TypeInfo/* parent */
	, offsetof(SmokeParticles_t320, ___extinguishSounds_2)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* SmokeParticles_t320_FieldInfos[] =
{
	&SmokeParticles_t320____extinguishSounds_2_FieldInfo,
	NULL
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
// System.Void UnityStandardAssets.Effects.SmokeParticles::.ctor()
MethodInfo SmokeParticles__ctor_m1095_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&SmokeParticles__ctor_m1095/* method */
	, &SmokeParticles_t320_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1190/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
// System.Void UnityStandardAssets.Effects.SmokeParticles::Start()
MethodInfo SmokeParticles_Start_m1096_MethodInfo = 
{
	"Start"/* name */
	, (methodPointerType)&SmokeParticles_Start_m1096/* method */
	, &SmokeParticles_t320_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1191/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* SmokeParticles_t320_MethodInfos[] =
{
	&SmokeParticles__ctor_m1095_MethodInfo,
	&SmokeParticles_Start_m1096_MethodInfo,
	NULL
};
static MethodInfo* SmokeParticles_t320_VTable[] =
{
	&Object_Equals_m1333_MethodInfo,
	&Object_Finalize_m1253_MethodInfo,
	&Object_GetHashCode_m1334_MethodInfo,
	&Object_ToString_m1335_MethodInfo,
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType SmokeParticles_t320_0_0_0;
extern Il2CppType SmokeParticles_t320_1_0_0;
struct SmokeParticles_t320;
TypeInfo SmokeParticles_t320_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image/* image */
	, NULL/* gc_desc */
	, "SmokeParticles"/* name */
	, "UnityStandardAssets.Effects"/* namespaze */
	, SmokeParticles_t320_MethodInfos/* methods */
	, NULL/* properties */
	, SmokeParticles_t320_FieldInfos/* fields */
	, NULL/* events */
	, &MonoBehaviour_t39_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &SmokeParticles_t320_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, SmokeParticles_t320_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &SmokeParticles_t320_il2cpp_TypeInfo/* cast_class */
	, &SmokeParticles_t320_0_0_0/* byval_arg */
	, &SmokeParticles_t320_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (SmokeParticles_t320)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048577/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
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
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo WaterHoseParticles_t324_il2cpp_TypeInfo;

extern TypeInfo ParticleCollisionEventU5BU5D_t321_il2cpp_TypeInfo;
extern TypeInfo ParticleCollisionEvent_t322_il2cpp_TypeInfo;
extern MethodInfo Component_GetComponent_TisParticleSystem_t323_m2070_MethodInfo;
extern MethodInfo ParticlePhysicsExtensions_GetSafeCollisionEventSize_m2071_MethodInfo;
extern MethodInfo ParticlePhysicsExtensions_GetCollisionEvents_m2072_MethodInfo;
extern MethodInfo ParticleCollisionEvent_get_collider_m2073_MethodInfo;
extern MethodInfo ParticleCollisionEvent_get_velocity_m2074_MethodInfo;
extern MethodInfo Rigidbody_AddForce_m2075_MethodInfo;
extern MethodInfo GameObject_BroadcastMessage_m2076_MethodInfo;
struct Component_t507;
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.ParticleSystem>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.ParticleSystem>()
#define Component_GetComponent_TisParticleSystem_t323_m2070(__this, method) (ParticleSystem_t323 *)Component_GetComponent_TisObject_t_m1761_gshared((Component_t507 *)__this, method)


// System.Void UnityStandardAssets.Effects.WaterHoseParticles::.ctor()
extern MethodInfo WaterHoseParticles__ctor_m1097_MethodInfo;
 void WaterHoseParticles__ctor_m1097 (WaterHoseParticles_t324 * __this, MethodInfo* method){
	{
		__this->___force_3 = (1.0f);
		__this->___m_CollisionEvents_4 = ((ParticleCollisionEventU5BU5D_t321*)SZArrayNew(InitializedTypeInfo(&ParticleCollisionEventU5BU5D_t321_il2cpp_TypeInfo), ((int32_t)16)));
		MonoBehaviour__ctor_m1402(__this, /*hidden argument*/&MonoBehaviour__ctor_m1402_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Effects.WaterHoseParticles::Start()
extern MethodInfo WaterHoseParticles_Start_m1098_MethodInfo;
 void WaterHoseParticles_Start_m1098 (WaterHoseParticles_t324 * __this, MethodInfo* method){
	{
		ParticleSystem_t323 * L_0 = Component_GetComponent_TisParticleSystem_t323_m2070(__this, /*hidden argument*/&Component_GetComponent_TisParticleSystem_t323_m2070_MethodInfo);
		__this->___m_ParticleSystem_5 = L_0;
		return;
	}
}
// System.Void UnityStandardAssets.Effects.WaterHoseParticles::OnParticleCollision(UnityEngine.GameObject)
extern MethodInfo WaterHoseParticles_OnParticleCollision_m1099_MethodInfo;
 void WaterHoseParticles_OnParticleCollision_m1099 (WaterHoseParticles_t324 * __this, GameObject_t235 * ___other, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Collider_t296 * V_3 = {0};
	Vector3_t175  V_4 = {0};
	{
		ParticleSystem_t323 * L_0 = (__this->___m_ParticleSystem_5);
		int32_t L_1 = ParticlePhysicsExtensions_GetSafeCollisionEventSize_m2071(NULL /*static, unused*/, L_0, /*hidden argument*/&ParticlePhysicsExtensions_GetSafeCollisionEventSize_m2071_MethodInfo);
		V_0 = L_1;
		ParticleCollisionEventU5BU5D_t321* L_2 = (__this->___m_CollisionEvents_4);
		NullCheck(L_2);
		if ((((int32_t)(((int32_t)(((Array_t *)L_2)->max_length)))) >= ((int32_t)V_0)))
		{
			goto IL_0026;
		}
	}
	{
		__this->___m_CollisionEvents_4 = ((ParticleCollisionEventU5BU5D_t321*)SZArrayNew(InitializedTypeInfo(&ParticleCollisionEventU5BU5D_t321_il2cpp_TypeInfo), V_0));
	}

IL_0026:
	{
		ParticleSystem_t323 * L_3 = (__this->___m_ParticleSystem_5);
		ParticleCollisionEventU5BU5D_t321* L_4 = (__this->___m_CollisionEvents_4);
		int32_t L_5 = ParticlePhysicsExtensions_GetCollisionEvents_m2072(NULL /*static, unused*/, L_3, ___other, L_4, /*hidden argument*/&ParticlePhysicsExtensions_GetCollisionEvents_m2072_MethodInfo);
		V_1 = L_5;
		V_2 = 0;
		goto IL_00be;
	}

IL_0040:
	{
		float L_6 = Time_get_time_m2051(NULL /*static, unused*/, /*hidden argument*/&Time_get_time_m2051_MethodInfo);
		if ((((float)L_6) <= ((float)((float)((((WaterHoseParticles_t324_StaticFields*)InitializedTypeInfo(&WaterHoseParticles_t324_il2cpp_TypeInfo)->static_fields)->___lastSoundTime_2)+(0.2f))))))
		{
			goto IL_005f;
		}
	}
	{
		float L_7 = Time_get_time_m2051(NULL /*static, unused*/, /*hidden argument*/&Time_get_time_m2051_MethodInfo);
		((WaterHoseParticles_t324_StaticFields*)InitializedTypeInfo(&WaterHoseParticles_t324_il2cpp_TypeInfo)->static_fields)->___lastSoundTime_2 = L_7;
	}

IL_005f:
	{
		ParticleCollisionEventU5BU5D_t321* L_8 = (__this->___m_CollisionEvents_4);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, V_2);
		Collider_t296 * L_9 = ParticleCollisionEvent_get_collider_m2073(((ParticleCollisionEvent_t322 *)(ParticleCollisionEvent_t322 *)SZArrayLdElema(L_8, V_2)), /*hidden argument*/&ParticleCollisionEvent_get_collider_m2073_MethodInfo);
		V_3 = L_9;
		NullCheck(V_3);
		Rigidbody_t304 * L_10 = Collider_get_attachedRigidbody_m2007(V_3, /*hidden argument*/&Collider_get_attachedRigidbody_m2007_MethodInfo);
		bool L_11 = Object_op_Inequality_m1769(NULL /*static, unused*/, L_10, (Object_t326 *)NULL, /*hidden argument*/&Object_op_Inequality_m1769_MethodInfo);
		if (!L_11)
		{
			goto IL_00ae;
		}
	}
	{
		ParticleCollisionEventU5BU5D_t321* L_12 = (__this->___m_CollisionEvents_4);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, V_2);
		Vector3_t175  L_13 = ParticleCollisionEvent_get_velocity_m2074(((ParticleCollisionEvent_t322 *)(ParticleCollisionEvent_t322 *)SZArrayLdElema(L_12, V_2)), /*hidden argument*/&ParticleCollisionEvent_get_velocity_m2074_MethodInfo);
		V_4 = L_13;
		NullCheck(V_3);
		Rigidbody_t304 * L_14 = Collider_get_attachedRigidbody_m2007(V_3, /*hidden argument*/&Collider_get_attachedRigidbody_m2007_MethodInfo);
		float L_15 = (__this->___force_3);
		Vector3_t175  L_16 = Vector3_op_Multiply_m1746(NULL /*static, unused*/, V_4, L_15, /*hidden argument*/&Vector3_op_Multiply_m1746_MethodInfo);
		NullCheck(L_14);
		Rigidbody_AddForce_m2075(L_14, L_16, 1, /*hidden argument*/&Rigidbody_AddForce_m2075_MethodInfo);
	}

IL_00ae:
	{
		NullCheck(___other);
		GameObject_BroadcastMessage_m2076(___other, (String_t*) &_stringLiteral446, 1, /*hidden argument*/&GameObject_BroadcastMessage_m2076_MethodInfo);
		V_2 = ((int32_t)(V_2+1));
	}

IL_00be:
	{
		if ((((int32_t)V_2) < ((int32_t)V_1)))
		{
			goto IL_0040;
		}
	}
	{
		return;
	}
}
// Metadata Definition UnityStandardAssets.Effects.WaterHoseParticles
extern Il2CppType Single_t448_0_0_22;
FieldInfo WaterHoseParticles_t324____lastSoundTime_2_FieldInfo = 
{
	"lastSoundTime"/* name */
	, &Single_t448_0_0_22/* type */
	, &WaterHoseParticles_t324_il2cpp_TypeInfo/* parent */
	, offsetof(WaterHoseParticles_t324_StaticFields, ___lastSoundTime_2)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Single_t448_0_0_6;
FieldInfo WaterHoseParticles_t324____force_3_FieldInfo = 
{
	"force"/* name */
	, &Single_t448_0_0_6/* type */
	, &WaterHoseParticles_t324_il2cpp_TypeInfo/* parent */
	, offsetof(WaterHoseParticles_t324, ___force_3)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType ParticleCollisionEventU5BU5D_t321_0_0_1;
FieldInfo WaterHoseParticles_t324____m_CollisionEvents_4_FieldInfo = 
{
	"m_CollisionEvents"/* name */
	, &ParticleCollisionEventU5BU5D_t321_0_0_1/* type */
	, &WaterHoseParticles_t324_il2cpp_TypeInfo/* parent */
	, offsetof(WaterHoseParticles_t324, ___m_CollisionEvents_4)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType ParticleSystem_t323_0_0_1;
FieldInfo WaterHoseParticles_t324____m_ParticleSystem_5_FieldInfo = 
{
	"m_ParticleSystem"/* name */
	, &ParticleSystem_t323_0_0_1/* type */
	, &WaterHoseParticles_t324_il2cpp_TypeInfo/* parent */
	, offsetof(WaterHoseParticles_t324, ___m_ParticleSystem_5)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* WaterHoseParticles_t324_FieldInfos[] =
{
	&WaterHoseParticles_t324____lastSoundTime_2_FieldInfo,
	&WaterHoseParticles_t324____force_3_FieldInfo,
	&WaterHoseParticles_t324____m_CollisionEvents_4_FieldInfo,
	&WaterHoseParticles_t324____m_ParticleSystem_5_FieldInfo,
	NULL
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
// System.Void UnityStandardAssets.Effects.WaterHoseParticles::.ctor()
MethodInfo WaterHoseParticles__ctor_m1097_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&WaterHoseParticles__ctor_m1097/* method */
	, &WaterHoseParticles_t324_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1192/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
// System.Void UnityStandardAssets.Effects.WaterHoseParticles::Start()
MethodInfo WaterHoseParticles_Start_m1098_MethodInfo = 
{
	"Start"/* name */
	, (methodPointerType)&WaterHoseParticles_Start_m1098/* method */
	, &WaterHoseParticles_t324_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1193/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType GameObject_t235_0_0_0;
extern Il2CppType GameObject_t235_0_0_0;
static ParameterInfo WaterHoseParticles_t324_WaterHoseParticles_OnParticleCollision_m1099_ParameterInfos[] = 
{
	{"other", 0, 134218758, &EmptyCustomAttributesCache, &GameObject_t235_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityStandardAssets.Effects.WaterHoseParticles::OnParticleCollision(UnityEngine.GameObject)
MethodInfo WaterHoseParticles_OnParticleCollision_m1099_MethodInfo = 
{
	"OnParticleCollision"/* name */
	, (methodPointerType)&WaterHoseParticles_OnParticleCollision_m1099/* method */
	, &WaterHoseParticles_t324_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t/* invoker_method */
	, WaterHoseParticles_t324_WaterHoseParticles_OnParticleCollision_m1099_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1194/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* WaterHoseParticles_t324_MethodInfos[] =
{
	&WaterHoseParticles__ctor_m1097_MethodInfo,
	&WaterHoseParticles_Start_m1098_MethodInfo,
	&WaterHoseParticles_OnParticleCollision_m1099_MethodInfo,
	NULL
};
static MethodInfo* WaterHoseParticles_t324_VTable[] =
{
	&Object_Equals_m1333_MethodInfo,
	&Object_Finalize_m1253_MethodInfo,
	&Object_GetHashCode_m1334_MethodInfo,
	&Object_ToString_m1335_MethodInfo,
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType WaterHoseParticles_t324_0_0_0;
extern Il2CppType WaterHoseParticles_t324_1_0_0;
struct WaterHoseParticles_t324;
TypeInfo WaterHoseParticles_t324_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image/* image */
	, NULL/* gc_desc */
	, "WaterHoseParticles"/* name */
	, "UnityStandardAssets.Effects"/* namespaze */
	, WaterHoseParticles_t324_MethodInfos/* methods */
	, NULL/* properties */
	, WaterHoseParticles_t324_FieldInfos/* fields */
	, NULL/* events */
	, &MonoBehaviour_t39_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &WaterHoseParticles_t324_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, WaterHoseParticles_t324_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &WaterHoseParticles_t324_il2cpp_TypeInfo/* cast_class */
	, &WaterHoseParticles_t324_0_0_0/* byval_arg */
	, &WaterHoseParticles_t324_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (WaterHoseParticles_t324)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(WaterHoseParticles_t324_StaticFields)/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048577/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 3/* method_count */
	, 0/* property_count */
	, 4/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Mode_t325_il2cpp_TypeInfo;



// Metadata Definition UnityStandardAssets.Utility.ActivateTrigger/Mode
extern Il2CppType Int32_t386_0_0_1542;
FieldInfo Mode_t325____value___1_FieldInfo = 
{
	"value__"/* name */
	, &Int32_t386_0_0_1542/* type */
	, &Mode_t325_il2cpp_TypeInfo/* parent */
	, offsetof(Mode_t325, ___value___1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Mode_t325_0_0_32854;
FieldInfo Mode_t325____Trigger_2_FieldInfo = 
{
	"Trigger"/* name */
	, &Mode_t325_0_0_32854/* type */
	, &Mode_t325_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Mode_t325_0_0_32854;
FieldInfo Mode_t325____Replace_3_FieldInfo = 
{
	"Replace"/* name */
	, &Mode_t325_0_0_32854/* type */
	, &Mode_t325_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Mode_t325_0_0_32854;
FieldInfo Mode_t325____Activate_4_FieldInfo = 
{
	"Activate"/* name */
	, &Mode_t325_0_0_32854/* type */
	, &Mode_t325_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Mode_t325_0_0_32854;
FieldInfo Mode_t325____Enable_5_FieldInfo = 
{
	"Enable"/* name */
	, &Mode_t325_0_0_32854/* type */
	, &Mode_t325_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Mode_t325_0_0_32854;
FieldInfo Mode_t325____Animate_6_FieldInfo = 
{
	"Animate"/* name */
	, &Mode_t325_0_0_32854/* type */
	, &Mode_t325_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Mode_t325_0_0_32854;
FieldInfo Mode_t325____Deactivate_7_FieldInfo = 
{
	"Deactivate"/* name */
	, &Mode_t325_0_0_32854/* type */
	, &Mode_t325_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* Mode_t325_FieldInfos[] =
{
	&Mode_t325____value___1_FieldInfo,
	&Mode_t325____Trigger_2_FieldInfo,
	&Mode_t325____Replace_3_FieldInfo,
	&Mode_t325____Activate_4_FieldInfo,
	&Mode_t325____Enable_5_FieldInfo,
	&Mode_t325____Animate_6_FieldInfo,
	&Mode_t325____Deactivate_7_FieldInfo,
	NULL
};
static const int32_t Mode_t325____Trigger_2_DefaultValueData = 0;
extern Il2CppType Int32_t386_0_0_0;
static Il2CppFieldDefaultValueEntry Mode_t325____Trigger_2_DefaultValue = 
{
	&Mode_t325____Trigger_2_FieldInfo/* field */
	, { (char*)&Mode_t325____Trigger_2_DefaultValueData, &Int32_t386_0_0_0 }/* value */

};
static const int32_t Mode_t325____Replace_3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry Mode_t325____Replace_3_DefaultValue = 
{
	&Mode_t325____Replace_3_FieldInfo/* field */
	, { (char*)&Mode_t325____Replace_3_DefaultValueData, &Int32_t386_0_0_0 }/* value */

};
static const int32_t Mode_t325____Activate_4_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry Mode_t325____Activate_4_DefaultValue = 
{
	&Mode_t325____Activate_4_FieldInfo/* field */
	, { (char*)&Mode_t325____Activate_4_DefaultValueData, &Int32_t386_0_0_0 }/* value */

};
static const int32_t Mode_t325____Enable_5_DefaultValueData = 3;
static Il2CppFieldDefaultValueEntry Mode_t325____Enable_5_DefaultValue = 
{
	&Mode_t325____Enable_5_FieldInfo/* field */
	, { (char*)&Mode_t325____Enable_5_DefaultValueData, &Int32_t386_0_0_0 }/* value */

};
static const int32_t Mode_t325____Animate_6_DefaultValueData = 4;
static Il2CppFieldDefaultValueEntry Mode_t325____Animate_6_DefaultValue = 
{
	&Mode_t325____Animate_6_FieldInfo/* field */
	, { (char*)&Mode_t325____Animate_6_DefaultValueData, &Int32_t386_0_0_0 }/* value */

};
static const int32_t Mode_t325____Deactivate_7_DefaultValueData = 5;
static Il2CppFieldDefaultValueEntry Mode_t325____Deactivate_7_DefaultValue = 
{
	&Mode_t325____Deactivate_7_FieldInfo/* field */
	, { (char*)&Mode_t325____Deactivate_7_DefaultValueData, &Int32_t386_0_0_0 }/* value */

};
static Il2CppFieldDefaultValueEntry* Mode_t325_FieldDefaultValues[] = 
{
	&Mode_t325____Trigger_2_DefaultValue,
	&Mode_t325____Replace_3_DefaultValue,
	&Mode_t325____Activate_4_DefaultValue,
	&Mode_t325____Enable_5_DefaultValue,
	&Mode_t325____Animate_6_DefaultValue,
	&Mode_t325____Deactivate_7_DefaultValue,
	NULL
};
static MethodInfo* Mode_t325_MethodInfos[] =
{
	NULL
};
extern MethodInfo Enum_Equals_m1418_MethodInfo;
extern MethodInfo Enum_GetHashCode_m1419_MethodInfo;
extern MethodInfo Enum_ToString_m1420_MethodInfo;
extern MethodInfo Enum_ToString_m1421_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToBoolean_m1422_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToByte_m1423_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToChar_m1424_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToDateTime_m1425_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToDecimal_m1426_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToDouble_m1427_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToInt16_m1428_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToInt32_m1429_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToInt64_m1430_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToSByte_m1431_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToSingle_m1432_MethodInfo;
extern MethodInfo Enum_ToString_m1433_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToType_m1434_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToUInt16_m1435_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToUInt32_m1436_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToUInt64_m1437_MethodInfo;
extern MethodInfo Enum_CompareTo_m1438_MethodInfo;
extern MethodInfo Enum_GetTypeCode_m1439_MethodInfo;
static MethodInfo* Mode_t325_VTable[] =
{
	&Enum_Equals_m1418_MethodInfo,
	&Object_Finalize_m1253_MethodInfo,
	&Enum_GetHashCode_m1419_MethodInfo,
	&Enum_ToString_m1420_MethodInfo,
	&Enum_ToString_m1421_MethodInfo,
	&Enum_System_IConvertible_ToBoolean_m1422_MethodInfo,
	&Enum_System_IConvertible_ToByte_m1423_MethodInfo,
	&Enum_System_IConvertible_ToChar_m1424_MethodInfo,
	&Enum_System_IConvertible_ToDateTime_m1425_MethodInfo,
	&Enum_System_IConvertible_ToDecimal_m1426_MethodInfo,
	&Enum_System_IConvertible_ToDouble_m1427_MethodInfo,
	&Enum_System_IConvertible_ToInt16_m1428_MethodInfo,
	&Enum_System_IConvertible_ToInt32_m1429_MethodInfo,
	&Enum_System_IConvertible_ToInt64_m1430_MethodInfo,
	&Enum_System_IConvertible_ToSByte_m1431_MethodInfo,
	&Enum_System_IConvertible_ToSingle_m1432_MethodInfo,
	&Enum_ToString_m1433_MethodInfo,
	&Enum_System_IConvertible_ToType_m1434_MethodInfo,
	&Enum_System_IConvertible_ToUInt16_m1435_MethodInfo,
	&Enum_System_IConvertible_ToUInt32_m1436_MethodInfo,
	&Enum_System_IConvertible_ToUInt64_m1437_MethodInfo,
	&Enum_CompareTo_m1438_MethodInfo,
	&Enum_GetTypeCode_m1439_MethodInfo,
};
extern TypeInfo IFormattable_t440_il2cpp_TypeInfo;
extern TypeInfo IConvertible_t441_il2cpp_TypeInfo;
extern TypeInfo IComparable_t442_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair Mode_t325_InterfacesOffsets[] = 
{
	{ &IFormattable_t440_il2cpp_TypeInfo, 4},
	{ &IConvertible_t441_il2cpp_TypeInfo, 5},
	{ &IComparable_t442_il2cpp_TypeInfo, 21},
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType Mode_t325_0_0_0;
extern Il2CppType Mode_t325_1_0_0;
extern TypeInfo Enum_t443_il2cpp_TypeInfo;
extern TypeInfo Int32_t386_il2cpp_TypeInfo;
extern TypeInfo ActivateTrigger_t327_il2cpp_TypeInfo;
TypeInfo Mode_t325_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image/* image */
	, NULL/* gc_desc */
	, "Mode"/* name */
	, ""/* namespaze */
	, Mode_t325_MethodInfos/* methods */
	, NULL/* properties */
	, Mode_t325_FieldInfos/* fields */
	, NULL/* events */
	, &Enum_t443_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &ActivateTrigger_t327_il2cpp_TypeInfo/* nested_in */
	, &Int32_t386_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, Mode_t325_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &Int32_t386_il2cpp_TypeInfo/* cast_class */
	, &Mode_t325_0_0_0/* byval_arg */
	, &Mode_t325_1_0_0/* this_arg */
	, Mode_t325_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, Mode_t325_FieldDefaultValues/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Mode_t325)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (int32_t)/* element_size */
	, sizeof(int32_t)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 258/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, true/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 0/* method_count */
	, 0/* property_count */
	, 7/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 23/* vtable_count */
	, 0/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo Behaviour_t540_il2cpp_TypeInfo;
extern TypeInfo GameObject_t235_il2cpp_TypeInfo;
extern MethodInfo Component_get_gameObject_m1405_MethodInfo;
extern MethodInfo GameObject_BroadcastMessage_m2077_MethodInfo;
extern MethodInfo GameObject_get_transform_m1755_MethodInfo;
extern MethodInfo Transform_get_rotation_m1908_MethodInfo;
extern MethodInfo Object_DestroyObject_m2078_MethodInfo;
extern MethodInfo GameObject_SetActive_m1804_MethodInfo;
extern MethodInfo GameObject_GetComponent_TisAnimation_t541_m2079_MethodInfo;
extern MethodInfo Animation_Play_m2080_MethodInfo;
extern MethodInfo ActivateTrigger_DoActivateTrigger_m1101_MethodInfo;
struct GameObject_t235;
struct GameObject_t235;
// Declaration !!0 UnityEngine.GameObject::GetComponent<System.Object>()
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
 Object_t * GameObject_GetComponent_TisObject_t_m1914_gshared (GameObject_t235 * __this, MethodInfo* method);
#define GameObject_GetComponent_TisObject_t_m1914(__this, method) (Object_t *)GameObject_GetComponent_TisObject_t_m1914_gshared((GameObject_t235 *)__this, method)
// Declaration !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Animation>()
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Animation>()
#define GameObject_GetComponent_TisAnimation_t541_m2079(__this, method) (Animation_t541 *)GameObject_GetComponent_TisObject_t_m1914_gshared((GameObject_t235 *)__this, method)


// System.Void UnityStandardAssets.Utility.ActivateTrigger::.ctor()
extern MethodInfo ActivateTrigger__ctor_m1100_MethodInfo;
 void ActivateTrigger__ctor_m1100 (ActivateTrigger_t327 * __this, MethodInfo* method){
	{
		__this->___action_2 = 2;
		__this->___triggerCount_5 = 1;
		MonoBehaviour__ctor_m1402(__this, /*hidden argument*/&MonoBehaviour__ctor_m1402_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.ActivateTrigger::DoActivateTrigger()
 void ActivateTrigger_DoActivateTrigger_m1101 (ActivateTrigger_t327 * __this, MethodInfo* method){
	Object_t326 * V_0 = {0};
	Behaviour_t540 * V_1 = {0};
	GameObject_t235 * V_2 = {0};
	int32_t V_3 = {0};
	Object_t326 * G_B4_0 = {0};
	Object_t326 * G_B3_0 = {0};
	{
		int32_t L_0 = (__this->___triggerCount_5);
		__this->___triggerCount_5 = ((int32_t)(L_0-1));
		int32_t L_1 = (__this->___triggerCount_5);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		bool L_2 = (__this->___repeatTrigger_6);
		if (!L_2)
		{
			goto IL_014e;
		}
	}

IL_0024:
	{
		Object_t326 * L_3 = (__this->___target_3);
		Object_t326 * L_4 = L_3;
		G_B3_0 = L_4;
		if (L_4)
		{
			G_B4_0 = L_4;
			goto IL_0037;
		}
	}
	{
		GameObject_t235 * L_5 = Component_get_gameObject_m1405(__this, /*hidden argument*/&Component_get_gameObject_m1405_MethodInfo);
		G_B4_0 = ((Object_t326 *)(L_5));
	}

IL_0037:
	{
		V_0 = G_B4_0;
		V_1 = ((Behaviour_t540 *)IsInst(V_0, InitializedTypeInfo(&Behaviour_t540_il2cpp_TypeInfo)));
		V_2 = ((GameObject_t235 *)IsInst(V_0, InitializedTypeInfo(&GameObject_t235_il2cpp_TypeInfo)));
		bool L_6 = Object_op_Inequality_m1769(NULL /*static, unused*/, V_1, (Object_t326 *)NULL, /*hidden argument*/&Object_op_Inequality_m1769_MethodInfo);
		if (!L_6)
		{
			goto IL_0059;
		}
	}
	{
		NullCheck(V_1);
		GameObject_t235 * L_7 = Component_get_gameObject_m1405(V_1, /*hidden argument*/&Component_get_gameObject_m1405_MethodInfo);
		V_2 = L_7;
	}

IL_0059:
	{
		int32_t L_8 = (__this->___action_2);
		V_3 = L_8;
		if (V_3 == 0)
		{
			goto IL_0083;
		}
		if (V_3 == 1)
		{
			goto IL_009f;
		}
		if (V_3 == 2)
		{
			goto IL_00e9;
		}
		if (V_3 == 3)
		{
			goto IL_0101;
		}
		if (V_3 == 4)
		{
			goto IL_0119;
		}
		if (V_3 == 5)
		{
			goto IL_0136;
		}
	}
	{
		goto IL_014e;
	}

IL_0083:
	{
		bool L_9 = Object_op_Inequality_m1769(NULL /*static, unused*/, V_2, (Object_t326 *)NULL, /*hidden argument*/&Object_op_Inequality_m1769_MethodInfo);
		if (!L_9)
		{
			goto IL_009a;
		}
	}
	{
		NullCheck(V_2);
		GameObject_BroadcastMessage_m2077(V_2, (String_t*) &_stringLiteral447, /*hidden argument*/&GameObject_BroadcastMessage_m2077_MethodInfo);
	}

IL_009a:
	{
		goto IL_014e;
	}

IL_009f:
	{
		GameObject_t235 * L_10 = (__this->___source_4);
		bool L_11 = Object_op_Inequality_m1769(NULL /*static, unused*/, L_10, (Object_t326 *)NULL, /*hidden argument*/&Object_op_Inequality_m1769_MethodInfo);
		if (!L_11)
		{
			goto IL_00e4;
		}
	}
	{
		bool L_12 = Object_op_Inequality_m1769(NULL /*static, unused*/, V_2, (Object_t326 *)NULL, /*hidden argument*/&Object_op_Inequality_m1769_MethodInfo);
		if (!L_12)
		{
			goto IL_00e4;
		}
	}
	{
		GameObject_t235 * L_13 = (__this->___source_4);
		NullCheck(V_2);
		Transform_t173 * L_14 = GameObject_get_transform_m1755(V_2, /*hidden argument*/&GameObject_get_transform_m1755_MethodInfo);
		NullCheck(L_14);
		Vector3_t175  L_15 = Transform_get_position_m1738(L_14, /*hidden argument*/&Transform_get_position_m1738_MethodInfo);
		NullCheck(V_2);
		Transform_t173 * L_16 = GameObject_get_transform_m1755(V_2, /*hidden argument*/&GameObject_get_transform_m1755_MethodInfo);
		NullCheck(L_16);
		Quaternion_t299  L_17 = Transform_get_rotation_m1908(L_16, /*hidden argument*/&Transform_get_rotation_m1908_MethodInfo);
		Object_Instantiate_m2024(NULL /*static, unused*/, L_13, L_15, L_17, /*hidden argument*/&Object_Instantiate_m2024_MethodInfo);
		Object_DestroyObject_m2078(NULL /*static, unused*/, V_2, /*hidden argument*/&Object_DestroyObject_m2078_MethodInfo);
	}

IL_00e4:
	{
		goto IL_014e;
	}

IL_00e9:
	{
		bool L_18 = Object_op_Inequality_m1769(NULL /*static, unused*/, V_2, (Object_t326 *)NULL, /*hidden argument*/&Object_op_Inequality_m1769_MethodInfo);
		if (!L_18)
		{
			goto IL_00fc;
		}
	}
	{
		NullCheck(V_2);
		GameObject_SetActive_m1804(V_2, 1, /*hidden argument*/&GameObject_SetActive_m1804_MethodInfo);
	}

IL_00fc:
	{
		goto IL_014e;
	}

IL_0101:
	{
		bool L_19 = Object_op_Inequality_m1769(NULL /*static, unused*/, V_1, (Object_t326 *)NULL, /*hidden argument*/&Object_op_Inequality_m1769_MethodInfo);
		if (!L_19)
		{
			goto IL_0114;
		}
	}
	{
		NullCheck(V_1);
		Behaviour_set_enabled_m1870(V_1, 1, /*hidden argument*/&Behaviour_set_enabled_m1870_MethodInfo);
	}

IL_0114:
	{
		goto IL_014e;
	}

IL_0119:
	{
		bool L_20 = Object_op_Inequality_m1769(NULL /*static, unused*/, V_2, (Object_t326 *)NULL, /*hidden argument*/&Object_op_Inequality_m1769_MethodInfo);
		if (!L_20)
		{
			goto IL_0131;
		}
	}
	{
		NullCheck(V_2);
		Animation_t541 * L_21 = GameObject_GetComponent_TisAnimation_t541_m2079(V_2, /*hidden argument*/&GameObject_GetComponent_TisAnimation_t541_m2079_MethodInfo);
		NullCheck(L_21);
		Animation_Play_m2080(L_21, /*hidden argument*/&Animation_Play_m2080_MethodInfo);
	}

IL_0131:
	{
		goto IL_014e;
	}

IL_0136:
	{
		bool L_22 = Object_op_Inequality_m1769(NULL /*static, unused*/, V_2, (Object_t326 *)NULL, /*hidden argument*/&Object_op_Inequality_m1769_MethodInfo);
		if (!L_22)
		{
			goto IL_0149;
		}
	}
	{
		NullCheck(V_2);
		GameObject_SetActive_m1804(V_2, 0, /*hidden argument*/&GameObject_SetActive_m1804_MethodInfo);
	}

IL_0149:
	{
		goto IL_014e;
	}

IL_014e:
	{
		return;
	}
}
// System.Void UnityStandardAssets.Utility.ActivateTrigger::OnTriggerEnter(UnityEngine.Collider)
extern MethodInfo ActivateTrigger_OnTriggerEnter_m1102_MethodInfo;
 void ActivateTrigger_OnTriggerEnter_m1102 (ActivateTrigger_t327 * __this, Collider_t296 * ___other, MethodInfo* method){
	{
		ActivateTrigger_DoActivateTrigger_m1101(__this, /*hidden argument*/&ActivateTrigger_DoActivateTrigger_m1101_MethodInfo);
		return;
	}
}
// Metadata Definition UnityStandardAssets.Utility.ActivateTrigger
extern Il2CppType Mode_t325_0_0_6;
FieldInfo ActivateTrigger_t327____action_2_FieldInfo = 
{
	"action"/* name */
	, &Mode_t325_0_0_6/* type */
	, &ActivateTrigger_t327_il2cpp_TypeInfo/* parent */
	, offsetof(ActivateTrigger_t327, ___action_2)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Object_t326_0_0_6;
FieldInfo ActivateTrigger_t327____target_3_FieldInfo = 
{
	"target"/* name */
	, &Object_t326_0_0_6/* type */
	, &ActivateTrigger_t327_il2cpp_TypeInfo/* parent */
	, offsetof(ActivateTrigger_t327, ___target_3)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType GameObject_t235_0_0_6;
FieldInfo ActivateTrigger_t327____source_4_FieldInfo = 
{
	"source"/* name */
	, &GameObject_t235_0_0_6/* type */
	, &ActivateTrigger_t327_il2cpp_TypeInfo/* parent */
	, offsetof(ActivateTrigger_t327, ___source_4)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t386_0_0_6;
FieldInfo ActivateTrigger_t327____triggerCount_5_FieldInfo = 
{
	"triggerCount"/* name */
	, &Int32_t386_0_0_6/* type */
	, &ActivateTrigger_t327_il2cpp_TypeInfo/* parent */
	, offsetof(ActivateTrigger_t327, ___triggerCount_5)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Boolean_t379_0_0_6;
FieldInfo ActivateTrigger_t327____repeatTrigger_6_FieldInfo = 
{
	"repeatTrigger"/* name */
	, &Boolean_t379_0_0_6/* type */
	, &ActivateTrigger_t327_il2cpp_TypeInfo/* parent */
	, offsetof(ActivateTrigger_t327, ___repeatTrigger_6)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* ActivateTrigger_t327_FieldInfos[] =
{
	&ActivateTrigger_t327____action_2_FieldInfo,
	&ActivateTrigger_t327____target_3_FieldInfo,
	&ActivateTrigger_t327____source_4_FieldInfo,
	&ActivateTrigger_t327____triggerCount_5_FieldInfo,
	&ActivateTrigger_t327____repeatTrigger_6_FieldInfo,
	NULL
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
// System.Void UnityStandardAssets.Utility.ActivateTrigger::.ctor()
MethodInfo ActivateTrigger__ctor_m1100_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&ActivateTrigger__ctor_m1100/* method */
	, &ActivateTrigger_t327_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1195/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
// System.Void UnityStandardAssets.Utility.ActivateTrigger::DoActivateTrigger()
MethodInfo ActivateTrigger_DoActivateTrigger_m1101_MethodInfo = 
{
	"DoActivateTrigger"/* name */
	, (methodPointerType)&ActivateTrigger_DoActivateTrigger_m1101/* method */
	, &ActivateTrigger_t327_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1196/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Collider_t296_0_0_0;
extern Il2CppType Collider_t296_0_0_0;
static ParameterInfo ActivateTrigger_t327_ActivateTrigger_OnTriggerEnter_m1102_ParameterInfos[] = 
{
	{"other", 0, 134218759, &EmptyCustomAttributesCache, &Collider_t296_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityStandardAssets.Utility.ActivateTrigger::OnTriggerEnter(UnityEngine.Collider)
MethodInfo ActivateTrigger_OnTriggerEnter_m1102_MethodInfo = 
{
	"OnTriggerEnter"/* name */
	, (methodPointerType)&ActivateTrigger_OnTriggerEnter_m1102/* method */
	, &ActivateTrigger_t327_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t/* invoker_method */
	, ActivateTrigger_t327_ActivateTrigger_OnTriggerEnter_m1102_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1197/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* ActivateTrigger_t327_MethodInfos[] =
{
	&ActivateTrigger__ctor_m1100_MethodInfo,
	&ActivateTrigger_DoActivateTrigger_m1101_MethodInfo,
	&ActivateTrigger_OnTriggerEnter_m1102_MethodInfo,
	NULL
};
extern TypeInfo Mode_t325_il2cpp_TypeInfo;
static TypeInfo* ActivateTrigger_t327_il2cpp_TypeInfo__nestedTypes[2] =
{
	&Mode_t325_il2cpp_TypeInfo,
	NULL
};
static MethodInfo* ActivateTrigger_t327_VTable[] =
{
	&Object_Equals_m1333_MethodInfo,
	&Object_Finalize_m1253_MethodInfo,
	&Object_GetHashCode_m1334_MethodInfo,
	&Object_ToString_m1335_MethodInfo,
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType ActivateTrigger_t327_0_0_0;
extern Il2CppType ActivateTrigger_t327_1_0_0;
struct ActivateTrigger_t327;
TypeInfo ActivateTrigger_t327_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image/* image */
	, NULL/* gc_desc */
	, "ActivateTrigger"/* name */
	, "UnityStandardAssets.Utility"/* namespaze */
	, ActivateTrigger_t327_MethodInfos/* methods */
	, NULL/* properties */
	, ActivateTrigger_t327_FieldInfos/* fields */
	, NULL/* events */
	, &MonoBehaviour_t39_il2cpp_TypeInfo/* parent */
	, ActivateTrigger_t327_il2cpp_TypeInfo__nestedTypes/* nested_types */
	, NULL/* nested_in */
	, &ActivateTrigger_t327_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, ActivateTrigger_t327_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ActivateTrigger_t327_il2cpp_TypeInfo/* cast_class */
	, &ActivateTrigger_t327_0_0_0/* byval_arg */
	, &ActivateTrigger_t327_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (ActivateTrigger_t327)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048577/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 3/* method_count */
	, 0/* property_count */
	, 5/* field_count */
	, 0/* event_count */
	, 1/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ReplacementDefinition_t328_il2cpp_TypeInfo;



// System.Void UnityStandardAssets.Utility.AutoMobileShaderSwitch/ReplacementDefinition::.ctor()
extern MethodInfo ReplacementDefinition__ctor_m1103_MethodInfo;
 void ReplacementDefinition__ctor_m1103 (ReplacementDefinition_t328 * __this, MethodInfo* method){
	{
		Object__ctor_m1260(__this, /*hidden argument*/&Object__ctor_m1260_MethodInfo);
		return;
	}
}
// Metadata Definition UnityStandardAssets.Utility.AutoMobileShaderSwitch/ReplacementDefinition
extern Il2CppType Shader_t210_0_0_6;
FieldInfo ReplacementDefinition_t328____original_0_FieldInfo = 
{
	"original"/* name */
	, &Shader_t210_0_0_6/* type */
	, &ReplacementDefinition_t328_il2cpp_TypeInfo/* parent */
	, offsetof(ReplacementDefinition_t328, ___original_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Shader_t210_0_0_6;
FieldInfo ReplacementDefinition_t328____replacement_1_FieldInfo = 
{
	"replacement"/* name */
	, &Shader_t210_0_0_6/* type */
	, &ReplacementDefinition_t328_il2cpp_TypeInfo/* parent */
	, offsetof(ReplacementDefinition_t328, ___replacement_1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* ReplacementDefinition_t328_FieldInfos[] =
{
	&ReplacementDefinition_t328____original_0_FieldInfo,
	&ReplacementDefinition_t328____replacement_1_FieldInfo,
	NULL
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
// System.Void UnityStandardAssets.Utility.AutoMobileShaderSwitch/ReplacementDefinition::.ctor()
MethodInfo ReplacementDefinition__ctor_m1103_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&ReplacementDefinition__ctor_m1103/* method */
	, &ReplacementDefinition_t328_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1200/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* ReplacementDefinition_t328_MethodInfos[] =
{
	&ReplacementDefinition__ctor_m1103_MethodInfo,
	NULL
};
static MethodInfo* ReplacementDefinition_t328_VTable[] =
{
	&Object_Equals_m1252_MethodInfo,
	&Object_Finalize_m1253_MethodInfo,
	&Object_GetHashCode_m1254_MethodInfo,
	&Object_ToString_m1255_MethodInfo,
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType ReplacementDefinition_t328_0_0_0;
extern Il2CppType ReplacementDefinition_t328_1_0_0;
struct ReplacementDefinition_t328;
extern TypeInfo AutoMobileShaderSwitch_t331_il2cpp_TypeInfo;
TypeInfo ReplacementDefinition_t328_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image/* image */
	, NULL/* gc_desc */
	, "ReplacementDefinition"/* name */
	, ""/* namespaze */
	, ReplacementDefinition_t328_MethodInfos/* methods */
	, NULL/* properties */
	, ReplacementDefinition_t328_FieldInfos/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &AutoMobileShaderSwitch_t331_il2cpp_TypeInfo/* nested_in */
	, &ReplacementDefinition_t328_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, ReplacementDefinition_t328_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ReplacementDefinition_t328_il2cpp_TypeInfo/* cast_class */
	, &ReplacementDefinition_t328_0_0_0/* byval_arg */
	, &ReplacementDefinition_t328_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (ReplacementDefinition_t328)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1056770/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ReplacementList_t330_il2cpp_TypeInfo;

extern TypeInfo ReplacementDefinitionU5BU5D_t329_il2cpp_TypeInfo;


// System.Void UnityStandardAssets.Utility.AutoMobileShaderSwitch/ReplacementList::.ctor()
extern MethodInfo ReplacementList__ctor_m1104_MethodInfo;
 void ReplacementList__ctor_m1104 (ReplacementList_t330 * __this, MethodInfo* method){
	{
		__this->___items_0 = ((ReplacementDefinitionU5BU5D_t329*)SZArrayNew(InitializedTypeInfo(&ReplacementDefinitionU5BU5D_t329_il2cpp_TypeInfo), 0));
		Object__ctor_m1260(__this, /*hidden argument*/&Object__ctor_m1260_MethodInfo);
		return;
	}
}
// Metadata Definition UnityStandardAssets.Utility.AutoMobileShaderSwitch/ReplacementList
extern Il2CppType ReplacementDefinitionU5BU5D_t329_0_0_6;
FieldInfo ReplacementList_t330____items_0_FieldInfo = 
{
	"items"/* name */
	, &ReplacementDefinitionU5BU5D_t329_0_0_6/* type */
	, &ReplacementList_t330_il2cpp_TypeInfo/* parent */
	, offsetof(ReplacementList_t330, ___items_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* ReplacementList_t330_FieldInfos[] =
{
	&ReplacementList_t330____items_0_FieldInfo,
	NULL
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
// System.Void UnityStandardAssets.Utility.AutoMobileShaderSwitch/ReplacementList::.ctor()
MethodInfo ReplacementList__ctor_m1104_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&ReplacementList__ctor_m1104/* method */
	, &ReplacementList_t330_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1201/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* ReplacementList_t330_MethodInfos[] =
{
	&ReplacementList__ctor_m1104_MethodInfo,
	NULL
};
static MethodInfo* ReplacementList_t330_VTable[] =
{
	&Object_Equals_m1252_MethodInfo,
	&Object_Finalize_m1253_MethodInfo,
	&Object_GetHashCode_m1254_MethodInfo,
	&Object_ToString_m1255_MethodInfo,
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType ReplacementList_t330_0_0_0;
extern Il2CppType ReplacementList_t330_1_0_0;
struct ReplacementList_t330;
TypeInfo ReplacementList_t330_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image/* image */
	, NULL/* gc_desc */
	, "ReplacementList"/* name */
	, ""/* namespaze */
	, ReplacementList_t330_MethodInfos/* methods */
	, NULL/* properties */
	, ReplacementList_t330_FieldInfos/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &AutoMobileShaderSwitch_t331_il2cpp_TypeInfo/* nested_in */
	, &ReplacementList_t330_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, ReplacementList_t330_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ReplacementList_t330_il2cpp_TypeInfo/* cast_class */
	, &ReplacementList_t330_0_0_0/* byval_arg */
	, &ReplacementList_t330_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (ReplacementList_t330)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1056770/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo String_t_il2cpp_TypeInfo;
extern TypeInfo List_1_t542_il2cpp_TypeInfo;
extern TypeInfo Material_t211_il2cpp_TypeInfo;
extern TypeInfo ObjectU5BU5D_t470_il2cpp_TypeInfo;
extern TypeInfo StringU5BU5D_t65_il2cpp_TypeInfo;
extern MethodInfo Object_FindObjectsOfType_TisRenderer_t316_m2081_MethodInfo;
extern MethodInfo String_Concat_m1496_MethodInfo;
extern MethodInfo Debug_Log_m1453_MethodInfo;
extern MethodInfo List_1__ctor_m2082_MethodInfo;
extern MethodInfo Renderer_get_sharedMaterials_m2083_MethodInfo;
extern MethodInfo Material_get_shader_m1871_MethodInfo;
extern MethodInfo Object_op_Equality_m1329_MethodInfo;
extern MethodInfo Renderer_get_materials_m2084_MethodInfo;
extern MethodInfo List_1_Contains_m2085_MethodInfo;
extern MethodInfo List_1_Add_m2086_MethodInfo;
extern MethodInfo Object_Instantiate_TisMaterial_t211_m2087_MethodInfo;
extern MethodInfo Material_set_shader_m2088_MethodInfo;
extern MethodInfo Object_get_name_m1905_MethodInfo;
extern MethodInfo List_1_IndexOf_m2089_MethodInfo;
extern MethodInfo List_1_get_Item_m2090_MethodInfo;
extern MethodInfo String_Concat_m1619_MethodInfo;
extern MethodInfo Renderer_set_materials_m2091_MethodInfo;
extern MethodInfo String_Concat_m1980_MethodInfo;
extern MethodInfo List_1_get_Count_m2092_MethodInfo;
struct Object_t326;
// Declaration !!0[] UnityEngine.Object::FindObjectsOfType<UnityEngine.Renderer>()
// !!0[] UnityEngine.Object::FindObjectsOfType<UnityEngine.Renderer>()
 RendererU5BU5D_t543* Object_FindObjectsOfType_TisRenderer_t316_m2081 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct Object_t326;
// Declaration !!0 UnityEngine.Object::Instantiate<UnityEngine.Material>(!!0)
// !!0 UnityEngine.Object::Instantiate<UnityEngine.Material>(!!0)
 Material_t211 * Object_Instantiate_TisMaterial_t211_m2087 (Object_t * __this/* static, unused */, Material_t211 * p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void UnityStandardAssets.Utility.AutoMobileShaderSwitch::.ctor()
extern MethodInfo AutoMobileShaderSwitch__ctor_m1105_MethodInfo;
 void AutoMobileShaderSwitch__ctor_m1105 (AutoMobileShaderSwitch_t331 * __this, MethodInfo* method){
	{
		MonoBehaviour__ctor_m1402(__this, /*hidden argument*/&MonoBehaviour__ctor_m1402_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.AutoMobileShaderSwitch::OnEnable()
extern MethodInfo AutoMobileShaderSwitch_OnEnable_m1106_MethodInfo;
 void AutoMobileShaderSwitch_OnEnable_m1106 (AutoMobileShaderSwitch_t331 * __this, MethodInfo* method){
	RendererU5BU5D_t543* V_0 = {0};
	List_1_t542 * V_1 = {0};
	List_1_t542 * V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	ReplacementDefinition_t328 * V_5 = {0};
	ReplacementDefinitionU5BU5D_t329* V_6 = {0};
	int32_t V_7 = 0;
	Renderer_t316 * V_8 = {0};
	RendererU5BU5D_t543* V_9 = {0};
	int32_t V_10 = 0;
	MaterialU5BU5D_t544* V_11 = {0};
	int32_t V_12 = 0;
	Material_t211 * V_13 = {0};
	Material_t211 * V_14 = {0};
	int32_t V_15 = 0;
	{
		RendererU5BU5D_t543* L_0 = Object_FindObjectsOfType_TisRenderer_t316_m2081(NULL /*static, unused*/, /*hidden argument*/&Object_FindObjectsOfType_TisRenderer_t316_m2081_MethodInfo);
		V_0 = L_0;
		NullCheck(V_0);
		int32_t L_1 = (((int32_t)(((Array_t *)V_0)->max_length)));
		Object_t * L_2 = Box(InitializedTypeInfo(&Int32_t386_il2cpp_TypeInfo), &L_1);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_3 = String_Concat_m1496(NULL /*static, unused*/, L_2, (String_t*) &_stringLiteral448, /*hidden argument*/&String_Concat_m1496_MethodInfo);
		Debug_Log_m1453(NULL /*static, unused*/, L_3, /*hidden argument*/&Debug_Log_m1453_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&List_1_t542_il2cpp_TypeInfo));
		List_1_t542 * L_4 = (List_1_t542 *)il2cpp_codegen_object_new (InitializedTypeInfo(&List_1_t542_il2cpp_TypeInfo));
		List_1__ctor_m2082(L_4, /*hidden argument*/&List_1__ctor_m2082_MethodInfo);
		V_1 = L_4;
		List_1_t542 * L_5 = (List_1_t542 *)il2cpp_codegen_object_new (InitializedTypeInfo(&List_1_t542_il2cpp_TypeInfo));
		List_1__ctor_m2082(L_5, /*hidden argument*/&List_1__ctor_m2082_MethodInfo);
		V_2 = L_5;
		V_3 = 0;
		V_4 = 0;
		ReplacementList_t330 * L_6 = (__this->___m_ReplacementList_2);
		NullCheck(L_6);
		ReplacementDefinitionU5BU5D_t329* L_7 = (L_6->___items_0);
		V_6 = L_7;
		V_7 = 0;
		goto IL_0180;
	}

IL_0043:
	{
		NullCheck(V_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_6, V_7);
		int32_t L_8 = V_7;
		V_5 = (*(ReplacementDefinition_t328 **)(ReplacementDefinition_t328 **)SZArrayLdElema(V_6, L_8));
		V_9 = V_0;
		V_10 = 0;
		goto IL_016f;
	}

IL_0055:
	{
		NullCheck(V_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_9, V_10);
		int32_t L_9 = V_10;
		V_8 = (*(Renderer_t316 **)(Renderer_t316 **)SZArrayLdElema(V_9, L_9));
		V_11 = (MaterialU5BU5D_t544*)NULL;
		V_12 = 0;
		goto IL_0149;
	}

IL_0067:
	{
		NullCheck(V_8);
		MaterialU5BU5D_t544* L_10 = Renderer_get_sharedMaterials_m2083(V_8, /*hidden argument*/&Renderer_get_sharedMaterials_m2083_MethodInfo);
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, V_12);
		int32_t L_11 = V_12;
		V_13 = (*(Material_t211 **)(Material_t211 **)SZArrayLdElema(L_10, L_11));
		NullCheck(V_13);
		Shader_t210 * L_12 = Material_get_shader_m1871(V_13, /*hidden argument*/&Material_get_shader_m1871_MethodInfo);
		NullCheck(V_5);
		Shader_t210 * L_13 = (V_5->___original_0);
		bool L_14 = Object_op_Equality_m1329(NULL /*static, unused*/, L_12, L_13, /*hidden argument*/&Object_op_Equality_m1329_MethodInfo);
		if (!L_14)
		{
			goto IL_0143;
		}
	}
	{
		if (V_11)
		{
			goto IL_009b;
		}
	}
	{
		NullCheck(V_8);
		MaterialU5BU5D_t544* L_15 = Renderer_get_materials_m2084(V_8, /*hidden argument*/&Renderer_get_materials_m2084_MethodInfo);
		V_11 = L_15;
	}

IL_009b:
	{
		NullCheck(V_1);
		bool L_16 = (bool)VirtFuncInvoker1< bool, Material_t211 * >::Invoke(&List_1_Contains_m2085_MethodInfo, V_1, V_13);
		if (L_16)
		{
			goto IL_00d3;
		}
	}
	{
		NullCheck(V_1);
		VirtActionInvoker1< Material_t211 * >::Invoke(&List_1_Add_m2086_MethodInfo, V_1, V_13);
		Material_t211 * L_17 = Object_Instantiate_TisMaterial_t211_m2087(NULL /*static, unused*/, V_13, /*hidden argument*/&Object_Instantiate_TisMaterial_t211_m2087_MethodInfo);
		V_14 = L_17;
		NullCheck(V_5);
		Shader_t210 * L_18 = (V_5->___replacement_1);
		NullCheck(V_14);
		Material_set_shader_m2088(V_14, L_18, /*hidden argument*/&Material_set_shader_m2088_MethodInfo);
		NullCheck(V_2);
		VirtActionInvoker1< Material_t211 * >::Invoke(&List_1_Add_m2086_MethodInfo, V_2, V_14);
		V_3 = ((int32_t)(V_3+1));
	}

IL_00d3:
	{
		ObjectU5BU5D_t470* L_19 = ((ObjectU5BU5D_t470*)SZArrayNew(InitializedTypeInfo(&ObjectU5BU5D_t470_il2cpp_TypeInfo), 6));
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, 0);
		ArrayElementTypeCheck (L_19, (String_t*) &_stringLiteral449);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_19, 0)) = (Object_t *)(String_t*) &_stringLiteral449;
		ObjectU5BU5D_t470* L_20 = L_19;
		NullCheck(V_8);
		GameObject_t235 * L_21 = Component_get_gameObject_m1405(V_8, /*hidden argument*/&Component_get_gameObject_m1405_MethodInfo);
		NullCheck(L_21);
		String_t* L_22 = Object_get_name_m1905(L_21, /*hidden argument*/&Object_get_name_m1905_MethodInfo);
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, 1);
		ArrayElementTypeCheck (L_20, L_22);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_20, 1)) = (Object_t *)L_22;
		ObjectU5BU5D_t470* L_23 = L_20;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, 2);
		ArrayElementTypeCheck (L_23, (String_t*) &_stringLiteral450);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_23, 2)) = (Object_t *)(String_t*) &_stringLiteral450;
		ObjectU5BU5D_t470* L_24 = L_23;
		int32_t L_25 = V_12;
		Object_t * L_26 = Box(InitializedTypeInfo(&Int32_t386_il2cpp_TypeInfo), &L_25);
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, 3);
		ArrayElementTypeCheck (L_24, L_26);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_24, 3)) = (Object_t *)L_26;
		ObjectU5BU5D_t470* L_27 = L_24;
		NullCheck(L_27);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_27, 4);
		ArrayElementTypeCheck (L_27, (String_t*) &_stringLiteral262);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_27, 4)) = (Object_t *)(String_t*) &_stringLiteral262;
		ObjectU5BU5D_t470* L_28 = L_27;
		NullCheck(V_1);
		int32_t L_29 = (int32_t)VirtFuncInvoker1< int32_t, Material_t211 * >::Invoke(&List_1_IndexOf_m2089_MethodInfo, V_1, V_13);
		NullCheck(V_2);
		Material_t211 * L_30 = (Material_t211 *)VirtFuncInvoker1< Material_t211 *, int32_t >::Invoke(&List_1_get_Item_m2090_MethodInfo, V_2, L_29);
		NullCheck(L_30);
		String_t* L_31 = Object_get_name_m1905(L_30, /*hidden argument*/&Object_get_name_m1905_MethodInfo);
		NullCheck(L_28);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_28, 5);
		ArrayElementTypeCheck (L_28, L_31);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_28, 5)) = (Object_t *)L_31;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_32 = String_Concat_m1619(NULL /*static, unused*/, L_28, /*hidden argument*/&String_Concat_m1619_MethodInfo);
		Debug_Log_m1453(NULL /*static, unused*/, L_32, /*hidden argument*/&Debug_Log_m1453_MethodInfo);
		NullCheck(V_1);
		int32_t L_33 = (int32_t)VirtFuncInvoker1< int32_t, Material_t211 * >::Invoke(&List_1_IndexOf_m2089_MethodInfo, V_1, V_13);
		NullCheck(V_2);
		Material_t211 * L_34 = (Material_t211 *)VirtFuncInvoker1< Material_t211 *, int32_t >::Invoke(&List_1_get_Item_m2090_MethodInfo, V_2, L_33);
		NullCheck(V_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_11, V_12);
		ArrayElementTypeCheck (V_11, L_34);
		*((Material_t211 **)(Material_t211 **)SZArrayLdElema(V_11, V_12)) = (Material_t211 *)L_34;
		V_4 = ((int32_t)(V_4+1));
	}

IL_0143:
	{
		V_12 = ((int32_t)(V_12+1));
	}

IL_0149:
	{
		NullCheck(V_8);
		MaterialU5BU5D_t544* L_35 = Renderer_get_sharedMaterials_m2083(V_8, /*hidden argument*/&Renderer_get_sharedMaterials_m2083_MethodInfo);
		NullCheck(L_35);
		if ((((int32_t)V_12) < ((int32_t)(((int32_t)(((Array_t *)L_35)->max_length))))))
		{
			goto IL_0067;
		}
	}
	{
		if (!V_11)
		{
			goto IL_0169;
		}
	}
	{
		NullCheck(V_8);
		Renderer_set_materials_m2091(V_8, V_11, /*hidden argument*/&Renderer_set_materials_m2091_MethodInfo);
	}

IL_0169:
	{
		V_10 = ((int32_t)(V_10+1));
	}

IL_016f:
	{
		NullCheck(V_9);
		if ((((int32_t)V_10) < ((int32_t)(((int32_t)(((Array_t *)V_9)->max_length))))))
		{
			goto IL_0055;
		}
	}
	{
		V_7 = ((int32_t)(V_7+1));
	}

IL_0180:
	{
		NullCheck(V_6);
		if ((((int32_t)V_7) < ((int32_t)(((int32_t)(((Array_t *)V_6)->max_length))))))
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_36 = V_4;
		Object_t * L_37 = Box(InitializedTypeInfo(&Int32_t386_il2cpp_TypeInfo), &L_36);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_38 = String_Concat_m1496(NULL /*static, unused*/, L_37, (String_t*) &_stringLiteral451, /*hidden argument*/&String_Concat_m1496_MethodInfo);
		Debug_Log_m1453(NULL /*static, unused*/, L_38, /*hidden argument*/&Debug_Log_m1453_MethodInfo);
		int32_t L_39 = V_3;
		Object_t * L_40 = Box(InitializedTypeInfo(&Int32_t386_il2cpp_TypeInfo), &L_39);
		String_t* L_41 = String_Concat_m1496(NULL /*static, unused*/, L_40, (String_t*) &_stringLiteral452, /*hidden argument*/&String_Concat_m1496_MethodInfo);
		Debug_Log_m1453(NULL /*static, unused*/, L_41, /*hidden argument*/&Debug_Log_m1453_MethodInfo);
		V_15 = 0;
		goto IL_023e;
	}

IL_01be:
	{
		StringU5BU5D_t65* L_42 = ((StringU5BU5D_t65*)SZArrayNew(InitializedTypeInfo(&StringU5BU5D_t65_il2cpp_TypeInfo), 8));
		NullCheck(V_1);
		Material_t211 * L_43 = (Material_t211 *)VirtFuncInvoker1< Material_t211 *, int32_t >::Invoke(&List_1_get_Item_m2090_MethodInfo, V_1, V_15);
		NullCheck(L_43);
		String_t* L_44 = Object_get_name_m1905(L_43, /*hidden argument*/&Object_get_name_m1905_MethodInfo);
		NullCheck(L_42);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_42, 0);
		ArrayElementTypeCheck (L_42, L_44);
		*((String_t**)(String_t**)SZArrayLdElema(L_42, 0)) = (String_t*)L_44;
		StringU5BU5D_t65* L_45 = L_42;
		NullCheck(L_45);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_45, 1);
		ArrayElementTypeCheck (L_45, (String_t*) &_stringLiteral453);
		*((String_t**)(String_t**)SZArrayLdElema(L_45, 1)) = (String_t*)(String_t*) &_stringLiteral453;
		StringU5BU5D_t65* L_46 = L_45;
		NullCheck(V_1);
		Material_t211 * L_47 = (Material_t211 *)VirtFuncInvoker1< Material_t211 *, int32_t >::Invoke(&List_1_get_Item_m2090_MethodInfo, V_1, V_15);
		NullCheck(L_47);
		Shader_t210 * L_48 = Material_get_shader_m1871(L_47, /*hidden argument*/&Material_get_shader_m1871_MethodInfo);
		NullCheck(L_48);
		String_t* L_49 = Object_get_name_m1905(L_48, /*hidden argument*/&Object_get_name_m1905_MethodInfo);
		NullCheck(L_46);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_46, 2);
		ArrayElementTypeCheck (L_46, L_49);
		*((String_t**)(String_t**)SZArrayLdElema(L_46, 2)) = (String_t*)L_49;
		StringU5BU5D_t65* L_50 = L_46;
		NullCheck(L_50);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_50, 3);
		ArrayElementTypeCheck (L_50, (String_t*) &_stringLiteral454);
		*((String_t**)(String_t**)SZArrayLdElema(L_50, 3)) = (String_t*)(String_t*) &_stringLiteral454;
		StringU5BU5D_t65* L_51 = L_50;
		NullCheck(V_2);
		Material_t211 * L_52 = (Material_t211 *)VirtFuncInvoker1< Material_t211 *, int32_t >::Invoke(&List_1_get_Item_m2090_MethodInfo, V_2, V_15);
		NullCheck(L_52);
		String_t* L_53 = Object_get_name_m1905(L_52, /*hidden argument*/&Object_get_name_m1905_MethodInfo);
		NullCheck(L_51);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_51, 4);
		ArrayElementTypeCheck (L_51, L_53);
		*((String_t**)(String_t**)SZArrayLdElema(L_51, 4)) = (String_t*)L_53;
		StringU5BU5D_t65* L_54 = L_51;
		NullCheck(L_54);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_54, 5);
		ArrayElementTypeCheck (L_54, (String_t*) &_stringLiteral453);
		*((String_t**)(String_t**)SZArrayLdElema(L_54, 5)) = (String_t*)(String_t*) &_stringLiteral453;
		StringU5BU5D_t65* L_55 = L_54;
		NullCheck(V_2);
		Material_t211 * L_56 = (Material_t211 *)VirtFuncInvoker1< Material_t211 *, int32_t >::Invoke(&List_1_get_Item_m2090_MethodInfo, V_2, V_15);
		NullCheck(L_56);
		Shader_t210 * L_57 = Material_get_shader_m1871(L_56, /*hidden argument*/&Material_get_shader_m1871_MethodInfo);
		NullCheck(L_57);
		String_t* L_58 = Object_get_name_m1905(L_57, /*hidden argument*/&Object_get_name_m1905_MethodInfo);
		NullCheck(L_55);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_55, 6);
		ArrayElementTypeCheck (L_55, L_58);
		*((String_t**)(String_t**)SZArrayLdElema(L_55, 6)) = (String_t*)L_58;
		StringU5BU5D_t65* L_59 = L_55;
		NullCheck(L_59);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_59, 7);
		ArrayElementTypeCheck (L_59, (String_t*) &_stringLiteral455);
		*((String_t**)(String_t**)SZArrayLdElema(L_59, 7)) = (String_t*)(String_t*) &_stringLiteral455;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_60 = String_Concat_m1980(NULL /*static, unused*/, L_59, /*hidden argument*/&String_Concat_m1980_MethodInfo);
		Debug_Log_m1453(NULL /*static, unused*/, L_60, /*hidden argument*/&Debug_Log_m1453_MethodInfo);
		V_15 = ((int32_t)(V_15+1));
	}

IL_023e:
	{
		NullCheck(V_1);
		int32_t L_61 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&List_1_get_Count_m2092_MethodInfo, V_1);
		if ((((int32_t)V_15) < ((int32_t)L_61)))
		{
			goto IL_01be;
		}
	}
	{
		return;
	}
}
// Metadata Definition UnityStandardAssets.Utility.AutoMobileShaderSwitch
extern Il2CppType ReplacementList_t330_0_0_1;
extern CustomAttributesCache AutoMobileShaderSwitch_t331__CustomAttributeCache_m_ReplacementList;
FieldInfo AutoMobileShaderSwitch_t331____m_ReplacementList_2_FieldInfo = 
{
	"m_ReplacementList"/* name */
	, &ReplacementList_t330_0_0_1/* type */
	, &AutoMobileShaderSwitch_t331_il2cpp_TypeInfo/* parent */
	, offsetof(AutoMobileShaderSwitch_t331, ___m_ReplacementList_2)/* data */
	, &AutoMobileShaderSwitch_t331__CustomAttributeCache_m_ReplacementList/* custom_attributes_cache */

};
static FieldInfo* AutoMobileShaderSwitch_t331_FieldInfos[] =
{
	&AutoMobileShaderSwitch_t331____m_ReplacementList_2_FieldInfo,
	NULL
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
// System.Void UnityStandardAssets.Utility.AutoMobileShaderSwitch::.ctor()
MethodInfo AutoMobileShaderSwitch__ctor_m1105_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&AutoMobileShaderSwitch__ctor_m1105/* method */
	, &AutoMobileShaderSwitch_t331_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1198/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
// System.Void UnityStandardAssets.Utility.AutoMobileShaderSwitch::OnEnable()
MethodInfo AutoMobileShaderSwitch_OnEnable_m1106_MethodInfo = 
{
	"OnEnable"/* name */
	, (methodPointerType)&AutoMobileShaderSwitch_OnEnable_m1106/* method */
	, &AutoMobileShaderSwitch_t331_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1199/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* AutoMobileShaderSwitch_t331_MethodInfos[] =
{
	&AutoMobileShaderSwitch__ctor_m1105_MethodInfo,
	&AutoMobileShaderSwitch_OnEnable_m1106_MethodInfo,
	NULL
};
extern TypeInfo ReplacementDefinition_t328_il2cpp_TypeInfo;
extern TypeInfo ReplacementList_t330_il2cpp_TypeInfo;
static TypeInfo* AutoMobileShaderSwitch_t331_il2cpp_TypeInfo__nestedTypes[3] =
{
	&ReplacementDefinition_t328_il2cpp_TypeInfo,
	&ReplacementList_t330_il2cpp_TypeInfo,
	NULL
};
static MethodInfo* AutoMobileShaderSwitch_t331_VTable[] =
{
	&Object_Equals_m1333_MethodInfo,
	&Object_Finalize_m1253_MethodInfo,
	&Object_GetHashCode_m1334_MethodInfo,
	&Object_ToString_m1335_MethodInfo,
};
extern TypeInfo SerializeField_t400_il2cpp_TypeInfo;
extern MethodInfo SerializeField__ctor_m1336_MethodInfo;
void AutoMobileShaderSwitch_t331_CustomAttributesCacheGenerator_m_ReplacementList(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t400 * tmp;
		tmp = (SerializeField_t400 *)il2cpp_codegen_object_new (&SerializeField_t400_il2cpp_TypeInfo);
		SerializeField__ctor_m1336(tmp, &SerializeField__ctor_m1336_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache AutoMobileShaderSwitch_t331__CustomAttributeCache_m_ReplacementList = {
1,
NULL,
&AutoMobileShaderSwitch_t331_CustomAttributesCacheGenerator_m_ReplacementList
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType AutoMobileShaderSwitch_t331_0_0_0;
extern Il2CppType AutoMobileShaderSwitch_t331_1_0_0;
struct AutoMobileShaderSwitch_t331;
extern CustomAttributesCache AutoMobileShaderSwitch_t331__CustomAttributeCache_m_ReplacementList;
TypeInfo AutoMobileShaderSwitch_t331_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image/* image */
	, NULL/* gc_desc */
	, "AutoMobileShaderSwitch"/* name */
	, "UnityStandardAssets.Utility"/* namespaze */
	, AutoMobileShaderSwitch_t331_MethodInfos/* methods */
	, NULL/* properties */
	, AutoMobileShaderSwitch_t331_FieldInfos/* fields */
	, NULL/* events */
	, &MonoBehaviour_t39_il2cpp_TypeInfo/* parent */
	, AutoMobileShaderSwitch_t331_il2cpp_TypeInfo__nestedTypes/* nested_types */
	, NULL/* nested_in */
	, &AutoMobileShaderSwitch_t331_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, AutoMobileShaderSwitch_t331_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &AutoMobileShaderSwitch_t331_il2cpp_TypeInfo/* cast_class */
	, &AutoMobileShaderSwitch_t331_0_0_0/* byval_arg */
	, &AutoMobileShaderSwitch_t331_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (AutoMobileShaderSwitch_t331)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048577/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
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
	, 2/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Vector3andSpace_t332_il2cpp_TypeInfo;



// System.Void UnityStandardAssets.Utility.AutoMoveAndRotate/Vector3andSpace::.ctor()
extern MethodInfo Vector3andSpace__ctor_m1107_MethodInfo;
 void Vector3andSpace__ctor_m1107 (Vector3andSpace_t332 * __this, MethodInfo* method){
	{
		__this->___space_1 = 1;
		Object__ctor_m1260(__this, /*hidden argument*/&Object__ctor_m1260_MethodInfo);
		return;
	}
}
// Metadata Definition UnityStandardAssets.Utility.AutoMoveAndRotate/Vector3andSpace
extern Il2CppType Vector3_t175_0_0_6;
FieldInfo Vector3andSpace_t332____value_0_FieldInfo = 
{
	"value"/* name */
	, &Vector3_t175_0_0_6/* type */
	, &Vector3andSpace_t332_il2cpp_TypeInfo/* parent */
	, offsetof(Vector3andSpace_t332, ___value_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Space_t545_0_0_6;
FieldInfo Vector3andSpace_t332____space_1_FieldInfo = 
{
	"space"/* name */
	, &Space_t545_0_0_6/* type */
	, &Vector3andSpace_t332_il2cpp_TypeInfo/* parent */
	, offsetof(Vector3andSpace_t332, ___space_1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* Vector3andSpace_t332_FieldInfos[] =
{
	&Vector3andSpace_t332____value_0_FieldInfo,
	&Vector3andSpace_t332____space_1_FieldInfo,
	NULL
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
// System.Void UnityStandardAssets.Utility.AutoMoveAndRotate/Vector3andSpace::.ctor()
MethodInfo Vector3andSpace__ctor_m1107_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Vector3andSpace__ctor_m1107/* method */
	, &Vector3andSpace_t332_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1205/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* Vector3andSpace_t332_MethodInfos[] =
{
	&Vector3andSpace__ctor_m1107_MethodInfo,
	NULL
};
static MethodInfo* Vector3andSpace_t332_VTable[] =
{
	&Object_Equals_m1252_MethodInfo,
	&Object_Finalize_m1253_MethodInfo,
	&Object_GetHashCode_m1254_MethodInfo,
	&Object_ToString_m1255_MethodInfo,
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType Vector3andSpace_t332_0_0_0;
extern Il2CppType Vector3andSpace_t332_1_0_0;
struct Vector3andSpace_t332;
extern TypeInfo AutoMoveAndRotate_t333_il2cpp_TypeInfo;
TypeInfo Vector3andSpace_t332_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image/* image */
	, NULL/* gc_desc */
	, "Vector3andSpace"/* name */
	, ""/* namespaze */
	, Vector3andSpace_t332_MethodInfos/* methods */
	, NULL/* properties */
	, Vector3andSpace_t332_FieldInfos/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &AutoMoveAndRotate_t333_il2cpp_TypeInfo/* nested_in */
	, &Vector3andSpace_t332_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, Vector3andSpace_t332_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &Vector3andSpace_t332_il2cpp_TypeInfo/* cast_class */
	, &Vector3andSpace_t332_0_0_0/* byval_arg */
	, &Vector3andSpace_t332_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Vector3andSpace_t332)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1056770/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo Time_get_realtimeSinceStartup_m2093_MethodInfo;
extern MethodInfo Transform_Translate_m2094_MethodInfo;
extern MethodInfo Transform_Rotate_m2095_MethodInfo;


// System.Void UnityStandardAssets.Utility.AutoMoveAndRotate::.ctor()
extern MethodInfo AutoMoveAndRotate__ctor_m1108_MethodInfo;
 void AutoMoveAndRotate__ctor_m1108 (AutoMoveAndRotate_t333 * __this, MethodInfo* method){
	{
		MonoBehaviour__ctor_m1402(__this, /*hidden argument*/&MonoBehaviour__ctor_m1402_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.AutoMoveAndRotate::Start()
extern MethodInfo AutoMoveAndRotate_Start_m1109_MethodInfo;
 void AutoMoveAndRotate_Start_m1109 (AutoMoveAndRotate_t333 * __this, MethodInfo* method){
	{
		float L_0 = Time_get_realtimeSinceStartup_m2093(NULL /*static, unused*/, /*hidden argument*/&Time_get_realtimeSinceStartup_m2093_MethodInfo);
		__this->___m_LastRealTime_5 = L_0;
		return;
	}
}
// System.Void UnityStandardAssets.Utility.AutoMoveAndRotate::Update()
extern MethodInfo AutoMoveAndRotate_Update_m1110_MethodInfo;
 void AutoMoveAndRotate_Update_m1110 (AutoMoveAndRotate_t333 * __this, MethodInfo* method){
	float V_0 = 0.0f;
	{
		float L_0 = Time_get_deltaTime_m1748(NULL /*static, unused*/, /*hidden argument*/&Time_get_deltaTime_m1748_MethodInfo);
		V_0 = L_0;
		bool L_1 = (__this->___ignoreTimescale_4);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		float L_2 = Time_get_realtimeSinceStartup_m2093(NULL /*static, unused*/, /*hidden argument*/&Time_get_realtimeSinceStartup_m2093_MethodInfo);
		float L_3 = (__this->___m_LastRealTime_5);
		V_0 = ((float)(L_2-L_3));
		float L_4 = Time_get_realtimeSinceStartup_m2093(NULL /*static, unused*/, /*hidden argument*/&Time_get_realtimeSinceStartup_m2093_MethodInfo);
		__this->___m_LastRealTime_5 = L_4;
	}

IL_0029:
	{
		Transform_t173 * L_5 = Component_get_transform_m1739(__this, /*hidden argument*/&Component_get_transform_m1739_MethodInfo);
		Vector3andSpace_t332 * L_6 = (__this->___moveUnitsPerSecond_2);
		NullCheck(L_6);
		Vector3_t175  L_7 = (L_6->___value_0);
		Vector3_t175  L_8 = Vector3_op_Multiply_m1746(NULL /*static, unused*/, L_7, V_0, /*hidden argument*/&Vector3_op_Multiply_m1746_MethodInfo);
		Vector3andSpace_t332 * L_9 = (__this->___moveUnitsPerSecond_2);
		NullCheck(L_9);
		int32_t L_10 = (L_9->___space_1);
		NullCheck(L_5);
		Transform_Translate_m2094(L_5, L_8, L_10, /*hidden argument*/&Transform_Translate_m2094_MethodInfo);
		Transform_t173 * L_11 = Component_get_transform_m1739(__this, /*hidden argument*/&Component_get_transform_m1739_MethodInfo);
		Vector3andSpace_t332 * L_12 = (__this->___rotateDegreesPerSecond_3);
		NullCheck(L_12);
		Vector3_t175  L_13 = (L_12->___value_0);
		Vector3_t175  L_14 = Vector3_op_Multiply_m1746(NULL /*static, unused*/, L_13, V_0, /*hidden argument*/&Vector3_op_Multiply_m1746_MethodInfo);
		Vector3andSpace_t332 * L_15 = (__this->___moveUnitsPerSecond_2);
		NullCheck(L_15);
		int32_t L_16 = (L_15->___space_1);
		NullCheck(L_11);
		Transform_Rotate_m2095(L_11, L_14, L_16, /*hidden argument*/&Transform_Rotate_m2095_MethodInfo);
		return;
	}
}
// Metadata Definition UnityStandardAssets.Utility.AutoMoveAndRotate
extern Il2CppType Vector3andSpace_t332_0_0_6;
FieldInfo AutoMoveAndRotate_t333____moveUnitsPerSecond_2_FieldInfo = 
{
	"moveUnitsPerSecond"/* name */
	, &Vector3andSpace_t332_0_0_6/* type */
	, &AutoMoveAndRotate_t333_il2cpp_TypeInfo/* parent */
	, offsetof(AutoMoveAndRotate_t333, ___moveUnitsPerSecond_2)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Vector3andSpace_t332_0_0_6;
FieldInfo AutoMoveAndRotate_t333____rotateDegreesPerSecond_3_FieldInfo = 
{
	"rotateDegreesPerSecond"/* name */
	, &Vector3andSpace_t332_0_0_6/* type */
	, &AutoMoveAndRotate_t333_il2cpp_TypeInfo/* parent */
	, offsetof(AutoMoveAndRotate_t333, ___rotateDegreesPerSecond_3)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Boolean_t379_0_0_6;
FieldInfo AutoMoveAndRotate_t333____ignoreTimescale_4_FieldInfo = 
{
	"ignoreTimescale"/* name */
	, &Boolean_t379_0_0_6/* type */
	, &AutoMoveAndRotate_t333_il2cpp_TypeInfo/* parent */
	, offsetof(AutoMoveAndRotate_t333, ___ignoreTimescale_4)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Single_t448_0_0_1;
FieldInfo AutoMoveAndRotate_t333____m_LastRealTime_5_FieldInfo = 
{
	"m_LastRealTime"/* name */
	, &Single_t448_0_0_1/* type */
	, &AutoMoveAndRotate_t333_il2cpp_TypeInfo/* parent */
	, offsetof(AutoMoveAndRotate_t333, ___m_LastRealTime_5)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* AutoMoveAndRotate_t333_FieldInfos[] =
{
	&AutoMoveAndRotate_t333____moveUnitsPerSecond_2_FieldInfo,
	&AutoMoveAndRotate_t333____rotateDegreesPerSecond_3_FieldInfo,
	&AutoMoveAndRotate_t333____ignoreTimescale_4_FieldInfo,
	&AutoMoveAndRotate_t333____m_LastRealTime_5_FieldInfo,
	NULL
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
// System.Void UnityStandardAssets.Utility.AutoMoveAndRotate::.ctor()
MethodInfo AutoMoveAndRotate__ctor_m1108_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&AutoMoveAndRotate__ctor_m1108/* method */
	, &AutoMoveAndRotate_t333_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1202/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
// System.Void UnityStandardAssets.Utility.AutoMoveAndRotate::Start()
MethodInfo AutoMoveAndRotate_Start_m1109_MethodInfo = 
{
	"Start"/* name */
	, (methodPointerType)&AutoMoveAndRotate_Start_m1109/* method */
	, &AutoMoveAndRotate_t333_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1203/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
// System.Void UnityStandardAssets.Utility.AutoMoveAndRotate::Update()
MethodInfo AutoMoveAndRotate_Update_m1110_MethodInfo = 
{
	"Update"/* name */
	, (methodPointerType)&AutoMoveAndRotate_Update_m1110/* method */
	, &AutoMoveAndRotate_t333_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1204/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* AutoMoveAndRotate_t333_MethodInfos[] =
{
	&AutoMoveAndRotate__ctor_m1108_MethodInfo,
	&AutoMoveAndRotate_Start_m1109_MethodInfo,
	&AutoMoveAndRotate_Update_m1110_MethodInfo,
	NULL
};
extern TypeInfo Vector3andSpace_t332_il2cpp_TypeInfo;
static TypeInfo* AutoMoveAndRotate_t333_il2cpp_TypeInfo__nestedTypes[2] =
{
	&Vector3andSpace_t332_il2cpp_TypeInfo,
	NULL
};
static MethodInfo* AutoMoveAndRotate_t333_VTable[] =
{
	&Object_Equals_m1333_MethodInfo,
	&Object_Finalize_m1253_MethodInfo,
	&Object_GetHashCode_m1334_MethodInfo,
	&Object_ToString_m1335_MethodInfo,
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType AutoMoveAndRotate_t333_0_0_0;
extern Il2CppType AutoMoveAndRotate_t333_1_0_0;
struct AutoMoveAndRotate_t333;
TypeInfo AutoMoveAndRotate_t333_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image/* image */
	, NULL/* gc_desc */
	, "AutoMoveAndRotate"/* name */
	, "UnityStandardAssets.Utility"/* namespaze */
	, AutoMoveAndRotate_t333_MethodInfos/* methods */
	, NULL/* properties */
	, AutoMoveAndRotate_t333_FieldInfos/* fields */
	, NULL/* events */
	, &MonoBehaviour_t39_il2cpp_TypeInfo/* parent */
	, AutoMoveAndRotate_t333_il2cpp_TypeInfo__nestedTypes/* nested_types */
	, NULL/* nested_in */
	, &AutoMoveAndRotate_t333_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, AutoMoveAndRotate_t333_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &AutoMoveAndRotate_t333_il2cpp_TypeInfo/* cast_class */
	, &AutoMoveAndRotate_t333_0_0_0/* byval_arg */
	, &AutoMoveAndRotate_t333_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (AutoMoveAndRotate_t333)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048577/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 3/* method_count */
	, 0/* property_count */
	, 4/* field_count */
	, 0/* event_count */
	, 1/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CameraRefocus_t334_il2cpp_TypeInfo;

extern MethodInfo Transform_get_forward_m1899_MethodInfo;
extern MethodInfo Physics_Raycast_m2096_MethodInfo;
extern MethodInfo Transform_LookAt_m2097_MethodInfo;


// System.Void UnityStandardAssets.Utility.CameraRefocus::.ctor(UnityEngine.Camera,UnityEngine.Transform,UnityEngine.Vector3)
extern MethodInfo CameraRefocus__ctor_m1111_MethodInfo;
 void CameraRefocus__ctor_m1111 (CameraRefocus_t334 * __this, Camera_t236 * ___camera, Transform_t173 * ___parent, Vector3_t175  ___origCameraPos, MethodInfo* method){
	{
		Object__ctor_m1260(__this, /*hidden argument*/&Object__ctor_m1260_MethodInfo);
		__this->___m_OrigCameraPos_3 = ___origCameraPos;
		__this->___Camera_0 = ___camera;
		__this->___Parent_2 = ___parent;
		return;
	}
}
// System.Void UnityStandardAssets.Utility.CameraRefocus::ChangeCamera(UnityEngine.Camera)
extern MethodInfo CameraRefocus_ChangeCamera_m1112_MethodInfo;
 void CameraRefocus_ChangeCamera_m1112 (CameraRefocus_t334 * __this, Camera_t236 * ___camera, MethodInfo* method){
	{
		__this->___Camera_0 = ___camera;
		return;
	}
}
// System.Void UnityStandardAssets.Utility.CameraRefocus::ChangeParent(UnityEngine.Transform)
extern MethodInfo CameraRefocus_ChangeParent_m1113_MethodInfo;
 void CameraRefocus_ChangeParent_m1113 (CameraRefocus_t334 * __this, Transform_t173 * ___parent, MethodInfo* method){
	{
		__this->___Parent_2 = ___parent;
		return;
	}
}
// System.Void UnityStandardAssets.Utility.CameraRefocus::GetFocusPoint()
extern MethodInfo CameraRefocus_GetFocusPoint_m1114_MethodInfo;
 void CameraRefocus_GetFocusPoint_m1114 (CameraRefocus_t334 * __this, MethodInfo* method){
	RaycastHit_t301  V_0 = {0};
	{
		Transform_t173 * L_0 = (__this->___Parent_2);
		NullCheck(L_0);
		Transform_t173 * L_1 = Component_get_transform_m1739(L_0, /*hidden argument*/&Component_get_transform_m1739_MethodInfo);
		NullCheck(L_1);
		Vector3_t175  L_2 = Transform_get_position_m1738(L_1, /*hidden argument*/&Transform_get_position_m1738_MethodInfo);
		Vector3_t175  L_3 = (__this->___m_OrigCameraPos_3);
		Vector3_t175  L_4 = Vector3_op_Addition_m1750(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/&Vector3_op_Addition_m1750_MethodInfo);
		Transform_t173 * L_5 = (__this->___Parent_2);
		NullCheck(L_5);
		Transform_t173 * L_6 = Component_get_transform_m1739(L_5, /*hidden argument*/&Component_get_transform_m1739_MethodInfo);
		NullCheck(L_6);
		Vector3_t175  L_7 = Transform_get_forward_m1899(L_6, /*hidden argument*/&Transform_get_forward_m1899_MethodInfo);
		bool L_8 = Physics_Raycast_m2096(NULL /*static, unused*/, L_4, L_7, (&V_0), (100.0f), /*hidden argument*/&Physics_Raycast_m2096_MethodInfo);
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		Vector3_t175  L_9 = RaycastHit_get_point_m2027((&V_0), /*hidden argument*/&RaycastHit_get_point_m2027_MethodInfo);
		__this->___Lookatpoint_1 = L_9;
		__this->___m_Refocus_4 = 1;
		return;
	}

IL_0051:
	{
		__this->___m_Refocus_4 = 0;
		return;
	}
}
// System.Void UnityStandardAssets.Utility.CameraRefocus::SetFocusPoint()
extern MethodInfo CameraRefocus_SetFocusPoint_m1115_MethodInfo;
 void CameraRefocus_SetFocusPoint_m1115 (CameraRefocus_t334 * __this, MethodInfo* method){
	{
		bool L_0 = (__this->___m_Refocus_4);
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		Camera_t236 * L_1 = (__this->___Camera_0);
		NullCheck(L_1);
		Transform_t173 * L_2 = Component_get_transform_m1739(L_1, /*hidden argument*/&Component_get_transform_m1739_MethodInfo);
		Vector3_t175  L_3 = (__this->___Lookatpoint_1);
		NullCheck(L_2);
		Transform_LookAt_m2097(L_2, L_3, /*hidden argument*/&Transform_LookAt_m2097_MethodInfo);
	}

IL_0021:
	{
		return;
	}
}
// Metadata Definition UnityStandardAssets.Utility.CameraRefocus
extern Il2CppType Camera_t236_0_0_6;
FieldInfo CameraRefocus_t334____Camera_0_FieldInfo = 
{
	"Camera"/* name */
	, &Camera_t236_0_0_6/* type */
	, &CameraRefocus_t334_il2cpp_TypeInfo/* parent */
	, offsetof(CameraRefocus_t334, ___Camera_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Vector3_t175_0_0_6;
FieldInfo CameraRefocus_t334____Lookatpoint_1_FieldInfo = 
{
	"Lookatpoint"/* name */
	, &Vector3_t175_0_0_6/* type */
	, &CameraRefocus_t334_il2cpp_TypeInfo/* parent */
	, offsetof(CameraRefocus_t334, ___Lookatpoint_1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Transform_t173_0_0_6;
FieldInfo CameraRefocus_t334____Parent_2_FieldInfo = 
{
	"Parent"/* name */
	, &Transform_t173_0_0_6/* type */
	, &CameraRefocus_t334_il2cpp_TypeInfo/* parent */
	, offsetof(CameraRefocus_t334, ___Parent_2)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Vector3_t175_0_0_1;
FieldInfo CameraRefocus_t334____m_OrigCameraPos_3_FieldInfo = 
{
	"m_OrigCameraPos"/* name */
	, &Vector3_t175_0_0_1/* type */
	, &CameraRefocus_t334_il2cpp_TypeInfo/* parent */
	, offsetof(CameraRefocus_t334, ___m_OrigCameraPos_3)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Boolean_t379_0_0_1;
FieldInfo CameraRefocus_t334____m_Refocus_4_FieldInfo = 
{
	"m_Refocus"/* name */
	, &Boolean_t379_0_0_1/* type */
	, &CameraRefocus_t334_il2cpp_TypeInfo/* parent */
	, offsetof(CameraRefocus_t334, ___m_Refocus_4)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* CameraRefocus_t334_FieldInfos[] =
{
	&CameraRefocus_t334____Camera_0_FieldInfo,
	&CameraRefocus_t334____Lookatpoint_1_FieldInfo,
	&CameraRefocus_t334____Parent_2_FieldInfo,
	&CameraRefocus_t334____m_OrigCameraPos_3_FieldInfo,
	&CameraRefocus_t334____m_Refocus_4_FieldInfo,
	NULL
};
extern Il2CppType Camera_t236_0_0_0;
extern Il2CppType Camera_t236_0_0_0;
extern Il2CppType Transform_t173_0_0_0;
extern Il2CppType Vector3_t175_0_0_0;
static ParameterInfo CameraRefocus_t334_CameraRefocus__ctor_m1111_ParameterInfos[] = 
{
	{"camera", 0, 134218760, &EmptyCustomAttributesCache, &Camera_t236_0_0_0},
	{"parent", 1, 134218761, &EmptyCustomAttributesCache, &Transform_t173_0_0_0},
	{"origCameraPos", 2, 134218762, &EmptyCustomAttributesCache, &Vector3_t175_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t_Object_t_Vector3_t175 (MethodInfo* method, void* obj, void** args);
// System.Void UnityStandardAssets.Utility.CameraRefocus::.ctor(UnityEngine.Camera,UnityEngine.Transform,UnityEngine.Vector3)
MethodInfo CameraRefocus__ctor_m1111_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CameraRefocus__ctor_m1111/* method */
	, &CameraRefocus_t334_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t_Object_t_Vector3_t175/* invoker_method */
	, CameraRefocus_t334_CameraRefocus__ctor_m1111_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1206/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Camera_t236_0_0_0;
static ParameterInfo CameraRefocus_t334_CameraRefocus_ChangeCamera_m1112_ParameterInfos[] = 
{
	{"camera", 0, 134218763, &EmptyCustomAttributesCache, &Camera_t236_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityStandardAssets.Utility.CameraRefocus::ChangeCamera(UnityEngine.Camera)
MethodInfo CameraRefocus_ChangeCamera_m1112_MethodInfo = 
{
	"ChangeCamera"/* name */
	, (methodPointerType)&CameraRefocus_ChangeCamera_m1112/* method */
	, &CameraRefocus_t334_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t/* invoker_method */
	, CameraRefocus_t334_CameraRefocus_ChangeCamera_m1112_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1207/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Transform_t173_0_0_0;
static ParameterInfo CameraRefocus_t334_CameraRefocus_ChangeParent_m1113_ParameterInfos[] = 
{
	{"parent", 0, 134218764, &EmptyCustomAttributesCache, &Transform_t173_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityStandardAssets.Utility.CameraRefocus::ChangeParent(UnityEngine.Transform)
MethodInfo CameraRefocus_ChangeParent_m1113_MethodInfo = 
{
	"ChangeParent"/* name */
	, (methodPointerType)&CameraRefocus_ChangeParent_m1113/* method */
	, &CameraRefocus_t334_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t/* invoker_method */
	, CameraRefocus_t334_CameraRefocus_ChangeParent_m1113_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1208/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
// System.Void UnityStandardAssets.Utility.CameraRefocus::GetFocusPoint()
MethodInfo CameraRefocus_GetFocusPoint_m1114_MethodInfo = 
{
	"GetFocusPoint"/* name */
	, (methodPointerType)&CameraRefocus_GetFocusPoint_m1114/* method */
	, &CameraRefocus_t334_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1209/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
// System.Void UnityStandardAssets.Utility.CameraRefocus::SetFocusPoint()
MethodInfo CameraRefocus_SetFocusPoint_m1115_MethodInfo = 
{
	"SetFocusPoint"/* name */
	, (methodPointerType)&CameraRefocus_SetFocusPoint_m1115/* method */
	, &CameraRefocus_t334_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1210/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* CameraRefocus_t334_MethodInfos[] =
{
	&CameraRefocus__ctor_m1111_MethodInfo,
	&CameraRefocus_ChangeCamera_m1112_MethodInfo,
	&CameraRefocus_ChangeParent_m1113_MethodInfo,
	&CameraRefocus_GetFocusPoint_m1114_MethodInfo,
	&CameraRefocus_SetFocusPoint_m1115_MethodInfo,
	NULL
};
static MethodInfo* CameraRefocus_t334_VTable[] =
{
	&Object_Equals_m1252_MethodInfo,
	&Object_Finalize_m1253_MethodInfo,
	&Object_GetHashCode_m1254_MethodInfo,
	&Object_ToString_m1255_MethodInfo,
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType CameraRefocus_t334_0_0_0;
extern Il2CppType CameraRefocus_t334_1_0_0;
struct CameraRefocus_t334;
TypeInfo CameraRefocus_t334_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image/* image */
	, NULL/* gc_desc */
	, "CameraRefocus"/* name */
	, "UnityStandardAssets.Utility"/* namespaze */
	, CameraRefocus_t334_MethodInfos/* methods */
	, NULL/* properties */
	, CameraRefocus_t334_FieldInfos/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CameraRefocus_t334_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, CameraRefocus_t334_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CameraRefocus_t334_il2cpp_TypeInfo/* cast_class */
	, &CameraRefocus_t334_0_0_0/* byval_arg */
	, &CameraRefocus_t334_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CameraRefocus_t334)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048577/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 0/* property_count */
	, 5/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CurveControlledBob_t335_il2cpp_TypeInfo;

extern TypeInfo KeyframeU5BU5D_t526_il2cpp_TypeInfo;
extern TypeInfo Keyframe_t527_il2cpp_TypeInfo;
extern TypeInfo AnimationCurve_t240_il2cpp_TypeInfo;
extern MethodInfo Keyframe__ctor_m1915_MethodInfo;
extern MethodInfo AnimationCurve__ctor_m1916_MethodInfo;
extern MethodInfo Transform_get_localPosition_m2098_MethodInfo;
extern MethodInfo AnimationCurve_get_length_m1997_MethodInfo;
extern MethodInfo AnimationCurve_get_Item_m1998_MethodInfo;
extern MethodInfo Keyframe_get_time_m1999_MethodInfo;
extern MethodInfo AnimationCurve_Evaluate_m1918_MethodInfo;


// System.Void UnityStandardAssets.Utility.CurveControlledBob::.ctor()
extern MethodInfo CurveControlledBob__ctor_m1116_MethodInfo;
 void CurveControlledBob__ctor_m1116 (CurveControlledBob_t335 * __this, MethodInfo* method){
	{
		__this->___HorizontalBobRange_0 = (0.33f);
		__this->___VerticalBobRange_1 = (0.33f);
		KeyframeU5BU5D_t526* L_0 = ((KeyframeU5BU5D_t526*)SZArrayNew(InitializedTypeInfo(&KeyframeU5BU5D_t526_il2cpp_TypeInfo), 5));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		Keyframe_t527  L_1 = {0};
		Keyframe__ctor_m1915(&L_1, (0.0f), (0.0f), /*hidden argument*/&Keyframe__ctor_m1915_MethodInfo);
		*((Keyframe_t527 *)(Keyframe_t527 *)SZArrayLdElema(L_0, 0)) = L_1;
		KeyframeU5BU5D_t526* L_2 = L_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		Keyframe_t527  L_3 = {0};
		Keyframe__ctor_m1915(&L_3, (0.5f), (1.0f), /*hidden argument*/&Keyframe__ctor_m1915_MethodInfo);
		*((Keyframe_t527 *)(Keyframe_t527 *)SZArrayLdElema(L_2, 1)) = L_3;
		KeyframeU5BU5D_t526* L_4 = L_2;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		Keyframe_t527  L_5 = {0};
		Keyframe__ctor_m1915(&L_5, (1.0f), (0.0f), /*hidden argument*/&Keyframe__ctor_m1915_MethodInfo);
		*((Keyframe_t527 *)(Keyframe_t527 *)SZArrayLdElema(L_4, 2)) = L_5;
		KeyframeU5BU5D_t526* L_6 = L_4;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 3);
		Keyframe_t527  L_7 = {0};
		Keyframe__ctor_m1915(&L_7, (1.5f), (-1.0f), /*hidden argument*/&Keyframe__ctor_m1915_MethodInfo);
		*((Keyframe_t527 *)(Keyframe_t527 *)SZArrayLdElema(L_6, 3)) = L_7;
		KeyframeU5BU5D_t526* L_8 = L_6;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 4);
		Keyframe_t527  L_9 = {0};
		Keyframe__ctor_m1915(&L_9, (2.0f), (0.0f), /*hidden argument*/&Keyframe__ctor_m1915_MethodInfo);
		*((Keyframe_t527 *)(Keyframe_t527 *)SZArrayLdElema(L_8, 4)) = L_9;
		AnimationCurve_t240 * L_10 = (AnimationCurve_t240 *)il2cpp_codegen_object_new (InitializedTypeInfo(&AnimationCurve_t240_il2cpp_TypeInfo));
		AnimationCurve__ctor_m1916(L_10, L_8, /*hidden argument*/&AnimationCurve__ctor_m1916_MethodInfo);
		__this->___Bobcurve_2 = L_10;
		__this->___VerticaltoHorizontalRatio_3 = (1.0f);
		Object__ctor_m1260(__this, /*hidden argument*/&Object__ctor_m1260_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.CurveControlledBob::Setup(UnityEngine.Camera,System.Single)
extern MethodInfo CurveControlledBob_Setup_m1117_MethodInfo;
 void CurveControlledBob_Setup_m1117 (CurveControlledBob_t335 * __this, Camera_t236 * ___camera, float ___bobBaseInterval, MethodInfo* method){
	Keyframe_t527  V_0 = {0};
	{
		__this->___m_BobBaseInterval_6 = ___bobBaseInterval;
		NullCheck(___camera);
		Transform_t173 * L_0 = Component_get_transform_m1739(___camera, /*hidden argument*/&Component_get_transform_m1739_MethodInfo);
		NullCheck(L_0);
		Vector3_t175  L_1 = Transform_get_localPosition_m2098(L_0, /*hidden argument*/&Transform_get_localPosition_m2098_MethodInfo);
		__this->___m_OriginalCameraPosition_7 = L_1;
		AnimationCurve_t240 * L_2 = (__this->___Bobcurve_2);
		AnimationCurve_t240 * L_3 = (__this->___Bobcurve_2);
		NullCheck(L_3);
		int32_t L_4 = AnimationCurve_get_length_m1997(L_3, /*hidden argument*/&AnimationCurve_get_length_m1997_MethodInfo);
		NullCheck(L_2);
		Keyframe_t527  L_5 = AnimationCurve_get_Item_m1998(L_2, ((int32_t)(L_4-1)), /*hidden argument*/&AnimationCurve_get_Item_m1998_MethodInfo);
		V_0 = L_5;
		float L_6 = Keyframe_get_time_m1999((&V_0), /*hidden argument*/&Keyframe_get_time_m1999_MethodInfo);
		__this->___m_Time_8 = L_6;
		return;
	}
}
// UnityEngine.Vector3 UnityStandardAssets.Utility.CurveControlledBob::DoHeadBob(System.Single)
extern MethodInfo CurveControlledBob_DoHeadBob_m1118_MethodInfo;
 Vector3_t175  CurveControlledBob_DoHeadBob_m1118 (CurveControlledBob_t335 * __this, float ___speed, MethodInfo* method){
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		Vector3_t175 * L_0 = &(__this->___m_OriginalCameraPosition_7);
		NullCheck(L_0);
		float L_1 = (L_0->___x_1);
		AnimationCurve_t240 * L_2 = (__this->___Bobcurve_2);
		float L_3 = (__this->___m_CyclePositionX_4);
		NullCheck(L_2);
		float L_4 = AnimationCurve_Evaluate_m1918(L_2, L_3, /*hidden argument*/&AnimationCurve_Evaluate_m1918_MethodInfo);
		float L_5 = (__this->___HorizontalBobRange_0);
		V_0 = ((float)(L_1+((float)((float)L_4*(float)L_5))));
		Vector3_t175 * L_6 = &(__this->___m_OriginalCameraPosition_7);
		NullCheck(L_6);
		float L_7 = (L_6->___y_2);
		AnimationCurve_t240 * L_8 = (__this->___Bobcurve_2);
		float L_9 = (__this->___m_CyclePositionY_5);
		NullCheck(L_8);
		float L_10 = AnimationCurve_Evaluate_m1918(L_8, L_9, /*hidden argument*/&AnimationCurve_Evaluate_m1918_MethodInfo);
		float L_11 = (__this->___VerticalBobRange_1);
		V_1 = ((float)(L_7+((float)((float)L_10*(float)L_11))));
		float L_12 = (__this->___m_CyclePositionX_4);
		float L_13 = Time_get_deltaTime_m1748(NULL /*static, unused*/, /*hidden argument*/&Time_get_deltaTime_m1748_MethodInfo);
		float L_14 = (__this->___m_BobBaseInterval_6);
		__this->___m_CyclePositionX_4 = ((float)(L_12+((float)((float)((float)((float)___speed*(float)L_13))/(float)L_14))));
		float L_15 = (__this->___m_CyclePositionY_5);
		float L_16 = Time_get_deltaTime_m1748(NULL /*static, unused*/, /*hidden argument*/&Time_get_deltaTime_m1748_MethodInfo);
		float L_17 = (__this->___m_BobBaseInterval_6);
		float L_18 = (__this->___VerticaltoHorizontalRatio_3);
		__this->___m_CyclePositionY_5 = ((float)(L_15+((float)((float)((float)((float)((float)((float)___speed*(float)L_16))/(float)L_17))*(float)L_18))));
		float L_19 = (__this->___m_CyclePositionX_4);
		float L_20 = (__this->___m_Time_8);
		if ((((float)L_19) <= ((float)L_20)))
		{
			goto IL_00ab;
		}
	}
	{
		float L_21 = (__this->___m_CyclePositionX_4);
		float L_22 = (__this->___m_Time_8);
		__this->___m_CyclePositionX_4 = ((float)(L_21-L_22));
	}

IL_00ab:
	{
		float L_23 = (__this->___m_CyclePositionY_5);
		float L_24 = (__this->___m_Time_8);
		if ((((float)L_23) <= ((float)L_24)))
		{
			goto IL_00cf;
		}
	}
	{
		float L_25 = (__this->___m_CyclePositionY_5);
		float L_26 = (__this->___m_Time_8);
		__this->___m_CyclePositionY_5 = ((float)(L_25-L_26));
	}

IL_00cf:
	{
		Vector3_t175  L_27 = {0};
		Vector3__ctor_m1758(&L_27, V_0, V_1, (0.0f), /*hidden argument*/&Vector3__ctor_m1758_MethodInfo);
		return L_27;
	}
}
// Metadata Definition UnityStandardAssets.Utility.CurveControlledBob
extern Il2CppType Single_t448_0_0_6;
FieldInfo CurveControlledBob_t335____HorizontalBobRange_0_FieldInfo = 
{
	"HorizontalBobRange"/* name */
	, &Single_t448_0_0_6/* type */
	, &CurveControlledBob_t335_il2cpp_TypeInfo/* parent */
	, offsetof(CurveControlledBob_t335, ___HorizontalBobRange_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Single_t448_0_0_6;
FieldInfo CurveControlledBob_t335____VerticalBobRange_1_FieldInfo = 
{
	"VerticalBobRange"/* name */
	, &Single_t448_0_0_6/* type */
	, &CurveControlledBob_t335_il2cpp_TypeInfo/* parent */
	, offsetof(CurveControlledBob_t335, ___VerticalBobRange_1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType AnimationCurve_t240_0_0_6;
FieldInfo CurveControlledBob_t335____Bobcurve_2_FieldInfo = 
{
	"Bobcurve"/* name */
	, &AnimationCurve_t240_0_0_6/* type */
	, &CurveControlledBob_t335_il2cpp_TypeInfo/* parent */
	, offsetof(CurveControlledBob_t335, ___Bobcurve_2)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Single_t448_0_0_6;
FieldInfo CurveControlledBob_t335____VerticaltoHorizontalRatio_3_FieldInfo = 
{
	"VerticaltoHorizontalRatio"/* name */
	, &Single_t448_0_0_6/* type */
	, &CurveControlledBob_t335_il2cpp_TypeInfo/* parent */
	, offsetof(CurveControlledBob_t335, ___VerticaltoHorizontalRatio_3)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Single_t448_0_0_1;
FieldInfo CurveControlledBob_t335____m_CyclePositionX_4_FieldInfo = 
{
	"m_CyclePositionX"/* name */
	, &Single_t448_0_0_1/* type */
	, &CurveControlledBob_t335_il2cpp_TypeInfo/* parent */
	, offsetof(CurveControlledBob_t335, ___m_CyclePositionX_4)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Single_t448_0_0_1;
FieldInfo CurveControlledBob_t335____m_CyclePositionY_5_FieldInfo = 
{
	"m_CyclePositionY"/* name */
	, &Single_t448_0_0_1/* type */
	, &CurveControlledBob_t335_il2cpp_TypeInfo/* parent */
	, offsetof(CurveControlledBob_t335, ___m_CyclePositionY_5)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Single_t448_0_0_1;
FieldInfo CurveControlledBob_t335____m_BobBaseInterval_6_FieldInfo = 
{
	"m_BobBaseInterval"/* name */
	, &Single_t448_0_0_1/* type */
	, &CurveControlledBob_t335_il2cpp_TypeInfo/* parent */
	, offsetof(CurveControlledBob_t335, ___m_BobBaseInterval_6)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Vector3_t175_0_0_1;
FieldInfo CurveControlledBob_t335____m_OriginalCameraPosition_7_FieldInfo = 
{
	"m_OriginalCameraPosition"/* name */
	, &Vector3_t175_0_0_1/* type */
	, &CurveControlledBob_t335_il2cpp_TypeInfo/* parent */
	, offsetof(CurveControlledBob_t335, ___m_OriginalCameraPosition_7)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Single_t448_0_0_1;
FieldInfo CurveControlledBob_t335____m_Time_8_FieldInfo = 
{
	"m_Time"/* name */
	, &Single_t448_0_0_1/* type */
	, &CurveControlledBob_t335_il2cpp_TypeInfo/* parent */
	, offsetof(CurveControlledBob_t335, ___m_Time_8)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* CurveControlledBob_t335_FieldInfos[] =
{
	&CurveControlledBob_t335____HorizontalBobRange_0_FieldInfo,
	&CurveControlledBob_t335____VerticalBobRange_1_FieldInfo,
	&CurveControlledBob_t335____Bobcurve_2_FieldInfo,
	&CurveControlledBob_t335____VerticaltoHorizontalRatio_3_FieldInfo,
	&CurveControlledBob_t335____m_CyclePositionX_4_FieldInfo,
	&CurveControlledBob_t335____m_CyclePositionY_5_FieldInfo,
	&CurveControlledBob_t335____m_BobBaseInterval_6_FieldInfo,
	&CurveControlledBob_t335____m_OriginalCameraPosition_7_FieldInfo,
	&CurveControlledBob_t335____m_Time_8_FieldInfo,
	NULL
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
// System.Void UnityStandardAssets.Utility.CurveControlledBob::.ctor()
MethodInfo CurveControlledBob__ctor_m1116_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CurveControlledBob__ctor_m1116/* method */
	, &CurveControlledBob_t335_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1211/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Camera_t236_0_0_0;
extern Il2CppType Single_t448_0_0_0;
extern Il2CppType Single_t448_0_0_0;
static ParameterInfo CurveControlledBob_t335_CurveControlledBob_Setup_m1117_ParameterInfos[] = 
{
	{"camera", 0, 134218765, &EmptyCustomAttributesCache, &Camera_t236_0_0_0},
	{"bobBaseInterval", 1, 134218766, &EmptyCustomAttributesCache, &Single_t448_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t_Single_t448 (MethodInfo* method, void* obj, void** args);
// System.Void UnityStandardAssets.Utility.CurveControlledBob::Setup(UnityEngine.Camera,System.Single)
MethodInfo CurveControlledBob_Setup_m1117_MethodInfo = 
{
	"Setup"/* name */
	, (methodPointerType)&CurveControlledBob_Setup_m1117/* method */
	, &CurveControlledBob_t335_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t_Single_t448/* invoker_method */
	, CurveControlledBob_t335_CurveControlledBob_Setup_m1117_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1212/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Single_t448_0_0_0;
static ParameterInfo CurveControlledBob_t335_CurveControlledBob_DoHeadBob_m1118_ParameterInfos[] = 
{
	{"speed", 0, 134218767, &EmptyCustomAttributesCache, &Single_t448_0_0_0},
};
extern Il2CppType Vector3_t175_0_0_0;
extern void* RuntimeInvoker_Vector3_t175_Single_t448 (MethodInfo* method, void* obj, void** args);
// UnityEngine.Vector3 UnityStandardAssets.Utility.CurveControlledBob::DoHeadBob(System.Single)
MethodInfo CurveControlledBob_DoHeadBob_m1118_MethodInfo = 
{
	"DoHeadBob"/* name */
	, (methodPointerType)&CurveControlledBob_DoHeadBob_m1118/* method */
	, &CurveControlledBob_t335_il2cpp_TypeInfo/* declaring_type */
	, &Vector3_t175_0_0_0/* return_type */
	, RuntimeInvoker_Vector3_t175_Single_t448/* invoker_method */
	, CurveControlledBob_t335_CurveControlledBob_DoHeadBob_m1118_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1213/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* CurveControlledBob_t335_MethodInfos[] =
{
	&CurveControlledBob__ctor_m1116_MethodInfo,
	&CurveControlledBob_Setup_m1117_MethodInfo,
	&CurveControlledBob_DoHeadBob_m1118_MethodInfo,
	NULL
};
static MethodInfo* CurveControlledBob_t335_VTable[] =
{
	&Object_Equals_m1252_MethodInfo,
	&Object_Finalize_m1253_MethodInfo,
	&Object_GetHashCode_m1254_MethodInfo,
	&Object_ToString_m1255_MethodInfo,
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType CurveControlledBob_t335_0_0_0;
extern Il2CppType CurveControlledBob_t335_1_0_0;
struct CurveControlledBob_t335;
TypeInfo CurveControlledBob_t335_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image/* image */
	, NULL/* gc_desc */
	, "CurveControlledBob"/* name */
	, "UnityStandardAssets.Utility"/* namespaze */
	, CurveControlledBob_t335_MethodInfos/* methods */
	, NULL/* properties */
	, CurveControlledBob_t335_FieldInfos/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CurveControlledBob_t335_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, CurveControlledBob_t335_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CurveControlledBob_t335_il2cpp_TypeInfo/* cast_class */
	, &CurveControlledBob_t335_0_0_0/* byval_arg */
	, &CurveControlledBob_t335_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CurveControlledBob_t335)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1056769/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 3/* method_count */
	, 0/* property_count */
	, 9/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo U3CDragObjectU3Ec__Iterator7_t337_il2cpp_TypeInfo;

extern TypeInfo DragRigidbody_t336_il2cpp_TypeInfo;
extern MethodInfo Joint_get_connectedBody_m2099_MethodInfo;
extern MethodInfo Rigidbody_get_drag_m2100_MethodInfo;
extern MethodInfo Rigidbody_get_angularDrag_m2101_MethodInfo;
extern MethodInfo Rigidbody_set_drag_m2102_MethodInfo;
extern MethodInfo Rigidbody_set_angularDrag_m2103_MethodInfo;
extern MethodInfo DragRigidbody_FindCamera_m1128_MethodInfo;
extern MethodInfo Input_get_mousePosition_m1815_MethodInfo;
extern MethodInfo Camera_ScreenPointToRay_m2104_MethodInfo;
extern MethodInfo Ray_GetPoint_m2105_MethodInfo;
extern MethodInfo Transform_set_position_m1753_MethodInfo;
extern MethodInfo Object_op_Implicit_m1775_MethodInfo;
extern MethodInfo Joint_set_connectedBody_m2106_MethodInfo;


// System.Void UnityStandardAssets.Utility.DragRigidbody/<DragObject>c__Iterator7::.ctor()
extern MethodInfo U3CDragObjectU3Ec__Iterator7__ctor_m1119_MethodInfo;
 void U3CDragObjectU3Ec__Iterator7__ctor_m1119 (U3CDragObjectU3Ec__Iterator7_t337 * __this, MethodInfo* method){
	{
		Object__ctor_m1260(__this, /*hidden argument*/&Object__ctor_m1260_MethodInfo);
		return;
	}
}
// System.Object UnityStandardAssets.Utility.DragRigidbody/<DragObject>c__Iterator7::System.Collections.Generic.IEnumerator<object>.get_Current()
extern MethodInfo U3CDragObjectU3Ec__Iterator7_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1120_MethodInfo;
 Object_t * U3CDragObjectU3Ec__Iterator7_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1120 (U3CDragObjectU3Ec__Iterator7_t337 * __this, MethodInfo* method){
	{
		Object_t * L_0 = (__this->___$current_6);
		return L_0;
	}
}
// System.Object UnityStandardAssets.Utility.DragRigidbody/<DragObject>c__Iterator7::System.Collections.IEnumerator.get_Current()
extern MethodInfo U3CDragObjectU3Ec__Iterator7_System_Collections_IEnumerator_get_Current_m1121_MethodInfo;
 Object_t * U3CDragObjectU3Ec__Iterator7_System_Collections_IEnumerator_get_Current_m1121 (U3CDragObjectU3Ec__Iterator7_t337 * __this, MethodInfo* method){
	{
		Object_t * L_0 = (__this->___$current_6);
		return L_0;
	}
}
// System.Boolean UnityStandardAssets.Utility.DragRigidbody/<DragObject>c__Iterator7::MoveNext()
extern MethodInfo U3CDragObjectU3Ec__Iterator7_MoveNext_m1122_MethodInfo;
 bool U3CDragObjectU3Ec__Iterator7_MoveNext_m1122 (U3CDragObjectU3Ec__Iterator7_t337 * __this, MethodInfo* method){
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = (__this->___$PC_5);
		V_0 = L_0;
		__this->___$PC_5 = (-1);
		if (V_0 == 0)
		{
			goto IL_0021;
		}
		if (V_0 == 1)
		{
			goto IL_00f0;
		}
	}
	{
		goto IL_0163;
	}

IL_0021:
	{
		DragRigidbody_t336 * L_1 = (__this->___U3CU3Ef__this_8);
		NullCheck(L_1);
		SpringJoint_t338 * L_2 = (L_1->___m_SpringJoint_8);
		NullCheck(L_2);
		Rigidbody_t304 * L_3 = Joint_get_connectedBody_m2099(L_2, /*hidden argument*/&Joint_get_connectedBody_m2099_MethodInfo);
		NullCheck(L_3);
		float L_4 = Rigidbody_get_drag_m2100(L_3, /*hidden argument*/&Rigidbody_get_drag_m2100_MethodInfo);
		__this->___U3ColdDragU3E__0_0 = L_4;
		DragRigidbody_t336 * L_5 = (__this->___U3CU3Ef__this_8);
		NullCheck(L_5);
		SpringJoint_t338 * L_6 = (L_5->___m_SpringJoint_8);
		NullCheck(L_6);
		Rigidbody_t304 * L_7 = Joint_get_connectedBody_m2099(L_6, /*hidden argument*/&Joint_get_connectedBody_m2099_MethodInfo);
		NullCheck(L_7);
		float L_8 = Rigidbody_get_angularDrag_m2101(L_7, /*hidden argument*/&Rigidbody_get_angularDrag_m2101_MethodInfo);
		__this->___U3ColdAngularDragU3E__1_1 = L_8;
		DragRigidbody_t336 * L_9 = (__this->___U3CU3Ef__this_8);
		NullCheck(L_9);
		SpringJoint_t338 * L_10 = (L_9->___m_SpringJoint_8);
		NullCheck(L_10);
		Rigidbody_t304 * L_11 = Joint_get_connectedBody_m2099(L_10, /*hidden argument*/&Joint_get_connectedBody_m2099_MethodInfo);
		NullCheck(L_11);
		Rigidbody_set_drag_m2102(L_11, (10.0f), /*hidden argument*/&Rigidbody_set_drag_m2102_MethodInfo);
		DragRigidbody_t336 * L_12 = (__this->___U3CU3Ef__this_8);
		NullCheck(L_12);
		SpringJoint_t338 * L_13 = (L_12->___m_SpringJoint_8);
		NullCheck(L_13);
		Rigidbody_t304 * L_14 = Joint_get_connectedBody_m2099(L_13, /*hidden argument*/&Joint_get_connectedBody_m2099_MethodInfo);
		NullCheck(L_14);
		Rigidbody_set_angularDrag_m2103(L_14, (5.0f), /*hidden argument*/&Rigidbody_set_angularDrag_m2103_MethodInfo);
		DragRigidbody_t336 * L_15 = (__this->___U3CU3Ef__this_8);
		NullCheck(L_15);
		Camera_t236 * L_16 = DragRigidbody_FindCamera_m1128(L_15, /*hidden argument*/&DragRigidbody_FindCamera_m1128_MethodInfo);
		__this->___U3CmainCameraU3E__2_2 = L_16;
		goto IL_00f0;
	}

IL_00a1:
	{
		Camera_t236 * L_17 = (__this->___U3CmainCameraU3E__2_2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Input_t506_il2cpp_TypeInfo));
		Vector3_t175  L_18 = Input_get_mousePosition_m1815(NULL /*static, unused*/, /*hidden argument*/&Input_get_mousePosition_m1815_MethodInfo);
		NullCheck(L_17);
		Ray_t300  L_19 = Camera_ScreenPointToRay_m2104(L_17, L_18, /*hidden argument*/&Camera_ScreenPointToRay_m2104_MethodInfo);
		__this->___U3CrayU3E__3_3 = L_19;
		DragRigidbody_t336 * L_20 = (__this->___U3CU3Ef__this_8);
		NullCheck(L_20);
		SpringJoint_t338 * L_21 = (L_20->___m_SpringJoint_8);
		NullCheck(L_21);
		Transform_t173 * L_22 = Component_get_transform_m1739(L_21, /*hidden argument*/&Component_get_transform_m1739_MethodInfo);
		Ray_t300 * L_23 = &(__this->___U3CrayU3E__3_3);
		float L_24 = (__this->___distance_4);
		Vector3_t175  L_25 = Ray_GetPoint_m2105(L_23, L_24, /*hidden argument*/&Ray_GetPoint_m2105_MethodInfo);
		NullCheck(L_22);
		Transform_set_position_m1753(L_22, L_25, /*hidden argument*/&Transform_set_position_m1753_MethodInfo);
		__this->___$current_6 = NULL;
		__this->___$PC_5 = 1;
		goto IL_0165;
	}

IL_00f0:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Input_t506_il2cpp_TypeInfo));
		bool L_26 = Input_GetMouseButton_m2055(NULL /*static, unused*/, 0, /*hidden argument*/&Input_GetMouseButton_m2055_MethodInfo);
		if (L_26)
		{
			goto IL_00a1;
		}
	}
	{
		DragRigidbody_t336 * L_27 = (__this->___U3CU3Ef__this_8);
		NullCheck(L_27);
		SpringJoint_t338 * L_28 = (L_27->___m_SpringJoint_8);
		NullCheck(L_28);
		Rigidbody_t304 * L_29 = Joint_get_connectedBody_m2099(L_28, /*hidden argument*/&Joint_get_connectedBody_m2099_MethodInfo);
		bool L_30 = Object_op_Implicit_m1775(NULL /*static, unused*/, L_29, /*hidden argument*/&Object_op_Implicit_m1775_MethodInfo);
		if (!L_30)
		{
			goto IL_015c;
		}
	}
	{
		DragRigidbody_t336 * L_31 = (__this->___U3CU3Ef__this_8);
		NullCheck(L_31);
		SpringJoint_t338 * L_32 = (L_31->___m_SpringJoint_8);
		NullCheck(L_32);
		Rigidbody_t304 * L_33 = Joint_get_connectedBody_m2099(L_32, /*hidden argument*/&Joint_get_connectedBody_m2099_MethodInfo);
		float L_34 = (__this->___U3ColdDragU3E__0_0);
		NullCheck(L_33);
		Rigidbody_set_drag_m2102(L_33, L_34, /*hidden argument*/&Rigidbody_set_drag_m2102_MethodInfo);
		DragRigidbody_t336 * L_35 = (__this->___U3CU3Ef__this_8);
		NullCheck(L_35);
		SpringJoint_t338 * L_36 = (L_35->___m_SpringJoint_8);
		NullCheck(L_36);
		Rigidbody_t304 * L_37 = Joint_get_connectedBody_m2099(L_36, /*hidden argument*/&Joint_get_connectedBody_m2099_MethodInfo);
		float L_38 = (__this->___U3ColdAngularDragU3E__1_1);
		NullCheck(L_37);
		Rigidbody_set_angularDrag_m2103(L_37, L_38, /*hidden argument*/&Rigidbody_set_angularDrag_m2103_MethodInfo);
		DragRigidbody_t336 * L_39 = (__this->___U3CU3Ef__this_8);
		NullCheck(L_39);
		SpringJoint_t338 * L_40 = (L_39->___m_SpringJoint_8);
		NullCheck(L_40);
		Joint_set_connectedBody_m2106(L_40, (Rigidbody_t304 *)NULL, /*hidden argument*/&Joint_set_connectedBody_m2106_MethodInfo);
	}

IL_015c:
	{
		__this->___$PC_5 = (-1);
	}

IL_0163:
	{
		return 0;
	}

IL_0165:
	{
		return 1;
	}
	// Dead block : IL_0167: ldloc.1
}
// System.Void UnityStandardAssets.Utility.DragRigidbody/<DragObject>c__Iterator7::Dispose()
extern MethodInfo U3CDragObjectU3Ec__Iterator7_Dispose_m1123_MethodInfo;
 void U3CDragObjectU3Ec__Iterator7_Dispose_m1123 (U3CDragObjectU3Ec__Iterator7_t337 * __this, MethodInfo* method){
	{
		__this->___$PC_5 = (-1);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.DragRigidbody/<DragObject>c__Iterator7::Reset()
extern MethodInfo U3CDragObjectU3Ec__Iterator7_Reset_m1124_MethodInfo;
 void U3CDragObjectU3Ec__Iterator7_Reset_m1124 (U3CDragObjectU3Ec__Iterator7_t337 * __this, MethodInfo* method){
	{
		NotSupportedException_t445 * L_0 = (NotSupportedException_t445 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t445_il2cpp_TypeInfo));
		NotSupportedException__ctor_m1445(L_0, /*hidden argument*/&NotSupportedException__ctor_m1445_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// Metadata Definition UnityStandardAssets.Utility.DragRigidbody/<DragObject>c__Iterator7
extern Il2CppType Single_t448_0_0_3;
FieldInfo U3CDragObjectU3Ec__Iterator7_t337____U3ColdDragU3E__0_0_FieldInfo = 
{
	"<oldDrag>__0"/* name */
	, &Single_t448_0_0_3/* type */
	, &U3CDragObjectU3Ec__Iterator7_t337_il2cpp_TypeInfo/* parent */
	, offsetof(U3CDragObjectU3Ec__Iterator7_t337, ___U3ColdDragU3E__0_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Single_t448_0_0_3;
FieldInfo U3CDragObjectU3Ec__Iterator7_t337____U3ColdAngularDragU3E__1_1_FieldInfo = 
{
	"<oldAngularDrag>__1"/* name */
	, &Single_t448_0_0_3/* type */
	, &U3CDragObjectU3Ec__Iterator7_t337_il2cpp_TypeInfo/* parent */
	, offsetof(U3CDragObjectU3Ec__Iterator7_t337, ___U3ColdAngularDragU3E__1_1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Camera_t236_0_0_3;
FieldInfo U3CDragObjectU3Ec__Iterator7_t337____U3CmainCameraU3E__2_2_FieldInfo = 
{
	"<mainCamera>__2"/* name */
	, &Camera_t236_0_0_3/* type */
	, &U3CDragObjectU3Ec__Iterator7_t337_il2cpp_TypeInfo/* parent */
	, offsetof(U3CDragObjectU3Ec__Iterator7_t337, ___U3CmainCameraU3E__2_2)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Ray_t300_0_0_3;
FieldInfo U3CDragObjectU3Ec__Iterator7_t337____U3CrayU3E__3_3_FieldInfo = 
{
	"<ray>__3"/* name */
	, &Ray_t300_0_0_3/* type */
	, &U3CDragObjectU3Ec__Iterator7_t337_il2cpp_TypeInfo/* parent */
	, offsetof(U3CDragObjectU3Ec__Iterator7_t337, ___U3CrayU3E__3_3)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Single_t448_0_0_3;
FieldInfo U3CDragObjectU3Ec__Iterator7_t337____distance_4_FieldInfo = 
{
	"distance"/* name */
	, &Single_t448_0_0_3/* type */
	, &U3CDragObjectU3Ec__Iterator7_t337_il2cpp_TypeInfo/* parent */
	, offsetof(U3CDragObjectU3Ec__Iterator7_t337, ___distance_4)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t386_0_0_3;
FieldInfo U3CDragObjectU3Ec__Iterator7_t337____$PC_5_FieldInfo = 
{
	"$PC"/* name */
	, &Int32_t386_0_0_3/* type */
	, &U3CDragObjectU3Ec__Iterator7_t337_il2cpp_TypeInfo/* parent */
	, offsetof(U3CDragObjectU3Ec__Iterator7_t337, ___$PC_5)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Object_t_0_0_3;
FieldInfo U3CDragObjectU3Ec__Iterator7_t337____$current_6_FieldInfo = 
{
	"$current"/* name */
	, &Object_t_0_0_3/* type */
	, &U3CDragObjectU3Ec__Iterator7_t337_il2cpp_TypeInfo/* parent */
	, offsetof(U3CDragObjectU3Ec__Iterator7_t337, ___$current_6)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Single_t448_0_0_3;
FieldInfo U3CDragObjectU3Ec__Iterator7_t337____U3C$U3Edistance_7_FieldInfo = 
{
	"<$>distance"/* name */
	, &Single_t448_0_0_3/* type */
	, &U3CDragObjectU3Ec__Iterator7_t337_il2cpp_TypeInfo/* parent */
	, offsetof(U3CDragObjectU3Ec__Iterator7_t337, ___U3C$U3Edistance_7)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType DragRigidbody_t336_0_0_3;
FieldInfo U3CDragObjectU3Ec__Iterator7_t337____U3CU3Ef__this_8_FieldInfo = 
{
	"<>f__this"/* name */
	, &DragRigidbody_t336_0_0_3/* type */
	, &U3CDragObjectU3Ec__Iterator7_t337_il2cpp_TypeInfo/* parent */
	, offsetof(U3CDragObjectU3Ec__Iterator7_t337, ___U3CU3Ef__this_8)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* U3CDragObjectU3Ec__Iterator7_t337_FieldInfos[] =
{
	&U3CDragObjectU3Ec__Iterator7_t337____U3ColdDragU3E__0_0_FieldInfo,
	&U3CDragObjectU3Ec__Iterator7_t337____U3ColdAngularDragU3E__1_1_FieldInfo,
	&U3CDragObjectU3Ec__Iterator7_t337____U3CmainCameraU3E__2_2_FieldInfo,
	&U3CDragObjectU3Ec__Iterator7_t337____U3CrayU3E__3_3_FieldInfo,
	&U3CDragObjectU3Ec__Iterator7_t337____distance_4_FieldInfo,
	&U3CDragObjectU3Ec__Iterator7_t337____$PC_5_FieldInfo,
	&U3CDragObjectU3Ec__Iterator7_t337____$current_6_FieldInfo,
	&U3CDragObjectU3Ec__Iterator7_t337____U3C$U3Edistance_7_FieldInfo,
	&U3CDragObjectU3Ec__Iterator7_t337____U3CU3Ef__this_8_FieldInfo,
	NULL
};
static PropertyInfo U3CDragObjectU3Ec__Iterator7_t337____System_Collections_Generic_IEnumeratorU3CobjectU3E_Current_PropertyInfo = 
{
	&U3CDragObjectU3Ec__Iterator7_t337_il2cpp_TypeInfo/* parent */
	, "System.Collections.Generic.IEnumerator<object>.Current"/* name */
	, &U3CDragObjectU3Ec__Iterator7_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1120_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo U3CDragObjectU3Ec__Iterator7_t337____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&U3CDragObjectU3Ec__Iterator7_t337_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &U3CDragObjectU3Ec__Iterator7_System_Collections_IEnumerator_get_Current_m1121_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* U3CDragObjectU3Ec__Iterator7_t337_PropertyInfos[] =
{
	&U3CDragObjectU3Ec__Iterator7_t337____System_Collections_Generic_IEnumeratorU3CobjectU3E_Current_PropertyInfo,
	&U3CDragObjectU3Ec__Iterator7_t337____System_Collections_IEnumerator_Current_PropertyInfo,
	NULL
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
// System.Void UnityStandardAssets.Utility.DragRigidbody/<DragObject>c__Iterator7::.ctor()
MethodInfo U3CDragObjectU3Ec__Iterator7__ctor_m1119_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&U3CDragObjectU3Ec__Iterator7__ctor_m1119/* method */
	, &U3CDragObjectU3Ec__Iterator7_t337_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1218/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache U3CDragObjectU3Ec__Iterator7_t337__CustomAttributeCache_U3CDragObjectU3Ec__Iterator7_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1120;
// System.Object UnityStandardAssets.Utility.DragRigidbody/<DragObject>c__Iterator7::System.Collections.Generic.IEnumerator<object>.get_Current()
MethodInfo U3CDragObjectU3Ec__Iterator7_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1120_MethodInfo = 
{
	"System.Collections.Generic.IEnumerator<object>.get_Current"/* name */
	, (methodPointerType)&U3CDragObjectU3Ec__Iterator7_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1120/* method */
	, &U3CDragObjectU3Ec__Iterator7_t337_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &U3CDragObjectU3Ec__Iterator7_t337__CustomAttributeCache_U3CDragObjectU3Ec__Iterator7_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1120/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1219/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache U3CDragObjectU3Ec__Iterator7_t337__CustomAttributeCache_U3CDragObjectU3Ec__Iterator7_System_Collections_IEnumerator_get_Current_m1121;
// System.Object UnityStandardAssets.Utility.DragRigidbody/<DragObject>c__Iterator7::System.Collections.IEnumerator.get_Current()
MethodInfo U3CDragObjectU3Ec__Iterator7_System_Collections_IEnumerator_get_Current_m1121_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&U3CDragObjectU3Ec__Iterator7_System_Collections_IEnumerator_get_Current_m1121/* method */
	, &U3CDragObjectU3Ec__Iterator7_t337_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &U3CDragObjectU3Ec__Iterator7_t337__CustomAttributeCache_U3CDragObjectU3Ec__Iterator7_System_Collections_IEnumerator_get_Current_m1121/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1220/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379 (MethodInfo* method, void* obj, void** args);
// System.Boolean UnityStandardAssets.Utility.DragRigidbody/<DragObject>c__Iterator7::MoveNext()
MethodInfo U3CDragObjectU3Ec__Iterator7_MoveNext_m1122_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&U3CDragObjectU3Ec__Iterator7_MoveNext_m1122/* method */
	, &U3CDragObjectU3Ec__Iterator7_t337_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t379_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t379/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1221/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache U3CDragObjectU3Ec__Iterator7_t337__CustomAttributeCache_U3CDragObjectU3Ec__Iterator7_Dispose_m1123;
// System.Void UnityStandardAssets.Utility.DragRigidbody/<DragObject>c__Iterator7::Dispose()
MethodInfo U3CDragObjectU3Ec__Iterator7_Dispose_m1123_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&U3CDragObjectU3Ec__Iterator7_Dispose_m1123/* method */
	, &U3CDragObjectU3Ec__Iterator7_t337_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &U3CDragObjectU3Ec__Iterator7_t337__CustomAttributeCache_U3CDragObjectU3Ec__Iterator7_Dispose_m1123/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1222/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache U3CDragObjectU3Ec__Iterator7_t337__CustomAttributeCache_U3CDragObjectU3Ec__Iterator7_Reset_m1124;
// System.Void UnityStandardAssets.Utility.DragRigidbody/<DragObject>c__Iterator7::Reset()
MethodInfo U3CDragObjectU3Ec__Iterator7_Reset_m1124_MethodInfo = 
{
	"Reset"/* name */
	, (methodPointerType)&U3CDragObjectU3Ec__Iterator7_Reset_m1124/* method */
	, &U3CDragObjectU3Ec__Iterator7_t337_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &U3CDragObjectU3Ec__Iterator7_t337__CustomAttributeCache_U3CDragObjectU3Ec__Iterator7_Reset_m1124/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1223/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* U3CDragObjectU3Ec__Iterator7_t337_MethodInfos[] =
{
	&U3CDragObjectU3Ec__Iterator7__ctor_m1119_MethodInfo,
	&U3CDragObjectU3Ec__Iterator7_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1120_MethodInfo,
	&U3CDragObjectU3Ec__Iterator7_System_Collections_IEnumerator_get_Current_m1121_MethodInfo,
	&U3CDragObjectU3Ec__Iterator7_MoveNext_m1122_MethodInfo,
	&U3CDragObjectU3Ec__Iterator7_Dispose_m1123_MethodInfo,
	&U3CDragObjectU3Ec__Iterator7_Reset_m1124_MethodInfo,
	NULL
};
static MethodInfo* U3CDragObjectU3Ec__Iterator7_t337_VTable[] =
{
	&Object_Equals_m1252_MethodInfo,
	&Object_Finalize_m1253_MethodInfo,
	&Object_GetHashCode_m1254_MethodInfo,
	&Object_ToString_m1255_MethodInfo,
	&U3CDragObjectU3Ec__Iterator7_Dispose_m1123_MethodInfo,
	&U3CDragObjectU3Ec__Iterator7_System_Collections_IEnumerator_get_Current_m1121_MethodInfo,
	&U3CDragObjectU3Ec__Iterator7_MoveNext_m1122_MethodInfo,
	&U3CDragObjectU3Ec__Iterator7_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1120_MethodInfo,
	&U3CDragObjectU3Ec__Iterator7_Reset_m1124_MethodInfo,
};
static TypeInfo* U3CDragObjectU3Ec__Iterator7_t337_InterfacesTypeInfos[] = 
{
	&IDisposable_t444_il2cpp_TypeInfo,
	&IEnumerator_t26_il2cpp_TypeInfo,
	&IEnumerator_1_t53_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair U3CDragObjectU3Ec__Iterator7_t337_InterfacesOffsets[] = 
{
	{ &IDisposable_t444_il2cpp_TypeInfo, 4},
	{ &IEnumerator_t26_il2cpp_TypeInfo, 5},
	{ &IEnumerator_1_t53_il2cpp_TypeInfo, 7},
};
void U3CDragObjectU3Ec__Iterator7_t337_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t384 * tmp;
		tmp = (CompilerGeneratedAttribute_t384 *)il2cpp_codegen_object_new (&CompilerGeneratedAttribute_t384_il2cpp_TypeInfo);
		CompilerGeneratedAttribute__ctor_m1269(tmp, &CompilerGeneratedAttribute__ctor_m1269_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void U3CDragObjectU3Ec__Iterator7_t337_CustomAttributesCacheGenerator_U3CDragObjectU3Ec__Iterator7_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1120(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t447 * tmp;
		tmp = (DebuggerHiddenAttribute_t447 *)il2cpp_codegen_object_new (&DebuggerHiddenAttribute_t447_il2cpp_TypeInfo);
		DebuggerHiddenAttribute__ctor_m1446(tmp, &DebuggerHiddenAttribute__ctor_m1446_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void U3CDragObjectU3Ec__Iterator7_t337_CustomAttributesCacheGenerator_U3CDragObjectU3Ec__Iterator7_System_Collections_IEnumerator_get_Current_m1121(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t447 * tmp;
		tmp = (DebuggerHiddenAttribute_t447 *)il2cpp_codegen_object_new (&DebuggerHiddenAttribute_t447_il2cpp_TypeInfo);
		DebuggerHiddenAttribute__ctor_m1446(tmp, &DebuggerHiddenAttribute__ctor_m1446_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void U3CDragObjectU3Ec__Iterator7_t337_CustomAttributesCacheGenerator_U3CDragObjectU3Ec__Iterator7_Dispose_m1123(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t447 * tmp;
		tmp = (DebuggerHiddenAttribute_t447 *)il2cpp_codegen_object_new (&DebuggerHiddenAttribute_t447_il2cpp_TypeInfo);
		DebuggerHiddenAttribute__ctor_m1446(tmp, &DebuggerHiddenAttribute__ctor_m1446_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void U3CDragObjectU3Ec__Iterator7_t337_CustomAttributesCacheGenerator_U3CDragObjectU3Ec__Iterator7_Reset_m1124(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t447 * tmp;
		tmp = (DebuggerHiddenAttribute_t447 *)il2cpp_codegen_object_new (&DebuggerHiddenAttribute_t447_il2cpp_TypeInfo);
		DebuggerHiddenAttribute__ctor_m1446(tmp, &DebuggerHiddenAttribute__ctor_m1446_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache U3CDragObjectU3Ec__Iterator7_t337__CustomAttributeCache = {
1,
NULL,
&U3CDragObjectU3Ec__Iterator7_t337_CustomAttributesCacheGenerator
};
CustomAttributesCache U3CDragObjectU3Ec__Iterator7_t337__CustomAttributeCache_U3CDragObjectU3Ec__Iterator7_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1120 = {
1,
NULL,
&U3CDragObjectU3Ec__Iterator7_t337_CustomAttributesCacheGenerator_U3CDragObjectU3Ec__Iterator7_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1120
};
CustomAttributesCache U3CDragObjectU3Ec__Iterator7_t337__CustomAttributeCache_U3CDragObjectU3Ec__Iterator7_System_Collections_IEnumerator_get_Current_m1121 = {
1,
NULL,
&U3CDragObjectU3Ec__Iterator7_t337_CustomAttributesCacheGenerator_U3CDragObjectU3Ec__Iterator7_System_Collections_IEnumerator_get_Current_m1121
};
CustomAttributesCache U3CDragObjectU3Ec__Iterator7_t337__CustomAttributeCache_U3CDragObjectU3Ec__Iterator7_Dispose_m1123 = {
1,
NULL,
&U3CDragObjectU3Ec__Iterator7_t337_CustomAttributesCacheGenerator_U3CDragObjectU3Ec__Iterator7_Dispose_m1123
};
CustomAttributesCache U3CDragObjectU3Ec__Iterator7_t337__CustomAttributeCache_U3CDragObjectU3Ec__Iterator7_Reset_m1124 = {
1,
NULL,
&U3CDragObjectU3Ec__Iterator7_t337_CustomAttributesCacheGenerator_U3CDragObjectU3Ec__Iterator7_Reset_m1124
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType U3CDragObjectU3Ec__Iterator7_t337_0_0_0;
extern Il2CppType U3CDragObjectU3Ec__Iterator7_t337_1_0_0;
struct U3CDragObjectU3Ec__Iterator7_t337;
extern CustomAttributesCache U3CDragObjectU3Ec__Iterator7_t337__CustomAttributeCache;
extern CustomAttributesCache U3CDragObjectU3Ec__Iterator7_t337__CustomAttributeCache_U3CDragObjectU3Ec__Iterator7_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1120;
extern CustomAttributesCache U3CDragObjectU3Ec__Iterator7_t337__CustomAttributeCache_U3CDragObjectU3Ec__Iterator7_System_Collections_IEnumerator_get_Current_m1121;
extern CustomAttributesCache U3CDragObjectU3Ec__Iterator7_t337__CustomAttributeCache_U3CDragObjectU3Ec__Iterator7_Dispose_m1123;
extern CustomAttributesCache U3CDragObjectU3Ec__Iterator7_t337__CustomAttributeCache_U3CDragObjectU3Ec__Iterator7_Reset_m1124;
TypeInfo U3CDragObjectU3Ec__Iterator7_t337_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image/* image */
	, NULL/* gc_desc */
	, "<DragObject>c__Iterator7"/* name */
	, ""/* namespaze */
	, U3CDragObjectU3Ec__Iterator7_t337_MethodInfos/* methods */
	, U3CDragObjectU3Ec__Iterator7_t337_PropertyInfos/* properties */
	, U3CDragObjectU3Ec__Iterator7_t337_FieldInfos/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &DragRigidbody_t336_il2cpp_TypeInfo/* nested_in */
	, &U3CDragObjectU3Ec__Iterator7_t337_il2cpp_TypeInfo/* element_class */
	, U3CDragObjectU3Ec__Iterator7_t337_InterfacesTypeInfos/* implemented_interfaces */
	, U3CDragObjectU3Ec__Iterator7_t337_VTable/* vtable */
	, &U3CDragObjectU3Ec__Iterator7_t337__CustomAttributeCache/* custom_attributes_cache */
	, &U3CDragObjectU3Ec__Iterator7_t337_il2cpp_TypeInfo/* cast_class */
	, &U3CDragObjectU3Ec__Iterator7_t337_0_0_0/* byval_arg */
	, &U3CDragObjectU3Ec__Iterator7_t337_1_0_0/* this_arg */
	, U3CDragObjectU3Ec__Iterator7_t337_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (U3CDragObjectU3Ec__Iterator7_t337)/* instance_size */
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
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 6/* method_count */
	, 2/* property_count */
	, 9/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 9/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo RaycastHit_t301_il2cpp_TypeInfo;
extern TypeInfo Single_t448_il2cpp_TypeInfo;
extern MethodInfo Input_GetMouseButtonDown_m2107_MethodInfo;
extern MethodInfo Ray_get_origin_m2108_MethodInfo;
extern MethodInfo Ray_get_direction_m2109_MethodInfo;
extern MethodInfo Physics_Raycast_m2110_MethodInfo;
extern MethodInfo RaycastHit_get_rigidbody_m2111_MethodInfo;
extern MethodInfo Rigidbody_get_isKinematic_m2112_MethodInfo;
extern MethodInfo GameObject__ctor_m2113_MethodInfo;
extern MethodInfo GameObject_AddComponent_TisRigidbody_t304_m2114_MethodInfo;
extern MethodInfo GameObject_AddComponent_TisSpringJoint_t338_m2115_MethodInfo;
extern MethodInfo Rigidbody_set_isKinematic_m2116_MethodInfo;
extern MethodInfo Vector3_get_zero_m1747_MethodInfo;
extern MethodInfo Joint_set_anchor_m2117_MethodInfo;
extern MethodInfo SpringJoint_set_spring_m2118_MethodInfo;
extern MethodInfo SpringJoint_set_damper_m2119_MethodInfo;
extern MethodInfo SpringJoint_set_maxDistance_m2120_MethodInfo;
extern MethodInfo RaycastHit_get_distance_m2121_MethodInfo;
extern MethodInfo MonoBehaviour_StartCoroutine_m2122_MethodInfo;
extern MethodInfo Component_GetComponent_TisCamera_t236_m1849_MethodInfo;
extern MethodInfo Camera_get_main_m2123_MethodInfo;
struct GameObject_t235;
// Declaration !!0 UnityEngine.GameObject::AddComponent<UnityEngine.Rigidbody>()
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.Rigidbody>()
 Rigidbody_t304 * GameObject_AddComponent_TisRigidbody_t304_m2114 (GameObject_t235 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct GameObject_t235;
// Declaration !!0 UnityEngine.GameObject::AddComponent<UnityEngine.SpringJoint>()
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.SpringJoint>()
 SpringJoint_t338 * GameObject_AddComponent_TisSpringJoint_t338_m2115 (GameObject_t235 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct Component_t507;
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.Camera>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Camera>()
#define Component_GetComponent_TisCamera_t236_m1849(__this, method) (Camera_t236 *)Component_GetComponent_TisObject_t_m1761_gshared((Component_t507 *)__this, method)


// System.Void UnityStandardAssets.Utility.DragRigidbody::.ctor()
extern MethodInfo DragRigidbody__ctor_m1125_MethodInfo;
 void DragRigidbody__ctor_m1125 (DragRigidbody_t336 * __this, MethodInfo* method){
	{
		MonoBehaviour__ctor_m1402(__this, /*hidden argument*/&MonoBehaviour__ctor_m1402_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.DragRigidbody::Update()
extern MethodInfo DragRigidbody_Update_m1126_MethodInfo;
 void DragRigidbody_Update_m1126 (DragRigidbody_t336 * __this, MethodInfo* method){
	Camera_t236 * V_0 = {0};
	RaycastHit_t301  V_1 = {0};
	GameObject_t235 * V_2 = {0};
	Rigidbody_t304 * V_3 = {0};
	Ray_t300  V_4 = {0};
	Ray_t300  V_5 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Input_t506_il2cpp_TypeInfo));
		bool L_0 = Input_GetMouseButtonDown_m2107(NULL /*static, unused*/, 0, /*hidden argument*/&Input_GetMouseButtonDown_m2107_MethodInfo);
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		Camera_t236 * L_1 = DragRigidbody_FindCamera_m1128(__this, /*hidden argument*/&DragRigidbody_FindCamera_m1128_MethodInfo);
		V_0 = L_1;
		Initobj (&RaycastHit_t301_il2cpp_TypeInfo, (&V_1));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Input_t506_il2cpp_TypeInfo));
		Vector3_t175  L_2 = Input_get_mousePosition_m1815(NULL /*static, unused*/, /*hidden argument*/&Input_get_mousePosition_m1815_MethodInfo);
		NullCheck(V_0);
		Ray_t300  L_3 = Camera_ScreenPointToRay_m2104(V_0, L_2, /*hidden argument*/&Camera_ScreenPointToRay_m2104_MethodInfo);
		V_4 = L_3;
		Vector3_t175  L_4 = Ray_get_origin_m2108((&V_4), /*hidden argument*/&Ray_get_origin_m2108_MethodInfo);
		Vector3_t175  L_5 = Input_get_mousePosition_m1815(NULL /*static, unused*/, /*hidden argument*/&Input_get_mousePosition_m1815_MethodInfo);
		NullCheck(V_0);
		Ray_t300  L_6 = Camera_ScreenPointToRay_m2104(V_0, L_5, /*hidden argument*/&Camera_ScreenPointToRay_m2104_MethodInfo);
		V_5 = L_6;
		Vector3_t175  L_7 = Ray_get_direction_m2109((&V_5), /*hidden argument*/&Ray_get_direction_m2109_MethodInfo);
		bool L_8 = Physics_Raycast_m2110(NULL /*static, unused*/, L_4, L_7, (&V_1), (100.0f), ((int32_t)-5), /*hidden argument*/&Physics_Raycast_m2110_MethodInfo);
		if (L_8)
		{
			goto IL_0057;
		}
	}
	{
		return;
	}

IL_0057:
	{
		Rigidbody_t304 * L_9 = RaycastHit_get_rigidbody_m2111((&V_1), /*hidden argument*/&RaycastHit_get_rigidbody_m2111_MethodInfo);
		bool L_10 = Object_op_Implicit_m1775(NULL /*static, unused*/, L_9, /*hidden argument*/&Object_op_Implicit_m1775_MethodInfo);
		if (!L_10)
		{
			goto IL_0079;
		}
	}
	{
		Rigidbody_t304 * L_11 = RaycastHit_get_rigidbody_m2111((&V_1), /*hidden argument*/&RaycastHit_get_rigidbody_m2111_MethodInfo);
		NullCheck(L_11);
		bool L_12 = Rigidbody_get_isKinematic_m2112(L_11, /*hidden argument*/&Rigidbody_get_isKinematic_m2112_MethodInfo);
		if (!L_12)
		{
			goto IL_007a;
		}
	}

IL_0079:
	{
		return;
	}

IL_007a:
	{
		SpringJoint_t338 * L_13 = (__this->___m_SpringJoint_8);
		bool L_14 = Object_op_Implicit_m1775(NULL /*static, unused*/, L_13, /*hidden argument*/&Object_op_Implicit_m1775_MethodInfo);
		if (L_14)
		{
			goto IL_00af;
		}
	}
	{
		GameObject_t235 * L_15 = (GameObject_t235 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GameObject_t235_il2cpp_TypeInfo));
		GameObject__ctor_m2113(L_15, (String_t*) &_stringLiteral456, /*hidden argument*/&GameObject__ctor_m2113_MethodInfo);
		V_2 = L_15;
		NullCheck(V_2);
		Rigidbody_t304 * L_16 = GameObject_AddComponent_TisRigidbody_t304_m2114(V_2, /*hidden argument*/&GameObject_AddComponent_TisRigidbody_t304_m2114_MethodInfo);
		V_3 = L_16;
		NullCheck(V_2);
		SpringJoint_t338 * L_17 = GameObject_AddComponent_TisSpringJoint_t338_m2115(V_2, /*hidden argument*/&GameObject_AddComponent_TisSpringJoint_t338_m2115_MethodInfo);
		__this->___m_SpringJoint_8 = L_17;
		NullCheck(V_3);
		Rigidbody_set_isKinematic_m2116(V_3, 1, /*hidden argument*/&Rigidbody_set_isKinematic_m2116_MethodInfo);
	}

IL_00af:
	{
		SpringJoint_t338 * L_18 = (__this->___m_SpringJoint_8);
		NullCheck(L_18);
		Transform_t173 * L_19 = Component_get_transform_m1739(L_18, /*hidden argument*/&Component_get_transform_m1739_MethodInfo);
		Vector3_t175  L_20 = RaycastHit_get_point_m2027((&V_1), /*hidden argument*/&RaycastHit_get_point_m2027_MethodInfo);
		NullCheck(L_19);
		Transform_set_position_m1753(L_19, L_20, /*hidden argument*/&Transform_set_position_m1753_MethodInfo);
		SpringJoint_t338 * L_21 = (__this->___m_SpringJoint_8);
		Vector3_t175  L_22 = Vector3_get_zero_m1747(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_zero_m1747_MethodInfo);
		NullCheck(L_21);
		Joint_set_anchor_m2117(L_21, L_22, /*hidden argument*/&Joint_set_anchor_m2117_MethodInfo);
		SpringJoint_t338 * L_23 = (__this->___m_SpringJoint_8);
		NullCheck(L_23);
		SpringJoint_set_spring_m2118(L_23, (50.0f), /*hidden argument*/&SpringJoint_set_spring_m2118_MethodInfo);
		SpringJoint_t338 * L_24 = (__this->___m_SpringJoint_8);
		NullCheck(L_24);
		SpringJoint_set_damper_m2119(L_24, (5.0f), /*hidden argument*/&SpringJoint_set_damper_m2119_MethodInfo);
		SpringJoint_t338 * L_25 = (__this->___m_SpringJoint_8);
		NullCheck(L_25);
		SpringJoint_set_maxDistance_m2120(L_25, (0.2f), /*hidden argument*/&SpringJoint_set_maxDistance_m2120_MethodInfo);
		SpringJoint_t338 * L_26 = (__this->___m_SpringJoint_8);
		Rigidbody_t304 * L_27 = RaycastHit_get_rigidbody_m2111((&V_1), /*hidden argument*/&RaycastHit_get_rigidbody_m2111_MethodInfo);
		NullCheck(L_26);
		Joint_set_connectedBody_m2106(L_26, L_27, /*hidden argument*/&Joint_set_connectedBody_m2106_MethodInfo);
		float L_28 = RaycastHit_get_distance_m2121((&V_1), /*hidden argument*/&RaycastHit_get_distance_m2121_MethodInfo);
		float L_29 = L_28;
		Object_t * L_30 = Box(InitializedTypeInfo(&Single_t448_il2cpp_TypeInfo), &L_29);
		MonoBehaviour_StartCoroutine_m2122(__this, (String_t*) &_stringLiteral457, L_30, /*hidden argument*/&MonoBehaviour_StartCoroutine_m2122_MethodInfo);
		return;
	}
}
// System.Collections.IEnumerator UnityStandardAssets.Utility.DragRigidbody::DragObject(System.Single)
extern MethodInfo DragRigidbody_DragObject_m1127_MethodInfo;
 Object_t * DragRigidbody_DragObject_m1127 (DragRigidbody_t336 * __this, float ___distance, MethodInfo* method){
	U3CDragObjectU3Ec__Iterator7_t337 * V_0 = {0};
	{
		U3CDragObjectU3Ec__Iterator7_t337 * L_0 = (U3CDragObjectU3Ec__Iterator7_t337 *)il2cpp_codegen_object_new (InitializedTypeInfo(&U3CDragObjectU3Ec__Iterator7_t337_il2cpp_TypeInfo));
		U3CDragObjectU3Ec__Iterator7__ctor_m1119(L_0, /*hidden argument*/&U3CDragObjectU3Ec__Iterator7__ctor_m1119_MethodInfo);
		V_0 = L_0;
		NullCheck(V_0);
		V_0->___distance_4 = ___distance;
		NullCheck(V_0);
		V_0->___U3C$U3Edistance_7 = ___distance;
		NullCheck(V_0);
		V_0->___U3CU3Ef__this_8 = __this;
		return V_0;
	}
}
// UnityEngine.Camera UnityStandardAssets.Utility.DragRigidbody::FindCamera()
 Camera_t236 * DragRigidbody_FindCamera_m1128 (DragRigidbody_t336 * __this, MethodInfo* method){
	{
		Camera_t236 * L_0 = Component_GetComponent_TisCamera_t236_m1849(__this, /*hidden argument*/&Component_GetComponent_TisCamera_t236_m1849_MethodInfo);
		bool L_1 = Object_op_Implicit_m1775(NULL /*static, unused*/, L_0, /*hidden argument*/&Object_op_Implicit_m1775_MethodInfo);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		Camera_t236 * L_2 = Component_GetComponent_TisCamera_t236_m1849(__this, /*hidden argument*/&Component_GetComponent_TisCamera_t236_m1849_MethodInfo);
		return L_2;
	}

IL_0017:
	{
		Camera_t236 * L_3 = Camera_get_main_m2123(NULL /*static, unused*/, /*hidden argument*/&Camera_get_main_m2123_MethodInfo);
		return L_3;
	}
}
// Metadata Definition UnityStandardAssets.Utility.DragRigidbody
extern Il2CppType Single_t448_0_0_32849;
FieldInfo DragRigidbody_t336____k_Spring_2_FieldInfo = 
{
	"k_Spring"/* name */
	, &Single_t448_0_0_32849/* type */
	, &DragRigidbody_t336_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Single_t448_0_0_32849;
FieldInfo DragRigidbody_t336____k_Damper_3_FieldInfo = 
{
	"k_Damper"/* name */
	, &Single_t448_0_0_32849/* type */
	, &DragRigidbody_t336_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Single_t448_0_0_32849;
FieldInfo DragRigidbody_t336____k_Drag_4_FieldInfo = 
{
	"k_Drag"/* name */
	, &Single_t448_0_0_32849/* type */
	, &DragRigidbody_t336_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Single_t448_0_0_32849;
FieldInfo DragRigidbody_t336____k_AngularDrag_5_FieldInfo = 
{
	"k_AngularDrag"/* name */
	, &Single_t448_0_0_32849/* type */
	, &DragRigidbody_t336_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Single_t448_0_0_32849;
FieldInfo DragRigidbody_t336____k_Distance_6_FieldInfo = 
{
	"k_Distance"/* name */
	, &Single_t448_0_0_32849/* type */
	, &DragRigidbody_t336_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Boolean_t379_0_0_32849;
FieldInfo DragRigidbody_t336____k_AttachToCenterOfMass_7_FieldInfo = 
{
	"k_AttachToCenterOfMass"/* name */
	, &Boolean_t379_0_0_32849/* type */
	, &DragRigidbody_t336_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType SpringJoint_t338_0_0_1;
FieldInfo DragRigidbody_t336____m_SpringJoint_8_FieldInfo = 
{
	"m_SpringJoint"/* name */
	, &SpringJoint_t338_0_0_1/* type */
	, &DragRigidbody_t336_il2cpp_TypeInfo/* parent */
	, offsetof(DragRigidbody_t336, ___m_SpringJoint_8)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* DragRigidbody_t336_FieldInfos[] =
{
	&DragRigidbody_t336____k_Spring_2_FieldInfo,
	&DragRigidbody_t336____k_Damper_3_FieldInfo,
	&DragRigidbody_t336____k_Drag_4_FieldInfo,
	&DragRigidbody_t336____k_AngularDrag_5_FieldInfo,
	&DragRigidbody_t336____k_Distance_6_FieldInfo,
	&DragRigidbody_t336____k_AttachToCenterOfMass_7_FieldInfo,
	&DragRigidbody_t336____m_SpringJoint_8_FieldInfo,
	NULL
};
static const float DragRigidbody_t336____k_Spring_2_DefaultValueData = 50.0f;
static Il2CppFieldDefaultValueEntry DragRigidbody_t336____k_Spring_2_DefaultValue = 
{
	&DragRigidbody_t336____k_Spring_2_FieldInfo/* field */
	, { (char*)&DragRigidbody_t336____k_Spring_2_DefaultValueData, &Single_t448_0_0_0 }/* value */

};
static const float DragRigidbody_t336____k_Damper_3_DefaultValueData = 5.0f;
static Il2CppFieldDefaultValueEntry DragRigidbody_t336____k_Damper_3_DefaultValue = 
{
	&DragRigidbody_t336____k_Damper_3_FieldInfo/* field */
	, { (char*)&DragRigidbody_t336____k_Damper_3_DefaultValueData, &Single_t448_0_0_0 }/* value */

};
static const float DragRigidbody_t336____k_Drag_4_DefaultValueData = 10.0f;
static Il2CppFieldDefaultValueEntry DragRigidbody_t336____k_Drag_4_DefaultValue = 
{
	&DragRigidbody_t336____k_Drag_4_FieldInfo/* field */
	, { (char*)&DragRigidbody_t336____k_Drag_4_DefaultValueData, &Single_t448_0_0_0 }/* value */

};
static const float DragRigidbody_t336____k_AngularDrag_5_DefaultValueData = 5.0f;
static Il2CppFieldDefaultValueEntry DragRigidbody_t336____k_AngularDrag_5_DefaultValue = 
{
	&DragRigidbody_t336____k_AngularDrag_5_FieldInfo/* field */
	, { (char*)&DragRigidbody_t336____k_AngularDrag_5_DefaultValueData, &Single_t448_0_0_0 }/* value */

};
static const float DragRigidbody_t336____k_Distance_6_DefaultValueData = 0.2f;
static Il2CppFieldDefaultValueEntry DragRigidbody_t336____k_Distance_6_DefaultValue = 
{
	&DragRigidbody_t336____k_Distance_6_FieldInfo/* field */
	, { (char*)&DragRigidbody_t336____k_Distance_6_DefaultValueData, &Single_t448_0_0_0 }/* value */

};
static const bool DragRigidbody_t336____k_AttachToCenterOfMass_7_DefaultValueData = false;
extern Il2CppType Boolean_t379_0_0_0;
static Il2CppFieldDefaultValueEntry DragRigidbody_t336____k_AttachToCenterOfMass_7_DefaultValue = 
{
	&DragRigidbody_t336____k_AttachToCenterOfMass_7_FieldInfo/* field */
	, { (char*)&DragRigidbody_t336____k_AttachToCenterOfMass_7_DefaultValueData, &Boolean_t379_0_0_0 }/* value */

};
static Il2CppFieldDefaultValueEntry* DragRigidbody_t336_FieldDefaultValues[] = 
{
	&DragRigidbody_t336____k_Spring_2_DefaultValue,
	&DragRigidbody_t336____k_Damper_3_DefaultValue,
	&DragRigidbody_t336____k_Drag_4_DefaultValue,
	&DragRigidbody_t336____k_AngularDrag_5_DefaultValue,
	&DragRigidbody_t336____k_Distance_6_DefaultValue,
	&DragRigidbody_t336____k_AttachToCenterOfMass_7_DefaultValue,
	NULL
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
// System.Void UnityStandardAssets.Utility.DragRigidbody::.ctor()
MethodInfo DragRigidbody__ctor_m1125_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&DragRigidbody__ctor_m1125/* method */
	, &DragRigidbody_t336_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1214/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
// System.Void UnityStandardAssets.Utility.DragRigidbody::Update()
MethodInfo DragRigidbody_Update_m1126_MethodInfo = 
{
	"Update"/* name */
	, (methodPointerType)&DragRigidbody_Update_m1126/* method */
	, &DragRigidbody_t336_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1215/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Single_t448_0_0_0;
static ParameterInfo DragRigidbody_t336_DragRigidbody_DragObject_m1127_ParameterInfos[] = 
{
	{"distance", 0, 134218768, &EmptyCustomAttributesCache, &Single_t448_0_0_0},
};
extern Il2CppType IEnumerator_t26_0_0_0;
extern void* RuntimeInvoker_Object_t_Single_t448 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache DragRigidbody_t336__CustomAttributeCache_DragRigidbody_DragObject_m1127;
// System.Collections.IEnumerator UnityStandardAssets.Utility.DragRigidbody::DragObject(System.Single)
MethodInfo DragRigidbody_DragObject_m1127_MethodInfo = 
{
	"DragObject"/* name */
	, (methodPointerType)&DragRigidbody_DragObject_m1127/* method */
	, &DragRigidbody_t336_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_t26_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Single_t448/* invoker_method */
	, DragRigidbody_t336_DragRigidbody_DragObject_m1127_ParameterInfos/* parameters */
	, &DragRigidbody_t336__CustomAttributeCache_DragRigidbody_DragObject_m1127/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1216/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Camera_t236_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// UnityEngine.Camera UnityStandardAssets.Utility.DragRigidbody::FindCamera()
MethodInfo DragRigidbody_FindCamera_m1128_MethodInfo = 
{
	"FindCamera"/* name */
	, (methodPointerType)&DragRigidbody_FindCamera_m1128/* method */
	, &DragRigidbody_t336_il2cpp_TypeInfo/* declaring_type */
	, &Camera_t236_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1217/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* DragRigidbody_t336_MethodInfos[] =
{
	&DragRigidbody__ctor_m1125_MethodInfo,
	&DragRigidbody_Update_m1126_MethodInfo,
	&DragRigidbody_DragObject_m1127_MethodInfo,
	&DragRigidbody_FindCamera_m1128_MethodInfo,
	NULL
};
extern TypeInfo U3CDragObjectU3Ec__Iterator7_t337_il2cpp_TypeInfo;
static TypeInfo* DragRigidbody_t336_il2cpp_TypeInfo__nestedTypes[2] =
{
	&U3CDragObjectU3Ec__Iterator7_t337_il2cpp_TypeInfo,
	NULL
};
static MethodInfo* DragRigidbody_t336_VTable[] =
{
	&Object_Equals_m1333_MethodInfo,
	&Object_Finalize_m1253_MethodInfo,
	&Object_GetHashCode_m1334_MethodInfo,
	&Object_ToString_m1335_MethodInfo,
};
void DragRigidbody_t336_CustomAttributesCacheGenerator_DragRigidbody_DragObject_m1127(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t447 * tmp;
		tmp = (DebuggerHiddenAttribute_t447 *)il2cpp_codegen_object_new (&DebuggerHiddenAttribute_t447_il2cpp_TypeInfo);
		DebuggerHiddenAttribute__ctor_m1446(tmp, &DebuggerHiddenAttribute__ctor_m1446_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache DragRigidbody_t336__CustomAttributeCache_DragRigidbody_DragObject_m1127 = {
1,
NULL,
&DragRigidbody_t336_CustomAttributesCacheGenerator_DragRigidbody_DragObject_m1127
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType DragRigidbody_t336_0_0_0;
extern Il2CppType DragRigidbody_t336_1_0_0;
struct DragRigidbody_t336;
extern CustomAttributesCache DragRigidbody_t336__CustomAttributeCache_DragRigidbody_DragObject_m1127;
TypeInfo DragRigidbody_t336_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image/* image */
	, NULL/* gc_desc */
	, "DragRigidbody"/* name */
	, "UnityStandardAssets.Utility"/* namespaze */
	, DragRigidbody_t336_MethodInfos/* methods */
	, NULL/* properties */
	, DragRigidbody_t336_FieldInfos/* fields */
	, NULL/* events */
	, &MonoBehaviour_t39_il2cpp_TypeInfo/* parent */
	, DragRigidbody_t336_il2cpp_TypeInfo__nestedTypes/* nested_types */
	, NULL/* nested_in */
	, &DragRigidbody_t336_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, DragRigidbody_t336_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &DragRigidbody_t336_il2cpp_TypeInfo/* cast_class */
	, &DragRigidbody_t336_0_0_0/* byval_arg */
	, &DragRigidbody_t336_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, DragRigidbody_t336_FieldDefaultValues/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (DragRigidbody_t336)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048577/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 4/* method_count */
	, 0/* property_count */
	, 7/* field_count */
	, 0/* event_count */
	, 1/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo DynamicShadowSettings_t339_il2cpp_TypeInfo;

extern MethodInfo Light_get_shadowStrength_m2124_MethodInfo;
extern MethodInfo Vector3_op_UnaryNegation_m2014_MethodInfo;
extern MethodInfo Physics_Raycast_m2125_MethodInfo;
extern MethodInfo Mathf_Abs_m1742_MethodInfo;
extern MethodInfo Mathf_SmoothDamp_m2126_MethodInfo;
extern MethodInfo Mathf_InverseLerp_m1819_MethodInfo;
extern MethodInfo QualitySettings_set_shadowDistance_m2127_MethodInfo;
extern MethodInfo Light_set_shadowBias_m2128_MethodInfo;
extern MethodInfo Light_set_shadowStrength_m2129_MethodInfo;


// System.Void UnityStandardAssets.Utility.DynamicShadowSettings::.ctor()
extern MethodInfo DynamicShadowSettings__ctor_m1129_MethodInfo;
 void DynamicShadowSettings__ctor_m1129 (DynamicShadowSettings_t339 * __this, MethodInfo* method){
	{
		__this->___minHeight_3 = (10.0f);
		__this->___minShadowDistance_4 = (80.0f);
		__this->___minShadowBias_5 = (1.0f);
		__this->___maxHeight_6 = (1000.0f);
		__this->___maxShadowDistance_7 = (10000.0f);
		__this->___maxShadowBias_8 = (0.1f);
		__this->___adaptTime_9 = (1.0f);
		__this->___m_OriginalStrength_12 = (1.0f);
		MonoBehaviour__ctor_m1402(__this, /*hidden argument*/&MonoBehaviour__ctor_m1402_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.DynamicShadowSettings::Start()
extern MethodInfo DynamicShadowSettings_Start_m1130_MethodInfo;
 void DynamicShadowSettings_Start_m1130 (DynamicShadowSettings_t339 * __this, MethodInfo* method){
	{
		Light_t314 * L_0 = (__this->___sunLight_2);
		NullCheck(L_0);
		float L_1 = Light_get_shadowStrength_m2124(L_0, /*hidden argument*/&Light_get_shadowStrength_m2124_MethodInfo);
		__this->___m_OriginalStrength_12 = L_1;
		return;
	}
}
// System.Void UnityStandardAssets.Utility.DynamicShadowSettings::Update()
extern MethodInfo DynamicShadowSettings_Update_m1131_MethodInfo;
 void DynamicShadowSettings_Update_m1131 (DynamicShadowSettings_t339 * __this, MethodInfo* method){
	Ray_t300  V_0 = {0};
	RaycastHit_t301  V_1 = {0};
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Vector3_t175  V_4 = {0};
	{
		Camera_t236 * L_0 = Camera_get_main_m2123(NULL /*static, unused*/, /*hidden argument*/&Camera_get_main_m2123_MethodInfo);
		NullCheck(L_0);
		Transform_t173 * L_1 = Component_get_transform_m1739(L_0, /*hidden argument*/&Component_get_transform_m1739_MethodInfo);
		NullCheck(L_1);
		Vector3_t175  L_2 = Transform_get_position_m1738(L_1, /*hidden argument*/&Transform_get_position_m1738_MethodInfo);
		Vector3_t175  L_3 = Vector3_get_up_m1876(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_up_m1876_MethodInfo);
		Vector3_t175  L_4 = Vector3_op_UnaryNegation_m2014(NULL /*static, unused*/, L_3, /*hidden argument*/&Vector3_op_UnaryNegation_m2014_MethodInfo);
		Ray__ctor_m2025((&V_0), L_2, L_4, /*hidden argument*/&Ray__ctor_m2025_MethodInfo);
		Transform_t173 * L_5 = Component_get_transform_m1739(__this, /*hidden argument*/&Component_get_transform_m1739_MethodInfo);
		NullCheck(L_5);
		Vector3_t175  L_6 = Transform_get_position_m1738(L_5, /*hidden argument*/&Transform_get_position_m1738_MethodInfo);
		V_4 = L_6;
		NullCheck((&V_4));
		float L_7 = ((&V_4)->___y_2);
		V_2 = L_7;
		bool L_8 = Physics_Raycast_m2125(NULL /*static, unused*/, V_0, (&V_1), /*hidden argument*/&Physics_Raycast_m2125_MethodInfo);
		if (!L_8)
		{
			goto IL_004a;
		}
	}
	{
		float L_9 = RaycastHit_get_distance_m2121((&V_1), /*hidden argument*/&RaycastHit_get_distance_m2121_MethodInfo);
		V_2 = L_9;
	}

IL_004a:
	{
		float L_10 = (__this->___m_SmoothHeight_10);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t505_il2cpp_TypeInfo));
		float L_11 = fabsf(((float)(V_2-L_10)));
		if ((((float)L_11) <= ((float)(1.0f))))
		{
			goto IL_007f;
		}
	}
	{
		float L_12 = (__this->___m_SmoothHeight_10);
		float* L_13 = &(__this->___m_ChangeSpeed_11);
		float L_14 = (__this->___adaptTime_9);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t505_il2cpp_TypeInfo));
		float L_15 = Mathf_SmoothDamp_m2126(NULL /*static, unused*/, L_12, V_2, L_13, L_14, /*hidden argument*/&Mathf_SmoothDamp_m2126_MethodInfo);
		__this->___m_SmoothHeight_10 = L_15;
	}

IL_007f:
	{
		float L_16 = (__this->___minHeight_3);
		float L_17 = (__this->___maxHeight_6);
		float L_18 = (__this->___m_SmoothHeight_10);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t505_il2cpp_TypeInfo));
		float L_19 = Mathf_InverseLerp_m1819(NULL /*static, unused*/, L_16, L_17, L_18, /*hidden argument*/&Mathf_InverseLerp_m1819_MethodInfo);
		V_3 = L_19;
		float L_20 = (__this->___minShadowDistance_4);
		float L_21 = (__this->___maxShadowDistance_7);
		float L_22 = Mathf_Lerp_m1756(NULL /*static, unused*/, L_20, L_21, V_3, /*hidden argument*/&Mathf_Lerp_m1756_MethodInfo);
		QualitySettings_set_shadowDistance_m2127(NULL /*static, unused*/, L_22, /*hidden argument*/&QualitySettings_set_shadowDistance_m2127_MethodInfo);
		Light_t314 * L_23 = (__this->___sunLight_2);
		float L_24 = (__this->___minShadowBias_5);
		float L_25 = (__this->___maxShadowBias_8);
		float L_26 = Mathf_Lerp_m1756(NULL /*static, unused*/, L_24, L_25, ((float)((1.0f)-((float)((float)((float)((1.0f)-V_3))*(float)((float)((1.0f)-V_3)))))), /*hidden argument*/&Mathf_Lerp_m1756_MethodInfo);
		NullCheck(L_23);
		Light_set_shadowBias_m2128(L_23, L_26, /*hidden argument*/&Light_set_shadowBias_m2128_MethodInfo);
		Light_t314 * L_27 = (__this->___sunLight_2);
		float L_28 = (__this->___m_OriginalStrength_12);
		float L_29 = Mathf_Lerp_m1756(NULL /*static, unused*/, L_28, (0.0f), V_3, /*hidden argument*/&Mathf_Lerp_m1756_MethodInfo);
		NullCheck(L_27);
		Light_set_shadowStrength_m2129(L_27, L_29, /*hidden argument*/&Light_set_shadowStrength_m2129_MethodInfo);
		return;
	}
}
// Metadata Definition UnityStandardAssets.Utility.DynamicShadowSettings
extern Il2CppType Light_t314_0_0_6;
FieldInfo DynamicShadowSettings_t339____sunLight_2_FieldInfo = 
{
	"sunLight"/* name */
	, &Light_t314_0_0_6/* type */
	, &DynamicShadowSettings_t339_il2cpp_TypeInfo/* parent */
	, offsetof(DynamicShadowSettings_t339, ___sunLight_2)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Single_t448_0_0_6;
FieldInfo DynamicShadowSettings_t339____minHeight_3_FieldInfo = 
{
	"minHeight"/* name */
	, &Single_t448_0_0_6/* type */
	, &DynamicShadowSettings_t339_il2cpp_TypeInfo/* parent */
	, offsetof(DynamicShadowSettings_t339, ___minHeight_3)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Single_t448_0_0_6;
FieldInfo DynamicShadowSettings_t339____minShadowDistance_4_FieldInfo = 
{
	"minShadowDistance"/* name */
	, &Single_t448_0_0_6/* type */
	, &DynamicShadowSettings_t339_il2cpp_TypeInfo/* parent */
	, offsetof(DynamicShadowSettings_t339, ___minShadowDistance_4)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Single_t448_0_0_6;
FieldInfo DynamicShadowSettings_t339____minShadowBias_5_FieldInfo = 
{
	"minShadowBias"/* name */
	, &Single_t448_0_0_6/* type */
	, &DynamicShadowSettings_t339_il2cpp_TypeInfo/* parent */
	, offsetof(DynamicShadowSettings_t339, ___minShadowBias_5)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Single_t448_0_0_6;
FieldInfo DynamicShadowSettings_t339____maxHeight_6_FieldInfo = 
{
	"maxHeight"/* name */
	, &Single_t448_0_0_6/* type */
	, &DynamicShadowSettings_t339_il2cpp_TypeInfo/* parent */
	, offsetof(DynamicShadowSettings_t339, ___maxHeight_6)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Single_t448_0_0_6;
FieldInfo DynamicShadowSettings_t339____maxShadowDistance_7_FieldInfo = 
{
	"maxShadowDistance"/* name */
	, &Single_t448_0_0_6/* type */
	, &DynamicShadowSettings_t339_il2cpp_TypeInfo/* parent */
	, offsetof(DynamicShadowSettings_t339, ___maxShadowDistance_7)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Single_t448_0_0_6;
FieldInfo DynamicShadowSettings_t339____maxShadowBias_8_FieldInfo = 
{
	"maxShadowBias"/* name */
	, &Single_t448_0_0_6/* type */
	, &DynamicShadowSettings_t339_il2cpp_TypeInfo/* parent */
	, offsetof(DynamicShadowSettings_t339, ___maxShadowBias_8)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Single_t448_0_0_6;
FieldInfo DynamicShadowSettings_t339____adaptTime_9_FieldInfo = 
{
	"adaptTime"/* name */
	, &Single_t448_0_0_6/* type */
	, &DynamicShadowSettings_t339_il2cpp_TypeInfo/* parent */
	, offsetof(DynamicShadowSettings_t339, ___adaptTime_9)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Single_t448_0_0_1;
FieldInfo DynamicShadowSettings_t339____m_SmoothHeight_10_FieldInfo = 
{
	"m_SmoothHeight"/* name */
	, &Single_t448_0_0_1/* type */
	, &DynamicShadowSettings_t339_il2cpp_TypeInfo/* parent */
	, offsetof(DynamicShadowSettings_t339, ___m_SmoothHeight_10)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Single_t448_0_0_1;
FieldInfo DynamicShadowSettings_t339____m_ChangeSpeed_11_FieldInfo = 
{
	"m_ChangeSpeed"/* name */
	, &Single_t448_0_0_1/* type */
	, &DynamicShadowSettings_t339_il2cpp_TypeInfo/* parent */
	, offsetof(DynamicShadowSettings_t339, ___m_ChangeSpeed_11)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Single_t448_0_0_1;
FieldInfo DynamicShadowSettings_t339____m_OriginalStrength_12_FieldInfo = 
{
	"m_OriginalStrength"/* name */
	, &Single_t448_0_0_1/* type */
	, &DynamicShadowSettings_t339_il2cpp_TypeInfo/* parent */
	, offsetof(DynamicShadowSettings_t339, ___m_OriginalStrength_12)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* DynamicShadowSettings_t339_FieldInfos[] =
{
	&DynamicShadowSettings_t339____sunLight_2_FieldInfo,
	&DynamicShadowSettings_t339____minHeight_3_FieldInfo,
	&DynamicShadowSettings_t339____minShadowDistance_4_FieldInfo,
	&DynamicShadowSettings_t339____minShadowBias_5_FieldInfo,
	&DynamicShadowSettings_t339____maxHeight_6_FieldInfo,
	&DynamicShadowSettings_t339____maxShadowDistance_7_FieldInfo,
	&DynamicShadowSettings_t339____maxShadowBias_8_FieldInfo,
	&DynamicShadowSettings_t339____adaptTime_9_FieldInfo,
	&DynamicShadowSettings_t339____m_SmoothHeight_10_FieldInfo,
	&DynamicShadowSettings_t339____m_ChangeSpeed_11_FieldInfo,
	&DynamicShadowSettings_t339____m_OriginalStrength_12_FieldInfo,
	NULL
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
// System.Void UnityStandardAssets.Utility.DynamicShadowSettings::.ctor()
MethodInfo DynamicShadowSettings__ctor_m1129_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&DynamicShadowSettings__ctor_m1129/* method */
	, &DynamicShadowSettings_t339_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1224/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
// System.Void UnityStandardAssets.Utility.DynamicShadowSettings::Start()
MethodInfo DynamicShadowSettings_Start_m1130_MethodInfo = 
{
	"Start"/* name */
	, (methodPointerType)&DynamicShadowSettings_Start_m1130/* method */
	, &DynamicShadowSettings_t339_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1225/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
// System.Void UnityStandardAssets.Utility.DynamicShadowSettings::Update()
MethodInfo DynamicShadowSettings_Update_m1131_MethodInfo = 
{
	"Update"/* name */
	, (methodPointerType)&DynamicShadowSettings_Update_m1131/* method */
	, &DynamicShadowSettings_t339_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1226/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* DynamicShadowSettings_t339_MethodInfos[] =
{
	&DynamicShadowSettings__ctor_m1129_MethodInfo,
	&DynamicShadowSettings_Start_m1130_MethodInfo,
	&DynamicShadowSettings_Update_m1131_MethodInfo,
	NULL
};
static MethodInfo* DynamicShadowSettings_t339_VTable[] =
{
	&Object_Equals_m1333_MethodInfo,
	&Object_Finalize_m1253_MethodInfo,
	&Object_GetHashCode_m1334_MethodInfo,
	&Object_ToString_m1335_MethodInfo,
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType DynamicShadowSettings_t339_0_0_0;
extern Il2CppType DynamicShadowSettings_t339_1_0_0;
struct DynamicShadowSettings_t339;
TypeInfo DynamicShadowSettings_t339_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image/* image */
	, NULL/* gc_desc */
	, "DynamicShadowSettings"/* name */
	, "UnityStandardAssets.Utility"/* namespaze */
	, DynamicShadowSettings_t339_MethodInfos/* methods */
	, NULL/* properties */
	, DynamicShadowSettings_t339_FieldInfos/* fields */
	, NULL/* events */
	, &MonoBehaviour_t39_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &DynamicShadowSettings_t339_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, DynamicShadowSettings_t339_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &DynamicShadowSettings_t339_il2cpp_TypeInfo/* cast_class */
	, &DynamicShadowSettings_t339_0_0_0/* byval_arg */
	, &DynamicShadowSettings_t339_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (DynamicShadowSettings_t339)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048577/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 3/* method_count */
	, 0/* property_count */
	, 11/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo U3CFOVKickUpU3Ec__Iterator8_t341_il2cpp_TypeInfo;

extern TypeInfo FOVKick_t340_il2cpp_TypeInfo;
extern TypeInfo WaitForEndOfFrame_t546_il2cpp_TypeInfo;
extern MethodInfo Camera_get_fieldOfView_m1898_MethodInfo;
extern MethodInfo Camera_set_fieldOfView_m2130_MethodInfo;
extern MethodInfo WaitForEndOfFrame__ctor_m2131_MethodInfo;


// System.Void UnityStandardAssets.Utility.FOVKick/<FOVKickUp>c__Iterator8::.ctor()
extern MethodInfo U3CFOVKickUpU3Ec__Iterator8__ctor_m1132_MethodInfo;
 void U3CFOVKickUpU3Ec__Iterator8__ctor_m1132 (U3CFOVKickUpU3Ec__Iterator8_t341 * __this, MethodInfo* method){
	{
		Object__ctor_m1260(__this, /*hidden argument*/&Object__ctor_m1260_MethodInfo);
		return;
	}
}
// System.Object UnityStandardAssets.Utility.FOVKick/<FOVKickUp>c__Iterator8::System.Collections.Generic.IEnumerator<object>.get_Current()
extern MethodInfo U3CFOVKickUpU3Ec__Iterator8_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1133_MethodInfo;
 Object_t * U3CFOVKickUpU3Ec__Iterator8_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1133 (U3CFOVKickUpU3Ec__Iterator8_t341 * __this, MethodInfo* method){
	{
		Object_t * L_0 = (__this->___$current_2);
		return L_0;
	}
}
// System.Object UnityStandardAssets.Utility.FOVKick/<FOVKickUp>c__Iterator8::System.Collections.IEnumerator.get_Current()
extern MethodInfo U3CFOVKickUpU3Ec__Iterator8_System_Collections_IEnumerator_get_Current_m1134_MethodInfo;
 Object_t * U3CFOVKickUpU3Ec__Iterator8_System_Collections_IEnumerator_get_Current_m1134 (U3CFOVKickUpU3Ec__Iterator8_t341 * __this, MethodInfo* method){
	{
		Object_t * L_0 = (__this->___$current_2);
		return L_0;
	}
}
// System.Boolean UnityStandardAssets.Utility.FOVKick/<FOVKickUp>c__Iterator8::MoveNext()
extern MethodInfo U3CFOVKickUpU3Ec__Iterator8_MoveNext_m1135_MethodInfo;
 bool U3CFOVKickUpU3Ec__Iterator8_MoveNext_m1135 (U3CFOVKickUpU3Ec__Iterator8_t341 * __this, MethodInfo* method){
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = (__this->___$PC_1);
		V_0 = L_0;
		__this->___$PC_1 = (-1);
		if (V_0 == 0)
		{
			goto IL_0021;
		}
		if (V_0 == 1)
		{
			goto IL_00cc;
		}
	}
	{
		goto IL_00e9;
	}

IL_0021:
	{
		FOVKick_t340 * L_1 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_1);
		Camera_t236 * L_2 = (L_1->___Camera_0);
		NullCheck(L_2);
		float L_3 = Camera_get_fieldOfView_m1898(L_2, /*hidden argument*/&Camera_get_fieldOfView_m1898_MethodInfo);
		FOVKick_t340 * L_4 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_4);
		float L_5 = (L_4->___originalFov_1);
		FOVKick_t340 * L_6 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_6);
		float L_7 = (L_6->___FOVIncrease_2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t505_il2cpp_TypeInfo));
		float L_8 = fabsf(((float)((float)((float)(L_3-L_5))/(float)L_7)));
		__this->___U3CtU3E__0_0 = L_8;
		goto IL_00cc;
	}

IL_0059:
	{
		FOVKick_t340 * L_9 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_9);
		Camera_t236 * L_10 = (L_9->___Camera_0);
		FOVKick_t340 * L_11 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_11);
		float L_12 = (L_11->___originalFov_1);
		FOVKick_t340 * L_13 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_13);
		AnimationCurve_t240 * L_14 = (L_13->___IncreaseCurve_5);
		float L_15 = (__this->___U3CtU3E__0_0);
		FOVKick_t340 * L_16 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_16);
		float L_17 = (L_16->___TimeToIncrease_3);
		NullCheck(L_14);
		float L_18 = AnimationCurve_Evaluate_m1918(L_14, ((float)((float)L_15/(float)L_17)), /*hidden argument*/&AnimationCurve_Evaluate_m1918_MethodInfo);
		FOVKick_t340 * L_19 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_19);
		float L_20 = (L_19->___FOVIncrease_2);
		NullCheck(L_10);
		Camera_set_fieldOfView_m2130(L_10, ((float)(L_12+((float)((float)L_18*(float)L_20)))), /*hidden argument*/&Camera_set_fieldOfView_m2130_MethodInfo);
		float L_21 = (__this->___U3CtU3E__0_0);
		float L_22 = Time_get_deltaTime_m1748(NULL /*static, unused*/, /*hidden argument*/&Time_get_deltaTime_m1748_MethodInfo);
		__this->___U3CtU3E__0_0 = ((float)(L_21+L_22));
		WaitForEndOfFrame_t546 * L_23 = (WaitForEndOfFrame_t546 *)il2cpp_codegen_object_new (InitializedTypeInfo(&WaitForEndOfFrame_t546_il2cpp_TypeInfo));
		WaitForEndOfFrame__ctor_m2131(L_23, /*hidden argument*/&WaitForEndOfFrame__ctor_m2131_MethodInfo);
		__this->___$current_2 = L_23;
		__this->___$PC_1 = 1;
		goto IL_00eb;
	}

IL_00cc:
	{
		float L_24 = (__this->___U3CtU3E__0_0);
		FOVKick_t340 * L_25 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_25);
		float L_26 = (L_25->___TimeToIncrease_3);
		if ((((float)L_24) < ((float)L_26)))
		{
			goto IL_0059;
		}
	}
	{
		__this->___$PC_1 = (-1);
	}

IL_00e9:
	{
		return 0;
	}

IL_00eb:
	{
		return 1;
	}
	// Dead block : IL_00ed: ldloc.1
}
// System.Void UnityStandardAssets.Utility.FOVKick/<FOVKickUp>c__Iterator8::Dispose()
extern MethodInfo U3CFOVKickUpU3Ec__Iterator8_Dispose_m1136_MethodInfo;
 void U3CFOVKickUpU3Ec__Iterator8_Dispose_m1136 (U3CFOVKickUpU3Ec__Iterator8_t341 * __this, MethodInfo* method){
	{
		__this->___$PC_1 = (-1);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.FOVKick/<FOVKickUp>c__Iterator8::Reset()
extern MethodInfo U3CFOVKickUpU3Ec__Iterator8_Reset_m1137_MethodInfo;
 void U3CFOVKickUpU3Ec__Iterator8_Reset_m1137 (U3CFOVKickUpU3Ec__Iterator8_t341 * __this, MethodInfo* method){
	{
		NotSupportedException_t445 * L_0 = (NotSupportedException_t445 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t445_il2cpp_TypeInfo));
		NotSupportedException__ctor_m1445(L_0, /*hidden argument*/&NotSupportedException__ctor_m1445_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// Metadata Definition UnityStandardAssets.Utility.FOVKick/<FOVKickUp>c__Iterator8
extern Il2CppType Single_t448_0_0_3;
FieldInfo U3CFOVKickUpU3Ec__Iterator8_t341____U3CtU3E__0_0_FieldInfo = 
{
	"<t>__0"/* name */
	, &Single_t448_0_0_3/* type */
	, &U3CFOVKickUpU3Ec__Iterator8_t341_il2cpp_TypeInfo/* parent */
	, offsetof(U3CFOVKickUpU3Ec__Iterator8_t341, ___U3CtU3E__0_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t386_0_0_3;
FieldInfo U3CFOVKickUpU3Ec__Iterator8_t341____$PC_1_FieldInfo = 
{
	"$PC"/* name */
	, &Int32_t386_0_0_3/* type */
	, &U3CFOVKickUpU3Ec__Iterator8_t341_il2cpp_TypeInfo/* parent */
	, offsetof(U3CFOVKickUpU3Ec__Iterator8_t341, ___$PC_1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Object_t_0_0_3;
FieldInfo U3CFOVKickUpU3Ec__Iterator8_t341____$current_2_FieldInfo = 
{
	"$current"/* name */
	, &Object_t_0_0_3/* type */
	, &U3CFOVKickUpU3Ec__Iterator8_t341_il2cpp_TypeInfo/* parent */
	, offsetof(U3CFOVKickUpU3Ec__Iterator8_t341, ___$current_2)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType FOVKick_t340_0_0_3;
FieldInfo U3CFOVKickUpU3Ec__Iterator8_t341____U3CU3Ef__this_3_FieldInfo = 
{
	"<>f__this"/* name */
	, &FOVKick_t340_0_0_3/* type */
	, &U3CFOVKickUpU3Ec__Iterator8_t341_il2cpp_TypeInfo/* parent */
	, offsetof(U3CFOVKickUpU3Ec__Iterator8_t341, ___U3CU3Ef__this_3)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* U3CFOVKickUpU3Ec__Iterator8_t341_FieldInfos[] =
{
	&U3CFOVKickUpU3Ec__Iterator8_t341____U3CtU3E__0_0_FieldInfo,
	&U3CFOVKickUpU3Ec__Iterator8_t341____$PC_1_FieldInfo,
	&U3CFOVKickUpU3Ec__Iterator8_t341____$current_2_FieldInfo,
	&U3CFOVKickUpU3Ec__Iterator8_t341____U3CU3Ef__this_3_FieldInfo,
	NULL
};
static PropertyInfo U3CFOVKickUpU3Ec__Iterator8_t341____System_Collections_Generic_IEnumeratorU3CobjectU3E_Current_PropertyInfo = 
{
	&U3CFOVKickUpU3Ec__Iterator8_t341_il2cpp_TypeInfo/* parent */
	, "System.Collections.Generic.IEnumerator<object>.Current"/* name */
	, &U3CFOVKickUpU3Ec__Iterator8_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1133_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo U3CFOVKickUpU3Ec__Iterator8_t341____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&U3CFOVKickUpU3Ec__Iterator8_t341_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &U3CFOVKickUpU3Ec__Iterator8_System_Collections_IEnumerator_get_Current_m1134_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* U3CFOVKickUpU3Ec__Iterator8_t341_PropertyInfos[] =
{
	&U3CFOVKickUpU3Ec__Iterator8_t341____System_Collections_Generic_IEnumeratorU3CobjectU3E_Current_PropertyInfo,
	&U3CFOVKickUpU3Ec__Iterator8_t341____System_Collections_IEnumerator_Current_PropertyInfo,
	NULL
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
// System.Void UnityStandardAssets.Utility.FOVKick/<FOVKickUp>c__Iterator8::.ctor()
MethodInfo U3CFOVKickUpU3Ec__Iterator8__ctor_m1132_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&U3CFOVKickUpU3Ec__Iterator8__ctor_m1132/* method */
	, &U3CFOVKickUpU3Ec__Iterator8_t341_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1233/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache U3CFOVKickUpU3Ec__Iterator8_t341__CustomAttributeCache_U3CFOVKickUpU3Ec__Iterator8_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1133;
// System.Object UnityStandardAssets.Utility.FOVKick/<FOVKickUp>c__Iterator8::System.Collections.Generic.IEnumerator<object>.get_Current()
MethodInfo U3CFOVKickUpU3Ec__Iterator8_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1133_MethodInfo = 
{
	"System.Collections.Generic.IEnumerator<object>.get_Current"/* name */
	, (methodPointerType)&U3CFOVKickUpU3Ec__Iterator8_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1133/* method */
	, &U3CFOVKickUpU3Ec__Iterator8_t341_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &U3CFOVKickUpU3Ec__Iterator8_t341__CustomAttributeCache_U3CFOVKickUpU3Ec__Iterator8_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1133/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1234/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache U3CFOVKickUpU3Ec__Iterator8_t341__CustomAttributeCache_U3CFOVKickUpU3Ec__Iterator8_System_Collections_IEnumerator_get_Current_m1134;
// System.Object UnityStandardAssets.Utility.FOVKick/<FOVKickUp>c__Iterator8::System.Collections.IEnumerator.get_Current()
MethodInfo U3CFOVKickUpU3Ec__Iterator8_System_Collections_IEnumerator_get_Current_m1134_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&U3CFOVKickUpU3Ec__Iterator8_System_Collections_IEnumerator_get_Current_m1134/* method */
	, &U3CFOVKickUpU3Ec__Iterator8_t341_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &U3CFOVKickUpU3Ec__Iterator8_t341__CustomAttributeCache_U3CFOVKickUpU3Ec__Iterator8_System_Collections_IEnumerator_get_Current_m1134/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1235/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379 (MethodInfo* method, void* obj, void** args);
// System.Boolean UnityStandardAssets.Utility.FOVKick/<FOVKickUp>c__Iterator8::MoveNext()
MethodInfo U3CFOVKickUpU3Ec__Iterator8_MoveNext_m1135_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&U3CFOVKickUpU3Ec__Iterator8_MoveNext_m1135/* method */
	, &U3CFOVKickUpU3Ec__Iterator8_t341_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t379_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t379/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1236/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache U3CFOVKickUpU3Ec__Iterator8_t341__CustomAttributeCache_U3CFOVKickUpU3Ec__Iterator8_Dispose_m1136;
// System.Void UnityStandardAssets.Utility.FOVKick/<FOVKickUp>c__Iterator8::Dispose()
MethodInfo U3CFOVKickUpU3Ec__Iterator8_Dispose_m1136_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&U3CFOVKickUpU3Ec__Iterator8_Dispose_m1136/* method */
	, &U3CFOVKickUpU3Ec__Iterator8_t341_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &U3CFOVKickUpU3Ec__Iterator8_t341__CustomAttributeCache_U3CFOVKickUpU3Ec__Iterator8_Dispose_m1136/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1237/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache U3CFOVKickUpU3Ec__Iterator8_t341__CustomAttributeCache_U3CFOVKickUpU3Ec__Iterator8_Reset_m1137;
// System.Void UnityStandardAssets.Utility.FOVKick/<FOVKickUp>c__Iterator8::Reset()
MethodInfo U3CFOVKickUpU3Ec__Iterator8_Reset_m1137_MethodInfo = 
{
	"Reset"/* name */
	, (methodPointerType)&U3CFOVKickUpU3Ec__Iterator8_Reset_m1137/* method */
	, &U3CFOVKickUpU3Ec__Iterator8_t341_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &U3CFOVKickUpU3Ec__Iterator8_t341__CustomAttributeCache_U3CFOVKickUpU3Ec__Iterator8_Reset_m1137/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1238/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* U3CFOVKickUpU3Ec__Iterator8_t341_MethodInfos[] =
{
	&U3CFOVKickUpU3Ec__Iterator8__ctor_m1132_MethodInfo,
	&U3CFOVKickUpU3Ec__Iterator8_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1133_MethodInfo,
	&U3CFOVKickUpU3Ec__Iterator8_System_Collections_IEnumerator_get_Current_m1134_MethodInfo,
	&U3CFOVKickUpU3Ec__Iterator8_MoveNext_m1135_MethodInfo,
	&U3CFOVKickUpU3Ec__Iterator8_Dispose_m1136_MethodInfo,
	&U3CFOVKickUpU3Ec__Iterator8_Reset_m1137_MethodInfo,
	NULL
};
static MethodInfo* U3CFOVKickUpU3Ec__Iterator8_t341_VTable[] =
{
	&Object_Equals_m1252_MethodInfo,
	&Object_Finalize_m1253_MethodInfo,
	&Object_GetHashCode_m1254_MethodInfo,
	&Object_ToString_m1255_MethodInfo,
	&U3CFOVKickUpU3Ec__Iterator8_Dispose_m1136_MethodInfo,
	&U3CFOVKickUpU3Ec__Iterator8_System_Collections_IEnumerator_get_Current_m1134_MethodInfo,
	&U3CFOVKickUpU3Ec__Iterator8_MoveNext_m1135_MethodInfo,
	&U3CFOVKickUpU3Ec__Iterator8_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1133_MethodInfo,
	&U3CFOVKickUpU3Ec__Iterator8_Reset_m1137_MethodInfo,
};
static TypeInfo* U3CFOVKickUpU3Ec__Iterator8_t341_InterfacesTypeInfos[] = 
{
	&IDisposable_t444_il2cpp_TypeInfo,
	&IEnumerator_t26_il2cpp_TypeInfo,
	&IEnumerator_1_t53_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair U3CFOVKickUpU3Ec__Iterator8_t341_InterfacesOffsets[] = 
{
	{ &IDisposable_t444_il2cpp_TypeInfo, 4},
	{ &IEnumerator_t26_il2cpp_TypeInfo, 5},
	{ &IEnumerator_1_t53_il2cpp_TypeInfo, 7},
};
void U3CFOVKickUpU3Ec__Iterator8_t341_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t384 * tmp;
		tmp = (CompilerGeneratedAttribute_t384 *)il2cpp_codegen_object_new (&CompilerGeneratedAttribute_t384_il2cpp_TypeInfo);
		CompilerGeneratedAttribute__ctor_m1269(tmp, &CompilerGeneratedAttribute__ctor_m1269_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void U3CFOVKickUpU3Ec__Iterator8_t341_CustomAttributesCacheGenerator_U3CFOVKickUpU3Ec__Iterator8_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1133(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t447 * tmp;
		tmp = (DebuggerHiddenAttribute_t447 *)il2cpp_codegen_object_new (&DebuggerHiddenAttribute_t447_il2cpp_TypeInfo);
		DebuggerHiddenAttribute__ctor_m1446(tmp, &DebuggerHiddenAttribute__ctor_m1446_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void U3CFOVKickUpU3Ec__Iterator8_t341_CustomAttributesCacheGenerator_U3CFOVKickUpU3Ec__Iterator8_System_Collections_IEnumerator_get_Current_m1134(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t447 * tmp;
		tmp = (DebuggerHiddenAttribute_t447 *)il2cpp_codegen_object_new (&DebuggerHiddenAttribute_t447_il2cpp_TypeInfo);
		DebuggerHiddenAttribute__ctor_m1446(tmp, &DebuggerHiddenAttribute__ctor_m1446_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void U3CFOVKickUpU3Ec__Iterator8_t341_CustomAttributesCacheGenerator_U3CFOVKickUpU3Ec__Iterator8_Dispose_m1136(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t447 * tmp;
		tmp = (DebuggerHiddenAttribute_t447 *)il2cpp_codegen_object_new (&DebuggerHiddenAttribute_t447_il2cpp_TypeInfo);
		DebuggerHiddenAttribute__ctor_m1446(tmp, &DebuggerHiddenAttribute__ctor_m1446_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void U3CFOVKickUpU3Ec__Iterator8_t341_CustomAttributesCacheGenerator_U3CFOVKickUpU3Ec__Iterator8_Reset_m1137(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t447 * tmp;
		tmp = (DebuggerHiddenAttribute_t447 *)il2cpp_codegen_object_new (&DebuggerHiddenAttribute_t447_il2cpp_TypeInfo);
		DebuggerHiddenAttribute__ctor_m1446(tmp, &DebuggerHiddenAttribute__ctor_m1446_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache U3CFOVKickUpU3Ec__Iterator8_t341__CustomAttributeCache = {
1,
NULL,
&U3CFOVKickUpU3Ec__Iterator8_t341_CustomAttributesCacheGenerator
};
CustomAttributesCache U3CFOVKickUpU3Ec__Iterator8_t341__CustomAttributeCache_U3CFOVKickUpU3Ec__Iterator8_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1133 = {
1,
NULL,
&U3CFOVKickUpU3Ec__Iterator8_t341_CustomAttributesCacheGenerator_U3CFOVKickUpU3Ec__Iterator8_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1133
};
CustomAttributesCache U3CFOVKickUpU3Ec__Iterator8_t341__CustomAttributeCache_U3CFOVKickUpU3Ec__Iterator8_System_Collections_IEnumerator_get_Current_m1134 = {
1,
NULL,
&U3CFOVKickUpU3Ec__Iterator8_t341_CustomAttributesCacheGenerator_U3CFOVKickUpU3Ec__Iterator8_System_Collections_IEnumerator_get_Current_m1134
};
CustomAttributesCache U3CFOVKickUpU3Ec__Iterator8_t341__CustomAttributeCache_U3CFOVKickUpU3Ec__Iterator8_Dispose_m1136 = {
1,
NULL,
&U3CFOVKickUpU3Ec__Iterator8_t341_CustomAttributesCacheGenerator_U3CFOVKickUpU3Ec__Iterator8_Dispose_m1136
};
CustomAttributesCache U3CFOVKickUpU3Ec__Iterator8_t341__CustomAttributeCache_U3CFOVKickUpU3Ec__Iterator8_Reset_m1137 = {
1,
NULL,
&U3CFOVKickUpU3Ec__Iterator8_t341_CustomAttributesCacheGenerator_U3CFOVKickUpU3Ec__Iterator8_Reset_m1137
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType U3CFOVKickUpU3Ec__Iterator8_t341_0_0_0;
extern Il2CppType U3CFOVKickUpU3Ec__Iterator8_t341_1_0_0;
struct U3CFOVKickUpU3Ec__Iterator8_t341;
extern CustomAttributesCache U3CFOVKickUpU3Ec__Iterator8_t341__CustomAttributeCache;
extern CustomAttributesCache U3CFOVKickUpU3Ec__Iterator8_t341__CustomAttributeCache_U3CFOVKickUpU3Ec__Iterator8_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1133;
extern CustomAttributesCache U3CFOVKickUpU3Ec__Iterator8_t341__CustomAttributeCache_U3CFOVKickUpU3Ec__Iterator8_System_Collections_IEnumerator_get_Current_m1134;
extern CustomAttributesCache U3CFOVKickUpU3Ec__Iterator8_t341__CustomAttributeCache_U3CFOVKickUpU3Ec__Iterator8_Dispose_m1136;
extern CustomAttributesCache U3CFOVKickUpU3Ec__Iterator8_t341__CustomAttributeCache_U3CFOVKickUpU3Ec__Iterator8_Reset_m1137;
TypeInfo U3CFOVKickUpU3Ec__Iterator8_t341_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image/* image */
	, NULL/* gc_desc */
	, "<FOVKickUp>c__Iterator8"/* name */
	, ""/* namespaze */
	, U3CFOVKickUpU3Ec__Iterator8_t341_MethodInfos/* methods */
	, U3CFOVKickUpU3Ec__Iterator8_t341_PropertyInfos/* properties */
	, U3CFOVKickUpU3Ec__Iterator8_t341_FieldInfos/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &FOVKick_t340_il2cpp_TypeInfo/* nested_in */
	, &U3CFOVKickUpU3Ec__Iterator8_t341_il2cpp_TypeInfo/* element_class */
	, U3CFOVKickUpU3Ec__Iterator8_t341_InterfacesTypeInfos/* implemented_interfaces */
	, U3CFOVKickUpU3Ec__Iterator8_t341_VTable/* vtable */
	, &U3CFOVKickUpU3Ec__Iterator8_t341__CustomAttributeCache/* custom_attributes_cache */
	, &U3CFOVKickUpU3Ec__Iterator8_t341_il2cpp_TypeInfo/* cast_class */
	, &U3CFOVKickUpU3Ec__Iterator8_t341_0_0_0/* byval_arg */
	, &U3CFOVKickUpU3Ec__Iterator8_t341_1_0_0/* this_arg */
	, U3CFOVKickUpU3Ec__Iterator8_t341_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (U3CFOVKickUpU3Ec__Iterator8_t341)/* instance_size */
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
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 6/* method_count */
	, 2/* property_count */
	, 4/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 9/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo U3CFOVKickDownU3Ec__Iterator9_t342_il2cpp_TypeInfo;



// System.Void UnityStandardAssets.Utility.FOVKick/<FOVKickDown>c__Iterator9::.ctor()
extern MethodInfo U3CFOVKickDownU3Ec__Iterator9__ctor_m1138_MethodInfo;
 void U3CFOVKickDownU3Ec__Iterator9__ctor_m1138 (U3CFOVKickDownU3Ec__Iterator9_t342 * __this, MethodInfo* method){
	{
		Object__ctor_m1260(__this, /*hidden argument*/&Object__ctor_m1260_MethodInfo);
		return;
	}
}
// System.Object UnityStandardAssets.Utility.FOVKick/<FOVKickDown>c__Iterator9::System.Collections.Generic.IEnumerator<object>.get_Current()
extern MethodInfo U3CFOVKickDownU3Ec__Iterator9_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1139_MethodInfo;
 Object_t * U3CFOVKickDownU3Ec__Iterator9_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1139 (U3CFOVKickDownU3Ec__Iterator9_t342 * __this, MethodInfo* method){
	{
		Object_t * L_0 = (__this->___$current_2);
		return L_0;
	}
}
// System.Object UnityStandardAssets.Utility.FOVKick/<FOVKickDown>c__Iterator9::System.Collections.IEnumerator.get_Current()
extern MethodInfo U3CFOVKickDownU3Ec__Iterator9_System_Collections_IEnumerator_get_Current_m1140_MethodInfo;
 Object_t * U3CFOVKickDownU3Ec__Iterator9_System_Collections_IEnumerator_get_Current_m1140 (U3CFOVKickDownU3Ec__Iterator9_t342 * __this, MethodInfo* method){
	{
		Object_t * L_0 = (__this->___$current_2);
		return L_0;
	}
}
// System.Boolean UnityStandardAssets.Utility.FOVKick/<FOVKickDown>c__Iterator9::MoveNext()
extern MethodInfo U3CFOVKickDownU3Ec__Iterator9_MoveNext_m1141_MethodInfo;
 bool U3CFOVKickDownU3Ec__Iterator9_MoveNext_m1141 (U3CFOVKickDownU3Ec__Iterator9_t342 * __this, MethodInfo* method){
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = (__this->___$PC_1);
		V_0 = L_0;
		__this->___$PC_1 = (-1);
		if (V_0 == 0)
		{
			goto IL_0021;
		}
		if (V_0 == 1)
		{
			goto IL_00cc;
		}
	}
	{
		goto IL_00fe;
	}

IL_0021:
	{
		FOVKick_t340 * L_1 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_1);
		Camera_t236 * L_2 = (L_1->___Camera_0);
		NullCheck(L_2);
		float L_3 = Camera_get_fieldOfView_m1898(L_2, /*hidden argument*/&Camera_get_fieldOfView_m1898_MethodInfo);
		FOVKick_t340 * L_4 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_4);
		float L_5 = (L_4->___originalFov_1);
		FOVKick_t340 * L_6 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_6);
		float L_7 = (L_6->___FOVIncrease_2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t505_il2cpp_TypeInfo));
		float L_8 = fabsf(((float)((float)((float)(L_3-L_5))/(float)L_7)));
		__this->___U3CtU3E__0_0 = L_8;
		goto IL_00cc;
	}

IL_0059:
	{
		FOVKick_t340 * L_9 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_9);
		Camera_t236 * L_10 = (L_9->___Camera_0);
		FOVKick_t340 * L_11 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_11);
		float L_12 = (L_11->___originalFov_1);
		FOVKick_t340 * L_13 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_13);
		AnimationCurve_t240 * L_14 = (L_13->___IncreaseCurve_5);
		float L_15 = (__this->___U3CtU3E__0_0);
		FOVKick_t340 * L_16 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_16);
		float L_17 = (L_16->___TimeToDecrease_4);
		NullCheck(L_14);
		float L_18 = AnimationCurve_Evaluate_m1918(L_14, ((float)((float)L_15/(float)L_17)), /*hidden argument*/&AnimationCurve_Evaluate_m1918_MethodInfo);
		FOVKick_t340 * L_19 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_19);
		float L_20 = (L_19->___FOVIncrease_2);
		NullCheck(L_10);
		Camera_set_fieldOfView_m2130(L_10, ((float)(L_12+((float)((float)L_18*(float)L_20)))), /*hidden argument*/&Camera_set_fieldOfView_m2130_MethodInfo);
		float L_21 = (__this->___U3CtU3E__0_0);
		float L_22 = Time_get_deltaTime_m1748(NULL /*static, unused*/, /*hidden argument*/&Time_get_deltaTime_m1748_MethodInfo);
		__this->___U3CtU3E__0_0 = ((float)(L_21-L_22));
		WaitForEndOfFrame_t546 * L_23 = (WaitForEndOfFrame_t546 *)il2cpp_codegen_object_new (InitializedTypeInfo(&WaitForEndOfFrame_t546_il2cpp_TypeInfo));
		WaitForEndOfFrame__ctor_m2131(L_23, /*hidden argument*/&WaitForEndOfFrame__ctor_m2131_MethodInfo);
		__this->___$current_2 = L_23;
		__this->___$PC_1 = 1;
		goto IL_0100;
	}

IL_00cc:
	{
		float L_24 = (__this->___U3CtU3E__0_0);
		if ((((float)L_24) > ((float)(0.0f))))
		{
			goto IL_0059;
		}
	}
	{
		FOVKick_t340 * L_25 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_25);
		Camera_t236 * L_26 = (L_25->___Camera_0);
		FOVKick_t340 * L_27 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_27);
		float L_28 = (L_27->___originalFov_1);
		NullCheck(L_26);
		Camera_set_fieldOfView_m2130(L_26, L_28, /*hidden argument*/&Camera_set_fieldOfView_m2130_MethodInfo);
		__this->___$PC_1 = (-1);
	}

IL_00fe:
	{
		return 0;
	}

IL_0100:
	{
		return 1;
	}
	// Dead block : IL_0102: ldloc.1
}
// System.Void UnityStandardAssets.Utility.FOVKick/<FOVKickDown>c__Iterator9::Dispose()
extern MethodInfo U3CFOVKickDownU3Ec__Iterator9_Dispose_m1142_MethodInfo;
 void U3CFOVKickDownU3Ec__Iterator9_Dispose_m1142 (U3CFOVKickDownU3Ec__Iterator9_t342 * __this, MethodInfo* method){
	{
		__this->___$PC_1 = (-1);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.FOVKick/<FOVKickDown>c__Iterator9::Reset()
extern MethodInfo U3CFOVKickDownU3Ec__Iterator9_Reset_m1143_MethodInfo;
 void U3CFOVKickDownU3Ec__Iterator9_Reset_m1143 (U3CFOVKickDownU3Ec__Iterator9_t342 * __this, MethodInfo* method){
	{
		NotSupportedException_t445 * L_0 = (NotSupportedException_t445 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t445_il2cpp_TypeInfo));
		NotSupportedException__ctor_m1445(L_0, /*hidden argument*/&NotSupportedException__ctor_m1445_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// Metadata Definition UnityStandardAssets.Utility.FOVKick/<FOVKickDown>c__Iterator9
extern Il2CppType Single_t448_0_0_3;
FieldInfo U3CFOVKickDownU3Ec__Iterator9_t342____U3CtU3E__0_0_FieldInfo = 
{
	"<t>__0"/* name */
	, &Single_t448_0_0_3/* type */
	, &U3CFOVKickDownU3Ec__Iterator9_t342_il2cpp_TypeInfo/* parent */
	, offsetof(U3CFOVKickDownU3Ec__Iterator9_t342, ___U3CtU3E__0_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t386_0_0_3;
FieldInfo U3CFOVKickDownU3Ec__Iterator9_t342____$PC_1_FieldInfo = 
{
	"$PC"/* name */
	, &Int32_t386_0_0_3/* type */
	, &U3CFOVKickDownU3Ec__Iterator9_t342_il2cpp_TypeInfo/* parent */
	, offsetof(U3CFOVKickDownU3Ec__Iterator9_t342, ___$PC_1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Object_t_0_0_3;
FieldInfo U3CFOVKickDownU3Ec__Iterator9_t342____$current_2_FieldInfo = 
{
	"$current"/* name */
	, &Object_t_0_0_3/* type */
	, &U3CFOVKickDownU3Ec__Iterator9_t342_il2cpp_TypeInfo/* parent */
	, offsetof(U3CFOVKickDownU3Ec__Iterator9_t342, ___$current_2)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType FOVKick_t340_0_0_3;
FieldInfo U3CFOVKickDownU3Ec__Iterator9_t342____U3CU3Ef__this_3_FieldInfo = 
{
	"<>f__this"/* name */
	, &FOVKick_t340_0_0_3/* type */
	, &U3CFOVKickDownU3Ec__Iterator9_t342_il2cpp_TypeInfo/* parent */
	, offsetof(U3CFOVKickDownU3Ec__Iterator9_t342, ___U3CU3Ef__this_3)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* U3CFOVKickDownU3Ec__Iterator9_t342_FieldInfos[] =
{
	&U3CFOVKickDownU3Ec__Iterator9_t342____U3CtU3E__0_0_FieldInfo,
	&U3CFOVKickDownU3Ec__Iterator9_t342____$PC_1_FieldInfo,
	&U3CFOVKickDownU3Ec__Iterator9_t342____$current_2_FieldInfo,
	&U3CFOVKickDownU3Ec__Iterator9_t342____U3CU3Ef__this_3_FieldInfo,
	NULL
};
static PropertyInfo U3CFOVKickDownU3Ec__Iterator9_t342____System_Collections_Generic_IEnumeratorU3CobjectU3E_Current_PropertyInfo = 
{
	&U3CFOVKickDownU3Ec__Iterator9_t342_il2cpp_TypeInfo/* parent */
	, "System.Collections.Generic.IEnumerator<object>.Current"/* name */
	, &U3CFOVKickDownU3Ec__Iterator9_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1139_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo U3CFOVKickDownU3Ec__Iterator9_t342____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&U3CFOVKickDownU3Ec__Iterator9_t342_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &U3CFOVKickDownU3Ec__Iterator9_System_Collections_IEnumerator_get_Current_m1140_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* U3CFOVKickDownU3Ec__Iterator9_t342_PropertyInfos[] =
{
	&U3CFOVKickDownU3Ec__Iterator9_t342____System_Collections_Generic_IEnumeratorU3CobjectU3E_Current_PropertyInfo,
	&U3CFOVKickDownU3Ec__Iterator9_t342____System_Collections_IEnumerator_Current_PropertyInfo,
	NULL
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
// System.Void UnityStandardAssets.Utility.FOVKick/<FOVKickDown>c__Iterator9::.ctor()
MethodInfo U3CFOVKickDownU3Ec__Iterator9__ctor_m1138_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&U3CFOVKickDownU3Ec__Iterator9__ctor_m1138/* method */
	, &U3CFOVKickDownU3Ec__Iterator9_t342_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1239/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache U3CFOVKickDownU3Ec__Iterator9_t342__CustomAttributeCache_U3CFOVKickDownU3Ec__Iterator9_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1139;
// System.Object UnityStandardAssets.Utility.FOVKick/<FOVKickDown>c__Iterator9::System.Collections.Generic.IEnumerator<object>.get_Current()
MethodInfo U3CFOVKickDownU3Ec__Iterator9_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1139_MethodInfo = 
{
	"System.Collections.Generic.IEnumerator<object>.get_Current"/* name */
	, (methodPointerType)&U3CFOVKickDownU3Ec__Iterator9_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1139/* method */
	, &U3CFOVKickDownU3Ec__Iterator9_t342_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &U3CFOVKickDownU3Ec__Iterator9_t342__CustomAttributeCache_U3CFOVKickDownU3Ec__Iterator9_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1139/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1240/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache U3CFOVKickDownU3Ec__Iterator9_t342__CustomAttributeCache_U3CFOVKickDownU3Ec__Iterator9_System_Collections_IEnumerator_get_Current_m1140;
// System.Object UnityStandardAssets.Utility.FOVKick/<FOVKickDown>c__Iterator9::System.Collections.IEnumerator.get_Current()
MethodInfo U3CFOVKickDownU3Ec__Iterator9_System_Collections_IEnumerator_get_Current_m1140_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&U3CFOVKickDownU3Ec__Iterator9_System_Collections_IEnumerator_get_Current_m1140/* method */
	, &U3CFOVKickDownU3Ec__Iterator9_t342_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &U3CFOVKickDownU3Ec__Iterator9_t342__CustomAttributeCache_U3CFOVKickDownU3Ec__Iterator9_System_Collections_IEnumerator_get_Current_m1140/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1241/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379 (MethodInfo* method, void* obj, void** args);
// System.Boolean UnityStandardAssets.Utility.FOVKick/<FOVKickDown>c__Iterator9::MoveNext()
MethodInfo U3CFOVKickDownU3Ec__Iterator9_MoveNext_m1141_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&U3CFOVKickDownU3Ec__Iterator9_MoveNext_m1141/* method */
	, &U3CFOVKickDownU3Ec__Iterator9_t342_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t379_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t379/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1242/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache U3CFOVKickDownU3Ec__Iterator9_t342__CustomAttributeCache_U3CFOVKickDownU3Ec__Iterator9_Dispose_m1142;
// System.Void UnityStandardAssets.Utility.FOVKick/<FOVKickDown>c__Iterator9::Dispose()
MethodInfo U3CFOVKickDownU3Ec__Iterator9_Dispose_m1142_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&U3CFOVKickDownU3Ec__Iterator9_Dispose_m1142/* method */
	, &U3CFOVKickDownU3Ec__Iterator9_t342_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &U3CFOVKickDownU3Ec__Iterator9_t342__CustomAttributeCache_U3CFOVKickDownU3Ec__Iterator9_Dispose_m1142/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1243/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache U3CFOVKickDownU3Ec__Iterator9_t342__CustomAttributeCache_U3CFOVKickDownU3Ec__Iterator9_Reset_m1143;
// System.Void UnityStandardAssets.Utility.FOVKick/<FOVKickDown>c__Iterator9::Reset()
MethodInfo U3CFOVKickDownU3Ec__Iterator9_Reset_m1143_MethodInfo = 
{
	"Reset"/* name */
	, (methodPointerType)&U3CFOVKickDownU3Ec__Iterator9_Reset_m1143/* method */
	, &U3CFOVKickDownU3Ec__Iterator9_t342_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &U3CFOVKickDownU3Ec__Iterator9_t342__CustomAttributeCache_U3CFOVKickDownU3Ec__Iterator9_Reset_m1143/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1244/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* U3CFOVKickDownU3Ec__Iterator9_t342_MethodInfos[] =
{
	&U3CFOVKickDownU3Ec__Iterator9__ctor_m1138_MethodInfo,
	&U3CFOVKickDownU3Ec__Iterator9_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1139_MethodInfo,
	&U3CFOVKickDownU3Ec__Iterator9_System_Collections_IEnumerator_get_Current_m1140_MethodInfo,
	&U3CFOVKickDownU3Ec__Iterator9_MoveNext_m1141_MethodInfo,
	&U3CFOVKickDownU3Ec__Iterator9_Dispose_m1142_MethodInfo,
	&U3CFOVKickDownU3Ec__Iterator9_Reset_m1143_MethodInfo,
	NULL
};
static MethodInfo* U3CFOVKickDownU3Ec__Iterator9_t342_VTable[] =
{
	&Object_Equals_m1252_MethodInfo,
	&Object_Finalize_m1253_MethodInfo,
	&Object_GetHashCode_m1254_MethodInfo,
	&Object_ToString_m1255_MethodInfo,
	&U3CFOVKickDownU3Ec__Iterator9_Dispose_m1142_MethodInfo,
	&U3CFOVKickDownU3Ec__Iterator9_System_Collections_IEnumerator_get_Current_m1140_MethodInfo,
	&U3CFOVKickDownU3Ec__Iterator9_MoveNext_m1141_MethodInfo,
	&U3CFOVKickDownU3Ec__Iterator9_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1139_MethodInfo,
	&U3CFOVKickDownU3Ec__Iterator9_Reset_m1143_MethodInfo,
};
static TypeInfo* U3CFOVKickDownU3Ec__Iterator9_t342_InterfacesTypeInfos[] = 
{
	&IDisposable_t444_il2cpp_TypeInfo,
	&IEnumerator_t26_il2cpp_TypeInfo,
	&IEnumerator_1_t53_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair U3CFOVKickDownU3Ec__Iterator9_t342_InterfacesOffsets[] = 
{
	{ &IDisposable_t444_il2cpp_TypeInfo, 4},
	{ &IEnumerator_t26_il2cpp_TypeInfo, 5},
	{ &IEnumerator_1_t53_il2cpp_TypeInfo, 7},
};
void U3CFOVKickDownU3Ec__Iterator9_t342_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t384 * tmp;
		tmp = (CompilerGeneratedAttribute_t384 *)il2cpp_codegen_object_new (&CompilerGeneratedAttribute_t384_il2cpp_TypeInfo);
		CompilerGeneratedAttribute__ctor_m1269(tmp, &CompilerGeneratedAttribute__ctor_m1269_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void U3CFOVKickDownU3Ec__Iterator9_t342_CustomAttributesCacheGenerator_U3CFOVKickDownU3Ec__Iterator9_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1139(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t447 * tmp;
		tmp = (DebuggerHiddenAttribute_t447 *)il2cpp_codegen_object_new (&DebuggerHiddenAttribute_t447_il2cpp_TypeInfo);
		DebuggerHiddenAttribute__ctor_m1446(tmp, &DebuggerHiddenAttribute__ctor_m1446_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void U3CFOVKickDownU3Ec__Iterator9_t342_CustomAttributesCacheGenerator_U3CFOVKickDownU3Ec__Iterator9_System_Collections_IEnumerator_get_Current_m1140(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t447 * tmp;
		tmp = (DebuggerHiddenAttribute_t447 *)il2cpp_codegen_object_new (&DebuggerHiddenAttribute_t447_il2cpp_TypeInfo);
		DebuggerHiddenAttribute__ctor_m1446(tmp, &DebuggerHiddenAttribute__ctor_m1446_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void U3CFOVKickDownU3Ec__Iterator9_t342_CustomAttributesCacheGenerator_U3CFOVKickDownU3Ec__Iterator9_Dispose_m1142(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t447 * tmp;
		tmp = (DebuggerHiddenAttribute_t447 *)il2cpp_codegen_object_new (&DebuggerHiddenAttribute_t447_il2cpp_TypeInfo);
		DebuggerHiddenAttribute__ctor_m1446(tmp, &DebuggerHiddenAttribute__ctor_m1446_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void U3CFOVKickDownU3Ec__Iterator9_t342_CustomAttributesCacheGenerator_U3CFOVKickDownU3Ec__Iterator9_Reset_m1143(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t447 * tmp;
		tmp = (DebuggerHiddenAttribute_t447 *)il2cpp_codegen_object_new (&DebuggerHiddenAttribute_t447_il2cpp_TypeInfo);
		DebuggerHiddenAttribute__ctor_m1446(tmp, &DebuggerHiddenAttribute__ctor_m1446_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache U3CFOVKickDownU3Ec__Iterator9_t342__CustomAttributeCache = {
1,
NULL,
&U3CFOVKickDownU3Ec__Iterator9_t342_CustomAttributesCacheGenerator
};
CustomAttributesCache U3CFOVKickDownU3Ec__Iterator9_t342__CustomAttributeCache_U3CFOVKickDownU3Ec__Iterator9_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1139 = {
1,
NULL,
&U3CFOVKickDownU3Ec__Iterator9_t342_CustomAttributesCacheGenerator_U3CFOVKickDownU3Ec__Iterator9_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1139
};
CustomAttributesCache U3CFOVKickDownU3Ec__Iterator9_t342__CustomAttributeCache_U3CFOVKickDownU3Ec__Iterator9_System_Collections_IEnumerator_get_Current_m1140 = {
1,
NULL,
&U3CFOVKickDownU3Ec__Iterator9_t342_CustomAttributesCacheGenerator_U3CFOVKickDownU3Ec__Iterator9_System_Collections_IEnumerator_get_Current_m1140
};
CustomAttributesCache U3CFOVKickDownU3Ec__Iterator9_t342__CustomAttributeCache_U3CFOVKickDownU3Ec__Iterator9_Dispose_m1142 = {
1,
NULL,
&U3CFOVKickDownU3Ec__Iterator9_t342_CustomAttributesCacheGenerator_U3CFOVKickDownU3Ec__Iterator9_Dispose_m1142
};
CustomAttributesCache U3CFOVKickDownU3Ec__Iterator9_t342__CustomAttributeCache_U3CFOVKickDownU3Ec__Iterator9_Reset_m1143 = {
1,
NULL,
&U3CFOVKickDownU3Ec__Iterator9_t342_CustomAttributesCacheGenerator_U3CFOVKickDownU3Ec__Iterator9_Reset_m1143
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType U3CFOVKickDownU3Ec__Iterator9_t342_0_0_0;
extern Il2CppType U3CFOVKickDownU3Ec__Iterator9_t342_1_0_0;
struct U3CFOVKickDownU3Ec__Iterator9_t342;
extern CustomAttributesCache U3CFOVKickDownU3Ec__Iterator9_t342__CustomAttributeCache;
extern CustomAttributesCache U3CFOVKickDownU3Ec__Iterator9_t342__CustomAttributeCache_U3CFOVKickDownU3Ec__Iterator9_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1139;
extern CustomAttributesCache U3CFOVKickDownU3Ec__Iterator9_t342__CustomAttributeCache_U3CFOVKickDownU3Ec__Iterator9_System_Collections_IEnumerator_get_Current_m1140;
extern CustomAttributesCache U3CFOVKickDownU3Ec__Iterator9_t342__CustomAttributeCache_U3CFOVKickDownU3Ec__Iterator9_Dispose_m1142;
extern CustomAttributesCache U3CFOVKickDownU3Ec__Iterator9_t342__CustomAttributeCache_U3CFOVKickDownU3Ec__Iterator9_Reset_m1143;
TypeInfo U3CFOVKickDownU3Ec__Iterator9_t342_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image/* image */
	, NULL/* gc_desc */
	, "<FOVKickDown>c__Iterator9"/* name */
	, ""/* namespaze */
	, U3CFOVKickDownU3Ec__Iterator9_t342_MethodInfos/* methods */
	, U3CFOVKickDownU3Ec__Iterator9_t342_PropertyInfos/* properties */
	, U3CFOVKickDownU3Ec__Iterator9_t342_FieldInfos/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &FOVKick_t340_il2cpp_TypeInfo/* nested_in */
	, &U3CFOVKickDownU3Ec__Iterator9_t342_il2cpp_TypeInfo/* element_class */
	, U3CFOVKickDownU3Ec__Iterator9_t342_InterfacesTypeInfos/* implemented_interfaces */
	, U3CFOVKickDownU3Ec__Iterator9_t342_VTable/* vtable */
	, &U3CFOVKickDownU3Ec__Iterator9_t342__CustomAttributeCache/* custom_attributes_cache */
	, &U3CFOVKickDownU3Ec__Iterator9_t342_il2cpp_TypeInfo/* cast_class */
	, &U3CFOVKickDownU3Ec__Iterator9_t342_0_0_0/* byval_arg */
	, &U3CFOVKickDownU3Ec__Iterator9_t342_1_0_0/* this_arg */
	, U3CFOVKickDownU3Ec__Iterator9_t342_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (U3CFOVKickDownU3Ec__Iterator9_t342)/* instance_size */
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
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 6/* method_count */
	, 2/* property_count */
	, 4/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 9/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo Exception_t151_il2cpp_TypeInfo;
extern MethodInfo FOVKick_CheckStatus_m1146_MethodInfo;
extern MethodInfo Exception__ctor_m1700_MethodInfo;


// System.Void UnityStandardAssets.Utility.FOVKick::.ctor()
extern MethodInfo FOVKick__ctor_m1144_MethodInfo;
 void FOVKick__ctor_m1144 (FOVKick_t340 * __this, MethodInfo* method){
	{
		__this->___FOVIncrease_2 = (3.0f);
		__this->___TimeToIncrease_3 = (1.0f);
		__this->___TimeToDecrease_4 = (1.0f);
		Object__ctor_m1260(__this, /*hidden argument*/&Object__ctor_m1260_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.FOVKick::Setup(UnityEngine.Camera)
extern MethodInfo FOVKick_Setup_m1145_MethodInfo;
 void FOVKick_Setup_m1145 (FOVKick_t340 * __this, Camera_t236 * ___camera, MethodInfo* method){
	{
		FOVKick_CheckStatus_m1146(__this, ___camera, /*hidden argument*/&FOVKick_CheckStatus_m1146_MethodInfo);
		__this->___Camera_0 = ___camera;
		NullCheck(___camera);
		float L_0 = Camera_get_fieldOfView_m1898(___camera, /*hidden argument*/&Camera_get_fieldOfView_m1898_MethodInfo);
		__this->___originalFov_1 = L_0;
		return;
	}
}
// System.Void UnityStandardAssets.Utility.FOVKick::CheckStatus(UnityEngine.Camera)
 void FOVKick_CheckStatus_m1146 (FOVKick_t340 * __this, Camera_t236 * ___camera, MethodInfo* method){
	{
		bool L_0 = Object_op_Equality_m1329(NULL /*static, unused*/, ___camera, (Object_t326 *)NULL, /*hidden argument*/&Object_op_Equality_m1329_MethodInfo);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		Exception_t151 * L_1 = (Exception_t151 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Exception_t151_il2cpp_TypeInfo));
		Exception__ctor_m1700(L_1, (String_t*) &_stringLiteral458, /*hidden argument*/&Exception__ctor_m1700_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0017:
	{
		AnimationCurve_t240 * L_2 = (__this->___IncreaseCurve_5);
		if (L_2)
		{
			goto IL_002d;
		}
	}
	{
		Exception_t151 * L_3 = (Exception_t151 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Exception_t151_il2cpp_TypeInfo));
		Exception__ctor_m1700(L_3, (String_t*) &_stringLiteral459, /*hidden argument*/&Exception__ctor_m1700_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_002d:
	{
		return;
	}
}
// System.Void UnityStandardAssets.Utility.FOVKick::ChangeCamera(UnityEngine.Camera)
extern MethodInfo FOVKick_ChangeCamera_m1147_MethodInfo;
 void FOVKick_ChangeCamera_m1147 (FOVKick_t340 * __this, Camera_t236 * ___camera, MethodInfo* method){
	{
		__this->___Camera_0 = ___camera;
		return;
	}
}
// System.Collections.IEnumerator UnityStandardAssets.Utility.FOVKick::FOVKickUp()
extern MethodInfo FOVKick_FOVKickUp_m1148_MethodInfo;
 Object_t * FOVKick_FOVKickUp_m1148 (FOVKick_t340 * __this, MethodInfo* method){
	U3CFOVKickUpU3Ec__Iterator8_t341 * V_0 = {0};
	{
		U3CFOVKickUpU3Ec__Iterator8_t341 * L_0 = (U3CFOVKickUpU3Ec__Iterator8_t341 *)il2cpp_codegen_object_new (InitializedTypeInfo(&U3CFOVKickUpU3Ec__Iterator8_t341_il2cpp_TypeInfo));
		U3CFOVKickUpU3Ec__Iterator8__ctor_m1132(L_0, /*hidden argument*/&U3CFOVKickUpU3Ec__Iterator8__ctor_m1132_MethodInfo);
		V_0 = L_0;
		NullCheck(V_0);
		V_0->___U3CU3Ef__this_3 = __this;
		return V_0;
	}
}
// System.Collections.IEnumerator UnityStandardAssets.Utility.FOVKick::FOVKickDown()
extern MethodInfo FOVKick_FOVKickDown_m1149_MethodInfo;
 Object_t * FOVKick_FOVKickDown_m1149 (FOVKick_t340 * __this, MethodInfo* method){
	U3CFOVKickDownU3Ec__Iterator9_t342 * V_0 = {0};
	{
		U3CFOVKickDownU3Ec__Iterator9_t342 * L_0 = (U3CFOVKickDownU3Ec__Iterator9_t342 *)il2cpp_codegen_object_new (InitializedTypeInfo(&U3CFOVKickDownU3Ec__Iterator9_t342_il2cpp_TypeInfo));
		U3CFOVKickDownU3Ec__Iterator9__ctor_m1138(L_0, /*hidden argument*/&U3CFOVKickDownU3Ec__Iterator9__ctor_m1138_MethodInfo);
		V_0 = L_0;
		NullCheck(V_0);
		V_0->___U3CU3Ef__this_3 = __this;
		return V_0;
	}
}
// Metadata Definition UnityStandardAssets.Utility.FOVKick
extern Il2CppType Camera_t236_0_0_6;
FieldInfo FOVKick_t340____Camera_0_FieldInfo = 
{
	"Camera"/* name */
	, &Camera_t236_0_0_6/* type */
	, &FOVKick_t340_il2cpp_TypeInfo/* parent */
	, offsetof(FOVKick_t340, ___Camera_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Single_t448_0_0_6;
extern CustomAttributesCache FOVKick_t340__CustomAttributeCache_originalFov;
FieldInfo FOVKick_t340____originalFov_1_FieldInfo = 
{
	"originalFov"/* name */
	, &Single_t448_0_0_6/* type */
	, &FOVKick_t340_il2cpp_TypeInfo/* parent */
	, offsetof(FOVKick_t340, ___originalFov_1)/* data */
	, &FOVKick_t340__CustomAttributeCache_originalFov/* custom_attributes_cache */

};
extern Il2CppType Single_t448_0_0_6;
FieldInfo FOVKick_t340____FOVIncrease_2_FieldInfo = 
{
	"FOVIncrease"/* name */
	, &Single_t448_0_0_6/* type */
	, &FOVKick_t340_il2cpp_TypeInfo/* parent */
	, offsetof(FOVKick_t340, ___FOVIncrease_2)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Single_t448_0_0_6;
FieldInfo FOVKick_t340____TimeToIncrease_3_FieldInfo = 
{
	"TimeToIncrease"/* name */
	, &Single_t448_0_0_6/* type */
	, &FOVKick_t340_il2cpp_TypeInfo/* parent */
	, offsetof(FOVKick_t340, ___TimeToIncrease_3)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Single_t448_0_0_6;
FieldInfo FOVKick_t340____TimeToDecrease_4_FieldInfo = 
{
	"TimeToDecrease"/* name */
	, &Single_t448_0_0_6/* type */
	, &FOVKick_t340_il2cpp_TypeInfo/* parent */
	, offsetof(FOVKick_t340, ___TimeToDecrease_4)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType AnimationCurve_t240_0_0_6;
FieldInfo FOVKick_t340____IncreaseCurve_5_FieldInfo = 
{
	"IncreaseCurve"/* name */
	, &AnimationCurve_t240_0_0_6/* type */
	, &FOVKick_t340_il2cpp_TypeInfo/* parent */
	, offsetof(FOVKick_t340, ___IncreaseCurve_5)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* FOVKick_t340_FieldInfos[] =
{
	&FOVKick_t340____Camera_0_FieldInfo,
	&FOVKick_t340____originalFov_1_FieldInfo,
	&FOVKick_t340____FOVIncrease_2_FieldInfo,
	&FOVKick_t340____TimeToIncrease_3_FieldInfo,
	&FOVKick_t340____TimeToDecrease_4_FieldInfo,
	&FOVKick_t340____IncreaseCurve_5_FieldInfo,
	NULL
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
// System.Void UnityStandardAssets.Utility.FOVKick::.ctor()
MethodInfo FOVKick__ctor_m1144_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&FOVKick__ctor_m1144/* method */
	, &FOVKick_t340_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1227/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Camera_t236_0_0_0;
static ParameterInfo FOVKick_t340_FOVKick_Setup_m1145_ParameterInfos[] = 
{
	{"camera", 0, 134218769, &EmptyCustomAttributesCache, &Camera_t236_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityStandardAssets.Utility.FOVKick::Setup(UnityEngine.Camera)
MethodInfo FOVKick_Setup_m1145_MethodInfo = 
{
	"Setup"/* name */
	, (methodPointerType)&FOVKick_Setup_m1145/* method */
	, &FOVKick_t340_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t/* invoker_method */
	, FOVKick_t340_FOVKick_Setup_m1145_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1228/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Camera_t236_0_0_0;
static ParameterInfo FOVKick_t340_FOVKick_CheckStatus_m1146_ParameterInfos[] = 
{
	{"camera", 0, 134218770, &EmptyCustomAttributesCache, &Camera_t236_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityStandardAssets.Utility.FOVKick::CheckStatus(UnityEngine.Camera)
MethodInfo FOVKick_CheckStatus_m1146_MethodInfo = 
{
	"CheckStatus"/* name */
	, (methodPointerType)&FOVKick_CheckStatus_m1146/* method */
	, &FOVKick_t340_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t/* invoker_method */
	, FOVKick_t340_FOVKick_CheckStatus_m1146_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1229/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Camera_t236_0_0_0;
static ParameterInfo FOVKick_t340_FOVKick_ChangeCamera_m1147_ParameterInfos[] = 
{
	{"camera", 0, 134218771, &EmptyCustomAttributesCache, &Camera_t236_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityStandardAssets.Utility.FOVKick::ChangeCamera(UnityEngine.Camera)
MethodInfo FOVKick_ChangeCamera_m1147_MethodInfo = 
{
	"ChangeCamera"/* name */
	, (methodPointerType)&FOVKick_ChangeCamera_m1147/* method */
	, &FOVKick_t340_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Object_t/* invoker_method */
	, FOVKick_t340_FOVKick_ChangeCamera_m1147_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1230/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType IEnumerator_t26_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache FOVKick_t340__CustomAttributeCache_FOVKick_FOVKickUp_m1148;
// System.Collections.IEnumerator UnityStandardAssets.Utility.FOVKick::FOVKickUp()
MethodInfo FOVKick_FOVKickUp_m1148_MethodInfo = 
{
	"FOVKickUp"/* name */
	, (methodPointerType)&FOVKick_FOVKickUp_m1148/* method */
	, &FOVKick_t340_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_t26_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &FOVKick_t340__CustomAttributeCache_FOVKick_FOVKickUp_m1148/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1231/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType IEnumerator_t26_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache FOVKick_t340__CustomAttributeCache_FOVKick_FOVKickDown_m1149;
// System.Collections.IEnumerator UnityStandardAssets.Utility.FOVKick::FOVKickDown()
MethodInfo FOVKick_FOVKickDown_m1149_MethodInfo = 
{
	"FOVKickDown"/* name */
	, (methodPointerType)&FOVKick_FOVKickDown_m1149/* method */
	, &FOVKick_t340_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_t26_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &FOVKick_t340__CustomAttributeCache_FOVKick_FOVKickDown_m1149/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1232/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* FOVKick_t340_MethodInfos[] =
{
	&FOVKick__ctor_m1144_MethodInfo,
	&FOVKick_Setup_m1145_MethodInfo,
	&FOVKick_CheckStatus_m1146_MethodInfo,
	&FOVKick_ChangeCamera_m1147_MethodInfo,
	&FOVKick_FOVKickUp_m1148_MethodInfo,
	&FOVKick_FOVKickDown_m1149_MethodInfo,
	NULL
};
extern TypeInfo U3CFOVKickUpU3Ec__Iterator8_t341_il2cpp_TypeInfo;
extern TypeInfo U3CFOVKickDownU3Ec__Iterator9_t342_il2cpp_TypeInfo;
static TypeInfo* FOVKick_t340_il2cpp_TypeInfo__nestedTypes[3] =
{
	&U3CFOVKickUpU3Ec__Iterator8_t341_il2cpp_TypeInfo,
	&U3CFOVKickDownU3Ec__Iterator9_t342_il2cpp_TypeInfo,
	NULL
};
static MethodInfo* FOVKick_t340_VTable[] =
{
	&Object_Equals_m1252_MethodInfo,
	&Object_Finalize_m1253_MethodInfo,
	&Object_GetHashCode_m1254_MethodInfo,
	&Object_ToString_m1255_MethodInfo,
};
extern TypeInfo HideInInspector_t547_il2cpp_TypeInfo;
extern MethodInfo HideInInspector__ctor_m2132_MethodInfo;
void FOVKick_t340_CustomAttributesCacheGenerator_originalFov(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		HideInInspector_t547 * tmp;
		tmp = (HideInInspector_t547 *)il2cpp_codegen_object_new (&HideInInspector_t547_il2cpp_TypeInfo);
		HideInInspector__ctor_m2132(tmp, &HideInInspector__ctor_m2132_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void FOVKick_t340_CustomAttributesCacheGenerator_FOVKick_FOVKickUp_m1148(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t447 * tmp;
		tmp = (DebuggerHiddenAttribute_t447 *)il2cpp_codegen_object_new (&DebuggerHiddenAttribute_t447_il2cpp_TypeInfo);
		DebuggerHiddenAttribute__ctor_m1446(tmp, &DebuggerHiddenAttribute__ctor_m1446_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void FOVKick_t340_CustomAttributesCacheGenerator_FOVKick_FOVKickDown_m1149(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t447 * tmp;
		tmp = (DebuggerHiddenAttribute_t447 *)il2cpp_codegen_object_new (&DebuggerHiddenAttribute_t447_il2cpp_TypeInfo);
		DebuggerHiddenAttribute__ctor_m1446(tmp, &DebuggerHiddenAttribute__ctor_m1446_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache FOVKick_t340__CustomAttributeCache_originalFov = {
1,
NULL,
&FOVKick_t340_CustomAttributesCacheGenerator_originalFov
};
CustomAttributesCache FOVKick_t340__CustomAttributeCache_FOVKick_FOVKickUp_m1148 = {
1,
NULL,
&FOVKick_t340_CustomAttributesCacheGenerator_FOVKick_FOVKickUp_m1148
};
CustomAttributesCache FOVKick_t340__CustomAttributeCache_FOVKick_FOVKickDown_m1149 = {
1,
NULL,
&FOVKick_t340_CustomAttributesCacheGenerator_FOVKick_FOVKickDown_m1149
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType FOVKick_t340_0_0_0;
extern Il2CppType FOVKick_t340_1_0_0;
struct FOVKick_t340;
extern CustomAttributesCache FOVKick_t340__CustomAttributeCache_originalFov;
extern CustomAttributesCache FOVKick_t340__CustomAttributeCache_FOVKick_FOVKickUp_m1148;
extern CustomAttributesCache FOVKick_t340__CustomAttributeCache_FOVKick_FOVKickDown_m1149;
TypeInfo FOVKick_t340_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image/* image */
	, NULL/* gc_desc */
	, "FOVKick"/* name */
	, "UnityStandardAssets.Utility"/* namespaze */
	, FOVKick_t340_MethodInfos/* methods */
	, NULL/* properties */
	, FOVKick_t340_FieldInfos/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, FOVKick_t340_il2cpp_TypeInfo__nestedTypes/* nested_types */
	, NULL/* nested_in */
	, &FOVKick_t340_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, FOVKick_t340_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &FOVKick_t340_il2cpp_TypeInfo/* cast_class */
	, &FOVKick_t340_0_0_0/* byval_arg */
	, &FOVKick_t340_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (FOVKick_t340)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1056769/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 6/* method_count */
	, 0/* property_count */
	, 6/* field_count */
	, 0/* event_count */
	, 2/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo FPSCounter_t344_il2cpp_TypeInfo;

extern MethodInfo Component_GetComponent_TisGUIText_t343_m2133_MethodInfo;
extern MethodInfo String_Format_m2134_MethodInfo;
extern MethodInfo GUIText_set_text_m2135_MethodInfo;
struct Component_t507;
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.GUIText>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.GUIText>()
#define Component_GetComponent_TisGUIText_t343_m2133(__this, method) (GUIText_t343 *)Component_GetComponent_TisObject_t_m1761_gshared((Component_t507 *)__this, method)


// System.Void UnityStandardAssets.Utility.FPSCounter::.ctor()
extern MethodInfo FPSCounter__ctor_m1150_MethodInfo;
 void FPSCounter__ctor_m1150 (FPSCounter_t344 * __this, MethodInfo* method){
	{
		MonoBehaviour__ctor_m1402(__this, /*hidden argument*/&MonoBehaviour__ctor_m1402_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.FPSCounter::Start()
extern MethodInfo FPSCounter_Start_m1151_MethodInfo;
 void FPSCounter_Start_m1151 (FPSCounter_t344 * __this, MethodInfo* method){
	{
		float L_0 = Time_get_realtimeSinceStartup_m2093(NULL /*static, unused*/, /*hidden argument*/&Time_get_realtimeSinceStartup_m2093_MethodInfo);
		__this->___m_FpsNextPeriod_5 = ((float)(L_0+(0.5f)));
		GUIText_t343 * L_1 = Component_GetComponent_TisGUIText_t343_m2133(__this, /*hidden argument*/&Component_GetComponent_TisGUIText_t343_m2133_MethodInfo);
		__this->___m_GuiText_7 = L_1;
		return;
	}
}
// System.Void UnityStandardAssets.Utility.FPSCounter::Update()
extern MethodInfo FPSCounter_Update_m1152_MethodInfo;
 void FPSCounter_Update_m1152 (FPSCounter_t344 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->___m_FpsAccumulator_4);
		__this->___m_FpsAccumulator_4 = ((int32_t)(L_0+1));
		float L_1 = Time_get_realtimeSinceStartup_m2093(NULL /*static, unused*/, /*hidden argument*/&Time_get_realtimeSinceStartup_m2093_MethodInfo);
		float L_2 = (__this->___m_FpsNextPeriod_5);
		if ((((float)L_1) <= ((float)L_2)))
		{
			goto IL_006b;
		}
	}
	{
		int32_t L_3 = (__this->___m_FpsAccumulator_4);
		__this->___m_CurrentFps_6 = (((int32_t)((float)((float)(((float)L_3))/(float)(0.5f)))));
		__this->___m_FpsAccumulator_4 = 0;
		float L_4 = (__this->___m_FpsNextPeriod_5);
		__this->___m_FpsNextPeriod_5 = ((float)(L_4+(0.5f)));
		GUIText_t343 * L_5 = (__this->___m_GuiText_7);
		int32_t L_6 = (__this->___m_CurrentFps_6);
		int32_t L_7 = L_6;
		Object_t * L_8 = Box(InitializedTypeInfo(&Int32_t386_il2cpp_TypeInfo), &L_7);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_9 = String_Format_m2134(NULL /*static, unused*/, (String_t*) &_stringLiteral460, L_8, /*hidden argument*/&String_Format_m2134_MethodInfo);
		NullCheck(L_5);
		GUIText_set_text_m2135(L_5, L_9, /*hidden argument*/&GUIText_set_text_m2135_MethodInfo);
	}

IL_006b:
	{
		return;
	}
}
// Metadata Definition UnityStandardAssets.Utility.FPSCounter
extern Il2CppType Single_t448_0_0_32849;
FieldInfo FPSCounter_t344____fpsMeasurePeriod_2_FieldInfo = 
{
	"fpsMeasurePeriod"/* name */
	, &Single_t448_0_0_32849/* type */
	, &FPSCounter_t344_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType String_t_0_0_32849;
FieldInfo FPSCounter_t344____display_3_FieldInfo = 
{
	"display"/* name */
	, &String_t_0_0_32849/* type */
	, &FPSCounter_t344_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t386_0_0_1;
FieldInfo FPSCounter_t344____m_FpsAccumulator_4_FieldInfo = 
{
	"m_FpsAccumulator"/* name */
	, &Int32_t386_0_0_1/* type */
	, &FPSCounter_t344_il2cpp_TypeInfo/* parent */
	, offsetof(FPSCounter_t344, ___m_FpsAccumulator_4)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Single_t448_0_0_1;
FieldInfo FPSCounter_t344____m_FpsNextPeriod_5_FieldInfo = 
{
	"m_FpsNextPeriod"/* name */
	, &Single_t448_0_0_1/* type */
	, &FPSCounter_t344_il2cpp_TypeInfo/* parent */
	, offsetof(FPSCounter_t344, ___m_FpsNextPeriod_5)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t386_0_0_1;
FieldInfo FPSCounter_t344____m_CurrentFps_6_FieldInfo = 
{
	"m_CurrentFps"/* name */
	, &Int32_t386_0_0_1/* type */
	, &FPSCounter_t344_il2cpp_TypeInfo/* parent */
	, offsetof(FPSCounter_t344, ___m_CurrentFps_6)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType GUIText_t343_0_0_1;
FieldInfo FPSCounter_t344____m_GuiText_7_FieldInfo = 
{
	"m_GuiText"/* name */
	, &GUIText_t343_0_0_1/* type */
	, &FPSCounter_t344_il2cpp_TypeInfo/* parent */
	, offsetof(FPSCounter_t344, ___m_GuiText_7)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* FPSCounter_t344_FieldInfos[] =
{
	&FPSCounter_t344____fpsMeasurePeriod_2_FieldInfo,
	&FPSCounter_t344____display_3_FieldInfo,
	&FPSCounter_t344____m_FpsAccumulator_4_FieldInfo,
	&FPSCounter_t344____m_FpsNextPeriod_5_FieldInfo,
	&FPSCounter_t344____m_CurrentFps_6_FieldInfo,
	&FPSCounter_t344____m_GuiText_7_FieldInfo,
	NULL
};
static const float FPSCounter_t344____fpsMeasurePeriod_2_DefaultValueData = 0.5f;
static Il2CppFieldDefaultValueEntry FPSCounter_t344____fpsMeasurePeriod_2_DefaultValue = 
{
	&FPSCounter_t344____fpsMeasurePeriod_2_FieldInfo/* field */
	, { (char*)&FPSCounter_t344____fpsMeasurePeriod_2_DefaultValueData, &Single_t448_0_0_0 }/* value */

};
static const uint16_t FPSCounter_t344____display_3_DefaultValueData[] = { 0x7B, 0x30, 0x7D, 0x20, 0x46, 0x50, 0x53, 0x00 };
extern Il2CppType String_t_0_0_0;
static Il2CppFieldDefaultValueEntry FPSCounter_t344____display_3_DefaultValue = 
{
	&FPSCounter_t344____display_3_FieldInfo/* field */
	, { (char*)&FPSCounter_t344____display_3_DefaultValueData, &String_t_0_0_0 }/* value */

};
static Il2CppFieldDefaultValueEntry* FPSCounter_t344_FieldDefaultValues[] = 
{
	&FPSCounter_t344____fpsMeasurePeriod_2_DefaultValue,
	&FPSCounter_t344____display_3_DefaultValue,
	NULL
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
// System.Void UnityStandardAssets.Utility.FPSCounter::.ctor()
MethodInfo FPSCounter__ctor_m1150_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&FPSCounter__ctor_m1150/* method */
	, &FPSCounter_t344_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1245/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
// System.Void UnityStandardAssets.Utility.FPSCounter::Start()
MethodInfo FPSCounter_Start_m1151_MethodInfo = 
{
	"Start"/* name */
	, (methodPointerType)&FPSCounter_Start_m1151/* method */
	, &FPSCounter_t344_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1246/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
// System.Void UnityStandardAssets.Utility.FPSCounter::Update()
MethodInfo FPSCounter_Update_m1152_MethodInfo = 
{
	"Update"/* name */
	, (methodPointerType)&FPSCounter_Update_m1152/* method */
	, &FPSCounter_t344_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1247/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* FPSCounter_t344_MethodInfos[] =
{
	&FPSCounter__ctor_m1150_MethodInfo,
	&FPSCounter_Start_m1151_MethodInfo,
	&FPSCounter_Update_m1152_MethodInfo,
	NULL
};
static MethodInfo* FPSCounter_t344_VTable[] =
{
	&Object_Equals_m1333_MethodInfo,
	&Object_Finalize_m1253_MethodInfo,
	&Object_GetHashCode_m1334_MethodInfo,
	&Object_ToString_m1335_MethodInfo,
};
extern TypeInfo RequireComponent_t508_il2cpp_TypeInfo;
extern MethodInfo RequireComponent__ctor_m1762_MethodInfo;
extern TypeInfo GUIText_t343_il2cpp_TypeInfo;
void FPSCounter_t344_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		RequireComponent_t508 * tmp;
		tmp = (RequireComponent_t508 *)il2cpp_codegen_object_new (&RequireComponent_t508_il2cpp_TypeInfo);
		RequireComponent__ctor_m1762(tmp, il2cpp_codegen_type_get_object(InitializedTypeInfo(&GUIText_t343_il2cpp_TypeInfo)), &RequireComponent__ctor_m1762_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache FPSCounter_t344__CustomAttributeCache = {
1,
NULL,
&FPSCounter_t344_CustomAttributesCacheGenerator
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType FPSCounter_t344_0_0_0;
extern Il2CppType FPSCounter_t344_1_0_0;
struct FPSCounter_t344;
extern CustomAttributesCache FPSCounter_t344__CustomAttributeCache;
TypeInfo FPSCounter_t344_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image/* image */
	, NULL/* gc_desc */
	, "FPSCounter"/* name */
	, "UnityStandardAssets.Utility"/* namespaze */
	, FPSCounter_t344_MethodInfos/* methods */
	, NULL/* properties */
	, FPSCounter_t344_FieldInfos/* fields */
	, NULL/* events */
	, &MonoBehaviour_t39_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &FPSCounter_t344_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, FPSCounter_t344_VTable/* vtable */
	, &FPSCounter_t344__CustomAttributeCache/* custom_attributes_cache */
	, &FPSCounter_t344_il2cpp_TypeInfo/* cast_class */
	, &FPSCounter_t344_0_0_0/* byval_arg */
	, &FPSCounter_t344_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, FPSCounter_t344_FieldDefaultValues/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (FPSCounter_t344)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048577/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 3/* method_count */
	, 0/* property_count */
	, 6/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo FollowTarget_t345_il2cpp_TypeInfo;



// System.Void UnityStandardAssets.Utility.FollowTarget::.ctor()
extern MethodInfo FollowTarget__ctor_m1153_MethodInfo;
 void FollowTarget__ctor_m1153 (FollowTarget_t345 * __this, MethodInfo* method){
	{
		Vector3_t175  L_0 = {0};
		Vector3__ctor_m1758(&L_0, (0.0f), (7.5f), (0.0f), /*hidden argument*/&Vector3__ctor_m1758_MethodInfo);
		__this->___offset_3 = L_0;
		MonoBehaviour__ctor_m1402(__this, /*hidden argument*/&MonoBehaviour__ctor_m1402_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.FollowTarget::LateUpdate()
extern MethodInfo FollowTarget_LateUpdate_m1154_MethodInfo;
 void FollowTarget_LateUpdate_m1154 (FollowTarget_t345 * __this, MethodInfo* method){
	{
		Transform_t173 * L_0 = Component_get_transform_m1739(__this, /*hidden argument*/&Component_get_transform_m1739_MethodInfo);
		Transform_t173 * L_1 = (__this->___target_2);
		NullCheck(L_1);
		Vector3_t175  L_2 = Transform_get_position_m1738(L_1, /*hidden argument*/&Transform_get_position_m1738_MethodInfo);
		Vector3_t175  L_3 = (__this->___offset_3);
		Vector3_t175  L_4 = Vector3_op_Addition_m1750(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/&Vector3_op_Addition_m1750_MethodInfo);
		NullCheck(L_0);
		Transform_set_position_m1753(L_0, L_4, /*hidden argument*/&Transform_set_position_m1753_MethodInfo);
		return;
	}
}
// Metadata Definition UnityStandardAssets.Utility.FollowTarget
extern Il2CppType Transform_t173_0_0_6;
FieldInfo FollowTarget_t345____target_2_FieldInfo = 
{
	"target"/* name */
	, &Transform_t173_0_0_6/* type */
	, &FollowTarget_t345_il2cpp_TypeInfo/* parent */
	, offsetof(FollowTarget_t345, ___target_2)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Vector3_t175_0_0_6;
FieldInfo FollowTarget_t345____offset_3_FieldInfo = 
{
	"offset"/* name */
	, &Vector3_t175_0_0_6/* type */
	, &FollowTarget_t345_il2cpp_TypeInfo/* parent */
	, offsetof(FollowTarget_t345, ___offset_3)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* FollowTarget_t345_FieldInfos[] =
{
	&FollowTarget_t345____target_2_FieldInfo,
	&FollowTarget_t345____offset_3_FieldInfo,
	NULL
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
// System.Void UnityStandardAssets.Utility.FollowTarget::.ctor()
MethodInfo FollowTarget__ctor_m1153_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&FollowTarget__ctor_m1153/* method */
	, &FollowTarget_t345_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1248/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
// System.Void UnityStandardAssets.Utility.FollowTarget::LateUpdate()
MethodInfo FollowTarget_LateUpdate_m1154_MethodInfo = 
{
	"LateUpdate"/* name */
	, (methodPointerType)&FollowTarget_LateUpdate_m1154/* method */
	, &FollowTarget_t345_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1249/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* FollowTarget_t345_MethodInfos[] =
{
	&FollowTarget__ctor_m1153_MethodInfo,
	&FollowTarget_LateUpdate_m1154_MethodInfo,
	NULL
};
static MethodInfo* FollowTarget_t345_VTable[] =
{
	&Object_Equals_m1333_MethodInfo,
	&Object_Finalize_m1253_MethodInfo,
	&Object_GetHashCode_m1334_MethodInfo,
	&Object_ToString_m1335_MethodInfo,
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType FollowTarget_t345_0_0_0;
extern Il2CppType FollowTarget_t345_1_0_0;
struct FollowTarget_t345;
TypeInfo FollowTarget_t345_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image/* image */
	, NULL/* gc_desc */
	, "FollowTarget"/* name */
	, "UnityStandardAssets.Utility"/* namespaze */
	, FollowTarget_t345_MethodInfos/* methods */
	, NULL/* properties */
	, FollowTarget_t345_FieldInfos/* fields */
	, NULL/* events */
	, &MonoBehaviour_t39_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &FollowTarget_t345_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, FollowTarget_t345_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &FollowTarget_t345_il2cpp_TypeInfo/* cast_class */
	, &FollowTarget_t345_0_0_0/* byval_arg */
	, &FollowTarget_t345_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (FollowTarget_t345)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048577/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 2/* method_count */
	, 0/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ForcedReset_t346_il2cpp_TypeInfo;

extern TypeInfo CrossPlatformInputManager_t192_il2cpp_TypeInfo;
extern MethodInfo CrossPlatformInputManager_GetButtonDown_m763_MethodInfo;
extern MethodInfo Application_get_loadedLevelName_m1713_MethodInfo;
extern MethodInfo Application_LoadLevelAsync_m2136_MethodInfo;


// System.Void ForcedReset::.ctor()
extern MethodInfo ForcedReset__ctor_m1155_MethodInfo;
 void ForcedReset__ctor_m1155 (ForcedReset_t346 * __this, MethodInfo* method){
	{
		MonoBehaviour__ctor_m1402(__this, /*hidden argument*/&MonoBehaviour__ctor_m1402_MethodInfo);
		return;
	}
}
// System.Void ForcedReset::Update()
extern MethodInfo ForcedReset_Update_m1156_MethodInfo;
 void ForcedReset_Update_m1156 (ForcedReset_t346 * __this, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CrossPlatformInputManager_t192_il2cpp_TypeInfo));
		bool L_0 = CrossPlatformInputManager_GetButtonDown_m763(NULL /*static, unused*/, (String_t*) &_stringLiteral461, /*hidden argument*/&CrossPlatformInputManager_GetButtonDown_m763_MethodInfo);
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		String_t* L_1 = Application_get_loadedLevelName_m1713(NULL /*static, unused*/, /*hidden argument*/&Application_get_loadedLevelName_m1713_MethodInfo);
		Application_LoadLevelAsync_m2136(NULL /*static, unused*/, L_1, /*hidden argument*/&Application_LoadLevelAsync_m2136_MethodInfo);
	}

IL_001a:
	{
		return;
	}
}
// Metadata Definition ForcedReset
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
// System.Void ForcedReset::.ctor()
MethodInfo ForcedReset__ctor_m1155_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&ForcedReset__ctor_m1155/* method */
	, &ForcedReset_t346_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1250/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
// System.Void ForcedReset::Update()
MethodInfo ForcedReset_Update_m1156_MethodInfo = 
{
	"Update"/* name */
	, (methodPointerType)&ForcedReset_Update_m1156/* method */
	, &ForcedReset_t346_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1251/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* ForcedReset_t346_MethodInfos[] =
{
	&ForcedReset__ctor_m1155_MethodInfo,
	&ForcedReset_Update_m1156_MethodInfo,
	NULL
};
static MethodInfo* ForcedReset_t346_VTable[] =
{
	&Object_Equals_m1333_MethodInfo,
	&Object_Finalize_m1253_MethodInfo,
	&Object_GetHashCode_m1334_MethodInfo,
	&Object_ToString_m1335_MethodInfo,
};
extern TypeInfo GUITexture_t548_il2cpp_TypeInfo;
void ForcedReset_t346_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		RequireComponent_t508 * tmp;
		tmp = (RequireComponent_t508 *)il2cpp_codegen_object_new (&RequireComponent_t508_il2cpp_TypeInfo);
		RequireComponent__ctor_m1762(tmp, il2cpp_codegen_type_get_object(InitializedTypeInfo(&GUITexture_t548_il2cpp_TypeInfo)), &RequireComponent__ctor_m1762_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache ForcedReset_t346__CustomAttributeCache = {
1,
NULL,
&ForcedReset_t346_CustomAttributesCacheGenerator
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType ForcedReset_t346_0_0_0;
extern Il2CppType ForcedReset_t346_1_0_0;
struct ForcedReset_t346;
extern CustomAttributesCache ForcedReset_t346__CustomAttributeCache;
TypeInfo ForcedReset_t346_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image/* image */
	, NULL/* gc_desc */
	, "ForcedReset"/* name */
	, ""/* namespaze */
	, ForcedReset_t346_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MonoBehaviour_t39_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ForcedReset_t346_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, ForcedReset_t346_VTable/* vtable */
	, &ForcedReset_t346__CustomAttributeCache/* custom_attributes_cache */
	, &ForcedReset_t346_il2cpp_TypeInfo/* cast_class */
	, &ForcedReset_t346_0_0_0/* byval_arg */
	, &ForcedReset_t346_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (ForcedReset_t346)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048577/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
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
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo U3CDoBobCycleU3Ec__IteratorA_t348_il2cpp_TypeInfo;

extern TypeInfo LerpControlledBob_t347_il2cpp_TypeInfo;
extern TypeInfo WaitForFixedUpdate_t549_il2cpp_TypeInfo;
extern MethodInfo WaitForFixedUpdate__ctor_m2137_MethodInfo;


// System.Void UnityStandardAssets.Utility.LerpControlledBob/<DoBobCycle>c__IteratorA::.ctor()
extern MethodInfo U3CDoBobCycleU3Ec__IteratorA__ctor_m1157_MethodInfo;
 void U3CDoBobCycleU3Ec__IteratorA__ctor_m1157 (U3CDoBobCycleU3Ec__IteratorA_t348 * __this, MethodInfo* method){
	{
		Object__ctor_m1260(__this, /*hidden argument*/&Object__ctor_m1260_MethodInfo);
		return;
	}
}
// System.Object UnityStandardAssets.Utility.LerpControlledBob/<DoBobCycle>c__IteratorA::System.Collections.Generic.IEnumerator<object>.get_Current()
extern MethodInfo U3CDoBobCycleU3Ec__IteratorA_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1158_MethodInfo;
 Object_t * U3CDoBobCycleU3Ec__IteratorA_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1158 (U3CDoBobCycleU3Ec__IteratorA_t348 * __this, MethodInfo* method){
	{
		Object_t * L_0 = (__this->___$current_2);
		return L_0;
	}
}
// System.Object UnityStandardAssets.Utility.LerpControlledBob/<DoBobCycle>c__IteratorA::System.Collections.IEnumerator.get_Current()
extern MethodInfo U3CDoBobCycleU3Ec__IteratorA_System_Collections_IEnumerator_get_Current_m1159_MethodInfo;
 Object_t * U3CDoBobCycleU3Ec__IteratorA_System_Collections_IEnumerator_get_Current_m1159 (U3CDoBobCycleU3Ec__IteratorA_t348 * __this, MethodInfo* method){
	{
		Object_t * L_0 = (__this->___$current_2);
		return L_0;
	}
}
// System.Boolean UnityStandardAssets.Utility.LerpControlledBob/<DoBobCycle>c__IteratorA::MoveNext()
extern MethodInfo U3CDoBobCycleU3Ec__IteratorA_MoveNext_m1160_MethodInfo;
 bool U3CDoBobCycleU3Ec__IteratorA_MoveNext_m1160 (U3CDoBobCycleU3Ec__IteratorA_t348 * __this, MethodInfo* method){
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = (__this->___$PC_1);
		V_0 = L_0;
		__this->___$PC_1 = (-1);
		if (V_0 == 0)
		{
			goto IL_0025;
		}
		if (V_0 == 1)
		{
			goto IL_0090;
		}
		if (V_0 == 2)
		{
			goto IL_0111;
		}
	}
	{
		goto IL_013e;
	}

IL_0025:
	{
		__this->___U3CtU3E__0_0 = (0.0f);
		goto IL_0090;
	}

IL_0035:
	{
		LerpControlledBob_t347 * L_1 = (__this->___U3CU3Ef__this_3);
		LerpControlledBob_t347 * L_2 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_2);
		float L_3 = (L_2->___BobAmount_1);
		float L_4 = (__this->___U3CtU3E__0_0);
		LerpControlledBob_t347 * L_5 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_5);
		float L_6 = (L_5->___BobDuration_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t505_il2cpp_TypeInfo));
		float L_7 = Mathf_Lerp_m1756(NULL /*static, unused*/, (0.0f), L_3, ((float)((float)L_4/(float)L_6)), /*hidden argument*/&Mathf_Lerp_m1756_MethodInfo);
		NullCheck(L_1);
		L_1->___m_Offset_2 = L_7;
		float L_8 = (__this->___U3CtU3E__0_0);
		float L_9 = Time_get_deltaTime_m1748(NULL /*static, unused*/, /*hidden argument*/&Time_get_deltaTime_m1748_MethodInfo);
		__this->___U3CtU3E__0_0 = ((float)(L_8+L_9));
		WaitForFixedUpdate_t549 * L_10 = (WaitForFixedUpdate_t549 *)il2cpp_codegen_object_new (InitializedTypeInfo(&WaitForFixedUpdate_t549_il2cpp_TypeInfo));
		WaitForFixedUpdate__ctor_m2137(L_10, /*hidden argument*/&WaitForFixedUpdate__ctor_m2137_MethodInfo);
		__this->___$current_2 = L_10;
		__this->___$PC_1 = 1;
		goto IL_0140;
	}

IL_0090:
	{
		float L_11 = (__this->___U3CtU3E__0_0);
		LerpControlledBob_t347 * L_12 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_12);
		float L_13 = (L_12->___BobDuration_0);
		if ((((float)L_11) < ((float)L_13)))
		{
			goto IL_0035;
		}
	}
	{
		__this->___U3CtU3E__0_0 = (0.0f);
		goto IL_0111;
	}

IL_00b6:
	{
		LerpControlledBob_t347 * L_14 = (__this->___U3CU3Ef__this_3);
		LerpControlledBob_t347 * L_15 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_15);
		float L_16 = (L_15->___BobAmount_1);
		float L_17 = (__this->___U3CtU3E__0_0);
		LerpControlledBob_t347 * L_18 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_18);
		float L_19 = (L_18->___BobDuration_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t505_il2cpp_TypeInfo));
		float L_20 = Mathf_Lerp_m1756(NULL /*static, unused*/, L_16, (0.0f), ((float)((float)L_17/(float)L_19)), /*hidden argument*/&Mathf_Lerp_m1756_MethodInfo);
		NullCheck(L_14);
		L_14->___m_Offset_2 = L_20;
		float L_21 = (__this->___U3CtU3E__0_0);
		float L_22 = Time_get_deltaTime_m1748(NULL /*static, unused*/, /*hidden argument*/&Time_get_deltaTime_m1748_MethodInfo);
		__this->___U3CtU3E__0_0 = ((float)(L_21+L_22));
		WaitForFixedUpdate_t549 * L_23 = (WaitForFixedUpdate_t549 *)il2cpp_codegen_object_new (InitializedTypeInfo(&WaitForFixedUpdate_t549_il2cpp_TypeInfo));
		WaitForFixedUpdate__ctor_m2137(L_23, /*hidden argument*/&WaitForFixedUpdate__ctor_m2137_MethodInfo);
		__this->___$current_2 = L_23;
		__this->___$PC_1 = 2;
		goto IL_0140;
	}

IL_0111:
	{
		float L_24 = (__this->___U3CtU3E__0_0);
		LerpControlledBob_t347 * L_25 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_25);
		float L_26 = (L_25->___BobDuration_0);
		if ((((float)L_24) < ((float)L_26)))
		{
			goto IL_00b6;
		}
	}
	{
		LerpControlledBob_t347 * L_27 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_27);
		L_27->___m_Offset_2 = (0.0f);
		__this->___$PC_1 = (-1);
	}

IL_013e:
	{
		return 0;
	}

IL_0140:
	{
		return 1;
	}
	// Dead block : IL_0142: ldloc.1
}
// System.Void UnityStandardAssets.Utility.LerpControlledBob/<DoBobCycle>c__IteratorA::Dispose()
extern MethodInfo U3CDoBobCycleU3Ec__IteratorA_Dispose_m1161_MethodInfo;
 void U3CDoBobCycleU3Ec__IteratorA_Dispose_m1161 (U3CDoBobCycleU3Ec__IteratorA_t348 * __this, MethodInfo* method){
	{
		__this->___$PC_1 = (-1);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.LerpControlledBob/<DoBobCycle>c__IteratorA::Reset()
extern MethodInfo U3CDoBobCycleU3Ec__IteratorA_Reset_m1162_MethodInfo;
 void U3CDoBobCycleU3Ec__IteratorA_Reset_m1162 (U3CDoBobCycleU3Ec__IteratorA_t348 * __this, MethodInfo* method){
	{
		NotSupportedException_t445 * L_0 = (NotSupportedException_t445 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t445_il2cpp_TypeInfo));
		NotSupportedException__ctor_m1445(L_0, /*hidden argument*/&NotSupportedException__ctor_m1445_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// Metadata Definition UnityStandardAssets.Utility.LerpControlledBob/<DoBobCycle>c__IteratorA
extern Il2CppType Single_t448_0_0_3;
FieldInfo U3CDoBobCycleU3Ec__IteratorA_t348____U3CtU3E__0_0_FieldInfo = 
{
	"<t>__0"/* name */
	, &Single_t448_0_0_3/* type */
	, &U3CDoBobCycleU3Ec__IteratorA_t348_il2cpp_TypeInfo/* parent */
	, offsetof(U3CDoBobCycleU3Ec__IteratorA_t348, ___U3CtU3E__0_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t386_0_0_3;
FieldInfo U3CDoBobCycleU3Ec__IteratorA_t348____$PC_1_FieldInfo = 
{
	"$PC"/* name */
	, &Int32_t386_0_0_3/* type */
	, &U3CDoBobCycleU3Ec__IteratorA_t348_il2cpp_TypeInfo/* parent */
	, offsetof(U3CDoBobCycleU3Ec__IteratorA_t348, ___$PC_1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Object_t_0_0_3;
FieldInfo U3CDoBobCycleU3Ec__IteratorA_t348____$current_2_FieldInfo = 
{
	"$current"/* name */
	, &Object_t_0_0_3/* type */
	, &U3CDoBobCycleU3Ec__IteratorA_t348_il2cpp_TypeInfo/* parent */
	, offsetof(U3CDoBobCycleU3Ec__IteratorA_t348, ___$current_2)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType LerpControlledBob_t347_0_0_3;
FieldInfo U3CDoBobCycleU3Ec__IteratorA_t348____U3CU3Ef__this_3_FieldInfo = 
{
	"<>f__this"/* name */
	, &LerpControlledBob_t347_0_0_3/* type */
	, &U3CDoBobCycleU3Ec__IteratorA_t348_il2cpp_TypeInfo/* parent */
	, offsetof(U3CDoBobCycleU3Ec__IteratorA_t348, ___U3CU3Ef__this_3)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* U3CDoBobCycleU3Ec__IteratorA_t348_FieldInfos[] =
{
	&U3CDoBobCycleU3Ec__IteratorA_t348____U3CtU3E__0_0_FieldInfo,
	&U3CDoBobCycleU3Ec__IteratorA_t348____$PC_1_FieldInfo,
	&U3CDoBobCycleU3Ec__IteratorA_t348____$current_2_FieldInfo,
	&U3CDoBobCycleU3Ec__IteratorA_t348____U3CU3Ef__this_3_FieldInfo,
	NULL
};
static PropertyInfo U3CDoBobCycleU3Ec__IteratorA_t348____System_Collections_Generic_IEnumeratorU3CobjectU3E_Current_PropertyInfo = 
{
	&U3CDoBobCycleU3Ec__IteratorA_t348_il2cpp_TypeInfo/* parent */
	, "System.Collections.Generic.IEnumerator<object>.Current"/* name */
	, &U3CDoBobCycleU3Ec__IteratorA_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1158_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo U3CDoBobCycleU3Ec__IteratorA_t348____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&U3CDoBobCycleU3Ec__IteratorA_t348_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &U3CDoBobCycleU3Ec__IteratorA_System_Collections_IEnumerator_get_Current_m1159_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* U3CDoBobCycleU3Ec__IteratorA_t348_PropertyInfos[] =
{
	&U3CDoBobCycleU3Ec__IteratorA_t348____System_Collections_Generic_IEnumeratorU3CobjectU3E_Current_PropertyInfo,
	&U3CDoBobCycleU3Ec__IteratorA_t348____System_Collections_IEnumerator_Current_PropertyInfo,
	NULL
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
// System.Void UnityStandardAssets.Utility.LerpControlledBob/<DoBobCycle>c__IteratorA::.ctor()
MethodInfo U3CDoBobCycleU3Ec__IteratorA__ctor_m1157_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&U3CDoBobCycleU3Ec__IteratorA__ctor_m1157/* method */
	, &U3CDoBobCycleU3Ec__IteratorA_t348_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1255/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache U3CDoBobCycleU3Ec__IteratorA_t348__CustomAttributeCache_U3CDoBobCycleU3Ec__IteratorA_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1158;
// System.Object UnityStandardAssets.Utility.LerpControlledBob/<DoBobCycle>c__IteratorA::System.Collections.Generic.IEnumerator<object>.get_Current()
MethodInfo U3CDoBobCycleU3Ec__IteratorA_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1158_MethodInfo = 
{
	"System.Collections.Generic.IEnumerator<object>.get_Current"/* name */
	, (methodPointerType)&U3CDoBobCycleU3Ec__IteratorA_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1158/* method */
	, &U3CDoBobCycleU3Ec__IteratorA_t348_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &U3CDoBobCycleU3Ec__IteratorA_t348__CustomAttributeCache_U3CDoBobCycleU3Ec__IteratorA_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1158/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1256/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache U3CDoBobCycleU3Ec__IteratorA_t348__CustomAttributeCache_U3CDoBobCycleU3Ec__IteratorA_System_Collections_IEnumerator_get_Current_m1159;
// System.Object UnityStandardAssets.Utility.LerpControlledBob/<DoBobCycle>c__IteratorA::System.Collections.IEnumerator.get_Current()
MethodInfo U3CDoBobCycleU3Ec__IteratorA_System_Collections_IEnumerator_get_Current_m1159_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&U3CDoBobCycleU3Ec__IteratorA_System_Collections_IEnumerator_get_Current_m1159/* method */
	, &U3CDoBobCycleU3Ec__IteratorA_t348_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &U3CDoBobCycleU3Ec__IteratorA_t348__CustomAttributeCache_U3CDoBobCycleU3Ec__IteratorA_System_Collections_IEnumerator_get_Current_m1159/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1257/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379 (MethodInfo* method, void* obj, void** args);
// System.Boolean UnityStandardAssets.Utility.LerpControlledBob/<DoBobCycle>c__IteratorA::MoveNext()
MethodInfo U3CDoBobCycleU3Ec__IteratorA_MoveNext_m1160_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&U3CDoBobCycleU3Ec__IteratorA_MoveNext_m1160/* method */
	, &U3CDoBobCycleU3Ec__IteratorA_t348_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t379_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t379/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1258/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache U3CDoBobCycleU3Ec__IteratorA_t348__CustomAttributeCache_U3CDoBobCycleU3Ec__IteratorA_Dispose_m1161;
// System.Void UnityStandardAssets.Utility.LerpControlledBob/<DoBobCycle>c__IteratorA::Dispose()
MethodInfo U3CDoBobCycleU3Ec__IteratorA_Dispose_m1161_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&U3CDoBobCycleU3Ec__IteratorA_Dispose_m1161/* method */
	, &U3CDoBobCycleU3Ec__IteratorA_t348_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &U3CDoBobCycleU3Ec__IteratorA_t348__CustomAttributeCache_U3CDoBobCycleU3Ec__IteratorA_Dispose_m1161/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1259/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache U3CDoBobCycleU3Ec__IteratorA_t348__CustomAttributeCache_U3CDoBobCycleU3Ec__IteratorA_Reset_m1162;
// System.Void UnityStandardAssets.Utility.LerpControlledBob/<DoBobCycle>c__IteratorA::Reset()
MethodInfo U3CDoBobCycleU3Ec__IteratorA_Reset_m1162_MethodInfo = 
{
	"Reset"/* name */
	, (methodPointerType)&U3CDoBobCycleU3Ec__IteratorA_Reset_m1162/* method */
	, &U3CDoBobCycleU3Ec__IteratorA_t348_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &U3CDoBobCycleU3Ec__IteratorA_t348__CustomAttributeCache_U3CDoBobCycleU3Ec__IteratorA_Reset_m1162/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1260/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* U3CDoBobCycleU3Ec__IteratorA_t348_MethodInfos[] =
{
	&U3CDoBobCycleU3Ec__IteratorA__ctor_m1157_MethodInfo,
	&U3CDoBobCycleU3Ec__IteratorA_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1158_MethodInfo,
	&U3CDoBobCycleU3Ec__IteratorA_System_Collections_IEnumerator_get_Current_m1159_MethodInfo,
	&U3CDoBobCycleU3Ec__IteratorA_MoveNext_m1160_MethodInfo,
	&U3CDoBobCycleU3Ec__IteratorA_Dispose_m1161_MethodInfo,
	&U3CDoBobCycleU3Ec__IteratorA_Reset_m1162_MethodInfo,
	NULL
};
static MethodInfo* U3CDoBobCycleU3Ec__IteratorA_t348_VTable[] =
{
	&Object_Equals_m1252_MethodInfo,
	&Object_Finalize_m1253_MethodInfo,
	&Object_GetHashCode_m1254_MethodInfo,
	&Object_ToString_m1255_MethodInfo,
	&U3CDoBobCycleU3Ec__IteratorA_Dispose_m1161_MethodInfo,
	&U3CDoBobCycleU3Ec__IteratorA_System_Collections_IEnumerator_get_Current_m1159_MethodInfo,
	&U3CDoBobCycleU3Ec__IteratorA_MoveNext_m1160_MethodInfo,
	&U3CDoBobCycleU3Ec__IteratorA_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1158_MethodInfo,
	&U3CDoBobCycleU3Ec__IteratorA_Reset_m1162_MethodInfo,
};
static TypeInfo* U3CDoBobCycleU3Ec__IteratorA_t348_InterfacesTypeInfos[] = 
{
	&IDisposable_t444_il2cpp_TypeInfo,
	&IEnumerator_t26_il2cpp_TypeInfo,
	&IEnumerator_1_t53_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair U3CDoBobCycleU3Ec__IteratorA_t348_InterfacesOffsets[] = 
{
	{ &IDisposable_t444_il2cpp_TypeInfo, 4},
	{ &IEnumerator_t26_il2cpp_TypeInfo, 5},
	{ &IEnumerator_1_t53_il2cpp_TypeInfo, 7},
};
void U3CDoBobCycleU3Ec__IteratorA_t348_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t384 * tmp;
		tmp = (CompilerGeneratedAttribute_t384 *)il2cpp_codegen_object_new (&CompilerGeneratedAttribute_t384_il2cpp_TypeInfo);
		CompilerGeneratedAttribute__ctor_m1269(tmp, &CompilerGeneratedAttribute__ctor_m1269_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void U3CDoBobCycleU3Ec__IteratorA_t348_CustomAttributesCacheGenerator_U3CDoBobCycleU3Ec__IteratorA_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1158(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t447 * tmp;
		tmp = (DebuggerHiddenAttribute_t447 *)il2cpp_codegen_object_new (&DebuggerHiddenAttribute_t447_il2cpp_TypeInfo);
		DebuggerHiddenAttribute__ctor_m1446(tmp, &DebuggerHiddenAttribute__ctor_m1446_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void U3CDoBobCycleU3Ec__IteratorA_t348_CustomAttributesCacheGenerator_U3CDoBobCycleU3Ec__IteratorA_System_Collections_IEnumerator_get_Current_m1159(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t447 * tmp;
		tmp = (DebuggerHiddenAttribute_t447 *)il2cpp_codegen_object_new (&DebuggerHiddenAttribute_t447_il2cpp_TypeInfo);
		DebuggerHiddenAttribute__ctor_m1446(tmp, &DebuggerHiddenAttribute__ctor_m1446_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void U3CDoBobCycleU3Ec__IteratorA_t348_CustomAttributesCacheGenerator_U3CDoBobCycleU3Ec__IteratorA_Dispose_m1161(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t447 * tmp;
		tmp = (DebuggerHiddenAttribute_t447 *)il2cpp_codegen_object_new (&DebuggerHiddenAttribute_t447_il2cpp_TypeInfo);
		DebuggerHiddenAttribute__ctor_m1446(tmp, &DebuggerHiddenAttribute__ctor_m1446_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void U3CDoBobCycleU3Ec__IteratorA_t348_CustomAttributesCacheGenerator_U3CDoBobCycleU3Ec__IteratorA_Reset_m1162(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t447 * tmp;
		tmp = (DebuggerHiddenAttribute_t447 *)il2cpp_codegen_object_new (&DebuggerHiddenAttribute_t447_il2cpp_TypeInfo);
		DebuggerHiddenAttribute__ctor_m1446(tmp, &DebuggerHiddenAttribute__ctor_m1446_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache U3CDoBobCycleU3Ec__IteratorA_t348__CustomAttributeCache = {
1,
NULL,
&U3CDoBobCycleU3Ec__IteratorA_t348_CustomAttributesCacheGenerator
};
CustomAttributesCache U3CDoBobCycleU3Ec__IteratorA_t348__CustomAttributeCache_U3CDoBobCycleU3Ec__IteratorA_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1158 = {
1,
NULL,
&U3CDoBobCycleU3Ec__IteratorA_t348_CustomAttributesCacheGenerator_U3CDoBobCycleU3Ec__IteratorA_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1158
};
CustomAttributesCache U3CDoBobCycleU3Ec__IteratorA_t348__CustomAttributeCache_U3CDoBobCycleU3Ec__IteratorA_System_Collections_IEnumerator_get_Current_m1159 = {
1,
NULL,
&U3CDoBobCycleU3Ec__IteratorA_t348_CustomAttributesCacheGenerator_U3CDoBobCycleU3Ec__IteratorA_System_Collections_IEnumerator_get_Current_m1159
};
CustomAttributesCache U3CDoBobCycleU3Ec__IteratorA_t348__CustomAttributeCache_U3CDoBobCycleU3Ec__IteratorA_Dispose_m1161 = {
1,
NULL,
&U3CDoBobCycleU3Ec__IteratorA_t348_CustomAttributesCacheGenerator_U3CDoBobCycleU3Ec__IteratorA_Dispose_m1161
};
CustomAttributesCache U3CDoBobCycleU3Ec__IteratorA_t348__CustomAttributeCache_U3CDoBobCycleU3Ec__IteratorA_Reset_m1162 = {
1,
NULL,
&U3CDoBobCycleU3Ec__IteratorA_t348_CustomAttributesCacheGenerator_U3CDoBobCycleU3Ec__IteratorA_Reset_m1162
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType U3CDoBobCycleU3Ec__IteratorA_t348_0_0_0;
extern Il2CppType U3CDoBobCycleU3Ec__IteratorA_t348_1_0_0;
struct U3CDoBobCycleU3Ec__IteratorA_t348;
extern CustomAttributesCache U3CDoBobCycleU3Ec__IteratorA_t348__CustomAttributeCache;
extern CustomAttributesCache U3CDoBobCycleU3Ec__IteratorA_t348__CustomAttributeCache_U3CDoBobCycleU3Ec__IteratorA_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1158;
extern CustomAttributesCache U3CDoBobCycleU3Ec__IteratorA_t348__CustomAttributeCache_U3CDoBobCycleU3Ec__IteratorA_System_Collections_IEnumerator_get_Current_m1159;
extern CustomAttributesCache U3CDoBobCycleU3Ec__IteratorA_t348__CustomAttributeCache_U3CDoBobCycleU3Ec__IteratorA_Dispose_m1161;
extern CustomAttributesCache U3CDoBobCycleU3Ec__IteratorA_t348__CustomAttributeCache_U3CDoBobCycleU3Ec__IteratorA_Reset_m1162;
TypeInfo U3CDoBobCycleU3Ec__IteratorA_t348_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image/* image */
	, NULL/* gc_desc */
	, "<DoBobCycle>c__IteratorA"/* name */
	, ""/* namespaze */
	, U3CDoBobCycleU3Ec__IteratorA_t348_MethodInfos/* methods */
	, U3CDoBobCycleU3Ec__IteratorA_t348_PropertyInfos/* properties */
	, U3CDoBobCycleU3Ec__IteratorA_t348_FieldInfos/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &LerpControlledBob_t347_il2cpp_TypeInfo/* nested_in */
	, &U3CDoBobCycleU3Ec__IteratorA_t348_il2cpp_TypeInfo/* element_class */
	, U3CDoBobCycleU3Ec__IteratorA_t348_InterfacesTypeInfos/* implemented_interfaces */
	, U3CDoBobCycleU3Ec__IteratorA_t348_VTable/* vtable */
	, &U3CDoBobCycleU3Ec__IteratorA_t348__CustomAttributeCache/* custom_attributes_cache */
	, &U3CDoBobCycleU3Ec__IteratorA_t348_il2cpp_TypeInfo/* cast_class */
	, &U3CDoBobCycleU3Ec__IteratorA_t348_0_0_0/* byval_arg */
	, &U3CDoBobCycleU3Ec__IteratorA_t348_1_0_0/* this_arg */
	, U3CDoBobCycleU3Ec__IteratorA_t348_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (U3CDoBobCycleU3Ec__IteratorA_t348)/* instance_size */
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
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 6/* method_count */
	, 2/* property_count */
	, 4/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 9/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Void UnityStandardAssets.Utility.LerpControlledBob::.ctor()
extern MethodInfo LerpControlledBob__ctor_m1163_MethodInfo;
 void LerpControlledBob__ctor_m1163 (LerpControlledBob_t347 * __this, MethodInfo* method){
	{
		Object__ctor_m1260(__this, /*hidden argument*/&Object__ctor_m1260_MethodInfo);
		return;
	}
}
// System.Single UnityStandardAssets.Utility.LerpControlledBob::Offset()
extern MethodInfo LerpControlledBob_Offset_m1164_MethodInfo;
 float LerpControlledBob_Offset_m1164 (LerpControlledBob_t347 * __this, MethodInfo* method){
	{
		float L_0 = (__this->___m_Offset_2);
		return L_0;
	}
}
// System.Collections.IEnumerator UnityStandardAssets.Utility.LerpControlledBob::DoBobCycle()
extern MethodInfo LerpControlledBob_DoBobCycle_m1165_MethodInfo;
 Object_t * LerpControlledBob_DoBobCycle_m1165 (LerpControlledBob_t347 * __this, MethodInfo* method){
	U3CDoBobCycleU3Ec__IteratorA_t348 * V_0 = {0};
	{
		U3CDoBobCycleU3Ec__IteratorA_t348 * L_0 = (U3CDoBobCycleU3Ec__IteratorA_t348 *)il2cpp_codegen_object_new (InitializedTypeInfo(&U3CDoBobCycleU3Ec__IteratorA_t348_il2cpp_TypeInfo));
		U3CDoBobCycleU3Ec__IteratorA__ctor_m1157(L_0, /*hidden argument*/&U3CDoBobCycleU3Ec__IteratorA__ctor_m1157_MethodInfo);
		V_0 = L_0;
		NullCheck(V_0);
		V_0->___U3CU3Ef__this_3 = __this;
		return V_0;
	}
}
// Metadata Definition UnityStandardAssets.Utility.LerpControlledBob
extern Il2CppType Single_t448_0_0_6;
FieldInfo LerpControlledBob_t347____BobDuration_0_FieldInfo = 
{
	"BobDuration"/* name */
	, &Single_t448_0_0_6/* type */
	, &LerpControlledBob_t347_il2cpp_TypeInfo/* parent */
	, offsetof(LerpControlledBob_t347, ___BobDuration_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Single_t448_0_0_6;
FieldInfo LerpControlledBob_t347____BobAmount_1_FieldInfo = 
{
	"BobAmount"/* name */
	, &Single_t448_0_0_6/* type */
	, &LerpControlledBob_t347_il2cpp_TypeInfo/* parent */
	, offsetof(LerpControlledBob_t347, ___BobAmount_1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Single_t448_0_0_1;
FieldInfo LerpControlledBob_t347____m_Offset_2_FieldInfo = 
{
	"m_Offset"/* name */
	, &Single_t448_0_0_1/* type */
	, &LerpControlledBob_t347_il2cpp_TypeInfo/* parent */
	, offsetof(LerpControlledBob_t347, ___m_Offset_2)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* LerpControlledBob_t347_FieldInfos[] =
{
	&LerpControlledBob_t347____BobDuration_0_FieldInfo,
	&LerpControlledBob_t347____BobAmount_1_FieldInfo,
	&LerpControlledBob_t347____m_Offset_2_FieldInfo,
	NULL
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
// System.Void UnityStandardAssets.Utility.LerpControlledBob::.ctor()
MethodInfo LerpControlledBob__ctor_m1163_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&LerpControlledBob__ctor_m1163/* method */
	, &LerpControlledBob_t347_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1252/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Single_t448_0_0_0;
extern void* RuntimeInvoker_Single_t448 (MethodInfo* method, void* obj, void** args);
// System.Single UnityStandardAssets.Utility.LerpControlledBob::Offset()
MethodInfo LerpControlledBob_Offset_m1164_MethodInfo = 
{
	"Offset"/* name */
	, (methodPointerType)&LerpControlledBob_Offset_m1164/* method */
	, &LerpControlledBob_t347_il2cpp_TypeInfo/* declaring_type */
	, &Single_t448_0_0_0/* return_type */
	, RuntimeInvoker_Single_t448/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1253/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType IEnumerator_t26_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache LerpControlledBob_t347__CustomAttributeCache_LerpControlledBob_DoBobCycle_m1165;
// System.Collections.IEnumerator UnityStandardAssets.Utility.LerpControlledBob::DoBobCycle()
MethodInfo LerpControlledBob_DoBobCycle_m1165_MethodInfo = 
{
	"DoBobCycle"/* name */
	, (methodPointerType)&LerpControlledBob_DoBobCycle_m1165/* method */
	, &LerpControlledBob_t347_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_t26_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &LerpControlledBob_t347__CustomAttributeCache_LerpControlledBob_DoBobCycle_m1165/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1254/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* LerpControlledBob_t347_MethodInfos[] =
{
	&LerpControlledBob__ctor_m1163_MethodInfo,
	&LerpControlledBob_Offset_m1164_MethodInfo,
	&LerpControlledBob_DoBobCycle_m1165_MethodInfo,
	NULL
};
extern TypeInfo U3CDoBobCycleU3Ec__IteratorA_t348_il2cpp_TypeInfo;
static TypeInfo* LerpControlledBob_t347_il2cpp_TypeInfo__nestedTypes[2] =
{
	&U3CDoBobCycleU3Ec__IteratorA_t348_il2cpp_TypeInfo,
	NULL
};
static MethodInfo* LerpControlledBob_t347_VTable[] =
{
	&Object_Equals_m1252_MethodInfo,
	&Object_Finalize_m1253_MethodInfo,
	&Object_GetHashCode_m1254_MethodInfo,
	&Object_ToString_m1255_MethodInfo,
};
void LerpControlledBob_t347_CustomAttributesCacheGenerator_LerpControlledBob_DoBobCycle_m1165(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t447 * tmp;
		tmp = (DebuggerHiddenAttribute_t447 *)il2cpp_codegen_object_new (&DebuggerHiddenAttribute_t447_il2cpp_TypeInfo);
		DebuggerHiddenAttribute__ctor_m1446(tmp, &DebuggerHiddenAttribute__ctor_m1446_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache LerpControlledBob_t347__CustomAttributeCache_LerpControlledBob_DoBobCycle_m1165 = {
1,
NULL,
&LerpControlledBob_t347_CustomAttributesCacheGenerator_LerpControlledBob_DoBobCycle_m1165
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType LerpControlledBob_t347_0_0_0;
extern Il2CppType LerpControlledBob_t347_1_0_0;
struct LerpControlledBob_t347;
extern CustomAttributesCache LerpControlledBob_t347__CustomAttributeCache_LerpControlledBob_DoBobCycle_m1165;
TypeInfo LerpControlledBob_t347_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image/* image */
	, NULL/* gc_desc */
	, "LerpControlledBob"/* name */
	, "UnityStandardAssets.Utility"/* namespaze */
	, LerpControlledBob_t347_MethodInfos/* methods */
	, NULL/* properties */
	, LerpControlledBob_t347_FieldInfos/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, LerpControlledBob_t347_il2cpp_TypeInfo__nestedTypes/* nested_types */
	, NULL/* nested_in */
	, &LerpControlledBob_t347_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, LerpControlledBob_t347_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &LerpControlledBob_t347_il2cpp_TypeInfo/* cast_class */
	, &LerpControlledBob_t347_0_0_0/* byval_arg */
	, &LerpControlledBob_t347_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (LerpControlledBob_t347)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1056769/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 3/* method_count */
	, 0/* property_count */
	, 3/* field_count */
	, 0/* event_count */
	, 1/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo U3CResetCoroutineU3Ec__IteratorB_t349_il2cpp_TypeInfo;

extern TypeInfo WaitForSeconds_t479_il2cpp_TypeInfo;
extern TypeInfo ObjectResetter_t311_il2cpp_TypeInfo;
extern TypeInfo List_1_t350_il2cpp_TypeInfo;
extern MethodInfo WaitForSeconds__ctor_m1585_MethodInfo;
extern MethodInfo Component_GetComponentsInChildren_TisTransform_t173_m2138_MethodInfo;
extern MethodInfo List_1_Contains_m2139_MethodInfo;
extern MethodInfo Transform_set_rotation_m1909_MethodInfo;
extern MethodInfo Rigidbody_set_velocity_m2140_MethodInfo;
extern MethodInfo Rigidbody_set_angularVelocity_m2141_MethodInfo;
struct Component_t507;
// Declaration !!0[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.Transform>()
// !!0[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.Transform>()
#define Component_GetComponentsInChildren_TisTransform_t173_m2138(__this, method) (TransformU5BU5D_t302*)Component_GetComponentsInChildren_TisObject_t_m2049_gshared((Component_t507 *)__this, method)


// System.Void UnityStandardAssets.Utility.ObjectResetter/<ResetCoroutine>c__IteratorB::.ctor()
extern MethodInfo U3CResetCoroutineU3Ec__IteratorB__ctor_m1166_MethodInfo;
 void U3CResetCoroutineU3Ec__IteratorB__ctor_m1166 (U3CResetCoroutineU3Ec__IteratorB_t349 * __this, MethodInfo* method){
	{
		Object__ctor_m1260(__this, /*hidden argument*/&Object__ctor_m1260_MethodInfo);
		return;
	}
}
// System.Object UnityStandardAssets.Utility.ObjectResetter/<ResetCoroutine>c__IteratorB::System.Collections.Generic.IEnumerator<object>.get_Current()
extern MethodInfo U3CResetCoroutineU3Ec__IteratorB_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1167_MethodInfo;
 Object_t * U3CResetCoroutineU3Ec__IteratorB_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1167 (U3CResetCoroutineU3Ec__IteratorB_t349 * __this, MethodInfo* method){
	{
		Object_t * L_0 = (__this->___$current_5);
		return L_0;
	}
}
// System.Object UnityStandardAssets.Utility.ObjectResetter/<ResetCoroutine>c__IteratorB::System.Collections.IEnumerator.get_Current()
extern MethodInfo U3CResetCoroutineU3Ec__IteratorB_System_Collections_IEnumerator_get_Current_m1168_MethodInfo;
 Object_t * U3CResetCoroutineU3Ec__IteratorB_System_Collections_IEnumerator_get_Current_m1168 (U3CResetCoroutineU3Ec__IteratorB_t349 * __this, MethodInfo* method){
	{
		Object_t * L_0 = (__this->___$current_5);
		return L_0;
	}
}
// System.Boolean UnityStandardAssets.Utility.ObjectResetter/<ResetCoroutine>c__IteratorB::MoveNext()
extern MethodInfo U3CResetCoroutineU3Ec__IteratorB_MoveNext_m1169_MethodInfo;
 bool U3CResetCoroutineU3Ec__IteratorB_MoveNext_m1169 (U3CResetCoroutineU3Ec__IteratorB_t349 * __this, MethodInfo* method){
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = (__this->___$PC_4);
		V_0 = L_0;
		__this->___$PC_4 = (-1);
		if (V_0 == 0)
		{
			goto IL_0021;
		}
		if (V_0 == 1)
		{
			goto IL_003e;
		}
	}
	{
		goto IL_0142;
	}

IL_0021:
	{
		float L_1 = (__this->___delay_0);
		WaitForSeconds_t479 * L_2 = (WaitForSeconds_t479 *)il2cpp_codegen_object_new (InitializedTypeInfo(&WaitForSeconds_t479_il2cpp_TypeInfo));
		WaitForSeconds__ctor_m1585(L_2, L_1, /*hidden argument*/&WaitForSeconds__ctor_m1585_MethodInfo);
		__this->___$current_5 = L_2;
		__this->___$PC_4 = 1;
		goto IL_0144;
	}

IL_003e:
	{
		ObjectResetter_t311 * L_3 = (__this->___U3CU3Ef__this_7);
		NullCheck(L_3);
		TransformU5BU5D_t302* L_4 = Component_GetComponentsInChildren_TisTransform_t173_m2138(L_3, /*hidden argument*/&Component_GetComponentsInChildren_TisTransform_t173_m2138_MethodInfo);
		__this->___U3C$s_75U3E__0_1 = L_4;
		__this->___U3C$s_76U3E__1_2 = 0;
		goto IL_00a3;
	}

IL_005b:
	{
		TransformU5BU5D_t302* L_5 = (__this->___U3C$s_75U3E__0_1);
		int32_t L_6 = (__this->___U3C$s_76U3E__1_2);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		__this->___U3CtU3E__2_3 = (*(Transform_t173 **)(Transform_t173 **)SZArrayLdElema(L_5, L_7));
		ObjectResetter_t311 * L_8 = (__this->___U3CU3Ef__this_7);
		NullCheck(L_8);
		List_1_t350 * L_9 = (L_8->___originalStructure_4);
		Transform_t173 * L_10 = (__this->___U3CtU3E__2_3);
		NullCheck(L_9);
		bool L_11 = (bool)VirtFuncInvoker1< bool, Transform_t173 * >::Invoke(&List_1_Contains_m2139_MethodInfo, L_9, L_10);
		if (L_11)
		{
			goto IL_0095;
		}
	}
	{
		Transform_t173 * L_12 = (__this->___U3CtU3E__2_3);
		NullCheck(L_12);
		Transform_set_parent_m1741(L_12, (Transform_t173 *)NULL, /*hidden argument*/&Transform_set_parent_m1741_MethodInfo);
	}

IL_0095:
	{
		int32_t L_13 = (__this->___U3C$s_76U3E__1_2);
		__this->___U3C$s_76U3E__1_2 = ((int32_t)(L_13+1));
	}

IL_00a3:
	{
		int32_t L_14 = (__this->___U3C$s_76U3E__1_2);
		TransformU5BU5D_t302* L_15 = (__this->___U3C$s_75U3E__0_1);
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)(((int32_t)(((Array_t *)L_15)->max_length))))))
		{
			goto IL_005b;
		}
	}
	{
		ObjectResetter_t311 * L_16 = (__this->___U3CU3Ef__this_7);
		NullCheck(L_16);
		Transform_t173 * L_17 = Component_get_transform_m1739(L_16, /*hidden argument*/&Component_get_transform_m1739_MethodInfo);
		ObjectResetter_t311 * L_18 = (__this->___U3CU3Ef__this_7);
		NullCheck(L_18);
		Vector3_t175  L_19 = (L_18->___originalPosition_2);
		NullCheck(L_17);
		Transform_set_position_m1753(L_17, L_19, /*hidden argument*/&Transform_set_position_m1753_MethodInfo);
		ObjectResetter_t311 * L_20 = (__this->___U3CU3Ef__this_7);
		NullCheck(L_20);
		Transform_t173 * L_21 = Component_get_transform_m1739(L_20, /*hidden argument*/&Component_get_transform_m1739_MethodInfo);
		ObjectResetter_t311 * L_22 = (__this->___U3CU3Ef__this_7);
		NullCheck(L_22);
		Quaternion_t299  L_23 = (L_22->___originalRotation_3);
		NullCheck(L_21);
		Transform_set_rotation_m1909(L_21, L_23, /*hidden argument*/&Transform_set_rotation_m1909_MethodInfo);
		ObjectResetter_t311 * L_24 = (__this->___U3CU3Ef__this_7);
		NullCheck(L_24);
		Rigidbody_t304 * L_25 = (L_24->___Rigidbody_5);
		bool L_26 = Object_op_Implicit_m1775(NULL /*static, unused*/, L_25, /*hidden argument*/&Object_op_Implicit_m1775_MethodInfo);
		if (!L_26)
		{
			goto IL_012b;
		}
	}
	{
		ObjectResetter_t311 * L_27 = (__this->___U3CU3Ef__this_7);
		NullCheck(L_27);
		Rigidbody_t304 * L_28 = (L_27->___Rigidbody_5);
		Vector3_t175  L_29 = Vector3_get_zero_m1747(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_zero_m1747_MethodInfo);
		NullCheck(L_28);
		Rigidbody_set_velocity_m2140(L_28, L_29, /*hidden argument*/&Rigidbody_set_velocity_m2140_MethodInfo);
		ObjectResetter_t311 * L_30 = (__this->___U3CU3Ef__this_7);
		NullCheck(L_30);
		Rigidbody_t304 * L_31 = (L_30->___Rigidbody_5);
		Vector3_t175  L_32 = Vector3_get_zero_m1747(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_zero_m1747_MethodInfo);
		NullCheck(L_31);
		Rigidbody_set_angularVelocity_m2141(L_31, L_32, /*hidden argument*/&Rigidbody_set_angularVelocity_m2141_MethodInfo);
	}

IL_012b:
	{
		ObjectResetter_t311 * L_33 = (__this->___U3CU3Ef__this_7);
		NullCheck(L_33);
		Component_SendMessage_m2045(L_33, (String_t*) &_stringLiteral462, /*hidden argument*/&Component_SendMessage_m2045_MethodInfo);
		__this->___$PC_4 = (-1);
	}

IL_0142:
	{
		return 0;
	}

IL_0144:
	{
		return 1;
	}
	// Dead block : IL_0146: ldloc.1
}
// System.Void UnityStandardAssets.Utility.ObjectResetter/<ResetCoroutine>c__IteratorB::Dispose()
extern MethodInfo U3CResetCoroutineU3Ec__IteratorB_Dispose_m1170_MethodInfo;
 void U3CResetCoroutineU3Ec__IteratorB_Dispose_m1170 (U3CResetCoroutineU3Ec__IteratorB_t349 * __this, MethodInfo* method){
	{
		__this->___$PC_4 = (-1);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.ObjectResetter/<ResetCoroutine>c__IteratorB::Reset()
extern MethodInfo U3CResetCoroutineU3Ec__IteratorB_Reset_m1171_MethodInfo;
 void U3CResetCoroutineU3Ec__IteratorB_Reset_m1171 (U3CResetCoroutineU3Ec__IteratorB_t349 * __this, MethodInfo* method){
	{
		NotSupportedException_t445 * L_0 = (NotSupportedException_t445 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t445_il2cpp_TypeInfo));
		NotSupportedException__ctor_m1445(L_0, /*hidden argument*/&NotSupportedException__ctor_m1445_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// Metadata Definition UnityStandardAssets.Utility.ObjectResetter/<ResetCoroutine>c__IteratorB
extern Il2CppType Single_t448_0_0_3;
FieldInfo U3CResetCoroutineU3Ec__IteratorB_t349____delay_0_FieldInfo = 
{
	"delay"/* name */
	, &Single_t448_0_0_3/* type */
	, &U3CResetCoroutineU3Ec__IteratorB_t349_il2cpp_TypeInfo/* parent */
	, offsetof(U3CResetCoroutineU3Ec__IteratorB_t349, ___delay_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TransformU5BU5D_t302_0_0_3;
FieldInfo U3CResetCoroutineU3Ec__IteratorB_t349____U3C$s_75U3E__0_1_FieldInfo = 
{
	"<$s_75>__0"/* name */
	, &TransformU5BU5D_t302_0_0_3/* type */
	, &U3CResetCoroutineU3Ec__IteratorB_t349_il2cpp_TypeInfo/* parent */
	, offsetof(U3CResetCoroutineU3Ec__IteratorB_t349, ___U3C$s_75U3E__0_1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t386_0_0_3;
FieldInfo U3CResetCoroutineU3Ec__IteratorB_t349____U3C$s_76U3E__1_2_FieldInfo = 
{
	"<$s_76>__1"/* name */
	, &Int32_t386_0_0_3/* type */
	, &U3CResetCoroutineU3Ec__IteratorB_t349_il2cpp_TypeInfo/* parent */
	, offsetof(U3CResetCoroutineU3Ec__IteratorB_t349, ___U3C$s_76U3E__1_2)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Transform_t173_0_0_3;
FieldInfo U3CResetCoroutineU3Ec__IteratorB_t349____U3CtU3E__2_3_FieldInfo = 
{
	"<t>__2"/* name */
	, &Transform_t173_0_0_3/* type */
	, &U3CResetCoroutineU3Ec__IteratorB_t349_il2cpp_TypeInfo/* parent */
	, offsetof(U3CResetCoroutineU3Ec__IteratorB_t349, ___U3CtU3E__2_3)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t386_0_0_3;
FieldInfo U3CResetCoroutineU3Ec__IteratorB_t349____$PC_4_FieldInfo = 
{
	"$PC"/* name */
	, &Int32_t386_0_0_3/* type */
	, &U3CResetCoroutineU3Ec__IteratorB_t349_il2cpp_TypeInfo/* parent */
	, offsetof(U3CResetCoroutineU3Ec__IteratorB_t349, ___$PC_4)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Object_t_0_0_3;
FieldInfo U3CResetCoroutineU3Ec__IteratorB_t349____$current_5_FieldInfo = 
{
	"$current"/* name */
	, &Object_t_0_0_3/* type */
	, &U3CResetCoroutineU3Ec__IteratorB_t349_il2cpp_TypeInfo/* parent */
	, offsetof(U3CResetCoroutineU3Ec__IteratorB_t349, ___$current_5)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Single_t448_0_0_3;
FieldInfo U3CResetCoroutineU3Ec__IteratorB_t349____U3C$U3Edelay_6_FieldInfo = 
{
	"<$>delay"/* name */
	, &Single_t448_0_0_3/* type */
	, &U3CResetCoroutineU3Ec__IteratorB_t349_il2cpp_TypeInfo/* parent */
	, offsetof(U3CResetCoroutineU3Ec__IteratorB_t349, ___U3C$U3Edelay_6)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType ObjectResetter_t311_0_0_3;
FieldInfo U3CResetCoroutineU3Ec__IteratorB_t349____U3CU3Ef__this_7_FieldInfo = 
{
	"<>f__this"/* name */
	, &ObjectResetter_t311_0_0_3/* type */
	, &U3CResetCoroutineU3Ec__IteratorB_t349_il2cpp_TypeInfo/* parent */
	, offsetof(U3CResetCoroutineU3Ec__IteratorB_t349, ___U3CU3Ef__this_7)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* U3CResetCoroutineU3Ec__IteratorB_t349_FieldInfos[] =
{
	&U3CResetCoroutineU3Ec__IteratorB_t349____delay_0_FieldInfo,
	&U3CResetCoroutineU3Ec__IteratorB_t349____U3C$s_75U3E__0_1_FieldInfo,
	&U3CResetCoroutineU3Ec__IteratorB_t349____U3C$s_76U3E__1_2_FieldInfo,
	&U3CResetCoroutineU3Ec__IteratorB_t349____U3CtU3E__2_3_FieldInfo,
	&U3CResetCoroutineU3Ec__IteratorB_t349____$PC_4_FieldInfo,
	&U3CResetCoroutineU3Ec__IteratorB_t349____$current_5_FieldInfo,
	&U3CResetCoroutineU3Ec__IteratorB_t349____U3C$U3Edelay_6_FieldInfo,
	&U3CResetCoroutineU3Ec__IteratorB_t349____U3CU3Ef__this_7_FieldInfo,
	NULL
};
static PropertyInfo U3CResetCoroutineU3Ec__IteratorB_t349____System_Collections_Generic_IEnumeratorU3CobjectU3E_Current_PropertyInfo = 
{
	&U3CResetCoroutineU3Ec__IteratorB_t349_il2cpp_TypeInfo/* parent */
	, "System.Collections.Generic.IEnumerator<object>.Current"/* name */
	, &U3CResetCoroutineU3Ec__IteratorB_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1167_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo U3CResetCoroutineU3Ec__IteratorB_t349____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&U3CResetCoroutineU3Ec__IteratorB_t349_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &U3CResetCoroutineU3Ec__IteratorB_System_Collections_IEnumerator_get_Current_m1168_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* U3CResetCoroutineU3Ec__IteratorB_t349_PropertyInfos[] =
{
	&U3CResetCoroutineU3Ec__IteratorB_t349____System_Collections_Generic_IEnumeratorU3CobjectU3E_Current_PropertyInfo,
	&U3CResetCoroutineU3Ec__IteratorB_t349____System_Collections_IEnumerator_Current_PropertyInfo,
	NULL
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
// System.Void UnityStandardAssets.Utility.ObjectResetter/<ResetCoroutine>c__IteratorB::.ctor()
MethodInfo U3CResetCoroutineU3Ec__IteratorB__ctor_m1166_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&U3CResetCoroutineU3Ec__IteratorB__ctor_m1166/* method */
	, &U3CResetCoroutineU3Ec__IteratorB_t349_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1265/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache U3CResetCoroutineU3Ec__IteratorB_t349__CustomAttributeCache_U3CResetCoroutineU3Ec__IteratorB_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1167;
// System.Object UnityStandardAssets.Utility.ObjectResetter/<ResetCoroutine>c__IteratorB::System.Collections.Generic.IEnumerator<object>.get_Current()
MethodInfo U3CResetCoroutineU3Ec__IteratorB_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1167_MethodInfo = 
{
	"System.Collections.Generic.IEnumerator<object>.get_Current"/* name */
	, (methodPointerType)&U3CResetCoroutineU3Ec__IteratorB_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1167/* method */
	, &U3CResetCoroutineU3Ec__IteratorB_t349_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &U3CResetCoroutineU3Ec__IteratorB_t349__CustomAttributeCache_U3CResetCoroutineU3Ec__IteratorB_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1167/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1266/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache U3CResetCoroutineU3Ec__IteratorB_t349__CustomAttributeCache_U3CResetCoroutineU3Ec__IteratorB_System_Collections_IEnumerator_get_Current_m1168;
// System.Object UnityStandardAssets.Utility.ObjectResetter/<ResetCoroutine>c__IteratorB::System.Collections.IEnumerator.get_Current()
MethodInfo U3CResetCoroutineU3Ec__IteratorB_System_Collections_IEnumerator_get_Current_m1168_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&U3CResetCoroutineU3Ec__IteratorB_System_Collections_IEnumerator_get_Current_m1168/* method */
	, &U3CResetCoroutineU3Ec__IteratorB_t349_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &U3CResetCoroutineU3Ec__IteratorB_t349__CustomAttributeCache_U3CResetCoroutineU3Ec__IteratorB_System_Collections_IEnumerator_get_Current_m1168/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1267/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379 (MethodInfo* method, void* obj, void** args);
// System.Boolean UnityStandardAssets.Utility.ObjectResetter/<ResetCoroutine>c__IteratorB::MoveNext()
MethodInfo U3CResetCoroutineU3Ec__IteratorB_MoveNext_m1169_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&U3CResetCoroutineU3Ec__IteratorB_MoveNext_m1169/* method */
	, &U3CResetCoroutineU3Ec__IteratorB_t349_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t379_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t379/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1268/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache U3CResetCoroutineU3Ec__IteratorB_t349__CustomAttributeCache_U3CResetCoroutineU3Ec__IteratorB_Dispose_m1170;
// System.Void UnityStandardAssets.Utility.ObjectResetter/<ResetCoroutine>c__IteratorB::Dispose()
MethodInfo U3CResetCoroutineU3Ec__IteratorB_Dispose_m1170_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&U3CResetCoroutineU3Ec__IteratorB_Dispose_m1170/* method */
	, &U3CResetCoroutineU3Ec__IteratorB_t349_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &U3CResetCoroutineU3Ec__IteratorB_t349__CustomAttributeCache_U3CResetCoroutineU3Ec__IteratorB_Dispose_m1170/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1269/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache U3CResetCoroutineU3Ec__IteratorB_t349__CustomAttributeCache_U3CResetCoroutineU3Ec__IteratorB_Reset_m1171;
// System.Void UnityStandardAssets.Utility.ObjectResetter/<ResetCoroutine>c__IteratorB::Reset()
MethodInfo U3CResetCoroutineU3Ec__IteratorB_Reset_m1171_MethodInfo = 
{
	"Reset"/* name */
	, (methodPointerType)&U3CResetCoroutineU3Ec__IteratorB_Reset_m1171/* method */
	, &U3CResetCoroutineU3Ec__IteratorB_t349_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &U3CResetCoroutineU3Ec__IteratorB_t349__CustomAttributeCache_U3CResetCoroutineU3Ec__IteratorB_Reset_m1171/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1270/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* U3CResetCoroutineU3Ec__IteratorB_t349_MethodInfos[] =
{
	&U3CResetCoroutineU3Ec__IteratorB__ctor_m1166_MethodInfo,
	&U3CResetCoroutineU3Ec__IteratorB_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1167_MethodInfo,
	&U3CResetCoroutineU3Ec__IteratorB_System_Collections_IEnumerator_get_Current_m1168_MethodInfo,
	&U3CResetCoroutineU3Ec__IteratorB_MoveNext_m1169_MethodInfo,
	&U3CResetCoroutineU3Ec__IteratorB_Dispose_m1170_MethodInfo,
	&U3CResetCoroutineU3Ec__IteratorB_Reset_m1171_MethodInfo,
	NULL
};
static MethodInfo* U3CResetCoroutineU3Ec__IteratorB_t349_VTable[] =
{
	&Object_Equals_m1252_MethodInfo,
	&Object_Finalize_m1253_MethodInfo,
	&Object_GetHashCode_m1254_MethodInfo,
	&Object_ToString_m1255_MethodInfo,
	&U3CResetCoroutineU3Ec__IteratorB_Dispose_m1170_MethodInfo,
	&U3CResetCoroutineU3Ec__IteratorB_System_Collections_IEnumerator_get_Current_m1168_MethodInfo,
	&U3CResetCoroutineU3Ec__IteratorB_MoveNext_m1169_MethodInfo,
	&U3CResetCoroutineU3Ec__IteratorB_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1167_MethodInfo,
	&U3CResetCoroutineU3Ec__IteratorB_Reset_m1171_MethodInfo,
};
static TypeInfo* U3CResetCoroutineU3Ec__IteratorB_t349_InterfacesTypeInfos[] = 
{
	&IDisposable_t444_il2cpp_TypeInfo,
	&IEnumerator_t26_il2cpp_TypeInfo,
	&IEnumerator_1_t53_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair U3CResetCoroutineU3Ec__IteratorB_t349_InterfacesOffsets[] = 
{
	{ &IDisposable_t444_il2cpp_TypeInfo, 4},
	{ &IEnumerator_t26_il2cpp_TypeInfo, 5},
	{ &IEnumerator_1_t53_il2cpp_TypeInfo, 7},
};
void U3CResetCoroutineU3Ec__IteratorB_t349_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t384 * tmp;
		tmp = (CompilerGeneratedAttribute_t384 *)il2cpp_codegen_object_new (&CompilerGeneratedAttribute_t384_il2cpp_TypeInfo);
		CompilerGeneratedAttribute__ctor_m1269(tmp, &CompilerGeneratedAttribute__ctor_m1269_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void U3CResetCoroutineU3Ec__IteratorB_t349_CustomAttributesCacheGenerator_U3CResetCoroutineU3Ec__IteratorB_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1167(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t447 * tmp;
		tmp = (DebuggerHiddenAttribute_t447 *)il2cpp_codegen_object_new (&DebuggerHiddenAttribute_t447_il2cpp_TypeInfo);
		DebuggerHiddenAttribute__ctor_m1446(tmp, &DebuggerHiddenAttribute__ctor_m1446_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void U3CResetCoroutineU3Ec__IteratorB_t349_CustomAttributesCacheGenerator_U3CResetCoroutineU3Ec__IteratorB_System_Collections_IEnumerator_get_Current_m1168(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t447 * tmp;
		tmp = (DebuggerHiddenAttribute_t447 *)il2cpp_codegen_object_new (&DebuggerHiddenAttribute_t447_il2cpp_TypeInfo);
		DebuggerHiddenAttribute__ctor_m1446(tmp, &DebuggerHiddenAttribute__ctor_m1446_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void U3CResetCoroutineU3Ec__IteratorB_t349_CustomAttributesCacheGenerator_U3CResetCoroutineU3Ec__IteratorB_Dispose_m1170(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t447 * tmp;
		tmp = (DebuggerHiddenAttribute_t447 *)il2cpp_codegen_object_new (&DebuggerHiddenAttribute_t447_il2cpp_TypeInfo);
		DebuggerHiddenAttribute__ctor_m1446(tmp, &DebuggerHiddenAttribute__ctor_m1446_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void U3CResetCoroutineU3Ec__IteratorB_t349_CustomAttributesCacheGenerator_U3CResetCoroutineU3Ec__IteratorB_Reset_m1171(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t447 * tmp;
		tmp = (DebuggerHiddenAttribute_t447 *)il2cpp_codegen_object_new (&DebuggerHiddenAttribute_t447_il2cpp_TypeInfo);
		DebuggerHiddenAttribute__ctor_m1446(tmp, &DebuggerHiddenAttribute__ctor_m1446_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache U3CResetCoroutineU3Ec__IteratorB_t349__CustomAttributeCache = {
1,
NULL,
&U3CResetCoroutineU3Ec__IteratorB_t349_CustomAttributesCacheGenerator
};
CustomAttributesCache U3CResetCoroutineU3Ec__IteratorB_t349__CustomAttributeCache_U3CResetCoroutineU3Ec__IteratorB_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1167 = {
1,
NULL,
&U3CResetCoroutineU3Ec__IteratorB_t349_CustomAttributesCacheGenerator_U3CResetCoroutineU3Ec__IteratorB_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1167
};
CustomAttributesCache U3CResetCoroutineU3Ec__IteratorB_t349__CustomAttributeCache_U3CResetCoroutineU3Ec__IteratorB_System_Collections_IEnumerator_get_Current_m1168 = {
1,
NULL,
&U3CResetCoroutineU3Ec__IteratorB_t349_CustomAttributesCacheGenerator_U3CResetCoroutineU3Ec__IteratorB_System_Collections_IEnumerator_get_Current_m1168
};
CustomAttributesCache U3CResetCoroutineU3Ec__IteratorB_t349__CustomAttributeCache_U3CResetCoroutineU3Ec__IteratorB_Dispose_m1170 = {
1,
NULL,
&U3CResetCoroutineU3Ec__IteratorB_t349_CustomAttributesCacheGenerator_U3CResetCoroutineU3Ec__IteratorB_Dispose_m1170
};
CustomAttributesCache U3CResetCoroutineU3Ec__IteratorB_t349__CustomAttributeCache_U3CResetCoroutineU3Ec__IteratorB_Reset_m1171 = {
1,
NULL,
&U3CResetCoroutineU3Ec__IteratorB_t349_CustomAttributesCacheGenerator_U3CResetCoroutineU3Ec__IteratorB_Reset_m1171
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType U3CResetCoroutineU3Ec__IteratorB_t349_0_0_0;
extern Il2CppType U3CResetCoroutineU3Ec__IteratorB_t349_1_0_0;
struct U3CResetCoroutineU3Ec__IteratorB_t349;
extern CustomAttributesCache U3CResetCoroutineU3Ec__IteratorB_t349__CustomAttributeCache;
extern CustomAttributesCache U3CResetCoroutineU3Ec__IteratorB_t349__CustomAttributeCache_U3CResetCoroutineU3Ec__IteratorB_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1167;
extern CustomAttributesCache U3CResetCoroutineU3Ec__IteratorB_t349__CustomAttributeCache_U3CResetCoroutineU3Ec__IteratorB_System_Collections_IEnumerator_get_Current_m1168;
extern CustomAttributesCache U3CResetCoroutineU3Ec__IteratorB_t349__CustomAttributeCache_U3CResetCoroutineU3Ec__IteratorB_Dispose_m1170;
extern CustomAttributesCache U3CResetCoroutineU3Ec__IteratorB_t349__CustomAttributeCache_U3CResetCoroutineU3Ec__IteratorB_Reset_m1171;
TypeInfo U3CResetCoroutineU3Ec__IteratorB_t349_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image/* image */
	, NULL/* gc_desc */
	, "<ResetCoroutine>c__IteratorB"/* name */
	, ""/* namespaze */
	, U3CResetCoroutineU3Ec__IteratorB_t349_MethodInfos/* methods */
	, U3CResetCoroutineU3Ec__IteratorB_t349_PropertyInfos/* properties */
	, U3CResetCoroutineU3Ec__IteratorB_t349_FieldInfos/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &ObjectResetter_t311_il2cpp_TypeInfo/* nested_in */
	, &U3CResetCoroutineU3Ec__IteratorB_t349_il2cpp_TypeInfo/* element_class */
	, U3CResetCoroutineU3Ec__IteratorB_t349_InterfacesTypeInfos/* implemented_interfaces */
	, U3CResetCoroutineU3Ec__IteratorB_t349_VTable/* vtable */
	, &U3CResetCoroutineU3Ec__IteratorB_t349__CustomAttributeCache/* custom_attributes_cache */
	, &U3CResetCoroutineU3Ec__IteratorB_t349_il2cpp_TypeInfo/* cast_class */
	, &U3CResetCoroutineU3Ec__IteratorB_t349_0_0_0/* byval_arg */
	, &U3CResetCoroutineU3Ec__IteratorB_t349_1_0_0/* this_arg */
	, U3CResetCoroutineU3Ec__IteratorB_t349_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (U3CResetCoroutineU3Ec__IteratorB_t349)/* instance_size */
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
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 6/* method_count */
	, 2/* property_count */
	, 8/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 9/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo List_1__ctor_m2142_MethodInfo;
extern MethodInfo Component_GetComponent_TisRigidbody_t304_m2143_MethodInfo;
extern MethodInfo ObjectResetter_ResetCoroutine_m1175_MethodInfo;
extern MethodInfo MonoBehaviour_StartCoroutine_m1596_MethodInfo;
struct Component_t507;
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
#define Component_GetComponent_TisRigidbody_t304_m2143(__this, method) (Rigidbody_t304 *)Component_GetComponent_TisObject_t_m1761_gshared((Component_t507 *)__this, method)


// System.Void UnityStandardAssets.Utility.ObjectResetter::.ctor()
extern MethodInfo ObjectResetter__ctor_m1172_MethodInfo;
 void ObjectResetter__ctor_m1172 (ObjectResetter_t311 * __this, MethodInfo* method){
	{
		MonoBehaviour__ctor_m1402(__this, /*hidden argument*/&MonoBehaviour__ctor_m1402_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.ObjectResetter::Start()
extern MethodInfo ObjectResetter_Start_m1173_MethodInfo;
 void ObjectResetter_Start_m1173 (ObjectResetter_t311 * __this, MethodInfo* method){
	{
		TransformU5BU5D_t302* L_0 = Component_GetComponentsInChildren_TisTransform_t173_m2138(__this, /*hidden argument*/&Component_GetComponentsInChildren_TisTransform_t173_m2138_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&List_1_t350_il2cpp_TypeInfo));
		List_1_t350 * L_1 = (List_1_t350 *)il2cpp_codegen_object_new (InitializedTypeInfo(&List_1_t350_il2cpp_TypeInfo));
		List_1__ctor_m2142(L_1, (Object_t*)(Object_t*)L_0, /*hidden argument*/&List_1__ctor_m2142_MethodInfo);
		__this->___originalStructure_4 = L_1;
		Transform_t173 * L_2 = Component_get_transform_m1739(__this, /*hidden argument*/&Component_get_transform_m1739_MethodInfo);
		NullCheck(L_2);
		Vector3_t175  L_3 = Transform_get_position_m1738(L_2, /*hidden argument*/&Transform_get_position_m1738_MethodInfo);
		__this->___originalPosition_2 = L_3;
		Transform_t173 * L_4 = Component_get_transform_m1739(__this, /*hidden argument*/&Component_get_transform_m1739_MethodInfo);
		NullCheck(L_4);
		Quaternion_t299  L_5 = Transform_get_rotation_m1908(L_4, /*hidden argument*/&Transform_get_rotation_m1908_MethodInfo);
		__this->___originalRotation_3 = L_5;
		Rigidbody_t304 * L_6 = Component_GetComponent_TisRigidbody_t304_m2143(__this, /*hidden argument*/&Component_GetComponent_TisRigidbody_t304_m2143_MethodInfo);
		__this->___Rigidbody_5 = L_6;
		return;
	}
}
// System.Void UnityStandardAssets.Utility.ObjectResetter::DelayedReset(System.Single)
 void ObjectResetter_DelayedReset_m1174 (ObjectResetter_t311 * __this, float ___delay, MethodInfo* method){
	{
		Object_t * L_0 = ObjectResetter_ResetCoroutine_m1175(__this, ___delay, /*hidden argument*/&ObjectResetter_ResetCoroutine_m1175_MethodInfo);
		MonoBehaviour_StartCoroutine_m1596(__this, L_0, /*hidden argument*/&MonoBehaviour_StartCoroutine_m1596_MethodInfo);
		return;
	}
}
// System.Collections.IEnumerator UnityStandardAssets.Utility.ObjectResetter::ResetCoroutine(System.Single)
 Object_t * ObjectResetter_ResetCoroutine_m1175 (ObjectResetter_t311 * __this, float ___delay, MethodInfo* method){
	U3CResetCoroutineU3Ec__IteratorB_t349 * V_0 = {0};
	{
		U3CResetCoroutineU3Ec__IteratorB_t349 * L_0 = (U3CResetCoroutineU3Ec__IteratorB_t349 *)il2cpp_codegen_object_new (InitializedTypeInfo(&U3CResetCoroutineU3Ec__IteratorB_t349_il2cpp_TypeInfo));
		U3CResetCoroutineU3Ec__IteratorB__ctor_m1166(L_0, /*hidden argument*/&U3CResetCoroutineU3Ec__IteratorB__ctor_m1166_MethodInfo);
		V_0 = L_0;
		NullCheck(V_0);
		V_0->___delay_0 = ___delay;
		NullCheck(V_0);
		V_0->___U3C$U3Edelay_6 = ___delay;
		NullCheck(V_0);
		V_0->___U3CU3Ef__this_7 = __this;
		return V_0;
	}
}
// Metadata Definition UnityStandardAssets.Utility.ObjectResetter
extern Il2CppType Vector3_t175_0_0_1;
FieldInfo ObjectResetter_t311____originalPosition_2_FieldInfo = 
{
	"originalPosition"/* name */
	, &Vector3_t175_0_0_1/* type */
	, &ObjectResetter_t311_il2cpp_TypeInfo/* parent */
	, offsetof(ObjectResetter_t311, ___originalPosition_2)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Quaternion_t299_0_0_1;
FieldInfo ObjectResetter_t311____originalRotation_3_FieldInfo = 
{
	"originalRotation"/* name */
	, &Quaternion_t299_0_0_1/* type */
	, &ObjectResetter_t311_il2cpp_TypeInfo/* parent */
	, offsetof(ObjectResetter_t311, ___originalRotation_3)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType List_1_t350_0_0_1;
FieldInfo ObjectResetter_t311____originalStructure_4_FieldInfo = 
{
	"originalStructure"/* name */
	, &List_1_t350_0_0_1/* type */
	, &ObjectResetter_t311_il2cpp_TypeInfo/* parent */
	, offsetof(ObjectResetter_t311, ___originalStructure_4)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Rigidbody_t304_0_0_1;
FieldInfo ObjectResetter_t311____Rigidbody_5_FieldInfo = 
{
	"Rigidbody"/* name */
	, &Rigidbody_t304_0_0_1/* type */
	, &ObjectResetter_t311_il2cpp_TypeInfo/* parent */
	, offsetof(ObjectResetter_t311, ___Rigidbody_5)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* ObjectResetter_t311_FieldInfos[] =
{
	&ObjectResetter_t311____originalPosition_2_FieldInfo,
	&ObjectResetter_t311____originalRotation_3_FieldInfo,
	&ObjectResetter_t311____originalStructure_4_FieldInfo,
	&ObjectResetter_t311____Rigidbody_5_FieldInfo,
	NULL
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
// System.Void UnityStandardAssets.Utility.ObjectResetter::.ctor()
MethodInfo ObjectResetter__ctor_m1172_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&ObjectResetter__ctor_m1172/* method */
	, &ObjectResetter_t311_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1261/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
// System.Void UnityStandardAssets.Utility.ObjectResetter::Start()
MethodInfo ObjectResetter_Start_m1173_MethodInfo = 
{
	"Start"/* name */
	, (methodPointerType)&ObjectResetter_Start_m1173/* method */
	, &ObjectResetter_t311_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1262/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Single_t448_0_0_0;
static ParameterInfo ObjectResetter_t311_ObjectResetter_DelayedReset_m1174_ParameterInfos[] = 
{
	{"delay", 0, 134218772, &EmptyCustomAttributesCache, &Single_t448_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Single_t448 (MethodInfo* method, void* obj, void** args);
// System.Void UnityStandardAssets.Utility.ObjectResetter::DelayedReset(System.Single)
MethodInfo ObjectResetter_DelayedReset_m1174_MethodInfo = 
{
	"DelayedReset"/* name */
	, (methodPointerType)&ObjectResetter_DelayedReset_m1174/* method */
	, &ObjectResetter_t311_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Single_t448/* invoker_method */
	, ObjectResetter_t311_ObjectResetter_DelayedReset_m1174_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1263/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Single_t448_0_0_0;
static ParameterInfo ObjectResetter_t311_ObjectResetter_ResetCoroutine_m1175_ParameterInfos[] = 
{
	{"delay", 0, 134218773, &EmptyCustomAttributesCache, &Single_t448_0_0_0},
};
extern Il2CppType IEnumerator_t26_0_0_0;
extern void* RuntimeInvoker_Object_t_Single_t448 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache ObjectResetter_t311__CustomAttributeCache_ObjectResetter_ResetCoroutine_m1175;
// System.Collections.IEnumerator UnityStandardAssets.Utility.ObjectResetter::ResetCoroutine(System.Single)
MethodInfo ObjectResetter_ResetCoroutine_m1175_MethodInfo = 
{
	"ResetCoroutine"/* name */
	, (methodPointerType)&ObjectResetter_ResetCoroutine_m1175/* method */
	, &ObjectResetter_t311_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_t26_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Single_t448/* invoker_method */
	, ObjectResetter_t311_ObjectResetter_ResetCoroutine_m1175_ParameterInfos/* parameters */
	, &ObjectResetter_t311__CustomAttributeCache_ObjectResetter_ResetCoroutine_m1175/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1264/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* ObjectResetter_t311_MethodInfos[] =
{
	&ObjectResetter__ctor_m1172_MethodInfo,
	&ObjectResetter_Start_m1173_MethodInfo,
	&ObjectResetter_DelayedReset_m1174_MethodInfo,
	&ObjectResetter_ResetCoroutine_m1175_MethodInfo,
	NULL
};
extern TypeInfo U3CResetCoroutineU3Ec__IteratorB_t349_il2cpp_TypeInfo;
static TypeInfo* ObjectResetter_t311_il2cpp_TypeInfo__nestedTypes[2] =
{
	&U3CResetCoroutineU3Ec__IteratorB_t349_il2cpp_TypeInfo,
	NULL
};
static MethodInfo* ObjectResetter_t311_VTable[] =
{
	&Object_Equals_m1333_MethodInfo,
	&Object_Finalize_m1253_MethodInfo,
	&Object_GetHashCode_m1334_MethodInfo,
	&Object_ToString_m1335_MethodInfo,
};
void ObjectResetter_t311_CustomAttributesCacheGenerator_ObjectResetter_ResetCoroutine_m1175(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t447 * tmp;
		tmp = (DebuggerHiddenAttribute_t447 *)il2cpp_codegen_object_new (&DebuggerHiddenAttribute_t447_il2cpp_TypeInfo);
		DebuggerHiddenAttribute__ctor_m1446(tmp, &DebuggerHiddenAttribute__ctor_m1446_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache ObjectResetter_t311__CustomAttributeCache_ObjectResetter_ResetCoroutine_m1175 = {
1,
NULL,
&ObjectResetter_t311_CustomAttributesCacheGenerator_ObjectResetter_ResetCoroutine_m1175
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType ObjectResetter_t311_0_0_0;
extern Il2CppType ObjectResetter_t311_1_0_0;
struct ObjectResetter_t311;
extern CustomAttributesCache ObjectResetter_t311__CustomAttributeCache_ObjectResetter_ResetCoroutine_m1175;
TypeInfo ObjectResetter_t311_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image/* image */
	, NULL/* gc_desc */
	, "ObjectResetter"/* name */
	, "UnityStandardAssets.Utility"/* namespaze */
	, ObjectResetter_t311_MethodInfos/* methods */
	, NULL/* properties */
	, ObjectResetter_t311_FieldInfos/* fields */
	, NULL/* events */
	, &MonoBehaviour_t39_il2cpp_TypeInfo/* parent */
	, ObjectResetter_t311_il2cpp_TypeInfo__nestedTypes/* nested_types */
	, NULL/* nested_in */
	, &ObjectResetter_t311_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, ObjectResetter_t311_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ObjectResetter_t311_il2cpp_TypeInfo/* cast_class */
	, &ObjectResetter_t311_0_0_0/* byval_arg */
	, &ObjectResetter_t311_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (ObjectResetter_t311)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048577/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 4/* method_count */
	, 0/* property_count */
	, 4/* field_count */
	, 0/* event_count */
	, 1/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo U3CStartU3Ec__IteratorC_t352_il2cpp_TypeInfo;

extern TypeInfo ParticleSystemDestroyer_t351_il2cpp_TypeInfo;
extern MethodInfo Mathf_Max_m1885_MethodInfo;
extern MethodInfo Random_Range_m1977_MethodInfo;
extern MethodInfo String_Concat_m1408_MethodInfo;
extern MethodInfo Component_BroadcastMessage_m2144_MethodInfo;
extern MethodInfo Object_Destroy_m1407_MethodInfo;


// System.Void UnityStandardAssets.Utility.ParticleSystemDestroyer/<Start>c__IteratorC::.ctor()
extern MethodInfo U3CStartU3Ec__IteratorC__ctor_m1176_MethodInfo;
 void U3CStartU3Ec__IteratorC__ctor_m1176 (U3CStartU3Ec__IteratorC_t352 * __this, MethodInfo* method){
	{
		Object__ctor_m1260(__this, /*hidden argument*/&Object__ctor_m1260_MethodInfo);
		return;
	}
}
// System.Object UnityStandardAssets.Utility.ParticleSystemDestroyer/<Start>c__IteratorC::System.Collections.Generic.IEnumerator<object>.get_Current()
extern MethodInfo U3CStartU3Ec__IteratorC_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1177_MethodInfo;
 Object_t * U3CStartU3Ec__IteratorC_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1177 (U3CStartU3Ec__IteratorC_t352 * __this, MethodInfo* method){
	{
		Object_t * L_0 = (__this->___$current_9);
		return L_0;
	}
}
// System.Object UnityStandardAssets.Utility.ParticleSystemDestroyer/<Start>c__IteratorC::System.Collections.IEnumerator.get_Current()
extern MethodInfo U3CStartU3Ec__IteratorC_System_Collections_IEnumerator_get_Current_m1178_MethodInfo;
 Object_t * U3CStartU3Ec__IteratorC_System_Collections_IEnumerator_get_Current_m1178 (U3CStartU3Ec__IteratorC_t352 * __this, MethodInfo* method){
	{
		Object_t * L_0 = (__this->___$current_9);
		return L_0;
	}
}
// System.Boolean UnityStandardAssets.Utility.ParticleSystemDestroyer/<Start>c__IteratorC::MoveNext()
extern MethodInfo U3CStartU3Ec__IteratorC_MoveNext_m1179_MethodInfo;
 bool U3CStartU3Ec__IteratorC_MoveNext_m1179 (U3CStartU3Ec__IteratorC_t352 * __this, MethodInfo* method){
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = (__this->___$PC_8);
		V_0 = L_0;
		__this->___$PC_8 = (-1);
		if (V_0 == 0)
		{
			goto IL_0025;
		}
		if (V_0 == 1)
		{
			goto IL_00e7;
		}
		if (V_0 == 2)
		{
			goto IL_01ac;
		}
	}
	{
		goto IL_01c3;
	}

IL_0025:
	{
		ParticleSystemDestroyer_t351 * L_1 = (__this->___U3CU3Ef__this_10);
		NullCheck(L_1);
		ParticleSystemU5BU5D_t312* L_2 = Component_GetComponentsInChildren_TisParticleSystem_t323_m2047(L_1, /*hidden argument*/&Component_GetComponentsInChildren_TisParticleSystem_t323_m2047_MethodInfo);
		__this->___U3CsystemsU3E__0_0 = L_2;
		ParticleSystemU5BU5D_t312* L_3 = (__this->___U3CsystemsU3E__0_0);
		__this->___U3C$s_77U3E__1_1 = L_3;
		__this->___U3C$s_78U3E__2_2 = 0;
		goto IL_0095;
	}

IL_004e:
	{
		ParticleSystemU5BU5D_t312* L_4 = (__this->___U3C$s_77U3E__1_1);
		int32_t L_5 = (__this->___U3C$s_78U3E__2_2);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		__this->___U3CsystemU3E__3_3 = (*(ParticleSystem_t323 **)(ParticleSystem_t323 **)SZArrayLdElema(L_4, L_6));
		ParticleSystemDestroyer_t351 * L_7 = (__this->___U3CU3Ef__this_10);
		ParticleSystem_t323 * L_8 = (__this->___U3CsystemU3E__3_3);
		NullCheck(L_8);
		float L_9 = ParticleSystem_get_startLifetime_m2063(L_8, /*hidden argument*/&ParticleSystem_get_startLifetime_m2063_MethodInfo);
		ParticleSystemDestroyer_t351 * L_10 = (__this->___U3CU3Ef__this_10);
		NullCheck(L_10);
		float L_11 = (L_10->___m_MaxLifetime_4);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t505_il2cpp_TypeInfo));
		float L_12 = Mathf_Max_m1885(NULL /*static, unused*/, L_9, L_11, /*hidden argument*/&Mathf_Max_m1885_MethodInfo);
		NullCheck(L_7);
		L_7->___m_MaxLifetime_4 = L_12;
		int32_t L_13 = (__this->___U3C$s_78U3E__2_2);
		__this->___U3C$s_78U3E__2_2 = ((int32_t)(L_13+1));
	}

IL_0095:
	{
		int32_t L_14 = (__this->___U3C$s_78U3E__2_2);
		ParticleSystemU5BU5D_t312* L_15 = (__this->___U3C$s_77U3E__1_1);
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)(((int32_t)(((Array_t *)L_15)->max_length))))))
		{
			goto IL_004e;
		}
	}
	{
		float L_16 = Time_get_time_m2051(NULL /*static, unused*/, /*hidden argument*/&Time_get_time_m2051_MethodInfo);
		ParticleSystemDestroyer_t351 * L_17 = (__this->___U3CU3Ef__this_10);
		NullCheck(L_17);
		float L_18 = (L_17->___minDuration_2);
		ParticleSystemDestroyer_t351 * L_19 = (__this->___U3CU3Ef__this_10);
		NullCheck(L_19);
		float L_20 = (L_19->___maxDuration_3);
		float L_21 = Random_Range_m1977(NULL /*static, unused*/, L_18, L_20, /*hidden argument*/&Random_Range_m1977_MethodInfo);
		__this->___U3CstopTimeU3E__4_4 = ((float)(L_16+L_21));
		goto IL_00e7;
	}

IL_00d4:
	{
		__this->___$current_9 = NULL;
		__this->___$PC_8 = 1;
		goto IL_01c5;
	}

IL_00e7:
	{
		float L_22 = Time_get_time_m2051(NULL /*static, unused*/, /*hidden argument*/&Time_get_time_m2051_MethodInfo);
		float L_23 = (__this->___U3CstopTimeU3E__4_4);
		if ((((float)L_22) < ((float)L_23)))
		{
			goto IL_00d4;
		}
	}
	{
		ParticleSystemDestroyer_t351 * L_24 = (__this->___U3CU3Ef__this_10);
		NullCheck(L_24);
		bool L_25 = (L_24->___m_EarlyStop_5);
		if (L_25)
		{
			goto IL_00d4;
		}
	}
	{
		ParticleSystemDestroyer_t351 * L_26 = (__this->___U3CU3Ef__this_10);
		NullCheck(L_26);
		String_t* L_27 = Object_get_name_m1905(L_26, /*hidden argument*/&Object_get_name_m1905_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_28 = String_Concat_m1408(NULL /*static, unused*/, (String_t*) &_stringLiteral463, L_27, /*hidden argument*/&String_Concat_m1408_MethodInfo);
		Debug_Log_m1453(NULL /*static, unused*/, L_28, /*hidden argument*/&Debug_Log_m1453_MethodInfo);
		ParticleSystemU5BU5D_t312* L_29 = (__this->___U3CsystemsU3E__0_0);
		__this->___U3C$s_79U3E__5_5 = L_29;
		__this->___U3C$s_80U3E__6_6 = 0;
		goto IL_0166;
	}

IL_0139:
	{
		ParticleSystemU5BU5D_t312* L_30 = (__this->___U3C$s_79U3E__5_5);
		int32_t L_31 = (__this->___U3C$s_80U3E__6_6);
		NullCheck(L_30);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_30, L_31);
		int32_t L_32 = L_31;
		__this->___U3CsystemU3E__7_7 = (*(ParticleSystem_t323 **)(ParticleSystem_t323 **)SZArrayLdElema(L_30, L_32));
		ParticleSystem_t323 * L_33 = (__this->___U3CsystemU3E__7_7);
		NullCheck(L_33);
		ParticleSystem_set_enableEmission_m2048(L_33, 0, /*hidden argument*/&ParticleSystem_set_enableEmission_m2048_MethodInfo);
		int32_t L_34 = (__this->___U3C$s_80U3E__6_6);
		__this->___U3C$s_80U3E__6_6 = ((int32_t)(L_34+1));
	}

IL_0166:
	{
		int32_t L_35 = (__this->___U3C$s_80U3E__6_6);
		ParticleSystemU5BU5D_t312* L_36 = (__this->___U3C$s_79U3E__5_5);
		NullCheck(L_36);
		if ((((int32_t)L_35) < ((int32_t)(((int32_t)(((Array_t *)L_36)->max_length))))))
		{
			goto IL_0139;
		}
	}
	{
		ParticleSystemDestroyer_t351 * L_37 = (__this->___U3CU3Ef__this_10);
		NullCheck(L_37);
		Component_BroadcastMessage_m2144(L_37, (String_t*) &_stringLiteral446, 1, /*hidden argument*/&Component_BroadcastMessage_m2144_MethodInfo);
		ParticleSystemDestroyer_t351 * L_38 = (__this->___U3CU3Ef__this_10);
		NullCheck(L_38);
		float L_39 = (L_38->___m_MaxLifetime_4);
		WaitForSeconds_t479 * L_40 = (WaitForSeconds_t479 *)il2cpp_codegen_object_new (InitializedTypeInfo(&WaitForSeconds_t479_il2cpp_TypeInfo));
		WaitForSeconds__ctor_m1585(L_40, L_39, /*hidden argument*/&WaitForSeconds__ctor_m1585_MethodInfo);
		__this->___$current_9 = L_40;
		__this->___$PC_8 = 2;
		goto IL_01c5;
	}

IL_01ac:
	{
		ParticleSystemDestroyer_t351 * L_41 = (__this->___U3CU3Ef__this_10);
		NullCheck(L_41);
		GameObject_t235 * L_42 = Component_get_gameObject_m1405(L_41, /*hidden argument*/&Component_get_gameObject_m1405_MethodInfo);
		Object_Destroy_m1407(NULL /*static, unused*/, L_42, /*hidden argument*/&Object_Destroy_m1407_MethodInfo);
		__this->___$PC_8 = (-1);
	}

IL_01c3:
	{
		return 0;
	}

IL_01c5:
	{
		return 1;
	}
	// Dead block : IL_01c7: ldloc.1
}
// System.Void UnityStandardAssets.Utility.ParticleSystemDestroyer/<Start>c__IteratorC::Dispose()
extern MethodInfo U3CStartU3Ec__IteratorC_Dispose_m1180_MethodInfo;
 void U3CStartU3Ec__IteratorC_Dispose_m1180 (U3CStartU3Ec__IteratorC_t352 * __this, MethodInfo* method){
	{
		__this->___$PC_8 = (-1);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.ParticleSystemDestroyer/<Start>c__IteratorC::Reset()
extern MethodInfo U3CStartU3Ec__IteratorC_Reset_m1181_MethodInfo;
 void U3CStartU3Ec__IteratorC_Reset_m1181 (U3CStartU3Ec__IteratorC_t352 * __this, MethodInfo* method){
	{
		NotSupportedException_t445 * L_0 = (NotSupportedException_t445 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t445_il2cpp_TypeInfo));
		NotSupportedException__ctor_m1445(L_0, /*hidden argument*/&NotSupportedException__ctor_m1445_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// Metadata Definition UnityStandardAssets.Utility.ParticleSystemDestroyer/<Start>c__IteratorC
extern Il2CppType ParticleSystemU5BU5D_t312_0_0_3;
FieldInfo U3CStartU3Ec__IteratorC_t352____U3CsystemsU3E__0_0_FieldInfo = 
{
	"<systems>__0"/* name */
	, &ParticleSystemU5BU5D_t312_0_0_3/* type */
	, &U3CStartU3Ec__IteratorC_t352_il2cpp_TypeInfo/* parent */
	, offsetof(U3CStartU3Ec__IteratorC_t352, ___U3CsystemsU3E__0_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType ParticleSystemU5BU5D_t312_0_0_3;
FieldInfo U3CStartU3Ec__IteratorC_t352____U3C$s_77U3E__1_1_FieldInfo = 
{
	"<$s_77>__1"/* name */
	, &ParticleSystemU5BU5D_t312_0_0_3/* type */
	, &U3CStartU3Ec__IteratorC_t352_il2cpp_TypeInfo/* parent */
	, offsetof(U3CStartU3Ec__IteratorC_t352, ___U3C$s_77U3E__1_1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t386_0_0_3;
FieldInfo U3CStartU3Ec__IteratorC_t352____U3C$s_78U3E__2_2_FieldInfo = 
{
	"<$s_78>__2"/* name */
	, &Int32_t386_0_0_3/* type */
	, &U3CStartU3Ec__IteratorC_t352_il2cpp_TypeInfo/* parent */
	, offsetof(U3CStartU3Ec__IteratorC_t352, ___U3C$s_78U3E__2_2)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType ParticleSystem_t323_0_0_3;
FieldInfo U3CStartU3Ec__IteratorC_t352____U3CsystemU3E__3_3_FieldInfo = 
{
	"<system>__3"/* name */
	, &ParticleSystem_t323_0_0_3/* type */
	, &U3CStartU3Ec__IteratorC_t352_il2cpp_TypeInfo/* parent */
	, offsetof(U3CStartU3Ec__IteratorC_t352, ___U3CsystemU3E__3_3)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Single_t448_0_0_3;
FieldInfo U3CStartU3Ec__IteratorC_t352____U3CstopTimeU3E__4_4_FieldInfo = 
{
	"<stopTime>__4"/* name */
	, &Single_t448_0_0_3/* type */
	, &U3CStartU3Ec__IteratorC_t352_il2cpp_TypeInfo/* parent */
	, offsetof(U3CStartU3Ec__IteratorC_t352, ___U3CstopTimeU3E__4_4)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType ParticleSystemU5BU5D_t312_0_0_3;
FieldInfo U3CStartU3Ec__IteratorC_t352____U3C$s_79U3E__5_5_FieldInfo = 
{
	"<$s_79>__5"/* name */
	, &ParticleSystemU5BU5D_t312_0_0_3/* type */
	, &U3CStartU3Ec__IteratorC_t352_il2cpp_TypeInfo/* parent */
	, offsetof(U3CStartU3Ec__IteratorC_t352, ___U3C$s_79U3E__5_5)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t386_0_0_3;
FieldInfo U3CStartU3Ec__IteratorC_t352____U3C$s_80U3E__6_6_FieldInfo = 
{
	"<$s_80>__6"/* name */
	, &Int32_t386_0_0_3/* type */
	, &U3CStartU3Ec__IteratorC_t352_il2cpp_TypeInfo/* parent */
	, offsetof(U3CStartU3Ec__IteratorC_t352, ___U3C$s_80U3E__6_6)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType ParticleSystem_t323_0_0_3;
FieldInfo U3CStartU3Ec__IteratorC_t352____U3CsystemU3E__7_7_FieldInfo = 
{
	"<system>__7"/* name */
	, &ParticleSystem_t323_0_0_3/* type */
	, &U3CStartU3Ec__IteratorC_t352_il2cpp_TypeInfo/* parent */
	, offsetof(U3CStartU3Ec__IteratorC_t352, ___U3CsystemU3E__7_7)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t386_0_0_3;
FieldInfo U3CStartU3Ec__IteratorC_t352____$PC_8_FieldInfo = 
{
	"$PC"/* name */
	, &Int32_t386_0_0_3/* type */
	, &U3CStartU3Ec__IteratorC_t352_il2cpp_TypeInfo/* parent */
	, offsetof(U3CStartU3Ec__IteratorC_t352, ___$PC_8)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Object_t_0_0_3;
FieldInfo U3CStartU3Ec__IteratorC_t352____$current_9_FieldInfo = 
{
	"$current"/* name */
	, &Object_t_0_0_3/* type */
	, &U3CStartU3Ec__IteratorC_t352_il2cpp_TypeInfo/* parent */
	, offsetof(U3CStartU3Ec__IteratorC_t352, ___$current_9)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType ParticleSystemDestroyer_t351_0_0_3;
FieldInfo U3CStartU3Ec__IteratorC_t352____U3CU3Ef__this_10_FieldInfo = 
{
	"<>f__this"/* name */
	, &ParticleSystemDestroyer_t351_0_0_3/* type */
	, &U3CStartU3Ec__IteratorC_t352_il2cpp_TypeInfo/* parent */
	, offsetof(U3CStartU3Ec__IteratorC_t352, ___U3CU3Ef__this_10)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* U3CStartU3Ec__IteratorC_t352_FieldInfos[] =
{
	&U3CStartU3Ec__IteratorC_t352____U3CsystemsU3E__0_0_FieldInfo,
	&U3CStartU3Ec__IteratorC_t352____U3C$s_77U3E__1_1_FieldInfo,
	&U3CStartU3Ec__IteratorC_t352____U3C$s_78U3E__2_2_FieldInfo,
	&U3CStartU3Ec__IteratorC_t352____U3CsystemU3E__3_3_FieldInfo,
	&U3CStartU3Ec__IteratorC_t352____U3CstopTimeU3E__4_4_FieldInfo,
	&U3CStartU3Ec__IteratorC_t352____U3C$s_79U3E__5_5_FieldInfo,
	&U3CStartU3Ec__IteratorC_t352____U3C$s_80U3E__6_6_FieldInfo,
	&U3CStartU3Ec__IteratorC_t352____U3CsystemU3E__7_7_FieldInfo,
	&U3CStartU3Ec__IteratorC_t352____$PC_8_FieldInfo,
	&U3CStartU3Ec__IteratorC_t352____$current_9_FieldInfo,
	&U3CStartU3Ec__IteratorC_t352____U3CU3Ef__this_10_FieldInfo,
	NULL
};
static PropertyInfo U3CStartU3Ec__IteratorC_t352____System_Collections_Generic_IEnumeratorU3CobjectU3E_Current_PropertyInfo = 
{
	&U3CStartU3Ec__IteratorC_t352_il2cpp_TypeInfo/* parent */
	, "System.Collections.Generic.IEnumerator<object>.Current"/* name */
	, &U3CStartU3Ec__IteratorC_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1177_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo U3CStartU3Ec__IteratorC_t352____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&U3CStartU3Ec__IteratorC_t352_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &U3CStartU3Ec__IteratorC_System_Collections_IEnumerator_get_Current_m1178_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* U3CStartU3Ec__IteratorC_t352_PropertyInfos[] =
{
	&U3CStartU3Ec__IteratorC_t352____System_Collections_Generic_IEnumeratorU3CobjectU3E_Current_PropertyInfo,
	&U3CStartU3Ec__IteratorC_t352____System_Collections_IEnumerator_Current_PropertyInfo,
	NULL
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
// System.Void UnityStandardAssets.Utility.ParticleSystemDestroyer/<Start>c__IteratorC::.ctor()
MethodInfo U3CStartU3Ec__IteratorC__ctor_m1176_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&U3CStartU3Ec__IteratorC__ctor_m1176/* method */
	, &U3CStartU3Ec__IteratorC_t352_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1274/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache U3CStartU3Ec__IteratorC_t352__CustomAttributeCache_U3CStartU3Ec__IteratorC_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1177;
// System.Object UnityStandardAssets.Utility.ParticleSystemDestroyer/<Start>c__IteratorC::System.Collections.Generic.IEnumerator<object>.get_Current()
MethodInfo U3CStartU3Ec__IteratorC_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1177_MethodInfo = 
{
	"System.Collections.Generic.IEnumerator<object>.get_Current"/* name */
	, (methodPointerType)&U3CStartU3Ec__IteratorC_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1177/* method */
	, &U3CStartU3Ec__IteratorC_t352_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &U3CStartU3Ec__IteratorC_t352__CustomAttributeCache_U3CStartU3Ec__IteratorC_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1177/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1275/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache U3CStartU3Ec__IteratorC_t352__CustomAttributeCache_U3CStartU3Ec__IteratorC_System_Collections_IEnumerator_get_Current_m1178;
// System.Object UnityStandardAssets.Utility.ParticleSystemDestroyer/<Start>c__IteratorC::System.Collections.IEnumerator.get_Current()
MethodInfo U3CStartU3Ec__IteratorC_System_Collections_IEnumerator_get_Current_m1178_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&U3CStartU3Ec__IteratorC_System_Collections_IEnumerator_get_Current_m1178/* method */
	, &U3CStartU3Ec__IteratorC_t352_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &U3CStartU3Ec__IteratorC_t352__CustomAttributeCache_U3CStartU3Ec__IteratorC_System_Collections_IEnumerator_get_Current_m1178/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1276/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379 (MethodInfo* method, void* obj, void** args);
// System.Boolean UnityStandardAssets.Utility.ParticleSystemDestroyer/<Start>c__IteratorC::MoveNext()
MethodInfo U3CStartU3Ec__IteratorC_MoveNext_m1179_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&U3CStartU3Ec__IteratorC_MoveNext_m1179/* method */
	, &U3CStartU3Ec__IteratorC_t352_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t379_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t379/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1277/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache U3CStartU3Ec__IteratorC_t352__CustomAttributeCache_U3CStartU3Ec__IteratorC_Dispose_m1180;
// System.Void UnityStandardAssets.Utility.ParticleSystemDestroyer/<Start>c__IteratorC::Dispose()
MethodInfo U3CStartU3Ec__IteratorC_Dispose_m1180_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&U3CStartU3Ec__IteratorC_Dispose_m1180/* method */
	, &U3CStartU3Ec__IteratorC_t352_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &U3CStartU3Ec__IteratorC_t352__CustomAttributeCache_U3CStartU3Ec__IteratorC_Dispose_m1180/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1278/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache U3CStartU3Ec__IteratorC_t352__CustomAttributeCache_U3CStartU3Ec__IteratorC_Reset_m1181;
// System.Void UnityStandardAssets.Utility.ParticleSystemDestroyer/<Start>c__IteratorC::Reset()
MethodInfo U3CStartU3Ec__IteratorC_Reset_m1181_MethodInfo = 
{
	"Reset"/* name */
	, (methodPointerType)&U3CStartU3Ec__IteratorC_Reset_m1181/* method */
	, &U3CStartU3Ec__IteratorC_t352_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &U3CStartU3Ec__IteratorC_t352__CustomAttributeCache_U3CStartU3Ec__IteratorC_Reset_m1181/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1279/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* U3CStartU3Ec__IteratorC_t352_MethodInfos[] =
{
	&U3CStartU3Ec__IteratorC__ctor_m1176_MethodInfo,
	&U3CStartU3Ec__IteratorC_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1177_MethodInfo,
	&U3CStartU3Ec__IteratorC_System_Collections_IEnumerator_get_Current_m1178_MethodInfo,
	&U3CStartU3Ec__IteratorC_MoveNext_m1179_MethodInfo,
	&U3CStartU3Ec__IteratorC_Dispose_m1180_MethodInfo,
	&U3CStartU3Ec__IteratorC_Reset_m1181_MethodInfo,
	NULL
};
static MethodInfo* U3CStartU3Ec__IteratorC_t352_VTable[] =
{
	&Object_Equals_m1252_MethodInfo,
	&Object_Finalize_m1253_MethodInfo,
	&Object_GetHashCode_m1254_MethodInfo,
	&Object_ToString_m1255_MethodInfo,
	&U3CStartU3Ec__IteratorC_Dispose_m1180_MethodInfo,
	&U3CStartU3Ec__IteratorC_System_Collections_IEnumerator_get_Current_m1178_MethodInfo,
	&U3CStartU3Ec__IteratorC_MoveNext_m1179_MethodInfo,
	&U3CStartU3Ec__IteratorC_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1177_MethodInfo,
	&U3CStartU3Ec__IteratorC_Reset_m1181_MethodInfo,
};
static TypeInfo* U3CStartU3Ec__IteratorC_t352_InterfacesTypeInfos[] = 
{
	&IDisposable_t444_il2cpp_TypeInfo,
	&IEnumerator_t26_il2cpp_TypeInfo,
	&IEnumerator_1_t53_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair U3CStartU3Ec__IteratorC_t352_InterfacesOffsets[] = 
{
	{ &IDisposable_t444_il2cpp_TypeInfo, 4},
	{ &IEnumerator_t26_il2cpp_TypeInfo, 5},
	{ &IEnumerator_1_t53_il2cpp_TypeInfo, 7},
};
void U3CStartU3Ec__IteratorC_t352_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t384 * tmp;
		tmp = (CompilerGeneratedAttribute_t384 *)il2cpp_codegen_object_new (&CompilerGeneratedAttribute_t384_il2cpp_TypeInfo);
		CompilerGeneratedAttribute__ctor_m1269(tmp, &CompilerGeneratedAttribute__ctor_m1269_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void U3CStartU3Ec__IteratorC_t352_CustomAttributesCacheGenerator_U3CStartU3Ec__IteratorC_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1177(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t447 * tmp;
		tmp = (DebuggerHiddenAttribute_t447 *)il2cpp_codegen_object_new (&DebuggerHiddenAttribute_t447_il2cpp_TypeInfo);
		DebuggerHiddenAttribute__ctor_m1446(tmp, &DebuggerHiddenAttribute__ctor_m1446_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void U3CStartU3Ec__IteratorC_t352_CustomAttributesCacheGenerator_U3CStartU3Ec__IteratorC_System_Collections_IEnumerator_get_Current_m1178(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t447 * tmp;
		tmp = (DebuggerHiddenAttribute_t447 *)il2cpp_codegen_object_new (&DebuggerHiddenAttribute_t447_il2cpp_TypeInfo);
		DebuggerHiddenAttribute__ctor_m1446(tmp, &DebuggerHiddenAttribute__ctor_m1446_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void U3CStartU3Ec__IteratorC_t352_CustomAttributesCacheGenerator_U3CStartU3Ec__IteratorC_Dispose_m1180(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t447 * tmp;
		tmp = (DebuggerHiddenAttribute_t447 *)il2cpp_codegen_object_new (&DebuggerHiddenAttribute_t447_il2cpp_TypeInfo);
		DebuggerHiddenAttribute__ctor_m1446(tmp, &DebuggerHiddenAttribute__ctor_m1446_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void U3CStartU3Ec__IteratorC_t352_CustomAttributesCacheGenerator_U3CStartU3Ec__IteratorC_Reset_m1181(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t447 * tmp;
		tmp = (DebuggerHiddenAttribute_t447 *)il2cpp_codegen_object_new (&DebuggerHiddenAttribute_t447_il2cpp_TypeInfo);
		DebuggerHiddenAttribute__ctor_m1446(tmp, &DebuggerHiddenAttribute__ctor_m1446_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache U3CStartU3Ec__IteratorC_t352__CustomAttributeCache = {
1,
NULL,
&U3CStartU3Ec__IteratorC_t352_CustomAttributesCacheGenerator
};
CustomAttributesCache U3CStartU3Ec__IteratorC_t352__CustomAttributeCache_U3CStartU3Ec__IteratorC_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1177 = {
1,
NULL,
&U3CStartU3Ec__IteratorC_t352_CustomAttributesCacheGenerator_U3CStartU3Ec__IteratorC_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1177
};
CustomAttributesCache U3CStartU3Ec__IteratorC_t352__CustomAttributeCache_U3CStartU3Ec__IteratorC_System_Collections_IEnumerator_get_Current_m1178 = {
1,
NULL,
&U3CStartU3Ec__IteratorC_t352_CustomAttributesCacheGenerator_U3CStartU3Ec__IteratorC_System_Collections_IEnumerator_get_Current_m1178
};
CustomAttributesCache U3CStartU3Ec__IteratorC_t352__CustomAttributeCache_U3CStartU3Ec__IteratorC_Dispose_m1180 = {
1,
NULL,
&U3CStartU3Ec__IteratorC_t352_CustomAttributesCacheGenerator_U3CStartU3Ec__IteratorC_Dispose_m1180
};
CustomAttributesCache U3CStartU3Ec__IteratorC_t352__CustomAttributeCache_U3CStartU3Ec__IteratorC_Reset_m1181 = {
1,
NULL,
&U3CStartU3Ec__IteratorC_t352_CustomAttributesCacheGenerator_U3CStartU3Ec__IteratorC_Reset_m1181
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType U3CStartU3Ec__IteratorC_t352_0_0_0;
extern Il2CppType U3CStartU3Ec__IteratorC_t352_1_0_0;
struct U3CStartU3Ec__IteratorC_t352;
extern CustomAttributesCache U3CStartU3Ec__IteratorC_t352__CustomAttributeCache;
extern CustomAttributesCache U3CStartU3Ec__IteratorC_t352__CustomAttributeCache_U3CStartU3Ec__IteratorC_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1177;
extern CustomAttributesCache U3CStartU3Ec__IteratorC_t352__CustomAttributeCache_U3CStartU3Ec__IteratorC_System_Collections_IEnumerator_get_Current_m1178;
extern CustomAttributesCache U3CStartU3Ec__IteratorC_t352__CustomAttributeCache_U3CStartU3Ec__IteratorC_Dispose_m1180;
extern CustomAttributesCache U3CStartU3Ec__IteratorC_t352__CustomAttributeCache_U3CStartU3Ec__IteratorC_Reset_m1181;
TypeInfo U3CStartU3Ec__IteratorC_t352_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image/* image */
	, NULL/* gc_desc */
	, "<Start>c__IteratorC"/* name */
	, ""/* namespaze */
	, U3CStartU3Ec__IteratorC_t352_MethodInfos/* methods */
	, U3CStartU3Ec__IteratorC_t352_PropertyInfos/* properties */
	, U3CStartU3Ec__IteratorC_t352_FieldInfos/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &ParticleSystemDestroyer_t351_il2cpp_TypeInfo/* nested_in */
	, &U3CStartU3Ec__IteratorC_t352_il2cpp_TypeInfo/* element_class */
	, U3CStartU3Ec__IteratorC_t352_InterfacesTypeInfos/* implemented_interfaces */
	, U3CStartU3Ec__IteratorC_t352_VTable/* vtable */
	, &U3CStartU3Ec__IteratorC_t352__CustomAttributeCache/* custom_attributes_cache */
	, &U3CStartU3Ec__IteratorC_t352_il2cpp_TypeInfo/* cast_class */
	, &U3CStartU3Ec__IteratorC_t352_0_0_0/* byval_arg */
	, &U3CStartU3Ec__IteratorC_t352_1_0_0/* this_arg */
	, U3CStartU3Ec__IteratorC_t352_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (U3CStartU3Ec__IteratorC_t352)/* instance_size */
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
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 6/* method_count */
	, 2/* property_count */
	, 11/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 9/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Void UnityStandardAssets.Utility.ParticleSystemDestroyer::.ctor()
extern MethodInfo ParticleSystemDestroyer__ctor_m1182_MethodInfo;
 void ParticleSystemDestroyer__ctor_m1182 (ParticleSystemDestroyer_t351 * __this, MethodInfo* method){
	{
		__this->___minDuration_2 = (8.0f);
		__this->___maxDuration_3 = (10.0f);
		MonoBehaviour__ctor_m1402(__this, /*hidden argument*/&MonoBehaviour__ctor_m1402_MethodInfo);
		return;
	}
}
// System.Collections.IEnumerator UnityStandardAssets.Utility.ParticleSystemDestroyer::Start()
extern MethodInfo ParticleSystemDestroyer_Start_m1183_MethodInfo;
 Object_t * ParticleSystemDestroyer_Start_m1183 (ParticleSystemDestroyer_t351 * __this, MethodInfo* method){
	U3CStartU3Ec__IteratorC_t352 * V_0 = {0};
	{
		U3CStartU3Ec__IteratorC_t352 * L_0 = (U3CStartU3Ec__IteratorC_t352 *)il2cpp_codegen_object_new (InitializedTypeInfo(&U3CStartU3Ec__IteratorC_t352_il2cpp_TypeInfo));
		U3CStartU3Ec__IteratorC__ctor_m1176(L_0, /*hidden argument*/&U3CStartU3Ec__IteratorC__ctor_m1176_MethodInfo);
		V_0 = L_0;
		NullCheck(V_0);
		V_0->___U3CU3Ef__this_10 = __this;
		return V_0;
	}
}
// System.Void UnityStandardAssets.Utility.ParticleSystemDestroyer::Stop()
extern MethodInfo ParticleSystemDestroyer_Stop_m1184_MethodInfo;
 void ParticleSystemDestroyer_Stop_m1184 (ParticleSystemDestroyer_t351 * __this, MethodInfo* method){
	{
		__this->___m_EarlyStop_5 = 1;
		return;
	}
}
// Metadata Definition UnityStandardAssets.Utility.ParticleSystemDestroyer
extern Il2CppType Single_t448_0_0_6;
FieldInfo ParticleSystemDestroyer_t351____minDuration_2_FieldInfo = 
{
	"minDuration"/* name */
	, &Single_t448_0_0_6/* type */
	, &ParticleSystemDestroyer_t351_il2cpp_TypeInfo/* parent */
	, offsetof(ParticleSystemDestroyer_t351, ___minDuration_2)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Single_t448_0_0_6;
FieldInfo ParticleSystemDestroyer_t351____maxDuration_3_FieldInfo = 
{
	"maxDuration"/* name */
	, &Single_t448_0_0_6/* type */
	, &ParticleSystemDestroyer_t351_il2cpp_TypeInfo/* parent */
	, offsetof(ParticleSystemDestroyer_t351, ___maxDuration_3)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Single_t448_0_0_1;
FieldInfo ParticleSystemDestroyer_t351____m_MaxLifetime_4_FieldInfo = 
{
	"m_MaxLifetime"/* name */
	, &Single_t448_0_0_1/* type */
	, &ParticleSystemDestroyer_t351_il2cpp_TypeInfo/* parent */
	, offsetof(ParticleSystemDestroyer_t351, ___m_MaxLifetime_4)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Boolean_t379_0_0_1;
FieldInfo ParticleSystemDestroyer_t351____m_EarlyStop_5_FieldInfo = 
{
	"m_EarlyStop"/* name */
	, &Boolean_t379_0_0_1/* type */
	, &ParticleSystemDestroyer_t351_il2cpp_TypeInfo/* parent */
	, offsetof(ParticleSystemDestroyer_t351, ___m_EarlyStop_5)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* ParticleSystemDestroyer_t351_FieldInfos[] =
{
	&ParticleSystemDestroyer_t351____minDuration_2_FieldInfo,
	&ParticleSystemDestroyer_t351____maxDuration_3_FieldInfo,
	&ParticleSystemDestroyer_t351____m_MaxLifetime_4_FieldInfo,
	&ParticleSystemDestroyer_t351____m_EarlyStop_5_FieldInfo,
	NULL
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
// System.Void UnityStandardAssets.Utility.ParticleSystemDestroyer::.ctor()
MethodInfo ParticleSystemDestroyer__ctor_m1182_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&ParticleSystemDestroyer__ctor_m1182/* method */
	, &ParticleSystemDestroyer_t351_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1271/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType IEnumerator_t26_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache ParticleSystemDestroyer_t351__CustomAttributeCache_ParticleSystemDestroyer_Start_m1183;
// System.Collections.IEnumerator UnityStandardAssets.Utility.ParticleSystemDestroyer::Start()
MethodInfo ParticleSystemDestroyer_Start_m1183_MethodInfo = 
{
	"Start"/* name */
	, (methodPointerType)&ParticleSystemDestroyer_Start_m1183/* method */
	, &ParticleSystemDestroyer_t351_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_t26_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &ParticleSystemDestroyer_t351__CustomAttributeCache_ParticleSystemDestroyer_Start_m1183/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1272/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
// System.Void UnityStandardAssets.Utility.ParticleSystemDestroyer::Stop()
MethodInfo ParticleSystemDestroyer_Stop_m1184_MethodInfo = 
{
	"Stop"/* name */
	, (methodPointerType)&ParticleSystemDestroyer_Stop_m1184/* method */
	, &ParticleSystemDestroyer_t351_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1273/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* ParticleSystemDestroyer_t351_MethodInfos[] =
{
	&ParticleSystemDestroyer__ctor_m1182_MethodInfo,
	&ParticleSystemDestroyer_Start_m1183_MethodInfo,
	&ParticleSystemDestroyer_Stop_m1184_MethodInfo,
	NULL
};
extern TypeInfo U3CStartU3Ec__IteratorC_t352_il2cpp_TypeInfo;
static TypeInfo* ParticleSystemDestroyer_t351_il2cpp_TypeInfo__nestedTypes[2] =
{
	&U3CStartU3Ec__IteratorC_t352_il2cpp_TypeInfo,
	NULL
};
static MethodInfo* ParticleSystemDestroyer_t351_VTable[] =
{
	&Object_Equals_m1333_MethodInfo,
	&Object_Finalize_m1253_MethodInfo,
	&Object_GetHashCode_m1334_MethodInfo,
	&Object_ToString_m1335_MethodInfo,
};
void ParticleSystemDestroyer_t351_CustomAttributesCacheGenerator_ParticleSystemDestroyer_Start_m1183(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t447 * tmp;
		tmp = (DebuggerHiddenAttribute_t447 *)il2cpp_codegen_object_new (&DebuggerHiddenAttribute_t447_il2cpp_TypeInfo);
		DebuggerHiddenAttribute__ctor_m1446(tmp, &DebuggerHiddenAttribute__ctor_m1446_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache ParticleSystemDestroyer_t351__CustomAttributeCache_ParticleSystemDestroyer_Start_m1183 = {
1,
NULL,
&ParticleSystemDestroyer_t351_CustomAttributesCacheGenerator_ParticleSystemDestroyer_Start_m1183
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType ParticleSystemDestroyer_t351_0_0_0;
extern Il2CppType ParticleSystemDestroyer_t351_1_0_0;
struct ParticleSystemDestroyer_t351;
extern CustomAttributesCache ParticleSystemDestroyer_t351__CustomAttributeCache_ParticleSystemDestroyer_Start_m1183;
TypeInfo ParticleSystemDestroyer_t351_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image/* image */
	, NULL/* gc_desc */
	, "ParticleSystemDestroyer"/* name */
	, "UnityStandardAssets.Utility"/* namespaze */
	, ParticleSystemDestroyer_t351_MethodInfos/* methods */
	, NULL/* properties */
	, ParticleSystemDestroyer_t351_FieldInfos/* fields */
	, NULL/* events */
	, &MonoBehaviour_t39_il2cpp_TypeInfo/* parent */
	, ParticleSystemDestroyer_t351_il2cpp_TypeInfo__nestedTypes/* nested_types */
	, NULL/* nested_in */
	, &ParticleSystemDestroyer_t351_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, ParticleSystemDestroyer_t351_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ParticleSystemDestroyer_t351_il2cpp_TypeInfo/* cast_class */
	, &ParticleSystemDestroyer_t351_0_0_0/* byval_arg */
	, &ParticleSystemDestroyer_t351_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (ParticleSystemDestroyer_t351)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048577/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 3/* method_count */
	, 0/* property_count */
	, 4/* field_count */
	, 0/* event_count */
	, 1/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo BuildTargetGroup_t353_il2cpp_TypeInfo;



// Metadata Definition UnityStandardAssets.Utility.PlatformSpecificContent/BuildTargetGroup
extern Il2CppType Int32_t386_0_0_1542;
FieldInfo BuildTargetGroup_t353____value___1_FieldInfo = 
{
	"value__"/* name */
	, &Int32_t386_0_0_1542/* type */
	, &BuildTargetGroup_t353_il2cpp_TypeInfo/* parent */
	, offsetof(BuildTargetGroup_t353, ___value___1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType BuildTargetGroup_t353_0_0_32854;
FieldInfo BuildTargetGroup_t353____Standalone_2_FieldInfo = 
{
	"Standalone"/* name */
	, &BuildTargetGroup_t353_0_0_32854/* type */
	, &BuildTargetGroup_t353_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType BuildTargetGroup_t353_0_0_32854;
FieldInfo BuildTargetGroup_t353____Mobile_3_FieldInfo = 
{
	"Mobile"/* name */
	, &BuildTargetGroup_t353_0_0_32854/* type */
	, &BuildTargetGroup_t353_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* BuildTargetGroup_t353_FieldInfos[] =
{
	&BuildTargetGroup_t353____value___1_FieldInfo,
	&BuildTargetGroup_t353____Standalone_2_FieldInfo,
	&BuildTargetGroup_t353____Mobile_3_FieldInfo,
	NULL
};
static const int32_t BuildTargetGroup_t353____Standalone_2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry BuildTargetGroup_t353____Standalone_2_DefaultValue = 
{
	&BuildTargetGroup_t353____Standalone_2_FieldInfo/* field */
	, { (char*)&BuildTargetGroup_t353____Standalone_2_DefaultValueData, &Int32_t386_0_0_0 }/* value */

};
static const int32_t BuildTargetGroup_t353____Mobile_3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry BuildTargetGroup_t353____Mobile_3_DefaultValue = 
{
	&BuildTargetGroup_t353____Mobile_3_FieldInfo/* field */
	, { (char*)&BuildTargetGroup_t353____Mobile_3_DefaultValueData, &Int32_t386_0_0_0 }/* value */

};
static Il2CppFieldDefaultValueEntry* BuildTargetGroup_t353_FieldDefaultValues[] = 
{
	&BuildTargetGroup_t353____Standalone_2_DefaultValue,
	&BuildTargetGroup_t353____Mobile_3_DefaultValue,
	NULL
};
static MethodInfo* BuildTargetGroup_t353_MethodInfos[] =
{
	NULL
};
static MethodInfo* BuildTargetGroup_t353_VTable[] =
{
	&Enum_Equals_m1418_MethodInfo,
	&Object_Finalize_m1253_MethodInfo,
	&Enum_GetHashCode_m1419_MethodInfo,
	&Enum_ToString_m1420_MethodInfo,
	&Enum_ToString_m1421_MethodInfo,
	&Enum_System_IConvertible_ToBoolean_m1422_MethodInfo,
	&Enum_System_IConvertible_ToByte_m1423_MethodInfo,
	&Enum_System_IConvertible_ToChar_m1424_MethodInfo,
	&Enum_System_IConvertible_ToDateTime_m1425_MethodInfo,
	&Enum_System_IConvertible_ToDecimal_m1426_MethodInfo,
	&Enum_System_IConvertible_ToDouble_m1427_MethodInfo,
	&Enum_System_IConvertible_ToInt16_m1428_MethodInfo,
	&Enum_System_IConvertible_ToInt32_m1429_MethodInfo,
	&Enum_System_IConvertible_ToInt64_m1430_MethodInfo,
	&Enum_System_IConvertible_ToSByte_m1431_MethodInfo,
	&Enum_System_IConvertible_ToSingle_m1432_MethodInfo,
	&Enum_ToString_m1433_MethodInfo,
	&Enum_System_IConvertible_ToType_m1434_MethodInfo,
	&Enum_System_IConvertible_ToUInt16_m1435_MethodInfo,
	&Enum_System_IConvertible_ToUInt32_m1436_MethodInfo,
	&Enum_System_IConvertible_ToUInt64_m1437_MethodInfo,
	&Enum_CompareTo_m1438_MethodInfo,
	&Enum_GetTypeCode_m1439_MethodInfo,
};
static Il2CppInterfaceOffsetPair BuildTargetGroup_t353_InterfacesOffsets[] = 
{
	{ &IFormattable_t440_il2cpp_TypeInfo, 4},
	{ &IConvertible_t441_il2cpp_TypeInfo, 5},
	{ &IComparable_t442_il2cpp_TypeInfo, 21},
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType BuildTargetGroup_t353_0_0_0;
extern Il2CppType BuildTargetGroup_t353_1_0_0;
extern TypeInfo PlatformSpecificContent_t356_il2cpp_TypeInfo;
TypeInfo BuildTargetGroup_t353_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image/* image */
	, NULL/* gc_desc */
	, "BuildTargetGroup"/* name */
	, ""/* namespaze */
	, BuildTargetGroup_t353_MethodInfos/* methods */
	, NULL/* properties */
	, BuildTargetGroup_t353_FieldInfos/* fields */
	, NULL/* events */
	, &Enum_t443_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &PlatformSpecificContent_t356_il2cpp_TypeInfo/* nested_in */
	, &Int32_t386_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, BuildTargetGroup_t353_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &Int32_t386_il2cpp_TypeInfo/* cast_class */
	, &BuildTargetGroup_t353_0_0_0/* byval_arg */
	, &BuildTargetGroup_t353_1_0_0/* this_arg */
	, BuildTargetGroup_t353_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, BuildTargetGroup_t353_FieldDefaultValues/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (BuildTargetGroup_t353)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (int32_t)/* element_size */
	, sizeof(int32_t)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 259/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, true/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 0/* method_count */
	, 0/* property_count */
	, 3/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 23/* vtable_count */
	, 0/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo GameObjectU5BU5D_t354_il2cpp_TypeInfo;
extern TypeInfo MonoBehaviourU5BU5D_t355_il2cpp_TypeInfo;
extern MethodInfo PlatformSpecificContent_CheckEnableContent_m1187_MethodInfo;
extern MethodInfo PlatformSpecificContent_EnableContent_m1188_MethodInfo;
extern MethodInfo Transform_GetEnumerator_m1803_MethodInfo;
extern MethodInfo IEnumerator_get_Current_m1451_MethodInfo;
extern MethodInfo IEnumerator_MoveNext_m1443_MethodInfo;


// System.Void UnityStandardAssets.Utility.PlatformSpecificContent::.ctor()
extern MethodInfo PlatformSpecificContent__ctor_m1185_MethodInfo;
 void PlatformSpecificContent__ctor_m1185 (PlatformSpecificContent_t356 * __this, MethodInfo* method){
	{
		__this->___m_Content_3 = ((GameObjectU5BU5D_t354*)SZArrayNew(InitializedTypeInfo(&GameObjectU5BU5D_t354_il2cpp_TypeInfo), 0));
		__this->___m_MonoBehaviours_4 = ((MonoBehaviourU5BU5D_t355*)SZArrayNew(InitializedTypeInfo(&MonoBehaviourU5BU5D_t355_il2cpp_TypeInfo), 0));
		MonoBehaviour__ctor_m1402(__this, /*hidden argument*/&MonoBehaviour__ctor_m1402_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.PlatformSpecificContent::OnEnable()
extern MethodInfo PlatformSpecificContent_OnEnable_m1186_MethodInfo;
 void PlatformSpecificContent_OnEnable_m1186 (PlatformSpecificContent_t356 * __this, MethodInfo* method){
	{
		PlatformSpecificContent_CheckEnableContent_m1187(__this, /*hidden argument*/&PlatformSpecificContent_CheckEnableContent_m1187_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.PlatformSpecificContent::CheckEnableContent()
 void PlatformSpecificContent_CheckEnableContent_m1187 (PlatformSpecificContent_t356 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->___m_BuildTargetGroup_2);
		if ((((uint32_t)L_0) != ((uint32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		PlatformSpecificContent_EnableContent_m1188(__this, 1, /*hidden argument*/&PlatformSpecificContent_EnableContent_m1188_MethodInfo);
		goto IL_001f;
	}

IL_0018:
	{
		PlatformSpecificContent_EnableContent_m1188(__this, 0, /*hidden argument*/&PlatformSpecificContent_EnableContent_m1188_MethodInfo);
	}

IL_001f:
	{
		return;
	}
}
// System.Void UnityStandardAssets.Utility.PlatformSpecificContent::EnableContent(System.Boolean)
 void PlatformSpecificContent_EnableContent_m1188 (PlatformSpecificContent_t356 * __this, bool ___enabled, MethodInfo* method){
	GameObject_t235 * V_0 = {0};
	GameObjectU5BU5D_t354* V_1 = {0};
	int32_t V_2 = 0;
	Transform_t173 * V_3 = {0};
	Object_t * V_4 = {0};
	MonoBehaviour_t39 * V_5 = {0};
	MonoBehaviourU5BU5D_t355* V_6 = {0};
	int32_t V_7 = 0;
	Object_t * V_8 = {0};
	int32_t leaveInstructions[1] = {0};
	Exception_t151 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t151 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		GameObjectU5BU5D_t354* L_0 = (__this->___m_Content_3);
		NullCheck(L_0);
		if ((((int32_t)(((int32_t)(((Array_t *)L_0)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_0040;
		}
	}
	{
		GameObjectU5BU5D_t354* L_1 = (__this->___m_Content_3);
		V_1 = L_1;
		V_2 = 0;
		goto IL_0037;
	}

IL_001c:
	{
		NullCheck(V_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_1, V_2);
		int32_t L_2 = V_2;
		V_0 = (*(GameObject_t235 **)(GameObject_t235 **)SZArrayLdElema(V_1, L_2));
		bool L_3 = Object_op_Inequality_m1769(NULL /*static, unused*/, V_0, (Object_t326 *)NULL, /*hidden argument*/&Object_op_Inequality_m1769_MethodInfo);
		if (!L_3)
		{
			goto IL_0033;
		}
	}
	{
		NullCheck(V_0);
		GameObject_SetActive_m1804(V_0, ___enabled, /*hidden argument*/&GameObject_SetActive_m1804_MethodInfo);
	}

IL_0033:
	{
		V_2 = ((int32_t)(V_2+1));
	}

IL_0037:
	{
		NullCheck(V_1);
		if ((((int32_t)V_2) < ((int32_t)(((int32_t)(((Array_t *)V_1)->max_length))))))
		{
			goto IL_001c;
		}
	}

IL_0040:
	{
		bool L_4 = (__this->___m_ChildrenOfThisObject_5);
		if (!L_4)
		{
			goto IL_009d;
		}
	}
	{
		Transform_t173 * L_5 = Component_get_transform_m1739(__this, /*hidden argument*/&Component_get_transform_m1739_MethodInfo);
		NullCheck(L_5);
		Object_t * L_6 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(&Transform_GetEnumerator_m1803_MethodInfo, L_5);
		V_4 = L_6;
	}

IL_0058:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0076;
		}

IL_005d:
		{
			NullCheck(V_4);
			Object_t * L_7 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&IEnumerator_get_Current_m1451_MethodInfo, V_4);
			V_3 = ((Transform_t173 *)Castclass(L_7, InitializedTypeInfo(&Transform_t173_il2cpp_TypeInfo)));
			NullCheck(V_3);
			GameObject_t235 * L_8 = Component_get_gameObject_m1405(V_3, /*hidden argument*/&Component_get_gameObject_m1405_MethodInfo);
			NullCheck(L_8);
			GameObject_SetActive_m1804(L_8, ___enabled, /*hidden argument*/&GameObject_SetActive_m1804_MethodInfo);
		}

IL_0076:
		{
			NullCheck(V_4);
			bool L_9 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IEnumerator_MoveNext_m1443_MethodInfo, V_4);
			if (L_9)
			{
				goto IL_005d;
			}
		}

IL_0082:
		{
			// IL_0082: leave IL_009d
			leaveInstructions[0] = 0x9D; // 1
			THROW_SENTINEL(IL_009d);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_0087;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t151 *)e.ex;
		goto IL_0087;
	}

IL_0087:
	{ // begin finally (depth: 1)
		{
			V_8 = ((Object_t *)IsInst(V_4, InitializedTypeInfo(&IDisposable_t444_il2cpp_TypeInfo)));
			if (V_8)
			{
				goto IL_0095;
			}
		}

IL_0094:
		{
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0x9D:
					goto IL_009d;
				default:
				{
					#if IL2CPP_DEBUG
					assert( __last_unhandled_exception != 0 && "invalid leaveInstruction at depth 1, __last_unhandled_exception has not been set");
					#endif
					Exception_t151 * _tmp_exception_local = __last_unhandled_exception;
					__last_unhandled_exception = 0;
					il2cpp_codegen_raise_exception(_tmp_exception_local);
				}
			}
		}

IL_0095:
		{
			NullCheck(V_8);
			InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m1444_MethodInfo, V_8);
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0x9D:
					goto IL_009d;
				default:
				{
					#if IL2CPP_DEBUG
					assert( __last_unhandled_exception != 0 && "invalid leaveInstruction at depth 1, __last_unhandled_exception has not been set");
					#endif
					Exception_t151 * _tmp_exception_local = __last_unhandled_exception;
					__last_unhandled_exception = 0;
					il2cpp_codegen_raise_exception(_tmp_exception_local);
				}
			}
		}
	} // end finally (depth: 1)

IL_009d:
	{
		MonoBehaviourU5BU5D_t355* L_10 = (__this->___m_MonoBehaviours_4);
		NullCheck(L_10);
		if ((((int32_t)(((int32_t)(((Array_t *)L_10)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_00db;
		}
	}
	{
		MonoBehaviourU5BU5D_t355* L_11 = (__this->___m_MonoBehaviours_4);
		V_6 = L_11;
		V_7 = 0;
		goto IL_00d0;
	}

IL_00bb:
	{
		NullCheck(V_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_6, V_7);
		int32_t L_12 = V_7;
		V_5 = (*(MonoBehaviour_t39 **)(MonoBehaviour_t39 **)SZArrayLdElema(V_6, L_12));
		NullCheck(V_5);
		Behaviour_set_enabled_m1870(V_5, ___enabled, /*hidden argument*/&Behaviour_set_enabled_m1870_MethodInfo);
		V_7 = ((int32_t)(V_7+1));
	}

IL_00d0:
	{
		NullCheck(V_6);
		if ((((int32_t)V_7) < ((int32_t)(((int32_t)(((Array_t *)V_6)->max_length))))))
		{
			goto IL_00bb;
		}
	}

IL_00db:
	{
		return;
	}
}
// Metadata Definition UnityStandardAssets.Utility.PlatformSpecificContent
extern Il2CppType BuildTargetGroup_t353_0_0_1;
extern CustomAttributesCache PlatformSpecificContent_t356__CustomAttributeCache_m_BuildTargetGroup;
FieldInfo PlatformSpecificContent_t356____m_BuildTargetGroup_2_FieldInfo = 
{
	"m_BuildTargetGroup"/* name */
	, &BuildTargetGroup_t353_0_0_1/* type */
	, &PlatformSpecificContent_t356_il2cpp_TypeInfo/* parent */
	, offsetof(PlatformSpecificContent_t356, ___m_BuildTargetGroup_2)/* data */
	, &PlatformSpecificContent_t356__CustomAttributeCache_m_BuildTargetGroup/* custom_attributes_cache */

};
extern Il2CppType GameObjectU5BU5D_t354_0_0_1;
extern CustomAttributesCache PlatformSpecificContent_t356__CustomAttributeCache_m_Content;
FieldInfo PlatformSpecificContent_t356____m_Content_3_FieldInfo = 
{
	"m_Content"/* name */
	, &GameObjectU5BU5D_t354_0_0_1/* type */
	, &PlatformSpecificContent_t356_il2cpp_TypeInfo/* parent */
	, offsetof(PlatformSpecificContent_t356, ___m_Content_3)/* data */
	, &PlatformSpecificContent_t356__CustomAttributeCache_m_Content/* custom_attributes_cache */

};
extern Il2CppType MonoBehaviourU5BU5D_t355_0_0_1;
extern CustomAttributesCache PlatformSpecificContent_t356__CustomAttributeCache_m_MonoBehaviours;
FieldInfo PlatformSpecificContent_t356____m_MonoBehaviours_4_FieldInfo = 
{
	"m_MonoBehaviours"/* name */
	, &MonoBehaviourU5BU5D_t355_0_0_1/* type */
	, &PlatformSpecificContent_t356_il2cpp_TypeInfo/* parent */
	, offsetof(PlatformSpecificContent_t356, ___m_MonoBehaviours_4)/* data */
	, &PlatformSpecificContent_t356__CustomAttributeCache_m_MonoBehaviours/* custom_attributes_cache */

};
extern Il2CppType Boolean_t379_0_0_1;
extern CustomAttributesCache PlatformSpecificContent_t356__CustomAttributeCache_m_ChildrenOfThisObject;
FieldInfo PlatformSpecificContent_t356____m_ChildrenOfThisObject_5_FieldInfo = 
{
	"m_ChildrenOfThisObject"/* name */
	, &Boolean_t379_0_0_1/* type */
	, &PlatformSpecificContent_t356_il2cpp_TypeInfo/* parent */
	, offsetof(PlatformSpecificContent_t356, ___m_ChildrenOfThisObject_5)/* data */
	, &PlatformSpecificContent_t356__CustomAttributeCache_m_ChildrenOfThisObject/* custom_attributes_cache */

};
static FieldInfo* PlatformSpecificContent_t356_FieldInfos[] =
{
	&PlatformSpecificContent_t356____m_BuildTargetGroup_2_FieldInfo,
	&PlatformSpecificContent_t356____m_Content_3_FieldInfo,
	&PlatformSpecificContent_t356____m_MonoBehaviours_4_FieldInfo,
	&PlatformSpecificContent_t356____m_ChildrenOfThisObject_5_FieldInfo,
	NULL
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
// System.Void UnityStandardAssets.Utility.PlatformSpecificContent::.ctor()
MethodInfo PlatformSpecificContent__ctor_m1185_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&PlatformSpecificContent__ctor_m1185/* method */
	, &PlatformSpecificContent_t356_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1280/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
// System.Void UnityStandardAssets.Utility.PlatformSpecificContent::OnEnable()
MethodInfo PlatformSpecificContent_OnEnable_m1186_MethodInfo = 
{
	"OnEnable"/* name */
	, (methodPointerType)&PlatformSpecificContent_OnEnable_m1186/* method */
	, &PlatformSpecificContent_t356_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1281/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
// System.Void UnityStandardAssets.Utility.PlatformSpecificContent::CheckEnableContent()
MethodInfo PlatformSpecificContent_CheckEnableContent_m1187_MethodInfo = 
{
	"CheckEnableContent"/* name */
	, (methodPointerType)&PlatformSpecificContent_CheckEnableContent_m1187/* method */
	, &PlatformSpecificContent_t356_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1282/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t379_0_0_0;
static ParameterInfo PlatformSpecificContent_t356_PlatformSpecificContent_EnableContent_m1188_ParameterInfos[] = 
{
	{"enabled", 0, 134218774, &EmptyCustomAttributesCache, &Boolean_t379_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_SByte_t381 (MethodInfo* method, void* obj, void** args);
// System.Void UnityStandardAssets.Utility.PlatformSpecificContent::EnableContent(System.Boolean)
MethodInfo PlatformSpecificContent_EnableContent_m1188_MethodInfo = 
{
	"EnableContent"/* name */
	, (methodPointerType)&PlatformSpecificContent_EnableContent_m1188/* method */
	, &PlatformSpecificContent_t356_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_SByte_t381/* invoker_method */
	, PlatformSpecificContent_t356_PlatformSpecificContent_EnableContent_m1188_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1283/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* PlatformSpecificContent_t356_MethodInfos[] =
{
	&PlatformSpecificContent__ctor_m1185_MethodInfo,
	&PlatformSpecificContent_OnEnable_m1186_MethodInfo,
	&PlatformSpecificContent_CheckEnableContent_m1187_MethodInfo,
	&PlatformSpecificContent_EnableContent_m1188_MethodInfo,
	NULL
};
extern TypeInfo BuildTargetGroup_t353_il2cpp_TypeInfo;
static TypeInfo* PlatformSpecificContent_t356_il2cpp_TypeInfo__nestedTypes[2] =
{
	&BuildTargetGroup_t353_il2cpp_TypeInfo,
	NULL
};
static MethodInfo* PlatformSpecificContent_t356_VTable[] =
{
	&Object_Equals_m1333_MethodInfo,
	&Object_Finalize_m1253_MethodInfo,
	&Object_GetHashCode_m1334_MethodInfo,
	&Object_ToString_m1335_MethodInfo,
};
void PlatformSpecificContent_t356_CustomAttributesCacheGenerator_m_BuildTargetGroup(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t400 * tmp;
		tmp = (SerializeField_t400 *)il2cpp_codegen_object_new (&SerializeField_t400_il2cpp_TypeInfo);
		SerializeField__ctor_m1336(tmp, &SerializeField__ctor_m1336_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void PlatformSpecificContent_t356_CustomAttributesCacheGenerator_m_Content(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t400 * tmp;
		tmp = (SerializeField_t400 *)il2cpp_codegen_object_new (&SerializeField_t400_il2cpp_TypeInfo);
		SerializeField__ctor_m1336(tmp, &SerializeField__ctor_m1336_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void PlatformSpecificContent_t356_CustomAttributesCacheGenerator_m_MonoBehaviours(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t400 * tmp;
		tmp = (SerializeField_t400 *)il2cpp_codegen_object_new (&SerializeField_t400_il2cpp_TypeInfo);
		SerializeField__ctor_m1336(tmp, &SerializeField__ctor_m1336_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void PlatformSpecificContent_t356_CustomAttributesCacheGenerator_m_ChildrenOfThisObject(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t400 * tmp;
		tmp = (SerializeField_t400 *)il2cpp_codegen_object_new (&SerializeField_t400_il2cpp_TypeInfo);
		SerializeField__ctor_m1336(tmp, &SerializeField__ctor_m1336_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache PlatformSpecificContent_t356__CustomAttributeCache_m_BuildTargetGroup = {
1,
NULL,
&PlatformSpecificContent_t356_CustomAttributesCacheGenerator_m_BuildTargetGroup
};
CustomAttributesCache PlatformSpecificContent_t356__CustomAttributeCache_m_Content = {
1,
NULL,
&PlatformSpecificContent_t356_CustomAttributesCacheGenerator_m_Content
};
CustomAttributesCache PlatformSpecificContent_t356__CustomAttributeCache_m_MonoBehaviours = {
1,
NULL,
&PlatformSpecificContent_t356_CustomAttributesCacheGenerator_m_MonoBehaviours
};
CustomAttributesCache PlatformSpecificContent_t356__CustomAttributeCache_m_ChildrenOfThisObject = {
1,
NULL,
&PlatformSpecificContent_t356_CustomAttributesCacheGenerator_m_ChildrenOfThisObject
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType PlatformSpecificContent_t356_0_0_0;
extern Il2CppType PlatformSpecificContent_t356_1_0_0;
struct PlatformSpecificContent_t356;
extern CustomAttributesCache PlatformSpecificContent_t356__CustomAttributeCache_m_BuildTargetGroup;
extern CustomAttributesCache PlatformSpecificContent_t356__CustomAttributeCache_m_Content;
extern CustomAttributesCache PlatformSpecificContent_t356__CustomAttributeCache_m_MonoBehaviours;
extern CustomAttributesCache PlatformSpecificContent_t356__CustomAttributeCache_m_ChildrenOfThisObject;
TypeInfo PlatformSpecificContent_t356_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image/* image */
	, NULL/* gc_desc */
	, "PlatformSpecificContent"/* name */
	, "UnityStandardAssets.Utility"/* namespaze */
	, PlatformSpecificContent_t356_MethodInfos/* methods */
	, NULL/* properties */
	, PlatformSpecificContent_t356_FieldInfos/* fields */
	, NULL/* events */
	, &MonoBehaviour_t39_il2cpp_TypeInfo/* parent */
	, PlatformSpecificContent_t356_il2cpp_TypeInfo__nestedTypes/* nested_types */
	, NULL/* nested_in */
	, &PlatformSpecificContent_t356_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, PlatformSpecificContent_t356_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &PlatformSpecificContent_t356_il2cpp_TypeInfo/* cast_class */
	, &PlatformSpecificContent_t356_0_0_0/* byval_arg */
	, &PlatformSpecificContent_t356_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (PlatformSpecificContent_t356)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048577/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 4/* method_count */
	, 0/* property_count */
	, 4/* field_count */
	, 0/* event_count */
	, 1/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo SimpleActivatorMenu_t357_il2cpp_TypeInfo;



// System.Void UnityStandardAssets.Utility.SimpleActivatorMenu::.ctor()
extern MethodInfo SimpleActivatorMenu__ctor_m1189_MethodInfo;
 void SimpleActivatorMenu__ctor_m1189 (SimpleActivatorMenu_t357 * __this, MethodInfo* method){
	{
		MonoBehaviour__ctor_m1402(__this, /*hidden argument*/&MonoBehaviour__ctor_m1402_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.SimpleActivatorMenu::OnEnable()
extern MethodInfo SimpleActivatorMenu_OnEnable_m1190_MethodInfo;
 void SimpleActivatorMenu_OnEnable_m1190 (SimpleActivatorMenu_t357 * __this, MethodInfo* method){
	{
		__this->___m_CurrentActiveObject_4 = 0;
		GUIText_t343 * L_0 = (__this->___camSwitchButton_2);
		GameObjectU5BU5D_t354* L_1 = (__this->___objects_3);
		int32_t L_2 = (__this->___m_CurrentActiveObject_4);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		NullCheck((*(GameObject_t235 **)(GameObject_t235 **)SZArrayLdElema(L_1, L_3)));
		String_t* L_4 = Object_get_name_m1905((*(GameObject_t235 **)(GameObject_t235 **)SZArrayLdElema(L_1, L_3)), /*hidden argument*/&Object_get_name_m1905_MethodInfo);
		NullCheck(L_0);
		GUIText_set_text_m2135(L_0, L_4, /*hidden argument*/&GUIText_set_text_m2135_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.SimpleActivatorMenu::NextCamera()
extern MethodInfo SimpleActivatorMenu_NextCamera_m1191_MethodInfo;
 void SimpleActivatorMenu_NextCamera_m1191 (SimpleActivatorMenu_t357 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = (__this->___m_CurrentActiveObject_4);
		GameObjectU5BU5D_t354* L_1 = (__this->___objects_3);
		NullCheck(L_1);
		if ((((int32_t)((int32_t)(L_0+1))) < ((int32_t)(((int32_t)(((Array_t *)L_1)->max_length))))))
		{
			goto IL_001b;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0023;
	}

IL_001b:
	{
		int32_t L_2 = (__this->___m_CurrentActiveObject_4);
		G_B3_0 = ((int32_t)(L_2+1));
	}

IL_0023:
	{
		V_0 = G_B3_0;
		V_1 = 0;
		goto IL_0040;
	}

IL_002b:
	{
		GameObjectU5BU5D_t354* L_3 = (__this->___objects_3);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, V_1);
		int32_t L_4 = V_1;
		NullCheck((*(GameObject_t235 **)(GameObject_t235 **)SZArrayLdElema(L_3, L_4)));
		GameObject_SetActive_m1804((*(GameObject_t235 **)(GameObject_t235 **)SZArrayLdElema(L_3, L_4)), ((((int32_t)V_1) == ((int32_t)V_0))? 1 : 0), /*hidden argument*/&GameObject_SetActive_m1804_MethodInfo);
		V_1 = ((int32_t)(V_1+1));
	}

IL_0040:
	{
		GameObjectU5BU5D_t354* L_5 = (__this->___objects_3);
		NullCheck(L_5);
		if ((((int32_t)V_1) < ((int32_t)(((int32_t)(((Array_t *)L_5)->max_length))))))
		{
			goto IL_002b;
		}
	}
	{
		__this->___m_CurrentActiveObject_4 = V_0;
		GUIText_t343 * L_6 = (__this->___camSwitchButton_2);
		GameObjectU5BU5D_t354* L_7 = (__this->___objects_3);
		int32_t L_8 = (__this->___m_CurrentActiveObject_4);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		NullCheck((*(GameObject_t235 **)(GameObject_t235 **)SZArrayLdElema(L_7, L_9)));
		String_t* L_10 = Object_get_name_m1905((*(GameObject_t235 **)(GameObject_t235 **)SZArrayLdElema(L_7, L_9)), /*hidden argument*/&Object_get_name_m1905_MethodInfo);
		NullCheck(L_6);
		GUIText_set_text_m2135(L_6, L_10, /*hidden argument*/&GUIText_set_text_m2135_MethodInfo);
		return;
	}
}
// Metadata Definition UnityStandardAssets.Utility.SimpleActivatorMenu
extern Il2CppType GUIText_t343_0_0_6;
FieldInfo SimpleActivatorMenu_t357____camSwitchButton_2_FieldInfo = 
{
	"camSwitchButton"/* name */
	, &GUIText_t343_0_0_6/* type */
	, &SimpleActivatorMenu_t357_il2cpp_TypeInfo/* parent */
	, offsetof(SimpleActivatorMenu_t357, ___camSwitchButton_2)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType GameObjectU5BU5D_t354_0_0_6;
FieldInfo SimpleActivatorMenu_t357____objects_3_FieldInfo = 
{
	"objects"/* name */
	, &GameObjectU5BU5D_t354_0_0_6/* type */
	, &SimpleActivatorMenu_t357_il2cpp_TypeInfo/* parent */
	, offsetof(SimpleActivatorMenu_t357, ___objects_3)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t386_0_0_1;
FieldInfo SimpleActivatorMenu_t357____m_CurrentActiveObject_4_FieldInfo = 
{
	"m_CurrentActiveObject"/* name */
	, &Int32_t386_0_0_1/* type */
	, &SimpleActivatorMenu_t357_il2cpp_TypeInfo/* parent */
	, offsetof(SimpleActivatorMenu_t357, ___m_CurrentActiveObject_4)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* SimpleActivatorMenu_t357_FieldInfos[] =
{
	&SimpleActivatorMenu_t357____camSwitchButton_2_FieldInfo,
	&SimpleActivatorMenu_t357____objects_3_FieldInfo,
	&SimpleActivatorMenu_t357____m_CurrentActiveObject_4_FieldInfo,
	NULL
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
// System.Void UnityStandardAssets.Utility.SimpleActivatorMenu::.ctor()
MethodInfo SimpleActivatorMenu__ctor_m1189_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&SimpleActivatorMenu__ctor_m1189/* method */
	, &SimpleActivatorMenu_t357_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1284/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
// System.Void UnityStandardAssets.Utility.SimpleActivatorMenu::OnEnable()
MethodInfo SimpleActivatorMenu_OnEnable_m1190_MethodInfo = 
{
	"OnEnable"/* name */
	, (methodPointerType)&SimpleActivatorMenu_OnEnable_m1190/* method */
	, &SimpleActivatorMenu_t357_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1285/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
// System.Void UnityStandardAssets.Utility.SimpleActivatorMenu::NextCamera()
MethodInfo SimpleActivatorMenu_NextCamera_m1191_MethodInfo = 
{
	"NextCamera"/* name */
	, (methodPointerType)&SimpleActivatorMenu_NextCamera_m1191/* method */
	, &SimpleActivatorMenu_t357_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1286/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* SimpleActivatorMenu_t357_MethodInfos[] =
{
	&SimpleActivatorMenu__ctor_m1189_MethodInfo,
	&SimpleActivatorMenu_OnEnable_m1190_MethodInfo,
	&SimpleActivatorMenu_NextCamera_m1191_MethodInfo,
	NULL
};
static MethodInfo* SimpleActivatorMenu_t357_VTable[] =
{
	&Object_Equals_m1333_MethodInfo,
	&Object_Finalize_m1253_MethodInfo,
	&Object_GetHashCode_m1334_MethodInfo,
	&Object_ToString_m1335_MethodInfo,
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType SimpleActivatorMenu_t357_0_0_0;
extern Il2CppType SimpleActivatorMenu_t357_1_0_0;
struct SimpleActivatorMenu_t357;
TypeInfo SimpleActivatorMenu_t357_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image/* image */
	, NULL/* gc_desc */
	, "SimpleActivatorMenu"/* name */
	, "UnityStandardAssets.Utility"/* namespaze */
	, SimpleActivatorMenu_t357_MethodInfos/* methods */
	, NULL/* properties */
	, SimpleActivatorMenu_t357_FieldInfos/* fields */
	, NULL/* events */
	, &MonoBehaviour_t39_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &SimpleActivatorMenu_t357_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, SimpleActivatorMenu_t357_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &SimpleActivatorMenu_t357_il2cpp_TypeInfo/* cast_class */
	, &SimpleActivatorMenu_t357_0_0_0/* byval_arg */
	, &SimpleActivatorMenu_t357_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (SimpleActivatorMenu_t357)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048577/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 3/* method_count */
	, 0/* property_count */
	, 3/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo SimpleMouseRotator_t358_il2cpp_TypeInfo;

extern TypeInfo Vector2_t177_il2cpp_TypeInfo;
extern MethodInfo Vector3__ctor_m2145_MethodInfo;
extern MethodInfo Vector2_op_Implicit_m1766_MethodInfo;
extern MethodInfo Transform_get_localRotation_m2146_MethodInfo;
extern MethodInfo Transform_set_localRotation_m2147_MethodInfo;
extern MethodInfo CrossPlatformInputManager_GetAxis_m759_MethodInfo;
extern MethodInfo Mathf_Clamp_m1757_MethodInfo;
extern MethodInfo Screen_get_width_m1820_MethodInfo;
extern MethodInfo Screen_get_height_m1979_MethodInfo;
extern MethodInfo Vector3_SmoothDamp_m1752_MethodInfo;
extern MethodInfo Quaternion_Euler_m1972_MethodInfo;
extern MethodInfo Quaternion_op_Multiply_m2148_MethodInfo;


// System.Void UnityStandardAssets.Utility.SimpleMouseRotator::.ctor()
extern MethodInfo SimpleMouseRotator__ctor_m1192_MethodInfo;
 void SimpleMouseRotator__ctor_m1192 (SimpleMouseRotator_t358 * __this, MethodInfo* method){
	{
		Vector3_t175  L_0 = {0};
		Vector3__ctor_m2145(&L_0, (70.0f), (70.0f), /*hidden argument*/&Vector3__ctor_m2145_MethodInfo);
		Vector2_t177  L_1 = Vector2_op_Implicit_m1766(NULL /*static, unused*/, L_0, /*hidden argument*/&Vector2_op_Implicit_m1766_MethodInfo);
		__this->___rotationRange_2 = L_1;
		__this->___rotationSpeed_3 = (10.0f);
		__this->___dampingTime_4 = (0.2f);
		__this->___autoZeroVerticalOnMobile_5 = 1;
		__this->___relative_7 = 1;
		MonoBehaviour__ctor_m1402(__this, /*hidden argument*/&MonoBehaviour__ctor_m1402_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.SimpleMouseRotator::Start()
extern MethodInfo SimpleMouseRotator_Start_m1193_MethodInfo;
 void SimpleMouseRotator_Start_m1193 (SimpleMouseRotator_t358 * __this, MethodInfo* method){
	{
		Transform_t173 * L_0 = Component_get_transform_m1739(__this, /*hidden argument*/&Component_get_transform_m1739_MethodInfo);
		NullCheck(L_0);
		Quaternion_t299  L_1 = Transform_get_localRotation_m2146(L_0, /*hidden argument*/&Transform_get_localRotation_m2146_MethodInfo);
		__this->___m_OriginalRotation_11 = L_1;
		return;
	}
}
// System.Void UnityStandardAssets.Utility.SimpleMouseRotator::Update()
extern MethodInfo SimpleMouseRotator_Update_m1194_MethodInfo;
 void SimpleMouseRotator_Update_m1194 (SimpleMouseRotator_t358 * __this, MethodInfo* method){
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_t175  V_2 = {0};
	Vector3_t175  V_3 = {0};
	{
		Transform_t173 * L_0 = Component_get_transform_m1739(__this, /*hidden argument*/&Component_get_transform_m1739_MethodInfo);
		Quaternion_t299  L_1 = (__this->___m_OriginalRotation_11);
		NullCheck(L_0);
		Transform_set_localRotation_m2147(L_0, L_1, /*hidden argument*/&Transform_set_localRotation_m2147_MethodInfo);
		bool L_2 = (__this->___relative_7);
		if (!L_2)
		{
			goto IL_0293;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CrossPlatformInputManager_t192_il2cpp_TypeInfo));
		float L_3 = CrossPlatformInputManager_GetAxis_m759(NULL /*static, unused*/, (String_t*) &_stringLiteral464, /*hidden argument*/&CrossPlatformInputManager_GetAxis_m759_MethodInfo);
		V_0 = L_3;
		float L_4 = CrossPlatformInputManager_GetAxis_m759(NULL /*static, unused*/, (String_t*) &_stringLiteral465, /*hidden argument*/&CrossPlatformInputManager_GetAxis_m759_MethodInfo);
		V_1 = L_4;
		Vector3_t175 * L_5 = &(__this->___m_TargetAngles_8);
		NullCheck(L_5);
		float L_6 = (L_5->___y_2);
		if ((((float)L_6) <= ((float)(180.0f))))
		{
			goto IL_0075;
		}
	}
	{
		Vector3_t175 * L_7 = &(__this->___m_TargetAngles_8);
		Vector3_t175 * L_8 = L_7;
		NullCheck(L_8);
		float L_9 = (L_8->___y_2);
		NullCheck(L_8);
		L_8->___y_2 = ((float)(L_9-(360.0f)));
		Vector3_t175 * L_10 = &(__this->___m_FollowAngles_9);
		Vector3_t175 * L_11 = L_10;
		NullCheck(L_11);
		float L_12 = (L_11->___y_2);
		NullCheck(L_11);
		L_11->___y_2 = ((float)(L_12-(360.0f)));
	}

IL_0075:
	{
		Vector3_t175 * L_13 = &(__this->___m_TargetAngles_8);
		NullCheck(L_13);
		float L_14 = (L_13->___x_1);
		if ((((float)L_14) <= ((float)(180.0f))))
		{
			goto IL_00b8;
		}
	}
	{
		Vector3_t175 * L_15 = &(__this->___m_TargetAngles_8);
		Vector3_t175 * L_16 = L_15;
		NullCheck(L_16);
		float L_17 = (L_16->___x_1);
		NullCheck(L_16);
		L_16->___x_1 = ((float)(L_17-(360.0f)));
		Vector3_t175 * L_18 = &(__this->___m_FollowAngles_9);
		Vector3_t175 * L_19 = L_18;
		NullCheck(L_19);
		float L_20 = (L_19->___x_1);
		NullCheck(L_19);
		L_19->___x_1 = ((float)(L_20-(360.0f)));
	}

IL_00b8:
	{
		Vector3_t175 * L_21 = &(__this->___m_TargetAngles_8);
		NullCheck(L_21);
		float L_22 = (L_21->___y_2);
		if ((((float)L_22) >= ((float)(-180.0f))))
		{
			goto IL_00fb;
		}
	}
	{
		Vector3_t175 * L_23 = &(__this->___m_TargetAngles_8);
		Vector3_t175 * L_24 = L_23;
		NullCheck(L_24);
		float L_25 = (L_24->___y_2);
		NullCheck(L_24);
		L_24->___y_2 = ((float)(L_25+(360.0f)));
		Vector3_t175 * L_26 = &(__this->___m_FollowAngles_9);
		Vector3_t175 * L_27 = L_26;
		NullCheck(L_27);
		float L_28 = (L_27->___y_2);
		NullCheck(L_27);
		L_27->___y_2 = ((float)(L_28+(360.0f)));
	}

IL_00fb:
	{
		Vector3_t175 * L_29 = &(__this->___m_TargetAngles_8);
		NullCheck(L_29);
		float L_30 = (L_29->___x_1);
		if ((((float)L_30) >= ((float)(-180.0f))))
		{
			goto IL_013e;
		}
	}
	{
		Vector3_t175 * L_31 = &(__this->___m_TargetAngles_8);
		Vector3_t175 * L_32 = L_31;
		NullCheck(L_32);
		float L_33 = (L_32->___x_1);
		NullCheck(L_32);
		L_32->___x_1 = ((float)(L_33+(360.0f)));
		Vector3_t175 * L_34 = &(__this->___m_FollowAngles_9);
		Vector3_t175 * L_35 = L_34;
		NullCheck(L_35);
		float L_36 = (L_35->___x_1);
		NullCheck(L_35);
		L_35->___x_1 = ((float)(L_36+(360.0f)));
	}

IL_013e:
	{
		bool L_37 = (__this->___autoZeroHorizontalOnMobile_6);
		if (!L_37)
		{
			goto IL_018e;
		}
	}
	{
		Vector3_t175 * L_38 = &(__this->___m_TargetAngles_8);
		Vector2_t177 * L_39 = &(__this->___rotationRange_2);
		NullCheck(L_39);
		float L_40 = (L_39->___y_2);
		Vector2_t177 * L_41 = &(__this->___rotationRange_2);
		NullCheck(L_41);
		float L_42 = (L_41->___y_2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t505_il2cpp_TypeInfo));
		float L_43 = Mathf_Lerp_m1756(NULL /*static, unused*/, ((float)((float)((-L_40))*(float)(0.5f))), ((float)((float)L_42*(float)(0.5f))), ((float)(((float)((float)V_0*(float)(0.5f)))+(0.5f))), /*hidden argument*/&Mathf_Lerp_m1756_MethodInfo);
		NullCheck(L_38);
		L_38->___y_2 = L_43;
		goto IL_01a8;
	}

IL_018e:
	{
		Vector3_t175 * L_44 = &(__this->___m_TargetAngles_8);
		Vector3_t175 * L_45 = L_44;
		NullCheck(L_45);
		float L_46 = (L_45->___y_2);
		float L_47 = (__this->___rotationSpeed_3);
		NullCheck(L_45);
		L_45->___y_2 = ((float)(L_46+((float)((float)V_0*(float)L_47))));
	}

IL_01a8:
	{
		bool L_48 = (__this->___autoZeroVerticalOnMobile_5);
		if (!L_48)
		{
			goto IL_01f8;
		}
	}
	{
		Vector3_t175 * L_49 = &(__this->___m_TargetAngles_8);
		Vector2_t177 * L_50 = &(__this->___rotationRange_2);
		NullCheck(L_50);
		float L_51 = (L_50->___x_1);
		Vector2_t177 * L_52 = &(__this->___rotationRange_2);
		NullCheck(L_52);
		float L_53 = (L_52->___x_1);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t505_il2cpp_TypeInfo));
		float L_54 = Mathf_Lerp_m1756(NULL /*static, unused*/, ((float)((float)((-L_51))*(float)(0.5f))), ((float)((float)L_53*(float)(0.5f))), ((float)(((float)((float)V_1*(float)(0.5f)))+(0.5f))), /*hidden argument*/&Mathf_Lerp_m1756_MethodInfo);
		NullCheck(L_49);
		L_49->___x_1 = L_54;
		goto IL_0212;
	}

IL_01f8:
	{
		Vector3_t175 * L_55 = &(__this->___m_TargetAngles_8);
		Vector3_t175 * L_56 = L_55;
		NullCheck(L_56);
		float L_57 = (L_56->___x_1);
		float L_58 = (__this->___rotationSpeed_3);
		NullCheck(L_56);
		L_56->___x_1 = ((float)(L_57+((float)((float)V_1*(float)L_58))));
	}

IL_0212:
	{
		Vector3_t175 * L_59 = &(__this->___m_TargetAngles_8);
		Vector3_t175 * L_60 = &(__this->___m_TargetAngles_8);
		NullCheck(L_60);
		float L_61 = (L_60->___y_2);
		Vector2_t177 * L_62 = &(__this->___rotationRange_2);
		NullCheck(L_62);
		float L_63 = (L_62->___y_2);
		Vector2_t177 * L_64 = &(__this->___rotationRange_2);
		NullCheck(L_64);
		float L_65 = (L_64->___y_2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t505_il2cpp_TypeInfo));
		float L_66 = Mathf_Clamp_m1757(NULL /*static, unused*/, L_61, ((float)((float)((-L_63))*(float)(0.5f))), ((float)((float)L_65*(float)(0.5f))), /*hidden argument*/&Mathf_Clamp_m1757_MethodInfo);
		NullCheck(L_59);
		L_59->___y_2 = L_66;
		Vector3_t175 * L_67 = &(__this->___m_TargetAngles_8);
		Vector3_t175 * L_68 = &(__this->___m_TargetAngles_8);
		NullCheck(L_68);
		float L_69 = (L_68->___x_1);
		Vector2_t177 * L_70 = &(__this->___rotationRange_2);
		NullCheck(L_70);
		float L_71 = (L_70->___x_1);
		Vector2_t177 * L_72 = &(__this->___rotationRange_2);
		NullCheck(L_72);
		float L_73 = (L_72->___x_1);
		float L_74 = Mathf_Clamp_m1757(NULL /*static, unused*/, L_69, ((float)((float)((-L_71))*(float)(0.5f))), ((float)((float)L_73*(float)(0.5f))), /*hidden argument*/&Mathf_Clamp_m1757_MethodInfo);
		NullCheck(L_67);
		L_67->___x_1 = L_74;
		goto IL_0325;
	}

IL_0293:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Input_t506_il2cpp_TypeInfo));
		Vector3_t175  L_75 = Input_get_mousePosition_m1815(NULL /*static, unused*/, /*hidden argument*/&Input_get_mousePosition_m1815_MethodInfo);
		V_2 = L_75;
		NullCheck((&V_2));
		float L_76 = ((&V_2)->___x_1);
		V_0 = L_76;
		Vector3_t175  L_77 = Input_get_mousePosition_m1815(NULL /*static, unused*/, /*hidden argument*/&Input_get_mousePosition_m1815_MethodInfo);
		V_3 = L_77;
		NullCheck((&V_3));
		float L_78 = ((&V_3)->___y_2);
		V_1 = L_78;
		Vector3_t175 * L_79 = &(__this->___m_TargetAngles_8);
		Vector2_t177 * L_80 = &(__this->___rotationRange_2);
		NullCheck(L_80);
		float L_81 = (L_80->___y_2);
		Vector2_t177 * L_82 = &(__this->___rotationRange_2);
		NullCheck(L_82);
		float L_83 = (L_82->___y_2);
		int32_t L_84 = Screen_get_width_m1820(NULL /*static, unused*/, /*hidden argument*/&Screen_get_width_m1820_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t505_il2cpp_TypeInfo));
		float L_85 = Mathf_Lerp_m1756(NULL /*static, unused*/, ((float)((float)((-L_81))*(float)(0.5f))), ((float)((float)L_83*(float)(0.5f))), ((float)((float)V_0/(float)(((float)L_84)))), /*hidden argument*/&Mathf_Lerp_m1756_MethodInfo);
		NullCheck(L_79);
		L_79->___y_2 = L_85;
		Vector3_t175 * L_86 = &(__this->___m_TargetAngles_8);
		Vector2_t177 * L_87 = &(__this->___rotationRange_2);
		NullCheck(L_87);
		float L_88 = (L_87->___x_1);
		Vector2_t177 * L_89 = &(__this->___rotationRange_2);
		NullCheck(L_89);
		float L_90 = (L_89->___x_1);
		int32_t L_91 = Screen_get_height_m1979(NULL /*static, unused*/, /*hidden argument*/&Screen_get_height_m1979_MethodInfo);
		float L_92 = Mathf_Lerp_m1756(NULL /*static, unused*/, ((float)((float)((-L_88))*(float)(0.5f))), ((float)((float)L_90*(float)(0.5f))), ((float)((float)V_1/(float)(((float)L_91)))), /*hidden argument*/&Mathf_Lerp_m1756_MethodInfo);
		NullCheck(L_86);
		L_86->___x_1 = L_92;
	}

IL_0325:
	{
		Vector3_t175  L_93 = (__this->___m_FollowAngles_9);
		Vector3_t175  L_94 = (__this->___m_TargetAngles_8);
		Vector3_t175 * L_95 = &(__this->___m_FollowVelocity_10);
		float L_96 = (__this->___dampingTime_4);
		Vector3_t175  L_97 = Vector3_SmoothDamp_m1752(NULL /*static, unused*/, L_93, L_94, L_95, L_96, /*hidden argument*/&Vector3_SmoothDamp_m1752_MethodInfo);
		__this->___m_FollowAngles_9 = L_97;
		Transform_t173 * L_98 = Component_get_transform_m1739(__this, /*hidden argument*/&Component_get_transform_m1739_MethodInfo);
		Quaternion_t299  L_99 = (__this->___m_OriginalRotation_11);
		Vector3_t175 * L_100 = &(__this->___m_FollowAngles_9);
		NullCheck(L_100);
		float L_101 = (L_100->___x_1);
		Vector3_t175 * L_102 = &(__this->___m_FollowAngles_9);
		NullCheck(L_102);
		float L_103 = (L_102->___y_2);
		Quaternion_t299  L_104 = Quaternion_Euler_m1972(NULL /*static, unused*/, ((-L_101)), L_103, (0.0f), /*hidden argument*/&Quaternion_Euler_m1972_MethodInfo);
		Quaternion_t299  L_105 = Quaternion_op_Multiply_m2148(NULL /*static, unused*/, L_99, L_104, /*hidden argument*/&Quaternion_op_Multiply_m2148_MethodInfo);
		NullCheck(L_98);
		Transform_set_localRotation_m2147(L_98, L_105, /*hidden argument*/&Transform_set_localRotation_m2147_MethodInfo);
		return;
	}
}
// Metadata Definition UnityStandardAssets.Utility.SimpleMouseRotator
extern Il2CppType Vector2_t177_0_0_6;
FieldInfo SimpleMouseRotator_t358____rotationRange_2_FieldInfo = 
{
	"rotationRange"/* name */
	, &Vector2_t177_0_0_6/* type */
	, &SimpleMouseRotator_t358_il2cpp_TypeInfo/* parent */
	, offsetof(SimpleMouseRotator_t358, ___rotationRange_2)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Single_t448_0_0_6;
FieldInfo SimpleMouseRotator_t358____rotationSpeed_3_FieldInfo = 
{
	"rotationSpeed"/* name */
	, &Single_t448_0_0_6/* type */
	, &SimpleMouseRotator_t358_il2cpp_TypeInfo/* parent */
	, offsetof(SimpleMouseRotator_t358, ___rotationSpeed_3)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Single_t448_0_0_6;
FieldInfo SimpleMouseRotator_t358____dampingTime_4_FieldInfo = 
{
	"dampingTime"/* name */
	, &Single_t448_0_0_6/* type */
	, &SimpleMouseRotator_t358_il2cpp_TypeInfo/* parent */
	, offsetof(SimpleMouseRotator_t358, ___dampingTime_4)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Boolean_t379_0_0_6;
FieldInfo SimpleMouseRotator_t358____autoZeroVerticalOnMobile_5_FieldInfo = 
{
	"autoZeroVerticalOnMobile"/* name */
	, &Boolean_t379_0_0_6/* type */
	, &SimpleMouseRotator_t358_il2cpp_TypeInfo/* parent */
	, offsetof(SimpleMouseRotator_t358, ___autoZeroVerticalOnMobile_5)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Boolean_t379_0_0_6;
FieldInfo SimpleMouseRotator_t358____autoZeroHorizontalOnMobile_6_FieldInfo = 
{
	"autoZeroHorizontalOnMobile"/* name */
	, &Boolean_t379_0_0_6/* type */
	, &SimpleMouseRotator_t358_il2cpp_TypeInfo/* parent */
	, offsetof(SimpleMouseRotator_t358, ___autoZeroHorizontalOnMobile_6)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Boolean_t379_0_0_6;
FieldInfo SimpleMouseRotator_t358____relative_7_FieldInfo = 
{
	"relative"/* name */
	, &Boolean_t379_0_0_6/* type */
	, &SimpleMouseRotator_t358_il2cpp_TypeInfo/* parent */
	, offsetof(SimpleMouseRotator_t358, ___relative_7)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Vector3_t175_0_0_1;
FieldInfo SimpleMouseRotator_t358____m_TargetAngles_8_FieldInfo = 
{
	"m_TargetAngles"/* name */
	, &Vector3_t175_0_0_1/* type */
	, &SimpleMouseRotator_t358_il2cpp_TypeInfo/* parent */
	, offsetof(SimpleMouseRotator_t358, ___m_TargetAngles_8)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Vector3_t175_0_0_1;
FieldInfo SimpleMouseRotator_t358____m_FollowAngles_9_FieldInfo = 
{
	"m_FollowAngles"/* name */
	, &Vector3_t175_0_0_1/* type */
	, &SimpleMouseRotator_t358_il2cpp_TypeInfo/* parent */
	, offsetof(SimpleMouseRotator_t358, ___m_FollowAngles_9)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Vector3_t175_0_0_1;
FieldInfo SimpleMouseRotator_t358____m_FollowVelocity_10_FieldInfo = 
{
	"m_FollowVelocity"/* name */
	, &Vector3_t175_0_0_1/* type */
	, &SimpleMouseRotator_t358_il2cpp_TypeInfo/* parent */
	, offsetof(SimpleMouseRotator_t358, ___m_FollowVelocity_10)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Quaternion_t299_0_0_1;
FieldInfo SimpleMouseRotator_t358____m_OriginalRotation_11_FieldInfo = 
{
	"m_OriginalRotation"/* name */
	, &Quaternion_t299_0_0_1/* type */
	, &SimpleMouseRotator_t358_il2cpp_TypeInfo/* parent */
	, offsetof(SimpleMouseRotator_t358, ___m_OriginalRotation_11)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* SimpleMouseRotator_t358_FieldInfos[] =
{
	&SimpleMouseRotator_t358____rotationRange_2_FieldInfo,
	&SimpleMouseRotator_t358____rotationSpeed_3_FieldInfo,
	&SimpleMouseRotator_t358____dampingTime_4_FieldInfo,
	&SimpleMouseRotator_t358____autoZeroVerticalOnMobile_5_FieldInfo,
	&SimpleMouseRotator_t358____autoZeroHorizontalOnMobile_6_FieldInfo,
	&SimpleMouseRotator_t358____relative_7_FieldInfo,
	&SimpleMouseRotator_t358____m_TargetAngles_8_FieldInfo,
	&SimpleMouseRotator_t358____m_FollowAngles_9_FieldInfo,
	&SimpleMouseRotator_t358____m_FollowVelocity_10_FieldInfo,
	&SimpleMouseRotator_t358____m_OriginalRotation_11_FieldInfo,
	NULL
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
// System.Void UnityStandardAssets.Utility.SimpleMouseRotator::.ctor()
MethodInfo SimpleMouseRotator__ctor_m1192_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&SimpleMouseRotator__ctor_m1192/* method */
	, &SimpleMouseRotator_t358_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1287/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
// System.Void UnityStandardAssets.Utility.SimpleMouseRotator::Start()
MethodInfo SimpleMouseRotator_Start_m1193_MethodInfo = 
{
	"Start"/* name */
	, (methodPointerType)&SimpleMouseRotator_Start_m1193/* method */
	, &SimpleMouseRotator_t358_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1288/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
// System.Void UnityStandardAssets.Utility.SimpleMouseRotator::Update()
MethodInfo SimpleMouseRotator_Update_m1194_MethodInfo = 
{
	"Update"/* name */
	, (methodPointerType)&SimpleMouseRotator_Update_m1194/* method */
	, &SimpleMouseRotator_t358_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1289/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* SimpleMouseRotator_t358_MethodInfos[] =
{
	&SimpleMouseRotator__ctor_m1192_MethodInfo,
	&SimpleMouseRotator_Start_m1193_MethodInfo,
	&SimpleMouseRotator_Update_m1194_MethodInfo,
	NULL
};
static MethodInfo* SimpleMouseRotator_t358_VTable[] =
{
	&Object_Equals_m1333_MethodInfo,
	&Object_Finalize_m1253_MethodInfo,
	&Object_GetHashCode_m1334_MethodInfo,
	&Object_ToString_m1335_MethodInfo,
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType SimpleMouseRotator_t358_0_0_0;
extern Il2CppType SimpleMouseRotator_t358_1_0_0;
struct SimpleMouseRotator_t358;
TypeInfo SimpleMouseRotator_t358_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image/* image */
	, NULL/* gc_desc */
	, "SimpleMouseRotator"/* name */
	, "UnityStandardAssets.Utility"/* namespaze */
	, SimpleMouseRotator_t358_MethodInfos/* methods */
	, NULL/* properties */
	, SimpleMouseRotator_t358_FieldInfos/* fields */
	, NULL/* events */
	, &MonoBehaviour_t39_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &SimpleMouseRotator_t358_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, SimpleMouseRotator_t358_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &SimpleMouseRotator_t358_il2cpp_TypeInfo/* cast_class */
	, &SimpleMouseRotator_t358_0_0_0/* byval_arg */
	, &SimpleMouseRotator_t358_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (SimpleMouseRotator_t358)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048577/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 3/* method_count */
	, 0/* property_count */
	, 10/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo SmoothFollow_t359_il2cpp_TypeInfo;

extern MethodInfo Transform_get_eulerAngles_m2149_MethodInfo;
extern MethodInfo Mathf_LerpAngle_m2150_MethodInfo;
extern MethodInfo Vector3_get_forward_m1751_MethodInfo;
extern MethodInfo Quaternion_op_Multiply_m2016_MethodInfo;
extern MethodInfo Transform_LookAt_m2151_MethodInfo;


// System.Void UnityStandardAssets.Utility.SmoothFollow::.ctor()
extern MethodInfo SmoothFollow__ctor_m1195_MethodInfo;
 void SmoothFollow__ctor_m1195 (SmoothFollow_t359 * __this, MethodInfo* method){
	{
		__this->___distance_3 = (10.0f);
		__this->___height_4 = (5.0f);
		MonoBehaviour__ctor_m1402(__this, /*hidden argument*/&MonoBehaviour__ctor_m1402_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.SmoothFollow::Start()
extern MethodInfo SmoothFollow_Start_m1196_MethodInfo;
 void SmoothFollow_Start_m1196 (SmoothFollow_t359 * __this, MethodInfo* method){
	{
		return;
	}
}
// System.Void UnityStandardAssets.Utility.SmoothFollow::LateUpdate()
extern MethodInfo SmoothFollow_LateUpdate_m1197_MethodInfo;
 void SmoothFollow_LateUpdate_m1197 (SmoothFollow_t359 * __this, MethodInfo* method){
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Quaternion_t299  V_4 = {0};
	Vector3_t175  V_5 = {0};
	Vector3_t175  V_6 = {0};
	Vector3_t175  V_7 = {0};
	Vector3_t175  V_8 = {0};
	Vector3_t175  V_9 = {0};
	Vector3_t175  V_10 = {0};
	{
		Transform_t173 * L_0 = (__this->___target_2);
		bool L_1 = Object_op_Implicit_m1775(NULL /*static, unused*/, L_0, /*hidden argument*/&Object_op_Implicit_m1775_MethodInfo);
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		return;
	}

IL_0011:
	{
		Transform_t173 * L_2 = (__this->___target_2);
		NullCheck(L_2);
		Vector3_t175  L_3 = Transform_get_eulerAngles_m2149(L_2, /*hidden argument*/&Transform_get_eulerAngles_m2149_MethodInfo);
		V_5 = L_3;
		NullCheck((&V_5));
		float L_4 = ((&V_5)->___y_2);
		V_0 = L_4;
		Transform_t173 * L_5 = (__this->___target_2);
		NullCheck(L_5);
		Vector3_t175  L_6 = Transform_get_position_m1738(L_5, /*hidden argument*/&Transform_get_position_m1738_MethodInfo);
		V_6 = L_6;
		NullCheck((&V_6));
		float L_7 = ((&V_6)->___y_2);
		float L_8 = (__this->___height_4);
		V_1 = ((float)(L_7+L_8));
		Transform_t173 * L_9 = Component_get_transform_m1739(__this, /*hidden argument*/&Component_get_transform_m1739_MethodInfo);
		NullCheck(L_9);
		Vector3_t175  L_10 = Transform_get_eulerAngles_m2149(L_9, /*hidden argument*/&Transform_get_eulerAngles_m2149_MethodInfo);
		V_7 = L_10;
		NullCheck((&V_7));
		float L_11 = ((&V_7)->___y_2);
		V_2 = L_11;
		Transform_t173 * L_12 = Component_get_transform_m1739(__this, /*hidden argument*/&Component_get_transform_m1739_MethodInfo);
		NullCheck(L_12);
		Vector3_t175  L_13 = Transform_get_position_m1738(L_12, /*hidden argument*/&Transform_get_position_m1738_MethodInfo);
		V_8 = L_13;
		NullCheck((&V_8));
		float L_14 = ((&V_8)->___y_2);
		V_3 = L_14;
		float L_15 = (__this->___rotationDamping_5);
		float L_16 = Time_get_deltaTime_m1748(NULL /*static, unused*/, /*hidden argument*/&Time_get_deltaTime_m1748_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t505_il2cpp_TypeInfo));
		float L_17 = Mathf_LerpAngle_m2150(NULL /*static, unused*/, V_2, V_0, ((float)((float)L_15*(float)L_16)), /*hidden argument*/&Mathf_LerpAngle_m2150_MethodInfo);
		V_2 = L_17;
		float L_18 = (__this->___heightDamping_6);
		float L_19 = Time_get_deltaTime_m1748(NULL /*static, unused*/, /*hidden argument*/&Time_get_deltaTime_m1748_MethodInfo);
		float L_20 = Mathf_Lerp_m1756(NULL /*static, unused*/, V_3, V_1, ((float)((float)L_18*(float)L_19)), /*hidden argument*/&Mathf_Lerp_m1756_MethodInfo);
		V_3 = L_20;
		Quaternion_t299  L_21 = Quaternion_Euler_m1972(NULL /*static, unused*/, (0.0f), V_2, (0.0f), /*hidden argument*/&Quaternion_Euler_m1972_MethodInfo);
		V_4 = L_21;
		Transform_t173 * L_22 = Component_get_transform_m1739(__this, /*hidden argument*/&Component_get_transform_m1739_MethodInfo);
		Transform_t173 * L_23 = (__this->___target_2);
		NullCheck(L_23);
		Vector3_t175  L_24 = Transform_get_position_m1738(L_23, /*hidden argument*/&Transform_get_position_m1738_MethodInfo);
		NullCheck(L_22);
		Transform_set_position_m1753(L_22, L_24, /*hidden argument*/&Transform_set_position_m1753_MethodInfo);
		Transform_t173 * L_25 = Component_get_transform_m1739(__this, /*hidden argument*/&Component_get_transform_m1739_MethodInfo);
		Transform_t173 * L_26 = L_25;
		NullCheck(L_26);
		Vector3_t175  L_27 = Transform_get_position_m1738(L_26, /*hidden argument*/&Transform_get_position_m1738_MethodInfo);
		Vector3_t175  L_28 = Vector3_get_forward_m1751(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_forward_m1751_MethodInfo);
		Vector3_t175  L_29 = Quaternion_op_Multiply_m2016(NULL /*static, unused*/, V_4, L_28, /*hidden argument*/&Quaternion_op_Multiply_m2016_MethodInfo);
		float L_30 = (__this->___distance_3);
		Vector3_t175  L_31 = Vector3_op_Multiply_m1746(NULL /*static, unused*/, L_29, L_30, /*hidden argument*/&Vector3_op_Multiply_m1746_MethodInfo);
		Vector3_t175  L_32 = Vector3_op_Subtraction_m1740(NULL /*static, unused*/, L_27, L_31, /*hidden argument*/&Vector3_op_Subtraction_m1740_MethodInfo);
		NullCheck(L_26);
		Transform_set_position_m1753(L_26, L_32, /*hidden argument*/&Transform_set_position_m1753_MethodInfo);
		Transform_t173 * L_33 = Component_get_transform_m1739(__this, /*hidden argument*/&Component_get_transform_m1739_MethodInfo);
		Transform_t173 * L_34 = Component_get_transform_m1739(__this, /*hidden argument*/&Component_get_transform_m1739_MethodInfo);
		NullCheck(L_34);
		Vector3_t175  L_35 = Transform_get_position_m1738(L_34, /*hidden argument*/&Transform_get_position_m1738_MethodInfo);
		V_9 = L_35;
		NullCheck((&V_9));
		float L_36 = ((&V_9)->___x_1);
		Transform_t173 * L_37 = Component_get_transform_m1739(__this, /*hidden argument*/&Component_get_transform_m1739_MethodInfo);
		NullCheck(L_37);
		Vector3_t175  L_38 = Transform_get_position_m1738(L_37, /*hidden argument*/&Transform_get_position_m1738_MethodInfo);
		V_10 = L_38;
		NullCheck((&V_10));
		float L_39 = ((&V_10)->___z_3);
		Vector3_t175  L_40 = {0};
		Vector3__ctor_m1758(&L_40, L_36, V_3, L_39, /*hidden argument*/&Vector3__ctor_m1758_MethodInfo);
		NullCheck(L_33);
		Transform_set_position_m1753(L_33, L_40, /*hidden argument*/&Transform_set_position_m1753_MethodInfo);
		Transform_t173 * L_41 = Component_get_transform_m1739(__this, /*hidden argument*/&Component_get_transform_m1739_MethodInfo);
		Transform_t173 * L_42 = (__this->___target_2);
		NullCheck(L_41);
		Transform_LookAt_m2151(L_41, L_42, /*hidden argument*/&Transform_LookAt_m2151_MethodInfo);
		return;
	}
}
// Metadata Definition UnityStandardAssets.Utility.SmoothFollow
extern Il2CppType Transform_t173_0_0_1;
extern CustomAttributesCache SmoothFollow_t359__CustomAttributeCache_target;
FieldInfo SmoothFollow_t359____target_2_FieldInfo = 
{
	"target"/* name */
	, &Transform_t173_0_0_1/* type */
	, &SmoothFollow_t359_il2cpp_TypeInfo/* parent */
	, offsetof(SmoothFollow_t359, ___target_2)/* data */
	, &SmoothFollow_t359__CustomAttributeCache_target/* custom_attributes_cache */

};
extern Il2CppType Single_t448_0_0_1;
extern CustomAttributesCache SmoothFollow_t359__CustomAttributeCache_distance;
FieldInfo SmoothFollow_t359____distance_3_FieldInfo = 
{
	"distance"/* name */
	, &Single_t448_0_0_1/* type */
	, &SmoothFollow_t359_il2cpp_TypeInfo/* parent */
	, offsetof(SmoothFollow_t359, ___distance_3)/* data */
	, &SmoothFollow_t359__CustomAttributeCache_distance/* custom_attributes_cache */

};
extern Il2CppType Single_t448_0_0_1;
extern CustomAttributesCache SmoothFollow_t359__CustomAttributeCache_height;
FieldInfo SmoothFollow_t359____height_4_FieldInfo = 
{
	"height"/* name */
	, &Single_t448_0_0_1/* type */
	, &SmoothFollow_t359_il2cpp_TypeInfo/* parent */
	, offsetof(SmoothFollow_t359, ___height_4)/* data */
	, &SmoothFollow_t359__CustomAttributeCache_height/* custom_attributes_cache */

};
extern Il2CppType Single_t448_0_0_1;
extern CustomAttributesCache SmoothFollow_t359__CustomAttributeCache_rotationDamping;
FieldInfo SmoothFollow_t359____rotationDamping_5_FieldInfo = 
{
	"rotationDamping"/* name */
	, &Single_t448_0_0_1/* type */
	, &SmoothFollow_t359_il2cpp_TypeInfo/* parent */
	, offsetof(SmoothFollow_t359, ___rotationDamping_5)/* data */
	, &SmoothFollow_t359__CustomAttributeCache_rotationDamping/* custom_attributes_cache */

};
extern Il2CppType Single_t448_0_0_1;
extern CustomAttributesCache SmoothFollow_t359__CustomAttributeCache_heightDamping;
FieldInfo SmoothFollow_t359____heightDamping_6_FieldInfo = 
{
	"heightDamping"/* name */
	, &Single_t448_0_0_1/* type */
	, &SmoothFollow_t359_il2cpp_TypeInfo/* parent */
	, offsetof(SmoothFollow_t359, ___heightDamping_6)/* data */
	, &SmoothFollow_t359__CustomAttributeCache_heightDamping/* custom_attributes_cache */

};
static FieldInfo* SmoothFollow_t359_FieldInfos[] =
{
	&SmoothFollow_t359____target_2_FieldInfo,
	&SmoothFollow_t359____distance_3_FieldInfo,
	&SmoothFollow_t359____height_4_FieldInfo,
	&SmoothFollow_t359____rotationDamping_5_FieldInfo,
	&SmoothFollow_t359____heightDamping_6_FieldInfo,
	NULL
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
// System.Void UnityStandardAssets.Utility.SmoothFollow::.ctor()
MethodInfo SmoothFollow__ctor_m1195_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&SmoothFollow__ctor_m1195/* method */
	, &SmoothFollow_t359_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1290/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
// System.Void UnityStandardAssets.Utility.SmoothFollow::Start()
MethodInfo SmoothFollow_Start_m1196_MethodInfo = 
{
	"Start"/* name */
	, (methodPointerType)&SmoothFollow_Start_m1196/* method */
	, &SmoothFollow_t359_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1291/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
// System.Void UnityStandardAssets.Utility.SmoothFollow::LateUpdate()
MethodInfo SmoothFollow_LateUpdate_m1197_MethodInfo = 
{
	"LateUpdate"/* name */
	, (methodPointerType)&SmoothFollow_LateUpdate_m1197/* method */
	, &SmoothFollow_t359_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1292/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* SmoothFollow_t359_MethodInfos[] =
{
	&SmoothFollow__ctor_m1195_MethodInfo,
	&SmoothFollow_Start_m1196_MethodInfo,
	&SmoothFollow_LateUpdate_m1197_MethodInfo,
	NULL
};
static MethodInfo* SmoothFollow_t359_VTable[] =
{
	&Object_Equals_m1333_MethodInfo,
	&Object_Finalize_m1253_MethodInfo,
	&Object_GetHashCode_m1334_MethodInfo,
	&Object_ToString_m1335_MethodInfo,
};
void SmoothFollow_t359_CustomAttributesCacheGenerator_target(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t400 * tmp;
		tmp = (SerializeField_t400 *)il2cpp_codegen_object_new (&SerializeField_t400_il2cpp_TypeInfo);
		SerializeField__ctor_m1336(tmp, &SerializeField__ctor_m1336_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void SmoothFollow_t359_CustomAttributesCacheGenerator_distance(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t400 * tmp;
		tmp = (SerializeField_t400 *)il2cpp_codegen_object_new (&SerializeField_t400_il2cpp_TypeInfo);
		SerializeField__ctor_m1336(tmp, &SerializeField__ctor_m1336_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void SmoothFollow_t359_CustomAttributesCacheGenerator_height(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t400 * tmp;
		tmp = (SerializeField_t400 *)il2cpp_codegen_object_new (&SerializeField_t400_il2cpp_TypeInfo);
		SerializeField__ctor_m1336(tmp, &SerializeField__ctor_m1336_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void SmoothFollow_t359_CustomAttributesCacheGenerator_rotationDamping(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t400 * tmp;
		tmp = (SerializeField_t400 *)il2cpp_codegen_object_new (&SerializeField_t400_il2cpp_TypeInfo);
		SerializeField__ctor_m1336(tmp, &SerializeField__ctor_m1336_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void SmoothFollow_t359_CustomAttributesCacheGenerator_heightDamping(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t400 * tmp;
		tmp = (SerializeField_t400 *)il2cpp_codegen_object_new (&SerializeField_t400_il2cpp_TypeInfo);
		SerializeField__ctor_m1336(tmp, &SerializeField__ctor_m1336_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache SmoothFollow_t359__CustomAttributeCache_target = {
1,
NULL,
&SmoothFollow_t359_CustomAttributesCacheGenerator_target
};
CustomAttributesCache SmoothFollow_t359__CustomAttributeCache_distance = {
1,
NULL,
&SmoothFollow_t359_CustomAttributesCacheGenerator_distance
};
CustomAttributesCache SmoothFollow_t359__CustomAttributeCache_height = {
1,
NULL,
&SmoothFollow_t359_CustomAttributesCacheGenerator_height
};
CustomAttributesCache SmoothFollow_t359__CustomAttributeCache_rotationDamping = {
1,
NULL,
&SmoothFollow_t359_CustomAttributesCacheGenerator_rotationDamping
};
CustomAttributesCache SmoothFollow_t359__CustomAttributeCache_heightDamping = {
1,
NULL,
&SmoothFollow_t359_CustomAttributesCacheGenerator_heightDamping
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType SmoothFollow_t359_0_0_0;
extern Il2CppType SmoothFollow_t359_1_0_0;
struct SmoothFollow_t359;
extern CustomAttributesCache SmoothFollow_t359__CustomAttributeCache_target;
extern CustomAttributesCache SmoothFollow_t359__CustomAttributeCache_distance;
extern CustomAttributesCache SmoothFollow_t359__CustomAttributeCache_height;
extern CustomAttributesCache SmoothFollow_t359__CustomAttributeCache_rotationDamping;
extern CustomAttributesCache SmoothFollow_t359__CustomAttributeCache_heightDamping;
TypeInfo SmoothFollow_t359_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image/* image */
	, NULL/* gc_desc */
	, "SmoothFollow"/* name */
	, "UnityStandardAssets.Utility"/* namespaze */
	, SmoothFollow_t359_MethodInfos/* methods */
	, NULL/* properties */
	, SmoothFollow_t359_FieldInfos/* fields */
	, NULL/* events */
	, &MonoBehaviour_t39_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &SmoothFollow_t359_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, SmoothFollow_t359_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &SmoothFollow_t359_il2cpp_TypeInfo/* cast_class */
	, &SmoothFollow_t359_0_0_0/* byval_arg */
	, &SmoothFollow_t359_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (SmoothFollow_t359)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048577/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 3/* method_count */
	, 0/* property_count */
	, 5/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Action_t360_il2cpp_TypeInfo;



// Metadata Definition UnityStandardAssets.Utility.TimedObjectActivator/Action
extern Il2CppType Int32_t386_0_0_1542;
FieldInfo Action_t360____value___1_FieldInfo = 
{
	"value__"/* name */
	, &Int32_t386_0_0_1542/* type */
	, &Action_t360_il2cpp_TypeInfo/* parent */
	, offsetof(Action_t360, ___value___1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Action_t360_0_0_32854;
FieldInfo Action_t360____Activate_2_FieldInfo = 
{
	"Activate"/* name */
	, &Action_t360_0_0_32854/* type */
	, &Action_t360_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Action_t360_0_0_32854;
FieldInfo Action_t360____Deactivate_3_FieldInfo = 
{
	"Deactivate"/* name */
	, &Action_t360_0_0_32854/* type */
	, &Action_t360_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Action_t360_0_0_32854;
FieldInfo Action_t360____Destroy_4_FieldInfo = 
{
	"Destroy"/* name */
	, &Action_t360_0_0_32854/* type */
	, &Action_t360_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Action_t360_0_0_32854;
FieldInfo Action_t360____ReloadLevel_5_FieldInfo = 
{
	"ReloadLevel"/* name */
	, &Action_t360_0_0_32854/* type */
	, &Action_t360_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Action_t360_0_0_32854;
FieldInfo Action_t360____Call_6_FieldInfo = 
{
	"Call"/* name */
	, &Action_t360_0_0_32854/* type */
	, &Action_t360_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* Action_t360_FieldInfos[] =
{
	&Action_t360____value___1_FieldInfo,
	&Action_t360____Activate_2_FieldInfo,
	&Action_t360____Deactivate_3_FieldInfo,
	&Action_t360____Destroy_4_FieldInfo,
	&Action_t360____ReloadLevel_5_FieldInfo,
	&Action_t360____Call_6_FieldInfo,
	NULL
};
static const int32_t Action_t360____Activate_2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry Action_t360____Activate_2_DefaultValue = 
{
	&Action_t360____Activate_2_FieldInfo/* field */
	, { (char*)&Action_t360____Activate_2_DefaultValueData, &Int32_t386_0_0_0 }/* value */

};
static const int32_t Action_t360____Deactivate_3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry Action_t360____Deactivate_3_DefaultValue = 
{
	&Action_t360____Deactivate_3_FieldInfo/* field */
	, { (char*)&Action_t360____Deactivate_3_DefaultValueData, &Int32_t386_0_0_0 }/* value */

};
static const int32_t Action_t360____Destroy_4_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry Action_t360____Destroy_4_DefaultValue = 
{
	&Action_t360____Destroy_4_FieldInfo/* field */
	, { (char*)&Action_t360____Destroy_4_DefaultValueData, &Int32_t386_0_0_0 }/* value */

};
static const int32_t Action_t360____ReloadLevel_5_DefaultValueData = 3;
static Il2CppFieldDefaultValueEntry Action_t360____ReloadLevel_5_DefaultValue = 
{
	&Action_t360____ReloadLevel_5_FieldInfo/* field */
	, { (char*)&Action_t360____ReloadLevel_5_DefaultValueData, &Int32_t386_0_0_0 }/* value */

};
static const int32_t Action_t360____Call_6_DefaultValueData = 4;
static Il2CppFieldDefaultValueEntry Action_t360____Call_6_DefaultValue = 
{
	&Action_t360____Call_6_FieldInfo/* field */
	, { (char*)&Action_t360____Call_6_DefaultValueData, &Int32_t386_0_0_0 }/* value */

};
static Il2CppFieldDefaultValueEntry* Action_t360_FieldDefaultValues[] = 
{
	&Action_t360____Activate_2_DefaultValue,
	&Action_t360____Deactivate_3_DefaultValue,
	&Action_t360____Destroy_4_DefaultValue,
	&Action_t360____ReloadLevel_5_DefaultValue,
	&Action_t360____Call_6_DefaultValue,
	NULL
};
static MethodInfo* Action_t360_MethodInfos[] =
{
	NULL
};
static MethodInfo* Action_t360_VTable[] =
{
	&Enum_Equals_m1418_MethodInfo,
	&Object_Finalize_m1253_MethodInfo,
	&Enum_GetHashCode_m1419_MethodInfo,
	&Enum_ToString_m1420_MethodInfo,
	&Enum_ToString_m1421_MethodInfo,
	&Enum_System_IConvertible_ToBoolean_m1422_MethodInfo,
	&Enum_System_IConvertible_ToByte_m1423_MethodInfo,
	&Enum_System_IConvertible_ToChar_m1424_MethodInfo,
	&Enum_System_IConvertible_ToDateTime_m1425_MethodInfo,
	&Enum_System_IConvertible_ToDecimal_m1426_MethodInfo,
	&Enum_System_IConvertible_ToDouble_m1427_MethodInfo,
	&Enum_System_IConvertible_ToInt16_m1428_MethodInfo,
	&Enum_System_IConvertible_ToInt32_m1429_MethodInfo,
	&Enum_System_IConvertible_ToInt64_m1430_MethodInfo,
	&Enum_System_IConvertible_ToSByte_m1431_MethodInfo,
	&Enum_System_IConvertible_ToSingle_m1432_MethodInfo,
	&Enum_ToString_m1433_MethodInfo,
	&Enum_System_IConvertible_ToType_m1434_MethodInfo,
	&Enum_System_IConvertible_ToUInt16_m1435_MethodInfo,
	&Enum_System_IConvertible_ToUInt32_m1436_MethodInfo,
	&Enum_System_IConvertible_ToUInt64_m1437_MethodInfo,
	&Enum_CompareTo_m1438_MethodInfo,
	&Enum_GetTypeCode_m1439_MethodInfo,
};
static Il2CppInterfaceOffsetPair Action_t360_InterfacesOffsets[] = 
{
	{ &IFormattable_t440_il2cpp_TypeInfo, 4},
	{ &IConvertible_t441_il2cpp_TypeInfo, 5},
	{ &IComparable_t442_il2cpp_TypeInfo, 21},
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType Action_t360_0_0_0;
extern Il2CppType Action_t360_1_0_0;
extern TypeInfo TimedObjectActivator_t367_il2cpp_TypeInfo;
TypeInfo Action_t360_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image/* image */
	, NULL/* gc_desc */
	, "Action"/* name */
	, ""/* namespaze */
	, Action_t360_MethodInfos/* methods */
	, NULL/* properties */
	, Action_t360_FieldInfos/* fields */
	, NULL/* events */
	, &Enum_t443_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &TimedObjectActivator_t367_il2cpp_TypeInfo/* nested_in */
	, &Int32_t386_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, Action_t360_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &Int32_t386_il2cpp_TypeInfo/* cast_class */
	, &Action_t360_0_0_0/* byval_arg */
	, &Action_t360_1_0_0/* this_arg */
	, Action_t360_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, Action_t360_FieldDefaultValues/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Action_t360)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (int32_t)/* element_size */
	, sizeof(int32_t)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 258/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, true/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 0/* method_count */
	, 0/* property_count */
	, 6/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 23/* vtable_count */
	, 0/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Entry_t361_il2cpp_TypeInfo;



// System.Void UnityStandardAssets.Utility.TimedObjectActivator/Entry::.ctor()
extern MethodInfo Entry__ctor_m1198_MethodInfo;
 void Entry__ctor_m1198 (Entry_t361 * __this, MethodInfo* method){
	{
		Object__ctor_m1260(__this, /*hidden argument*/&Object__ctor_m1260_MethodInfo);
		return;
	}
}
// Metadata Definition UnityStandardAssets.Utility.TimedObjectActivator/Entry
extern Il2CppType GameObject_t235_0_0_6;
FieldInfo Entry_t361____target_0_FieldInfo = 
{
	"target"/* name */
	, &GameObject_t235_0_0_6/* type */
	, &Entry_t361_il2cpp_TypeInfo/* parent */
	, offsetof(Entry_t361, ___target_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Action_t360_0_0_6;
FieldInfo Entry_t361____action_1_FieldInfo = 
{
	"action"/* name */
	, &Action_t360_0_0_6/* type */
	, &Entry_t361_il2cpp_TypeInfo/* parent */
	, offsetof(Entry_t361, ___action_1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Single_t448_0_0_6;
FieldInfo Entry_t361____delay_2_FieldInfo = 
{
	"delay"/* name */
	, &Single_t448_0_0_6/* type */
	, &Entry_t361_il2cpp_TypeInfo/* parent */
	, offsetof(Entry_t361, ___delay_2)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* Entry_t361_FieldInfos[] =
{
	&Entry_t361____target_0_FieldInfo,
	&Entry_t361____action_1_FieldInfo,
	&Entry_t361____delay_2_FieldInfo,
	NULL
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
// System.Void UnityStandardAssets.Utility.TimedObjectActivator/Entry::.ctor()
MethodInfo Entry__ctor_m1198_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Entry__ctor_m1198/* method */
	, &Entry_t361_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1298/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* Entry_t361_MethodInfos[] =
{
	&Entry__ctor_m1198_MethodInfo,
	NULL
};
static MethodInfo* Entry_t361_VTable[] =
{
	&Object_Equals_m1252_MethodInfo,
	&Object_Finalize_m1253_MethodInfo,
	&Object_GetHashCode_m1254_MethodInfo,
	&Object_ToString_m1255_MethodInfo,
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType Entry_t361_0_0_0;
extern Il2CppType Entry_t361_1_0_0;
struct Entry_t361;
TypeInfo Entry_t361_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image/* image */
	, NULL/* gc_desc */
	, "Entry"/* name */
	, ""/* namespaze */
	, Entry_t361_MethodInfos/* methods */
	, NULL/* properties */
	, Entry_t361_FieldInfos/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &TimedObjectActivator_t367_il2cpp_TypeInfo/* nested_in */
	, &Entry_t361_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, Entry_t361_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &Entry_t361_il2cpp_TypeInfo/* cast_class */
	, &Entry_t361_0_0_0/* byval_arg */
	, &Entry_t361_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Entry_t361)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1056770/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 3/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Entries_t363_il2cpp_TypeInfo;



// System.Void UnityStandardAssets.Utility.TimedObjectActivator/Entries::.ctor()
extern MethodInfo Entries__ctor_m1199_MethodInfo;
 void Entries__ctor_m1199 (Entries_t363 * __this, MethodInfo* method){
	{
		Object__ctor_m1260(__this, /*hidden argument*/&Object__ctor_m1260_MethodInfo);
		return;
	}
}
// Metadata Definition UnityStandardAssets.Utility.TimedObjectActivator/Entries
extern Il2CppType EntryU5BU5D_t362_0_0_6;
FieldInfo Entries_t363____entries_0_FieldInfo = 
{
	"entries"/* name */
	, &EntryU5BU5D_t362_0_0_6/* type */
	, &Entries_t363_il2cpp_TypeInfo/* parent */
	, offsetof(Entries_t363, ___entries_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* Entries_t363_FieldInfos[] =
{
	&Entries_t363____entries_0_FieldInfo,
	NULL
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
// System.Void UnityStandardAssets.Utility.TimedObjectActivator/Entries::.ctor()
MethodInfo Entries__ctor_m1199_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Entries__ctor_m1199/* method */
	, &Entries_t363_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1299/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* Entries_t363_MethodInfos[] =
{
	&Entries__ctor_m1199_MethodInfo,
	NULL
};
static MethodInfo* Entries_t363_VTable[] =
{
	&Object_Equals_m1252_MethodInfo,
	&Object_Finalize_m1253_MethodInfo,
	&Object_GetHashCode_m1254_MethodInfo,
	&Object_ToString_m1255_MethodInfo,
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType Entries_t363_0_0_0;
extern Il2CppType Entries_t363_1_0_0;
struct Entries_t363;
TypeInfo Entries_t363_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image/* image */
	, NULL/* gc_desc */
	, "Entries"/* name */
	, ""/* namespaze */
	, Entries_t363_MethodInfos/* methods */
	, NULL/* properties */
	, Entries_t363_FieldInfos/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &TimedObjectActivator_t367_il2cpp_TypeInfo/* nested_in */
	, &Entries_t363_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, Entries_t363_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &Entries_t363_il2cpp_TypeInfo/* cast_class */
	, &Entries_t363_0_0_0/* byval_arg */
	, &Entries_t363_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Entries_t363)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1056770/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo U3CActivateU3Ec__IteratorD_t364_il2cpp_TypeInfo;



// System.Void UnityStandardAssets.Utility.TimedObjectActivator/<Activate>c__IteratorD::.ctor()
extern MethodInfo U3CActivateU3Ec__IteratorD__ctor_m1200_MethodInfo;
 void U3CActivateU3Ec__IteratorD__ctor_m1200 (U3CActivateU3Ec__IteratorD_t364 * __this, MethodInfo* method){
	{
		Object__ctor_m1260(__this, /*hidden argument*/&Object__ctor_m1260_MethodInfo);
		return;
	}
}
// System.Object UnityStandardAssets.Utility.TimedObjectActivator/<Activate>c__IteratorD::System.Collections.Generic.IEnumerator<object>.get_Current()
extern MethodInfo U3CActivateU3Ec__IteratorD_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1201_MethodInfo;
 Object_t * U3CActivateU3Ec__IteratorD_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1201 (U3CActivateU3Ec__IteratorD_t364 * __this, MethodInfo* method){
	{
		Object_t * L_0 = (__this->___$current_2);
		return L_0;
	}
}
// System.Object UnityStandardAssets.Utility.TimedObjectActivator/<Activate>c__IteratorD::System.Collections.IEnumerator.get_Current()
extern MethodInfo U3CActivateU3Ec__IteratorD_System_Collections_IEnumerator_get_Current_m1202_MethodInfo;
 Object_t * U3CActivateU3Ec__IteratorD_System_Collections_IEnumerator_get_Current_m1202 (U3CActivateU3Ec__IteratorD_t364 * __this, MethodInfo* method){
	{
		Object_t * L_0 = (__this->___$current_2);
		return L_0;
	}
}
// System.Boolean UnityStandardAssets.Utility.TimedObjectActivator/<Activate>c__IteratorD::MoveNext()
extern MethodInfo U3CActivateU3Ec__IteratorD_MoveNext_m1203_MethodInfo;
 bool U3CActivateU3Ec__IteratorD_MoveNext_m1203 (U3CActivateU3Ec__IteratorD_t364 * __this, MethodInfo* method){
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = (__this->___$PC_1);
		V_0 = L_0;
		__this->___$PC_1 = (-1);
		if (V_0 == 0)
		{
			goto IL_0021;
		}
		if (V_0 == 1)
		{
			goto IL_0043;
		}
	}
	{
		goto IL_005b;
	}

IL_0021:
	{
		Entry_t361 * L_1 = (__this->___entry_0);
		NullCheck(L_1);
		float L_2 = (L_1->___delay_2);
		WaitForSeconds_t479 * L_3 = (WaitForSeconds_t479 *)il2cpp_codegen_object_new (InitializedTypeInfo(&WaitForSeconds_t479_il2cpp_TypeInfo));
		WaitForSeconds__ctor_m1585(L_3, L_2, /*hidden argument*/&WaitForSeconds__ctor_m1585_MethodInfo);
		__this->___$current_2 = L_3;
		__this->___$PC_1 = 1;
		goto IL_005d;
	}

IL_0043:
	{
		Entry_t361 * L_4 = (__this->___entry_0);
		NullCheck(L_4);
		GameObject_t235 * L_5 = (L_4->___target_0);
		NullCheck(L_5);
		GameObject_SetActive_m1804(L_5, 1, /*hidden argument*/&GameObject_SetActive_m1804_MethodInfo);
		__this->___$PC_1 = (-1);
	}

IL_005b:
	{
		return 0;
	}

IL_005d:
	{
		return 1;
	}
	// Dead block : IL_005f: ldloc.1
}
// System.Void UnityStandardAssets.Utility.TimedObjectActivator/<Activate>c__IteratorD::Dispose()
extern MethodInfo U3CActivateU3Ec__IteratorD_Dispose_m1204_MethodInfo;
 void U3CActivateU3Ec__IteratorD_Dispose_m1204 (U3CActivateU3Ec__IteratorD_t364 * __this, MethodInfo* method){
	{
		__this->___$PC_1 = (-1);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.TimedObjectActivator/<Activate>c__IteratorD::Reset()
extern MethodInfo U3CActivateU3Ec__IteratorD_Reset_m1205_MethodInfo;
 void U3CActivateU3Ec__IteratorD_Reset_m1205 (U3CActivateU3Ec__IteratorD_t364 * __this, MethodInfo* method){
	{
		NotSupportedException_t445 * L_0 = (NotSupportedException_t445 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t445_il2cpp_TypeInfo));
		NotSupportedException__ctor_m1445(L_0, /*hidden argument*/&NotSupportedException__ctor_m1445_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// Metadata Definition UnityStandardAssets.Utility.TimedObjectActivator/<Activate>c__IteratorD
extern Il2CppType Entry_t361_0_0_3;
FieldInfo U3CActivateU3Ec__IteratorD_t364____entry_0_FieldInfo = 
{
	"entry"/* name */
	, &Entry_t361_0_0_3/* type */
	, &U3CActivateU3Ec__IteratorD_t364_il2cpp_TypeInfo/* parent */
	, offsetof(U3CActivateU3Ec__IteratorD_t364, ___entry_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t386_0_0_3;
FieldInfo U3CActivateU3Ec__IteratorD_t364____$PC_1_FieldInfo = 
{
	"$PC"/* name */
	, &Int32_t386_0_0_3/* type */
	, &U3CActivateU3Ec__IteratorD_t364_il2cpp_TypeInfo/* parent */
	, offsetof(U3CActivateU3Ec__IteratorD_t364, ___$PC_1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Object_t_0_0_3;
FieldInfo U3CActivateU3Ec__IteratorD_t364____$current_2_FieldInfo = 
{
	"$current"/* name */
	, &Object_t_0_0_3/* type */
	, &U3CActivateU3Ec__IteratorD_t364_il2cpp_TypeInfo/* parent */
	, offsetof(U3CActivateU3Ec__IteratorD_t364, ___$current_2)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Entry_t361_0_0_3;
FieldInfo U3CActivateU3Ec__IteratorD_t364____U3C$U3Eentry_3_FieldInfo = 
{
	"<$>entry"/* name */
	, &Entry_t361_0_0_3/* type */
	, &U3CActivateU3Ec__IteratorD_t364_il2cpp_TypeInfo/* parent */
	, offsetof(U3CActivateU3Ec__IteratorD_t364, ___U3C$U3Eentry_3)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* U3CActivateU3Ec__IteratorD_t364_FieldInfos[] =
{
	&U3CActivateU3Ec__IteratorD_t364____entry_0_FieldInfo,
	&U3CActivateU3Ec__IteratorD_t364____$PC_1_FieldInfo,
	&U3CActivateU3Ec__IteratorD_t364____$current_2_FieldInfo,
	&U3CActivateU3Ec__IteratorD_t364____U3C$U3Eentry_3_FieldInfo,
	NULL
};
static PropertyInfo U3CActivateU3Ec__IteratorD_t364____System_Collections_Generic_IEnumeratorU3CobjectU3E_Current_PropertyInfo = 
{
	&U3CActivateU3Ec__IteratorD_t364_il2cpp_TypeInfo/* parent */
	, "System.Collections.Generic.IEnumerator<object>.Current"/* name */
	, &U3CActivateU3Ec__IteratorD_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1201_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo U3CActivateU3Ec__IteratorD_t364____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&U3CActivateU3Ec__IteratorD_t364_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &U3CActivateU3Ec__IteratorD_System_Collections_IEnumerator_get_Current_m1202_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* U3CActivateU3Ec__IteratorD_t364_PropertyInfos[] =
{
	&U3CActivateU3Ec__IteratorD_t364____System_Collections_Generic_IEnumeratorU3CobjectU3E_Current_PropertyInfo,
	&U3CActivateU3Ec__IteratorD_t364____System_Collections_IEnumerator_Current_PropertyInfo,
	NULL
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
// System.Void UnityStandardAssets.Utility.TimedObjectActivator/<Activate>c__IteratorD::.ctor()
MethodInfo U3CActivateU3Ec__IteratorD__ctor_m1200_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&U3CActivateU3Ec__IteratorD__ctor_m1200/* method */
	, &U3CActivateU3Ec__IteratorD_t364_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1300/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache U3CActivateU3Ec__IteratorD_t364__CustomAttributeCache_U3CActivateU3Ec__IteratorD_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1201;
// System.Object UnityStandardAssets.Utility.TimedObjectActivator/<Activate>c__IteratorD::System.Collections.Generic.IEnumerator<object>.get_Current()
MethodInfo U3CActivateU3Ec__IteratorD_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1201_MethodInfo = 
{
	"System.Collections.Generic.IEnumerator<object>.get_Current"/* name */
	, (methodPointerType)&U3CActivateU3Ec__IteratorD_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1201/* method */
	, &U3CActivateU3Ec__IteratorD_t364_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &U3CActivateU3Ec__IteratorD_t364__CustomAttributeCache_U3CActivateU3Ec__IteratorD_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1201/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1301/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache U3CActivateU3Ec__IteratorD_t364__CustomAttributeCache_U3CActivateU3Ec__IteratorD_System_Collections_IEnumerator_get_Current_m1202;
// System.Object UnityStandardAssets.Utility.TimedObjectActivator/<Activate>c__IteratorD::System.Collections.IEnumerator.get_Current()
MethodInfo U3CActivateU3Ec__IteratorD_System_Collections_IEnumerator_get_Current_m1202_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&U3CActivateU3Ec__IteratorD_System_Collections_IEnumerator_get_Current_m1202/* method */
	, &U3CActivateU3Ec__IteratorD_t364_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &U3CActivateU3Ec__IteratorD_t364__CustomAttributeCache_U3CActivateU3Ec__IteratorD_System_Collections_IEnumerator_get_Current_m1202/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1302/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379 (MethodInfo* method, void* obj, void** args);
// System.Boolean UnityStandardAssets.Utility.TimedObjectActivator/<Activate>c__IteratorD::MoveNext()
MethodInfo U3CActivateU3Ec__IteratorD_MoveNext_m1203_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&U3CActivateU3Ec__IteratorD_MoveNext_m1203/* method */
	, &U3CActivateU3Ec__IteratorD_t364_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t379_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t379/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1303/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache U3CActivateU3Ec__IteratorD_t364__CustomAttributeCache_U3CActivateU3Ec__IteratorD_Dispose_m1204;
// System.Void UnityStandardAssets.Utility.TimedObjectActivator/<Activate>c__IteratorD::Dispose()
MethodInfo U3CActivateU3Ec__IteratorD_Dispose_m1204_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&U3CActivateU3Ec__IteratorD_Dispose_m1204/* method */
	, &U3CActivateU3Ec__IteratorD_t364_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &U3CActivateU3Ec__IteratorD_t364__CustomAttributeCache_U3CActivateU3Ec__IteratorD_Dispose_m1204/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1304/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache U3CActivateU3Ec__IteratorD_t364__CustomAttributeCache_U3CActivateU3Ec__IteratorD_Reset_m1205;
// System.Void UnityStandardAssets.Utility.TimedObjectActivator/<Activate>c__IteratorD::Reset()
MethodInfo U3CActivateU3Ec__IteratorD_Reset_m1205_MethodInfo = 
{
	"Reset"/* name */
	, (methodPointerType)&U3CActivateU3Ec__IteratorD_Reset_m1205/* method */
	, &U3CActivateU3Ec__IteratorD_t364_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &U3CActivateU3Ec__IteratorD_t364__CustomAttributeCache_U3CActivateU3Ec__IteratorD_Reset_m1205/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1305/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* U3CActivateU3Ec__IteratorD_t364_MethodInfos[] =
{
	&U3CActivateU3Ec__IteratorD__ctor_m1200_MethodInfo,
	&U3CActivateU3Ec__IteratorD_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1201_MethodInfo,
	&U3CActivateU3Ec__IteratorD_System_Collections_IEnumerator_get_Current_m1202_MethodInfo,
	&U3CActivateU3Ec__IteratorD_MoveNext_m1203_MethodInfo,
	&U3CActivateU3Ec__IteratorD_Dispose_m1204_MethodInfo,
	&U3CActivateU3Ec__IteratorD_Reset_m1205_MethodInfo,
	NULL
};
static MethodInfo* U3CActivateU3Ec__IteratorD_t364_VTable[] =
{
	&Object_Equals_m1252_MethodInfo,
	&Object_Finalize_m1253_MethodInfo,
	&Object_GetHashCode_m1254_MethodInfo,
	&Object_ToString_m1255_MethodInfo,
	&U3CActivateU3Ec__IteratorD_Dispose_m1204_MethodInfo,
	&U3CActivateU3Ec__IteratorD_System_Collections_IEnumerator_get_Current_m1202_MethodInfo,
	&U3CActivateU3Ec__IteratorD_MoveNext_m1203_MethodInfo,
	&U3CActivateU3Ec__IteratorD_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1201_MethodInfo,
	&U3CActivateU3Ec__IteratorD_Reset_m1205_MethodInfo,
};
static TypeInfo* U3CActivateU3Ec__IteratorD_t364_InterfacesTypeInfos[] = 
{
	&IDisposable_t444_il2cpp_TypeInfo,
	&IEnumerator_t26_il2cpp_TypeInfo,
	&IEnumerator_1_t53_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair U3CActivateU3Ec__IteratorD_t364_InterfacesOffsets[] = 
{
	{ &IDisposable_t444_il2cpp_TypeInfo, 4},
	{ &IEnumerator_t26_il2cpp_TypeInfo, 5},
	{ &IEnumerator_1_t53_il2cpp_TypeInfo, 7},
};
void U3CActivateU3Ec__IteratorD_t364_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t384 * tmp;
		tmp = (CompilerGeneratedAttribute_t384 *)il2cpp_codegen_object_new (&CompilerGeneratedAttribute_t384_il2cpp_TypeInfo);
		CompilerGeneratedAttribute__ctor_m1269(tmp, &CompilerGeneratedAttribute__ctor_m1269_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void U3CActivateU3Ec__IteratorD_t364_CustomAttributesCacheGenerator_U3CActivateU3Ec__IteratorD_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1201(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t447 * tmp;
		tmp = (DebuggerHiddenAttribute_t447 *)il2cpp_codegen_object_new (&DebuggerHiddenAttribute_t447_il2cpp_TypeInfo);
		DebuggerHiddenAttribute__ctor_m1446(tmp, &DebuggerHiddenAttribute__ctor_m1446_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void U3CActivateU3Ec__IteratorD_t364_CustomAttributesCacheGenerator_U3CActivateU3Ec__IteratorD_System_Collections_IEnumerator_get_Current_m1202(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t447 * tmp;
		tmp = (DebuggerHiddenAttribute_t447 *)il2cpp_codegen_object_new (&DebuggerHiddenAttribute_t447_il2cpp_TypeInfo);
		DebuggerHiddenAttribute__ctor_m1446(tmp, &DebuggerHiddenAttribute__ctor_m1446_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void U3CActivateU3Ec__IteratorD_t364_CustomAttributesCacheGenerator_U3CActivateU3Ec__IteratorD_Dispose_m1204(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t447 * tmp;
		tmp = (DebuggerHiddenAttribute_t447 *)il2cpp_codegen_object_new (&DebuggerHiddenAttribute_t447_il2cpp_TypeInfo);
		DebuggerHiddenAttribute__ctor_m1446(tmp, &DebuggerHiddenAttribute__ctor_m1446_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void U3CActivateU3Ec__IteratorD_t364_CustomAttributesCacheGenerator_U3CActivateU3Ec__IteratorD_Reset_m1205(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t447 * tmp;
		tmp = (DebuggerHiddenAttribute_t447 *)il2cpp_codegen_object_new (&DebuggerHiddenAttribute_t447_il2cpp_TypeInfo);
		DebuggerHiddenAttribute__ctor_m1446(tmp, &DebuggerHiddenAttribute__ctor_m1446_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache U3CActivateU3Ec__IteratorD_t364__CustomAttributeCache = {
1,
NULL,
&U3CActivateU3Ec__IteratorD_t364_CustomAttributesCacheGenerator
};
CustomAttributesCache U3CActivateU3Ec__IteratorD_t364__CustomAttributeCache_U3CActivateU3Ec__IteratorD_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1201 = {
1,
NULL,
&U3CActivateU3Ec__IteratorD_t364_CustomAttributesCacheGenerator_U3CActivateU3Ec__IteratorD_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1201
};
CustomAttributesCache U3CActivateU3Ec__IteratorD_t364__CustomAttributeCache_U3CActivateU3Ec__IteratorD_System_Collections_IEnumerator_get_Current_m1202 = {
1,
NULL,
&U3CActivateU3Ec__IteratorD_t364_CustomAttributesCacheGenerator_U3CActivateU3Ec__IteratorD_System_Collections_IEnumerator_get_Current_m1202
};
CustomAttributesCache U3CActivateU3Ec__IteratorD_t364__CustomAttributeCache_U3CActivateU3Ec__IteratorD_Dispose_m1204 = {
1,
NULL,
&U3CActivateU3Ec__IteratorD_t364_CustomAttributesCacheGenerator_U3CActivateU3Ec__IteratorD_Dispose_m1204
};
CustomAttributesCache U3CActivateU3Ec__IteratorD_t364__CustomAttributeCache_U3CActivateU3Ec__IteratorD_Reset_m1205 = {
1,
NULL,
&U3CActivateU3Ec__IteratorD_t364_CustomAttributesCacheGenerator_U3CActivateU3Ec__IteratorD_Reset_m1205
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType U3CActivateU3Ec__IteratorD_t364_0_0_0;
extern Il2CppType U3CActivateU3Ec__IteratorD_t364_1_0_0;
struct U3CActivateU3Ec__IteratorD_t364;
extern CustomAttributesCache U3CActivateU3Ec__IteratorD_t364__CustomAttributeCache;
extern CustomAttributesCache U3CActivateU3Ec__IteratorD_t364__CustomAttributeCache_U3CActivateU3Ec__IteratorD_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1201;
extern CustomAttributesCache U3CActivateU3Ec__IteratorD_t364__CustomAttributeCache_U3CActivateU3Ec__IteratorD_System_Collections_IEnumerator_get_Current_m1202;
extern CustomAttributesCache U3CActivateU3Ec__IteratorD_t364__CustomAttributeCache_U3CActivateU3Ec__IteratorD_Dispose_m1204;
extern CustomAttributesCache U3CActivateU3Ec__IteratorD_t364__CustomAttributeCache_U3CActivateU3Ec__IteratorD_Reset_m1205;
TypeInfo U3CActivateU3Ec__IteratorD_t364_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image/* image */
	, NULL/* gc_desc */
	, "<Activate>c__IteratorD"/* name */
	, ""/* namespaze */
	, U3CActivateU3Ec__IteratorD_t364_MethodInfos/* methods */
	, U3CActivateU3Ec__IteratorD_t364_PropertyInfos/* properties */
	, U3CActivateU3Ec__IteratorD_t364_FieldInfos/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &TimedObjectActivator_t367_il2cpp_TypeInfo/* nested_in */
	, &U3CActivateU3Ec__IteratorD_t364_il2cpp_TypeInfo/* element_class */
	, U3CActivateU3Ec__IteratorD_t364_InterfacesTypeInfos/* implemented_interfaces */
	, U3CActivateU3Ec__IteratorD_t364_VTable/* vtable */
	, &U3CActivateU3Ec__IteratorD_t364__CustomAttributeCache/* custom_attributes_cache */
	, &U3CActivateU3Ec__IteratorD_t364_il2cpp_TypeInfo/* cast_class */
	, &U3CActivateU3Ec__IteratorD_t364_0_0_0/* byval_arg */
	, &U3CActivateU3Ec__IteratorD_t364_1_0_0/* this_arg */
	, U3CActivateU3Ec__IteratorD_t364_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (U3CActivateU3Ec__IteratorD_t364)/* instance_size */
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
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 6/* method_count */
	, 2/* property_count */
	, 4/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 9/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo U3CDeactivateU3Ec__IteratorE_t365_il2cpp_TypeInfo;



// System.Void UnityStandardAssets.Utility.TimedObjectActivator/<Deactivate>c__IteratorE::.ctor()
extern MethodInfo U3CDeactivateU3Ec__IteratorE__ctor_m1206_MethodInfo;
 void U3CDeactivateU3Ec__IteratorE__ctor_m1206 (U3CDeactivateU3Ec__IteratorE_t365 * __this, MethodInfo* method){
	{
		Object__ctor_m1260(__this, /*hidden argument*/&Object__ctor_m1260_MethodInfo);
		return;
	}
}
// System.Object UnityStandardAssets.Utility.TimedObjectActivator/<Deactivate>c__IteratorE::System.Collections.Generic.IEnumerator<object>.get_Current()
extern MethodInfo U3CDeactivateU3Ec__IteratorE_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1207_MethodInfo;
 Object_t * U3CDeactivateU3Ec__IteratorE_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1207 (U3CDeactivateU3Ec__IteratorE_t365 * __this, MethodInfo* method){
	{
		Object_t * L_0 = (__this->___$current_2);
		return L_0;
	}
}
// System.Object UnityStandardAssets.Utility.TimedObjectActivator/<Deactivate>c__IteratorE::System.Collections.IEnumerator.get_Current()
extern MethodInfo U3CDeactivateU3Ec__IteratorE_System_Collections_IEnumerator_get_Current_m1208_MethodInfo;
 Object_t * U3CDeactivateU3Ec__IteratorE_System_Collections_IEnumerator_get_Current_m1208 (U3CDeactivateU3Ec__IteratorE_t365 * __this, MethodInfo* method){
	{
		Object_t * L_0 = (__this->___$current_2);
		return L_0;
	}
}
// System.Boolean UnityStandardAssets.Utility.TimedObjectActivator/<Deactivate>c__IteratorE::MoveNext()
extern MethodInfo U3CDeactivateU3Ec__IteratorE_MoveNext_m1209_MethodInfo;
 bool U3CDeactivateU3Ec__IteratorE_MoveNext_m1209 (U3CDeactivateU3Ec__IteratorE_t365 * __this, MethodInfo* method){
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = (__this->___$PC_1);
		V_0 = L_0;
		__this->___$PC_1 = (-1);
		if (V_0 == 0)
		{
			goto IL_0021;
		}
		if (V_0 == 1)
		{
			goto IL_0043;
		}
	}
	{
		goto IL_005b;
	}

IL_0021:
	{
		Entry_t361 * L_1 = (__this->___entry_0);
		NullCheck(L_1);
		float L_2 = (L_1->___delay_2);
		WaitForSeconds_t479 * L_3 = (WaitForSeconds_t479 *)il2cpp_codegen_object_new (InitializedTypeInfo(&WaitForSeconds_t479_il2cpp_TypeInfo));
		WaitForSeconds__ctor_m1585(L_3, L_2, /*hidden argument*/&WaitForSeconds__ctor_m1585_MethodInfo);
		__this->___$current_2 = L_3;
		__this->___$PC_1 = 1;
		goto IL_005d;
	}

IL_0043:
	{
		Entry_t361 * L_4 = (__this->___entry_0);
		NullCheck(L_4);
		GameObject_t235 * L_5 = (L_4->___target_0);
		NullCheck(L_5);
		GameObject_SetActive_m1804(L_5, 0, /*hidden argument*/&GameObject_SetActive_m1804_MethodInfo);
		__this->___$PC_1 = (-1);
	}

IL_005b:
	{
		return 0;
	}

IL_005d:
	{
		return 1;
	}
	// Dead block : IL_005f: ldloc.1
}
// System.Void UnityStandardAssets.Utility.TimedObjectActivator/<Deactivate>c__IteratorE::Dispose()
extern MethodInfo U3CDeactivateU3Ec__IteratorE_Dispose_m1210_MethodInfo;
 void U3CDeactivateU3Ec__IteratorE_Dispose_m1210 (U3CDeactivateU3Ec__IteratorE_t365 * __this, MethodInfo* method){
	{
		__this->___$PC_1 = (-1);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.TimedObjectActivator/<Deactivate>c__IteratorE::Reset()
extern MethodInfo U3CDeactivateU3Ec__IteratorE_Reset_m1211_MethodInfo;
 void U3CDeactivateU3Ec__IteratorE_Reset_m1211 (U3CDeactivateU3Ec__IteratorE_t365 * __this, MethodInfo* method){
	{
		NotSupportedException_t445 * L_0 = (NotSupportedException_t445 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t445_il2cpp_TypeInfo));
		NotSupportedException__ctor_m1445(L_0, /*hidden argument*/&NotSupportedException__ctor_m1445_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// Metadata Definition UnityStandardAssets.Utility.TimedObjectActivator/<Deactivate>c__IteratorE
extern Il2CppType Entry_t361_0_0_3;
FieldInfo U3CDeactivateU3Ec__IteratorE_t365____entry_0_FieldInfo = 
{
	"entry"/* name */
	, &Entry_t361_0_0_3/* type */
	, &U3CDeactivateU3Ec__IteratorE_t365_il2cpp_TypeInfo/* parent */
	, offsetof(U3CDeactivateU3Ec__IteratorE_t365, ___entry_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t386_0_0_3;
FieldInfo U3CDeactivateU3Ec__IteratorE_t365____$PC_1_FieldInfo = 
{
	"$PC"/* name */
	, &Int32_t386_0_0_3/* type */
	, &U3CDeactivateU3Ec__IteratorE_t365_il2cpp_TypeInfo/* parent */
	, offsetof(U3CDeactivateU3Ec__IteratorE_t365, ___$PC_1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Object_t_0_0_3;
FieldInfo U3CDeactivateU3Ec__IteratorE_t365____$current_2_FieldInfo = 
{
	"$current"/* name */
	, &Object_t_0_0_3/* type */
	, &U3CDeactivateU3Ec__IteratorE_t365_il2cpp_TypeInfo/* parent */
	, offsetof(U3CDeactivateU3Ec__IteratorE_t365, ___$current_2)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Entry_t361_0_0_3;
FieldInfo U3CDeactivateU3Ec__IteratorE_t365____U3C$U3Eentry_3_FieldInfo = 
{
	"<$>entry"/* name */
	, &Entry_t361_0_0_3/* type */
	, &U3CDeactivateU3Ec__IteratorE_t365_il2cpp_TypeInfo/* parent */
	, offsetof(U3CDeactivateU3Ec__IteratorE_t365, ___U3C$U3Eentry_3)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* U3CDeactivateU3Ec__IteratorE_t365_FieldInfos[] =
{
	&U3CDeactivateU3Ec__IteratorE_t365____entry_0_FieldInfo,
	&U3CDeactivateU3Ec__IteratorE_t365____$PC_1_FieldInfo,
	&U3CDeactivateU3Ec__IteratorE_t365____$current_2_FieldInfo,
	&U3CDeactivateU3Ec__IteratorE_t365____U3C$U3Eentry_3_FieldInfo,
	NULL
};
static PropertyInfo U3CDeactivateU3Ec__IteratorE_t365____System_Collections_Generic_IEnumeratorU3CobjectU3E_Current_PropertyInfo = 
{
	&U3CDeactivateU3Ec__IteratorE_t365_il2cpp_TypeInfo/* parent */
	, "System.Collections.Generic.IEnumerator<object>.Current"/* name */
	, &U3CDeactivateU3Ec__IteratorE_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1207_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo U3CDeactivateU3Ec__IteratorE_t365____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&U3CDeactivateU3Ec__IteratorE_t365_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &U3CDeactivateU3Ec__IteratorE_System_Collections_IEnumerator_get_Current_m1208_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* U3CDeactivateU3Ec__IteratorE_t365_PropertyInfos[] =
{
	&U3CDeactivateU3Ec__IteratorE_t365____System_Collections_Generic_IEnumeratorU3CobjectU3E_Current_PropertyInfo,
	&U3CDeactivateU3Ec__IteratorE_t365____System_Collections_IEnumerator_Current_PropertyInfo,
	NULL
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
// System.Void UnityStandardAssets.Utility.TimedObjectActivator/<Deactivate>c__IteratorE::.ctor()
MethodInfo U3CDeactivateU3Ec__IteratorE__ctor_m1206_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&U3CDeactivateU3Ec__IteratorE__ctor_m1206/* method */
	, &U3CDeactivateU3Ec__IteratorE_t365_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1306/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache U3CDeactivateU3Ec__IteratorE_t365__CustomAttributeCache_U3CDeactivateU3Ec__IteratorE_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1207;
// System.Object UnityStandardAssets.Utility.TimedObjectActivator/<Deactivate>c__IteratorE::System.Collections.Generic.IEnumerator<object>.get_Current()
MethodInfo U3CDeactivateU3Ec__IteratorE_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1207_MethodInfo = 
{
	"System.Collections.Generic.IEnumerator<object>.get_Current"/* name */
	, (methodPointerType)&U3CDeactivateU3Ec__IteratorE_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1207/* method */
	, &U3CDeactivateU3Ec__IteratorE_t365_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &U3CDeactivateU3Ec__IteratorE_t365__CustomAttributeCache_U3CDeactivateU3Ec__IteratorE_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1207/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1307/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache U3CDeactivateU3Ec__IteratorE_t365__CustomAttributeCache_U3CDeactivateU3Ec__IteratorE_System_Collections_IEnumerator_get_Current_m1208;
// System.Object UnityStandardAssets.Utility.TimedObjectActivator/<Deactivate>c__IteratorE::System.Collections.IEnumerator.get_Current()
MethodInfo U3CDeactivateU3Ec__IteratorE_System_Collections_IEnumerator_get_Current_m1208_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&U3CDeactivateU3Ec__IteratorE_System_Collections_IEnumerator_get_Current_m1208/* method */
	, &U3CDeactivateU3Ec__IteratorE_t365_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &U3CDeactivateU3Ec__IteratorE_t365__CustomAttributeCache_U3CDeactivateU3Ec__IteratorE_System_Collections_IEnumerator_get_Current_m1208/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1308/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379 (MethodInfo* method, void* obj, void** args);
// System.Boolean UnityStandardAssets.Utility.TimedObjectActivator/<Deactivate>c__IteratorE::MoveNext()
MethodInfo U3CDeactivateU3Ec__IteratorE_MoveNext_m1209_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&U3CDeactivateU3Ec__IteratorE_MoveNext_m1209/* method */
	, &U3CDeactivateU3Ec__IteratorE_t365_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t379_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t379/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1309/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache U3CDeactivateU3Ec__IteratorE_t365__CustomAttributeCache_U3CDeactivateU3Ec__IteratorE_Dispose_m1210;
// System.Void UnityStandardAssets.Utility.TimedObjectActivator/<Deactivate>c__IteratorE::Dispose()
MethodInfo U3CDeactivateU3Ec__IteratorE_Dispose_m1210_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&U3CDeactivateU3Ec__IteratorE_Dispose_m1210/* method */
	, &U3CDeactivateU3Ec__IteratorE_t365_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &U3CDeactivateU3Ec__IteratorE_t365__CustomAttributeCache_U3CDeactivateU3Ec__IteratorE_Dispose_m1210/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1310/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache U3CDeactivateU3Ec__IteratorE_t365__CustomAttributeCache_U3CDeactivateU3Ec__IteratorE_Reset_m1211;
// System.Void UnityStandardAssets.Utility.TimedObjectActivator/<Deactivate>c__IteratorE::Reset()
MethodInfo U3CDeactivateU3Ec__IteratorE_Reset_m1211_MethodInfo = 
{
	"Reset"/* name */
	, (methodPointerType)&U3CDeactivateU3Ec__IteratorE_Reset_m1211/* method */
	, &U3CDeactivateU3Ec__IteratorE_t365_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &U3CDeactivateU3Ec__IteratorE_t365__CustomAttributeCache_U3CDeactivateU3Ec__IteratorE_Reset_m1211/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1311/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* U3CDeactivateU3Ec__IteratorE_t365_MethodInfos[] =
{
	&U3CDeactivateU3Ec__IteratorE__ctor_m1206_MethodInfo,
	&U3CDeactivateU3Ec__IteratorE_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1207_MethodInfo,
	&U3CDeactivateU3Ec__IteratorE_System_Collections_IEnumerator_get_Current_m1208_MethodInfo,
	&U3CDeactivateU3Ec__IteratorE_MoveNext_m1209_MethodInfo,
	&U3CDeactivateU3Ec__IteratorE_Dispose_m1210_MethodInfo,
	&U3CDeactivateU3Ec__IteratorE_Reset_m1211_MethodInfo,
	NULL
};
static MethodInfo* U3CDeactivateU3Ec__IteratorE_t365_VTable[] =
{
	&Object_Equals_m1252_MethodInfo,
	&Object_Finalize_m1253_MethodInfo,
	&Object_GetHashCode_m1254_MethodInfo,
	&Object_ToString_m1255_MethodInfo,
	&U3CDeactivateU3Ec__IteratorE_Dispose_m1210_MethodInfo,
	&U3CDeactivateU3Ec__IteratorE_System_Collections_IEnumerator_get_Current_m1208_MethodInfo,
	&U3CDeactivateU3Ec__IteratorE_MoveNext_m1209_MethodInfo,
	&U3CDeactivateU3Ec__IteratorE_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1207_MethodInfo,
	&U3CDeactivateU3Ec__IteratorE_Reset_m1211_MethodInfo,
};
static TypeInfo* U3CDeactivateU3Ec__IteratorE_t365_InterfacesTypeInfos[] = 
{
	&IDisposable_t444_il2cpp_TypeInfo,
	&IEnumerator_t26_il2cpp_TypeInfo,
	&IEnumerator_1_t53_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair U3CDeactivateU3Ec__IteratorE_t365_InterfacesOffsets[] = 
{
	{ &IDisposable_t444_il2cpp_TypeInfo, 4},
	{ &IEnumerator_t26_il2cpp_TypeInfo, 5},
	{ &IEnumerator_1_t53_il2cpp_TypeInfo, 7},
};
void U3CDeactivateU3Ec__IteratorE_t365_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t384 * tmp;
		tmp = (CompilerGeneratedAttribute_t384 *)il2cpp_codegen_object_new (&CompilerGeneratedAttribute_t384_il2cpp_TypeInfo);
		CompilerGeneratedAttribute__ctor_m1269(tmp, &CompilerGeneratedAttribute__ctor_m1269_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void U3CDeactivateU3Ec__IteratorE_t365_CustomAttributesCacheGenerator_U3CDeactivateU3Ec__IteratorE_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1207(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t447 * tmp;
		tmp = (DebuggerHiddenAttribute_t447 *)il2cpp_codegen_object_new (&DebuggerHiddenAttribute_t447_il2cpp_TypeInfo);
		DebuggerHiddenAttribute__ctor_m1446(tmp, &DebuggerHiddenAttribute__ctor_m1446_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void U3CDeactivateU3Ec__IteratorE_t365_CustomAttributesCacheGenerator_U3CDeactivateU3Ec__IteratorE_System_Collections_IEnumerator_get_Current_m1208(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t447 * tmp;
		tmp = (DebuggerHiddenAttribute_t447 *)il2cpp_codegen_object_new (&DebuggerHiddenAttribute_t447_il2cpp_TypeInfo);
		DebuggerHiddenAttribute__ctor_m1446(tmp, &DebuggerHiddenAttribute__ctor_m1446_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void U3CDeactivateU3Ec__IteratorE_t365_CustomAttributesCacheGenerator_U3CDeactivateU3Ec__IteratorE_Dispose_m1210(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t447 * tmp;
		tmp = (DebuggerHiddenAttribute_t447 *)il2cpp_codegen_object_new (&DebuggerHiddenAttribute_t447_il2cpp_TypeInfo);
		DebuggerHiddenAttribute__ctor_m1446(tmp, &DebuggerHiddenAttribute__ctor_m1446_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void U3CDeactivateU3Ec__IteratorE_t365_CustomAttributesCacheGenerator_U3CDeactivateU3Ec__IteratorE_Reset_m1211(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t447 * tmp;
		tmp = (DebuggerHiddenAttribute_t447 *)il2cpp_codegen_object_new (&DebuggerHiddenAttribute_t447_il2cpp_TypeInfo);
		DebuggerHiddenAttribute__ctor_m1446(tmp, &DebuggerHiddenAttribute__ctor_m1446_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache U3CDeactivateU3Ec__IteratorE_t365__CustomAttributeCache = {
1,
NULL,
&U3CDeactivateU3Ec__IteratorE_t365_CustomAttributesCacheGenerator
};
CustomAttributesCache U3CDeactivateU3Ec__IteratorE_t365__CustomAttributeCache_U3CDeactivateU3Ec__IteratorE_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1207 = {
1,
NULL,
&U3CDeactivateU3Ec__IteratorE_t365_CustomAttributesCacheGenerator_U3CDeactivateU3Ec__IteratorE_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1207
};
CustomAttributesCache U3CDeactivateU3Ec__IteratorE_t365__CustomAttributeCache_U3CDeactivateU3Ec__IteratorE_System_Collections_IEnumerator_get_Current_m1208 = {
1,
NULL,
&U3CDeactivateU3Ec__IteratorE_t365_CustomAttributesCacheGenerator_U3CDeactivateU3Ec__IteratorE_System_Collections_IEnumerator_get_Current_m1208
};
CustomAttributesCache U3CDeactivateU3Ec__IteratorE_t365__CustomAttributeCache_U3CDeactivateU3Ec__IteratorE_Dispose_m1210 = {
1,
NULL,
&U3CDeactivateU3Ec__IteratorE_t365_CustomAttributesCacheGenerator_U3CDeactivateU3Ec__IteratorE_Dispose_m1210
};
CustomAttributesCache U3CDeactivateU3Ec__IteratorE_t365__CustomAttributeCache_U3CDeactivateU3Ec__IteratorE_Reset_m1211 = {
1,
NULL,
&U3CDeactivateU3Ec__IteratorE_t365_CustomAttributesCacheGenerator_U3CDeactivateU3Ec__IteratorE_Reset_m1211
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType U3CDeactivateU3Ec__IteratorE_t365_0_0_0;
extern Il2CppType U3CDeactivateU3Ec__IteratorE_t365_1_0_0;
struct U3CDeactivateU3Ec__IteratorE_t365;
extern CustomAttributesCache U3CDeactivateU3Ec__IteratorE_t365__CustomAttributeCache;
extern CustomAttributesCache U3CDeactivateU3Ec__IteratorE_t365__CustomAttributeCache_U3CDeactivateU3Ec__IteratorE_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1207;
extern CustomAttributesCache U3CDeactivateU3Ec__IteratorE_t365__CustomAttributeCache_U3CDeactivateU3Ec__IteratorE_System_Collections_IEnumerator_get_Current_m1208;
extern CustomAttributesCache U3CDeactivateU3Ec__IteratorE_t365__CustomAttributeCache_U3CDeactivateU3Ec__IteratorE_Dispose_m1210;
extern CustomAttributesCache U3CDeactivateU3Ec__IteratorE_t365__CustomAttributeCache_U3CDeactivateU3Ec__IteratorE_Reset_m1211;
TypeInfo U3CDeactivateU3Ec__IteratorE_t365_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image/* image */
	, NULL/* gc_desc */
	, "<Deactivate>c__IteratorE"/* name */
	, ""/* namespaze */
	, U3CDeactivateU3Ec__IteratorE_t365_MethodInfos/* methods */
	, U3CDeactivateU3Ec__IteratorE_t365_PropertyInfos/* properties */
	, U3CDeactivateU3Ec__IteratorE_t365_FieldInfos/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &TimedObjectActivator_t367_il2cpp_TypeInfo/* nested_in */
	, &U3CDeactivateU3Ec__IteratorE_t365_il2cpp_TypeInfo/* element_class */
	, U3CDeactivateU3Ec__IteratorE_t365_InterfacesTypeInfos/* implemented_interfaces */
	, U3CDeactivateU3Ec__IteratorE_t365_VTable/* vtable */
	, &U3CDeactivateU3Ec__IteratorE_t365__CustomAttributeCache/* custom_attributes_cache */
	, &U3CDeactivateU3Ec__IteratorE_t365_il2cpp_TypeInfo/* cast_class */
	, &U3CDeactivateU3Ec__IteratorE_t365_0_0_0/* byval_arg */
	, &U3CDeactivateU3Ec__IteratorE_t365_1_0_0/* this_arg */
	, U3CDeactivateU3Ec__IteratorE_t365_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (U3CDeactivateU3Ec__IteratorE_t365)/* instance_size */
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
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 6/* method_count */
	, 2/* property_count */
	, 4/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 9/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo U3CReloadLevelU3Ec__IteratorF_t366_il2cpp_TypeInfo;

extern MethodInfo Application_get_loadedLevel_m1712_MethodInfo;
extern MethodInfo Application_LoadLevel_m2152_MethodInfo;


// System.Void UnityStandardAssets.Utility.TimedObjectActivator/<ReloadLevel>c__IteratorF::.ctor()
extern MethodInfo U3CReloadLevelU3Ec__IteratorF__ctor_m1212_MethodInfo;
 void U3CReloadLevelU3Ec__IteratorF__ctor_m1212 (U3CReloadLevelU3Ec__IteratorF_t366 * __this, MethodInfo* method){
	{
		Object__ctor_m1260(__this, /*hidden argument*/&Object__ctor_m1260_MethodInfo);
		return;
	}
}
// System.Object UnityStandardAssets.Utility.TimedObjectActivator/<ReloadLevel>c__IteratorF::System.Collections.Generic.IEnumerator<object>.get_Current()
extern MethodInfo U3CReloadLevelU3Ec__IteratorF_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1213_MethodInfo;
 Object_t * U3CReloadLevelU3Ec__IteratorF_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1213 (U3CReloadLevelU3Ec__IteratorF_t366 * __this, MethodInfo* method){
	{
		Object_t * L_0 = (__this->___$current_2);
		return L_0;
	}
}
// System.Object UnityStandardAssets.Utility.TimedObjectActivator/<ReloadLevel>c__IteratorF::System.Collections.IEnumerator.get_Current()
extern MethodInfo U3CReloadLevelU3Ec__IteratorF_System_Collections_IEnumerator_get_Current_m1214_MethodInfo;
 Object_t * U3CReloadLevelU3Ec__IteratorF_System_Collections_IEnumerator_get_Current_m1214 (U3CReloadLevelU3Ec__IteratorF_t366 * __this, MethodInfo* method){
	{
		Object_t * L_0 = (__this->___$current_2);
		return L_0;
	}
}
// System.Boolean UnityStandardAssets.Utility.TimedObjectActivator/<ReloadLevel>c__IteratorF::MoveNext()
extern MethodInfo U3CReloadLevelU3Ec__IteratorF_MoveNext_m1215_MethodInfo;
 bool U3CReloadLevelU3Ec__IteratorF_MoveNext_m1215 (U3CReloadLevelU3Ec__IteratorF_t366 * __this, MethodInfo* method){
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = (__this->___$PC_1);
		V_0 = L_0;
		__this->___$PC_1 = (-1);
		if (V_0 == 0)
		{
			goto IL_0021;
		}
		if (V_0 == 1)
		{
			goto IL_0043;
		}
	}
	{
		goto IL_0054;
	}

IL_0021:
	{
		Entry_t361 * L_1 = (__this->___entry_0);
		NullCheck(L_1);
		float L_2 = (L_1->___delay_2);
		WaitForSeconds_t479 * L_3 = (WaitForSeconds_t479 *)il2cpp_codegen_object_new (InitializedTypeInfo(&WaitForSeconds_t479_il2cpp_TypeInfo));
		WaitForSeconds__ctor_m1585(L_3, L_2, /*hidden argument*/&WaitForSeconds__ctor_m1585_MethodInfo);
		__this->___$current_2 = L_3;
		__this->___$PC_1 = 1;
		goto IL_0056;
	}

IL_0043:
	{
		int32_t L_4 = Application_get_loadedLevel_m1712(NULL /*static, unused*/, /*hidden argument*/&Application_get_loadedLevel_m1712_MethodInfo);
		Application_LoadLevel_m2152(NULL /*static, unused*/, L_4, /*hidden argument*/&Application_LoadLevel_m2152_MethodInfo);
		__this->___$PC_1 = (-1);
	}

IL_0054:
	{
		return 0;
	}

IL_0056:
	{
		return 1;
	}
	// Dead block : IL_0058: ldloc.1
}
// System.Void UnityStandardAssets.Utility.TimedObjectActivator/<ReloadLevel>c__IteratorF::Dispose()
extern MethodInfo U3CReloadLevelU3Ec__IteratorF_Dispose_m1216_MethodInfo;
 void U3CReloadLevelU3Ec__IteratorF_Dispose_m1216 (U3CReloadLevelU3Ec__IteratorF_t366 * __this, MethodInfo* method){
	{
		__this->___$PC_1 = (-1);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.TimedObjectActivator/<ReloadLevel>c__IteratorF::Reset()
extern MethodInfo U3CReloadLevelU3Ec__IteratorF_Reset_m1217_MethodInfo;
 void U3CReloadLevelU3Ec__IteratorF_Reset_m1217 (U3CReloadLevelU3Ec__IteratorF_t366 * __this, MethodInfo* method){
	{
		NotSupportedException_t445 * L_0 = (NotSupportedException_t445 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t445_il2cpp_TypeInfo));
		NotSupportedException__ctor_m1445(L_0, /*hidden argument*/&NotSupportedException__ctor_m1445_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// Metadata Definition UnityStandardAssets.Utility.TimedObjectActivator/<ReloadLevel>c__IteratorF
extern Il2CppType Entry_t361_0_0_3;
FieldInfo U3CReloadLevelU3Ec__IteratorF_t366____entry_0_FieldInfo = 
{
	"entry"/* name */
	, &Entry_t361_0_0_3/* type */
	, &U3CReloadLevelU3Ec__IteratorF_t366_il2cpp_TypeInfo/* parent */
	, offsetof(U3CReloadLevelU3Ec__IteratorF_t366, ___entry_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t386_0_0_3;
FieldInfo U3CReloadLevelU3Ec__IteratorF_t366____$PC_1_FieldInfo = 
{
	"$PC"/* name */
	, &Int32_t386_0_0_3/* type */
	, &U3CReloadLevelU3Ec__IteratorF_t366_il2cpp_TypeInfo/* parent */
	, offsetof(U3CReloadLevelU3Ec__IteratorF_t366, ___$PC_1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Object_t_0_0_3;
FieldInfo U3CReloadLevelU3Ec__IteratorF_t366____$current_2_FieldInfo = 
{
	"$current"/* name */
	, &Object_t_0_0_3/* type */
	, &U3CReloadLevelU3Ec__IteratorF_t366_il2cpp_TypeInfo/* parent */
	, offsetof(U3CReloadLevelU3Ec__IteratorF_t366, ___$current_2)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Entry_t361_0_0_3;
FieldInfo U3CReloadLevelU3Ec__IteratorF_t366____U3C$U3Eentry_3_FieldInfo = 
{
	"<$>entry"/* name */
	, &Entry_t361_0_0_3/* type */
	, &U3CReloadLevelU3Ec__IteratorF_t366_il2cpp_TypeInfo/* parent */
	, offsetof(U3CReloadLevelU3Ec__IteratorF_t366, ___U3C$U3Eentry_3)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* U3CReloadLevelU3Ec__IteratorF_t366_FieldInfos[] =
{
	&U3CReloadLevelU3Ec__IteratorF_t366____entry_0_FieldInfo,
	&U3CReloadLevelU3Ec__IteratorF_t366____$PC_1_FieldInfo,
	&U3CReloadLevelU3Ec__IteratorF_t366____$current_2_FieldInfo,
	&U3CReloadLevelU3Ec__IteratorF_t366____U3C$U3Eentry_3_FieldInfo,
	NULL
};
static PropertyInfo U3CReloadLevelU3Ec__IteratorF_t366____System_Collections_Generic_IEnumeratorU3CobjectU3E_Current_PropertyInfo = 
{
	&U3CReloadLevelU3Ec__IteratorF_t366_il2cpp_TypeInfo/* parent */
	, "System.Collections.Generic.IEnumerator<object>.Current"/* name */
	, &U3CReloadLevelU3Ec__IteratorF_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1213_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo U3CReloadLevelU3Ec__IteratorF_t366____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&U3CReloadLevelU3Ec__IteratorF_t366_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &U3CReloadLevelU3Ec__IteratorF_System_Collections_IEnumerator_get_Current_m1214_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* U3CReloadLevelU3Ec__IteratorF_t366_PropertyInfos[] =
{
	&U3CReloadLevelU3Ec__IteratorF_t366____System_Collections_Generic_IEnumeratorU3CobjectU3E_Current_PropertyInfo,
	&U3CReloadLevelU3Ec__IteratorF_t366____System_Collections_IEnumerator_Current_PropertyInfo,
	NULL
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
// System.Void UnityStandardAssets.Utility.TimedObjectActivator/<ReloadLevel>c__IteratorF::.ctor()
MethodInfo U3CReloadLevelU3Ec__IteratorF__ctor_m1212_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&U3CReloadLevelU3Ec__IteratorF__ctor_m1212/* method */
	, &U3CReloadLevelU3Ec__IteratorF_t366_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1312/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache U3CReloadLevelU3Ec__IteratorF_t366__CustomAttributeCache_U3CReloadLevelU3Ec__IteratorF_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1213;
// System.Object UnityStandardAssets.Utility.TimedObjectActivator/<ReloadLevel>c__IteratorF::System.Collections.Generic.IEnumerator<object>.get_Current()
MethodInfo U3CReloadLevelU3Ec__IteratorF_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1213_MethodInfo = 
{
	"System.Collections.Generic.IEnumerator<object>.get_Current"/* name */
	, (methodPointerType)&U3CReloadLevelU3Ec__IteratorF_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1213/* method */
	, &U3CReloadLevelU3Ec__IteratorF_t366_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &U3CReloadLevelU3Ec__IteratorF_t366__CustomAttributeCache_U3CReloadLevelU3Ec__IteratorF_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1213/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1313/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache U3CReloadLevelU3Ec__IteratorF_t366__CustomAttributeCache_U3CReloadLevelU3Ec__IteratorF_System_Collections_IEnumerator_get_Current_m1214;
// System.Object UnityStandardAssets.Utility.TimedObjectActivator/<ReloadLevel>c__IteratorF::System.Collections.IEnumerator.get_Current()
MethodInfo U3CReloadLevelU3Ec__IteratorF_System_Collections_IEnumerator_get_Current_m1214_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&U3CReloadLevelU3Ec__IteratorF_System_Collections_IEnumerator_get_Current_m1214/* method */
	, &U3CReloadLevelU3Ec__IteratorF_t366_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &U3CReloadLevelU3Ec__IteratorF_t366__CustomAttributeCache_U3CReloadLevelU3Ec__IteratorF_System_Collections_IEnumerator_get_Current_m1214/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1314/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t379_0_0_0;
extern void* RuntimeInvoker_Boolean_t379 (MethodInfo* method, void* obj, void** args);
// System.Boolean UnityStandardAssets.Utility.TimedObjectActivator/<ReloadLevel>c__IteratorF::MoveNext()
MethodInfo U3CReloadLevelU3Ec__IteratorF_MoveNext_m1215_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&U3CReloadLevelU3Ec__IteratorF_MoveNext_m1215/* method */
	, &U3CReloadLevelU3Ec__IteratorF_t366_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t379_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t379/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1315/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache U3CReloadLevelU3Ec__IteratorF_t366__CustomAttributeCache_U3CReloadLevelU3Ec__IteratorF_Dispose_m1216;
// System.Void UnityStandardAssets.Utility.TimedObjectActivator/<ReloadLevel>c__IteratorF::Dispose()
MethodInfo U3CReloadLevelU3Ec__IteratorF_Dispose_m1216_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&U3CReloadLevelU3Ec__IteratorF_Dispose_m1216/* method */
	, &U3CReloadLevelU3Ec__IteratorF_t366_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &U3CReloadLevelU3Ec__IteratorF_t366__CustomAttributeCache_U3CReloadLevelU3Ec__IteratorF_Dispose_m1216/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1316/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache U3CReloadLevelU3Ec__IteratorF_t366__CustomAttributeCache_U3CReloadLevelU3Ec__IteratorF_Reset_m1217;
// System.Void UnityStandardAssets.Utility.TimedObjectActivator/<ReloadLevel>c__IteratorF::Reset()
MethodInfo U3CReloadLevelU3Ec__IteratorF_Reset_m1217_MethodInfo = 
{
	"Reset"/* name */
	, (methodPointerType)&U3CReloadLevelU3Ec__IteratorF_Reset_m1217/* method */
	, &U3CReloadLevelU3Ec__IteratorF_t366_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &U3CReloadLevelU3Ec__IteratorF_t366__CustomAttributeCache_U3CReloadLevelU3Ec__IteratorF_Reset_m1217/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1317/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* U3CReloadLevelU3Ec__IteratorF_t366_MethodInfos[] =
{
	&U3CReloadLevelU3Ec__IteratorF__ctor_m1212_MethodInfo,
	&U3CReloadLevelU3Ec__IteratorF_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1213_MethodInfo,
	&U3CReloadLevelU3Ec__IteratorF_System_Collections_IEnumerator_get_Current_m1214_MethodInfo,
	&U3CReloadLevelU3Ec__IteratorF_MoveNext_m1215_MethodInfo,
	&U3CReloadLevelU3Ec__IteratorF_Dispose_m1216_MethodInfo,
	&U3CReloadLevelU3Ec__IteratorF_Reset_m1217_MethodInfo,
	NULL
};
static MethodInfo* U3CReloadLevelU3Ec__IteratorF_t366_VTable[] =
{
	&Object_Equals_m1252_MethodInfo,
	&Object_Finalize_m1253_MethodInfo,
	&Object_GetHashCode_m1254_MethodInfo,
	&Object_ToString_m1255_MethodInfo,
	&U3CReloadLevelU3Ec__IteratorF_Dispose_m1216_MethodInfo,
	&U3CReloadLevelU3Ec__IteratorF_System_Collections_IEnumerator_get_Current_m1214_MethodInfo,
	&U3CReloadLevelU3Ec__IteratorF_MoveNext_m1215_MethodInfo,
	&U3CReloadLevelU3Ec__IteratorF_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1213_MethodInfo,
	&U3CReloadLevelU3Ec__IteratorF_Reset_m1217_MethodInfo,
};
static TypeInfo* U3CReloadLevelU3Ec__IteratorF_t366_InterfacesTypeInfos[] = 
{
	&IDisposable_t444_il2cpp_TypeInfo,
	&IEnumerator_t26_il2cpp_TypeInfo,
	&IEnumerator_1_t53_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair U3CReloadLevelU3Ec__IteratorF_t366_InterfacesOffsets[] = 
{
	{ &IDisposable_t444_il2cpp_TypeInfo, 4},
	{ &IEnumerator_t26_il2cpp_TypeInfo, 5},
	{ &IEnumerator_1_t53_il2cpp_TypeInfo, 7},
};
void U3CReloadLevelU3Ec__IteratorF_t366_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t384 * tmp;
		tmp = (CompilerGeneratedAttribute_t384 *)il2cpp_codegen_object_new (&CompilerGeneratedAttribute_t384_il2cpp_TypeInfo);
		CompilerGeneratedAttribute__ctor_m1269(tmp, &CompilerGeneratedAttribute__ctor_m1269_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void U3CReloadLevelU3Ec__IteratorF_t366_CustomAttributesCacheGenerator_U3CReloadLevelU3Ec__IteratorF_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1213(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t447 * tmp;
		tmp = (DebuggerHiddenAttribute_t447 *)il2cpp_codegen_object_new (&DebuggerHiddenAttribute_t447_il2cpp_TypeInfo);
		DebuggerHiddenAttribute__ctor_m1446(tmp, &DebuggerHiddenAttribute__ctor_m1446_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void U3CReloadLevelU3Ec__IteratorF_t366_CustomAttributesCacheGenerator_U3CReloadLevelU3Ec__IteratorF_System_Collections_IEnumerator_get_Current_m1214(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t447 * tmp;
		tmp = (DebuggerHiddenAttribute_t447 *)il2cpp_codegen_object_new (&DebuggerHiddenAttribute_t447_il2cpp_TypeInfo);
		DebuggerHiddenAttribute__ctor_m1446(tmp, &DebuggerHiddenAttribute__ctor_m1446_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void U3CReloadLevelU3Ec__IteratorF_t366_CustomAttributesCacheGenerator_U3CReloadLevelU3Ec__IteratorF_Dispose_m1216(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t447 * tmp;
		tmp = (DebuggerHiddenAttribute_t447 *)il2cpp_codegen_object_new (&DebuggerHiddenAttribute_t447_il2cpp_TypeInfo);
		DebuggerHiddenAttribute__ctor_m1446(tmp, &DebuggerHiddenAttribute__ctor_m1446_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void U3CReloadLevelU3Ec__IteratorF_t366_CustomAttributesCacheGenerator_U3CReloadLevelU3Ec__IteratorF_Reset_m1217(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t447 * tmp;
		tmp = (DebuggerHiddenAttribute_t447 *)il2cpp_codegen_object_new (&DebuggerHiddenAttribute_t447_il2cpp_TypeInfo);
		DebuggerHiddenAttribute__ctor_m1446(tmp, &DebuggerHiddenAttribute__ctor_m1446_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache U3CReloadLevelU3Ec__IteratorF_t366__CustomAttributeCache = {
1,
NULL,
&U3CReloadLevelU3Ec__IteratorF_t366_CustomAttributesCacheGenerator
};
CustomAttributesCache U3CReloadLevelU3Ec__IteratorF_t366__CustomAttributeCache_U3CReloadLevelU3Ec__IteratorF_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1213 = {
1,
NULL,
&U3CReloadLevelU3Ec__IteratorF_t366_CustomAttributesCacheGenerator_U3CReloadLevelU3Ec__IteratorF_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1213
};
CustomAttributesCache U3CReloadLevelU3Ec__IteratorF_t366__CustomAttributeCache_U3CReloadLevelU3Ec__IteratorF_System_Collections_IEnumerator_get_Current_m1214 = {
1,
NULL,
&U3CReloadLevelU3Ec__IteratorF_t366_CustomAttributesCacheGenerator_U3CReloadLevelU3Ec__IteratorF_System_Collections_IEnumerator_get_Current_m1214
};
CustomAttributesCache U3CReloadLevelU3Ec__IteratorF_t366__CustomAttributeCache_U3CReloadLevelU3Ec__IteratorF_Dispose_m1216 = {
1,
NULL,
&U3CReloadLevelU3Ec__IteratorF_t366_CustomAttributesCacheGenerator_U3CReloadLevelU3Ec__IteratorF_Dispose_m1216
};
CustomAttributesCache U3CReloadLevelU3Ec__IteratorF_t366__CustomAttributeCache_U3CReloadLevelU3Ec__IteratorF_Reset_m1217 = {
1,
NULL,
&U3CReloadLevelU3Ec__IteratorF_t366_CustomAttributesCacheGenerator_U3CReloadLevelU3Ec__IteratorF_Reset_m1217
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType U3CReloadLevelU3Ec__IteratorF_t366_0_0_0;
extern Il2CppType U3CReloadLevelU3Ec__IteratorF_t366_1_0_0;
struct U3CReloadLevelU3Ec__IteratorF_t366;
extern CustomAttributesCache U3CReloadLevelU3Ec__IteratorF_t366__CustomAttributeCache;
extern CustomAttributesCache U3CReloadLevelU3Ec__IteratorF_t366__CustomAttributeCache_U3CReloadLevelU3Ec__IteratorF_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1213;
extern CustomAttributesCache U3CReloadLevelU3Ec__IteratorF_t366__CustomAttributeCache_U3CReloadLevelU3Ec__IteratorF_System_Collections_IEnumerator_get_Current_m1214;
extern CustomAttributesCache U3CReloadLevelU3Ec__IteratorF_t366__CustomAttributeCache_U3CReloadLevelU3Ec__IteratorF_Dispose_m1216;
extern CustomAttributesCache U3CReloadLevelU3Ec__IteratorF_t366__CustomAttributeCache_U3CReloadLevelU3Ec__IteratorF_Reset_m1217;
TypeInfo U3CReloadLevelU3Ec__IteratorF_t366_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image/* image */
	, NULL/* gc_desc */
	, "<ReloadLevel>c__IteratorF"/* name */
	, ""/* namespaze */
	, U3CReloadLevelU3Ec__IteratorF_t366_MethodInfos/* methods */
	, U3CReloadLevelU3Ec__IteratorF_t366_PropertyInfos/* properties */
	, U3CReloadLevelU3Ec__IteratorF_t366_FieldInfos/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &TimedObjectActivator_t367_il2cpp_TypeInfo/* nested_in */
	, &U3CReloadLevelU3Ec__IteratorF_t366_il2cpp_TypeInfo/* element_class */
	, U3CReloadLevelU3Ec__IteratorF_t366_InterfacesTypeInfos/* implemented_interfaces */
	, U3CReloadLevelU3Ec__IteratorF_t366_VTable/* vtable */
	, &U3CReloadLevelU3Ec__IteratorF_t366__CustomAttributeCache/* custom_attributes_cache */
	, &U3CReloadLevelU3Ec__IteratorF_t366_il2cpp_TypeInfo/* cast_class */
	, &U3CReloadLevelU3Ec__IteratorF_t366_0_0_0/* byval_arg */
	, &U3CReloadLevelU3Ec__IteratorF_t366_1_0_0/* this_arg */
	, U3CReloadLevelU3Ec__IteratorF_t366_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (U3CReloadLevelU3Ec__IteratorF_t366)/* instance_size */
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
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 6/* method_count */
	, 2/* property_count */
	, 4/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 9/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo TimedObjectActivator_Activate_m1220_MethodInfo;
extern MethodInfo TimedObjectActivator_Deactivate_m1221_MethodInfo;
extern MethodInfo Object_Destroy_m2153_MethodInfo;
extern MethodInfo TimedObjectActivator_ReloadLevel_m1222_MethodInfo;


// System.Void UnityStandardAssets.Utility.TimedObjectActivator::.ctor()
extern MethodInfo TimedObjectActivator__ctor_m1218_MethodInfo;
 void TimedObjectActivator__ctor_m1218 (TimedObjectActivator_t367 * __this, MethodInfo* method){
	{
		Entries_t363 * L_0 = (Entries_t363 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Entries_t363_il2cpp_TypeInfo));
		Entries__ctor_m1199(L_0, /*hidden argument*/&Entries__ctor_m1199_MethodInfo);
		__this->___entries_2 = L_0;
		MonoBehaviour__ctor_m1402(__this, /*hidden argument*/&MonoBehaviour__ctor_m1402_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.TimedObjectActivator::Awake()
extern MethodInfo TimedObjectActivator_Awake_m1219_MethodInfo;
 void TimedObjectActivator_Awake_m1219 (TimedObjectActivator_t367 * __this, MethodInfo* method){
	Entry_t361 * V_0 = {0};
	EntryU5BU5D_t362* V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = {0};
	{
		Entries_t363 * L_0 = (__this->___entries_2);
		NullCheck(L_0);
		EntryU5BU5D_t362* L_1 = (L_0->___entries_0);
		V_1 = L_1;
		V_2 = 0;
		goto IL_008c;
	}

IL_0013:
	{
		NullCheck(V_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_1, V_2);
		int32_t L_2 = V_2;
		V_0 = (*(Entry_t361 **)(Entry_t361 **)SZArrayLdElema(V_1, L_2));
		NullCheck(V_0);
		int32_t L_3 = (V_0->___action_1);
		V_3 = L_3;
		if (V_3 == 0)
		{
			goto IL_0039;
		}
		if (V_3 == 1)
		{
			goto IL_004c;
		}
		if (V_3 == 2)
		{
			goto IL_005f;
		}
		if (V_3 == 3)
		{
			goto IL_0075;
		}
	}
	{
		goto IL_0088;
	}

IL_0039:
	{
		Object_t * L_4 = TimedObjectActivator_Activate_m1220(__this, V_0, /*hidden argument*/&TimedObjectActivator_Activate_m1220_MethodInfo);
		MonoBehaviour_StartCoroutine_m1596(__this, L_4, /*hidden argument*/&MonoBehaviour_StartCoroutine_m1596_MethodInfo);
		goto IL_0088;
	}

IL_004c:
	{
		Object_t * L_5 = TimedObjectActivator_Deactivate_m1221(__this, V_0, /*hidden argument*/&TimedObjectActivator_Deactivate_m1221_MethodInfo);
		MonoBehaviour_StartCoroutine_m1596(__this, L_5, /*hidden argument*/&MonoBehaviour_StartCoroutine_m1596_MethodInfo);
		goto IL_0088;
	}

IL_005f:
	{
		NullCheck(V_0);
		GameObject_t235 * L_6 = (V_0->___target_0);
		NullCheck(V_0);
		float L_7 = (V_0->___delay_2);
		Object_Destroy_m2153(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/&Object_Destroy_m2153_MethodInfo);
		goto IL_0088;
	}

IL_0075:
	{
		Object_t * L_8 = TimedObjectActivator_ReloadLevel_m1222(__this, V_0, /*hidden argument*/&TimedObjectActivator_ReloadLevel_m1222_MethodInfo);
		MonoBehaviour_StartCoroutine_m1596(__this, L_8, /*hidden argument*/&MonoBehaviour_StartCoroutine_m1596_MethodInfo);
		goto IL_0088;
	}

IL_0088:
	{
		V_2 = ((int32_t)(V_2+1));
	}

IL_008c:
	{
		NullCheck(V_1);
		if ((((int32_t)V_2) < ((int32_t)(((int32_t)(((Array_t *)V_1)->max_length))))))
		{
			goto IL_0013;
		}
	}
	{
		return;
	}
}
// System.Collections.IEnumerator UnityStandardAssets.Utility.TimedObjectActivator::Activate(UnityStandardAssets.Utility.TimedObjectActivator/Entry)
 Object_t * TimedObjectActivator_Activate_m1220 (TimedObjectActivator_t367 * __this, Entry_t361 * ___entry, MethodInfo* method){
	U3CActivateU3Ec__IteratorD_t364 * V_0 = {0};
	{
		U3CActivateU3Ec__IteratorD_t364 * L_0 = (U3CActivateU3Ec__IteratorD_t364 *)il2cpp_codegen_object_new (InitializedTypeInfo(&U3CActivateU3Ec__IteratorD_t364_il2cpp_TypeInfo));
		U3CActivateU3Ec__IteratorD__ctor_m1200(L_0, /*hidden argument*/&U3CActivateU3Ec__IteratorD__ctor_m1200_MethodInfo);
		V_0 = L_0;
		NullCheck(V_0);
		V_0->___entry_0 = ___entry;
		NullCheck(V_0);
		V_0->___U3C$U3Eentry_3 = ___entry;
		return V_0;
	}
}
// System.Collections.IEnumerator UnityStandardAssets.Utility.TimedObjectActivator::Deactivate(UnityStandardAssets.Utility.TimedObjectActivator/Entry)
 Object_t * TimedObjectActivator_Deactivate_m1221 (TimedObjectActivator_t367 * __this, Entry_t361 * ___entry, MethodInfo* method){
	U3CDeactivateU3Ec__IteratorE_t365 * V_0 = {0};
	{
		U3CDeactivateU3Ec__IteratorE_t365 * L_0 = (U3CDeactivateU3Ec__IteratorE_t365 *)il2cpp_codegen_object_new (InitializedTypeInfo(&U3CDeactivateU3Ec__IteratorE_t365_il2cpp_TypeInfo));
		U3CDeactivateU3Ec__IteratorE__ctor_m1206(L_0, /*hidden argument*/&U3CDeactivateU3Ec__IteratorE__ctor_m1206_MethodInfo);
		V_0 = L_0;
		NullCheck(V_0);
		V_0->___entry_0 = ___entry;
		NullCheck(V_0);
		V_0->___U3C$U3Eentry_3 = ___entry;
		return V_0;
	}
}
// System.Collections.IEnumerator UnityStandardAssets.Utility.TimedObjectActivator::ReloadLevel(UnityStandardAssets.Utility.TimedObjectActivator/Entry)
 Object_t * TimedObjectActivator_ReloadLevel_m1222 (TimedObjectActivator_t367 * __this, Entry_t361 * ___entry, MethodInfo* method){
	U3CReloadLevelU3Ec__IteratorF_t366 * V_0 = {0};
	{
		U3CReloadLevelU3Ec__IteratorF_t366 * L_0 = (U3CReloadLevelU3Ec__IteratorF_t366 *)il2cpp_codegen_object_new (InitializedTypeInfo(&U3CReloadLevelU3Ec__IteratorF_t366_il2cpp_TypeInfo));
		U3CReloadLevelU3Ec__IteratorF__ctor_m1212(L_0, /*hidden argument*/&U3CReloadLevelU3Ec__IteratorF__ctor_m1212_MethodInfo);
		V_0 = L_0;
		NullCheck(V_0);
		V_0->___entry_0 = ___entry;
		NullCheck(V_0);
		V_0->___U3C$U3Eentry_3 = ___entry;
		return V_0;
	}
}
// Metadata Definition UnityStandardAssets.Utility.TimedObjectActivator
extern Il2CppType Entries_t363_0_0_6;
FieldInfo TimedObjectActivator_t367____entries_2_FieldInfo = 
{
	"entries"/* name */
	, &Entries_t363_0_0_6/* type */
	, &TimedObjectActivator_t367_il2cpp_TypeInfo/* parent */
	, offsetof(TimedObjectActivator_t367, ___entries_2)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* TimedObjectActivator_t367_FieldInfos[] =
{
	&TimedObjectActivator_t367____entries_2_FieldInfo,
	NULL
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
// System.Void UnityStandardAssets.Utility.TimedObjectActivator::.ctor()
MethodInfo TimedObjectActivator__ctor_m1218_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&TimedObjectActivator__ctor_m1218/* method */
	, &TimedObjectActivator_t367_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1293/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
// System.Void UnityStandardAssets.Utility.TimedObjectActivator::Awake()
MethodInfo TimedObjectActivator_Awake_m1219_MethodInfo = 
{
	"Awake"/* name */
	, (methodPointerType)&TimedObjectActivator_Awake_m1219/* method */
	, &TimedObjectActivator_t367_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1294/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Entry_t361_0_0_0;
static ParameterInfo TimedObjectActivator_t367_TimedObjectActivator_Activate_m1220_ParameterInfos[] = 
{
	{"entry", 0, 134218775, &EmptyCustomAttributesCache, &Entry_t361_0_0_0},
};
extern Il2CppType IEnumerator_t26_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache TimedObjectActivator_t367__CustomAttributeCache_TimedObjectActivator_Activate_m1220;
// System.Collections.IEnumerator UnityStandardAssets.Utility.TimedObjectActivator::Activate(UnityStandardAssets.Utility.TimedObjectActivator/Entry)
MethodInfo TimedObjectActivator_Activate_m1220_MethodInfo = 
{
	"Activate"/* name */
	, (methodPointerType)&TimedObjectActivator_Activate_m1220/* method */
	, &TimedObjectActivator_t367_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_t26_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, TimedObjectActivator_t367_TimedObjectActivator_Activate_m1220_ParameterInfos/* parameters */
	, &TimedObjectActivator_t367__CustomAttributeCache_TimedObjectActivator_Activate_m1220/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1295/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Entry_t361_0_0_0;
static ParameterInfo TimedObjectActivator_t367_TimedObjectActivator_Deactivate_m1221_ParameterInfos[] = 
{
	{"entry", 0, 134218776, &EmptyCustomAttributesCache, &Entry_t361_0_0_0},
};
extern Il2CppType IEnumerator_t26_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache TimedObjectActivator_t367__CustomAttributeCache_TimedObjectActivator_Deactivate_m1221;
// System.Collections.IEnumerator UnityStandardAssets.Utility.TimedObjectActivator::Deactivate(UnityStandardAssets.Utility.TimedObjectActivator/Entry)
MethodInfo TimedObjectActivator_Deactivate_m1221_MethodInfo = 
{
	"Deactivate"/* name */
	, (methodPointerType)&TimedObjectActivator_Deactivate_m1221/* method */
	, &TimedObjectActivator_t367_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_t26_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, TimedObjectActivator_t367_TimedObjectActivator_Deactivate_m1221_ParameterInfos/* parameters */
	, &TimedObjectActivator_t367__CustomAttributeCache_TimedObjectActivator_Deactivate_m1221/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1296/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Entry_t361_0_0_0;
static ParameterInfo TimedObjectActivator_t367_TimedObjectActivator_ReloadLevel_m1222_ParameterInfos[] = 
{
	{"entry", 0, 134218777, &EmptyCustomAttributesCache, &Entry_t361_0_0_0},
};
extern Il2CppType IEnumerator_t26_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache TimedObjectActivator_t367__CustomAttributeCache_TimedObjectActivator_ReloadLevel_m1222;
// System.Collections.IEnumerator UnityStandardAssets.Utility.TimedObjectActivator::ReloadLevel(UnityStandardAssets.Utility.TimedObjectActivator/Entry)
MethodInfo TimedObjectActivator_ReloadLevel_m1222_MethodInfo = 
{
	"ReloadLevel"/* name */
	, (methodPointerType)&TimedObjectActivator_ReloadLevel_m1222/* method */
	, &TimedObjectActivator_t367_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_t26_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, TimedObjectActivator_t367_TimedObjectActivator_ReloadLevel_m1222_ParameterInfos/* parameters */
	, &TimedObjectActivator_t367__CustomAttributeCache_TimedObjectActivator_ReloadLevel_m1222/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1297/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* TimedObjectActivator_t367_MethodInfos[] =
{
	&TimedObjectActivator__ctor_m1218_MethodInfo,
	&TimedObjectActivator_Awake_m1219_MethodInfo,
	&TimedObjectActivator_Activate_m1220_MethodInfo,
	&TimedObjectActivator_Deactivate_m1221_MethodInfo,
	&TimedObjectActivator_ReloadLevel_m1222_MethodInfo,
	NULL
};
extern TypeInfo Action_t360_il2cpp_TypeInfo;
extern TypeInfo Entry_t361_il2cpp_TypeInfo;
extern TypeInfo Entries_t363_il2cpp_TypeInfo;
extern TypeInfo U3CActivateU3Ec__IteratorD_t364_il2cpp_TypeInfo;
extern TypeInfo U3CDeactivateU3Ec__IteratorE_t365_il2cpp_TypeInfo;
extern TypeInfo U3CReloadLevelU3Ec__IteratorF_t366_il2cpp_TypeInfo;
static TypeInfo* TimedObjectActivator_t367_il2cpp_TypeInfo__nestedTypes[7] =
{
	&Action_t360_il2cpp_TypeInfo,
	&Entry_t361_il2cpp_TypeInfo,
	&Entries_t363_il2cpp_TypeInfo,
	&U3CActivateU3Ec__IteratorD_t364_il2cpp_TypeInfo,
	&U3CDeactivateU3Ec__IteratorE_t365_il2cpp_TypeInfo,
	&U3CReloadLevelU3Ec__IteratorF_t366_il2cpp_TypeInfo,
	NULL
};
static MethodInfo* TimedObjectActivator_t367_VTable[] =
{
	&Object_Equals_m1333_MethodInfo,
	&Object_Finalize_m1253_MethodInfo,
	&Object_GetHashCode_m1334_MethodInfo,
	&Object_ToString_m1335_MethodInfo,
};
void TimedObjectActivator_t367_CustomAttributesCacheGenerator_TimedObjectActivator_Activate_m1220(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t447 * tmp;
		tmp = (DebuggerHiddenAttribute_t447 *)il2cpp_codegen_object_new (&DebuggerHiddenAttribute_t447_il2cpp_TypeInfo);
		DebuggerHiddenAttribute__ctor_m1446(tmp, &DebuggerHiddenAttribute__ctor_m1446_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void TimedObjectActivator_t367_CustomAttributesCacheGenerator_TimedObjectActivator_Deactivate_m1221(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t447 * tmp;
		tmp = (DebuggerHiddenAttribute_t447 *)il2cpp_codegen_object_new (&DebuggerHiddenAttribute_t447_il2cpp_TypeInfo);
		DebuggerHiddenAttribute__ctor_m1446(tmp, &DebuggerHiddenAttribute__ctor_m1446_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void TimedObjectActivator_t367_CustomAttributesCacheGenerator_TimedObjectActivator_ReloadLevel_m1222(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t447 * tmp;
		tmp = (DebuggerHiddenAttribute_t447 *)il2cpp_codegen_object_new (&DebuggerHiddenAttribute_t447_il2cpp_TypeInfo);
		DebuggerHiddenAttribute__ctor_m1446(tmp, &DebuggerHiddenAttribute__ctor_m1446_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache TimedObjectActivator_t367__CustomAttributeCache_TimedObjectActivator_Activate_m1220 = {
1,
NULL,
&TimedObjectActivator_t367_CustomAttributesCacheGenerator_TimedObjectActivator_Activate_m1220
};
CustomAttributesCache TimedObjectActivator_t367__CustomAttributeCache_TimedObjectActivator_Deactivate_m1221 = {
1,
NULL,
&TimedObjectActivator_t367_CustomAttributesCacheGenerator_TimedObjectActivator_Deactivate_m1221
};
CustomAttributesCache TimedObjectActivator_t367__CustomAttributeCache_TimedObjectActivator_ReloadLevel_m1222 = {
1,
NULL,
&TimedObjectActivator_t367_CustomAttributesCacheGenerator_TimedObjectActivator_ReloadLevel_m1222
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType TimedObjectActivator_t367_0_0_0;
extern Il2CppType TimedObjectActivator_t367_1_0_0;
struct TimedObjectActivator_t367;
extern CustomAttributesCache TimedObjectActivator_t367__CustomAttributeCache_TimedObjectActivator_Activate_m1220;
extern CustomAttributesCache TimedObjectActivator_t367__CustomAttributeCache_TimedObjectActivator_Deactivate_m1221;
extern CustomAttributesCache TimedObjectActivator_t367__CustomAttributeCache_TimedObjectActivator_ReloadLevel_m1222;
TypeInfo TimedObjectActivator_t367_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image/* image */
	, NULL/* gc_desc */
	, "TimedObjectActivator"/* name */
	, "UnityStandardAssets.Utility"/* namespaze */
	, TimedObjectActivator_t367_MethodInfos/* methods */
	, NULL/* properties */
	, TimedObjectActivator_t367_FieldInfos/* fields */
	, NULL/* events */
	, &MonoBehaviour_t39_il2cpp_TypeInfo/* parent */
	, TimedObjectActivator_t367_il2cpp_TypeInfo__nestedTypes/* nested_types */
	, NULL/* nested_in */
	, &TimedObjectActivator_t367_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, TimedObjectActivator_t367_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &TimedObjectActivator_t367_il2cpp_TypeInfo/* cast_class */
	, &TimedObjectActivator_t367_0_0_0/* byval_arg */
	, &TimedObjectActivator_t367_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (TimedObjectActivator_t367)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048577/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 6/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TimedObjectDestructor_t368_il2cpp_TypeInfo;

extern MethodInfo MonoBehaviour_Invoke_m2154_MethodInfo;
extern MethodInfo Transform_DetachChildren_m2155_MethodInfo;


// System.Void UnityStandardAssets.Utility.TimedObjectDestructor::.ctor()
extern MethodInfo TimedObjectDestructor__ctor_m1223_MethodInfo;
 void TimedObjectDestructor__ctor_m1223 (TimedObjectDestructor_t368 * __this, MethodInfo* method){
	{
		__this->___m_TimeOut_2 = (1.0f);
		MonoBehaviour__ctor_m1402(__this, /*hidden argument*/&MonoBehaviour__ctor_m1402_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.TimedObjectDestructor::Awake()
extern MethodInfo TimedObjectDestructor_Awake_m1224_MethodInfo;
 void TimedObjectDestructor_Awake_m1224 (TimedObjectDestructor_t368 * __this, MethodInfo* method){
	{
		float L_0 = (__this->___m_TimeOut_2);
		MonoBehaviour_Invoke_m2154(__this, (String_t*) &_stringLiteral466, L_0, /*hidden argument*/&MonoBehaviour_Invoke_m2154_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.TimedObjectDestructor::DestroyNow()
extern MethodInfo TimedObjectDestructor_DestroyNow_m1225_MethodInfo;
 void TimedObjectDestructor_DestroyNow_m1225 (TimedObjectDestructor_t368 * __this, MethodInfo* method){
	{
		bool L_0 = (__this->___m_DetachChildren_3);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Transform_t173 * L_1 = Component_get_transform_m1739(__this, /*hidden argument*/&Component_get_transform_m1739_MethodInfo);
		NullCheck(L_1);
		Transform_DetachChildren_m2155(L_1, /*hidden argument*/&Transform_DetachChildren_m2155_MethodInfo);
	}

IL_0016:
	{
		GameObject_t235 * L_2 = Component_get_gameObject_m1405(__this, /*hidden argument*/&Component_get_gameObject_m1405_MethodInfo);
		Object_DestroyObject_m2078(NULL /*static, unused*/, L_2, /*hidden argument*/&Object_DestroyObject_m2078_MethodInfo);
		return;
	}
}
// Metadata Definition UnityStandardAssets.Utility.TimedObjectDestructor
extern Il2CppType Single_t448_0_0_1;
extern CustomAttributesCache TimedObjectDestructor_t368__CustomAttributeCache_m_TimeOut;
FieldInfo TimedObjectDestructor_t368____m_TimeOut_2_FieldInfo = 
{
	"m_TimeOut"/* name */
	, &Single_t448_0_0_1/* type */
	, &TimedObjectDestructor_t368_il2cpp_TypeInfo/* parent */
	, offsetof(TimedObjectDestructor_t368, ___m_TimeOut_2)/* data */
	, &TimedObjectDestructor_t368__CustomAttributeCache_m_TimeOut/* custom_attributes_cache */

};
extern Il2CppType Boolean_t379_0_0_1;
extern CustomAttributesCache TimedObjectDestructor_t368__CustomAttributeCache_m_DetachChildren;
FieldInfo TimedObjectDestructor_t368____m_DetachChildren_3_FieldInfo = 
{
	"m_DetachChildren"/* name */
	, &Boolean_t379_0_0_1/* type */
	, &TimedObjectDestructor_t368_il2cpp_TypeInfo/* parent */
	, offsetof(TimedObjectDestructor_t368, ___m_DetachChildren_3)/* data */
	, &TimedObjectDestructor_t368__CustomAttributeCache_m_DetachChildren/* custom_attributes_cache */

};
static FieldInfo* TimedObjectDestructor_t368_FieldInfos[] =
{
	&TimedObjectDestructor_t368____m_TimeOut_2_FieldInfo,
	&TimedObjectDestructor_t368____m_DetachChildren_3_FieldInfo,
	NULL
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
// System.Void UnityStandardAssets.Utility.TimedObjectDestructor::.ctor()
MethodInfo TimedObjectDestructor__ctor_m1223_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&TimedObjectDestructor__ctor_m1223/* method */
	, &TimedObjectDestructor_t368_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1318/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
// System.Void UnityStandardAssets.Utility.TimedObjectDestructor::Awake()
MethodInfo TimedObjectDestructor_Awake_m1224_MethodInfo = 
{
	"Awake"/* name */
	, (methodPointerType)&TimedObjectDestructor_Awake_m1224/* method */
	, &TimedObjectDestructor_t368_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1319/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
// System.Void UnityStandardAssets.Utility.TimedObjectDestructor::DestroyNow()
MethodInfo TimedObjectDestructor_DestroyNow_m1225_MethodInfo = 
{
	"DestroyNow"/* name */
	, (methodPointerType)&TimedObjectDestructor_DestroyNow_m1225/* method */
	, &TimedObjectDestructor_t368_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1320/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* TimedObjectDestructor_t368_MethodInfos[] =
{
	&TimedObjectDestructor__ctor_m1223_MethodInfo,
	&TimedObjectDestructor_Awake_m1224_MethodInfo,
	&TimedObjectDestructor_DestroyNow_m1225_MethodInfo,
	NULL
};
static MethodInfo* TimedObjectDestructor_t368_VTable[] =
{
	&Object_Equals_m1333_MethodInfo,
	&Object_Finalize_m1253_MethodInfo,
	&Object_GetHashCode_m1334_MethodInfo,
	&Object_ToString_m1335_MethodInfo,
};
void TimedObjectDestructor_t368_CustomAttributesCacheGenerator_m_TimeOut(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t400 * tmp;
		tmp = (SerializeField_t400 *)il2cpp_codegen_object_new (&SerializeField_t400_il2cpp_TypeInfo);
		SerializeField__ctor_m1336(tmp, &SerializeField__ctor_m1336_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void TimedObjectDestructor_t368_CustomAttributesCacheGenerator_m_DetachChildren(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t400 * tmp;
		tmp = (SerializeField_t400 *)il2cpp_codegen_object_new (&SerializeField_t400_il2cpp_TypeInfo);
		SerializeField__ctor_m1336(tmp, &SerializeField__ctor_m1336_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache TimedObjectDestructor_t368__CustomAttributeCache_m_TimeOut = {
1,
NULL,
&TimedObjectDestructor_t368_CustomAttributesCacheGenerator_m_TimeOut
};
CustomAttributesCache TimedObjectDestructor_t368__CustomAttributeCache_m_DetachChildren = {
1,
NULL,
&TimedObjectDestructor_t368_CustomAttributesCacheGenerator_m_DetachChildren
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType TimedObjectDestructor_t368_0_0_0;
extern Il2CppType TimedObjectDestructor_t368_1_0_0;
struct TimedObjectDestructor_t368;
extern CustomAttributesCache TimedObjectDestructor_t368__CustomAttributeCache_m_TimeOut;
extern CustomAttributesCache TimedObjectDestructor_t368__CustomAttributeCache_m_DetachChildren;
TypeInfo TimedObjectDestructor_t368_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image/* image */
	, NULL/* gc_desc */
	, "TimedObjectDestructor"/* name */
	, "UnityStandardAssets.Utility"/* namespaze */
	, TimedObjectDestructor_t368_MethodInfos/* methods */
	, NULL/* properties */
	, TimedObjectDestructor_t368_FieldInfos/* fields */
	, NULL/* events */
	, &MonoBehaviour_t39_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &TimedObjectDestructor_t368_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, TimedObjectDestructor_t368_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &TimedObjectDestructor_t368_il2cpp_TypeInfo/* cast_class */
	, &TimedObjectDestructor_t368_0_0_0/* byval_arg */
	, &TimedObjectDestructor_t368_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (TimedObjectDestructor_t368)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048577/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 3/* method_count */
	, 0/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo WaypointList_t370_il2cpp_TypeInfo;

extern TypeInfo TransformU5BU5D_t302_il2cpp_TypeInfo;


// System.Void UnityStandardAssets.Utility.WaypointCircuit/WaypointList::.ctor()
extern MethodInfo WaypointList__ctor_m1226_MethodInfo;
 void WaypointList__ctor_m1226 (WaypointList_t370 * __this, MethodInfo* method){
	{
		__this->___items_1 = ((TransformU5BU5D_t302*)SZArrayNew(InitializedTypeInfo(&TransformU5BU5D_t302_il2cpp_TypeInfo), 0));
		Object__ctor_m1260(__this, /*hidden argument*/&Object__ctor_m1260_MethodInfo);
		return;
	}
}
// Metadata Definition UnityStandardAssets.Utility.WaypointCircuit/WaypointList
extern Il2CppType WaypointCircuit_t369_0_0_6;
FieldInfo WaypointList_t370____circuit_0_FieldInfo = 
{
	"circuit"/* name */
	, &WaypointCircuit_t369_0_0_6/* type */
	, &WaypointList_t370_il2cpp_TypeInfo/* parent */
	, offsetof(WaypointList_t370, ___circuit_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TransformU5BU5D_t302_0_0_6;
FieldInfo WaypointList_t370____items_1_FieldInfo = 
{
	"items"/* name */
	, &TransformU5BU5D_t302_0_0_6/* type */
	, &WaypointList_t370_il2cpp_TypeInfo/* parent */
	, offsetof(WaypointList_t370, ___items_1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* WaypointList_t370_FieldInfos[] =
{
	&WaypointList_t370____circuit_0_FieldInfo,
	&WaypointList_t370____items_1_FieldInfo,
	NULL
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
// System.Void UnityStandardAssets.Utility.WaypointCircuit/WaypointList::.ctor()
MethodInfo WaypointList__ctor_m1226_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&WaypointList__ctor_m1226/* method */
	, &WaypointList_t370_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1333/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* WaypointList_t370_MethodInfos[] =
{
	&WaypointList__ctor_m1226_MethodInfo,
	NULL
};
static MethodInfo* WaypointList_t370_VTable[] =
{
	&Object_Equals_m1252_MethodInfo,
	&Object_Finalize_m1253_MethodInfo,
	&Object_GetHashCode_m1254_MethodInfo,
	&Object_ToString_m1255_MethodInfo,
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType WaypointList_t370_0_0_0;
extern Il2CppType WaypointList_t370_1_0_0;
struct WaypointList_t370;
extern TypeInfo WaypointCircuit_t369_il2cpp_TypeInfo;
TypeInfo WaypointList_t370_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image/* image */
	, NULL/* gc_desc */
	, "WaypointList"/* name */
	, ""/* namespaze */
	, WaypointList_t370_MethodInfos/* methods */
	, NULL/* properties */
	, WaypointList_t370_FieldInfos/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &WaypointCircuit_t369_il2cpp_TypeInfo/* nested_in */
	, &WaypointList_t370_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, WaypointList_t370_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &WaypointList_t370_il2cpp_TypeInfo/* cast_class */
	, &WaypointList_t370_0_0_0/* byval_arg */
	, &WaypointList_t370_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (WaypointList_t370)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1056770/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo RoutePoint_t371_il2cpp_TypeInfo;



// System.Void UnityStandardAssets.Utility.WaypointCircuit/RoutePoint::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
extern MethodInfo RoutePoint__ctor_m1227_MethodInfo;
 void RoutePoint__ctor_m1227 (RoutePoint_t371 * __this, Vector3_t175  ___position, Vector3_t175  ___direction, MethodInfo* method){
	{
		__this->___position_0 = ___position;
		__this->___direction_1 = ___direction;
		return;
	}
}
// Metadata Definition UnityStandardAssets.Utility.WaypointCircuit/RoutePoint
extern Il2CppType Vector3_t175_0_0_6;
FieldInfo RoutePoint_t371____position_0_FieldInfo = 
{
	"position"/* name */
	, &Vector3_t175_0_0_6/* type */
	, &RoutePoint_t371_il2cpp_TypeInfo/* parent */
	, offsetof(RoutePoint_t371, ___position_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Vector3_t175_0_0_6;
FieldInfo RoutePoint_t371____direction_1_FieldInfo = 
{
	"direction"/* name */
	, &Vector3_t175_0_0_6/* type */
	, &RoutePoint_t371_il2cpp_TypeInfo/* parent */
	, offsetof(RoutePoint_t371, ___direction_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* RoutePoint_t371_FieldInfos[] =
{
	&RoutePoint_t371____position_0_FieldInfo,
	&RoutePoint_t371____direction_1_FieldInfo,
	NULL
};
extern Il2CppType Vector3_t175_0_0_0;
extern Il2CppType Vector3_t175_0_0_0;
static ParameterInfo RoutePoint_t371_RoutePoint__ctor_m1227_ParameterInfos[] = 
{
	{"position", 0, 134218787, &EmptyCustomAttributesCache, &Vector3_t175_0_0_0},
	{"direction", 1, 134218788, &EmptyCustomAttributesCache, &Vector3_t175_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Vector3_t175_Vector3_t175 (MethodInfo* method, void* obj, void** args);
// System.Void UnityStandardAssets.Utility.WaypointCircuit/RoutePoint::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
MethodInfo RoutePoint__ctor_m1227_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&RoutePoint__ctor_m1227/* method */
	, &RoutePoint_t371_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Vector3_t175_Vector3_t175/* invoker_method */
	, RoutePoint_t371_RoutePoint__ctor_m1227_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1334/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* RoutePoint_t371_MethodInfos[] =
{
	&RoutePoint__ctor_m1227_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m2156_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m2157_MethodInfo;
extern MethodInfo ValueType_ToString_m2158_MethodInfo;
static MethodInfo* RoutePoint_t371_VTable[] =
{
	&ValueType_Equals_m2156_MethodInfo,
	&Object_Finalize_m1253_MethodInfo,
	&ValueType_GetHashCode_m2157_MethodInfo,
	&ValueType_ToString_m2158_MethodInfo,
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType RoutePoint_t371_0_0_0;
extern Il2CppType RoutePoint_t371_1_0_0;
extern TypeInfo ValueType_t550_il2cpp_TypeInfo;
TypeInfo RoutePoint_t371_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image/* image */
	, NULL/* gc_desc */
	, "RoutePoint"/* name */
	, ""/* namespaze */
	, RoutePoint_t371_MethodInfos/* methods */
	, NULL/* properties */
	, RoutePoint_t371_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t550_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &WaypointCircuit_t369_il2cpp_TypeInfo/* nested_in */
	, &RoutePoint_t371_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, RoutePoint_t371_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &RoutePoint_t371_il2cpp_TypeInfo/* cast_class */
	, &RoutePoint_t371_0_0_0/* byval_arg */
	, &RoutePoint_t371_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (RoutePoint_t371)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, sizeof(RoutePoint_t371 )/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048842/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, true/* is_blittable */
	, true/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo Vector3U5BU5D_t372_il2cpp_TypeInfo;
extern TypeInfo SingleU5BU5D_t373_il2cpp_TypeInfo;
extern TypeInfo Color_t222_il2cpp_TypeInfo;
extern MethodInfo WaypointCircuit_get_Waypoints_m1231_MethodInfo;
extern MethodInfo WaypointCircuit_CachePositionsAndDistances_m1236_MethodInfo;
extern MethodInfo WaypointCircuit_GetRoutePosition_m1234_MethodInfo;
extern MethodInfo Vector3_get_normalized_m1822_MethodInfo;
extern MethodInfo WaypointCircuit_get_Length_m1229_MethodInfo;
extern MethodInfo WaypointCircuit_set_Length_m1230_MethodInfo;
extern MethodInfo Mathf_Repeat_m2159_MethodInfo;
extern MethodInfo WaypointCircuit_CatmullRom_m1235_MethodInfo;
extern MethodInfo Vector3_Lerp_m2010_MethodInfo;
extern MethodInfo Vector3_op_Multiply_m1744_MethodInfo;
extern MethodInfo WaypointCircuit_DrawGizmos_m1239_MethodInfo;
extern MethodInfo Color_get_yellow_m2160_MethodInfo;
extern MethodInfo Color__ctor_m1847_MethodInfo;
extern MethodInfo Gizmos_set_color_m2015_MethodInfo;
extern MethodInfo Gizmos_DrawLine_m2019_MethodInfo;


// System.Void UnityStandardAssets.Utility.WaypointCircuit::.ctor()
extern MethodInfo WaypointCircuit__ctor_m1228_MethodInfo;
 void WaypointCircuit__ctor_m1228 (WaypointCircuit_t369 * __this, MethodInfo* method){
	{
		WaypointList_t370 * L_0 = (WaypointList_t370 *)il2cpp_codegen_object_new (InitializedTypeInfo(&WaypointList_t370_il2cpp_TypeInfo));
		WaypointList__ctor_m1226(L_0, /*hidden argument*/&WaypointList__ctor_m1226_MethodInfo);
		__this->___waypointList_2 = L_0;
		__this->___smoothRoute_3 = 1;
		__this->___editorVisualisationSubsteps_7 = (100.0f);
		MonoBehaviour__ctor_m1402(__this, /*hidden argument*/&MonoBehaviour__ctor_m1402_MethodInfo);
		return;
	}
}
// System.Single UnityStandardAssets.Utility.WaypointCircuit::get_Length()
 float WaypointCircuit_get_Length_m1229 (WaypointCircuit_t369 * __this, MethodInfo* method){
	{
		float L_0 = (__this->___U3CLengthU3Ek__BackingField_17);
		return L_0;
	}
}
// System.Void UnityStandardAssets.Utility.WaypointCircuit::set_Length(System.Single)
 void WaypointCircuit_set_Length_m1230 (WaypointCircuit_t369 * __this, float ___value, MethodInfo* method){
	{
		__this->___U3CLengthU3Ek__BackingField_17 = ___value;
		return;
	}
}
// UnityEngine.Transform[] UnityStandardAssets.Utility.WaypointCircuit::get_Waypoints()
 TransformU5BU5D_t302* WaypointCircuit_get_Waypoints_m1231 (WaypointCircuit_t369 * __this, MethodInfo* method){
	{
		WaypointList_t370 * L_0 = (__this->___waypointList_2);
		NullCheck(L_0);
		TransformU5BU5D_t302* L_1 = (L_0->___items_1);
		return L_1;
	}
}
// System.Void UnityStandardAssets.Utility.WaypointCircuit::Awake()
extern MethodInfo WaypointCircuit_Awake_m1232_MethodInfo;
 void WaypointCircuit_Awake_m1232 (WaypointCircuit_t369 * __this, MethodInfo* method){
	{
		TransformU5BU5D_t302* L_0 = WaypointCircuit_get_Waypoints_m1231(__this, /*hidden argument*/&WaypointCircuit_get_Waypoints_m1231_MethodInfo);
		NullCheck(L_0);
		if ((((int32_t)(((int32_t)(((Array_t *)L_0)->max_length)))) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		WaypointCircuit_CachePositionsAndDistances_m1236(__this, /*hidden argument*/&WaypointCircuit_CachePositionsAndDistances_m1236_MethodInfo);
	}

IL_0014:
	{
		TransformU5BU5D_t302* L_1 = WaypointCircuit_get_Waypoints_m1231(__this, /*hidden argument*/&WaypointCircuit_get_Waypoints_m1231_MethodInfo);
		NullCheck(L_1);
		__this->___numPoints_4 = (((int32_t)(((Array_t *)L_1)->max_length)));
		return;
	}
}
// UnityStandardAssets.Utility.WaypointCircuit/RoutePoint UnityStandardAssets.Utility.WaypointCircuit::GetRoutePoint(System.Single)
extern MethodInfo WaypointCircuit_GetRoutePoint_m1233_MethodInfo;
 RoutePoint_t371  WaypointCircuit_GetRoutePoint_m1233 (WaypointCircuit_t369 * __this, float ___dist, MethodInfo* method){
	Vector3_t175  V_0 = {0};
	Vector3_t175  V_1 = {0};
	Vector3_t175  V_2 = {0};
	{
		Vector3_t175  L_0 = WaypointCircuit_GetRoutePosition_m1234(__this, ___dist, /*hidden argument*/&WaypointCircuit_GetRoutePosition_m1234_MethodInfo);
		V_0 = L_0;
		Vector3_t175  L_1 = WaypointCircuit_GetRoutePosition_m1234(__this, ((float)(___dist+(0.1f))), /*hidden argument*/&WaypointCircuit_GetRoutePosition_m1234_MethodInfo);
		V_1 = L_1;
		Vector3_t175  L_2 = Vector3_op_Subtraction_m1740(NULL /*static, unused*/, V_1, V_0, /*hidden argument*/&Vector3_op_Subtraction_m1740_MethodInfo);
		V_2 = L_2;
		Vector3_t175  L_3 = Vector3_get_normalized_m1822((&V_2), /*hidden argument*/&Vector3_get_normalized_m1822_MethodInfo);
		RoutePoint_t371  L_4 = {0};
		RoutePoint__ctor_m1227(&L_4, V_0, L_3, /*hidden argument*/&RoutePoint__ctor_m1227_MethodInfo);
		return L_4;
	}
}
// UnityEngine.Vector3 UnityStandardAssets.Utility.WaypointCircuit::GetRoutePosition(System.Single)
 Vector3_t175  WaypointCircuit_GetRoutePosition_m1234 (WaypointCircuit_t369 * __this, float ___dist, MethodInfo* method){
	int32_t V_0 = 0;
	{
		V_0 = 0;
		float L_0 = WaypointCircuit_get_Length_m1229(__this, /*hidden argument*/&WaypointCircuit_get_Length_m1229_MethodInfo);
		if ((((float)L_0) != ((float)(0.0f))))
		{
			goto IL_0029;
		}
	}
	{
		SingleU5BU5D_t373* L_1 = (__this->___distances_6);
		SingleU5BU5D_t373* L_2 = (__this->___distances_6);
		NullCheck(L_2);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, ((int32_t)((((int32_t)(((Array_t *)L_2)->max_length)))-1)));
		int32_t L_3 = ((int32_t)((((int32_t)(((Array_t *)L_2)->max_length)))-1));
		WaypointCircuit_set_Length_m1230(__this, (*(float*)(float*)SZArrayLdElema(L_1, L_3)), /*hidden argument*/&WaypointCircuit_set_Length_m1230_MethodInfo);
	}

IL_0029:
	{
		float L_4 = WaypointCircuit_get_Length_m1229(__this, /*hidden argument*/&WaypointCircuit_get_Length_m1229_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t505_il2cpp_TypeInfo));
		float L_5 = Mathf_Repeat_m2159(NULL /*static, unused*/, ___dist, L_4, /*hidden argument*/&Mathf_Repeat_m2159_MethodInfo);
		___dist = L_5;
		goto IL_0040;
	}

IL_003c:
	{
		V_0 = ((int32_t)(V_0+1));
	}

IL_0040:
	{
		SingleU5BU5D_t373* L_6 = (__this->___distances_6);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, V_0);
		int32_t L_7 = V_0;
		if ((((float)(*(float*)(float*)SZArrayLdElema(L_6, L_7))) < ((float)___dist)))
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_8 = (__this->___numPoints_4);
		int32_t L_9 = (__this->___numPoints_4);
		__this->___p1n_9 = ((int32_t)(((int32_t)(((int32_t)(V_0-1))+L_8))%L_9));
		__this->___p2n_10 = V_0;
		SingleU5BU5D_t373* L_10 = (__this->___distances_6);
		int32_t L_11 = (__this->___p1n_9);
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		SingleU5BU5D_t373* L_13 = (__this->___distances_6);
		int32_t L_14 = (__this->___p2n_10);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = L_14;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t505_il2cpp_TypeInfo));
		float L_16 = Mathf_InverseLerp_m1819(NULL /*static, unused*/, (*(float*)(float*)SZArrayLdElema(L_10, L_12)), (*(float*)(float*)SZArrayLdElema(L_13, L_15)), ___dist, /*hidden argument*/&Mathf_InverseLerp_m1819_MethodInfo);
		__this->___i_12 = L_16;
		bool L_17 = (__this->___smoothRoute_3);
		if (!L_17)
		{
			goto IL_016c;
		}
	}
	{
		int32_t L_18 = (__this->___numPoints_4);
		int32_t L_19 = (__this->___numPoints_4);
		__this->___p0n_8 = ((int32_t)(((int32_t)(((int32_t)(V_0-2))+L_18))%L_19));
		int32_t L_20 = (__this->___numPoints_4);
		__this->___p3n_11 = ((int32_t)(((int32_t)(V_0+1))%L_20));
		int32_t L_21 = (__this->___p2n_10);
		int32_t L_22 = (__this->___numPoints_4);
		__this->___p2n_10 = ((int32_t)(L_21%L_22));
		Vector3U5BU5D_t372* L_23 = (__this->___points_5);
		int32_t L_24 = (__this->___p0n_8);
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		__this->___P0_13 = (*(Vector3_t175 *)((Vector3_t175 *)(Vector3_t175 *)SZArrayLdElema(L_23, L_24)));
		Vector3U5BU5D_t372* L_25 = (__this->___points_5);
		int32_t L_26 = (__this->___p1n_9);
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, L_26);
		__this->___P1_14 = (*(Vector3_t175 *)((Vector3_t175 *)(Vector3_t175 *)SZArrayLdElema(L_25, L_26)));
		Vector3U5BU5D_t372* L_27 = (__this->___points_5);
		int32_t L_28 = (__this->___p2n_10);
		NullCheck(L_27);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_27, L_28);
		__this->___P2_15 = (*(Vector3_t175 *)((Vector3_t175 *)(Vector3_t175 *)SZArrayLdElema(L_27, L_28)));
		Vector3U5BU5D_t372* L_29 = (__this->___points_5);
		int32_t L_30 = (__this->___p3n_11);
		NullCheck(L_29);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_29, L_30);
		__this->___P3_16 = (*(Vector3_t175 *)((Vector3_t175 *)(Vector3_t175 *)SZArrayLdElema(L_29, L_30)));
		Vector3_t175  L_31 = (__this->___P0_13);
		Vector3_t175  L_32 = (__this->___P1_14);
		Vector3_t175  L_33 = (__this->___P2_15);
		Vector3_t175  L_34 = (__this->___P3_16);
		float L_35 = (__this->___i_12);
		Vector3_t175  L_36 = WaypointCircuit_CatmullRom_m1235(__this, L_31, L_32, L_33, L_34, L_35, /*hidden argument*/&WaypointCircuit_CatmullRom_m1235_MethodInfo);
		return L_36;
	}

IL_016c:
	{
		int32_t L_37 = (__this->___numPoints_4);
		int32_t L_38 = (__this->___numPoints_4);
		__this->___p1n_9 = ((int32_t)(((int32_t)(((int32_t)(V_0-1))+L_37))%L_38));
		__this->___p2n_10 = V_0;
		Vector3U5BU5D_t372* L_39 = (__this->___points_5);
		int32_t L_40 = (__this->___p1n_9);
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, L_40);
		Vector3U5BU5D_t372* L_41 = (__this->___points_5);
		int32_t L_42 = (__this->___p2n_10);
		NullCheck(L_41);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_41, L_42);
		float L_43 = (__this->___i_12);
		Vector3_t175  L_44 = Vector3_Lerp_m2010(NULL /*static, unused*/, (*(Vector3_t175 *)((Vector3_t175 *)(Vector3_t175 *)SZArrayLdElema(L_39, L_40))), (*(Vector3_t175 *)((Vector3_t175 *)(Vector3_t175 *)SZArrayLdElema(L_41, L_42))), L_43, /*hidden argument*/&Vector3_Lerp_m2010_MethodInfo);
		return L_44;
	}
}
// UnityEngine.Vector3 UnityStandardAssets.Utility.WaypointCircuit::CatmullRom(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
 Vector3_t175  WaypointCircuit_CatmullRom_m1235 (WaypointCircuit_t369 * __this, Vector3_t175  ___p0, Vector3_t175  ___p1, Vector3_t175  ___p2, Vector3_t175  ___p3, float ___i, MethodInfo* method){
	{
		Vector3_t175  L_0 = Vector3_op_Multiply_m1744(NULL /*static, unused*/, (2.0f), ___p1, /*hidden argument*/&Vector3_op_Multiply_m1744_MethodInfo);
		Vector3_t175  L_1 = Vector3_op_UnaryNegation_m2014(NULL /*static, unused*/, ___p0, /*hidden argument*/&Vector3_op_UnaryNegation_m2014_MethodInfo);
		Vector3_t175  L_2 = Vector3_op_Addition_m1750(NULL /*static, unused*/, L_1, ___p2, /*hidden argument*/&Vector3_op_Addition_m1750_MethodInfo);
		Vector3_t175  L_3 = Vector3_op_Multiply_m1746(NULL /*static, unused*/, L_2, ___i, /*hidden argument*/&Vector3_op_Multiply_m1746_MethodInfo);
		Vector3_t175  L_4 = Vector3_op_Addition_m1750(NULL /*static, unused*/, L_0, L_3, /*hidden argument*/&Vector3_op_Addition_m1750_MethodInfo);
		Vector3_t175  L_5 = Vector3_op_Multiply_m1744(NULL /*static, unused*/, (2.0f), ___p0, /*hidden argument*/&Vector3_op_Multiply_m1744_MethodInfo);
		Vector3_t175  L_6 = Vector3_op_Multiply_m1744(NULL /*static, unused*/, (5.0f), ___p1, /*hidden argument*/&Vector3_op_Multiply_m1744_MethodInfo);
		Vector3_t175  L_7 = Vector3_op_Subtraction_m1740(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/&Vector3_op_Subtraction_m1740_MethodInfo);
		Vector3_t175  L_8 = Vector3_op_Multiply_m1744(NULL /*static, unused*/, (4.0f), ___p2, /*hidden argument*/&Vector3_op_Multiply_m1744_MethodInfo);
		Vector3_t175  L_9 = Vector3_op_Addition_m1750(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/&Vector3_op_Addition_m1750_MethodInfo);
		Vector3_t175  L_10 = Vector3_op_Subtraction_m1740(NULL /*static, unused*/, L_9, ___p3, /*hidden argument*/&Vector3_op_Subtraction_m1740_MethodInfo);
		Vector3_t175  L_11 = Vector3_op_Multiply_m1746(NULL /*static, unused*/, L_10, ___i, /*hidden argument*/&Vector3_op_Multiply_m1746_MethodInfo);
		Vector3_t175  L_12 = Vector3_op_Multiply_m1746(NULL /*static, unused*/, L_11, ___i, /*hidden argument*/&Vector3_op_Multiply_m1746_MethodInfo);
		Vector3_t175  L_13 = Vector3_op_Addition_m1750(NULL /*static, unused*/, L_4, L_12, /*hidden argument*/&Vector3_op_Addition_m1750_MethodInfo);
		Vector3_t175  L_14 = Vector3_op_UnaryNegation_m2014(NULL /*static, unused*/, ___p0, /*hidden argument*/&Vector3_op_UnaryNegation_m2014_MethodInfo);
		Vector3_t175  L_15 = Vector3_op_Multiply_m1744(NULL /*static, unused*/, (3.0f), ___p1, /*hidden argument*/&Vector3_op_Multiply_m1744_MethodInfo);
		Vector3_t175  L_16 = Vector3_op_Addition_m1750(NULL /*static, unused*/, L_14, L_15, /*hidden argument*/&Vector3_op_Addition_m1750_MethodInfo);
		Vector3_t175  L_17 = Vector3_op_Multiply_m1744(NULL /*static, unused*/, (3.0f), ___p2, /*hidden argument*/&Vector3_op_Multiply_m1744_MethodInfo);
		Vector3_t175  L_18 = Vector3_op_Subtraction_m1740(NULL /*static, unused*/, L_16, L_17, /*hidden argument*/&Vector3_op_Subtraction_m1740_MethodInfo);
		Vector3_t175  L_19 = Vector3_op_Addition_m1750(NULL /*static, unused*/, L_18, ___p3, /*hidden argument*/&Vector3_op_Addition_m1750_MethodInfo);
		Vector3_t175  L_20 = Vector3_op_Multiply_m1746(NULL /*static, unused*/, L_19, ___i, /*hidden argument*/&Vector3_op_Multiply_m1746_MethodInfo);
		Vector3_t175  L_21 = Vector3_op_Multiply_m1746(NULL /*static, unused*/, L_20, ___i, /*hidden argument*/&Vector3_op_Multiply_m1746_MethodInfo);
		Vector3_t175  L_22 = Vector3_op_Multiply_m1746(NULL /*static, unused*/, L_21, ___i, /*hidden argument*/&Vector3_op_Multiply_m1746_MethodInfo);
		Vector3_t175  L_23 = Vector3_op_Addition_m1750(NULL /*static, unused*/, L_13, L_22, /*hidden argument*/&Vector3_op_Addition_m1750_MethodInfo);
		Vector3_t175  L_24 = Vector3_op_Multiply_m1744(NULL /*static, unused*/, (0.5f), L_23, /*hidden argument*/&Vector3_op_Multiply_m1744_MethodInfo);
		return L_24;
	}
}
// System.Void UnityStandardAssets.Utility.WaypointCircuit::CachePositionsAndDistances()
 void WaypointCircuit_CachePositionsAndDistances_m1236 (WaypointCircuit_t369 * __this, MethodInfo* method){
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	Transform_t173 * V_2 = {0};
	Transform_t173 * V_3 = {0};
	Vector3_t175  V_4 = {0};
	Vector3_t175  V_5 = {0};
	Vector3_t175  V_6 = {0};
	{
		TransformU5BU5D_t302* L_0 = WaypointCircuit_get_Waypoints_m1231(__this, /*hidden argument*/&WaypointCircuit_get_Waypoints_m1231_MethodInfo);
		NullCheck(L_0);
		__this->___points_5 = ((Vector3U5BU5D_t372*)SZArrayNew(InitializedTypeInfo(&Vector3U5BU5D_t372_il2cpp_TypeInfo), ((int32_t)((((int32_t)(((Array_t *)L_0)->max_length)))+1))));
		TransformU5BU5D_t302* L_1 = WaypointCircuit_get_Waypoints_m1231(__this, /*hidden argument*/&WaypointCircuit_get_Waypoints_m1231_MethodInfo);
		NullCheck(L_1);
		__this->___distances_6 = ((SingleU5BU5D_t373*)SZArrayNew(InitializedTypeInfo(&SingleU5BU5D_t373_il2cpp_TypeInfo), ((int32_t)((((int32_t)(((Array_t *)L_1)->max_length)))+1))));
		V_0 = (0.0f);
		V_1 = 0;
		goto IL_00ce;
	}

IL_0037:
	{
		TransformU5BU5D_t302* L_2 = WaypointCircuit_get_Waypoints_m1231(__this, /*hidden argument*/&WaypointCircuit_get_Waypoints_m1231_MethodInfo);
		TransformU5BU5D_t302* L_3 = WaypointCircuit_get_Waypoints_m1231(__this, /*hidden argument*/&WaypointCircuit_get_Waypoints_m1231_MethodInfo);
		NullCheck(L_3);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, ((int32_t)(V_1%(((int32_t)(((Array_t *)L_3)->max_length))))));
		int32_t L_4 = ((int32_t)(V_1%(((int32_t)(((Array_t *)L_3)->max_length)))));
		V_2 = (*(Transform_t173 **)(Transform_t173 **)SZArrayLdElema(L_2, L_4));
		TransformU5BU5D_t302* L_5 = WaypointCircuit_get_Waypoints_m1231(__this, /*hidden argument*/&WaypointCircuit_get_Waypoints_m1231_MethodInfo);
		TransformU5BU5D_t302* L_6 = WaypointCircuit_get_Waypoints_m1231(__this, /*hidden argument*/&WaypointCircuit_get_Waypoints_m1231_MethodInfo);
		NullCheck(L_6);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, ((int32_t)(((int32_t)(V_1+1))%(((int32_t)(((Array_t *)L_6)->max_length))))));
		int32_t L_7 = ((int32_t)(((int32_t)(V_1+1))%(((int32_t)(((Array_t *)L_6)->max_length)))));
		V_3 = (*(Transform_t173 **)(Transform_t173 **)SZArrayLdElema(L_5, L_7));
		bool L_8 = Object_op_Inequality_m1769(NULL /*static, unused*/, V_2, (Object_t326 *)NULL, /*hidden argument*/&Object_op_Inequality_m1769_MethodInfo);
		if (!L_8)
		{
			goto IL_00ca;
		}
	}
	{
		bool L_9 = Object_op_Inequality_m1769(NULL /*static, unused*/, V_3, (Object_t326 *)NULL, /*hidden argument*/&Object_op_Inequality_m1769_MethodInfo);
		if (!L_9)
		{
			goto IL_00ca;
		}
	}
	{
		NullCheck(V_2);
		Vector3_t175  L_10 = Transform_get_position_m1738(V_2, /*hidden argument*/&Transform_get_position_m1738_MethodInfo);
		V_4 = L_10;
		NullCheck(V_3);
		Vector3_t175  L_11 = Transform_get_position_m1738(V_3, /*hidden argument*/&Transform_get_position_m1738_MethodInfo);
		V_5 = L_11;
		Vector3U5BU5D_t372* L_12 = (__this->___points_5);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, V_1);
		TransformU5BU5D_t302* L_13 = WaypointCircuit_get_Waypoints_m1231(__this, /*hidden argument*/&WaypointCircuit_get_Waypoints_m1231_MethodInfo);
		TransformU5BU5D_t302* L_14 = WaypointCircuit_get_Waypoints_m1231(__this, /*hidden argument*/&WaypointCircuit_get_Waypoints_m1231_MethodInfo);
		NullCheck(L_14);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, ((int32_t)(V_1%(((int32_t)(((Array_t *)L_14)->max_length))))));
		int32_t L_15 = ((int32_t)(V_1%(((int32_t)(((Array_t *)L_14)->max_length)))));
		NullCheck((*(Transform_t173 **)(Transform_t173 **)SZArrayLdElema(L_13, L_15)));
		Vector3_t175  L_16 = Transform_get_position_m1738((*(Transform_t173 **)(Transform_t173 **)SZArrayLdElema(L_13, L_15)), /*hidden argument*/&Transform_get_position_m1738_MethodInfo);
		*((Vector3_t175 *)(Vector3_t175 *)SZArrayLdElema(L_12, V_1)) = L_16;
		SingleU5BU5D_t373* L_17 = (__this->___distances_6);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, V_1);
		*((float*)(float*)SZArrayLdElema(L_17, V_1)) = (float)V_0;
		Vector3_t175  L_18 = Vector3_op_Subtraction_m1740(NULL /*static, unused*/, V_4, V_5, /*hidden argument*/&Vector3_op_Subtraction_m1740_MethodInfo);
		V_6 = L_18;
		float L_19 = Vector3_get_magnitude_m1896((&V_6), /*hidden argument*/&Vector3_get_magnitude_m1896_MethodInfo);
		V_0 = ((float)(V_0+L_19));
	}

IL_00ca:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_00ce:
	{
		Vector3U5BU5D_t372* L_20 = (__this->___points_5);
		NullCheck(L_20);
		if ((((int32_t)V_1) < ((int32_t)(((int32_t)(((Array_t *)L_20)->max_length))))))
		{
			goto IL_0037;
		}
	}
	{
		return;
	}
}
// System.Void UnityStandardAssets.Utility.WaypointCircuit::OnDrawGizmos()
extern MethodInfo WaypointCircuit_OnDrawGizmos_m1237_MethodInfo;
 void WaypointCircuit_OnDrawGizmos_m1237 (WaypointCircuit_t369 * __this, MethodInfo* method){
	{
		WaypointCircuit_DrawGizmos_m1239(__this, 0, /*hidden argument*/&WaypointCircuit_DrawGizmos_m1239_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.WaypointCircuit::OnDrawGizmosSelected()
extern MethodInfo WaypointCircuit_OnDrawGizmosSelected_m1238_MethodInfo;
 void WaypointCircuit_OnDrawGizmosSelected_m1238 (WaypointCircuit_t369 * __this, MethodInfo* method){
	{
		WaypointCircuit_DrawGizmos_m1239(__this, 1, /*hidden argument*/&WaypointCircuit_DrawGizmos_m1239_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.WaypointCircuit::DrawGizmos(System.Boolean)
 void WaypointCircuit_DrawGizmos_m1239 (WaypointCircuit_t369 * __this, bool ___selected, MethodInfo* method){
	Vector3_t175  V_0 = {0};
	float V_1 = 0.0f;
	Vector3_t175  V_2 = {0};
	int32_t V_3 = 0;
	Vector3_t175  V_4 = {0};
	Color_t222  G_B4_0 = {0};
	{
		WaypointList_t370 * L_0 = (__this->___waypointList_2);
		NullCheck(L_0);
		L_0->___circuit_0 = __this;
		TransformU5BU5D_t302* L_1 = WaypointCircuit_get_Waypoints_m1231(__this, /*hidden argument*/&WaypointCircuit_get_Waypoints_m1231_MethodInfo);
		NullCheck(L_1);
		if ((((int32_t)(((int32_t)(((Array_t *)L_1)->max_length)))) <= ((int32_t)1)))
		{
			goto IL_0120;
		}
	}
	{
		TransformU5BU5D_t302* L_2 = WaypointCircuit_get_Waypoints_m1231(__this, /*hidden argument*/&WaypointCircuit_get_Waypoints_m1231_MethodInfo);
		NullCheck(L_2);
		__this->___numPoints_4 = (((int32_t)(((Array_t *)L_2)->max_length)));
		WaypointCircuit_CachePositionsAndDistances_m1236(__this, /*hidden argument*/&WaypointCircuit_CachePositionsAndDistances_m1236_MethodInfo);
		SingleU5BU5D_t373* L_3 = (__this->___distances_6);
		SingleU5BU5D_t373* L_4 = (__this->___distances_6);
		NullCheck(L_4);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, ((int32_t)((((int32_t)(((Array_t *)L_4)->max_length)))-1)));
		int32_t L_5 = ((int32_t)((((int32_t)(((Array_t *)L_4)->max_length)))-1));
		WaypointCircuit_set_Length_m1230(__this, (*(float*)(float*)SZArrayLdElema(L_3, L_5)), /*hidden argument*/&WaypointCircuit_set_Length_m1230_MethodInfo);
		if (!___selected)
		{
			goto IL_0055;
		}
	}
	{
		Color_t222  L_6 = Color_get_yellow_m2160(NULL /*static, unused*/, /*hidden argument*/&Color_get_yellow_m2160_MethodInfo);
		G_B4_0 = L_6;
		goto IL_006e;
	}

IL_0055:
	{
		Color_t222  L_7 = {0};
		Color__ctor_m1847(&L_7, (1.0f), (1.0f), (0.0f), (0.5f), /*hidden argument*/&Color__ctor_m1847_MethodInfo);
		G_B4_0 = L_7;
	}

IL_006e:
	{
		Gizmos_set_color_m2015(NULL /*static, unused*/, G_B4_0, /*hidden argument*/&Gizmos_set_color_m2015_MethodInfo);
		TransformU5BU5D_t302* L_8 = WaypointCircuit_get_Waypoints_m1231(__this, /*hidden argument*/&WaypointCircuit_get_Waypoints_m1231_MethodInfo);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 0);
		int32_t L_9 = 0;
		NullCheck((*(Transform_t173 **)(Transform_t173 **)SZArrayLdElema(L_8, L_9)));
		Vector3_t175  L_10 = Transform_get_position_m1738((*(Transform_t173 **)(Transform_t173 **)SZArrayLdElema(L_8, L_9)), /*hidden argument*/&Transform_get_position_m1738_MethodInfo);
		V_0 = L_10;
		bool L_11 = (__this->___smoothRoute_3);
		if (!L_11)
		{
			goto IL_00e2;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_00be;
	}

IL_0097:
	{
		Vector3_t175  L_12 = WaypointCircuit_GetRoutePosition_m1234(__this, ((float)(V_1+(1.0f))), /*hidden argument*/&WaypointCircuit_GetRoutePosition_m1234_MethodInfo);
		V_2 = L_12;
		Gizmos_DrawLine_m2019(NULL /*static, unused*/, V_0, V_2, /*hidden argument*/&Gizmos_DrawLine_m2019_MethodInfo);
		V_0 = V_2;
		float L_13 = WaypointCircuit_get_Length_m1229(__this, /*hidden argument*/&WaypointCircuit_get_Length_m1229_MethodInfo);
		float L_14 = (__this->___editorVisualisationSubsteps_7);
		V_1 = ((float)(V_1+((float)((float)L_13/(float)L_14))));
	}

IL_00be:
	{
		float L_15 = WaypointCircuit_get_Length_m1229(__this, /*hidden argument*/&WaypointCircuit_get_Length_m1229_MethodInfo);
		if ((((float)V_1) < ((float)L_15)))
		{
			goto IL_0097;
		}
	}
	{
		TransformU5BU5D_t302* L_16 = WaypointCircuit_get_Waypoints_m1231(__this, /*hidden argument*/&WaypointCircuit_get_Waypoints_m1231_MethodInfo);
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 0);
		int32_t L_17 = 0;
		NullCheck((*(Transform_t173 **)(Transform_t173 **)SZArrayLdElema(L_16, L_17)));
		Vector3_t175  L_18 = Transform_get_position_m1738((*(Transform_t173 **)(Transform_t173 **)SZArrayLdElema(L_16, L_17)), /*hidden argument*/&Transform_get_position_m1738_MethodInfo);
		Gizmos_DrawLine_m2019(NULL /*static, unused*/, V_0, L_18, /*hidden argument*/&Gizmos_DrawLine_m2019_MethodInfo);
		goto IL_0120;
	}

IL_00e2:
	{
		V_3 = 0;
		goto IL_0112;
	}

IL_00e9:
	{
		TransformU5BU5D_t302* L_19 = WaypointCircuit_get_Waypoints_m1231(__this, /*hidden argument*/&WaypointCircuit_get_Waypoints_m1231_MethodInfo);
		TransformU5BU5D_t302* L_20 = WaypointCircuit_get_Waypoints_m1231(__this, /*hidden argument*/&WaypointCircuit_get_Waypoints_m1231_MethodInfo);
		NullCheck(L_20);
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, ((int32_t)(((int32_t)(V_3+1))%(((int32_t)(((Array_t *)L_20)->max_length))))));
		int32_t L_21 = ((int32_t)(((int32_t)(V_3+1))%(((int32_t)(((Array_t *)L_20)->max_length)))));
		NullCheck((*(Transform_t173 **)(Transform_t173 **)SZArrayLdElema(L_19, L_21)));
		Vector3_t175  L_22 = Transform_get_position_m1738((*(Transform_t173 **)(Transform_t173 **)SZArrayLdElema(L_19, L_21)), /*hidden argument*/&Transform_get_position_m1738_MethodInfo);
		V_4 = L_22;
		Gizmos_DrawLine_m2019(NULL /*static, unused*/, V_0, V_4, /*hidden argument*/&Gizmos_DrawLine_m2019_MethodInfo);
		V_0 = V_4;
		V_3 = ((int32_t)(V_3+1));
	}

IL_0112:
	{
		TransformU5BU5D_t302* L_23 = WaypointCircuit_get_Waypoints_m1231(__this, /*hidden argument*/&WaypointCircuit_get_Waypoints_m1231_MethodInfo);
		NullCheck(L_23);
		if ((((int32_t)V_3) < ((int32_t)(((int32_t)(((Array_t *)L_23)->max_length))))))
		{
			goto IL_00e9;
		}
	}

IL_0120:
	{
		return;
	}
}
// Metadata Definition UnityStandardAssets.Utility.WaypointCircuit
extern Il2CppType WaypointList_t370_0_0_6;
FieldInfo WaypointCircuit_t369____waypointList_2_FieldInfo = 
{
	"waypointList"/* name */
	, &WaypointList_t370_0_0_6/* type */
	, &WaypointCircuit_t369_il2cpp_TypeInfo/* parent */
	, offsetof(WaypointCircuit_t369, ___waypointList_2)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Boolean_t379_0_0_1;
extern CustomAttributesCache WaypointCircuit_t369__CustomAttributeCache_smoothRoute;
FieldInfo WaypointCircuit_t369____smoothRoute_3_FieldInfo = 
{
	"smoothRoute"/* name */
	, &Boolean_t379_0_0_1/* type */
	, &WaypointCircuit_t369_il2cpp_TypeInfo/* parent */
	, offsetof(WaypointCircuit_t369, ___smoothRoute_3)/* data */
	, &WaypointCircuit_t369__CustomAttributeCache_smoothRoute/* custom_attributes_cache */

};
extern Il2CppType Int32_t386_0_0_1;
FieldInfo WaypointCircuit_t369____numPoints_4_FieldInfo = 
{
	"numPoints"/* name */
	, &Int32_t386_0_0_1/* type */
	, &WaypointCircuit_t369_il2cpp_TypeInfo/* parent */
	, offsetof(WaypointCircuit_t369, ___numPoints_4)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Vector3U5BU5D_t372_0_0_1;
FieldInfo WaypointCircuit_t369____points_5_FieldInfo = 
{
	"points"/* name */
	, &Vector3U5BU5D_t372_0_0_1/* type */
	, &WaypointCircuit_t369_il2cpp_TypeInfo/* parent */
	, offsetof(WaypointCircuit_t369, ___points_5)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType SingleU5BU5D_t373_0_0_1;
FieldInfo WaypointCircuit_t369____distances_6_FieldInfo = 
{
	"distances"/* name */
	, &SingleU5BU5D_t373_0_0_1/* type */
	, &WaypointCircuit_t369_il2cpp_TypeInfo/* parent */
	, offsetof(WaypointCircuit_t369, ___distances_6)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Single_t448_0_0_6;
FieldInfo WaypointCircuit_t369____editorVisualisationSubsteps_7_FieldInfo = 
{
	"editorVisualisationSubsteps"/* name */
	, &Single_t448_0_0_6/* type */
	, &WaypointCircuit_t369_il2cpp_TypeInfo/* parent */
	, offsetof(WaypointCircuit_t369, ___editorVisualisationSubsteps_7)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t386_0_0_1;
FieldInfo WaypointCircuit_t369____p0n_8_FieldInfo = 
{
	"p0n"/* name */
	, &Int32_t386_0_0_1/* type */
	, &WaypointCircuit_t369_il2cpp_TypeInfo/* parent */
	, offsetof(WaypointCircuit_t369, ___p0n_8)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t386_0_0_1;
FieldInfo WaypointCircuit_t369____p1n_9_FieldInfo = 
{
	"p1n"/* name */
	, &Int32_t386_0_0_1/* type */
	, &WaypointCircuit_t369_il2cpp_TypeInfo/* parent */
	, offsetof(WaypointCircuit_t369, ___p1n_9)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t386_0_0_1;
FieldInfo WaypointCircuit_t369____p2n_10_FieldInfo = 
{
	"p2n"/* name */
	, &Int32_t386_0_0_1/* type */
	, &WaypointCircuit_t369_il2cpp_TypeInfo/* parent */
	, offsetof(WaypointCircuit_t369, ___p2n_10)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t386_0_0_1;
FieldInfo WaypointCircuit_t369____p3n_11_FieldInfo = 
{
	"p3n"/* name */
	, &Int32_t386_0_0_1/* type */
	, &WaypointCircuit_t369_il2cpp_TypeInfo/* parent */
	, offsetof(WaypointCircuit_t369, ___p3n_11)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Single_t448_0_0_1;
FieldInfo WaypointCircuit_t369____i_12_FieldInfo = 
{
	"i"/* name */
	, &Single_t448_0_0_1/* type */
	, &WaypointCircuit_t369_il2cpp_TypeInfo/* parent */
	, offsetof(WaypointCircuit_t369, ___i_12)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Vector3_t175_0_0_1;
FieldInfo WaypointCircuit_t369____P0_13_FieldInfo = 
{
	"P0"/* name */
	, &Vector3_t175_0_0_1/* type */
	, &WaypointCircuit_t369_il2cpp_TypeInfo/* parent */
	, offsetof(WaypointCircuit_t369, ___P0_13)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Vector3_t175_0_0_1;
FieldInfo WaypointCircuit_t369____P1_14_FieldInfo = 
{
	"P1"/* name */
	, &Vector3_t175_0_0_1/* type */
	, &WaypointCircuit_t369_il2cpp_TypeInfo/* parent */
	, offsetof(WaypointCircuit_t369, ___P1_14)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Vector3_t175_0_0_1;
FieldInfo WaypointCircuit_t369____P2_15_FieldInfo = 
{
	"P2"/* name */
	, &Vector3_t175_0_0_1/* type */
	, &WaypointCircuit_t369_il2cpp_TypeInfo/* parent */
	, offsetof(WaypointCircuit_t369, ___P2_15)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Vector3_t175_0_0_1;
FieldInfo WaypointCircuit_t369____P3_16_FieldInfo = 
{
	"P3"/* name */
	, &Vector3_t175_0_0_1/* type */
	, &WaypointCircuit_t369_il2cpp_TypeInfo/* parent */
	, offsetof(WaypointCircuit_t369, ___P3_16)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Single_t448_0_0_1;
extern CustomAttributesCache WaypointCircuit_t369__CustomAttributeCache_U3CLengthU3Ek__BackingField;
FieldInfo WaypointCircuit_t369____U3CLengthU3Ek__BackingField_17_FieldInfo = 
{
	"<Length>k__BackingField"/* name */
	, &Single_t448_0_0_1/* type */
	, &WaypointCircuit_t369_il2cpp_TypeInfo/* parent */
	, offsetof(WaypointCircuit_t369, ___U3CLengthU3Ek__BackingField_17)/* data */
	, &WaypointCircuit_t369__CustomAttributeCache_U3CLengthU3Ek__BackingField/* custom_attributes_cache */

};
static FieldInfo* WaypointCircuit_t369_FieldInfos[] =
{
	&WaypointCircuit_t369____waypointList_2_FieldInfo,
	&WaypointCircuit_t369____smoothRoute_3_FieldInfo,
	&WaypointCircuit_t369____numPoints_4_FieldInfo,
	&WaypointCircuit_t369____points_5_FieldInfo,
	&WaypointCircuit_t369____distances_6_FieldInfo,
	&WaypointCircuit_t369____editorVisualisationSubsteps_7_FieldInfo,
	&WaypointCircuit_t369____p0n_8_FieldInfo,
	&WaypointCircuit_t369____p1n_9_FieldInfo,
	&WaypointCircuit_t369____p2n_10_FieldInfo,
	&WaypointCircuit_t369____p3n_11_FieldInfo,
	&WaypointCircuit_t369____i_12_FieldInfo,
	&WaypointCircuit_t369____P0_13_FieldInfo,
	&WaypointCircuit_t369____P1_14_FieldInfo,
	&WaypointCircuit_t369____P2_15_FieldInfo,
	&WaypointCircuit_t369____P3_16_FieldInfo,
	&WaypointCircuit_t369____U3CLengthU3Ek__BackingField_17_FieldInfo,
	NULL
};
static PropertyInfo WaypointCircuit_t369____Length_PropertyInfo = 
{
	&WaypointCircuit_t369_il2cpp_TypeInfo/* parent */
	, "Length"/* name */
	, &WaypointCircuit_get_Length_m1229_MethodInfo/* get */
	, &WaypointCircuit_set_Length_m1230_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo WaypointCircuit_t369____Waypoints_PropertyInfo = 
{
	&WaypointCircuit_t369_il2cpp_TypeInfo/* parent */
	, "Waypoints"/* name */
	, &WaypointCircuit_get_Waypoints_m1231_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* WaypointCircuit_t369_PropertyInfos[] =
{
	&WaypointCircuit_t369____Length_PropertyInfo,
	&WaypointCircuit_t369____Waypoints_PropertyInfo,
	NULL
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
// System.Void UnityStandardAssets.Utility.WaypointCircuit::.ctor()
MethodInfo WaypointCircuit__ctor_m1228_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&WaypointCircuit__ctor_m1228/* method */
	, &WaypointCircuit_t369_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1321/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Single_t448_0_0_0;
extern void* RuntimeInvoker_Single_t448 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache WaypointCircuit_t369__CustomAttributeCache_WaypointCircuit_get_Length_m1229;
// System.Single UnityStandardAssets.Utility.WaypointCircuit::get_Length()
MethodInfo WaypointCircuit_get_Length_m1229_MethodInfo = 
{
	"get_Length"/* name */
	, (methodPointerType)&WaypointCircuit_get_Length_m1229/* method */
	, &WaypointCircuit_t369_il2cpp_TypeInfo/* declaring_type */
	, &Single_t448_0_0_0/* return_type */
	, RuntimeInvoker_Single_t448/* invoker_method */
	, NULL/* parameters */
	, &WaypointCircuit_t369__CustomAttributeCache_WaypointCircuit_get_Length_m1229/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1322/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Single_t448_0_0_0;
static ParameterInfo WaypointCircuit_t369_WaypointCircuit_set_Length_m1230_ParameterInfos[] = 
{
	{"value", 0, 134218778, &EmptyCustomAttributesCache, &Single_t448_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_Single_t448 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache WaypointCircuit_t369__CustomAttributeCache_WaypointCircuit_set_Length_m1230;
// System.Void UnityStandardAssets.Utility.WaypointCircuit::set_Length(System.Single)
MethodInfo WaypointCircuit_set_Length_m1230_MethodInfo = 
{
	"set_Length"/* name */
	, (methodPointerType)&WaypointCircuit_set_Length_m1230/* method */
	, &WaypointCircuit_t369_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_Single_t448/* invoker_method */
	, WaypointCircuit_t369_WaypointCircuit_set_Length_m1230_ParameterInfos/* parameters */
	, &WaypointCircuit_t369__CustomAttributeCache_WaypointCircuit_set_Length_m1230/* custom_attributes_cache */
	, 2177/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1323/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType TransformU5BU5D_t302_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// UnityEngine.Transform[] UnityStandardAssets.Utility.WaypointCircuit::get_Waypoints()
MethodInfo WaypointCircuit_get_Waypoints_m1231_MethodInfo = 
{
	"get_Waypoints"/* name */
	, (methodPointerType)&WaypointCircuit_get_Waypoints_m1231/* method */
	, &WaypointCircuit_t369_il2cpp_TypeInfo/* declaring_type */
	, &TransformU5BU5D_t302_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1324/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
// System.Void UnityStandardAssets.Utility.WaypointCircuit::Awake()
MethodInfo WaypointCircuit_Awake_m1232_MethodInfo = 
{
	"Awake"/* name */
	, (methodPointerType)&WaypointCircuit_Awake_m1232/* method */
	, &WaypointCircuit_t369_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1325/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Single_t448_0_0_0;
static ParameterInfo WaypointCircuit_t369_WaypointCircuit_GetRoutePoint_m1233_ParameterInfos[] = 
{
	{"dist", 0, 134218779, &EmptyCustomAttributesCache, &Single_t448_0_0_0},
};
extern Il2CppType RoutePoint_t371_0_0_0;
extern void* RuntimeInvoker_RoutePoint_t371_Single_t448 (MethodInfo* method, void* obj, void** args);
// UnityStandardAssets.Utility.WaypointCircuit/RoutePoint UnityStandardAssets.Utility.WaypointCircuit::GetRoutePoint(System.Single)
MethodInfo WaypointCircuit_GetRoutePoint_m1233_MethodInfo = 
{
	"GetRoutePoint"/* name */
	, (methodPointerType)&WaypointCircuit_GetRoutePoint_m1233/* method */
	, &WaypointCircuit_t369_il2cpp_TypeInfo/* declaring_type */
	, &RoutePoint_t371_0_0_0/* return_type */
	, RuntimeInvoker_RoutePoint_t371_Single_t448/* invoker_method */
	, WaypointCircuit_t369_WaypointCircuit_GetRoutePoint_m1233_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1326/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Single_t448_0_0_0;
static ParameterInfo WaypointCircuit_t369_WaypointCircuit_GetRoutePosition_m1234_ParameterInfos[] = 
{
	{"dist", 0, 134218780, &EmptyCustomAttributesCache, &Single_t448_0_0_0},
};
extern Il2CppType Vector3_t175_0_0_0;
extern void* RuntimeInvoker_Vector3_t175_Single_t448 (MethodInfo* method, void* obj, void** args);
// UnityEngine.Vector3 UnityStandardAssets.Utility.WaypointCircuit::GetRoutePosition(System.Single)
MethodInfo WaypointCircuit_GetRoutePosition_m1234_MethodInfo = 
{
	"GetRoutePosition"/* name */
	, (methodPointerType)&WaypointCircuit_GetRoutePosition_m1234/* method */
	, &WaypointCircuit_t369_il2cpp_TypeInfo/* declaring_type */
	, &Vector3_t175_0_0_0/* return_type */
	, RuntimeInvoker_Vector3_t175_Single_t448/* invoker_method */
	, WaypointCircuit_t369_WaypointCircuit_GetRoutePosition_m1234_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1327/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Vector3_t175_0_0_0;
extern Il2CppType Vector3_t175_0_0_0;
extern Il2CppType Vector3_t175_0_0_0;
extern Il2CppType Vector3_t175_0_0_0;
extern Il2CppType Single_t448_0_0_0;
static ParameterInfo WaypointCircuit_t369_WaypointCircuit_CatmullRom_m1235_ParameterInfos[] = 
{
	{"p0", 0, 134218781, &EmptyCustomAttributesCache, &Vector3_t175_0_0_0},
	{"p1", 1, 134218782, &EmptyCustomAttributesCache, &Vector3_t175_0_0_0},
	{"p2", 2, 134218783, &EmptyCustomAttributesCache, &Vector3_t175_0_0_0},
	{"p3", 3, 134218784, &EmptyCustomAttributesCache, &Vector3_t175_0_0_0},
	{"i", 4, 134218785, &EmptyCustomAttributesCache, &Single_t448_0_0_0},
};
extern Il2CppType Vector3_t175_0_0_0;
extern void* RuntimeInvoker_Vector3_t175_Vector3_t175_Vector3_t175_Vector3_t175_Vector3_t175_Single_t448 (MethodInfo* method, void* obj, void** args);
// UnityEngine.Vector3 UnityStandardAssets.Utility.WaypointCircuit::CatmullRom(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
MethodInfo WaypointCircuit_CatmullRom_m1235_MethodInfo = 
{
	"CatmullRom"/* name */
	, (methodPointerType)&WaypointCircuit_CatmullRom_m1235/* method */
	, &WaypointCircuit_t369_il2cpp_TypeInfo/* declaring_type */
	, &Vector3_t175_0_0_0/* return_type */
	, RuntimeInvoker_Vector3_t175_Vector3_t175_Vector3_t175_Vector3_t175_Vector3_t175_Single_t448/* invoker_method */
	, WaypointCircuit_t369_WaypointCircuit_CatmullRom_m1235_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 5/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1328/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
// System.Void UnityStandardAssets.Utility.WaypointCircuit::CachePositionsAndDistances()
MethodInfo WaypointCircuit_CachePositionsAndDistances_m1236_MethodInfo = 
{
	"CachePositionsAndDistances"/* name */
	, (methodPointerType)&WaypointCircuit_CachePositionsAndDistances_m1236/* method */
	, &WaypointCircuit_t369_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1329/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
// System.Void UnityStandardAssets.Utility.WaypointCircuit::OnDrawGizmos()
MethodInfo WaypointCircuit_OnDrawGizmos_m1237_MethodInfo = 
{
	"OnDrawGizmos"/* name */
	, (methodPointerType)&WaypointCircuit_OnDrawGizmos_m1237/* method */
	, &WaypointCircuit_t369_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1330/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
// System.Void UnityStandardAssets.Utility.WaypointCircuit::OnDrawGizmosSelected()
MethodInfo WaypointCircuit_OnDrawGizmosSelected_m1238_MethodInfo = 
{
	"OnDrawGizmosSelected"/* name */
	, (methodPointerType)&WaypointCircuit_OnDrawGizmosSelected_m1238/* method */
	, &WaypointCircuit_t369_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1331/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t379_0_0_0;
static ParameterInfo WaypointCircuit_t369_WaypointCircuit_DrawGizmos_m1239_ParameterInfos[] = 
{
	{"selected", 0, 134218786, &EmptyCustomAttributesCache, &Boolean_t379_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_SByte_t381 (MethodInfo* method, void* obj, void** args);
// System.Void UnityStandardAssets.Utility.WaypointCircuit::DrawGizmos(System.Boolean)
MethodInfo WaypointCircuit_DrawGizmos_m1239_MethodInfo = 
{
	"DrawGizmos"/* name */
	, (methodPointerType)&WaypointCircuit_DrawGizmos_m1239/* method */
	, &WaypointCircuit_t369_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_SByte_t381/* invoker_method */
	, WaypointCircuit_t369_WaypointCircuit_DrawGizmos_m1239_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1332/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* WaypointCircuit_t369_MethodInfos[] =
{
	&WaypointCircuit__ctor_m1228_MethodInfo,
	&WaypointCircuit_get_Length_m1229_MethodInfo,
	&WaypointCircuit_set_Length_m1230_MethodInfo,
	&WaypointCircuit_get_Waypoints_m1231_MethodInfo,
	&WaypointCircuit_Awake_m1232_MethodInfo,
	&WaypointCircuit_GetRoutePoint_m1233_MethodInfo,
	&WaypointCircuit_GetRoutePosition_m1234_MethodInfo,
	&WaypointCircuit_CatmullRom_m1235_MethodInfo,
	&WaypointCircuit_CachePositionsAndDistances_m1236_MethodInfo,
	&WaypointCircuit_OnDrawGizmos_m1237_MethodInfo,
	&WaypointCircuit_OnDrawGizmosSelected_m1238_MethodInfo,
	&WaypointCircuit_DrawGizmos_m1239_MethodInfo,
	NULL
};
extern TypeInfo WaypointList_t370_il2cpp_TypeInfo;
extern TypeInfo RoutePoint_t371_il2cpp_TypeInfo;
static TypeInfo* WaypointCircuit_t369_il2cpp_TypeInfo__nestedTypes[3] =
{
	&WaypointList_t370_il2cpp_TypeInfo,
	&RoutePoint_t371_il2cpp_TypeInfo,
	NULL
};
static MethodInfo* WaypointCircuit_t369_VTable[] =
{
	&Object_Equals_m1333_MethodInfo,
	&Object_Finalize_m1253_MethodInfo,
	&Object_GetHashCode_m1334_MethodInfo,
	&Object_ToString_m1335_MethodInfo,
};
void WaypointCircuit_t369_CustomAttributesCacheGenerator_smoothRoute(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t400 * tmp;
		tmp = (SerializeField_t400 *)il2cpp_codegen_object_new (&SerializeField_t400_il2cpp_TypeInfo);
		SerializeField__ctor_m1336(tmp, &SerializeField__ctor_m1336_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void WaypointCircuit_t369_CustomAttributesCacheGenerator_U3CLengthU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t384 * tmp;
		tmp = (CompilerGeneratedAttribute_t384 *)il2cpp_codegen_object_new (&CompilerGeneratedAttribute_t384_il2cpp_TypeInfo);
		CompilerGeneratedAttribute__ctor_m1269(tmp, &CompilerGeneratedAttribute__ctor_m1269_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void WaypointCircuit_t369_CustomAttributesCacheGenerator_WaypointCircuit_get_Length_m1229(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t384 * tmp;
		tmp = (CompilerGeneratedAttribute_t384 *)il2cpp_codegen_object_new (&CompilerGeneratedAttribute_t384_il2cpp_TypeInfo);
		CompilerGeneratedAttribute__ctor_m1269(tmp, &CompilerGeneratedAttribute__ctor_m1269_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void WaypointCircuit_t369_CustomAttributesCacheGenerator_WaypointCircuit_set_Length_m1230(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t384 * tmp;
		tmp = (CompilerGeneratedAttribute_t384 *)il2cpp_codegen_object_new (&CompilerGeneratedAttribute_t384_il2cpp_TypeInfo);
		CompilerGeneratedAttribute__ctor_m1269(tmp, &CompilerGeneratedAttribute__ctor_m1269_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache WaypointCircuit_t369__CustomAttributeCache_smoothRoute = {
1,
NULL,
&WaypointCircuit_t369_CustomAttributesCacheGenerator_smoothRoute
};
CustomAttributesCache WaypointCircuit_t369__CustomAttributeCache_U3CLengthU3Ek__BackingField = {
1,
NULL,
&WaypointCircuit_t369_CustomAttributesCacheGenerator_U3CLengthU3Ek__BackingField
};
CustomAttributesCache WaypointCircuit_t369__CustomAttributeCache_WaypointCircuit_get_Length_m1229 = {
1,
NULL,
&WaypointCircuit_t369_CustomAttributesCacheGenerator_WaypointCircuit_get_Length_m1229
};
CustomAttributesCache WaypointCircuit_t369__CustomAttributeCache_WaypointCircuit_set_Length_m1230 = {
1,
NULL,
&WaypointCircuit_t369_CustomAttributesCacheGenerator_WaypointCircuit_set_Length_m1230
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType WaypointCircuit_t369_0_0_0;
extern Il2CppType WaypointCircuit_t369_1_0_0;
struct WaypointCircuit_t369;
extern CustomAttributesCache WaypointCircuit_t369__CustomAttributeCache_smoothRoute;
extern CustomAttributesCache WaypointCircuit_t369__CustomAttributeCache_U3CLengthU3Ek__BackingField;
extern CustomAttributesCache WaypointCircuit_t369__CustomAttributeCache_WaypointCircuit_get_Length_m1229;
extern CustomAttributesCache WaypointCircuit_t369__CustomAttributeCache_WaypointCircuit_set_Length_m1230;
TypeInfo WaypointCircuit_t369_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image/* image */
	, NULL/* gc_desc */
	, "WaypointCircuit"/* name */
	, "UnityStandardAssets.Utility"/* namespaze */
	, WaypointCircuit_t369_MethodInfos/* methods */
	, WaypointCircuit_t369_PropertyInfos/* properties */
	, WaypointCircuit_t369_FieldInfos/* fields */
	, NULL/* events */
	, &MonoBehaviour_t39_il2cpp_TypeInfo/* parent */
	, WaypointCircuit_t369_il2cpp_TypeInfo__nestedTypes/* nested_types */
	, NULL/* nested_in */
	, &WaypointCircuit_t369_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, WaypointCircuit_t369_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &WaypointCircuit_t369_il2cpp_TypeInfo/* cast_class */
	, &WaypointCircuit_t369_0_0_0/* byval_arg */
	, &WaypointCircuit_t369_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (WaypointCircuit_t369)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048577/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 12/* method_count */
	, 2/* property_count */
	, 16/* field_count */
	, 0/* event_count */
	, 2/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ProgressStyle_t374_il2cpp_TypeInfo;



// Metadata Definition UnityStandardAssets.Utility.WaypointProgressTracker/ProgressStyle
extern Il2CppType Int32_t386_0_0_1542;
FieldInfo ProgressStyle_t374____value___1_FieldInfo = 
{
	"value__"/* name */
	, &Int32_t386_0_0_1542/* type */
	, &ProgressStyle_t374_il2cpp_TypeInfo/* parent */
	, offsetof(ProgressStyle_t374, ___value___1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType ProgressStyle_t374_0_0_32854;
FieldInfo ProgressStyle_t374____SmoothAlongRoute_2_FieldInfo = 
{
	"SmoothAlongRoute"/* name */
	, &ProgressStyle_t374_0_0_32854/* type */
	, &ProgressStyle_t374_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType ProgressStyle_t374_0_0_32854;
FieldInfo ProgressStyle_t374____PointToPoint_3_FieldInfo = 
{
	"PointToPoint"/* name */
	, &ProgressStyle_t374_0_0_32854/* type */
	, &ProgressStyle_t374_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* ProgressStyle_t374_FieldInfos[] =
{
	&ProgressStyle_t374____value___1_FieldInfo,
	&ProgressStyle_t374____SmoothAlongRoute_2_FieldInfo,
	&ProgressStyle_t374____PointToPoint_3_FieldInfo,
	NULL
};
static const int32_t ProgressStyle_t374____SmoothAlongRoute_2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry ProgressStyle_t374____SmoothAlongRoute_2_DefaultValue = 
{
	&ProgressStyle_t374____SmoothAlongRoute_2_FieldInfo/* field */
	, { (char*)&ProgressStyle_t374____SmoothAlongRoute_2_DefaultValueData, &Int32_t386_0_0_0 }/* value */

};
static const int32_t ProgressStyle_t374____PointToPoint_3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry ProgressStyle_t374____PointToPoint_3_DefaultValue = 
{
	&ProgressStyle_t374____PointToPoint_3_FieldInfo/* field */
	, { (char*)&ProgressStyle_t374____PointToPoint_3_DefaultValueData, &Int32_t386_0_0_0 }/* value */

};
static Il2CppFieldDefaultValueEntry* ProgressStyle_t374_FieldDefaultValues[] = 
{
	&ProgressStyle_t374____SmoothAlongRoute_2_DefaultValue,
	&ProgressStyle_t374____PointToPoint_3_DefaultValue,
	NULL
};
static MethodInfo* ProgressStyle_t374_MethodInfos[] =
{
	NULL
};
static MethodInfo* ProgressStyle_t374_VTable[] =
{
	&Enum_Equals_m1418_MethodInfo,
	&Object_Finalize_m1253_MethodInfo,
	&Enum_GetHashCode_m1419_MethodInfo,
	&Enum_ToString_m1420_MethodInfo,
	&Enum_ToString_m1421_MethodInfo,
	&Enum_System_IConvertible_ToBoolean_m1422_MethodInfo,
	&Enum_System_IConvertible_ToByte_m1423_MethodInfo,
	&Enum_System_IConvertible_ToChar_m1424_MethodInfo,
	&Enum_System_IConvertible_ToDateTime_m1425_MethodInfo,
	&Enum_System_IConvertible_ToDecimal_m1426_MethodInfo,
	&Enum_System_IConvertible_ToDouble_m1427_MethodInfo,
	&Enum_System_IConvertible_ToInt16_m1428_MethodInfo,
	&Enum_System_IConvertible_ToInt32_m1429_MethodInfo,
	&Enum_System_IConvertible_ToInt64_m1430_MethodInfo,
	&Enum_System_IConvertible_ToSByte_m1431_MethodInfo,
	&Enum_System_IConvertible_ToSingle_m1432_MethodInfo,
	&Enum_ToString_m1433_MethodInfo,
	&Enum_System_IConvertible_ToType_m1434_MethodInfo,
	&Enum_System_IConvertible_ToUInt16_m1435_MethodInfo,
	&Enum_System_IConvertible_ToUInt32_m1436_MethodInfo,
	&Enum_System_IConvertible_ToUInt64_m1437_MethodInfo,
	&Enum_CompareTo_m1438_MethodInfo,
	&Enum_GetTypeCode_m1439_MethodInfo,
};
static Il2CppInterfaceOffsetPair ProgressStyle_t374_InterfacesOffsets[] = 
{
	{ &IFormattable_t440_il2cpp_TypeInfo, 4},
	{ &IConvertible_t441_il2cpp_TypeInfo, 5},
	{ &IComparable_t442_il2cpp_TypeInfo, 21},
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType ProgressStyle_t374_0_0_0;
extern Il2CppType ProgressStyle_t374_1_0_0;
extern TypeInfo WaypointProgressTracker_t375_il2cpp_TypeInfo;
TypeInfo ProgressStyle_t374_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image/* image */
	, NULL/* gc_desc */
	, "ProgressStyle"/* name */
	, ""/* namespaze */
	, ProgressStyle_t374_MethodInfos/* methods */
	, NULL/* properties */
	, ProgressStyle_t374_FieldInfos/* fields */
	, NULL/* events */
	, &Enum_t443_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &WaypointProgressTracker_t375_il2cpp_TypeInfo/* nested_in */
	, &Int32_t386_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, ProgressStyle_t374_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &Int32_t386_il2cpp_TypeInfo/* cast_class */
	, &ProgressStyle_t374_0_0_0/* byval_arg */
	, &ProgressStyle_t374_1_0_0/* this_arg */
	, ProgressStyle_t374_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, ProgressStyle_t374_FieldDefaultValues/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (ProgressStyle_t374)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (int32_t)/* element_size */
	, sizeof(int32_t)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 258/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, true/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 0/* method_count */
	, 0/* property_count */
	, 3/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 23/* vtable_count */
	, 0/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo WaypointProgressTracker_Reset_m1248_MethodInfo;
extern MethodInfo WaypointProgressTracker_set_progressPoint_m1246_MethodInfo;
extern MethodInfo WaypointProgressTracker_get_progressPoint_m1245_MethodInfo;
extern MethodInfo Vector3_Dot_m1895_MethodInfo;
extern MethodInfo Application_get_isPlaying_m2161_MethodInfo;
extern MethodInfo Color_get_green_m2162_MethodInfo;
extern MethodInfo Gizmos_DrawWireSphere_m2163_MethodInfo;


// System.Void UnityStandardAssets.Utility.WaypointProgressTracker::.ctor()
extern MethodInfo WaypointProgressTracker__ctor_m1240_MethodInfo;
 void WaypointProgressTracker__ctor_m1240 (WaypointProgressTracker_t375 * __this, MethodInfo* method){
	{
		__this->___lookAheadForTargetOffset_3 = (5.0f);
		__this->___lookAheadForTargetFactor_4 = (0.1f);
		__this->___lookAheadForSpeedOffset_5 = (10.0f);
		__this->___lookAheadForSpeedFactor_6 = (0.2f);
		__this->___pointToPointThreshold_8 = (4.0f);
		MonoBehaviour__ctor_m1402(__this, /*hidden argument*/&MonoBehaviour__ctor_m1402_MethodInfo);
		return;
	}
}
// UnityStandardAssets.Utility.WaypointCircuit/RoutePoint UnityStandardAssets.Utility.WaypointProgressTracker::get_targetPoint()
extern MethodInfo WaypointProgressTracker_get_targetPoint_m1241_MethodInfo;
 RoutePoint_t371  WaypointProgressTracker_get_targetPoint_m1241 (WaypointProgressTracker_t375 * __this, MethodInfo* method){
	{
		RoutePoint_t371  L_0 = (__this->___U3CtargetPointU3Ek__BackingField_14);
		return L_0;
	}
}
// System.Void UnityStandardAssets.Utility.WaypointProgressTracker::set_targetPoint(UnityStandardAssets.Utility.WaypointCircuit/RoutePoint)
extern MethodInfo WaypointProgressTracker_set_targetPoint_m1242_MethodInfo;
 void WaypointProgressTracker_set_targetPoint_m1242 (WaypointProgressTracker_t375 * __this, RoutePoint_t371  ___value, MethodInfo* method){
	{
		__this->___U3CtargetPointU3Ek__BackingField_14 = ___value;
		return;
	}
}
// UnityStandardAssets.Utility.WaypointCircuit/RoutePoint UnityStandardAssets.Utility.WaypointProgressTracker::get_speedPoint()
extern MethodInfo WaypointProgressTracker_get_speedPoint_m1243_MethodInfo;
 RoutePoint_t371  WaypointProgressTracker_get_speedPoint_m1243 (WaypointProgressTracker_t375 * __this, MethodInfo* method){
	{
		RoutePoint_t371  L_0 = (__this->___U3CspeedPointU3Ek__BackingField_15);
		return L_0;
	}
}
// System.Void UnityStandardAssets.Utility.WaypointProgressTracker::set_speedPoint(UnityStandardAssets.Utility.WaypointCircuit/RoutePoint)
extern MethodInfo WaypointProgressTracker_set_speedPoint_m1244_MethodInfo;
 void WaypointProgressTracker_set_speedPoint_m1244 (WaypointProgressTracker_t375 * __this, RoutePoint_t371  ___value, MethodInfo* method){
	{
		__this->___U3CspeedPointU3Ek__BackingField_15 = ___value;
		return;
	}
}
// UnityStandardAssets.Utility.WaypointCircuit/RoutePoint UnityStandardAssets.Utility.WaypointProgressTracker::get_progressPoint()
 RoutePoint_t371  WaypointProgressTracker_get_progressPoint_m1245 (WaypointProgressTracker_t375 * __this, MethodInfo* method){
	{
		RoutePoint_t371  L_0 = (__this->___U3CprogressPointU3Ek__BackingField_16);
		return L_0;
	}
}
// System.Void UnityStandardAssets.Utility.WaypointProgressTracker::set_progressPoint(UnityStandardAssets.Utility.WaypointCircuit/RoutePoint)
 void WaypointProgressTracker_set_progressPoint_m1246 (WaypointProgressTracker_t375 * __this, RoutePoint_t371  ___value, MethodInfo* method){
	{
		__this->___U3CprogressPointU3Ek__BackingField_16 = ___value;
		return;
	}
}
// System.Void UnityStandardAssets.Utility.WaypointProgressTracker::Start()
extern MethodInfo WaypointProgressTracker_Start_m1247_MethodInfo;
 void WaypointProgressTracker_Start_m1247 (WaypointProgressTracker_t375 * __this, MethodInfo* method){
	{
		Transform_t173 * L_0 = (__this->___target_9);
		bool L_1 = Object_op_Equality_m1329(NULL /*static, unused*/, L_0, (Object_t326 *)NULL, /*hidden argument*/&Object_op_Equality_m1329_MethodInfo);
		if (!L_1)
		{
			goto IL_0031;
		}
	}
	{
		String_t* L_2 = Object_get_name_m1905(__this, /*hidden argument*/&Object_get_name_m1905_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_3 = String_Concat_m1408(NULL /*static, unused*/, L_2, (String_t*) &_stringLiteral467, /*hidden argument*/&String_Concat_m1408_MethodInfo);
		GameObject_t235 * L_4 = (GameObject_t235 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GameObject_t235_il2cpp_TypeInfo));
		GameObject__ctor_m2113(L_4, L_3, /*hidden argument*/&GameObject__ctor_m2113_MethodInfo);
		NullCheck(L_4);
		Transform_t173 * L_5 = GameObject_get_transform_m1755(L_4, /*hidden argument*/&GameObject_get_transform_m1755_MethodInfo);
		__this->___target_9 = L_5;
	}

IL_0031:
	{
		WaypointProgressTracker_Reset_m1248(__this, /*hidden argument*/&WaypointProgressTracker_Reset_m1248_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.WaypointProgressTracker::Reset()
 void WaypointProgressTracker_Reset_m1248 (WaypointProgressTracker_t375 * __this, MethodInfo* method){
	{
		__this->___progressDistance_10 = (0.0f);
		__this->___progressNum_11 = 0;
		int32_t L_0 = (__this->___progressStyle_7);
		if ((((uint32_t)L_0) != ((uint32_t)1)))
		{
			goto IL_0062;
		}
	}
	{
		Transform_t173 * L_1 = (__this->___target_9);
		WaypointCircuit_t369 * L_2 = (__this->___circuit_2);
		NullCheck(L_2);
		TransformU5BU5D_t302* L_3 = WaypointCircuit_get_Waypoints_m1231(L_2, /*hidden argument*/&WaypointCircuit_get_Waypoints_m1231_MethodInfo);
		int32_t L_4 = (__this->___progressNum_11);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		NullCheck((*(Transform_t173 **)(Transform_t173 **)SZArrayLdElema(L_3, L_5)));
		Vector3_t175  L_6 = Transform_get_position_m1738((*(Transform_t173 **)(Transform_t173 **)SZArrayLdElema(L_3, L_5)), /*hidden argument*/&Transform_get_position_m1738_MethodInfo);
		NullCheck(L_1);
		Transform_set_position_m1753(L_1, L_6, /*hidden argument*/&Transform_set_position_m1753_MethodInfo);
		Transform_t173 * L_7 = (__this->___target_9);
		WaypointCircuit_t369 * L_8 = (__this->___circuit_2);
		NullCheck(L_8);
		TransformU5BU5D_t302* L_9 = WaypointCircuit_get_Waypoints_m1231(L_8, /*hidden argument*/&WaypointCircuit_get_Waypoints_m1231_MethodInfo);
		int32_t L_10 = (__this->___progressNum_11);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		NullCheck((*(Transform_t173 **)(Transform_t173 **)SZArrayLdElema(L_9, L_11)));
		Quaternion_t299  L_12 = Transform_get_rotation_m1908((*(Transform_t173 **)(Transform_t173 **)SZArrayLdElema(L_9, L_11)), /*hidden argument*/&Transform_get_rotation_m1908_MethodInfo);
		NullCheck(L_7);
		Transform_set_rotation_m1909(L_7, L_12, /*hidden argument*/&Transform_set_rotation_m1909_MethodInfo);
	}

IL_0062:
	{
		return;
	}
}
// System.Void UnityStandardAssets.Utility.WaypointProgressTracker::Update()
extern MethodInfo WaypointProgressTracker_Update_m1249_MethodInfo;
 void WaypointProgressTracker_Update_m1249 (WaypointProgressTracker_t375 * __this, MethodInfo* method){
	Vector3_t175  V_0 = {0};
	Vector3_t175  V_1 = {0};
	Vector3_t175  V_2 = {0};
	Vector3_t175  V_3 = {0};
	RoutePoint_t371  V_4 = {0};
	RoutePoint_t371  V_5 = {0};
	RoutePoint_t371  V_6 = {0};
	RoutePoint_t371  V_7 = {0};
	RoutePoint_t371  V_8 = {0};
	RoutePoint_t371  V_9 = {0};
	{
		int32_t L_0 = (__this->___progressStyle_7);
		if (L_0)
		{
			goto IL_0153;
		}
	}
	{
		float L_1 = Time_get_deltaTime_m1748(NULL /*static, unused*/, /*hidden argument*/&Time_get_deltaTime_m1748_MethodInfo);
		if ((((float)L_1) <= ((float)(0.0f))))
		{
			goto IL_0054;
		}
	}
	{
		float L_2 = (__this->___speed_13);
		Vector3_t175  L_3 = (__this->___lastPosition_12);
		Transform_t173 * L_4 = Component_get_transform_m1739(__this, /*hidden argument*/&Component_get_transform_m1739_MethodInfo);
		NullCheck(L_4);
		Vector3_t175  L_5 = Transform_get_position_m1738(L_4, /*hidden argument*/&Transform_get_position_m1738_MethodInfo);
		Vector3_t175  L_6 = Vector3_op_Subtraction_m1740(NULL /*static, unused*/, L_3, L_5, /*hidden argument*/&Vector3_op_Subtraction_m1740_MethodInfo);
		V_3 = L_6;
		float L_7 = Vector3_get_magnitude_m1896((&V_3), /*hidden argument*/&Vector3_get_magnitude_m1896_MethodInfo);
		float L_8 = Time_get_deltaTime_m1748(NULL /*static, unused*/, /*hidden argument*/&Time_get_deltaTime_m1748_MethodInfo);
		float L_9 = Time_get_deltaTime_m1748(NULL /*static, unused*/, /*hidden argument*/&Time_get_deltaTime_m1748_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t505_il2cpp_TypeInfo));
		float L_10 = Mathf_Lerp_m1756(NULL /*static, unused*/, L_2, ((float)((float)L_7/(float)L_8)), L_9, /*hidden argument*/&Mathf_Lerp_m1756_MethodInfo);
		__this->___speed_13 = L_10;
	}

IL_0054:
	{
		Transform_t173 * L_11 = (__this->___target_9);
		WaypointCircuit_t369 * L_12 = (__this->___circuit_2);
		float L_13 = (__this->___progressDistance_10);
		float L_14 = (__this->___lookAheadForTargetOffset_3);
		float L_15 = (__this->___lookAheadForTargetFactor_4);
		float L_16 = (__this->___speed_13);
		NullCheck(L_12);
		RoutePoint_t371  L_17 = WaypointCircuit_GetRoutePoint_m1233(L_12, ((float)(((float)(L_13+L_14))+((float)((float)L_15*(float)L_16)))), /*hidden argument*/&WaypointCircuit_GetRoutePoint_m1233_MethodInfo);
		V_4 = L_17;
		NullCheck((&V_4));
		Vector3_t175  L_18 = ((&V_4)->___position_0);
		NullCheck(L_11);
		Transform_set_position_m1753(L_11, L_18, /*hidden argument*/&Transform_set_position_m1753_MethodInfo);
		Transform_t173 * L_19 = (__this->___target_9);
		WaypointCircuit_t369 * L_20 = (__this->___circuit_2);
		float L_21 = (__this->___progressDistance_10);
		float L_22 = (__this->___lookAheadForSpeedOffset_5);
		float L_23 = (__this->___lookAheadForSpeedFactor_6);
		float L_24 = (__this->___speed_13);
		NullCheck(L_20);
		RoutePoint_t371  L_25 = WaypointCircuit_GetRoutePoint_m1233(L_20, ((float)(((float)(L_21+L_22))+((float)((float)L_23*(float)L_24)))), /*hidden argument*/&WaypointCircuit_GetRoutePoint_m1233_MethodInfo);
		V_5 = L_25;
		NullCheck((&V_5));
		Vector3_t175  L_26 = ((&V_5)->___direction_1);
		Quaternion_t299  L_27 = Quaternion_LookRotation_m2044(NULL /*static, unused*/, L_26, /*hidden argument*/&Quaternion_LookRotation_m2044_MethodInfo);
		NullCheck(L_19);
		Transform_set_rotation_m1909(L_19, L_27, /*hidden argument*/&Transform_set_rotation_m1909_MethodInfo);
		WaypointCircuit_t369 * L_28 = (__this->___circuit_2);
		float L_29 = (__this->___progressDistance_10);
		NullCheck(L_28);
		RoutePoint_t371  L_30 = WaypointCircuit_GetRoutePoint_m1233(L_28, L_29, /*hidden argument*/&WaypointCircuit_GetRoutePoint_m1233_MethodInfo);
		WaypointProgressTracker_set_progressPoint_m1246(__this, L_30, /*hidden argument*/&WaypointProgressTracker_set_progressPoint_m1246_MethodInfo);
		RoutePoint_t371  L_31 = WaypointProgressTracker_get_progressPoint_m1245(__this, /*hidden argument*/&WaypointProgressTracker_get_progressPoint_m1245_MethodInfo);
		V_6 = L_31;
		NullCheck((&V_6));
		Vector3_t175  L_32 = ((&V_6)->___position_0);
		Transform_t173 * L_33 = Component_get_transform_m1739(__this, /*hidden argument*/&Component_get_transform_m1739_MethodInfo);
		NullCheck(L_33);
		Vector3_t175  L_34 = Transform_get_position_m1738(L_33, /*hidden argument*/&Transform_get_position_m1738_MethodInfo);
		Vector3_t175  L_35 = Vector3_op_Subtraction_m1740(NULL /*static, unused*/, L_32, L_34, /*hidden argument*/&Vector3_op_Subtraction_m1740_MethodInfo);
		V_0 = L_35;
		RoutePoint_t371  L_36 = WaypointProgressTracker_get_progressPoint_m1245(__this, /*hidden argument*/&WaypointProgressTracker_get_progressPoint_m1245_MethodInfo);
		V_7 = L_36;
		NullCheck((&V_7));
		Vector3_t175  L_37 = ((&V_7)->___direction_1);
		float L_38 = Vector3_Dot_m1895(NULL /*static, unused*/, V_0, L_37, /*hidden argument*/&Vector3_Dot_m1895_MethodInfo);
		if ((((float)L_38) >= ((float)(0.0f))))
		{
			goto IL_013d;
		}
	}
	{
		float L_39 = (__this->___progressDistance_10);
		float L_40 = Vector3_get_magnitude_m1896((&V_0), /*hidden argument*/&Vector3_get_magnitude_m1896_MethodInfo);
		__this->___progressDistance_10 = ((float)(L_39+((float)((float)L_40*(float)(0.5f)))));
	}

IL_013d:
	{
		Transform_t173 * L_41 = Component_get_transform_m1739(__this, /*hidden argument*/&Component_get_transform_m1739_MethodInfo);
		NullCheck(L_41);
		Vector3_t175  L_42 = Transform_get_position_m1738(L_41, /*hidden argument*/&Transform_get_position_m1738_MethodInfo);
		__this->___lastPosition_12 = L_42;
		goto IL_025c;
	}

IL_0153:
	{
		Transform_t173 * L_43 = (__this->___target_9);
		NullCheck(L_43);
		Vector3_t175  L_44 = Transform_get_position_m1738(L_43, /*hidden argument*/&Transform_get_position_m1738_MethodInfo);
		Transform_t173 * L_45 = Component_get_transform_m1739(__this, /*hidden argument*/&Component_get_transform_m1739_MethodInfo);
		NullCheck(L_45);
		Vector3_t175  L_46 = Transform_get_position_m1738(L_45, /*hidden argument*/&Transform_get_position_m1738_MethodInfo);
		Vector3_t175  L_47 = Vector3_op_Subtraction_m1740(NULL /*static, unused*/, L_44, L_46, /*hidden argument*/&Vector3_op_Subtraction_m1740_MethodInfo);
		V_1 = L_47;
		float L_48 = Vector3_get_magnitude_m1896((&V_1), /*hidden argument*/&Vector3_get_magnitude_m1896_MethodInfo);
		float L_49 = (__this->___pointToPointThreshold_8);
		if ((((float)L_48) >= ((float)L_49)))
		{
			goto IL_019d;
		}
	}
	{
		int32_t L_50 = (__this->___progressNum_11);
		WaypointCircuit_t369 * L_51 = (__this->___circuit_2);
		NullCheck(L_51);
		TransformU5BU5D_t302* L_52 = WaypointCircuit_get_Waypoints_m1231(L_51, /*hidden argument*/&WaypointCircuit_get_Waypoints_m1231_MethodInfo);
		NullCheck(L_52);
		__this->___progressNum_11 = ((int32_t)(((int32_t)(L_50+1))%(((int32_t)(((Array_t *)L_52)->max_length)))));
	}

IL_019d:
	{
		Transform_t173 * L_53 = (__this->___target_9);
		WaypointCircuit_t369 * L_54 = (__this->___circuit_2);
		NullCheck(L_54);
		TransformU5BU5D_t302* L_55 = WaypointCircuit_get_Waypoints_m1231(L_54, /*hidden argument*/&WaypointCircuit_get_Waypoints_m1231_MethodInfo);
		int32_t L_56 = (__this->___progressNum_11);
		NullCheck(L_55);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_55, L_56);
		int32_t L_57 = L_56;
		NullCheck((*(Transform_t173 **)(Transform_t173 **)SZArrayLdElema(L_55, L_57)));
		Vector3_t175  L_58 = Transform_get_position_m1738((*(Transform_t173 **)(Transform_t173 **)SZArrayLdElema(L_55, L_57)), /*hidden argument*/&Transform_get_position_m1738_MethodInfo);
		NullCheck(L_53);
		Transform_set_position_m1753(L_53, L_58, /*hidden argument*/&Transform_set_position_m1753_MethodInfo);
		Transform_t173 * L_59 = (__this->___target_9);
		WaypointCircuit_t369 * L_60 = (__this->___circuit_2);
		NullCheck(L_60);
		TransformU5BU5D_t302* L_61 = WaypointCircuit_get_Waypoints_m1231(L_60, /*hidden argument*/&WaypointCircuit_get_Waypoints_m1231_MethodInfo);
		int32_t L_62 = (__this->___progressNum_11);
		NullCheck(L_61);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_61, L_62);
		int32_t L_63 = L_62;
		NullCheck((*(Transform_t173 **)(Transform_t173 **)SZArrayLdElema(L_61, L_63)));
		Quaternion_t299  L_64 = Transform_get_rotation_m1908((*(Transform_t173 **)(Transform_t173 **)SZArrayLdElema(L_61, L_63)), /*hidden argument*/&Transform_get_rotation_m1908_MethodInfo);
		NullCheck(L_59);
		Transform_set_rotation_m1909(L_59, L_64, /*hidden argument*/&Transform_set_rotation_m1909_MethodInfo);
		WaypointCircuit_t369 * L_65 = (__this->___circuit_2);
		float L_66 = (__this->___progressDistance_10);
		NullCheck(L_65);
		RoutePoint_t371  L_67 = WaypointCircuit_GetRoutePoint_m1233(L_65, L_66, /*hidden argument*/&WaypointCircuit_GetRoutePoint_m1233_MethodInfo);
		WaypointProgressTracker_set_progressPoint_m1246(__this, L_67, /*hidden argument*/&WaypointProgressTracker_set_progressPoint_m1246_MethodInfo);
		RoutePoint_t371  L_68 = WaypointProgressTracker_get_progressPoint_m1245(__this, /*hidden argument*/&WaypointProgressTracker_get_progressPoint_m1245_MethodInfo);
		V_8 = L_68;
		NullCheck((&V_8));
		Vector3_t175  L_69 = ((&V_8)->___position_0);
		Transform_t173 * L_70 = Component_get_transform_m1739(__this, /*hidden argument*/&Component_get_transform_m1739_MethodInfo);
		NullCheck(L_70);
		Vector3_t175  L_71 = Transform_get_position_m1738(L_70, /*hidden argument*/&Transform_get_position_m1738_MethodInfo);
		Vector3_t175  L_72 = Vector3_op_Subtraction_m1740(NULL /*static, unused*/, L_69, L_71, /*hidden argument*/&Vector3_op_Subtraction_m1740_MethodInfo);
		V_2 = L_72;
		RoutePoint_t371  L_73 = WaypointProgressTracker_get_progressPoint_m1245(__this, /*hidden argument*/&WaypointProgressTracker_get_progressPoint_m1245_MethodInfo);
		V_9 = L_73;
		NullCheck((&V_9));
		Vector3_t175  L_74 = ((&V_9)->___direction_1);
		float L_75 = Vector3_Dot_m1895(NULL /*static, unused*/, V_2, L_74, /*hidden argument*/&Vector3_Dot_m1895_MethodInfo);
		if ((((float)L_75) >= ((float)(0.0f))))
		{
			goto IL_024b;
		}
	}
	{
		float L_76 = (__this->___progressDistance_10);
		float L_77 = Vector3_get_magnitude_m1896((&V_2), /*hidden argument*/&Vector3_get_magnitude_m1896_MethodInfo);
		__this->___progressDistance_10 = ((float)(L_76+L_77));
	}

IL_024b:
	{
		Transform_t173 * L_78 = Component_get_transform_m1739(__this, /*hidden argument*/&Component_get_transform_m1739_MethodInfo);
		NullCheck(L_78);
		Vector3_t175  L_79 = Transform_get_position_m1738(L_78, /*hidden argument*/&Transform_get_position_m1738_MethodInfo);
		__this->___lastPosition_12 = L_79;
	}

IL_025c:
	{
		return;
	}
}
// System.Void UnityStandardAssets.Utility.WaypointProgressTracker::OnDrawGizmos()
extern MethodInfo WaypointProgressTracker_OnDrawGizmos_m1250_MethodInfo;
 void WaypointProgressTracker_OnDrawGizmos_m1250 (WaypointProgressTracker_t375 * __this, MethodInfo* method){
	{
		bool L_0 = Application_get_isPlaying_m2161(NULL /*static, unused*/, /*hidden argument*/&Application_get_isPlaying_m2161_MethodInfo);
		if (!L_0)
		{
			goto IL_007f;
		}
	}
	{
		Color_t222  L_1 = Color_get_green_m2162(NULL /*static, unused*/, /*hidden argument*/&Color_get_green_m2162_MethodInfo);
		Gizmos_set_color_m2015(NULL /*static, unused*/, L_1, /*hidden argument*/&Gizmos_set_color_m2015_MethodInfo);
		Transform_t173 * L_2 = Component_get_transform_m1739(__this, /*hidden argument*/&Component_get_transform_m1739_MethodInfo);
		NullCheck(L_2);
		Vector3_t175  L_3 = Transform_get_position_m1738(L_2, /*hidden argument*/&Transform_get_position_m1738_MethodInfo);
		Transform_t173 * L_4 = (__this->___target_9);
		NullCheck(L_4);
		Vector3_t175  L_5 = Transform_get_position_m1738(L_4, /*hidden argument*/&Transform_get_position_m1738_MethodInfo);
		Gizmos_DrawLine_m2019(NULL /*static, unused*/, L_3, L_5, /*hidden argument*/&Gizmos_DrawLine_m2019_MethodInfo);
		WaypointCircuit_t369 * L_6 = (__this->___circuit_2);
		float L_7 = (__this->___progressDistance_10);
		NullCheck(L_6);
		Vector3_t175  L_8 = WaypointCircuit_GetRoutePosition_m1234(L_6, L_7, /*hidden argument*/&WaypointCircuit_GetRoutePosition_m1234_MethodInfo);
		Gizmos_DrawWireSphere_m2163(NULL /*static, unused*/, L_8, (1.0f), /*hidden argument*/&Gizmos_DrawWireSphere_m2163_MethodInfo);
		Color_t222  L_9 = Color_get_yellow_m2160(NULL /*static, unused*/, /*hidden argument*/&Color_get_yellow_m2160_MethodInfo);
		Gizmos_set_color_m2015(NULL /*static, unused*/, L_9, /*hidden argument*/&Gizmos_set_color_m2015_MethodInfo);
		Transform_t173 * L_10 = (__this->___target_9);
		NullCheck(L_10);
		Vector3_t175  L_11 = Transform_get_position_m1738(L_10, /*hidden argument*/&Transform_get_position_m1738_MethodInfo);
		Transform_t173 * L_12 = (__this->___target_9);
		NullCheck(L_12);
		Vector3_t175  L_13 = Transform_get_position_m1738(L_12, /*hidden argument*/&Transform_get_position_m1738_MethodInfo);
		Transform_t173 * L_14 = (__this->___target_9);
		NullCheck(L_14);
		Vector3_t175  L_15 = Transform_get_forward_m1899(L_14, /*hidden argument*/&Transform_get_forward_m1899_MethodInfo);
		Vector3_t175  L_16 = Vector3_op_Addition_m1750(NULL /*static, unused*/, L_13, L_15, /*hidden argument*/&Vector3_op_Addition_m1750_MethodInfo);
		Gizmos_DrawLine_m2019(NULL /*static, unused*/, L_11, L_16, /*hidden argument*/&Gizmos_DrawLine_m2019_MethodInfo);
	}

IL_007f:
	{
		return;
	}
}
// Metadata Definition UnityStandardAssets.Utility.WaypointProgressTracker
extern Il2CppType WaypointCircuit_t369_0_0_1;
extern CustomAttributesCache WaypointProgressTracker_t375__CustomAttributeCache_circuit;
FieldInfo WaypointProgressTracker_t375____circuit_2_FieldInfo = 
{
	"circuit"/* name */
	, &WaypointCircuit_t369_0_0_1/* type */
	, &WaypointProgressTracker_t375_il2cpp_TypeInfo/* parent */
	, offsetof(WaypointProgressTracker_t375, ___circuit_2)/* data */
	, &WaypointProgressTracker_t375__CustomAttributeCache_circuit/* custom_attributes_cache */

};
extern Il2CppType Single_t448_0_0_1;
extern CustomAttributesCache WaypointProgressTracker_t375__CustomAttributeCache_lookAheadForTargetOffset;
FieldInfo WaypointProgressTracker_t375____lookAheadForTargetOffset_3_FieldInfo = 
{
	"lookAheadForTargetOffset"/* name */
	, &Single_t448_0_0_1/* type */
	, &WaypointProgressTracker_t375_il2cpp_TypeInfo/* parent */
	, offsetof(WaypointProgressTracker_t375, ___lookAheadForTargetOffset_3)/* data */
	, &WaypointProgressTracker_t375__CustomAttributeCache_lookAheadForTargetOffset/* custom_attributes_cache */

};
extern Il2CppType Single_t448_0_0_1;
extern CustomAttributesCache WaypointProgressTracker_t375__CustomAttributeCache_lookAheadForTargetFactor;
FieldInfo WaypointProgressTracker_t375____lookAheadForTargetFactor_4_FieldInfo = 
{
	"lookAheadForTargetFactor"/* name */
	, &Single_t448_0_0_1/* type */
	, &WaypointProgressTracker_t375_il2cpp_TypeInfo/* parent */
	, offsetof(WaypointProgressTracker_t375, ___lookAheadForTargetFactor_4)/* data */
	, &WaypointProgressTracker_t375__CustomAttributeCache_lookAheadForTargetFactor/* custom_attributes_cache */

};
extern Il2CppType Single_t448_0_0_1;
extern CustomAttributesCache WaypointProgressTracker_t375__CustomAttributeCache_lookAheadForSpeedOffset;
FieldInfo WaypointProgressTracker_t375____lookAheadForSpeedOffset_5_FieldInfo = 
{
	"lookAheadForSpeedOffset"/* name */
	, &Single_t448_0_0_1/* type */
	, &WaypointProgressTracker_t375_il2cpp_TypeInfo/* parent */
	, offsetof(WaypointProgressTracker_t375, ___lookAheadForSpeedOffset_5)/* data */
	, &WaypointProgressTracker_t375__CustomAttributeCache_lookAheadForSpeedOffset/* custom_attributes_cache */

};
extern Il2CppType Single_t448_0_0_1;
extern CustomAttributesCache WaypointProgressTracker_t375__CustomAttributeCache_lookAheadForSpeedFactor;
FieldInfo WaypointProgressTracker_t375____lookAheadForSpeedFactor_6_FieldInfo = 
{
	"lookAheadForSpeedFactor"/* name */
	, &Single_t448_0_0_1/* type */
	, &WaypointProgressTracker_t375_il2cpp_TypeInfo/* parent */
	, offsetof(WaypointProgressTracker_t375, ___lookAheadForSpeedFactor_6)/* data */
	, &WaypointProgressTracker_t375__CustomAttributeCache_lookAheadForSpeedFactor/* custom_attributes_cache */

};
extern Il2CppType ProgressStyle_t374_0_0_1;
extern CustomAttributesCache WaypointProgressTracker_t375__CustomAttributeCache_progressStyle;
FieldInfo WaypointProgressTracker_t375____progressStyle_7_FieldInfo = 
{
	"progressStyle"/* name */
	, &ProgressStyle_t374_0_0_1/* type */
	, &WaypointProgressTracker_t375_il2cpp_TypeInfo/* parent */
	, offsetof(WaypointProgressTracker_t375, ___progressStyle_7)/* data */
	, &WaypointProgressTracker_t375__CustomAttributeCache_progressStyle/* custom_attributes_cache */

};
extern Il2CppType Single_t448_0_0_1;
extern CustomAttributesCache WaypointProgressTracker_t375__CustomAttributeCache_pointToPointThreshold;
FieldInfo WaypointProgressTracker_t375____pointToPointThreshold_8_FieldInfo = 
{
	"pointToPointThreshold"/* name */
	, &Single_t448_0_0_1/* type */
	, &WaypointProgressTracker_t375_il2cpp_TypeInfo/* parent */
	, offsetof(WaypointProgressTracker_t375, ___pointToPointThreshold_8)/* data */
	, &WaypointProgressTracker_t375__CustomAttributeCache_pointToPointThreshold/* custom_attributes_cache */

};
extern Il2CppType Transform_t173_0_0_6;
FieldInfo WaypointProgressTracker_t375____target_9_FieldInfo = 
{
	"target"/* name */
	, &Transform_t173_0_0_6/* type */
	, &WaypointProgressTracker_t375_il2cpp_TypeInfo/* parent */
	, offsetof(WaypointProgressTracker_t375, ___target_9)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Single_t448_0_0_1;
FieldInfo WaypointProgressTracker_t375____progressDistance_10_FieldInfo = 
{
	"progressDistance"/* name */
	, &Single_t448_0_0_1/* type */
	, &WaypointProgressTracker_t375_il2cpp_TypeInfo/* parent */
	, offsetof(WaypointProgressTracker_t375, ___progressDistance_10)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t386_0_0_1;
FieldInfo WaypointProgressTracker_t375____progressNum_11_FieldInfo = 
{
	"progressNum"/* name */
	, &Int32_t386_0_0_1/* type */
	, &WaypointProgressTracker_t375_il2cpp_TypeInfo/* parent */
	, offsetof(WaypointProgressTracker_t375, ___progressNum_11)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Vector3_t175_0_0_1;
FieldInfo WaypointProgressTracker_t375____lastPosition_12_FieldInfo = 
{
	"lastPosition"/* name */
	, &Vector3_t175_0_0_1/* type */
	, &WaypointProgressTracker_t375_il2cpp_TypeInfo/* parent */
	, offsetof(WaypointProgressTracker_t375, ___lastPosition_12)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Single_t448_0_0_1;
FieldInfo WaypointProgressTracker_t375____speed_13_FieldInfo = 
{
	"speed"/* name */
	, &Single_t448_0_0_1/* type */
	, &WaypointProgressTracker_t375_il2cpp_TypeInfo/* parent */
	, offsetof(WaypointProgressTracker_t375, ___speed_13)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType RoutePoint_t371_0_0_1;
extern CustomAttributesCache WaypointProgressTracker_t375__CustomAttributeCache_U3CtargetPointU3Ek__BackingField;
FieldInfo WaypointProgressTracker_t375____U3CtargetPointU3Ek__BackingField_14_FieldInfo = 
{
	"<targetPoint>k__BackingField"/* name */
	, &RoutePoint_t371_0_0_1/* type */
	, &WaypointProgressTracker_t375_il2cpp_TypeInfo/* parent */
	, offsetof(WaypointProgressTracker_t375, ___U3CtargetPointU3Ek__BackingField_14)/* data */
	, &WaypointProgressTracker_t375__CustomAttributeCache_U3CtargetPointU3Ek__BackingField/* custom_attributes_cache */

};
extern Il2CppType RoutePoint_t371_0_0_1;
extern CustomAttributesCache WaypointProgressTracker_t375__CustomAttributeCache_U3CspeedPointU3Ek__BackingField;
FieldInfo WaypointProgressTracker_t375____U3CspeedPointU3Ek__BackingField_15_FieldInfo = 
{
	"<speedPoint>k__BackingField"/* name */
	, &RoutePoint_t371_0_0_1/* type */
	, &WaypointProgressTracker_t375_il2cpp_TypeInfo/* parent */
	, offsetof(WaypointProgressTracker_t375, ___U3CspeedPointU3Ek__BackingField_15)/* data */
	, &WaypointProgressTracker_t375__CustomAttributeCache_U3CspeedPointU3Ek__BackingField/* custom_attributes_cache */

};
extern Il2CppType RoutePoint_t371_0_0_1;
extern CustomAttributesCache WaypointProgressTracker_t375__CustomAttributeCache_U3CprogressPointU3Ek__BackingField;
FieldInfo WaypointProgressTracker_t375____U3CprogressPointU3Ek__BackingField_16_FieldInfo = 
{
	"<progressPoint>k__BackingField"/* name */
	, &RoutePoint_t371_0_0_1/* type */
	, &WaypointProgressTracker_t375_il2cpp_TypeInfo/* parent */
	, offsetof(WaypointProgressTracker_t375, ___U3CprogressPointU3Ek__BackingField_16)/* data */
	, &WaypointProgressTracker_t375__CustomAttributeCache_U3CprogressPointU3Ek__BackingField/* custom_attributes_cache */

};
static FieldInfo* WaypointProgressTracker_t375_FieldInfos[] =
{
	&WaypointProgressTracker_t375____circuit_2_FieldInfo,
	&WaypointProgressTracker_t375____lookAheadForTargetOffset_3_FieldInfo,
	&WaypointProgressTracker_t375____lookAheadForTargetFactor_4_FieldInfo,
	&WaypointProgressTracker_t375____lookAheadForSpeedOffset_5_FieldInfo,
	&WaypointProgressTracker_t375____lookAheadForSpeedFactor_6_FieldInfo,
	&WaypointProgressTracker_t375____progressStyle_7_FieldInfo,
	&WaypointProgressTracker_t375____pointToPointThreshold_8_FieldInfo,
	&WaypointProgressTracker_t375____target_9_FieldInfo,
	&WaypointProgressTracker_t375____progressDistance_10_FieldInfo,
	&WaypointProgressTracker_t375____progressNum_11_FieldInfo,
	&WaypointProgressTracker_t375____lastPosition_12_FieldInfo,
	&WaypointProgressTracker_t375____speed_13_FieldInfo,
	&WaypointProgressTracker_t375____U3CtargetPointU3Ek__BackingField_14_FieldInfo,
	&WaypointProgressTracker_t375____U3CspeedPointU3Ek__BackingField_15_FieldInfo,
	&WaypointProgressTracker_t375____U3CprogressPointU3Ek__BackingField_16_FieldInfo,
	NULL
};
static PropertyInfo WaypointProgressTracker_t375____targetPoint_PropertyInfo = 
{
	&WaypointProgressTracker_t375_il2cpp_TypeInfo/* parent */
	, "targetPoint"/* name */
	, &WaypointProgressTracker_get_targetPoint_m1241_MethodInfo/* get */
	, &WaypointProgressTracker_set_targetPoint_m1242_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo WaypointProgressTracker_t375____speedPoint_PropertyInfo = 
{
	&WaypointProgressTracker_t375_il2cpp_TypeInfo/* parent */
	, "speedPoint"/* name */
	, &WaypointProgressTracker_get_speedPoint_m1243_MethodInfo/* get */
	, &WaypointProgressTracker_set_speedPoint_m1244_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo WaypointProgressTracker_t375____progressPoint_PropertyInfo = 
{
	&WaypointProgressTracker_t375_il2cpp_TypeInfo/* parent */
	, "progressPoint"/* name */
	, &WaypointProgressTracker_get_progressPoint_m1245_MethodInfo/* get */
	, &WaypointProgressTracker_set_progressPoint_m1246_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* WaypointProgressTracker_t375_PropertyInfos[] =
{
	&WaypointProgressTracker_t375____targetPoint_PropertyInfo,
	&WaypointProgressTracker_t375____speedPoint_PropertyInfo,
	&WaypointProgressTracker_t375____progressPoint_PropertyInfo,
	NULL
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
// System.Void UnityStandardAssets.Utility.WaypointProgressTracker::.ctor()
MethodInfo WaypointProgressTracker__ctor_m1240_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&WaypointProgressTracker__ctor_m1240/* method */
	, &WaypointProgressTracker_t375_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1335/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType RoutePoint_t371_0_0_0;
extern void* RuntimeInvoker_RoutePoint_t371 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache WaypointProgressTracker_t375__CustomAttributeCache_WaypointProgressTracker_get_targetPoint_m1241;
// UnityStandardAssets.Utility.WaypointCircuit/RoutePoint UnityStandardAssets.Utility.WaypointProgressTracker::get_targetPoint()
MethodInfo WaypointProgressTracker_get_targetPoint_m1241_MethodInfo = 
{
	"get_targetPoint"/* name */
	, (methodPointerType)&WaypointProgressTracker_get_targetPoint_m1241/* method */
	, &WaypointProgressTracker_t375_il2cpp_TypeInfo/* declaring_type */
	, &RoutePoint_t371_0_0_0/* return_type */
	, RuntimeInvoker_RoutePoint_t371/* invoker_method */
	, NULL/* parameters */
	, &WaypointProgressTracker_t375__CustomAttributeCache_WaypointProgressTracker_get_targetPoint_m1241/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1336/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType RoutePoint_t371_0_0_0;
static ParameterInfo WaypointProgressTracker_t375_WaypointProgressTracker_set_targetPoint_m1242_ParameterInfos[] = 
{
	{"value", 0, 134218789, &EmptyCustomAttributesCache, &RoutePoint_t371_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_RoutePoint_t371 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache WaypointProgressTracker_t375__CustomAttributeCache_WaypointProgressTracker_set_targetPoint_m1242;
// System.Void UnityStandardAssets.Utility.WaypointProgressTracker::set_targetPoint(UnityStandardAssets.Utility.WaypointCircuit/RoutePoint)
MethodInfo WaypointProgressTracker_set_targetPoint_m1242_MethodInfo = 
{
	"set_targetPoint"/* name */
	, (methodPointerType)&WaypointProgressTracker_set_targetPoint_m1242/* method */
	, &WaypointProgressTracker_t375_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_RoutePoint_t371/* invoker_method */
	, WaypointProgressTracker_t375_WaypointProgressTracker_set_targetPoint_m1242_ParameterInfos/* parameters */
	, &WaypointProgressTracker_t375__CustomAttributeCache_WaypointProgressTracker_set_targetPoint_m1242/* custom_attributes_cache */
	, 2177/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1337/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType RoutePoint_t371_0_0_0;
extern void* RuntimeInvoker_RoutePoint_t371 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache WaypointProgressTracker_t375__CustomAttributeCache_WaypointProgressTracker_get_speedPoint_m1243;
// UnityStandardAssets.Utility.WaypointCircuit/RoutePoint UnityStandardAssets.Utility.WaypointProgressTracker::get_speedPoint()
MethodInfo WaypointProgressTracker_get_speedPoint_m1243_MethodInfo = 
{
	"get_speedPoint"/* name */
	, (methodPointerType)&WaypointProgressTracker_get_speedPoint_m1243/* method */
	, &WaypointProgressTracker_t375_il2cpp_TypeInfo/* declaring_type */
	, &RoutePoint_t371_0_0_0/* return_type */
	, RuntimeInvoker_RoutePoint_t371/* invoker_method */
	, NULL/* parameters */
	, &WaypointProgressTracker_t375__CustomAttributeCache_WaypointProgressTracker_get_speedPoint_m1243/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1338/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType RoutePoint_t371_0_0_0;
static ParameterInfo WaypointProgressTracker_t375_WaypointProgressTracker_set_speedPoint_m1244_ParameterInfos[] = 
{
	{"value", 0, 134218790, &EmptyCustomAttributesCache, &RoutePoint_t371_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_RoutePoint_t371 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache WaypointProgressTracker_t375__CustomAttributeCache_WaypointProgressTracker_set_speedPoint_m1244;
// System.Void UnityStandardAssets.Utility.WaypointProgressTracker::set_speedPoint(UnityStandardAssets.Utility.WaypointCircuit/RoutePoint)
MethodInfo WaypointProgressTracker_set_speedPoint_m1244_MethodInfo = 
{
	"set_speedPoint"/* name */
	, (methodPointerType)&WaypointProgressTracker_set_speedPoint_m1244/* method */
	, &WaypointProgressTracker_t375_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_RoutePoint_t371/* invoker_method */
	, WaypointProgressTracker_t375_WaypointProgressTracker_set_speedPoint_m1244_ParameterInfos/* parameters */
	, &WaypointProgressTracker_t375__CustomAttributeCache_WaypointProgressTracker_set_speedPoint_m1244/* custom_attributes_cache */
	, 2177/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1339/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType RoutePoint_t371_0_0_0;
extern void* RuntimeInvoker_RoutePoint_t371 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache WaypointProgressTracker_t375__CustomAttributeCache_WaypointProgressTracker_get_progressPoint_m1245;
// UnityStandardAssets.Utility.WaypointCircuit/RoutePoint UnityStandardAssets.Utility.WaypointProgressTracker::get_progressPoint()
MethodInfo WaypointProgressTracker_get_progressPoint_m1245_MethodInfo = 
{
	"get_progressPoint"/* name */
	, (methodPointerType)&WaypointProgressTracker_get_progressPoint_m1245/* method */
	, &WaypointProgressTracker_t375_il2cpp_TypeInfo/* declaring_type */
	, &RoutePoint_t371_0_0_0/* return_type */
	, RuntimeInvoker_RoutePoint_t371/* invoker_method */
	, NULL/* parameters */
	, &WaypointProgressTracker_t375__CustomAttributeCache_WaypointProgressTracker_get_progressPoint_m1245/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1340/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType RoutePoint_t371_0_0_0;
static ParameterInfo WaypointProgressTracker_t375_WaypointProgressTracker_set_progressPoint_m1246_ParameterInfos[] = 
{
	{"value", 0, 134218791, &EmptyCustomAttributesCache, &RoutePoint_t371_0_0_0},
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30_RoutePoint_t371 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache WaypointProgressTracker_t375__CustomAttributeCache_WaypointProgressTracker_set_progressPoint_m1246;
// System.Void UnityStandardAssets.Utility.WaypointProgressTracker::set_progressPoint(UnityStandardAssets.Utility.WaypointCircuit/RoutePoint)
MethodInfo WaypointProgressTracker_set_progressPoint_m1246_MethodInfo = 
{
	"set_progressPoint"/* name */
	, (methodPointerType)&WaypointProgressTracker_set_progressPoint_m1246/* method */
	, &WaypointProgressTracker_t375_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30_RoutePoint_t371/* invoker_method */
	, WaypointProgressTracker_t375_WaypointProgressTracker_set_progressPoint_m1246_ParameterInfos/* parameters */
	, &WaypointProgressTracker_t375__CustomAttributeCache_WaypointProgressTracker_set_progressPoint_m1246/* custom_attributes_cache */
	, 2177/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1341/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
// System.Void UnityStandardAssets.Utility.WaypointProgressTracker::Start()
MethodInfo WaypointProgressTracker_Start_m1247_MethodInfo = 
{
	"Start"/* name */
	, (methodPointerType)&WaypointProgressTracker_Start_m1247/* method */
	, &WaypointProgressTracker_t375_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1342/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
// System.Void UnityStandardAssets.Utility.WaypointProgressTracker::Reset()
MethodInfo WaypointProgressTracker_Reset_m1248_MethodInfo = 
{
	"Reset"/* name */
	, (methodPointerType)&WaypointProgressTracker_Reset_m1248/* method */
	, &WaypointProgressTracker_t375_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1343/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
// System.Void UnityStandardAssets.Utility.WaypointProgressTracker::Update()
MethodInfo WaypointProgressTracker_Update_m1249_MethodInfo = 
{
	"Update"/* name */
	, (methodPointerType)&WaypointProgressTracker_Update_m1249/* method */
	, &WaypointProgressTracker_t375_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1344/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
// System.Void UnityStandardAssets.Utility.WaypointProgressTracker::OnDrawGizmos()
MethodInfo WaypointProgressTracker_OnDrawGizmos_m1250_MethodInfo = 
{
	"OnDrawGizmos"/* name */
	, (methodPointerType)&WaypointProgressTracker_OnDrawGizmos_m1250/* method */
	, &WaypointProgressTracker_t375_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1345/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* WaypointProgressTracker_t375_MethodInfos[] =
{
	&WaypointProgressTracker__ctor_m1240_MethodInfo,
	&WaypointProgressTracker_get_targetPoint_m1241_MethodInfo,
	&WaypointProgressTracker_set_targetPoint_m1242_MethodInfo,
	&WaypointProgressTracker_get_speedPoint_m1243_MethodInfo,
	&WaypointProgressTracker_set_speedPoint_m1244_MethodInfo,
	&WaypointProgressTracker_get_progressPoint_m1245_MethodInfo,
	&WaypointProgressTracker_set_progressPoint_m1246_MethodInfo,
	&WaypointProgressTracker_Start_m1247_MethodInfo,
	&WaypointProgressTracker_Reset_m1248_MethodInfo,
	&WaypointProgressTracker_Update_m1249_MethodInfo,
	&WaypointProgressTracker_OnDrawGizmos_m1250_MethodInfo,
	NULL
};
extern TypeInfo ProgressStyle_t374_il2cpp_TypeInfo;
static TypeInfo* WaypointProgressTracker_t375_il2cpp_TypeInfo__nestedTypes[2] =
{
	&ProgressStyle_t374_il2cpp_TypeInfo,
	NULL
};
static MethodInfo* WaypointProgressTracker_t375_VTable[] =
{
	&Object_Equals_m1333_MethodInfo,
	&Object_Finalize_m1253_MethodInfo,
	&Object_GetHashCode_m1334_MethodInfo,
	&Object_ToString_m1335_MethodInfo,
};
void WaypointProgressTracker_t375_CustomAttributesCacheGenerator_circuit(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t400 * tmp;
		tmp = (SerializeField_t400 *)il2cpp_codegen_object_new (&SerializeField_t400_il2cpp_TypeInfo);
		SerializeField__ctor_m1336(tmp, &SerializeField__ctor_m1336_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void WaypointProgressTracker_t375_CustomAttributesCacheGenerator_lookAheadForTargetOffset(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t400 * tmp;
		tmp = (SerializeField_t400 *)il2cpp_codegen_object_new (&SerializeField_t400_il2cpp_TypeInfo);
		SerializeField__ctor_m1336(tmp, &SerializeField__ctor_m1336_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void WaypointProgressTracker_t375_CustomAttributesCacheGenerator_lookAheadForTargetFactor(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t400 * tmp;
		tmp = (SerializeField_t400 *)il2cpp_codegen_object_new (&SerializeField_t400_il2cpp_TypeInfo);
		SerializeField__ctor_m1336(tmp, &SerializeField__ctor_m1336_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void WaypointProgressTracker_t375_CustomAttributesCacheGenerator_lookAheadForSpeedOffset(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t400 * tmp;
		tmp = (SerializeField_t400 *)il2cpp_codegen_object_new (&SerializeField_t400_il2cpp_TypeInfo);
		SerializeField__ctor_m1336(tmp, &SerializeField__ctor_m1336_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void WaypointProgressTracker_t375_CustomAttributesCacheGenerator_lookAheadForSpeedFactor(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t400 * tmp;
		tmp = (SerializeField_t400 *)il2cpp_codegen_object_new (&SerializeField_t400_il2cpp_TypeInfo);
		SerializeField__ctor_m1336(tmp, &SerializeField__ctor_m1336_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void WaypointProgressTracker_t375_CustomAttributesCacheGenerator_progressStyle(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t400 * tmp;
		tmp = (SerializeField_t400 *)il2cpp_codegen_object_new (&SerializeField_t400_il2cpp_TypeInfo);
		SerializeField__ctor_m1336(tmp, &SerializeField__ctor_m1336_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void WaypointProgressTracker_t375_CustomAttributesCacheGenerator_pointToPointThreshold(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t400 * tmp;
		tmp = (SerializeField_t400 *)il2cpp_codegen_object_new (&SerializeField_t400_il2cpp_TypeInfo);
		SerializeField__ctor_m1336(tmp, &SerializeField__ctor_m1336_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void WaypointProgressTracker_t375_CustomAttributesCacheGenerator_U3CtargetPointU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t384 * tmp;
		tmp = (CompilerGeneratedAttribute_t384 *)il2cpp_codegen_object_new (&CompilerGeneratedAttribute_t384_il2cpp_TypeInfo);
		CompilerGeneratedAttribute__ctor_m1269(tmp, &CompilerGeneratedAttribute__ctor_m1269_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void WaypointProgressTracker_t375_CustomAttributesCacheGenerator_U3CspeedPointU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t384 * tmp;
		tmp = (CompilerGeneratedAttribute_t384 *)il2cpp_codegen_object_new (&CompilerGeneratedAttribute_t384_il2cpp_TypeInfo);
		CompilerGeneratedAttribute__ctor_m1269(tmp, &CompilerGeneratedAttribute__ctor_m1269_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void WaypointProgressTracker_t375_CustomAttributesCacheGenerator_U3CprogressPointU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t384 * tmp;
		tmp = (CompilerGeneratedAttribute_t384 *)il2cpp_codegen_object_new (&CompilerGeneratedAttribute_t384_il2cpp_TypeInfo);
		CompilerGeneratedAttribute__ctor_m1269(tmp, &CompilerGeneratedAttribute__ctor_m1269_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void WaypointProgressTracker_t375_CustomAttributesCacheGenerator_WaypointProgressTracker_get_targetPoint_m1241(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t384 * tmp;
		tmp = (CompilerGeneratedAttribute_t384 *)il2cpp_codegen_object_new (&CompilerGeneratedAttribute_t384_il2cpp_TypeInfo);
		CompilerGeneratedAttribute__ctor_m1269(tmp, &CompilerGeneratedAttribute__ctor_m1269_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void WaypointProgressTracker_t375_CustomAttributesCacheGenerator_WaypointProgressTracker_set_targetPoint_m1242(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t384 * tmp;
		tmp = (CompilerGeneratedAttribute_t384 *)il2cpp_codegen_object_new (&CompilerGeneratedAttribute_t384_il2cpp_TypeInfo);
		CompilerGeneratedAttribute__ctor_m1269(tmp, &CompilerGeneratedAttribute__ctor_m1269_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void WaypointProgressTracker_t375_CustomAttributesCacheGenerator_WaypointProgressTracker_get_speedPoint_m1243(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t384 * tmp;
		tmp = (CompilerGeneratedAttribute_t384 *)il2cpp_codegen_object_new (&CompilerGeneratedAttribute_t384_il2cpp_TypeInfo);
		CompilerGeneratedAttribute__ctor_m1269(tmp, &CompilerGeneratedAttribute__ctor_m1269_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void WaypointProgressTracker_t375_CustomAttributesCacheGenerator_WaypointProgressTracker_set_speedPoint_m1244(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t384 * tmp;
		tmp = (CompilerGeneratedAttribute_t384 *)il2cpp_codegen_object_new (&CompilerGeneratedAttribute_t384_il2cpp_TypeInfo);
		CompilerGeneratedAttribute__ctor_m1269(tmp, &CompilerGeneratedAttribute__ctor_m1269_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void WaypointProgressTracker_t375_CustomAttributesCacheGenerator_WaypointProgressTracker_get_progressPoint_m1245(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t384 * tmp;
		tmp = (CompilerGeneratedAttribute_t384 *)il2cpp_codegen_object_new (&CompilerGeneratedAttribute_t384_il2cpp_TypeInfo);
		CompilerGeneratedAttribute__ctor_m1269(tmp, &CompilerGeneratedAttribute__ctor_m1269_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void WaypointProgressTracker_t375_CustomAttributesCacheGenerator_WaypointProgressTracker_set_progressPoint_m1246(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t384 * tmp;
		tmp = (CompilerGeneratedAttribute_t384 *)il2cpp_codegen_object_new (&CompilerGeneratedAttribute_t384_il2cpp_TypeInfo);
		CompilerGeneratedAttribute__ctor_m1269(tmp, &CompilerGeneratedAttribute__ctor_m1269_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache WaypointProgressTracker_t375__CustomAttributeCache_circuit = {
1,
NULL,
&WaypointProgressTracker_t375_CustomAttributesCacheGenerator_circuit
};
CustomAttributesCache WaypointProgressTracker_t375__CustomAttributeCache_lookAheadForTargetOffset = {
1,
NULL,
&WaypointProgressTracker_t375_CustomAttributesCacheGenerator_lookAheadForTargetOffset
};
CustomAttributesCache WaypointProgressTracker_t375__CustomAttributeCache_lookAheadForTargetFactor = {
1,
NULL,
&WaypointProgressTracker_t375_CustomAttributesCacheGenerator_lookAheadForTargetFactor
};
CustomAttributesCache WaypointProgressTracker_t375__CustomAttributeCache_lookAheadForSpeedOffset = {
1,
NULL,
&WaypointProgressTracker_t375_CustomAttributesCacheGenerator_lookAheadForSpeedOffset
};
CustomAttributesCache WaypointProgressTracker_t375__CustomAttributeCache_lookAheadForSpeedFactor = {
1,
NULL,
&WaypointProgressTracker_t375_CustomAttributesCacheGenerator_lookAheadForSpeedFactor
};
CustomAttributesCache WaypointProgressTracker_t375__CustomAttributeCache_progressStyle = {
1,
NULL,
&WaypointProgressTracker_t375_CustomAttributesCacheGenerator_progressStyle
};
CustomAttributesCache WaypointProgressTracker_t375__CustomAttributeCache_pointToPointThreshold = {
1,
NULL,
&WaypointProgressTracker_t375_CustomAttributesCacheGenerator_pointToPointThreshold
};
CustomAttributesCache WaypointProgressTracker_t375__CustomAttributeCache_U3CtargetPointU3Ek__BackingField = {
1,
NULL,
&WaypointProgressTracker_t375_CustomAttributesCacheGenerator_U3CtargetPointU3Ek__BackingField
};
CustomAttributesCache WaypointProgressTracker_t375__CustomAttributeCache_U3CspeedPointU3Ek__BackingField = {
1,
NULL,
&WaypointProgressTracker_t375_CustomAttributesCacheGenerator_U3CspeedPointU3Ek__BackingField
};
CustomAttributesCache WaypointProgressTracker_t375__CustomAttributeCache_U3CprogressPointU3Ek__BackingField = {
1,
NULL,
&WaypointProgressTracker_t375_CustomAttributesCacheGenerator_U3CprogressPointU3Ek__BackingField
};
CustomAttributesCache WaypointProgressTracker_t375__CustomAttributeCache_WaypointProgressTracker_get_targetPoint_m1241 = {
1,
NULL,
&WaypointProgressTracker_t375_CustomAttributesCacheGenerator_WaypointProgressTracker_get_targetPoint_m1241
};
CustomAttributesCache WaypointProgressTracker_t375__CustomAttributeCache_WaypointProgressTracker_set_targetPoint_m1242 = {
1,
NULL,
&WaypointProgressTracker_t375_CustomAttributesCacheGenerator_WaypointProgressTracker_set_targetPoint_m1242
};
CustomAttributesCache WaypointProgressTracker_t375__CustomAttributeCache_WaypointProgressTracker_get_speedPoint_m1243 = {
1,
NULL,
&WaypointProgressTracker_t375_CustomAttributesCacheGenerator_WaypointProgressTracker_get_speedPoint_m1243
};
CustomAttributesCache WaypointProgressTracker_t375__CustomAttributeCache_WaypointProgressTracker_set_speedPoint_m1244 = {
1,
NULL,
&WaypointProgressTracker_t375_CustomAttributesCacheGenerator_WaypointProgressTracker_set_speedPoint_m1244
};
CustomAttributesCache WaypointProgressTracker_t375__CustomAttributeCache_WaypointProgressTracker_get_progressPoint_m1245 = {
1,
NULL,
&WaypointProgressTracker_t375_CustomAttributesCacheGenerator_WaypointProgressTracker_get_progressPoint_m1245
};
CustomAttributesCache WaypointProgressTracker_t375__CustomAttributeCache_WaypointProgressTracker_set_progressPoint_m1246 = {
1,
NULL,
&WaypointProgressTracker_t375_CustomAttributesCacheGenerator_WaypointProgressTracker_set_progressPoint_m1246
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType WaypointProgressTracker_t375_0_0_0;
extern Il2CppType WaypointProgressTracker_t375_1_0_0;
struct WaypointProgressTracker_t375;
extern CustomAttributesCache WaypointProgressTracker_t375__CustomAttributeCache_circuit;
extern CustomAttributesCache WaypointProgressTracker_t375__CustomAttributeCache_lookAheadForTargetOffset;
extern CustomAttributesCache WaypointProgressTracker_t375__CustomAttributeCache_lookAheadForTargetFactor;
extern CustomAttributesCache WaypointProgressTracker_t375__CustomAttributeCache_lookAheadForSpeedOffset;
extern CustomAttributesCache WaypointProgressTracker_t375__CustomAttributeCache_lookAheadForSpeedFactor;
extern CustomAttributesCache WaypointProgressTracker_t375__CustomAttributeCache_progressStyle;
extern CustomAttributesCache WaypointProgressTracker_t375__CustomAttributeCache_pointToPointThreshold;
extern CustomAttributesCache WaypointProgressTracker_t375__CustomAttributeCache_U3CtargetPointU3Ek__BackingField;
extern CustomAttributesCache WaypointProgressTracker_t375__CustomAttributeCache_U3CspeedPointU3Ek__BackingField;
extern CustomAttributesCache WaypointProgressTracker_t375__CustomAttributeCache_U3CprogressPointU3Ek__BackingField;
extern CustomAttributesCache WaypointProgressTracker_t375__CustomAttributeCache_WaypointProgressTracker_get_targetPoint_m1241;
extern CustomAttributesCache WaypointProgressTracker_t375__CustomAttributeCache_WaypointProgressTracker_set_targetPoint_m1242;
extern CustomAttributesCache WaypointProgressTracker_t375__CustomAttributeCache_WaypointProgressTracker_get_speedPoint_m1243;
extern CustomAttributesCache WaypointProgressTracker_t375__CustomAttributeCache_WaypointProgressTracker_set_speedPoint_m1244;
extern CustomAttributesCache WaypointProgressTracker_t375__CustomAttributeCache_WaypointProgressTracker_get_progressPoint_m1245;
extern CustomAttributesCache WaypointProgressTracker_t375__CustomAttributeCache_WaypointProgressTracker_set_progressPoint_m1246;
TypeInfo WaypointProgressTracker_t375_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image/* image */
	, NULL/* gc_desc */
	, "WaypointProgressTracker"/* name */
	, "UnityStandardAssets.Utility"/* namespaze */
	, WaypointProgressTracker_t375_MethodInfos/* methods */
	, WaypointProgressTracker_t375_PropertyInfos/* properties */
	, WaypointProgressTracker_t375_FieldInfos/* fields */
	, NULL/* events */
	, &MonoBehaviour_t39_il2cpp_TypeInfo/* parent */
	, WaypointProgressTracker_t375_il2cpp_TypeInfo__nestedTypes/* nested_types */
	, NULL/* nested_in */
	, &WaypointProgressTracker_t375_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, WaypointProgressTracker_t375_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &WaypointProgressTracker_t375_il2cpp_TypeInfo/* cast_class */
	, &WaypointProgressTracker_t375_0_0_0/* byval_arg */
	, &WaypointProgressTracker_t375_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (WaypointProgressTracker_t375)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048577/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 11/* method_count */
	, 3/* property_count */
	, 15/* field_count */
	, 0/* event_count */
	, 1/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo $ArrayType$8_t376_il2cpp_TypeInfo;



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$8
void $ArrayType$8_t376_marshal(const $ArrayType$8_t376& unmarshaled, $ArrayType$8_t376_marshaled& marshaled)
{
}
void $ArrayType$8_t376_marshal_back(const $ArrayType$8_t376_marshaled& marshaled, $ArrayType$8_t376& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$8
void $ArrayType$8_t376_marshal_cleanup($ArrayType$8_t376_marshaled& marshaled)
{
}
// Metadata Definition <PrivateImplementationDetails>/$ArrayType$8
static MethodInfo* $ArrayType$8_t376_MethodInfos[] =
{
	NULL
};
static MethodInfo* $ArrayType$8_t376_VTable[] =
{
	&ValueType_Equals_m2156_MethodInfo,
	&Object_Finalize_m1253_MethodInfo,
	&ValueType_GetHashCode_m2157_MethodInfo,
	&ValueType_ToString_m2158_MethodInfo,
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType $ArrayType$8_t376_0_0_0;
extern Il2CppType $ArrayType$8_t376_1_0_0;
extern TypeInfo U3CPrivateImplementationDetailsU3E_t377_il2cpp_TypeInfo;
TypeInfo $ArrayType$8_t376_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$8"/* name */
	, ""/* namespaze */
	, $ArrayType$8_t376_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &ValueType_t550_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &U3CPrivateImplementationDetailsU3E_t377_il2cpp_TypeInfo/* nested_in */
	, &$ArrayType$8_t376_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, $ArrayType$8_t376_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &$ArrayType$8_t376_il2cpp_TypeInfo/* cast_class */
	, &$ArrayType$8_t376_0_0_0/* byval_arg */
	, &$ArrayType$8_t376_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)$ArrayType$8_t376_marshal/* marshal_to_native_func */
	, (methodPointerType)$ArrayType$8_t376_marshal_back/* marshal_from_native_func */
	, (methodPointerType)$ArrayType$8_t376_marshal_cleanup/* marshal_cleanup_func */
	, sizeof ($ArrayType$8_t376)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, sizeof($ArrayType$8_t376_marshaled)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 275/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 0/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Void <PrivateImplementationDetails>::.ctor()
extern MethodInfo U3CPrivateImplementationDetailsU3E__ctor_m1251_MethodInfo;
 void U3CPrivateImplementationDetailsU3E__ctor_m1251 (U3CPrivateImplementationDetailsU3E_t377 * __this, MethodInfo* method){
	{
		Object__ctor_m1260(__this, /*hidden argument*/&Object__ctor_m1260_MethodInfo);
		return;
	}
}
// Metadata Definition <PrivateImplementationDetails>
extern Il2CppType $ArrayType$8_t376_0_0_275;
FieldInfo U3CPrivateImplementationDetailsU3E_t377____$$fieldU2D0_0_FieldInfo = 
{
	"$$field-0"/* name */
	, &$ArrayType$8_t376_0_0_275/* type */
	, &U3CPrivateImplementationDetailsU3E_t377_il2cpp_TypeInfo/* parent */
	, offsetof(U3CPrivateImplementationDetailsU3E_t377_StaticFields, ___$$fieldU2D0_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* U3CPrivateImplementationDetailsU3E_t377_FieldInfos[] =
{
	&U3CPrivateImplementationDetailsU3E_t377____$$fieldU2D0_0_FieldInfo,
	NULL
};
static const uint8_t U3CPrivateImplementationDetailsU3E_t377____$$fieldU2D0_0_DefaultValueData[] = { 0x20, 0x0, 0xD, 0x0, 0xA, 0x0, 0x9, 0x0 };
static Il2CppFieldDefaultValueEntry U3CPrivateImplementationDetailsU3E_t377____$$fieldU2D0_0_DefaultValue = 
{
	&U3CPrivateImplementationDetailsU3E_t377____$$fieldU2D0_0_FieldInfo/* field */
	, { (char*)U3CPrivateImplementationDetailsU3E_t377____$$fieldU2D0_0_DefaultValueData, &$ArrayType$8_t376_0_0_0 }/* value */

};
static Il2CppFieldDefaultValueEntry* U3CPrivateImplementationDetailsU3E_t377_FieldDefaultValues[] = 
{
	&U3CPrivateImplementationDetailsU3E_t377____$$fieldU2D0_0_DefaultValue,
	NULL
};
extern Il2CppType Void_t30_0_0_0;
extern void* RuntimeInvoker_Void_t30 (MethodInfo* method, void* obj, void** args);
// System.Void <PrivateImplementationDetails>::.ctor()
MethodInfo U3CPrivateImplementationDetailsU3E__ctor_m1251_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&U3CPrivateImplementationDetailsU3E__ctor_m1251/* method */
	, &U3CPrivateImplementationDetailsU3E_t377_il2cpp_TypeInfo/* declaring_type */
	, &Void_t30_0_0_0/* return_type */
	, RuntimeInvoker_Void_t30/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1346/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* U3CPrivateImplementationDetailsU3E_t377_MethodInfos[] =
{
	&U3CPrivateImplementationDetailsU3E__ctor_m1251_MethodInfo,
	NULL
};
extern TypeInfo $ArrayType$8_t376_il2cpp_TypeInfo;
static TypeInfo* U3CPrivateImplementationDetailsU3E_t377_il2cpp_TypeInfo__nestedTypes[2] =
{
	&$ArrayType$8_t376_il2cpp_TypeInfo,
	NULL
};
static MethodInfo* U3CPrivateImplementationDetailsU3E_t377_VTable[] =
{
	&Object_Equals_m1252_MethodInfo,
	&Object_Finalize_m1253_MethodInfo,
	&Object_GetHashCode_m1254_MethodInfo,
	&Object_ToString_m1255_MethodInfo,
};
void U3CPrivateImplementationDetailsU3E_t377_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t384 * tmp;
		tmp = (CompilerGeneratedAttribute_t384 *)il2cpp_codegen_object_new (&CompilerGeneratedAttribute_t384_il2cpp_TypeInfo);
		CompilerGeneratedAttribute__ctor_m1269(tmp, &CompilerGeneratedAttribute__ctor_m1269_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache U3CPrivateImplementationDetailsU3E_t377__CustomAttributeCache = {
1,
NULL,
&U3CPrivateImplementationDetailsU3E_t377_CustomAttributesCacheGenerator
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType U3CPrivateImplementationDetailsU3E_t377_0_0_0;
extern Il2CppType U3CPrivateImplementationDetailsU3E_t377_1_0_0;
struct U3CPrivateImplementationDetailsU3E_t377;
extern CustomAttributesCache U3CPrivateImplementationDetailsU3E_t377__CustomAttributeCache;
TypeInfo U3CPrivateImplementationDetailsU3E_t377_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image/* image */
	, NULL/* gc_desc */
	, "<PrivateImplementationDetails>"/* name */
	, ""/* namespaze */
	, U3CPrivateImplementationDetailsU3E_t377_MethodInfos/* methods */
	, NULL/* properties */
	, U3CPrivateImplementationDetailsU3E_t377_FieldInfos/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, U3CPrivateImplementationDetailsU3E_t377_il2cpp_TypeInfo__nestedTypes/* nested_types */
	, NULL/* nested_in */
	, &U3CPrivateImplementationDetailsU3E_t377_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, U3CPrivateImplementationDetailsU3E_t377_VTable/* vtable */
	, &U3CPrivateImplementationDetailsU3E_t377__CustomAttributeCache/* custom_attributes_cache */
	, &U3CPrivateImplementationDetailsU3E_t377_il2cpp_TypeInfo/* cast_class */
	, &U3CPrivateImplementationDetailsU3E_t377_0_0_0/* byval_arg */
	, &U3CPrivateImplementationDetailsU3E_t377_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, U3CPrivateImplementationDetailsU3E_t377_FieldDefaultValues/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (U3CPrivateImplementationDetailsU3E_t377)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(U3CPrivateImplementationDetailsU3E_t377_StaticFields)/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 0/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 1/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
