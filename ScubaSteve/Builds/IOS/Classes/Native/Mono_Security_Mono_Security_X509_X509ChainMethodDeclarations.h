#pragma once

// Mono.Security.X509.X509Chain
struct X509Chain_t1732;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t1679;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t1524;
// Mono.Security.X509.X509ChainStatusFlags
#include "Mono_Security_Mono_Security_X509_X509ChainStatusFlags.h"

// System.Void Mono.Security.X509.X509Chain::.ctor()
 void X509Chain__ctor_m8092 (X509Chain_t1732 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Chain::.ctor(Mono.Security.X509.X509CertificateCollection)
 void X509Chain__ctor_m8093 (X509Chain_t1732 * __this, X509CertificateCollection_t1679 * ___chain, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509ChainStatusFlags Mono.Security.X509.X509Chain::get_Status()
 int32_t X509Chain_get_Status_m8094 (X509Chain_t1732 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Chain::get_TrustAnchors()
 X509CertificateCollection_t1679 * X509Chain_get_TrustAnchors_m8095 (X509Chain_t1732 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Chain::Build(Mono.Security.X509.X509Certificate)
 bool X509Chain_Build_m8096 (X509Chain_t1732 * __this, X509Certificate_t1524 * ___leaf, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Chain::IsValid(Mono.Security.X509.X509Certificate)
 bool X509Chain_IsValid_m8097 (X509Chain_t1732 * __this, X509Certificate_t1524 * ___cert, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Certificate Mono.Security.X509.X509Chain::FindCertificateParent(Mono.Security.X509.X509Certificate)
 X509Certificate_t1524 * X509Chain_FindCertificateParent_m8098 (X509Chain_t1732 * __this, X509Certificate_t1524 * ___child, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Certificate Mono.Security.X509.X509Chain::FindCertificateRoot(Mono.Security.X509.X509Certificate)
 X509Certificate_t1524 * X509Chain_FindCertificateRoot_m8099 (X509Chain_t1732 * __this, X509Certificate_t1524 * ___potentialRoot, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Chain::IsTrusted(Mono.Security.X509.X509Certificate)
 bool X509Chain_IsTrusted_m8100 (X509Chain_t1732 * __this, X509Certificate_t1524 * ___potentialTrusted, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Chain::IsParent(Mono.Security.X509.X509Certificate,Mono.Security.X509.X509Certificate)
 bool X509Chain_IsParent_m8101 (X509Chain_t1732 * __this, X509Certificate_t1524 * ___child, X509Certificate_t1524 * ___parent, MethodInfo* method) IL2CPP_METHOD_ATTR;
