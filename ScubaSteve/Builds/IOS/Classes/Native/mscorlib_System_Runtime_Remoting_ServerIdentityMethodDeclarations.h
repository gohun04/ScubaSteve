#pragma once

// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t1877;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Runtime.Remoting.Contexts.Context
struct Context_t2146;
// System.Runtime.Remoting.ObjRef
struct ObjRef_t2187;

// System.Void System.Runtime.Remoting.ServerIdentity::.ctor(System.String,System.Runtime.Remoting.Contexts.Context,System.Type)
 void ServerIdentity__ctor_m11606 (ServerIdentity_t1877 * __this, String_t* ___objectUri, Context_t2146 * ___context, Type_t * ___objectType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Remoting.ServerIdentity::get_ObjectType()
 Type_t * ServerIdentity_get_ObjectType_m11607 (ServerIdentity_t1877 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.ObjRef System.Runtime.Remoting.ServerIdentity::CreateObjRef(System.Type)
 ObjRef_t2187 * ServerIdentity_CreateObjRef_m11608 (ServerIdentity_t1877 * __this, Type_t * ___requestedType, MethodInfo* method) IL2CPP_METHOD_ATTR;
