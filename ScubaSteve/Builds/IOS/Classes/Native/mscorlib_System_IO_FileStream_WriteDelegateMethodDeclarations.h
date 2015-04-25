#pragma once

// System.IO.FileStream/WriteDelegate
struct WriteDelegate_t2035;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t163;
// System.IAsyncResult
struct IAsyncResult_t31;
// System.AsyncCallback
struct AsyncCallback_t32;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.IO.FileStream/WriteDelegate::.ctor(System.Object,System.IntPtr)
 void WriteDelegate__ctor_m10605 (WriteDelegate_t2035 * __this, Object_t * ___object, IntPtr_t35 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream/WriteDelegate::Invoke(System.Byte[],System.Int32,System.Int32)
 void WriteDelegate_Invoke_m10606 (WriteDelegate_t2035 * __this, ByteU5BU5D_t163* ___buffer, int32_t ___offset, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.IO.FileStream/WriteDelegate::BeginInvoke(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
 Object_t * WriteDelegate_BeginInvoke_m10607 (WriteDelegate_t2035 * __this, ByteU5BU5D_t163* ___buffer, int32_t ___offset, int32_t ___count, AsyncCallback_t32 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream/WriteDelegate::EndInvoke(System.IAsyncResult)
 void WriteDelegate_EndInvoke_m10608 (WriteDelegate_t2035 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
