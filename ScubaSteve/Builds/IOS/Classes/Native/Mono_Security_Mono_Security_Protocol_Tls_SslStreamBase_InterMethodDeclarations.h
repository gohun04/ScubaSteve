#pragma once

// Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult
struct InternalAsyncResult_t1791;
// System.Byte[]
struct ByteU5BU5D_t163;
// System.Object
struct Object_t;
// System.Exception
struct Exception_t151;
// System.Threading.WaitHandle
struct WaitHandle_t1777;
// System.AsyncCallback
struct AsyncCallback_t32;

// System.Void Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::.ctor(System.AsyncCallback,System.Object,System.Byte[],System.Int32,System.Int32,System.Boolean,System.Boolean)
 void InternalAsyncResult__ctor_m8459 (InternalAsyncResult_t1791 * __this, AsyncCallback_t32 * ___userCallback, Object_t * ___userState, ByteU5BU5D_t163* ___buffer, int32_t ___offset, int32_t ___count, bool ___fromWrite, bool ___proceedAfterHandshake, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_ProceedAfterHandshake()
 bool InternalAsyncResult_get_ProceedAfterHandshake_m8460 (InternalAsyncResult_t1791 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_FromWrite()
 bool InternalAsyncResult_get_FromWrite_m8461 (InternalAsyncResult_t1791 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_Buffer()
 ByteU5BU5D_t163* InternalAsyncResult_get_Buffer_m8462 (InternalAsyncResult_t1791 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_Offset()
 int32_t InternalAsyncResult_get_Offset_m8463 (InternalAsyncResult_t1791 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_Count()
 int32_t InternalAsyncResult_get_Count_m8464 (InternalAsyncResult_t1791 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_BytesRead()
 int32_t InternalAsyncResult_get_BytesRead_m8465 (InternalAsyncResult_t1791 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_AsyncState()
 Object_t * InternalAsyncResult_get_AsyncState_m8466 (InternalAsyncResult_t1791 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_AsyncException()
 Exception_t151 * InternalAsyncResult_get_AsyncException_m8467 (InternalAsyncResult_t1791 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_CompletedWithError()
 bool InternalAsyncResult_get_CompletedWithError_m8468 (InternalAsyncResult_t1791 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_AsyncWaitHandle()
 WaitHandle_t1777 * InternalAsyncResult_get_AsyncWaitHandle_m8469 (InternalAsyncResult_t1791 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_IsCompleted()
 bool InternalAsyncResult_get_IsCompleted_m8470 (InternalAsyncResult_t1791 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::SetComplete(System.Exception,System.Int32)
 void InternalAsyncResult_SetComplete_m8471 (InternalAsyncResult_t1791 * __this, Exception_t151 * ___ex, int32_t ___bytesRead, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::SetComplete(System.Exception)
 void InternalAsyncResult_SetComplete_m8472 (InternalAsyncResult_t1791 * __this, Exception_t151 * ___ex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::SetComplete(System.Int32)
 void InternalAsyncResult_SetComplete_m8473 (InternalAsyncResult_t1791 * __this, int32_t ___bytesRead, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::SetComplete()
 void InternalAsyncResult_SetComplete_m8474 (InternalAsyncResult_t1791 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
