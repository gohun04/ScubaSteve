#pragma once

// Mono.Security.Cryptography.PKCS1
struct PKCS1_t1924;
// System.Byte[]
struct ByteU5BU5D_t163;
// System.Security.Cryptography.RSA
struct RSA_t1526;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t1704;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t1721;

// System.Void Mono.Security.Cryptography.PKCS1::.cctor()
 void PKCS1__cctor_m9899 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.PKCS1::Compare(System.Byte[],System.Byte[])
 bool PKCS1_Compare_m9900 (Object_t * __this/* static, unused */, ByteU5BU5D_t163* ___array1, ByteU5BU5D_t163* ___array2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::I2OSP(System.Byte[],System.Int32)
 ByteU5BU5D_t163* PKCS1_I2OSP_m9901 (Object_t * __this/* static, unused */, ByteU5BU5D_t163* ___x, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::OS2IP(System.Byte[])
 ByteU5BU5D_t163* PKCS1_OS2IP_m9902 (Object_t * __this/* static, unused */, ByteU5BU5D_t163* ___x, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::RSAEP(System.Security.Cryptography.RSA,System.Byte[])
 ByteU5BU5D_t163* PKCS1_RSAEP_m9903 (Object_t * __this/* static, unused */, RSA_t1526 * ___rsa, ByteU5BU5D_t163* ___m, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::RSASP1(System.Security.Cryptography.RSA,System.Byte[])
 ByteU5BU5D_t163* PKCS1_RSASP1_m9904 (Object_t * __this/* static, unused */, RSA_t1526 * ___rsa, ByteU5BU5D_t163* ___m, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::RSAVP1(System.Security.Cryptography.RSA,System.Byte[])
 ByteU5BU5D_t163* PKCS1_RSAVP1_m9905 (Object_t * __this/* static, unused */, RSA_t1526 * ___rsa, ByteU5BU5D_t163* ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::Encrypt_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.RandomNumberGenerator,System.Byte[])
 ByteU5BU5D_t163* PKCS1_Encrypt_v15_m9906 (Object_t * __this/* static, unused */, RSA_t1526 * ___rsa, RandomNumberGenerator_t1704 * ___rng, ByteU5BU5D_t163* ___M, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::Sign_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.HashAlgorithm,System.Byte[])
 ByteU5BU5D_t163* PKCS1_Sign_v15_m9907 (Object_t * __this/* static, unused */, RSA_t1526 * ___rsa, HashAlgorithm_t1721 * ___hash, ByteU5BU5D_t163* ___hashValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.PKCS1::Verify_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.HashAlgorithm,System.Byte[],System.Byte[])
 bool PKCS1_Verify_v15_m9908 (Object_t * __this/* static, unused */, RSA_t1526 * ___rsa, HashAlgorithm_t1721 * ___hash, ByteU5BU5D_t163* ___hashValue, ByteU5BU5D_t163* ___signature, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.PKCS1::Verify_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.HashAlgorithm,System.Byte[],System.Byte[],System.Boolean)
 bool PKCS1_Verify_v15_m9909 (Object_t * __this/* static, unused */, RSA_t1526 * ___rsa, HashAlgorithm_t1721 * ___hash, ByteU5BU5D_t163* ___hashValue, ByteU5BU5D_t163* ___signature, bool ___tryNonStandardEncoding, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::Encode_v15(System.Security.Cryptography.HashAlgorithm,System.Byte[],System.Int32)
 ByteU5BU5D_t163* PKCS1_Encode_v15_m9910 (Object_t * __this/* static, unused */, HashAlgorithm_t1721 * ___hash, ByteU5BU5D_t163* ___hashValue, int32_t ___emLength, MethodInfo* method) IL2CPP_METHOD_ATTR;
