#pragma once

// System.Converter`2<System.Object,System.Object>
struct Converter_2_t388;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t31;
// System.AsyncCallback
struct AsyncCallback_t32;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Converter`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
 void Converter_2__ctor_m14365_gshared (Converter_2_t388 * __this, Object_t * ___object, IntPtr_t35 ___method, MethodInfo* method);
#define Converter_2__ctor_m14365(__this, ___object, ___method, method) (void)Converter_2__ctor_m14365_gshared((Converter_2_t388 *)__this, (Object_t *)___object, (IntPtr_t35)___method, method)
// TOutput System.Converter`2<System.Object,System.Object>::Invoke(TInput)
 Object_t * Converter_2_Invoke_m14367_gshared (Converter_2_t388 * __this, Object_t * ___input, MethodInfo* method);
#define Converter_2_Invoke_m14367(__this, ___input, method) (Object_t *)Converter_2_Invoke_m14367_gshared((Converter_2_t388 *)__this, (Object_t *)___input, method)
// System.IAsyncResult System.Converter`2<System.Object,System.Object>::BeginInvoke(TInput,System.AsyncCallback,System.Object)
 Object_t * Converter_2_BeginInvoke_m14369_gshared (Converter_2_t388 * __this, Object_t * ___input, AsyncCallback_t32 * ___callback, Object_t * ___object, MethodInfo* method);
#define Converter_2_BeginInvoke_m14369(__this, ___input, ___callback, ___object, method) (Object_t *)Converter_2_BeginInvoke_m14369_gshared((Converter_2_t388 *)__this, (Object_t *)___input, (AsyncCallback_t32 *)___callback, (Object_t *)___object, method)
// TOutput System.Converter`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
 Object_t * Converter_2_EndInvoke_m14371_gshared (Converter_2_t388 * __this, Object_t * ___result, MethodInfo* method);
#define Converter_2_EndInvoke_m14371(__this, ___result, method) (Object_t *)Converter_2_EndInvoke_m14371_gshared((Converter_2_t388 *)__this, (Object_t *)___result, method)
