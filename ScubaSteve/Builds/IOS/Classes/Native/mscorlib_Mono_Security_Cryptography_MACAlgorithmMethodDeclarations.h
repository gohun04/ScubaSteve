#pragma once

// Mono.Security.Cryptography.MACAlgorithm
struct MACAlgorithm_t1923;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t1728;
// System.Byte[]
struct ByteU5BU5D_t163;

// System.Void Mono.Security.Cryptography.MACAlgorithm::.ctor(System.Security.Cryptography.SymmetricAlgorithm)
 void MACAlgorithm__ctor_m9895 (MACAlgorithm_t1923 * __this, SymmetricAlgorithm_t1728 * ___algorithm, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.MACAlgorithm::Initialize(System.Byte[])
 void MACAlgorithm_Initialize_m9896 (MACAlgorithm_t1923 * __this, ByteU5BU5D_t163* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.MACAlgorithm::Core(System.Byte[],System.Int32,System.Int32)
 void MACAlgorithm_Core_m9897 (MACAlgorithm_t1923 * __this, ByteU5BU5D_t163* ___rgb, int32_t ___ib, int32_t ___cb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.MACAlgorithm::Final()
 ByteU5BU5D_t163* MACAlgorithm_Final_m9898 (MACAlgorithm_t1923 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
