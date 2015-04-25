#include "il2cpp_precompiled_header.h"

extern TypeInfo RuntimeCompatibilityAttribute_t551_il2cpp_TypeInfo;
extern MethodInfo RuntimeCompatibilityAttribute__ctor_m2164_MethodInfo;
extern MethodInfo RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m2165_MethodInfo;
void g_replacements_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		RuntimeCompatibilityAttribute_t551 * tmp;
		tmp = (RuntimeCompatibilityAttribute_t551 *)il2cpp_codegen_object_new (&RuntimeCompatibilityAttribute_t551_il2cpp_TypeInfo);
		RuntimeCompatibilityAttribute__ctor_m2164(tmp, &RuntimeCompatibilityAttribute__ctor_m2164_MethodInfo);
		RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m2165(tmp, true, &RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m2165_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache g_replacements_Assembly__CustomAttributeCache = {
1,
NULL,
&g_replacements_Assembly_CustomAttributesCacheGenerator
};
