#pragma once

// System.Security.Cryptography.DSASignatureFormatter
struct DSASignatureFormatter_t2251;
// System.Byte[]
struct ByteU5BU5D_t163;
// System.String
struct String_t;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1520;

// System.Void System.Security.Cryptography.DSASignatureFormatter::.ctor()
 void DSASignatureFormatter__ctor_m11804 (DSASignatureFormatter_t2251 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.DSASignatureFormatter::CreateSignature(System.Byte[])
 ByteU5BU5D_t163* DSASignatureFormatter_CreateSignature_m11805 (DSASignatureFormatter_t2251 * __this, ByteU5BU5D_t163* ___rgbHash, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSASignatureFormatter::SetHashAlgorithm(System.String)
 void DSASignatureFormatter_SetHashAlgorithm_m11806 (DSASignatureFormatter_t2251 * __this, String_t* ___strName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSASignatureFormatter::SetKey(System.Security.Cryptography.AsymmetricAlgorithm)
 void DSASignatureFormatter_SetKey_m11807 (DSASignatureFormatter_t2251 * __this, AsymmetricAlgorithm_t1520 * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
