#pragma once

// Mono.Security.X509.PKCS12
struct PKCS12_t1677;
// System.String
struct String_t;
// System.Collections.ArrayList
struct ArrayList_t1480;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t1679;
// System.Byte[]
struct ByteU5BU5D_t163;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t1728;
// Mono.Security.PKCS7/EncryptedData
struct EncryptedData_t1713;
// Mono.Security.Cryptography.PKCS8/PrivateKeyInfo
struct PrivateKeyInfo_t1724;
// Mono.Security.ASN1
struct ASN1_t1535;
// System.Security.Cryptography.DSAParameters
#include "mscorlib_System_Security_Cryptography_DSAParameters.h"

// System.Void Mono.Security.X509.PKCS12::.ctor()
 void PKCS12__ctor_m8048 (PKCS12_t1677 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::.ctor(System.Byte[])
 void PKCS12__ctor_m7676 (PKCS12_t1677 * __this, ByteU5BU5D_t163* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::.ctor(System.Byte[],System.String)
 void PKCS12__ctor_m7677 (PKCS12_t1677 * __this, ByteU5BU5D_t163* ___data, String_t* ___password, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::.cctor()
 void PKCS12__cctor_m8049 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::Decode(System.Byte[])
 void PKCS12_Decode_m8050 (PKCS12_t1677 * __this, ByteU5BU5D_t163* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::Finalize()
 void PKCS12_Finalize_m8051 (PKCS12_t1677 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::set_Password(System.String)
 void PKCS12_set_Password_m8052 (PKCS12_t1677 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList Mono.Security.X509.PKCS12::get_Keys()
 ArrayList_t1480 * PKCS12_get_Keys_m7681 (PKCS12_t1677 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.PKCS12::get_Certificates()
 X509CertificateCollection_t1679 * PKCS12_get_Certificates_m7678 (PKCS12_t1677 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.PKCS12::Compare(System.Byte[],System.Byte[])
 bool PKCS12_Compare_m8053 (PKCS12_t1677 * __this, ByteU5BU5D_t163* ___expected, ByteU5BU5D_t163* ___actual, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.SymmetricAlgorithm Mono.Security.X509.PKCS12::GetSymmetricAlgorithm(System.String,System.Byte[],System.Int32)
 SymmetricAlgorithm_t1728 * PKCS12_GetSymmetricAlgorithm_m8054 (PKCS12_t1677 * __this, String_t* ___algorithmOid, ByteU5BU5D_t163* ___salt, int32_t ___iterationCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12::Decrypt(System.String,System.Byte[],System.Int32,System.Byte[])
 ByteU5BU5D_t163* PKCS12_Decrypt_m8055 (PKCS12_t1677 * __this, String_t* ___algorithmOid, ByteU5BU5D_t163* ___salt, int32_t ___iterationCount, ByteU5BU5D_t163* ___encryptedData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12::Decrypt(Mono.Security.PKCS7/EncryptedData)
 ByteU5BU5D_t163* PKCS12_Decrypt_m8056 (PKCS12_t1677 * __this, EncryptedData_t1713 * ___ed, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSAParameters Mono.Security.X509.PKCS12::GetExistingParameters(System.Boolean&)
 DSAParameters_t1673  PKCS12_GetExistingParameters_m8057 (PKCS12_t1677 * __this, bool* ___found, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::AddPrivateKey(Mono.Security.Cryptography.PKCS8/PrivateKeyInfo)
 void PKCS12_AddPrivateKey_m8058 (PKCS12_t1677 * __this, PrivateKeyInfo_t1724 * ___pki, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::ReadSafeBag(Mono.Security.ASN1)
 void PKCS12_ReadSafeBag_m8059 (PKCS12_t1677 * __this, ASN1_t1535 * ___safeBag, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12::MAC(System.Byte[],System.Byte[],System.Int32,System.Byte[])
 ByteU5BU5D_t163* PKCS12_MAC_m8060 (PKCS12_t1677 * __this, ByteU5BU5D_t163* ___password, ByteU5BU5D_t163* ___salt, int32_t ___iterations, ByteU5BU5D_t163* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.PKCS12::get_MaximumPasswordLength()
 int32_t PKCS12_get_MaximumPasswordLength_m8061 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
