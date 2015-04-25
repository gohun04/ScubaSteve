#pragma once

// System.ResolveEventHandler
struct ResolveEventHandler_t2340;
// System.Object
struct Object_t;
// System.Reflection.Assembly
struct Assembly_t1667;
// System.ResolveEventArgs
struct ResolveEventArgs_t2399;
// System.IAsyncResult
struct IAsyncResult_t31;
// System.AsyncCallback
struct AsyncCallback_t32;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.ResolveEventHandler::.ctor(System.Object,System.IntPtr)
 void ResolveEventHandler__ctor_m13224 (ResolveEventHandler_t2340 * __this, Object_t * ___object, IntPtr_t35 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.ResolveEventHandler::Invoke(System.Object,System.ResolveEventArgs)
 Assembly_t1667 * ResolveEventHandler_Invoke_m13225 (ResolveEventHandler_t2340 * __this, Object_t * ___sender, ResolveEventArgs_t2399 * ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.ResolveEventHandler::BeginInvoke(System.Object,System.ResolveEventArgs,System.AsyncCallback,System.Object)
 Object_t * ResolveEventHandler_BeginInvoke_m13226 (ResolveEventHandler_t2340 * __this, Object_t * ___sender, ResolveEventArgs_t2399 * ___args, AsyncCallback_t32 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.ResolveEventHandler::EndInvoke(System.IAsyncResult)
 Assembly_t1667 * ResolveEventHandler_EndInvoke_m13227 (ResolveEventHandler_t2340 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
