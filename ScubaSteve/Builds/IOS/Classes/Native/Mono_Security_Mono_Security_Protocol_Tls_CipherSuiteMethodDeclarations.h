#pragma once

// Mono.Security.Protocol.Tls.CipherSuite
struct CipherSuite_t1751;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t1717;
// System.Security.Cryptography.KeyedHashAlgorithm
struct KeyedHashAlgorithm_t1744;
// System.String
struct String_t;
// Mono.Security.Protocol.Tls.Context
struct Context_t1750;
// System.Byte[]
struct ByteU5BU5D_t163;
// Mono.Security.Protocol.Tls.CipherAlgorithmType
#include "Mono_Security_Mono_Security_Protocol_Tls_CipherAlgorithmType.h"
// Mono.Security.Protocol.Tls.HashAlgorithmType
#include "Mono_Security_Mono_Security_Protocol_Tls_HashAlgorithmType.h"
// Mono.Security.Protocol.Tls.ExchangeAlgorithmType
#include "Mono_Security_Mono_Security_Protocol_Tls_ExchangeAlgorithmTy.h"
// System.Security.Cryptography.CipherMode
#include "mscorlib_System_Security_Cryptography_CipherMode.h"
// Mono.Security.Protocol.Tls.ContentType
#include "Mono_Security_Mono_Security_Protocol_Tls_ContentType.h"

