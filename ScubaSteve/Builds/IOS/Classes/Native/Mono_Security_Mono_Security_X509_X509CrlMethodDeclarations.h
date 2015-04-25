#pragma once

// Mono.Security.X509.X509Crl
struct X509Crl_t1547;
// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t1682;
// System.Byte[]
struct ByteU5BU5D_t163;
// System.String
struct String_t;
// Mono.Security.X509.X509Crl/X509CrlEntry
struct X509CrlEntry_t1549;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t1524;
// System.Security.Cryptography.DSA
struct DSA_t1525;
// System.Security.Cryptography.RSA
struct RSA_t1526;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1520;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void Mono.Security.X509.X509Crl::.ctor(System.Byte[])
 void X509Crl__ctor_m8104 (X509Crl_t1547 * __this, ByteU5BU5D_t163* ___crl, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Crl::Parse(System.Byte[])
 void X509Crl_Parse_m8105 (X509Crl_t1547 * __this, ByteU5BU5D_t163* ___crl, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Crl::get_Extensions()
 X509ExtensionCollection_t1682 * X509Crl_get_Extensions_m7742 (X509Crl_t1547 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Crl::get_Hash()
 ByteU5BU5D_t163* X509Crl_get_Hash_m8106 (X509Crl_t1547 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Crl::get_IssuerName()
 String_t* X509Crl_get_IssuerName_m7750 (X509Crl_t1547 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.X509.X509Crl::get_NextUpdate()
 DateTime_t45  X509Crl_get_NextUpdate_m7748 (X509Crl_t1547 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::Compare(System.Byte[],System.Byte[])
 bool X509Crl_Compare_m8107 (X509Crl_t1547 * __this, ByteU5BU5D_t163* ___array1, ByteU5BU5D_t163* ___array2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Crl/X509CrlEntry Mono.Security.X509.X509Crl::GetCrlEntry(Mono.Security.X509.X509Certificate)
 X509CrlEntry_t1549 * X509Crl_GetCrlEntry_m7746 (X509Crl_t1547 * __this, X509Certificate_t1524 * ___x509, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Crl/X509CrlEntry Mono.Security.X509.X509Crl::GetCrlEntry(System.Byte[])
 X509CrlEntry_t1549 * X509Crl_GetCrlEntry_m8108 (X509Crl_t1547 * __this, ByteU5BU5D_t163* ___serialNumber, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Crl::GetHashName()
 String_t* X509Crl_GetHashName_m8109 (X509Crl_t1547 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.DSA)
 bool X509Crl_VerifySignature_m8110 (X509Crl_t1547 * __this, DSA_t1525 * ___dsa, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.RSA)
 bool X509Crl_VerifySignature_m8111 (X509Crl_t1547 * __this, RSA_t1526 * ___rsa, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.AsymmetricAlgorithm)
 bool X509Crl_VerifySignature_m7745 (X509Crl_t1547 * __this, AsymmetricAlgorithm_t1520 * ___aa, MethodInfo* method) IL2CPP_METHOD_ATTR;
