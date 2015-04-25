#include "il2cpp_precompiled_header.h"

extern TypeInfo RuntimeCompatibilityAttribute_t551_il2cpp_TypeInfo;
extern MethodInfo RuntimeCompatibilityAttribute__ctor_m2164_MethodInfo;
extern MethodInfo RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m2165_MethodInfo;
extern TypeInfo AssemblyTitleAttribute_t941_il2cpp_TypeInfo;
extern MethodInfo AssemblyTitleAttribute__ctor_m4440_MethodInfo;
extern TypeInfo AssemblyDescriptionAttribute_t942_il2cpp_TypeInfo;
extern MethodInfo AssemblyDescriptionAttribute__ctor_m4441_MethodInfo;
extern TypeInfo AssemblyConfigurationAttribute_t943_il2cpp_TypeInfo;
extern MethodInfo AssemblyConfigurationAttribute__ctor_m4442_MethodInfo;
extern TypeInfo AssemblyCompanyAttribute_t944_il2cpp_TypeInfo;
extern MethodInfo AssemblyCompanyAttribute__ctor_m4443_MethodInfo;
extern TypeInfo AssemblyProductAttribute_t945_il2cpp_TypeInfo;
extern MethodInfo AssemblyProductAttribute__ctor_m4444_MethodInfo;
extern TypeInfo InternalsVisibleToAttribute_t1063_il2cpp_TypeInfo;
extern MethodInfo InternalsVisibleToAttribute__ctor_m5190_MethodInfo;
extern TypeInfo AssemblyTrademarkAttribute_t949_il2cpp_TypeInfo;
extern MethodInfo AssemblyTrademarkAttribute__ctor_m4448_MethodInfo;
extern TypeInfo AssemblyCopyrightAttribute_t950_il2cpp_TypeInfo;
extern MethodInfo AssemblyCopyrightAttribute__ctor_m4449_MethodInfo;
void g_UnityEngine_Cloud_Analytics_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		RuntimeCompatibilityAttribute_t551 * tmp;
		tmp = (RuntimeCompatibilityAttribute_t551 *)il2cpp_codegen_object_new (&RuntimeCompatibilityAttribute_t551_il2cpp_TypeInfo);
		RuntimeCompatibilityAttribute__ctor_m2164(tmp, &RuntimeCompatibilityAttribute__ctor_m2164_MethodInfo);
		RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m2165(tmp, true, &RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m2165_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		AssemblyTitleAttribute_t941 * tmp;
		tmp = (AssemblyTitleAttribute_t941 *)il2cpp_codegen_object_new (&AssemblyTitleAttribute_t941_il2cpp_TypeInfo);
		AssemblyTitleAttribute__ctor_m4440(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Cloud.Analytics SDK"), &AssemblyTitleAttribute__ctor_m4440_MethodInfo);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		AssemblyDescriptionAttribute_t942 * tmp;
		tmp = (AssemblyDescriptionAttribute_t942 *)il2cpp_codegen_object_new (&AssemblyDescriptionAttribute_t942_il2cpp_TypeInfo);
		AssemblyDescriptionAttribute__ctor_m4441(tmp, il2cpp_codegen_string_new_wrapper("Data collection SDK for UnityEngine.Cloud.Analytics"), &AssemblyDescriptionAttribute__ctor_m4441_MethodInfo);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		AssemblyConfigurationAttribute_t943 * tmp;
		tmp = (AssemblyConfigurationAttribute_t943 *)il2cpp_codegen_object_new (&AssemblyConfigurationAttribute_t943_il2cpp_TypeInfo);
		AssemblyConfigurationAttribute__ctor_m4442(tmp, il2cpp_codegen_string_new_wrapper(""), &AssemblyConfigurationAttribute__ctor_m4442_MethodInfo);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		AssemblyCompanyAttribute_t944 * tmp;
		tmp = (AssemblyCompanyAttribute_t944 *)il2cpp_codegen_object_new (&AssemblyCompanyAttribute_t944_il2cpp_TypeInfo);
		AssemblyCompanyAttribute__ctor_m4443(tmp, il2cpp_codegen_string_new_wrapper("Unity"), &AssemblyCompanyAttribute__ctor_m4443_MethodInfo);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
	{
		AssemblyProductAttribute_t945 * tmp;
		tmp = (AssemblyProductAttribute_t945 *)il2cpp_codegen_object_new (&AssemblyProductAttribute_t945_il2cpp_TypeInfo);
		AssemblyProductAttribute__ctor_m4444(tmp, il2cpp_codegen_string_new_wrapper(""), &AssemblyProductAttribute__ctor_m4444_MethodInfo);
		cache->attributes[5] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1063 * tmp;
		tmp = (InternalsVisibleToAttribute_t1063 *)il2cpp_codegen_object_new (&InternalsVisibleToAttribute_t1063_il2cpp_TypeInfo);
		InternalsVisibleToAttribute__ctor_m5190(tmp, il2cpp_codegen_string_new_wrapper("DynamicProxyGenAssembly2"), &InternalsVisibleToAttribute__ctor_m5190_MethodInfo);
		cache->attributes[6] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1063 * tmp;
		tmp = (InternalsVisibleToAttribute_t1063 *)il2cpp_codegen_object_new (&InternalsVisibleToAttribute_t1063_il2cpp_TypeInfo);
		InternalsVisibleToAttribute__ctor_m5190(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Cloud.Analytics.Tests"), &InternalsVisibleToAttribute__ctor_m5190_MethodInfo);
		cache->attributes[7] = (Il2CppObject*)tmp;
	}
	{
		AssemblyTrademarkAttribute_t949 * tmp;
		tmp = (AssemblyTrademarkAttribute_t949 *)il2cpp_codegen_object_new (&AssemblyTrademarkAttribute_t949_il2cpp_TypeInfo);
		AssemblyTrademarkAttribute__ctor_m4448(tmp, il2cpp_codegen_string_new_wrapper(""), &AssemblyTrademarkAttribute__ctor_m4448_MethodInfo);
		cache->attributes[8] = (Il2CppObject*)tmp;
	}
	{
		AssemblyCopyrightAttribute_t950 * tmp;
		tmp = (AssemblyCopyrightAttribute_t950 *)il2cpp_codegen_object_new (&AssemblyCopyrightAttribute_t950_il2cpp_TypeInfo);
		AssemblyCopyrightAttribute__ctor_m4449(tmp, il2cpp_codegen_string_new_wrapper("Unity"), &AssemblyCopyrightAttribute__ctor_m4449_MethodInfo);
		cache->attributes[9] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache g_UnityEngine_Cloud_Analytics_Assembly__CustomAttributeCache = {
10,
NULL,
&g_UnityEngine_Cloud_Analytics_Assembly_CustomAttributesCacheGenerator
};
