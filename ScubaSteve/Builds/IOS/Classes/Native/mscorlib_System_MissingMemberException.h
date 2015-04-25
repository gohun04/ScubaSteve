#pragma once
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t163;
// System.MemberAccessException
#include "mscorlib_System_MemberAccessException.h"
// System.MissingMemberException
struct MissingMemberException_t2382  : public MemberAccessException_t2375
{
	// System.String System.MissingMemberException::ClassName
	String_t* ___ClassName_11;
	// System.String System.MissingMemberException::MemberName
	String_t* ___MemberName_12;
	// System.Byte[] System.MissingMemberException::Signature
	ByteU5BU5D_t163* ___Signature_13;
};
