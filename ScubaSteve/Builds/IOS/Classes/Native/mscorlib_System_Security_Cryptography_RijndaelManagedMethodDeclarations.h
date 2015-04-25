#pragma once

// System.Security.Cryptography.RijndaelManaged
struct RijndaelManaged_t2265;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t1717;
// System.Byte[]
struct ByteU5BU5D_t163;

// System.Void System.Security.Cryptography.RijndaelManaged::.ctor()
 void RijndaelManaged__ctor_m11937 (RijndaelManaged_t2265 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelManaged::GenerateIV()
 void RijndaelManaged_GenerateIV_m11938 (RijndaelManaged_t2265 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelManaged::GenerateKey()
 void RijndaelManaged_GenerateKey_m11939 (RijndaelManaged_t2265 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.RijndaelManaged::CreateDecryptor(System.Byte[],System.Byte[])
 Object_t * RijndaelManaged_CreateDecryptor_m11940 (RijndaelManaged_t2265 * __this, ByteU5BU5D_t163* ___rgbKey, ByteU5BU5D_t163* ___rgbIV, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.RijndaelManaged::CreateEncryptor(System.Byte[],System.Byte[])
 Object_t * RijndaelManaged_CreateEncryptor_m11941 (RijndaelManaged_t2265 * __this, ByteU5BU5D_t163* ___rgbKey, ByteU5BU5D_t163* ___rgbIV, MethodInfo* method) IL2CPP_METHOD_ATTR;
