#pragma once

// Mono.Security.Cryptography.PKCS8/PrivateKeyInfo
struct PrivateKeyInfo_t1724;
// System.Byte[]
struct ByteU5BU5D_t163;
// System.Security.Cryptography.RSA
struct RSA_t1526;
// System.Security.Cryptography.DSA
struct DSA_t1525;
// System.Security.Cryptography.DSAParameters
#include "mscorlib_System_Security_Cryptography_DSAParameters.h"

// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::.ctor()
 void PrivateKeyInfo__ctor_m7999 (PrivateKeyInfo_t1724 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::.ctor(System.Byte[])
 void PrivateKeyInfo__ctor_m8000 (PrivateKeyInfo_t1724 * __this, ByteU5BU5D_t163* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::get_PrivateKey()
 ByteU5BU5D_t163* PrivateKeyInfo_get_PrivateKey_m8001 (PrivateKeyInfo_t1724 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::Decode(System.Byte[])
 void PrivateKeyInfo_Decode_m8002 (PrivateKeyInfo_t1724 * __this, ByteU5BU5D_t163* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::RemoveLeadingZero(System.Byte[])
 ByteU5BU5D_t163* PrivateKeyInfo_RemoveLeadingZero_m8003 (Object_t * __this/* static, unused */, ByteU5BU5D_t163* ___bigInt, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::Normalize(System.Byte[],System.Int32)
 ByteU5BU5D_t163* PrivateKeyInfo_Normalize_m8004 (Object_t * __this/* static, unused */, ByteU5BU5D_t163* ___bigInt, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::DecodeRSA(System.Byte[])
 RSA_t1526 * PrivateKeyInfo_DecodeRSA_m8005 (Object_t * __this/* static, unused */, ByteU5BU5D_t163* ___keypair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::DecodeDSA(System.Byte[],System.Security.Cryptography.DSAParameters)
 DSA_t1525 * PrivateKeyInfo_DecodeDSA_m8006 (Object_t * __this/* static, unused */, ByteU5BU5D_t163* ___privateKey, DSAParameters_t1673  ___dsaParameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
