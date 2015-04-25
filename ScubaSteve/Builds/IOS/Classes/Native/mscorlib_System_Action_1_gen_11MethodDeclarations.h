#pragma once

// System.Action`1<System.Object>
struct Action_1_t3044;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t31;
// System.AsyncCallback
struct AsyncCallback_t32;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
 void Action_1__ctor_m15589_gshared (Action_1_t3044 * __this, Object_t * ___object, IntPtr_t35 ___method, MethodInfo* method);
#define Action_1__ctor_m15589(__this, ___object, ___method, method) (void)Action_1__ctor_m15589_gshared((Action_1_t3044 *)__this, (Object_t *)___object, (IntPtr_t35)___method, method)
// System.Void System.Action`1<System.Object>::Invoke(T)
 void Action_1_Invoke_m15590_gshared (Action_1_t3044 * __this, Object_t * ___obj, MethodInfo* method);
#define Action_1_Invoke_m15590(__this, ___obj, method) (void)Action_1_Invoke_m15590_gshared((Action_1_t3044 *)__this, (Object_t *)___obj, method)
// System.IAsyncResult System.Action`1<System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Action_1_BeginInvoke_m15592_gshared (Action_1_t3044 * __this, Object_t * ___obj, AsyncCallback_t32 * ___callback, Object_t * ___object, MethodInfo* method);
#define Action_1_BeginInvoke_m15592(__this, ___obj, ___callback, ___object, method) (Object_t *)Action_1_BeginInvoke_m15592_gshared((Action_1_t3044 *)__this, (Object_t *)___obj, (AsyncCallback_t32 *)___callback, (Object_t *)___object, method)
// System.Void System.Action`1<System.Object>::EndInvoke(System.IAsyncResult)
 void Action_1_EndInvoke_m15594_gshared (Action_1_t3044 * __this, Object_t * ___result, MethodInfo* method);
#define Action_1_EndInvoke_m15594(__this, ___result, method) (void)Action_1_EndInvoke_m15594_gshared((Action_1_t3044 *)__this, (Object_t *)___result, method)
