#pragma once

// System.Security.Cryptography.RijndaelManagedTransform
struct RijndaelManagedTransform_t2267;
// System.Security.Cryptography.Rijndael
struct Rijndael_t1839;
// System.Byte[]
struct ByteU5BU5D_t163;

// System.Void System.Security.Cryptography.RijndaelManagedTransform::.ctor(System.Security.Cryptography.Rijndael,System.Boolean,System.Byte[],System.Byte[])
 void RijndaelManagedTransform__ctor_m11953 (RijndaelManagedTransform_t2267 * __this, Rijndael_t1839 * ___algo, bool ___encryption, ByteU5BU5D_t163* ___key, ByteU5BU5D_t163* ___iv, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelManagedTransform::System.IDisposable.Dispose()
 void RijndaelManagedTransform_System_IDisposable_Dispose_m11954 (RijndaelManagedTransform_t2267 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.RijndaelManagedTransform::get_CanReuseTransform()
 bool RijndaelManagedTransform_get_CanReuseTransform_m11955 (RijndaelManagedTransform_t2267 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.RijndaelManagedTransform::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
 int32_t RijndaelManagedTransform_TransformBlock_m11956 (RijndaelManagedTransform_t2267 * __this, ByteU5BU5D_t163* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, ByteU5BU5D_t163* ___outputBuffer, int32_t ___outputOffset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.RijndaelManagedTransform::TransformFinalBlock(System.Byte[],System.Int32,System.Int32)
 ByteU5BU5D_t163* RijndaelManagedTransform_TransformFinalBlock_m11957 (RijndaelManagedTransform_t2267 * __this, ByteU5BU5D_t163* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
