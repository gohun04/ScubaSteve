﻿#pragma once

// System.Runtime.Remoting.ClientIdentity
struct ClientIdentity_t2190;
// System.MarshalByRefObject
struct MarshalByRefObject_t1518;
// System.String
struct String_t;
// System.Runtime.Remoting.ObjRef
struct ObjRef_t2187;
// System.Type
struct Type_t;

// System.Void System.Runtime.Remoting.ClientIdentity::.ctor(System.String,System.Runtime.Remoting.ObjRef)
 void ClientIdentity__ctor_m11557 (ClientIdentity_t2190 * __this, String_t* ___objectUri, ObjRef_t2187 * ___objRef, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.MarshalByRefObject System.Runtime.Remoting.ClientIdentity::get_ClientProxy()
 MarshalByRefObject_t1518 * ClientIdentity_get_ClientProxy_m11558 (ClientIdentity_t2190 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ClientIdentity::set_ClientProxy(System.MarshalByRefObject)
 void ClientIdentity_set_ClientProxy_m11559 (ClientIdentity_t2190 * __this, MarshalByRefObject_t1518 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.ObjRef System.Runtime.Remoting.ClientIdentity::CreateObjRef(System.Type)
 ObjRef_t2187 * ClientIdentity_CreateObjRef_m11560 (ClientIdentity_t2190 * __this, Type_t * ___requestedType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.ClientIdentity::get_TargetUri()
 String_t* ClientIdentity_get_TargetUri_m11561 (ClientIdentity_t2190 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
