#pragma once

// Mono.Security.Cryptography.PKCS1
struct PKCS1_t1723;
// System.Byte[]
struct ByteU5BU5D_t163;
// System.Security.Cryptography.RSA
struct RSA_t1526;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t1721;

// System.Void Mono.Security.Cryptography.PKCS1::.cctor()
 void PKCS1__cctor_m7989 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.PKCS1::Compare(System.Byte[],System.Byte[])
 bool PKCS1_Compare_m7990 (Object_t * __this/* static, unused */, ByteU5BU5D_t163* ___array1, ByteU5BU5D_t163* ___array2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::I2OSP(System.Byte[],System.Int32)
 ByteU5BU5D_t163* PKCS1_I2OSP_m7991 (Object_t * __this/* static, unused */, ByteU5BU5D_t163* ___x, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::OS2IP(System.Byte[])
 ByteU5BU5D_t163* PKCS1_OS2IP_m7992 (Object_t * __this/* static, unused */, ByteU5BU5D_t163* ___x, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::RSASP1(System.Security.Cryptography.RSA,System.Byte[])
 ByteU5BU5D_t163* PKCS1_RSASP1_m7993 (Object_t * __this/* static, unused */, RSA_t1526 * ___rsa, ByteU5BU5D_t163* ___m, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::RSAVP1(System.Security.Cryptography.RSA,System.Byte[])
 ByteU5BU5D_t163* PKCS1_RSAVP1_m7994 (Object_t * __this/* static, unused */, RSA_t1526 * ___rsa, ByteU5BU5D_t163* ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::Sign_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.HashAlgorithm,System.Byte[])
 ByteU5BU5D_t163* PKCS1_Sign_v15_m7995 (Object_t * __this/* static, unused */, RSA_t1526 * ___rsa, HashAlgorithm_t1721 * ___hash, ByteU5BU5D_t163* ___hashValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.PKCS1::Verify_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.HashAlgorithm,System.Byte[],System.Byte[])
 bool PKCS1_Verify_v15_m7996 (Object_t * __this/* static, unused */, RSA_t1526 * ___rsa, HashAlgorithm_t1721 * ___hash, ByteU5BU5D_t163* ___hashValue, ByteU5BU5D_t163* ___signature, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.PKCS1::Verify_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.HashAlgorithm,System.Byte[],System.Byte[],System.Boolean)
 bool PKCS1_Verify_v15_m7997 (Object_t * __this/* static, unused */, RSA_t1526 * ___rsa, HashAlgorithm_t1721 * ___hash, ByteU5BU5D_t163* ___hashValue, ByteU5BU5D_t163* ___signature, bool ___tryNonStandardEncoding, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::Encode_v15(System.Security.Cryptography.HashAlgorithm,System.Byte[],System.Int32)
 ByteU5BU5D_t163* PKCS1_Encode_v15_m7998 (Object_t * __this/* static, unused */, HashAlgorithm_t1721 * ___hash, ByteU5BU5D_t163* ___hashValue, int32_t ___emLength, MethodInfo* method) IL2CPP_METHOD_ATTR;
