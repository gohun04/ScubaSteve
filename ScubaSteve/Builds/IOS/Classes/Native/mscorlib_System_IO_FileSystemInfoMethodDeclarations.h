#pragma once

// System.IO.FileSystemInfo
struct FileSystemInfo_t2024;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1242;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.IO.FileSystemInfo::.ctor()
 void FileSystemInfo__ctor_m10649 (FileSystemInfo_t2024 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileSystemInfo::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void FileSystemInfo__ctor_m10650 (FileSystemInfo_t2024 * __this, SerializationInfo_t1242 * ___info, StreamingContext_t1243  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileSystemInfo::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void FileSystemInfo_GetObjectData_m10651 (FileSystemInfo_t2024 * __this, SerializationInfo_t1242 * ___info, StreamingContext_t1243  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.FileSystemInfo::get_Exists()
// System.String System.IO.FileSystemInfo::get_FullName()
 String_t* FileSystemInfo_get_FullName_m10652 (FileSystemInfo_t2024 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileSystemInfo::Refresh(System.Boolean)
 void FileSystemInfo_Refresh_m10653 (FileSystemInfo_t2024 * __this, bool ___force, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileSystemInfo::InternalRefresh()
 void FileSystemInfo_InternalRefresh_m10654 (FileSystemInfo_t2024 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileSystemInfo::CheckPath(System.String)
 void FileSystemInfo_CheckPath_m10655 (FileSystemInfo_t2024 * __this, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
