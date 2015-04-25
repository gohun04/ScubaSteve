#pragma once

// Soomla.CoreEvents/Action
struct Action_t33;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t31;
// System.AsyncCallback
struct AsyncCallback_t32;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void Soomla.CoreEvents/Action::.ctor(System.Object,System.IntPtr)
 void Action__ctor_m29 (Action_t33 * __this, Object_t * ___object, IntPtr_t35 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.CoreEvents/Action::Invoke()
 void Action_Invoke_m30 (Action_t33 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Soomla.CoreEvents/Action::BeginInvoke(System.AsyncCallback,System.Object)
 Object_t * Action_BeginInvoke_m31 (Action_t33 * __this, AsyncCallback_t32 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.CoreEvents/Action::EndInvoke(System.IAsyncResult)
 void Action_EndInvoke_m32 (Action_t33 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
