#pragma once

// Mono.Security.X509.X509Store
struct X509Store_t1561;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t1679;
// System.Collections.ArrayList
struct ArrayList_t1480;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t163;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t1524;
// Mono.Security.X509.X509Crl
struct X509Crl_t1547;

// System.Void Mono.Security.X509.X509Store::.ctor(System.String,System.Boolean)
 void X509Store__ctor_m8124 (X509Store_t1561 * __this, String_t* ___path, bool ___crl, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Store::get_Certificates()
 X509CertificateCollection_t1679 * X509Store_get_Certificates_m7765 (X509Store_t1561 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList Mono.Security.X509.X509Store::get_Crls()
 ArrayList_t1480 * X509Store_get_Crls_m7749 (X509Store_t1561 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Store::Load(System.String)
 ByteU5BU5D_t163* X509Store_Load_m8125 (X509Store_t1561 * __this, String_t* ___filename, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Certificate Mono.Security.X509.X509Store::LoadCertificate(System.String)
 X509Certificate_t1524 * X509Store_LoadCertificate_m8126 (X509Store_t1561 * __this, String_t* ___filename, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Crl Mono.Security.X509.X509Store::LoadCrl(System.String)
 X509Crl_t1547 * X509Store_LoadCrl_m8127 (X509Store_t1561 * __this, String_t* ___filename, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Store::CheckStore(System.String,System.Boolean)
 bool X509Store_CheckStore_m8128 (X509Store_t1561 * __this, String_t* ___path, bool ___throwException, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Store::BuildCertificatesCollection(System.String)
 X509CertificateCollection_t1679 * X509Store_BuildCertificatesCollection_m8129 (X509Store_t1561 * __this, String_t* ___storeName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList Mono.Security.X509.X509Store::BuildCrlsCollection(System.String)
 ArrayList_t1480 * X509Store_BuildCrlsCollection_m8130 (X509Store_t1561 * __this, String_t* ___storeName, MethodInfo* method) IL2CPP_METHOD_ATTR;
