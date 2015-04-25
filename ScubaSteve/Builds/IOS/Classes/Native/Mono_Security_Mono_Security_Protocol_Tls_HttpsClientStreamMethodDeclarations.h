#pragma once

// Mono.Security.Protocol.Tls.HttpsClientStream
struct HttpsClientStream_t1774;
// System.IO.Stream
struct Stream_t1760;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t1506;
// System.Net.HttpWebRequest
struct HttpWebRequest_t1507;
// System.Byte[]
struct ByteU5BU5D_t163;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t1492;
// System.Int32[]
struct Int32U5BU5D_t529;
// System.String
struct String_t;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1520;

// System.Void Mono.Security.Protocol.Tls.HttpsClientStream::.ctor(System.IO.Stream,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Net.HttpWebRequest,System.Byte[])
 void HttpsClientStream__ctor_m8337 (HttpsClientStream_t1774 * __this, Stream_t1760 * ___stream, X509CertificateCollection_t1506 * ___clientCertificates, HttpWebRequest_t1507 * ___request, ByteU5BU5D_t163* ___buffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.HttpsClientStream::get_TrustFailure()
 bool HttpsClientStream_get_TrustFailure_m8338 (HttpsClientStream_t1774 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.HttpsClientStream::RaiseServerCertificateValidation(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[])
 bool HttpsClientStream_RaiseServerCertificateValidation_m8339 (HttpsClientStream_t1774 * __this, X509Certificate_t1492 * ___certificate, Int32U5BU5D_t529* ___certificateErrors, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.HttpsClientStream::<HttpsClientStream>m__0(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
 X509Certificate_t1492 * HttpsClientStream_U3CHttpsClientStreamU3Em__0_m8340 (Object_t * __this/* static, unused */, X509CertificateCollection_t1506 * ___clientCerts, X509Certificate_t1492 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t1506 * ___serverRequestedCertificates, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.Protocol.Tls.HttpsClientStream::<HttpsClientStream>m__1(System.Security.Cryptography.X509Certificates.X509Certificate,System.String)
 AsymmetricAlgorithm_t1520 * HttpsClientStream_U3CHttpsClientStreamU3Em__1_m8341 (Object_t * __this/* static, unused */, X509Certificate_t1492 * ___certificate, String_t* ___targetHost, MethodInfo* method) IL2CPP_METHOD_ATTR;
