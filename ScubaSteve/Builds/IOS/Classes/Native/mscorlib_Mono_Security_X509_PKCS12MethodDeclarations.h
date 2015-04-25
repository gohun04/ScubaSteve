#pragma once

// Mono.Security.X509.PKCS12
struct PKCS12_t1935;
// System.String
struct String_t;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t1934;
// System.Byte[]
struct ByteU5BU5D_t163;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t1728;
// Mono.Security.PKCS7/EncryptedData
struct EncryptedData_t1936;
// Mono.Security.Cryptography.PKCS8/PrivateKeyInfo
struct PrivateKeyInfo_t1925;
// Mono.Security.ASN1
struct ASN1_t1931;
// System.Security.Cryptography.DSAParameters
#include "mscorlib_System_Security_Cryptography_DSAParameters.h"

// System.Void Mono.Security.X509.PKCS12::.ctor()
 void PKCS12__ctor_m9978 (PKCS12_t1935 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::.ctor(System.Byte[])
 void PKCS12__ctor_m9979 (PKCS12_t1935 * __this, ByteU5BU5D_t163* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::.ctor(System.Byte[],System.String)
 void PKCS12__ctor_m9980 (PKCS12_t1935 * __this, ByteU5BU5D_t163* ___data, String_t* ___password, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::.cctor()
 void PKCS12__cctor_m9981 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::Decode(System.Byte[])
 void PKCS12_Decode_m9982 (PKCS12_t1935 * __this, ByteU5BU5D_t163* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::Finalize()
 void PKCS12_Finalize_m9983 (PKCS12_t1935 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::set_Password(System.String)
 void PKCS12_set_Password_m9984 (PKCS12_t1935 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.PKCS12::get_Certificates()
 X509CertificateCollection_t1934 * PKCS12_get_Certificates_m9985 (PKCS12_t1935 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.PKCS12::Compare(System.Byte[],System.Byte[])
 bool PKCS12_Compare_m9986 (PKCS12_t1935 * __this, ByteU5BU5D_t163* ___expected, ByteU5BU5D_t163* ___actual, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.SymmetricAlgorithm Mono.Security.X509.PKCS12::GetSymmetricAlgorithm(System.String,System.Byte[],System.Int32)
 SymmetricAlgorithm_t1728 * PKCS12_GetSymmetricAlgorithm_m9987 (PKCS12_t1935 * __this, String_t* ___algorithmOid, ByteU5BU5D_t163* ___salt, int32_t ___iterationCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12::Decrypt(System.String,System.Byte[],System.Int32,System.Byte[])
 ByteU5BU5D_t163* PKCS12_Decrypt_m9988 (PKCS12_t1935 * __this, String_t* ___algorithmOid, ByteU5BU5D_t163* ___salt, int32_t ___iterationCount, ByteU5BU5D_t163* ___encryptedData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12::Decrypt(Mono.Security.PKCS7/EncryptedData)
 ByteU5BU5D_t163* PKCS12_Decrypt_m9989 (PKCS12_t1935 * __this, EncryptedData_t1936 * ___ed, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSAParameters Mono.Security.X509.PKCS12::GetExistingParameters(System.Boolean&)
 DSAParameters_t1673  PKCS12_GetExistingParameters_m9990 (PKCS12_t1935 * __this, bool* ___found, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::AddPrivateKey(Mono.Security.Cryptography.PKCS8/PrivateKeyInfo)
 void PKCS12_AddPrivateKey_m9991 (PKCS12_t1935 * __this, PrivateKeyInfo_t1925 * ___pki, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::ReadSafeBag(Mono.Security.ASN1)
 void PKCS12_ReadSafeBag_m9992 (PKCS12_t1935 * __this, ASN1_t1931 * ___safeBag, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12::MAC(System.Byte[],System.Byte[],System.Int32,System.Byte[])
 ByteU5BU5D_t163* PKCS12_MAC_m9993 (PKCS12_t1935 * __this, ByteU5BU5D_t163* ___password, ByteU5BU5D_t163* ___salt, int32_t ___iterations, ByteU5BU5D_t163* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.PKCS12::get_MaximumPasswordLength()
 int32_t PKCS12_get_MaximumPasswordLength_m9994 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
