#pragma once

// System.Security.Cryptography.DESCryptoServiceProvider
struct DESCryptoServiceProvider_t2250;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t1717;
// System.Byte[]
struct ByteU5BU5D_t163;

// System.Void System.Security.Cryptography.DESCryptoServiceProvider::.ctor()
 void DESCryptoServiceProvider__ctor_m11781 (DESCryptoServiceProvider_t2250 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.DESCryptoServiceProvider::CreateDecryptor(System.Byte[],System.Byte[])
 Object_t * DESCryptoServiceProvider_CreateDecryptor_m11782 (DESCryptoServiceProvider_t2250 * __this, ByteU5BU5D_t163* ___rgbKey, ByteU5BU5D_t163* ___rgbIV, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.DESCryptoServiceProvider::CreateEncryptor(System.Byte[],System.Byte[])
 Object_t * DESCryptoServiceProvider_CreateEncryptor_m11783 (DESCryptoServiceProvider_t2250 * __this, ByteU5BU5D_t163* ___rgbKey, ByteU5BU5D_t163* ___rgbIV, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESCryptoServiceProvider::GenerateIV()
 void DESCryptoServiceProvider_GenerateIV_m11784 (DESCryptoServiceProvider_t2250 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESCryptoServiceProvider::GenerateKey()
 void DESCryptoServiceProvider_GenerateKey_m11785 (DESCryptoServiceProvider_t2250 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
