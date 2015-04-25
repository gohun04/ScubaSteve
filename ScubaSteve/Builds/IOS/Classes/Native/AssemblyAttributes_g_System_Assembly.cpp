#include "il2cpp_precompiled_header.h"

extern TypeInfo NeutralResourcesLanguageAttribute_t1458_il2cpp_TypeInfo;
extern MethodInfo NeutralResourcesLanguageAttribute__ctor_m6631_MethodInfo;
extern TypeInfo CLSCompliantAttribute_t1457_il2cpp_TypeInfo;
extern MethodInfo CLSCompliantAttribute__ctor_m6630_MethodInfo;
extern TypeInfo AssemblyInformationalVersionAttribute_t1450_il2cpp_TypeInfo;
extern MethodInfo AssemblyInformationalVersionAttribute__ctor_m6623_MethodInfo;
extern TypeInfo SatelliteContractVersionAttribute_t1451_il2cpp_TypeInfo;
extern MethodInfo SatelliteContractVersionAttribute__ctor_m6624_MethodInfo;
extern TypeInfo AssemblyCopyrightAttribute_t950_il2cpp_TypeInfo;
extern MethodInfo AssemblyCopyrightAttribute__ctor_m4449_MethodInfo;
extern TypeInfo AssemblyProductAttribute_t945_il2cpp_TypeInfo;
extern MethodInfo AssemblyProductAttribute__ctor_m4444_MethodInfo;
extern TypeInfo AssemblyCompanyAttribute_t944_il2cpp_TypeInfo;
extern MethodInfo AssemblyCompanyAttribute__ctor_m4443_MethodInfo;
extern TypeInfo AssemblyDefaultAliasAttribute_t1452_il2cpp_TypeInfo;
extern MethodInfo AssemblyDefaultAliasAttribute__ctor_m6625_MethodInfo;
extern TypeInfo AssemblyDescriptionAttribute_t942_il2cpp_TypeInfo;
extern MethodInfo AssemblyDescriptionAttribute__ctor_m4441_MethodInfo;
extern TypeInfo ComVisibleAttribute_t948_il2cpp_TypeInfo;
extern MethodInfo ComVisibleAttribute__ctor_m4447_MethodInfo;
extern TypeInfo AssemblyTitleAttribute_t941_il2cpp_TypeInfo;
extern MethodInfo AssemblyTitleAttribute__ctor_m4440_MethodInfo;
extern TypeInfo RuntimeCompatibilityAttribute_t551_il2cpp_TypeInfo;
extern MethodInfo RuntimeCompatibilityAttribute__ctor_m2164_MethodInfo;
extern MethodInfo RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m2165_MethodInfo;
extern TypeInfo CompilationRelaxationsAttribute_t1454_il2cpp_TypeInfo;
extern MethodInfo CompilationRelaxationsAttribute__ctor_m6627_MethodInfo;
extern TypeInfo DebuggableAttribute_t1453_il2cpp_TypeInfo;
extern MethodInfo DebuggableAttribute__ctor_m6626_MethodInfo;
extern TypeInfo AssemblyDelaySignAttribute_t1456_il2cpp_TypeInfo;
extern MethodInfo AssemblyDelaySignAttribute__ctor_m6629_MethodInfo;
extern TypeInfo AssemblyKeyFileAttribute_t1455_il2cpp_TypeInfo;
extern MethodInfo AssemblyKeyFileAttribute__ctor_m6628_MethodInfo;
extern TypeInfo InternalsVisibleToAttribute_t1063_il2cpp_TypeInfo;
extern MethodInfo InternalsVisibleToAttribute__ctor_m5190_MethodInfo;
extern TypeInfo AssemblyFileVersionAttribute_t946_il2cpp_TypeInfo;
extern MethodInfo AssemblyFileVersionAttribute__ctor_m4445_MethodInfo;
void g_System_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		NeutralResourcesLanguageAttribute_t1458 * tmp;
		tmp = (NeutralResourcesLanguageAttribute_t1458 *)il2cpp_codegen_object_new (&NeutralResourcesLanguageAttribute_t1458_il2cpp_TypeInfo);
		NeutralResourcesLanguageAttribute__ctor_m6631(tmp, il2cpp_codegen_string_new_wrapper("en-US"), &NeutralResourcesLanguageAttribute__ctor_m6631_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		CLSCompliantAttribute_t1457 * tmp;
		tmp = (CLSCompliantAttribute_t1457 *)il2cpp_codegen_object_new (&CLSCompliantAttribute_t1457_il2cpp_TypeInfo);
		CLSCompliantAttribute__ctor_m6630(tmp, true, &CLSCompliantAttribute__ctor_m6630_MethodInfo);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		AssemblyInformationalVersionAttribute_t1450 * tmp;
		tmp = (AssemblyInformationalVersionAttribute_t1450 *)il2cpp_codegen_object_new (&AssemblyInformationalVersionAttribute_t1450_il2cpp_TypeInfo);
		AssemblyInformationalVersionAttribute__ctor_m6623(tmp, il2cpp_codegen_string_new_wrapper("3.0.40818.0"), &AssemblyInformationalVersionAttribute__ctor_m6623_MethodInfo);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		SatelliteContractVersionAttribute_t1451 * tmp;
		tmp = (SatelliteContractVersionAttribute_t1451 *)il2cpp_codegen_object_new (&SatelliteContractVersionAttribute_t1451_il2cpp_TypeInfo);
		SatelliteContractVersionAttribute__ctor_m6624(tmp, il2cpp_codegen_string_new_wrapper("2.0.5.0"), &SatelliteContractVersionAttribute__ctor_m6624_MethodInfo);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		AssemblyCopyrightAttribute_t950 * tmp;
		tmp = (AssemblyCopyrightAttribute_t950 *)il2cpp_codegen_object_new (&AssemblyCopyrightAttribute_t950_il2cpp_TypeInfo);
		AssemblyCopyrightAttribute__ctor_m4449(tmp, il2cpp_codegen_string_new_wrapper("(c) various MONO Authors"), &AssemblyCopyrightAttribute__ctor_m4449_MethodInfo);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
	{
		AssemblyProductAttribute_t945 * tmp;
		tmp = (AssemblyProductAttribute_t945 *)il2cpp_codegen_object_new (&AssemblyProductAttribute_t945_il2cpp_TypeInfo);
		AssemblyProductAttribute__ctor_m4444(tmp, il2cpp_codegen_string_new_wrapper("MONO Common language infrastructure"), &AssemblyProductAttribute__ctor_m4444_MethodInfo);
		cache->attributes[5] = (Il2CppObject*)tmp;
	}
	{
		AssemblyCompanyAttribute_t944 * tmp;
		tmp = (AssemblyCompanyAttribute_t944 *)il2cpp_codegen_object_new (&AssemblyCompanyAttribute_t944_il2cpp_TypeInfo);
		AssemblyCompanyAttribute__ctor_m4443(tmp, il2cpp_codegen_string_new_wrapper("MONO development team"), &AssemblyCompanyAttribute__ctor_m4443_MethodInfo);
		cache->attributes[6] = (Il2CppObject*)tmp;
	}
	{
		AssemblyDefaultAliasAttribute_t1452 * tmp;
		tmp = (AssemblyDefaultAliasAttribute_t1452 *)il2cpp_codegen_object_new (&AssemblyDefaultAliasAttribute_t1452_il2cpp_TypeInfo);
		AssemblyDefaultAliasAttribute__ctor_m6625(tmp, il2cpp_codegen_string_new_wrapper("System.dll"), &AssemblyDefaultAliasAttribute__ctor_m6625_MethodInfo);
		cache->attributes[7] = (Il2CppObject*)tmp;
	}
	{
		AssemblyDescriptionAttribute_t942 * tmp;
		tmp = (AssemblyDescriptionAttribute_t942 *)il2cpp_codegen_object_new (&AssemblyDescriptionAttribute_t942_il2cpp_TypeInfo);
		AssemblyDescriptionAttribute__ctor_m4441(tmp, il2cpp_codegen_string_new_wrapper("System.dll"), &AssemblyDescriptionAttribute__ctor_m4441_MethodInfo);
		cache->attributes[8] = (Il2CppObject*)tmp;
	}
	{
		ComVisibleAttribute_t948 * tmp;
		tmp = (ComVisibleAttribute_t948 *)il2cpp_codegen_object_new (&ComVisibleAttribute_t948_il2cpp_TypeInfo);
		ComVisibleAttribute__ctor_m4447(tmp, false, &ComVisibleAttribute__ctor_m4447_MethodInfo);
		cache->attributes[9] = (Il2CppObject*)tmp;
	}
	{
		AssemblyTitleAttribute_t941 * tmp;
		tmp = (AssemblyTitleAttribute_t941 *)il2cpp_codegen_object_new (&AssemblyTitleAttribute_t941_il2cpp_TypeInfo);
		AssemblyTitleAttribute__ctor_m4440(tmp, il2cpp_codegen_string_new_wrapper("System.dll"), &AssemblyTitleAttribute__ctor_m4440_MethodInfo);
		cache->attributes[10] = (Il2CppObject*)tmp;
	}
	{
		RuntimeCompatibilityAttribute_t551 * tmp;
		tmp = (RuntimeCompatibilityAttribute_t551 *)il2cpp_codegen_object_new (&RuntimeCompatibilityAttribute_t551_il2cpp_TypeInfo);
		RuntimeCompatibilityAttribute__ctor_m2164(tmp, &RuntimeCompatibilityAttribute__ctor_m2164_MethodInfo);
		RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m2165(tmp, true, &RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m2165_MethodInfo);
		cache->attributes[11] = (Il2CppObject*)tmp;
	}
	{
		CompilationRelaxationsAttribute_t1454 * tmp;
		tmp = (CompilationRelaxationsAttribute_t1454 *)il2cpp_codegen_object_new (&CompilationRelaxationsAttribute_t1454_il2cpp_TypeInfo);
		CompilationRelaxationsAttribute__ctor_m6627(tmp, 8, &CompilationRelaxationsAttribute__ctor_m6627_MethodInfo);
		cache->attributes[12] = (Il2CppObject*)tmp;
	}
	{
		DebuggableAttribute_t1453 * tmp;
		tmp = (DebuggableAttribute_t1453 *)il2cpp_codegen_object_new (&DebuggableAttribute_t1453_il2cpp_TypeInfo);
		DebuggableAttribute__ctor_m6626(tmp, 2, &DebuggableAttribute__ctor_m6626_MethodInfo);
		cache->attributes[13] = (Il2CppObject*)tmp;
	}
	{
		AssemblyDelaySignAttribute_t1456 * tmp;
		tmp = (AssemblyDelaySignAttribute_t1456 *)il2cpp_codegen_object_new (&AssemblyDelaySignAttribute_t1456_il2cpp_TypeInfo);
		AssemblyDelaySignAttribute__ctor_m6629(tmp, true, &AssemblyDelaySignAttribute__ctor_m6629_MethodInfo);
		cache->attributes[14] = (Il2CppObject*)tmp;
	}
	{
		AssemblyKeyFileAttribute_t1455 * tmp;
		tmp = (AssemblyKeyFileAttribute_t1455 *)il2cpp_codegen_object_new (&AssemblyKeyFileAttribute_t1455_il2cpp_TypeInfo);
		AssemblyKeyFileAttribute__ctor_m6628(tmp, il2cpp_codegen_string_new_wrapper("../silverlight.pub"), &AssemblyKeyFileAttribute__ctor_m6628_MethodInfo);
		cache->attributes[15] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1063 * tmp;
		tmp = (InternalsVisibleToAttribute_t1063 *)il2cpp_codegen_object_new (&InternalsVisibleToAttribute_t1063_il2cpp_TypeInfo);
		InternalsVisibleToAttribute__ctor_m5190(tmp, il2cpp_codegen_string_new_wrapper("System.Net, PublicKey=00240000048000009400000006020000002400005253413100040000010001008D56C76F9E8649383049F383C44BE0EC204181822A6C31CF5EB7EF486944D032188EA1D3920763712CCB12D75FB77E9811149E6148E5D32FBAAB37611C1878DDC19E20EF135D0CB2CFF2BFEC3D115810C3D9069638FE4BE215DBF795861920E5AB6F7DB2E2CEEF136AC23D5DD2BF031700AEC232F6C6B1C785B4305C123B37AB"), &InternalsVisibleToAttribute__ctor_m5190_MethodInfo);
		cache->attributes[16] = (Il2CppObject*)tmp;
	}
	{
		AssemblyFileVersionAttribute_t946 * tmp;
		tmp = (AssemblyFileVersionAttribute_t946 *)il2cpp_codegen_object_new (&AssemblyFileVersionAttribute_t946_il2cpp_TypeInfo);
		AssemblyFileVersionAttribute__ctor_m4445(tmp, il2cpp_codegen_string_new_wrapper("3.0.40818.0"), &AssemblyFileVersionAttribute__ctor_m4445_MethodInfo);
		cache->attributes[17] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache g_System_Assembly__CustomAttributeCache = {
18,
NULL,
&g_System_Assembly_CustomAttributesCacheGenerator
};
