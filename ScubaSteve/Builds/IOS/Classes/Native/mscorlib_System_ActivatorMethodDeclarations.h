﻿#pragma once

// System.Activator
struct Activator_t2335;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.Object[]
struct ObjectU5BU5D_t470;
// System.Reflection.Binder
struct Binder_t1346;
// System.Globalization.CultureInfo
struct CultureInfo_t1349;
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"

// System.Object System.Activator::CreateInstance(System.Type)
 Object_t * Activator_CreateInstance_m6441 (Object_t * __this/* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Activator::CreateInstance(System.Type,System.Object[])
 Object_t * Activator_CreateInstance_m1568 (Object_t * __this/* static, unused */, Type_t * ___type, ObjectU5BU5D_t470* ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Activator::CreateInstance(System.Type,System.Object[],System.Object[])
 Object_t * Activator_CreateInstance_m12409 (Object_t * __this/* static, unused */, Type_t * ___type, ObjectU5BU5D_t470* ___args, ObjectU5BU5D_t470* ___activationAttributes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Activator::CreateInstance(System.Type,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo,System.Object[])
 Object_t * Activator_CreateInstance_m12410 (Object_t * __this/* static, unused */, Type_t * ___type, int32_t ___bindingAttr, Binder_t1346 * ___binder, ObjectU5BU5D_t470* ___args, CultureInfo_t1349 * ___culture, ObjectU5BU5D_t470* ___activationAttributes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Activator::CreateInstance(System.Type,System.Boolean)
 Object_t * Activator_CreateInstance_m7627 (Object_t * __this/* static, unused */, Type_t * ___type, bool ___nonPublic, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Activator::CheckType(System.Type)
 void Activator_CheckType_m12411 (Object_t * __this/* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Activator::CheckAbstractType(System.Type)
 void Activator_CheckAbstractType_m12412 (Object_t * __this/* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Activator::CreateInstanceInternal(System.Type)
 Object_t * Activator_CreateInstanceInternal_m12413 (Object_t * __this/* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
