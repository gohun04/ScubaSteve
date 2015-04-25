#pragma once

// System.AppDomainInitializer
struct AppDomainInitializer_t2343;
// System.Object
struct Object_t;
// System.String[]
struct StringU5BU5D_t65;
// System.IAsyncResult
struct IAsyncResult_t31;
// System.AsyncCallback
struct AsyncCallback_t32;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.AppDomainInitializer::.ctor(System.Object,System.IntPtr)
 void AppDomainInitializer__ctor_m13212 (AppDomainInitializer_t2343 * __this, Object_t * ___object, IntPtr_t35 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.AppDomainInitializer::Invoke(System.String[])
 void AppDomainInitializer_Invoke_m13213 (AppDomainInitializer_t2343 * __this, StringU5BU5D_t65* ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.AppDomainInitializer::BeginInvoke(System.String[],System.AsyncCallback,System.Object)
 Object_t * AppDomainInitializer_BeginInvoke_m13214 (AppDomainInitializer_t2343 * __this, StringU5BU5D_t65* ___args, AsyncCallback_t32 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.AppDomainInitializer::EndInvoke(System.IAsyncResult)
 void AppDomainInitializer_EndInvoke_m13215 (AppDomainInitializer_t2343 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
