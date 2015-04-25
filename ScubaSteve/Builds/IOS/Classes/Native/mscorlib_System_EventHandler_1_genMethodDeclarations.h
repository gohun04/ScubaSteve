#pragma once

// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_t576;
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

// System.Void System.EventHandler`1<System.EventArgs>::.ctor(System.Object,System.IntPtr)
 void EventHandler_1__ctor_m2550 (EventHandler_1_t576 * __this, Object_t * ___object, IntPtr_t35 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.EventHandler`1<System.EventArgs>::Invoke(System.Object,TEventArgs)
 void EventHandler_1_Invoke_m2568 (EventHandler_1_t576 * __this, Object_t * ___sender, EventArgs_t565 * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.EventHandler`1<System.EventArgs>::BeginInvoke(System.Object,TEventArgs,System.AsyncCallback,System.Object)
 Object_t * EventHandler_1_BeginInvoke_m21187 (EventHandler_1_t576 * __this, Object_t * ___sender, EventArgs_t565 * ___e, AsyncCallback_t32 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.EventHandler`1<System.EventArgs>::EndInvoke(System.IAsyncResult)
 void EventHandler_1_EndInvoke_m21188 (EventHandler_1_t576 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
