﻿#pragma once

// Mono.Security.X509.X509Stores
struct X509Stores_t1562;
// Mono.Security.X509.X509Store
struct X509Store_t1561;
// System.String
struct String_t;

// System.Void Mono.Security.X509.X509Stores::.ctor(System.String)
 void X509Stores__ctor_m8132 (X509Stores_t1562 * __this, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Store Mono.Security.X509.X509Stores::get_TrustedRoot()
 X509Store_t1561 * X509Stores_get_TrustedRoot_m8133 (X509Stores_t1562 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Store Mono.Security.X509.X509Stores::Open(System.String,System.Boolean)
 X509Store_t1561 * X509Stores_Open_m7764 (X509Stores_t1562 * __this, String_t* ___storeName, bool ___create, MethodInfo* method) IL2CPP_METHOD_ATTR;
