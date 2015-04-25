#pragma once

// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t1721;
// System.Byte[]
struct ByteU5BU5D_t163;
// System.String
struct String_t;

// System.Void System.Security.Cryptography.HashAlgorithm::.ctor()
 void HashAlgorithm__ctor_m8697 (HashAlgorithm_t1721 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.HashAlgorithm::System.IDisposable.Dispose()
 void HashAlgorithm_System_IDisposable_Dispose_m8698 (HashAlgorithm_t1721 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.HashAlgorithm::get_CanReuseTransform()
 bool HashAlgorithm_get_CanReuseTransform_m8699 (HashAlgorithm_t1721 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.HashAlgorithm::ComputeHash(System.Byte[])
 ByteU5BU5D_t163* HashAlgorithm_ComputeHash_m7772 (HashAlgorithm_t1721 * __this, ByteU5BU5D_t163* ___buffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.HashAlgorithm::ComputeHash(System.Byte[],System.Int32,System.Int32)
 ByteU5BU5D_t163* HashAlgorithm_ComputeHash_m8725 (HashAlgorithm_t1721 * __this, ByteU5BU5D_t163* ___buffer, int32_t ___offset, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.HashAlgorithm System.Security.Cryptography.HashAlgorithm::Create(System.String)
 HashAlgorithm_t1721 * HashAlgorithm_Create_m8723 (Object_t * __this/* static, unused */, String_t* ___hashName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.HashAlgorithm::get_Hash()
 ByteU5BU5D_t163* HashAlgorithm_get_Hash_m8702 (HashAlgorithm_t1721 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.HashAlgorithm::HashCore(System.Byte[],System.Int32,System.Int32)
// System.Byte[] System.Security.Cryptography.HashAlgorithm::HashFinal()
// System.Int32 System.Security.Cryptography.HashAlgorithm::get_HashSize()
 int32_t HashAlgorithm_get_HashSize_m8703 (HashAlgorithm_t1721 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.HashAlgorithm::Initialize()
// System.Void System.Security.Cryptography.HashAlgorithm::Dispose(System.Boolean)
 void HashAlgorithm_Dispose_m8704 (HashAlgorithm_t1721 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.HashAlgorithm::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
 int32_t HashAlgorithm_TransformBlock_m8700 (HashAlgorithm_t1721 * __this, ByteU5BU5D_t163* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, ByteU5BU5D_t163* ___outputBuffer, int32_t ___outputOffset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.HashAlgorithm::TransformFinalBlock(System.Byte[],System.Int32,System.Int32)
 ByteU5BU5D_t163* HashAlgorithm_TransformFinalBlock_m8701 (HashAlgorithm_t1721 * __this, ByteU5BU5D_t163* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
