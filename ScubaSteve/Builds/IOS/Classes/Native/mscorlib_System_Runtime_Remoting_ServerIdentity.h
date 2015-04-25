#pragma once
// System.Type
struct Type_t;
// System.MarshalByRefObject
struct MarshalByRefObject_t1518;
// System.Runtime.Remoting.Contexts.Context
struct Context_t2146;
// System.Runtime.Remoting.Identity
#include "mscorlib_System_Runtime_Remoting_Identity.h"
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t1877  : public Identity_t2189
{
	// System.Type System.Runtime.Remoting.ServerIdentity::_objectType
	Type_t * ____objectType_5;
	// System.MarshalByRefObject System.Runtime.Remoting.ServerIdentity::_serverObject
	MarshalByRefObject_t1518 * ____serverObject_6;
	// System.Runtime.Remoting.Contexts.Context System.Runtime.Remoting.ServerIdentity::_context
	Context_t2146 * ____context_7;
};
