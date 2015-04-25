#pragma once

// System.IO.File
struct File_t2026;
// System.IO.FileStream
struct FileStream_t1833;
// System.String
struct String_t;
// System.IO.StreamReader
struct StreamReader_t2027;
// System.Byte[]
struct ByteU5BU5D_t163;
// System.String[]
struct StringU5BU5D_t65;
// System.Text.Encoding
struct Encoding_t1047;
// System.IO.StreamWriter
struct StreamWriter_t2028;
// System.IO.FileMode
#include "mscorlib_System_IO_FileMode.h"

// System.IO.FileStream System.IO.File::Create(System.String)
 FileStream_t1833 * File_Create_m10587 (Object_t * __this/* static, unused */, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.FileStream System.IO.File::Create(System.String,System.Int32)
 FileStream_t1833 * File_Create_m10588 (Object_t * __this/* static, unused */, String_t* ___path, int32_t ___bufferSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.File::Delete(System.String)
 void File_Delete_m5147 (Object_t * __this/* static, unused */, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.File::Exists(System.String)
 bool File_Exists_m5146 (Object_t * __this/* static, unused */, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.FileStream System.IO.File::Open(System.String,System.IO.FileMode)
 FileStream_t1833 * File_Open_m10589 (Object_t * __this/* static, unused */, String_t* ___path, int32_t ___mode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.FileStream System.IO.File::OpenRead(System.String)
 FileStream_t1833 * File_OpenRead_m8749 (Object_t * __this/* static, unused */, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.StreamReader System.IO.File::OpenText(System.String)
 StreamReader_t2027 * File_OpenText_m10590 (Object_t * __this/* static, unused */, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.IO.File::ReadAllBytes(System.String)
 ByteU5BU5D_t163* File_ReadAllBytes_m5148 (Object_t * __this/* static, unused */, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.IO.File::ReadAllLines(System.String)
 StringU5BU5D_t65* File_ReadAllLines_m5149 (Object_t * __this/* static, unused */, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.IO.File::ReadAllLines(System.IO.StreamReader)
 StringU5BU5D_t65* File_ReadAllLines_m10591 (Object_t * __this/* static, unused */, StreamReader_t2027 * ___reader, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.File::ReadAllText(System.String)
 String_t* File_ReadAllText_m5150 (Object_t * __this/* static, unused */, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.File::ReadAllText(System.String,System.Text.Encoding)
 String_t* File_ReadAllText_m10592 (Object_t * __this/* static, unused */, String_t* ___path, Encoding_t1047 * ___encoding, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.File::WriteAllBytes(System.String,System.Byte[])
 void File_WriteAllBytes_m5151 (Object_t * __this/* static, unused */, String_t* ___path, ByteU5BU5D_t163* ___bytes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.File::WriteAllLines(System.String,System.String[])
 void File_WriteAllLines_m5152 (Object_t * __this/* static, unused */, String_t* ___path, StringU5BU5D_t65* ___contents, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.File::WriteAllLines(System.IO.StreamWriter,System.String[])
 void File_WriteAllLines_m10593 (Object_t * __this/* static, unused */, StreamWriter_t2028 * ___writer, StringU5BU5D_t65* ___contents, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.File::WriteAllText(System.String,System.String)
 void File_WriteAllText_m5153 (Object_t * __this/* static, unused */, String_t* ___path, String_t* ___contents, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.File::WriteAllText(System.String,System.String,System.Text.Encoding)
 void File_WriteAllText_m10594 (Object_t * __this/* static, unused */, String_t* ___path, String_t* ___contents, Encoding_t1047 * ___encoding, MethodInfo* method) IL2CPP_METHOD_ATTR;
