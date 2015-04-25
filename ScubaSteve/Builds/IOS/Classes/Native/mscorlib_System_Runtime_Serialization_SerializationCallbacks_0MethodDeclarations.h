﻿#pragma once

// System.Runtime.Serialization.SerializationCallbacks
struct SerializationCallbacks_t2240;
// System.Type
struct Type_t;
// System.Collections.ArrayList
struct ArrayList_t1480;
// System.Object
struct Object_t;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Runtime.Serialization.SerializationCallbacks::.ctor(System.Type)
 void SerializationCallbacks__ctor_m11713 (SerializationCallbacks_t2240 * __this, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationCallbacks::.cctor()
 void SerializationCallbacks__cctor_m11714 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.SerializationCallbacks::get_HasDeserializedCallbacks()
 bool SerializationCallbacks_get_HasDeserializedCallbacks_m11715 (SerializationCallbacks_t2240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Runtime.Serialization.SerializationCallbacks::GetMethodsByAttribute(System.Type,System.Type)
 ArrayList_t1480 * SerializationCallbacks_GetMethodsByAttribute_m11716 (Object_t * __this/* static, unused */, Type_t * ___type, Type_t * ___attr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationCallbacks::Invoke(System.Collections.ArrayList,System.Object,System.Runtime.Serialization.StreamingContext)
 void SerializationCallbacks_Invoke_m11717 (Object_t * __this/* static, unused */, ArrayList_t1480 * ___list, Object_t * ___target, StreamingContext_t1243  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationCallbacks::RaiseOnDeserializing(System.Object,System.Runtime.Serialization.StreamingContext)
 void SerializationCallbacks_RaiseOnDeserializing_m11718 (SerializationCallbacks_t2240 * __this, Object_t * ___target, StreamingContext_t1243  ___contex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationCallbacks::RaiseOnDeserialized(System.Object,System.Runtime.Serialization.StreamingContext)
 void SerializationCallbacks_RaiseOnDeserialized_m11719 (SerializationCallbacks_t2240 * __this, Object_t * ___target, StreamingContext_t1243  ___contex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.SerializationCallbacks System.Runtime.Serialization.SerializationCallbacks::GetSerializationCallbacks(System.Type)
 SerializationCallbacks_t2240 * SerializationCallbacks_GetSerializationCallbacks_m11720 (Object_t * __this/* static, unused */, Type_t * ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
