#pragma once

// System.Security.Cryptography.RSACryptoServiceProvider
struct RSACryptoServiceProvider_t1669;
// System.Security.Cryptography.CspParameters
struct CspParameters_t1823;
// System.Byte[]
struct ByteU5BU5D_t163;
// System.Object
struct Object_t;
// System.EventArgs
struct EventArgs_t565;
// System.Security.Cryptography.RSAParameters
#include "mscorlib_System_Security_Cryptography_RSAParameters.h"

// System.Void System.Security.Cryptography.RSACryptoServiceProvider::.ctor()
 void RSACryptoServiceProvider__ctor_m11915 (RSACryptoServiceProvider_t1669 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::.ctor(System.Security.Cryptography.CspParameters)
 void RSACryptoServiceProvider__ctor_m8711 (RSACryptoServiceProvider_t1669 * __this, CspParameters_t1823 * ___parameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::.ctor(System.Int32)
 void RSACryptoServiceProvider__ctor_m7651 (RSACryptoServiceProvider_t1669 * __this, int32_t ___dwKeySize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::.cctor()
 void RSACryptoServiceProvider__cctor_m11916 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::Common(System.Int32,System.Security.Cryptography.CspParameters)
 void RSACryptoServiceProvider_Common_m11917 (RSACryptoServiceProvider_t1669 * __this, int32_t ___dwKeySize, CspParameters_t1823 * ___p, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::Finalize()
 void RSACryptoServiceProvider_Finalize_m11918 (RSACryptoServiceProvider_t1669 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.RSACryptoServiceProvider::get_KeySize()
 int32_t RSACryptoServiceProvider_get_KeySize_m11919 (RSACryptoServiceProvider_t1669 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::get_PublicOnly()
 bool RSACryptoServiceProvider_get_PublicOnly_m7630 (RSACryptoServiceProvider_t1669 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.RSACryptoServiceProvider::DecryptValue(System.Byte[])
 ByteU5BU5D_t163* RSACryptoServiceProvider_DecryptValue_m11920 (RSACryptoServiceProvider_t1669 * __this, ByteU5BU5D_t163* ___rgb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.RSACryptoServiceProvider::EncryptValue(System.Byte[])
 ByteU5BU5D_t163* RSACryptoServiceProvider_EncryptValue_m11921 (RSACryptoServiceProvider_t1669 * __this, ByteU5BU5D_t163* ___rgb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSAParameters System.Security.Cryptography.RSACryptoServiceProvider::ExportParameters(System.Boolean)
 RSAParameters_t1671  RSACryptoServiceProvider_ExportParameters_m11922 (RSACryptoServiceProvider_t1669 * __this, bool ___includePrivateParameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::ImportParameters(System.Security.Cryptography.RSAParameters)
 void RSACryptoServiceProvider_ImportParameters_m11923 (RSACryptoServiceProvider_t1669 * __this, RSAParameters_t1671  ___parameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::Dispose(System.Boolean)
 void RSACryptoServiceProvider_Dispose_m11924 (RSACryptoServiceProvider_t1669 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::OnKeyGenerated(System.Object,System.EventArgs)
 void RSACryptoServiceProvider_OnKeyGenerated_m11925 (RSACryptoServiceProvider_t1669 * __this, Object_t * ___sender, EventArgs_t565 * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
