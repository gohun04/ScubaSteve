﻿#pragma once

// System.Globalization.CompareInfo
struct CompareInfo_t1840;
// System.Globalization.CultureInfo
struct CultureInfo_t1349;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Globalization.SortKey
struct SortKey_t1905;
// System.Globalization.CompareOptions
#include "mscorlib_System_Globalization_CompareOptions.h"

// System.Void System.Globalization.CompareInfo::.ctor()
 void CompareInfo__ctor_m10379 (CompareInfo_t1840 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CompareInfo::.ctor(System.Globalization.CultureInfo)
 void CompareInfo__ctor_m10380 (CompareInfo_t1840 * __this, CultureInfo_t1349 * ___ci, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CompareInfo::.cctor()
 void CompareInfo__cctor_m10381 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CompareInfo::System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object)
 void CompareInfo_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m10382 (CompareInfo_t1840 * __this, Object_t * ___sender, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CompareInfo::get_UseManagedCollation()
 bool CompareInfo_get_UseManagedCollation_m10383 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CompareInfo::construct_compareinfo(System.String)
 void CompareInfo_construct_compareinfo_m10384 (CompareInfo_t1840 * __this, String_t* ___locale, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CompareInfo::free_internal_collator()
 void CompareInfo_free_internal_collator_m10385 (CompareInfo_t1840 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CompareInfo::internal_compare(System.String,System.Int32,System.Int32,System.String,System.Int32,System.Int32,System.Globalization.CompareOptions)
 int32_t CompareInfo_internal_compare_m10386 (CompareInfo_t1840 * __this, String_t* ___str1, int32_t ___offset1, int32_t ___length1, String_t* ___str2, int32_t ___offset2, int32_t ___length2, int32_t ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CompareInfo::assign_sortkey(System.Object,System.String,System.Globalization.CompareOptions)
 void CompareInfo_assign_sortkey_m10387 (CompareInfo_t1840 * __this, Object_t * ___key, String_t* ___source, int32_t ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CompareInfo::internal_index(System.String,System.Int32,System.Int32,System.String,System.Globalization.CompareOptions,System.Boolean)
 int32_t CompareInfo_internal_index_m10388 (CompareInfo_t1840 * __this, String_t* ___source, int32_t ___sindex, int32_t ___count, String_t* ___value, int32_t ___options, bool ___first, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CompareInfo::Finalize()
 void CompareInfo_Finalize_m10389 (CompareInfo_t1840 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CompareInfo::internal_compare_managed(System.String,System.Int32,System.Int32,System.String,System.Int32,System.Int32,System.Globalization.CompareOptions)
 int32_t CompareInfo_internal_compare_managed_m10390 (CompareInfo_t1840 * __this, String_t* ___str1, int32_t ___offset1, int32_t ___length1, String_t* ___str2, int32_t ___offset2, int32_t ___length2, int32_t ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CompareInfo::internal_compare_switch(System.String,System.Int32,System.Int32,System.String,System.Int32,System.Int32,System.Globalization.CompareOptions)
 int32_t CompareInfo_internal_compare_switch_m10391 (CompareInfo_t1840 * __this, String_t* ___str1, int32_t ___offset1, int32_t ___length1, String_t* ___str2, int32_t ___offset2, int32_t ___length2, int32_t ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CompareInfo::Compare(System.String,System.String)
 int32_t CompareInfo_Compare_m10392 (CompareInfo_t1840 * __this, String_t* ___string1, String_t* ___string2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CompareInfo::Compare(System.String,System.String,System.Globalization.CompareOptions)
 int32_t CompareInfo_Compare_m8778 (CompareInfo_t1840 * __this, String_t* ___string1, String_t* ___string2, int32_t ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CompareInfo::Compare(System.String,System.Int32,System.Int32,System.String,System.Int32,System.Int32,System.Globalization.CompareOptions)
 int32_t CompareInfo_Compare_m10393 (CompareInfo_t1840 * __this, String_t* ___string1, int32_t ___offset1, int32_t ___length1, String_t* ___string2, int32_t ___offset2, int32_t ___length2, int32_t ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CompareInfo::Equals(System.Object)
 bool CompareInfo_Equals_m10394 (CompareInfo_t1840 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CompareInfo::GetHashCode()
 int32_t CompareInfo_GetHashCode_m10395 (CompareInfo_t1840 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.SortKey System.Globalization.CompareInfo::GetSortKey(System.String,System.Globalization.CompareOptions)
 SortKey_t1905 * CompareInfo_GetSortKey_m10396 (CompareInfo_t1840 * __this, String_t* ___source, int32_t ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CompareInfo::IndexOf(System.String,System.String,System.Int32,System.Int32)
 int32_t CompareInfo_IndexOf_m10397 (CompareInfo_t1840 * __this, String_t* ___source, String_t* ___value, int32_t ___startIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CompareInfo::internal_index_managed(System.String,System.Int32,System.Int32,System.String,System.Globalization.CompareOptions,System.Boolean)
 int32_t CompareInfo_internal_index_managed_m10398 (CompareInfo_t1840 * __this, String_t* ___s1, int32_t ___sindex, int32_t ___count, String_t* ___s2, int32_t ___opt, bool ___first, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CompareInfo::internal_index_switch(System.String,System.Int32,System.Int32,System.String,System.Globalization.CompareOptions,System.Boolean)
 int32_t CompareInfo_internal_index_switch_m10399 (CompareInfo_t1840 * __this, String_t* ___s1, int32_t ___sindex, int32_t ___count, String_t* ___s2, int32_t ___opt, bool ___first, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CompareInfo::IndexOf(System.String,System.String,System.Int32,System.Int32,System.Globalization.CompareOptions)
 int32_t CompareInfo_IndexOf_m10400 (CompareInfo_t1840 * __this, String_t* ___source, String_t* ___value, int32_t ___startIndex, int32_t ___count, int32_t ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CompareInfo::IsPrefix(System.String,System.String,System.Globalization.CompareOptions)
 bool CompareInfo_IsPrefix_m10401 (CompareInfo_t1840 * __this, String_t* ___source, String_t* ___prefix, int32_t ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CompareInfo::IsSuffix(System.String,System.String,System.Globalization.CompareOptions)
 bool CompareInfo_IsSuffix_m10402 (CompareInfo_t1840 * __this, String_t* ___source, String_t* ___suffix, int32_t ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CompareInfo::LastIndexOf(System.String,System.String,System.Int32,System.Int32)
 int32_t CompareInfo_LastIndexOf_m10403 (CompareInfo_t1840 * __this, String_t* ___source, String_t* ___value, int32_t ___startIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CompareInfo::LastIndexOf(System.String,System.String,System.Int32,System.Int32,System.Globalization.CompareOptions)
 int32_t CompareInfo_LastIndexOf_m10404 (CompareInfo_t1840 * __this, String_t* ___source, String_t* ___value, int32_t ___startIndex, int32_t ___count, int32_t ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.CompareInfo::ToString()
 String_t* CompareInfo_ToString_m10405 (CompareInfo_t1840 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CompareInfo::get_LCID()
 int32_t CompareInfo_get_LCID_m10406 (CompareInfo_t1840 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
