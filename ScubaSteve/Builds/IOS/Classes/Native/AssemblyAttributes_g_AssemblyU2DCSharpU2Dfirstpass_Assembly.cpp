#include "il2cpp_precompiled_header.h"

extern TypeInfo ExtensionAttribute_t467_il2cpp_TypeInfo;
extern MethodInfo ExtensionAttribute__ctor_m1545_MethodInfo;
extern TypeInfo RuntimeCompatibilityAttribute_t551_il2cpp_TypeInfo;
extern MethodInfo RuntimeCompatibilityAttribute__ctor_m2164_MethodInfo;
extern MethodInfo RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m2165_MethodInfo;
void g_AssemblyU2DCSharpU2Dfirstpass_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExtensionAttribute_t467 * tmp;
		tmp = (ExtensionAttribute_t467 *)il2cpp_codegen_object_new (&ExtensionAttribute_t467_il2cpp_TypeInfo);
		ExtensionAttribute__ctor_m1545(tmp, &ExtensionAttribute__ctor_m1545_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		RuntimeCompatibilityAttribute_t551 * tmp;
		tmp = (RuntimeCompatibilityAttribute_t551 *)il2cpp_codegen_object_new (&RuntimeCompatibilityAttribute_t551_il2cpp_TypeInfo);
		RuntimeCompatibilityAttribute__ctor_m2164(tmp, &RuntimeCompatibilityAttribute__ctor_m2164_MethodInfo);
		RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m2165(tmp, true, &RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m2165_MethodInfo);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache g_AssemblyU2DCSharpU2Dfirstpass_Assembly__CustomAttributeCache = {
2,
NULL,
&g_AssemblyU2DCSharpU2Dfirstpass_Assembly_CustomAttributesCacheGenerator
};
