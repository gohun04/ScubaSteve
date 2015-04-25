#pragma once

// System.Security.Cryptography.DSASignatureDeformatter
struct DSASignatureDeformatter_t1829;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1520;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t163;

// System.Void System.Security.Cryptography.DSASignatureDeformatter::.ctor()
 void DSASignatureDeformatter__ctor_m11802 (DSASignatureDeformatter_t1829 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSASignatureDeformatter::.ctor(System.Security.Cryptography.AsymmetricAlgorithm)
 void DSASignatureDeformatter__ctor_m8740 (DSASignatureDeformatter_t1829 * __this, AsymmetricAlgorithm_t1520 * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSASignatureDeformatter::SetHashAlgorithm(System.String)
 void DSASignatureDeformatter_SetHashAlgorithm_m8741 (DSASignatureDeformatter_t1829 * __this, String_t* ___strName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSASignatureDeformatter::SetKey(System.Security.Cryptography.AsymmetricAlgorithm)
 void DSASignatureDeformatter_SetKey_m11803 (DSASignatureDeformatter_t1829 * __this, AsymmetricAlgorithm_t1520 * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.DSASignatureDeformatter::VerifySignature(System.Byte[],System.Byte[])
 bool DSASignatureDeformatter_VerifySignature_m8742 (DSASignatureDeformatter_t1829 * __this, ByteU5BU5D_t163* ___rgbHash, ByteU5BU5D_t163* ___rgbSignature, MethodInfo* method) IL2CPP_METHOD_ATTR;
