#pragma once
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Reflection.ConstructorInfo
#include "mscorlib_System_Reflection_ConstructorInfo.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Reflection.MonoCMethod
struct MonoCMethod_t2096  : public ConstructorInfo_t1374
{
	// System.IntPtr System.Reflection.MonoCMethod::mhandle
	IntPtr_t35 ___mhandle_2;
	// System.String System.Reflection.MonoCMethod::name
	String_t* ___name_3;
	// System.Type System.Reflection.MonoCMethod::reftype
	Type_t * ___reftype_4;
};
