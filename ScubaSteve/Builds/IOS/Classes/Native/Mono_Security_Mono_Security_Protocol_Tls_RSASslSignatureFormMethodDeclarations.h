#pragma once

// Mono.Security.Protocol.Tls.RSASslSignatureFormatter
struct RSASslSignatureFormatter_t1781;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1520;
// System.Byte[]
struct ByteU5BU5D_t163;
// System.String
struct String_t;

// System.Void Mono.Security.Protocol.Tls.RSASslSignatureFormatter::.ctor(System.Security.Cryptography.AsymmetricAlgorithm)
 void RSASslSignatureFormatter__ctor_m8397 (RSASslSignatureFormatter_t1781 * __this, AsymmetricAlgorithm_t1520 * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RSASslSignatureFormatter::CreateSignature(System.Byte[])
 ByteU5BU5D_t163* RSASslSignatureFormatter_CreateSignature_m8398 (RSASslSignatureFormatter_t1781 * __this, ByteU5BU5D_t163* ___rgbHash, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RSASslSignatureFormatter::SetHashAlgorithm(System.String)
 void RSASslSignatureFormatter_SetHashAlgorithm_m8399 (RSASslSignatureFormatter_t1781 * __this, String_t* ___strName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RSASslSignatureFormatter::SetKey(System.Security.Cryptography.AsymmetricAlgorithm)
 void RSASslSignatureFormatter_SetKey_m8400 (RSASslSignatureFormatter_t1781 * __this, AsymmetricAlgorithm_t1520 * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
