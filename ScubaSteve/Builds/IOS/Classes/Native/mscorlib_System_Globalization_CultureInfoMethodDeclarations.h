#pragma once

// System.Globalization.CultureInfo
struct CultureInfo_t1349;
// System.String
struct String_t;
// System.Globalization.TextInfo
struct TextInfo_t1904;
// System.Globalization.CompareInfo
struct CompareInfo_t1840;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t1845;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t2010;
// System.Object
struct Object_t;
// System.Type
struct Type_t;

// System.Void System.Globalization.CultureInfo::.ctor(System.Int32)
 void CultureInfo__ctor_m10407 (CultureInfo_t1349 * __this, int32_t ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::.ctor(System.Int32,System.Boolean)
 void CultureInfo__ctor_m10408 (CultureInfo_t1349 * __this, int32_t ___culture, bool ___useUserOverride, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::.ctor(System.Int32,System.Boolean,System.Boolean)
 void CultureInfo__ctor_m10409 (CultureInfo_t1349 * __this, int32_t ___culture, bool ___useUserOverride, bool ___read_only, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::.ctor(System.String,System.Boolean,System.Boolean)
 void CultureInfo__ctor_m10410 (CultureInfo_t1349 * __this, String_t* ___name, bool ___useUserOverride, bool ___read_only, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::.ctor()
 void CultureInfo__ctor_m10411 (CultureInfo_t1349 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::.cctor()
 void CultureInfo__cctor_m10412 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
 CultureInfo_t1349 * CultureInfo_get_InvariantCulture_m7606 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_CurrentCulture()
 CultureInfo_t1349 * CultureInfo_get_CurrentCulture_m8776 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_CurrentUICulture()
 CultureInfo_t1349 * CultureInfo_get_CurrentUICulture_m8780 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::ConstructCurrentCulture()
 CultureInfo_t1349 * CultureInfo_ConstructCurrentCulture_m10413 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::ConstructCurrentUICulture()
 CultureInfo_t1349 * CultureInfo_ConstructCurrentUICulture_m10414 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CultureInfo::get_LCID()
 int32_t CultureInfo_get_LCID_m10415 (CultureInfo_t1349 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.CultureInfo::get_Name()
 String_t* CultureInfo_get_Name_m10416 (CultureInfo_t1349 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_Parent()
 CultureInfo_t1349 * CultureInfo_get_Parent_m10417 (CultureInfo_t1349 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.TextInfo System.Globalization.CultureInfo::get_TextInfo()
 TextInfo_t1904 * CultureInfo_get_TextInfo_m10418 (CultureInfo_t1349 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.CultureInfo::get_IcuName()
 String_t* CultureInfo_get_IcuName_m10419 (CultureInfo_t1349 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::Equals(System.Object)
 bool CultureInfo_Equals_m10420 (CultureInfo_t1349 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CultureInfo::GetHashCode()
 int32_t CultureInfo_GetHashCode_m10421 (CultureInfo_t1349 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.CultureInfo::ToString()
 String_t* CultureInfo_ToString_m10422 (CultureInfo_t1349 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CompareInfo System.Globalization.CultureInfo::get_CompareInfo()
 CompareInfo_t1840 * CultureInfo_get_CompareInfo_m8777 (CultureInfo_t1349 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::get_IsNeutralCulture()
 bool CultureInfo_get_IsNeutralCulture_m10423 (CultureInfo_t1349 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::CheckNeutral()
 void CultureInfo_CheckNeutral_m10424 (CultureInfo_t1349 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.NumberFormatInfo System.Globalization.CultureInfo::get_NumberFormat()
 NumberFormatInfo_t1845 * CultureInfo_get_NumberFormat_m10425 (CultureInfo_t1349 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DateTimeFormatInfo System.Globalization.CultureInfo::get_DateTimeFormat()
 DateTimeFormatInfo_t2010 * CultureInfo_get_DateTimeFormat_m10426 (CultureInfo_t1349 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::get_IsReadOnly()
 bool CultureInfo_get_IsReadOnly_m10427 (CultureInfo_t1349 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Globalization.CultureInfo::GetFormat(System.Type)
 Object_t * CultureInfo_GetFormat_m10428 (CultureInfo_t1349 * __this, Type_t * ___formatType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::Construct()
 void CultureInfo_Construct_m10429 (CultureInfo_t1349 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::ConstructInternalLocaleFromName(System.String)
 bool CultureInfo_ConstructInternalLocaleFromName_m10430 (CultureInfo_t1349 * __this, String_t* ___locale, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::ConstructInternalLocaleFromLcid(System.Int32)
 bool CultureInfo_ConstructInternalLocaleFromLcid_m10431 (CultureInfo_t1349 * __this, int32_t ___lcid, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::ConstructInternalLocaleFromCurrentLocale(System.Globalization.CultureInfo)
 bool CultureInfo_ConstructInternalLocaleFromCurrentLocale_m10432 (Object_t * __this/* static, unused */, CultureInfo_t1349 * ___ci, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::construct_internal_locale_from_lcid(System.Int32)
 bool CultureInfo_construct_internal_locale_from_lcid_m10433 (CultureInfo_t1349 * __this, int32_t ___lcid, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::construct_internal_locale_from_name(System.String)
 bool CultureInfo_construct_internal_locale_from_name_m10434 (CultureInfo_t1349 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::construct_internal_locale_from_current_locale(System.Globalization.CultureInfo)
 bool CultureInfo_construct_internal_locale_from_current_locale_m10435 (Object_t * __this/* static, unused */, CultureInfo_t1349 * ___ci, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::construct_datetime_format()
 void CultureInfo_construct_datetime_format_m10436 (CultureInfo_t1349 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::construct_number_format()
 void CultureInfo_construct_number_format_m10437 (CultureInfo_t1349 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::ConstructInvariant(System.Boolean)
 void CultureInfo_ConstructInvariant_m10438 (CultureInfo_t1349 * __this, bool ___read_only, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.TextInfo System.Globalization.CultureInfo::CreateTextInfo(System.Boolean)
 TextInfo_t1904 * CultureInfo_CreateTextInfo_m10439 (CultureInfo_t1349 * __this, bool ___readOnly, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::CreateCulture(System.String,System.Boolean)
 CultureInfo_t1349 * CultureInfo_CreateCulture_m10440 (Object_t * __this/* static, unused */, String_t* ___name, bool ___reference, MethodInfo* method) IL2CPP_METHOD_ATTR;
