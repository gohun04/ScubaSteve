#pragma once

// Mono.Math.BigInteger/Kernel
struct Kernel_t1701;
// Mono.Math.BigInteger
struct BigInteger_t1699;
// Mono.Math.BigInteger[]
struct BigIntegerU5BU5D_t1702;
// System.UInt32[]
struct UInt32U5BU5D_t1703;
// Mono.Math.BigInteger/Sign
#include "Mono_Security_Mono_Math_BigInteger_Sign.h"

// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::AddSameSign(Mono.Math.BigInteger,Mono.Math.BigInteger)
 BigInteger_t1699 * Kernel_AddSameSign_m7871 (Object_t * __this/* static, unused */, BigInteger_t1699 * ___bi1, BigInteger_t1699 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::Subtract(Mono.Math.BigInteger,Mono.Math.BigInteger)
 BigInteger_t1699 * Kernel_Subtract_m7872 (Object_t * __this/* static, unused */, BigInteger_t1699 * ___big, BigInteger_t1699 * ___small, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::MinusEq(Mono.Math.BigInteger,Mono.Math.BigInteger)
 void Kernel_MinusEq_m7873 (Object_t * __this/* static, unused */, BigInteger_t1699 * ___big, BigInteger_t1699 * ___small, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::PlusEq(Mono.Math.BigInteger,Mono.Math.BigInteger)
 void Kernel_PlusEq_m7874 (Object_t * __this/* static, unused */, BigInteger_t1699 * ___bi1, BigInteger_t1699 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger/Sign Mono.Math.BigInteger/Kernel::Compare(Mono.Math.BigInteger,Mono.Math.BigInteger)
 int32_t Kernel_Compare_m7875 (Object_t * __this/* static, unused */, BigInteger_t1699 * ___bi1, BigInteger_t1699 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Math.BigInteger/Kernel::SingleByteDivideInPlace(Mono.Math.BigInteger,System.UInt32)
 uint32_t Kernel_SingleByteDivideInPlace_m7876 (Object_t * __this/* static, unused */, BigInteger_t1699 * ___n, uint32_t ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Math.BigInteger/Kernel::DwordMod(Mono.Math.BigInteger,System.UInt32)
 uint32_t Kernel_DwordMod_m7877 (Object_t * __this/* static, unused */, BigInteger_t1699 * ___n, uint32_t ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger[] Mono.Math.BigInteger/Kernel::DwordDivMod(Mono.Math.BigInteger,System.UInt32)
 BigIntegerU5BU5D_t1702* Kernel_DwordDivMod_m7878 (Object_t * __this/* static, unused */, BigInteger_t1699 * ___n, uint32_t ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger[] Mono.Math.BigInteger/Kernel::multiByteDivide(Mono.Math.BigInteger,Mono.Math.BigInteger)
 BigIntegerU5BU5D_t1702* Kernel_multiByteDivide_m7879 (Object_t * __this/* static, unused */, BigInteger_t1699 * ___bi1, BigInteger_t1699 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::LeftShift(Mono.Math.BigInteger,System.Int32)
 BigInteger_t1699 * Kernel_LeftShift_m7880 (Object_t * __this/* static, unused */, BigInteger_t1699 * ___bi, int32_t ___n, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::RightShift(Mono.Math.BigInteger,System.Int32)
 BigInteger_t1699 * Kernel_RightShift_m7881 (Object_t * __this/* static, unused */, BigInteger_t1699 * ___bi, int32_t ___n, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::Multiply(System.UInt32[],System.UInt32,System.UInt32,System.UInt32[],System.UInt32,System.UInt32,System.UInt32[],System.UInt32)
 void Kernel_Multiply_m7882 (Object_t * __this/* static, unused */, UInt32U5BU5D_t1703* ___x, uint32_t ___xOffset, uint32_t ___xLen, UInt32U5BU5D_t1703* ___y, uint32_t ___yOffset, uint32_t ___yLen, UInt32U5BU5D_t1703* ___d, uint32_t ___dOffset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::MultiplyMod2p32pmod(System.UInt32[],System.Int32,System.Int32,System.UInt32[],System.Int32,System.Int32,System.UInt32[],System.Int32,System.Int32)
 void Kernel_MultiplyMod2p32pmod_m7883 (Object_t * __this/* static, unused */, UInt32U5BU5D_t1703* ___x, int32_t ___xOffset, int32_t ___xLen, UInt32U5BU5D_t1703* ___y, int32_t ___yOffest, int32_t ___yLen, UInt32U5BU5D_t1703* ___d, int32_t ___dOffset, int32_t ___mod, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Math.BigInteger/Kernel::modInverse(Mono.Math.BigInteger,System.UInt32)
 uint32_t Kernel_modInverse_m7884 (Object_t * __this/* static, unused */, BigInteger_t1699 * ___bi, uint32_t ___modulus, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::modInverse(Mono.Math.BigInteger,Mono.Math.BigInteger)
 BigInteger_t1699 * Kernel_modInverse_m7885 (Object_t * __this/* static, unused */, BigInteger_t1699 * ___bi, BigInteger_t1699 * ___modulus, MethodInfo* method) IL2CPP_METHOD_ATTR;