// System.Void Mono.Security.Protocol.Tls.CipherSuite::.ctor(System.Int16,System.String,Mono.Security.Protocol.Tls.CipherAlgorithmType,Mono.Security.Protocol.Tls.HashAlgorithmType,Mono.Security.Protocol.Tls.ExchangeAlgorithmType,System.Boolean,System.Boolean,System.Byte,System.Byte,System.Int16,System.Byte,System.Byte)
 void CipherSuite__ctor_m8185 (CipherSuite_t1751 * __this, int16_t ___code, String_t* ___name, int32_t ___cipherAlgorithmType, int32_t ___hashAlgorithmType, int32_t ___exchangeAlgorithmType, bool ___exportable, bool ___blockMode, uint8_t ___keyMaterialSize, uint8_t ___expandedKeyMaterialSize, int16_t ___effectiveKeyBits, uint8_t ___ivSize, uint8_t ___blockSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuite::.cctor()
 void CipherSuite__cctor_m8186 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform Mono.Security.Protocol.Tls.CipherSuite::get_EncryptionCipher()
 Object_t * CipherSuite_get_EncryptionCipher_m8187 (CipherSuite_t1751 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform Mono.Security.Protocol.Tls.CipherSuite::get_DecryptionCipher()
 Object_t * CipherSuite_get_DecryptionCipher_m8188 (CipherSuite_t1751 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.KeyedHashAlgorithm Mono.Security.Protocol.Tls.CipherSuite::get_ClientHMAC()
 KeyedHashAlgorithm_t1744 * CipherSuite_get_ClientHMAC_m8189 (CipherSuite_t1751 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.KeyedHashAlgorithm Mono.Security.Protocol.Tls.CipherSuite::get_ServerHMAC()
 KeyedHashAlgorithm_t1744 * CipherSuite_get_ServerHMAC_m8190 (CipherSuite_t1751 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.CipherAlgorithmType Mono.Security.Protocol.Tls.CipherSuite::get_CipherAlgorithmType()
 int32_t CipherSuite_get_CipherAlgorithmType_m8191 (CipherSuite_t1751 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Protocol.Tls.CipherSuite::get_HashAlgorithmName()
 String_t* CipherSuite_get_HashAlgorithmName_m8192 (CipherSuite_t1751 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.HashAlgorithmType Mono.Security.Protocol.Tls.CipherSuite::get_HashAlgorithmType()
 int32_t CipherSuite_get_HashAlgorithmType_m8193 (CipherSuite_t1751 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.CipherSuite::get_HashSize()
 int32_t CipherSuite_get_HashSize_m8194 (CipherSuite_t1751 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.ExchangeAlgorithmType Mono.Security.Protocol.Tls.CipherSuite::get_ExchangeAlgorithmType()
 int32_t CipherSuite_get_ExchangeAlgorithmType_m8195 (CipherSuite_t1751 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.CipherMode Mono.Security.Protocol.Tls.CipherSuite::get_CipherMode()
 int32_t CipherSuite_get_CipherMode_m8196 (CipherSuite_t1751 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 Mono.Security.Protocol.Tls.CipherSuite::get_Code()
 int16_t CipherSuite_get_Code_m8197 (CipherSuite_t1751 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Protocol.Tls.CipherSuite::get_Name()
 String_t* CipherSuite_get_Name_m8198 (CipherSuite_t1751 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.CipherSuite::get_IsExportable()
 bool CipherSuite_get_IsExportable_m8199 (CipherSuite_t1751 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Security.Protocol.Tls.CipherSuite::get_KeyMaterialSize()
 uint8_t CipherSuite_get_KeyMaterialSize_m8200 (CipherSuite_t1751 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.CipherSuite::get_KeyBlockSize()
 int32_t CipherSuite_get_KeyBlockSize_m8201 (CipherSuite_t1751 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Security.Protocol.Tls.CipherSuite::get_ExpandedKeyMaterialSize()
 uint8_t CipherSuite_get_ExpandedKeyMaterialSize_m8202 (CipherSuite_t1751 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 Mono.Security.Protocol.Tls.CipherSuite::get_EffectiveKeyBits()
 int16_t CipherSuite_get_EffectiveKeyBits_m8203 (CipherSuite_t1751 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Security.Protocol.Tls.CipherSuite::get_IvSize()
 uint8_t CipherSuite_get_IvSize_m8204 (CipherSuite_t1751 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Context Mono.Security.Protocol.Tls.CipherSuite::get_Context()
 Context_t1750 * CipherSuite_get_Context_m8205 (CipherSuite_t1751 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuite::set_Context(Mono.Security.Protocol.Tls.Context)
 void CipherSuite_set_Context_m8206 (CipherSuite_t1751 * __this, Context_t1750 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuite::Write(System.Byte[],System.Int32,System.Int16)
 void CipherSuite_Write_m8207 (CipherSuite_t1751 * __this, ByteU5BU5D_t163* ___array, int32_t ___offset, int16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuite::Write(System.Byte[],System.Int32,System.UInt64)
 void CipherSuite_Write_m8208 (CipherSuite_t1751 * __this, ByteU5BU5D_t163* ___array, int32_t ___offset, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuite::InitializeCipher()
 void CipherSuite_InitializeCipher_m8209 (CipherSuite_t1751 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.CipherSuite::EncryptRecord(System.Byte[],System.Byte[])
 ByteU5BU5D_t163* CipherSuite_EncryptRecord_m8210 (CipherSuite_t1751 * __this, ByteU5BU5D_t163* ___fragment, ByteU5BU5D_t163* ___mac, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuite::DecryptRecord(System.Byte[],System.Byte[]&,System.Byte[]&)
 void CipherSuite_DecryptRecord_m8211 (CipherSuite_t1751 * __this, ByteU5BU5D_t163* ___fragment, ByteU5BU5D_t163** ___dcrFragment, ByteU5BU5D_t163** ___dcrMAC, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.CipherSuite::ComputeClientRecordMAC(Mono.Security.Protocol.Tls.ContentType,System.Byte[])
// System.Byte[] Mono.Security.Protocol.Tls.CipherSuite::ComputeServerRecordMAC(Mono.Security.Protocol.Tls.ContentType,System.Byte[])
// System.Void Mono.Security.Protocol.Tls.CipherSuite::ComputeMasterSecret(System.Byte[])
// System.Void Mono.Security.Protocol.Tls.CipherSuite::ComputeKeys()
// System.Byte[] Mono.Security.Protocol.Tls.CipherSuite::CreatePremasterSecret()
 ByteU5BU5D_t163* CipherSuite_CreatePremasterSecret_m8212 (CipherSuite_t1751 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.CipherSuite::PRF(System.Byte[],System.String,System.Byte[],System.Int32)
 ByteU5BU5D_t163* CipherSuite_PRF_m8213 (CipherSuite_t1751 * __this, ByteU5BU5D_t163* ___secret, String_t* ___label, ByteU5BU5D_t163* ___data, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.CipherSuite::Expand(System.String,System.Byte[],System.Byte[],System.Int32)
 ByteU5BU5D_t163* CipherSuite_Expand_m8214 (CipherSuite_t1751 * __this, String_t* ___hashName, ByteU5BU5D_t163* ___secret, ByteU5BU5D_t163* ___seed, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuite::createEncryptionCipher()
 void CipherSuite_createEncryptionCipher_m8215 (CipherSuite_t1751 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuite::createDecryptionCipher()
 void CipherSuite_createDecryptionCipher_m8216 (CipherSuite_t1751 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
