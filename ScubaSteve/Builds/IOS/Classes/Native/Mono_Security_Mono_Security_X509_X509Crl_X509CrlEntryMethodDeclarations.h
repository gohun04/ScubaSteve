#pragma once

// Mono.Security.X509.X509Crl/X509CrlEntry
struct X509CrlEntry_t1549;
// System.Byte[]
struct ByteU5BU5D_t163;
// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t1682;
// Mono.Security.ASN1
struct ASN1_t1535;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void Mono.Security.X509.X509Crl/X509CrlEntry::.ctor(Mono.Security.ASN1)
 void X509CrlEntry__ctor_m8102 (X509CrlEntry_t1549 * __this, ASN1_t1535 * ___entry, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Crl/X509CrlEntry::get_SerialNumber()
 ByteU5BU5D_t163* X509CrlEntry_get_SerialNumber_m8103 (X509CrlEntry_t1549 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.X509.X509Crl/X509CrlEntry::get_RevocationDate()
 DateTime_t45  X509CrlEntry_get_RevocationDate_m7747 (X509CrlEntry_t1549 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Crl/X509CrlEntry::get_Extensions()
 X509ExtensionCollection_t1682 * X509CrlEntry_get_Extensions_m7753 (X509CrlEntry_t1549 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
