#pragma once

// System.MissingMethodException
struct MissingMethodException_t2383;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1242;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.MissingMethodException::.ctor()
 void MissingMethodException__ctor_m12888 (MissingMethodException_t2383 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MissingMethodException::.ctor(System.String)
 void MissingMethodException__ctor_m12889 (MissingMethodException_t2383 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MissingMethodException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void MissingMethodException__ctor_m12890 (MissingMethodException_t2383 * __this, SerializationInfo_t1242 * ___info, StreamingContext_t1243  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MissingMethodException::.ctor(System.String,System.String)
 void MissingMethodException__ctor_m12891 (MissingMethodException_t2383 * __this, String_t* ___className, String_t* ___methodName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.MissingMethodException::get_Message()
 String_t* MissingMethodException_get_Message_m12892 (MissingMethodException_t2383 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
