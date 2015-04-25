#pragma once

// System.Runtime.InteropServices.Marshal
struct Marshal_t436;
// System.Array
struct Array_t;
// System.Char[]
struct CharU5BU5D_t58;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Runtime.InteropServices.Marshal::.cctor()
 void Marshal__cctor_m11328 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::copy_from_unmanaged(System.IntPtr,System.Int32,System.Array,System.Int32)
 void Marshal_copy_from_unmanaged_m11329 (Object_t * __this/* static, unused */, IntPtr_t35 ___source, int32_t ___startIndex, Array_t * ___destination, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Char[],System.Int32,System.Int32)
 void Marshal_Copy_m11330 (Object_t * __this/* static, unused */, IntPtr_t35 ___source, CharU5BU5D_t58* ___destination, int32_t ___startIndex, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::FreeHGlobal(System.IntPtr)
 void Marshal_FreeHGlobal_m1412 (Object_t * __this/* static, unused */, IntPtr_t35 ___hglobal, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.InteropServices.Marshal::PtrToStringAnsi(System.IntPtr)
 String_t* Marshal_PtrToStringAnsi_m1411 (Object_t * __this/* static, unused */, IntPtr_t35 ___ptr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.InteropServices.Marshal::SizeOf(System.Type)
 int32_t Marshal_SizeOf_m6392 (Object_t * __this/* static, unused */, Type_t * ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
