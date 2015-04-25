#pragma once

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,JSONObject,System.Collections.Generic.KeyValuePair`2<System.String,JSONObject>>
struct Transform_1_t3092;
// System.Object
struct Object_t;
// System.String
struct String_t;
// JSONObject
struct JSONObject_t47;
// System.IAsyncResult
struct IAsyncResult_t31;
// System.AsyncCallback
struct AsyncCallback_t32;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,JSONObject>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,JSONObject,System.Collections.Generic.KeyValuePair`2<System.String,JSONObject>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m16104 (Transform_1_t3092 * __this, Object_t * ___object, IntPtr_t35 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,JSONObject,System.Collections.Generic.KeyValuePair`2<System.String,JSONObject>>::Invoke(TKey,TValue)
 KeyValuePair_2_t451  Transform_1_Invoke_m16105 (Transform_1_t3092 * __this, String_t* ___key, JSONObject_t47 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,JSONObject,System.Collections.Generic.KeyValuePair`2<System.String,JSONObject>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m16106 (Transform_1_t3092 * __this, String_t* ___key, JSONObject_t47 * ___value, AsyncCallback_t32 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,JSONObject,System.Collections.Generic.KeyValuePair`2<System.String,JSONObject>>::EndInvoke(System.IAsyncResult)
 KeyValuePair_2_t451  Transform_1_EndInvoke_m16107 (Transform_1_t3092 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
