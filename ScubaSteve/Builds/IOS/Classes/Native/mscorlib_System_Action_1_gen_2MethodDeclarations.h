﻿#pragma once

// System.Action`1<System.Boolean>
struct Action_1_t118;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t31;
// System.AsyncCallback
struct AsyncCallback_t32;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
 void Action_1__ctor_m1593 (Action_1_t118 * __this, Object_t * ___object, IntPtr_t35 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Action`1<System.Boolean>::Invoke(T)
 void Action_1_Invoke_m1607 (Action_1_t118 * __this, bool ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Action`1<System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Action_1_BeginInvoke_m16739 (Action_1_t118 * __this, bool ___obj, AsyncCallback_t32 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Action`1<System.Boolean>::EndInvoke(System.IAsyncResult)
 void Action_1_EndInvoke_m16740 (Action_1_t118 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
