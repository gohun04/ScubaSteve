#pragma once

// Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify
struct TlsClientCertificateVerify_t1798;
// Mono.Security.Protocol.Tls.Context
struct Context_t1750;
// System.Security.Cryptography.RSA
struct RSA_t1526;
// System.Byte[]
struct ByteU5BU5D_t163;

// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::.ctor(Mono.Security.Protocol.Tls.Context)
 void TlsClientCertificateVerify__ctor_m8601 (TlsClientCertificateVerify_t1798 * __this, Context_t1750 * ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::Update()
 void TlsClientCertificateVerify_Update_m8602 (TlsClientCertificateVerify_t1798 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::ProcessAsSsl3()
 void TlsClientCertificateVerify_ProcessAsSsl3_m8603 (TlsClientCertificateVerify_t1798 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::ProcessAsTls1()
 void TlsClientCertificateVerify_ProcessAsTls1_m8604 (TlsClientCertificateVerify_t1798 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::getClientCertRSA(System.Security.Cryptography.RSA)
 RSA_t1526 * TlsClientCertificateVerify_getClientCertRSA_m8605 (TlsClientCertificateVerify_t1798 * __this, RSA_t1526 * ___privKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::getUnsignedBigInteger(System.Byte[])
 ByteU5BU5D_t163* TlsClientCertificateVerify_getUnsignedBigInteger_m8606 (TlsClientCertificateVerify_t1798 * __this, ByteU5BU5D_t163* ___integer, MethodInfo* method) IL2CPP_METHOD_ATTR;
