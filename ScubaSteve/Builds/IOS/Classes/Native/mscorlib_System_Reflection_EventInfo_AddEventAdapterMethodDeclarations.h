#pragma once

// System.Reflection.EventInfo/AddEventAdapter
struct AddEventAdapter_t2082;
// System.Object
struct Object_t;
// System.Delegate
struct Delegate_t624;
// System.IAsyncResult
struct IAsyncResult_t31;
// System.AsyncCallback
struct AsyncCallback_t32;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Reflection.EventInfo/AddEventAdapter::.ctor(System.Object,System.IntPtr)
 void AddEventAdapter__ctor_m11096 (AddEventAdapter_t2082 * __this, Object_t * ___object, IntPtr_t35 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.EventInfo/AddEventAdapter::Invoke(System.Object,System.Delegate)
 void AddEventAdapter_Invoke_m11097 (AddEventAdapter_t2082 * __this, Object_t * ____this, Delegate_t624 * ___dele, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Reflection.EventInfo/AddEventAdapter::BeginInvoke(System.Object,System.Delegate,System.AsyncCallback,System.Object)
 Object_t * AddEventAdapter_BeginInvoke_m11098 (AddEventAdapter_t2082 * __this, Object_t * ____this, Delegate_t624 * ___dele, AsyncCallback_t32 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.EventInfo/AddEventAdapter::EndInvoke(System.IAsyncResult)
 void AddEventAdapter_EndInvoke_m11099 (AddEventAdapter_t2082 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
