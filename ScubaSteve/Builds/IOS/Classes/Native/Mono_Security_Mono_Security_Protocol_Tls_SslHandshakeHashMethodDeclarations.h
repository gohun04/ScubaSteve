#pragma once

// Mono.Security.Protocol.Tls.SslHandshakeHash
struct SslHandshakeHash_t1790;
// System.Byte[]
struct ByteU5BU5D_t163;
// System.Security.Cryptography.RSA
struct RSA_t1526;

// System.Void Mono.Security.Protocol.Tls.SslHandshakeHash::.ctor(System.Byte[])
 void SslHandshakeHash__ctor_m8453 (SslHandshakeHash_t1790 * __this, ByteU5BU5D_t163* ___secret, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslHandshakeHash::Initialize()
 void SslHandshakeHash_Initialize_m8454 (SslHandshakeHash_t1790 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.SslHandshakeHash::HashFinal()
 ByteU5BU5D_t163* SslHandshakeHash_HashFinal_m8455 (SslHandshakeHash_t1790 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslHandshakeHash::HashCore(System.Byte[],System.Int32,System.Int32)
 void SslHandshakeHash_HashCore_m8456 (SslHandshakeHash_t1790 * __this, ByteU5BU5D_t163* ___array, int32_t ___ibStart, int32_t ___cbSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.SslHandshakeHash::CreateSignature(System.Security.Cryptography.RSA)
 ByteU5BU5D_t163* SslHandshakeHash_CreateSignature_m8457 (SslHandshakeHash_t1790 * __this, RSA_t1526 * ___rsa, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslHandshakeHash::initializePad()
 void SslHandshakeHash_initializePad_m8458 (SslHandshakeHash_t1790 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
