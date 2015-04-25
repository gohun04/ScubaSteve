#pragma once

// System.NumberFormatter
struct NumberFormatter_t2394;
// System.Globalization.CultureInfo
struct CultureInfo_t1349;
// System.Threading.Thread
struct Thread_t2156;
// System.String
struct String_t;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t1845;
// System.IFormatProvider
struct IFormatProvider_t1821;
// System.Text.StringBuilder
struct StringBuilder_t54;
// System.Int32[]
struct Int32U5BU5D_t529;
// System.Decimal
#include "mscorlib_System_Decimal.h"

// System.Void System.NumberFormatter::.ctor(System.Threading.Thread)
 void NumberFormatter__ctor_m12972 (NumberFormatter_t2394 * __this, Thread_t2156 * ___current, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::.cctor()
 void NumberFormatter__cctor_m12973 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::GetFormatterTables(System.UInt64*&,System.Int32*&,System.Char*&,System.Char*&,System.Int64*&,System.Int32*&)
 void NumberFormatter_GetFormatterTables_m12974 (Object_t * __this/* static, unused */, uint64_t** ___MantissaBitsTable, int32_t** ___TensExponentTable, uint16_t** ___DigitLowerTable, uint16_t** ___DigitUpperTable, int64_t** ___TenPowersList, int32_t** ___DecHexDigits, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.NumberFormatter::GetTenPowerOf(System.Int32)
 int64_t NumberFormatter_GetTenPowerOf_m12975 (Object_t * __this/* static, unused */, int32_t ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::InitDecHexDigits(System.UInt32)
 void NumberFormatter_InitDecHexDigits_m12976 (NumberFormatter_t2394 * __this, uint32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::InitDecHexDigits(System.UInt64)
 void NumberFormatter_InitDecHexDigits_m12977 (NumberFormatter_t2394 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::InitDecHexDigits(System.UInt32,System.UInt64)
 void NumberFormatter_InitDecHexDigits_m12978 (NumberFormatter_t2394 * __this, uint32_t ___hi, uint64_t ___lo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.NumberFormatter::FastToDecHex(System.Int32)
 uint32_t NumberFormatter_FastToDecHex_m12979 (Object_t * __this/* static, unused */, int32_t ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.NumberFormatter::ToDecHex(System.Int32)
 uint32_t NumberFormatter_ToDecHex_m12980 (Object_t * __this/* static, unused */, int32_t ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::FastDecHexLen(System.Int32)
 int32_t NumberFormatter_FastDecHexLen_m12981 (Object_t * __this/* static, unused */, int32_t ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::DecHexLen(System.UInt32)
 int32_t NumberFormatter_DecHexLen_m12982 (Object_t * __this/* static, unused */, uint32_t ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::DecHexLen()
 int32_t NumberFormatter_DecHexLen_m12983 (NumberFormatter_t2394 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::ScaleOrder(System.Int64)
 int32_t NumberFormatter_ScaleOrder_m12984 (Object_t * __this/* static, unused */, int64_t ___hi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::InitialFloatingPrecision()
 int32_t NumberFormatter_InitialFloatingPrecision_m12985 (NumberFormatter_t2394 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::ParsePrecision(System.String)
 int32_t NumberFormatter_ParsePrecision_m12986 (Object_t * __this/* static, unused */, String_t* ___format, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Init(System.String)
 void NumberFormatter_Init_m12987 (NumberFormatter_t2394 * __this, String_t* ___format, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::InitHex(System.UInt64)
 void NumberFormatter_InitHex_m12988 (NumberFormatter_t2394 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Init(System.String,System.Int32,System.Int32)
 void NumberFormatter_Init_m12989 (NumberFormatter_t2394 * __this, String_t* ___format, int32_t ___value, int32_t ___defPrecision, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Init(System.String,System.UInt32,System.Int32)
 void NumberFormatter_Init_m12990 (NumberFormatter_t2394 * __this, String_t* ___format, uint32_t ___value, int32_t ___defPrecision, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Init(System.String,System.Int64)
 void NumberFormatter_Init_m12991 (NumberFormatter_t2394 * __this, String_t* ___format, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Init(System.String,System.UInt64)
 void NumberFormatter_Init_m12992 (NumberFormatter_t2394 * __this, String_t* ___format, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Init(System.String,System.Double,System.Int32)
 void NumberFormatter_Init_m12993 (NumberFormatter_t2394 * __this, String_t* ___format, double ___value, int32_t ___defPrecision, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Init(System.String,System.Decimal)
 void NumberFormatter_Init_m12994 (NumberFormatter_t2394 * __this, String_t* ___format, Decimal_t171  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::ResetCharBuf(System.Int32)
 void NumberFormatter_ResetCharBuf_m12995 (NumberFormatter_t2394 * __this, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Resize(System.Int32)
 void NumberFormatter_Resize_m12996 (NumberFormatter_t2394 * __this, int32_t ___len, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Append(System.Char)
 void NumberFormatter_Append_m12997 (NumberFormatter_t2394 * __this, uint16_t ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Append(System.Char,System.Int32)
 void NumberFormatter_Append_m12998 (NumberFormatter_t2394 * __this, uint16_t ___c, int32_t ___cnt, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Append(System.String)
 void NumberFormatter_Append_m12999 (NumberFormatter_t2394 * __this, String_t* ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.NumberFormatInfo System.NumberFormatter::GetNumberFormatInstance(System.IFormatProvider)
 NumberFormatInfo_t1845 * NumberFormatter_GetNumberFormatInstance_m13000 (NumberFormatter_t2394 * __this, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::set_CurrentCulture(System.Globalization.CultureInfo)
 void NumberFormatter_set_CurrentCulture_m13001 (NumberFormatter_t2394 * __this, CultureInfo_t1349 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::get_IntegerDigits()
 int32_t NumberFormatter_get_IntegerDigits_m13002 (NumberFormatter_t2394 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::get_DecimalDigits()
 int32_t NumberFormatter_get_DecimalDigits_m13003 (NumberFormatter_t2394 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.NumberFormatter::get_IsFloatingSource()
 bool NumberFormatter_get_IsFloatingSource_m13004 (NumberFormatter_t2394 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.NumberFormatter::get_IsZero()
 bool NumberFormatter_get_IsZero_m13005 (NumberFormatter_t2394 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.NumberFormatter::get_IsZeroInteger()
 bool NumberFormatter_get_IsZeroInteger_m13006 (NumberFormatter_t2394 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::RoundPos(System.Int32)
 void NumberFormatter_RoundPos_m13007 (NumberFormatter_t2394 * __this, int32_t ___pos, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.NumberFormatter::RoundDecimal(System.Int32)
 bool NumberFormatter_RoundDecimal_m13008 (NumberFormatter_t2394 * __this, int32_t ___decimals, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.NumberFormatter::RoundBits(System.Int32)
 bool NumberFormatter_RoundBits_m13009 (NumberFormatter_t2394 * __this, int32_t ___shift, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::RemoveTrailingZeros()
 void NumberFormatter_RemoveTrailingZeros_m13010 (NumberFormatter_t2394 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AddOneToDecHex()
 void NumberFormatter_AddOneToDecHex_m13011 (NumberFormatter_t2394 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.NumberFormatter::AddOneToDecHex(System.UInt32)
 uint32_t NumberFormatter_AddOneToDecHex_m13012 (Object_t * __this/* static, unused */, uint32_t ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::CountTrailingZeros()
 int32_t NumberFormatter_CountTrailingZeros_m13013 (NumberFormatter_t2394 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::CountTrailingZeros(System.UInt32)
 int32_t NumberFormatter_CountTrailingZeros_m13014 (Object_t * __this/* static, unused */, uint32_t ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.NumberFormatter System.NumberFormatter::GetInstance()
 NumberFormatter_t2394 * NumberFormatter_GetInstance_m13015 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Release()
 void NumberFormatter_Release_m13016 (NumberFormatter_t2394 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::SetThreadCurrentCulture(System.Globalization.CultureInfo)
 void NumberFormatter_SetThreadCurrentCulture_m13017 (Object_t * __this/* static, unused */, CultureInfo_t1349 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.SByte,System.IFormatProvider)
 String_t* NumberFormatter_NumberToString_m13018 (Object_t * __this/* static, unused */, String_t* ___format, int8_t ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.Byte,System.IFormatProvider)
 String_t* NumberFormatter_NumberToString_m13019 (Object_t * __this/* static, unused */, String_t* ___format, uint8_t ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.UInt16,System.IFormatProvider)
 String_t* NumberFormatter_NumberToString_m13020 (Object_t * __this/* static, unused */, String_t* ___format, uint16_t ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.Int16,System.IFormatProvider)
 String_t* NumberFormatter_NumberToString_m13021 (Object_t * __this/* static, unused */, String_t* ___format, int16_t ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.UInt32,System.IFormatProvider)
 String_t* NumberFormatter_NumberToString_m13022 (Object_t * __this/* static, unused */, String_t* ___format, uint32_t ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.Int32,System.IFormatProvider)
 String_t* NumberFormatter_NumberToString_m13023 (Object_t * __this/* static, unused */, String_t* ___format, int32_t ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.UInt64,System.IFormatProvider)
 String_t* NumberFormatter_NumberToString_m13024 (Object_t * __this/* static, unused */, String_t* ___format, uint64_t ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.Int64,System.IFormatProvider)
 String_t* NumberFormatter_NumberToString_m13025 (Object_t * __this/* static, unused */, String_t* ___format, int64_t ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.Single,System.IFormatProvider)
 String_t* NumberFormatter_NumberToString_m13026 (Object_t * __this/* static, unused */, String_t* ___format, float ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.Double,System.IFormatProvider)
 String_t* NumberFormatter_NumberToString_m13027 (Object_t * __this/* static, unused */, String_t* ___format, double ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.Decimal,System.IFormatProvider)
 String_t* NumberFormatter_NumberToString_m13028 (Object_t * __this/* static, unused */, String_t* ___format, Decimal_t171  ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.UInt32,System.IFormatProvider)
 String_t* NumberFormatter_NumberToString_m13029 (Object_t * __this/* static, unused */, uint32_t ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.Int32,System.IFormatProvider)
 String_t* NumberFormatter_NumberToString_m13030 (Object_t * __this/* static, unused */, int32_t ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.UInt64,System.IFormatProvider)
 String_t* NumberFormatter_NumberToString_m13031 (Object_t * __this/* static, unused */, uint64_t ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.Int64,System.IFormatProvider)
 String_t* NumberFormatter_NumberToString_m13032 (Object_t * __this/* static, unused */, int64_t ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.Single,System.IFormatProvider)
 String_t* NumberFormatter_NumberToString_m13033 (Object_t * __this/* static, unused */, float ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.Double,System.IFormatProvider)
 String_t* NumberFormatter_NumberToString_m13034 (Object_t * __this/* static, unused */, double ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FastIntegerToString(System.Int32,System.IFormatProvider)
 String_t* NumberFormatter_FastIntegerToString_m13035 (NumberFormatter_t2394 * __this, int32_t ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::IntegerToString(System.String,System.IFormatProvider)
 String_t* NumberFormatter_IntegerToString_m13036 (NumberFormatter_t2394 * __this, String_t* ___format, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.Globalization.NumberFormatInfo)
 String_t* NumberFormatter_NumberToString_m13037 (NumberFormatter_t2394 * __this, String_t* ___format, NumberFormatInfo_t1845 * ___nfi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatCurrency(System.Int32,System.Globalization.NumberFormatInfo)
 String_t* NumberFormatter_FormatCurrency_m13038 (NumberFormatter_t2394 * __this, int32_t ___precision, NumberFormatInfo_t1845 * ___nfi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatDecimal(System.Int32,System.Globalization.NumberFormatInfo)
 String_t* NumberFormatter_FormatDecimal_m13039 (NumberFormatter_t2394 * __this, int32_t ___precision, NumberFormatInfo_t1845 * ___nfi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatHexadecimal(System.Int32)
 String_t* NumberFormatter_FormatHexadecimal_m13040 (NumberFormatter_t2394 * __this, int32_t ___precision, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatFixedPoint(System.Int32,System.Globalization.NumberFormatInfo)
 String_t* NumberFormatter_FormatFixedPoint_m13041 (NumberFormatter_t2394 * __this, int32_t ___precision, NumberFormatInfo_t1845 * ___nfi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatRoundtrip(System.Double,System.Globalization.NumberFormatInfo)
 String_t* NumberFormatter_FormatRoundtrip_m13042 (NumberFormatter_t2394 * __this, double ___origval, NumberFormatInfo_t1845 * ___nfi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatRoundtrip(System.Single,System.Globalization.NumberFormatInfo)
 String_t* NumberFormatter_FormatRoundtrip_m13043 (NumberFormatter_t2394 * __this, float ___origval, NumberFormatInfo_t1845 * ___nfi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatGeneral(System.Int32,System.Globalization.NumberFormatInfo)
 String_t* NumberFormatter_FormatGeneral_m13044 (NumberFormatter_t2394 * __this, int32_t ___precision, NumberFormatInfo_t1845 * ___nfi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatNumber(System.Int32,System.Globalization.NumberFormatInfo)
 String_t* NumberFormatter_FormatNumber_m13045 (NumberFormatter_t2394 * __this, int32_t ___precision, NumberFormatInfo_t1845 * ___nfi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatPercent(System.Int32,System.Globalization.NumberFormatInfo)
 String_t* NumberFormatter_FormatPercent_m13046 (NumberFormatter_t2394 * __this, int32_t ___precision, NumberFormatInfo_t1845 * ___nfi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatExponential(System.Int32,System.Globalization.NumberFormatInfo)
 String_t* NumberFormatter_FormatExponential_m13047 (NumberFormatter_t2394 * __this, int32_t ___precision, NumberFormatInfo_t1845 * ___nfi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatExponential(System.Int32,System.Globalization.NumberFormatInfo,System.Int32)
 String_t* NumberFormatter_FormatExponential_m13048 (NumberFormatter_t2394 * __this, int32_t ___precision, NumberFormatInfo_t1845 * ___nfi, int32_t ___expDigits, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatCustom(System.String,System.Globalization.NumberFormatInfo)
 String_t* NumberFormatter_FormatCustom_m13049 (NumberFormatter_t2394 * __this, String_t* ___format, NumberFormatInfo_t1845 * ___nfi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::ZeroTrimEnd(System.Text.StringBuilder,System.Boolean)
 void NumberFormatter_ZeroTrimEnd_m13050 (Object_t * __this/* static, unused */, StringBuilder_t54 * ___sb, bool ___canEmpty, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.NumberFormatter::IsZeroOnly(System.Text.StringBuilder)
 bool NumberFormatter_IsZeroOnly_m13051 (Object_t * __this/* static, unused */, StringBuilder_t54 * ___sb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendNonNegativeNumber(System.Text.StringBuilder,System.Int32)
 void NumberFormatter_AppendNonNegativeNumber_m13052 (Object_t * __this/* static, unused */, StringBuilder_t54 * ___sb, int32_t ___v, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendIntegerString(System.Int32,System.Text.StringBuilder)
 void NumberFormatter_AppendIntegerString_m13053 (NumberFormatter_t2394 * __this, int32_t ___minLength, StringBuilder_t54 * ___sb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendIntegerString(System.Int32)
 void NumberFormatter_AppendIntegerString_m13054 (NumberFormatter_t2394 * __this, int32_t ___minLength, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendDecimalString(System.Int32,System.Text.StringBuilder)
 void NumberFormatter_AppendDecimalString_m13055 (NumberFormatter_t2394 * __this, int32_t ___precision, StringBuilder_t54 * ___sb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendDecimalString(System.Int32)
 void NumberFormatter_AppendDecimalString_m13056 (NumberFormatter_t2394 * __this, int32_t ___precision, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendIntegerStringWithGroupSeparator(System.Int32[],System.String)
 void NumberFormatter_AppendIntegerStringWithGroupSeparator_m13057 (NumberFormatter_t2394 * __this, Int32U5BU5D_t529* ___groups, String_t* ___groupSeparator, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendExponent(System.Globalization.NumberFormatInfo,System.Int32,System.Int32)
 void NumberFormatter_AppendExponent_m13058 (NumberFormatter_t2394 * __this, NumberFormatInfo_t1845 * ___nfi, int32_t ___exponent, int32_t ___minDigits, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendOneDigit(System.Int32)
 void NumberFormatter_AppendOneDigit_m13059 (NumberFormatter_t2394 * __this, int32_t ___start, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::FastAppendDigits(System.Int32,System.Boolean)
 void NumberFormatter_FastAppendDigits_m13060 (NumberFormatter_t2394 * __this, int32_t ___val, bool ___force, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendDigits(System.Int32,System.Int32)
 void NumberFormatter_AppendDigits_m13061 (NumberFormatter_t2394 * __this, int32_t ___start, int32_t ___end, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendDigits(System.Int32,System.Int32,System.Text.StringBuilder)
 void NumberFormatter_AppendDigits_m13062 (NumberFormatter_t2394 * __this, int32_t ___start, int32_t ___end, StringBuilder_t54 * ___sb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Multiply10(System.Int32)
 void NumberFormatter_Multiply10_m13063 (NumberFormatter_t2394 * __this, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Divide10(System.Int32)
 void NumberFormatter_Divide10_m13064 (NumberFormatter_t2394 * __this, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.NumberFormatter System.NumberFormatter::GetClone()
 NumberFormatter_t2394 * NumberFormatter_GetClone_m13065 (NumberFormatter_t2394 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
