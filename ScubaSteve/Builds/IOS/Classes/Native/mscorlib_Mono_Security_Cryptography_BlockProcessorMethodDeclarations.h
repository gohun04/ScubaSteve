#pragma once

// Mono.Security.Cryptography.BlockProcessor
struct BlockProcessor_t1919;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t1717;
// System.Byte[]
struct ByteU5BU5D_t163;

// System.Void Mono.Security.Cryptography.BlockProcessor::.ctor(System.Security.Cryptography.ICryptoTransform,System.Int32)
 void BlockProcessor__ctor_m9840 (BlockProcessor_t1919 * __this, Object_t * ___transform, int32_t ___blockSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.BlockProcessor::Finalize()
 void BlockProcessor_Finalize_m9841 (BlockProcessor_t1919 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.BlockProcessor::Initialize()
 void BlockProcessor_Initialize_m9842 (BlockProcessor_t1919 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.BlockProcessor::Core(System.Byte[])
 void BlockProcessor_Core_m9843 (BlockProcessor_t1919 * __this, ByteU5BU5D_t163* ___rgb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.BlockProcessor::Core(System.Byte[],System.Int32,System.Int32)
 void BlockProcessor_Core_m9844 (BlockProcessor_t1919 * __this, ByteU5BU5D_t163* ___rgb, int32_t ___ib, int32_t ___cb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.BlockProcessor::Final()
 ByteU5BU5D_t163* BlockProcessor_Final_m9845 (BlockProcessor_t1919 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
