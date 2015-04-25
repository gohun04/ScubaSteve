#pragma once

// System.Security.Cryptography.RijndaelTransform
struct RijndaelTransform_t2266;
// System.Security.Cryptography.Rijndael
struct Rijndael_t1839;
// System.Byte[]
struct ByteU5BU5D_t163;
// System.UInt32[]
struct UInt32U5BU5D_t1703;

// System.Void System.Security.Cryptography.RijndaelTransform::.ctor(System.Security.Cryptography.Rijndael,System.Boolean,System.Byte[],System.Byte[])
 void RijndaelTransform__ctor_m11942 (RijndaelTransform_t2266 * __this, Rijndael_t1839 * ___algo, bool ___encryption, ByteU5BU5D_t163* ___key, ByteU5BU5D_t163* ___iv, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::.cctor()
 void RijndaelTransform__cctor_m11943 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Clear()
 void RijndaelTransform_Clear_m11944 (RijndaelTransform_t2266 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::ECB(System.Byte[],System.Byte[])
 void RijndaelTransform_ECB_m11945 (RijndaelTransform_t2266 * __this, ByteU5BU5D_t163* ___input, ByteU5BU5D_t163* ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Security.Cryptography.RijndaelTransform::SubByte(System.UInt32)
 uint32_t RijndaelTransform_SubByte_m11946 (RijndaelTransform_t2266 * __this, uint32_t ___a, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Encrypt128(System.Byte[],System.Byte[],System.UInt32[])
 void RijndaelTransform_Encrypt128_m11947 (RijndaelTransform_t2266 * __this, ByteU5BU5D_t163* ___indata, ByteU5BU5D_t163* ___outdata, UInt32U5BU5D_t1703* ___ekey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Encrypt192(System.Byte[],System.Byte[],System.UInt32[])
 void RijndaelTransform_Encrypt192_m11948 (RijndaelTransform_t2266 * __this, ByteU5BU5D_t163* ___indata, ByteU5BU5D_t163* ___outdata, UInt32U5BU5D_t1703* ___ekey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Encrypt256(System.Byte[],System.Byte[],System.UInt32[])
 void RijndaelTransform_Encrypt256_m11949 (RijndaelTransform_t2266 * __this, ByteU5BU5D_t163* ___indata, ByteU5BU5D_t163* ___outdata, UInt32U5BU5D_t1703* ___ekey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Decrypt128(System.Byte[],System.Byte[],System.UInt32[])
 void RijndaelTransform_Decrypt128_m11950 (RijndaelTransform_t2266 * __this, ByteU5BU5D_t163* ___indata, ByteU5BU5D_t163* ___outdata, UInt32U5BU5D_t1703* ___ekey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Decrypt192(System.Byte[],System.Byte[],System.UInt32[])
 void RijndaelTransform_Decrypt192_m11951 (RijndaelTransform_t2266 * __this, ByteU5BU5D_t163* ___indata, ByteU5BU5D_t163* ___outdata, UInt32U5BU5D_t1703* ___ekey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Decrypt256(System.Byte[],System.Byte[],System.UInt32[])
 void RijndaelTransform_Decrypt256_m11952 (RijndaelTransform_t2266 * __this, ByteU5BU5D_t163* ___indata, ByteU5BU5D_t163* ___outdata, UInt32U5BU5D_t1703* ___ekey, MethodInfo* method) IL2CPP_METHOD_ATTR;
