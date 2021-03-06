﻿#pragma once

// Mono.Security.ASN1Convert
struct ASN1Convert_t1710;
// Mono.Security.ASN1
struct ASN1_t1535;
// System.String
struct String_t;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// Mono.Security.ASN1 Mono.Security.ASN1Convert::FromInt32(System.Int32)
 ASN1_t1535 * ASN1Convert_FromInt32_m7660 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.ASN1Convert::FromOid(System.String)
 ASN1_t1535 * ASN1Convert_FromOid_m7947 (Object_t * __this/* static, unused */, String_t* ___oid, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.ASN1Convert::ToInt32(Mono.Security.ASN1)
 int32_t ASN1Convert_ToInt32_m7656 (Object_t * __this/* static, unused */, ASN1_t1535 * ___asn1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.ASN1Convert::ToOid(Mono.Security.ASN1)
 String_t* ASN1Convert_ToOid_m7758 (Object_t * __this/* static, unused */, ASN1_t1535 * ___asn1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.ASN1Convert::ToDateTime(Mono.Security.ASN1)
 DateTime_t45  ASN1Convert_ToDateTime_m7948 (Object_t * __this/* static, unused */, ASN1_t1535 * ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
