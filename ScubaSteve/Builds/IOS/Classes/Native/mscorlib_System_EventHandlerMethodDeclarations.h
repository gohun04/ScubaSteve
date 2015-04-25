#pragma once

// System.EventHandler
struct EventHandler_t2341;
// System.Object
struct Object_t;
// System.EventArgs
struct EventArgs_t565;
// System.IAsyncResult
struct IAsyncResult_t31;
// System.AsyncCallback
struct AsyncCallback_t32;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.EventHandler::.ctor(System.Object,System.IntPtr)
 void EventHandler__ctor_m13220 (EventHandler_t2341 * __this, Object_t * ___object, IntPtr_t35 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.EventHandler::Invoke(System.Object,System.EventArgs)
 void EventHandler_Invoke_m13221 (EventHandler_t2341 * __this, Object_t * ___sender, EventArgs_t565 * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.EventHandler::BeginInvoke(System.Object,System.EventArgs,System.AsyncCallback,System.Object)
 Object_t * EventHandler_BeginInvoke_m13222 (EventHandler_t2341 * __this, Object_t * ___sender, EventArgs_t565 * ___e, AsyncCallback_t32 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.EventHandler::EndInvoke(System.IAsyncResult)
 void EventHandler_EndInvoke_m13223 (EventHandler_t2341 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
