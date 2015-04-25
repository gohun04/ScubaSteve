#pragma once

// System.Reflection.MemberFilter
struct MemberFilter_t1857;
// System.Object
struct Object_t;
// System.Reflection.MemberInfo
struct MemberInfo_t468;
// System.IAsyncResult
struct IAsyncResult_t31;
// System.AsyncCallback
struct AsyncCallback_t32;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Reflection.MemberFilter::.ctor(System.Object,System.IntPtr)
 void MemberFilter__ctor_m13200 (MemberFilter_t1857 * __this, Object_t * ___object, IntPtr_t35 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MemberFilter::Invoke(System.Reflection.MemberInfo,System.Object)
 bool MemberFilter_Invoke_m13201 (MemberFilter_t1857 * __this, MemberInfo_t468 * ___m, Object_t * ___filterCriteria, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Reflection.MemberFilter::BeginInvoke(System.Reflection.MemberInfo,System.Object,System.AsyncCallback,System.Object)
 Object_t * MemberFilter_BeginInvoke_m13202 (MemberFilter_t1857 * __this, MemberInfo_t468 * ___m, Object_t * ___filterCriteria, AsyncCallback_t32 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MemberFilter::EndInvoke(System.IAsyncResult)
 bool MemberFilter_EndInvoke_m13203 (MemberFilter_t1857 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
