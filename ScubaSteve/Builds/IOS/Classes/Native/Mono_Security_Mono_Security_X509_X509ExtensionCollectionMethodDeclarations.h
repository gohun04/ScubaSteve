#pragma once

// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t1682;
// Mono.Security.X509.X509Extension
struct X509Extension_t1548;
// System.String
struct String_t;
// Mono.Security.ASN1
struct ASN1_t1535;
// System.Collections.IEnumerator
struct IEnumerator_t26;

// System.Void Mono.Security.X509.X509ExtensionCollection::.ctor()
 void X509ExtensionCollection__ctor_m8120 (X509ExtensionCollection_t1682 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509ExtensionCollection::.ctor(Mono.Security.ASN1)
 void X509ExtensionCollection__ctor_m8121 (X509ExtensionCollection_t1682 * __this, ASN1_t1535 * ___asn1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Mono.Security.X509.X509ExtensionCollection::System.Collections.IEnumerable.GetEnumerator()
 Object_t * X509ExtensionCollection_System_Collections_IEnumerable_GetEnumerator_m8122 (X509ExtensionCollection_t1682 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.X509ExtensionCollection::IndexOf(System.String)
 int32_t X509ExtensionCollection_IndexOf_m8123 (X509ExtensionCollection_t1682 * __this, String_t* ___oid, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Extension Mono.Security.X509.X509ExtensionCollection::get_Item(System.String)
 X509Extension_t1548 * X509ExtensionCollection_get_Item_m7741 (X509ExtensionCollection_t1682 * __this, String_t* ___oid, MethodInfo* method) IL2CPP_METHOD_ATTR;
