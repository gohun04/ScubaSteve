#pragma once

// Soomla.Store.StoreEvents/RunLaterDelegate
struct RunLaterDelegate_t107;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t31;
// System.AsyncCallback
struct AsyncCallback_t32;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void Soomla.Store.StoreEvents/RunLaterDelegate::.ctor(System.Object,System.IntPtr)
 void RunLaterDelegate__ctor_m384 (RunLaterDelegate_t107 * __this, Object_t * ___object, IntPtr_t35 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents/RunLaterDelegate::Invoke()
 void RunLaterDelegate_Invoke_m385 (RunLaterDelegate_t107 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Soomla.Store.StoreEvents/RunLaterDelegate::BeginInvoke(System.AsyncCallback,System.Object)
 Object_t * RunLaterDelegate_BeginInvoke_m386 (RunLaterDelegate_t107 * __this, AsyncCallback_t32 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents/RunLaterDelegate::EndInvoke(System.IAsyncResult)
 void RunLaterDelegate_EndInvoke_m387 (RunLaterDelegate_t107 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
