#pragma once

// System.Runtime.Remoting.Contexts.ContextAttribute
struct ContextAttribute_t2144;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Runtime.Remoting.Activation.IConstructionCallMessage
struct IConstructionCallMessage_t2145;
// System.Runtime.Remoting.Contexts.Context
struct Context_t2146;

// System.Void System.Runtime.Remoting.Contexts.ContextAttribute::.ctor(System.String)
 void ContextAttribute__ctor_m11379 (ContextAttribute_t2144 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Contexts.ContextAttribute::get_Name()
 String_t* ContextAttribute_get_Name_m11380 (ContextAttribute_t2144 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Contexts.ContextAttribute::Equals(System.Object)
 bool ContextAttribute_Equals_m11381 (ContextAttribute_t2144 * __this, Object_t * ___o, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.Remoting.Contexts.ContextAttribute::GetHashCode()
 int32_t ContextAttribute_GetHashCode_m11382 (ContextAttribute_t2144 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.ContextAttribute::GetPropertiesForNewContext(System.Runtime.Remoting.Activation.IConstructionCallMessage)
 void ContextAttribute_GetPropertiesForNewContext_m11383 (ContextAttribute_t2144 * __this, Object_t * ___ctorMsg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Contexts.ContextAttribute::IsContextOK(System.Runtime.Remoting.Contexts.Context,System.Runtime.Remoting.Activation.IConstructionCallMessage)
 bool ContextAttribute_IsContextOK_m11384 (ContextAttribute_t2144 * __this, Context_t2146 * ___ctx, Object_t * ___ctorMsg, MethodInfo* method) IL2CPP_METHOD_ATTR;
