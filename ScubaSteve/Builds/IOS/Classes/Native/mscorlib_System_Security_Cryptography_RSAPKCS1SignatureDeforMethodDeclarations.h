#pragma once

// System.Security.Cryptography.RSAPKCS1SignatureDeformatter
struct RSAPKCS1SignatureDeformatter_t1830;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1520;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t163;

// System.Void System.Security.Cryptography.RSAPKCS1SignatureDeformatter::.ctor()
 void RSAPKCS1SignatureDeformatter__ctor_m11927 (RSAPKCS1SignatureDeformatter_t1830 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1SignatureDeformatter::.ctor(System.Security.Cryptography.AsymmetricAlgorithm)
 void RSAPKCS1SignatureDeformatter__ctor_m8743 (RSAPKCS1SignatureDeformatter_t1830 * __this, AsymmetricAlgorithm_t1520 * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1SignatureDeformatter::SetHashAlgorithm(System.String)
 void RSAPKCS1SignatureDeformatter_SetHashAlgorithm_m8744 (RSAPKCS1SignatureDeformatter_t1830 * __this, String_t* ___strName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1SignatureDeformatter::SetKey(System.Security.Cryptography.AsymmetricAlgorithm)
 void RSAPKCS1SignatureDeformatter_SetKey_m11928 (RSAPKCS1SignatureDeformatter_t1830 * __this, AsymmetricAlgorithm_t1520 * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.RSAPKCS1SignatureDeformatter::VerifySignature(System.Byte[],System.Byte[])
 bool RSAPKCS1SignatureDeformatter_VerifySignature_m8745 (RSAPKCS1SignatureDeformatter_t1830 * __this, ByteU5BU5D_t163* ___rgbHash, ByteU5BU5D_t163* ___rgbSignature, MethodInfo* method) IL2CPP_METHOD_ATTR;
