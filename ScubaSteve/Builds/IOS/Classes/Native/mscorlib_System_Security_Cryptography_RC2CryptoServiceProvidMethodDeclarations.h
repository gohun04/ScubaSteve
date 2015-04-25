#pragma once

// System.Security.Cryptography.RC2CryptoServiceProvider
struct RC2CryptoServiceProvider_t2259;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t1717;
// System.Byte[]
struct ByteU5BU5D_t163;

// System.Void System.Security.Cryptography.RC2CryptoServiceProvider::.ctor()
 void RC2CryptoServiceProvider__ctor_m11868 (RC2CryptoServiceProvider_t2259 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.RC2CryptoServiceProvider::get_EffectiveKeySize()
 int32_t RC2CryptoServiceProvider_get_EffectiveKeySize_m11869 (RC2CryptoServiceProvider_t2259 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.RC2CryptoServiceProvider::CreateDecryptor(System.Byte[],System.Byte[])
 Object_t * RC2CryptoServiceProvider_CreateDecryptor_m11870 (RC2CryptoServiceProvider_t2259 * __this, ByteU5BU5D_t163* ___rgbKey, ByteU5BU5D_t163* ___rgbIV, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.RC2CryptoServiceProvider::CreateEncryptor(System.Byte[],System.Byte[])
 Object_t * RC2CryptoServiceProvider_CreateEncryptor_m11871 (RC2CryptoServiceProvider_t2259 * __this, ByteU5BU5D_t163* ___rgbKey, ByteU5BU5D_t163* ___rgbIV, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RC2CryptoServiceProvider::GenerateIV()
 void RC2CryptoServiceProvider_GenerateIV_m11872 (RC2CryptoServiceProvider_t2259 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RC2CryptoServiceProvider::GenerateKey()
 void RC2CryptoServiceProvider_GenerateKey_m11873 (RC2CryptoServiceProvider_t2259 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
