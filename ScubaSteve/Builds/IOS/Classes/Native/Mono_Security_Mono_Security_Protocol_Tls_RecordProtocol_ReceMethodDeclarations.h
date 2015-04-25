﻿#pragma once

// Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult
struct ReceiveRecordAsyncResult_t1776;
// System.IO.Stream
struct Stream_t1760;
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

// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::.ctor(System.AsyncCallback,System.Object,System.Byte[],System.IO.Stream)
 void ReceiveRecordAsyncResult__ctor_m8342 (ReceiveRecordAsyncResult_t1776 * __this, AsyncCallback_t32 * ___userCallback, Object_t * ___userState, ByteU5BU5D_t163* ___initialBuffer, Stream_t1760 * ___record, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_Record()
 Stream_t1760 * ReceiveRecordAsyncResult_get_Record_m8343 (ReceiveRecordAsyncResult_t1776 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_ResultingBuffer()
 ByteU5BU5D_t163* ReceiveRecordAsyncResult_get_ResultingBuffer_m8344 (ReceiveRecordAsyncResult_t1776 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_InitialBuffer()
 ByteU5BU5D_t163* ReceiveRecordAsyncResult_get_InitialBuffer_m8345 (ReceiveRecordAsyncResult_t1776 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncState()
 Object_t * ReceiveRecordAsyncResult_get_AsyncState_m8346 (ReceiveRecordAsyncResult_t1776 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncException()
 Exception_t151 * ReceiveRecordAsyncResult_get_AsyncException_m8347 (ReceiveRecordAsyncResult_t1776 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_CompletedWithError()
 bool ReceiveRecordAsyncResult_get_CompletedWithError_m8348 (ReceiveRecordAsyncResult_t1776 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncWaitHandle()
 WaitHandle_t1777 * ReceiveRecordAsyncResult_get_AsyncWaitHandle_m8349 (ReceiveRecordAsyncResult_t1776 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_IsCompleted()
 bool ReceiveRecordAsyncResult_get_IsCompleted_m8350 (ReceiveRecordAsyncResult_t1776 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception,System.Byte[])
 void ReceiveRecordAsyncResult_SetComplete_m8351 (ReceiveRecordAsyncResult_t1776 * __this, Exception_t151 * ___ex, ByteU5BU5D_t163* ___resultingBuffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception)
 void ReceiveRecordAsyncResult_SetComplete_m8352 (ReceiveRecordAsyncResult_t1776 * __this, Exception_t151 * ___ex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Byte[])
 void ReceiveRecordAsyncResult_SetComplete_m8353 (ReceiveRecordAsyncResult_t1776 * __this, ByteU5BU5D_t163* ___resultingBuffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
