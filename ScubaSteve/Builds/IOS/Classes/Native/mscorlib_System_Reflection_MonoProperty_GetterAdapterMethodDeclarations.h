#pragma once

// System.Reflection.MonoProperty/GetterAdapter
struct GetterAdapter_t2101;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t31;
// System.AsyncCallback
struct AsyncCallback_t32;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Reflection.MonoProperty/GetterAdapter::.ctor(System.Object,System.IntPtr)
 void GetterAdapter__ctor_m11245 (GetterAdapter_t2101 * __this, Object_t * ___object, IntPtr_t35 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MonoProperty/GetterAdapter::Invoke(System.Object)
 Object_t * GetterAdapter_Invoke_m11246 (GetterAdapter_t2101 * __this, Object_t * ____this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Reflection.MonoProperty/GetterAdapter::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
 Object_t * GetterAdapter_BeginInvoke_m11247 (GetterAdapter_t2101 * __this, Object_t * ____this, AsyncCallback_t32 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MonoProperty/GetterAdapter::EndInvoke(System.IAsyncResult)
 Object_t * GetterAdapter_EndInvoke_m11248 (GetterAdapter_t2101 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
