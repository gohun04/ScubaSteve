﻿#pragma once
// System.Object
struct Object_t;
// System.Threading.WaitHandle
struct WaitHandle_t1777;
// System.Threading.ExecutionContext
struct ExecutionContext_t2160;
// System.Runtime.Remoting.Messaging.MonoMethodMessage
struct MonoMethodMessage_t2161;
// System.Runtime.Remoting.Messaging.IMessageCtrl
struct IMessageCtrl_t2162;
// System.Runtime.Remoting.Messaging.IMessage
struct IMessage_t2163;
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Runtime.Remoting.Messaging.AsyncResult
struct AsyncResult_t2164  : public Object_t
{
	// System.Object System.Runtime.Remoting.Messaging.AsyncResult::async_state
	Object_t * ___async_state_0;
	// System.Threading.WaitHandle System.Runtime.Remoting.Messaging.AsyncResult::handle
	WaitHandle_t1777 * ___handle_1;
	// System.Object System.Runtime.Remoting.Messaging.AsyncResult::async_delegate
	Object_t * ___async_delegate_2;
	// System.IntPtr System.Runtime.Remoting.Messaging.AsyncResult::data
	IntPtr_t35 ___data_3;
	// System.Object System.Runtime.Remoting.Messaging.AsyncResult::object_data
	Object_t * ___object_data_4;
	// System.Boolean System.Runtime.Remoting.Messaging.AsyncResult::sync_completed
	bool ___sync_completed_5;
	// System.Boolean System.Runtime.Remoting.Messaging.AsyncResult::completed
	bool ___completed_6;
	// System.Boolean System.Runtime.Remoting.Messaging.AsyncResult::endinvoke_called
	bool ___endinvoke_called_7;
	// System.Object System.Runtime.Remoting.Messaging.AsyncResult::async_callback
	Object_t * ___async_callback_8;
	// System.Threading.ExecutionContext System.Runtime.Remoting.Messaging.AsyncResult::current
	ExecutionContext_t2160 * ___current_9;
	// System.Threading.ExecutionContext System.Runtime.Remoting.Messaging.AsyncResult::original
	ExecutionContext_t2160 * ___original_10;
	// System.Int32 System.Runtime.Remoting.Messaging.AsyncResult::gchandle
	int32_t ___gchandle_11;
	// System.Runtime.Remoting.Messaging.MonoMethodMessage System.Runtime.Remoting.Messaging.AsyncResult::call_message
	MonoMethodMessage_t2161 * ___call_message_12;
	// System.Runtime.Remoting.Messaging.IMessageCtrl System.Runtime.Remoting.Messaging.AsyncResult::message_ctrl
	Object_t * ___message_ctrl_13;
	// System.Runtime.Remoting.Messaging.IMessage System.Runtime.Remoting.Messaging.AsyncResult::reply_message
	Object_t * ___reply_message_14;
};
