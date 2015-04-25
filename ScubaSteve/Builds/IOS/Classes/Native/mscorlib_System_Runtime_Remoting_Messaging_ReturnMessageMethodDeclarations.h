#pragma once

// System.Runtime.Remoting.Messaging.ReturnMessage
struct ReturnMessage_t2183;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t470;
// System.Runtime.Remoting.Messaging.LogicalCallContext
struct LogicalCallContext_t2171;
// System.Reflection.MethodBase
struct MethodBase_t1351;
// System.Object
struct Object_t;
// System.Collections.IDictionary
struct IDictionary_t1010;
// System.Exception
struct Exception_t151;
// System.Runtime.Remoting.Messaging.IMethodCallMessage
struct IMethodCallMessage_t2184;

// System.Void System.Runtime.Remoting.Messaging.ReturnMessage::.ctor(System.Object,System.Object[],System.Int32,System.Runtime.Remoting.Messaging.LogicalCallContext,System.Runtime.Remoting.Messaging.IMethodCallMessage)
 void ReturnMessage__ctor_m11511 (ReturnMessage_t2183 * __this, Object_t * ___ret, ObjectU5BU5D_t470* ___outArgs, int32_t ___outArgsCount, LogicalCallContext_t2171 * ___callCtx, Object_t * ___mcm, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.ReturnMessage::.ctor(System.Exception,System.Runtime.Remoting.Messaging.IMethodCallMessage)
 void ReturnMessage__ctor_m11512 (ReturnMessage_t2183 * __this, Exception_t151 * ___e, Object_t * ___mcm, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.ReturnMessage::System.Runtime.Remoting.Messaging.IInternalMessage.set_Uri(System.String)
 void ReturnMessage_System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri_m11513 (ReturnMessage_t2183 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Runtime.Remoting.Messaging.ReturnMessage::get_Args()
 ObjectU5BU5D_t470* ReturnMessage_get_Args_m11514 (ReturnMessage_t2183 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.ReturnMessage::get_LogicalCallContext()
 LogicalCallContext_t2171 * ReturnMessage_get_LogicalCallContext_m11515 (ReturnMessage_t2183 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Runtime.Remoting.Messaging.ReturnMessage::get_MethodBase()
 MethodBase_t1351 * ReturnMessage_get_MethodBase_m11516 (ReturnMessage_t2183 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.ReturnMessage::get_MethodName()
 String_t* ReturnMessage_get_MethodName_m11517 (ReturnMessage_t2183 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.ReturnMessage::get_MethodSignature()
 Object_t * ReturnMessage_get_MethodSignature_m11518 (ReturnMessage_t2183 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionary System.Runtime.Remoting.Messaging.ReturnMessage::get_Properties()
 Object_t * ReturnMessage_get_Properties_m11519 (ReturnMessage_t2183 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.ReturnMessage::get_TypeName()
 String_t* ReturnMessage_get_TypeName_m11520 (ReturnMessage_t2183 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.ReturnMessage::get_Uri()
 String_t* ReturnMessage_get_Uri_m11521 (ReturnMessage_t2183 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.ReturnMessage::set_Uri(System.String)
 void ReturnMessage_set_Uri_m11522 (ReturnMessage_t2183 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Runtime.Remoting.Messaging.ReturnMessage::get_Exception()
 Exception_t151 * ReturnMessage_get_Exception_m11523 (ReturnMessage_t2183 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Runtime.Remoting.Messaging.ReturnMessage::get_OutArgs()
 ObjectU5BU5D_t470* ReturnMessage_get_OutArgs_m11524 (ReturnMessage_t2183 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.ReturnMessage::get_ReturnValue()
 Object_t * ReturnMessage_get_ReturnValue_m11525 (ReturnMessage_t2183 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
