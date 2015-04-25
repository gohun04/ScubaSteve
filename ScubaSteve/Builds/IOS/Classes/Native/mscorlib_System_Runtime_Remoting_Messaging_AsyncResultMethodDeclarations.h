#pragma once

// System.Runtime.Remoting.Messaging.AsyncResult
struct AsyncResult_t2164;
// System.Object
struct Object_t;
// System.Threading.WaitHandle
struct WaitHandle_t1777;
// System.Runtime.Remoting.Messaging.IMessageSink
struct IMessageSink_t1695;
// System.Runtime.Remoting.Messaging.MonoMethodMessage
struct MonoMethodMessage_t2161;
// System.Runtime.Remoting.Messaging.IMessageCtrl
struct IMessageCtrl_t2162;
// System.Runtime.Remoting.Messaging.IMessage
struct IMessage_t2163;

// System.Void System.Runtime.Remoting.Messaging.AsyncResult::.ctor()
 void AsyncResult__ctor_m11396 (AsyncResult_t2164 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.AsyncResult::get_AsyncState()
 Object_t * AsyncResult_get_AsyncState_m11397 (AsyncResult_t2164 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle System.Runtime.Remoting.Messaging.AsyncResult::get_AsyncWaitHandle()
 WaitHandle_t1777 * AsyncResult_get_AsyncWaitHandle_m11398 (AsyncResult_t2164 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Messaging.AsyncResult::get_CompletedSynchronously()
 bool AsyncResult_get_CompletedSynchronously_m11399 (AsyncResult_t2164 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Messaging.AsyncResult::get_IsCompleted()
 bool AsyncResult_get_IsCompleted_m11400 (AsyncResult_t2164 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Messaging.AsyncResult::get_EndInvokeCalled()
 bool AsyncResult_get_EndInvokeCalled_m11401 (AsyncResult_t2164 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.AsyncResult::set_EndInvokeCalled(System.Boolean)
 void AsyncResult_set_EndInvokeCalled_m11402 (AsyncResult_t2164 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.AsyncResult::get_AsyncDelegate()
 Object_t * AsyncResult_get_AsyncDelegate_m11403 (AsyncResult_t2164 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Messaging.AsyncResult::get_NextSink()
 Object_t * AsyncResult_get_NextSink_m11404 (AsyncResult_t2164 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.IMessageCtrl System.Runtime.Remoting.Messaging.AsyncResult::AsyncProcessMessage(System.Runtime.Remoting.Messaging.IMessage,System.Runtime.Remoting.Messaging.IMessageSink)
 Object_t * AsyncResult_AsyncProcessMessage_m11405 (AsyncResult_t2164 * __this, Object_t * ___msg, Object_t * ___replySink, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.IMessage System.Runtime.Remoting.Messaging.AsyncResult::GetReplyMessage()
 Object_t * AsyncResult_GetReplyMessage_m11406 (AsyncResult_t2164 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.AsyncResult::SetMessageCtrl(System.Runtime.Remoting.Messaging.IMessageCtrl)
 void AsyncResult_SetMessageCtrl_m11407 (AsyncResult_t2164 * __this, Object_t * ___mc, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.AsyncResult::SetCompletedSynchronously(System.Boolean)
 void AsyncResult_SetCompletedSynchronously_m11408 (AsyncResult_t2164 * __this, bool ___completed, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.IMessage System.Runtime.Remoting.Messaging.AsyncResult::EndInvoke()
 Object_t * AsyncResult_EndInvoke_m11409 (AsyncResult_t2164 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.IMessage System.Runtime.Remoting.Messaging.AsyncResult::SyncProcessMessage(System.Runtime.Remoting.Messaging.IMessage)
 Object_t * AsyncResult_SyncProcessMessage_m11410 (AsyncResult_t2164 * __this, Object_t * ___msg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.MonoMethodMessage System.Runtime.Remoting.Messaging.AsyncResult::get_CallMessage()
 MonoMethodMessage_t2161 * AsyncResult_get_CallMessage_m11411 (AsyncResult_t2164 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.AsyncResult::set_CallMessage(System.Runtime.Remoting.Messaging.MonoMethodMessage)
 void AsyncResult_set_CallMessage_m11412 (AsyncResult_t2164 * __this, MonoMethodMessage_t2161 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
