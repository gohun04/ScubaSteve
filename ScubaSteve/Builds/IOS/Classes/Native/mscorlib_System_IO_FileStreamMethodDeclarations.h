﻿#pragma once

// System.IO.FileStream
struct FileStream_t1833;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t163;
// System.IAsyncResult
struct IAsyncResult_t31;
// System.AsyncCallback
struct AsyncCallback_t32;
// System.Object
struct Object_t;
// System.IO.Stream
struct Stream_t1760;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.IO.FileAccess
#include "mscorlib_System_IO_FileAccess.h"
// System.IO.FileMode
#include "mscorlib_System_IO_FileMode.h"
// System.IO.FileShare
#include "mscorlib_System_IO_FileShare.h"
// System.IO.FileOptions
#include "mscorlib_System_IO_FileOptions.h"
// System.IO.SeekOrigin
#include "mscorlib_System_IO_SeekOrigin.h"

// System.Void System.IO.FileStream::.ctor(System.IntPtr,System.IO.FileAccess,System.Boolean,System.Int32,System.Boolean,System.Boolean)
 void FileStream__ctor_m10609 (FileStream_t1833 * __this, IntPtr_t35 ___handle, int32_t ___access, bool ___ownsHandle, int32_t ___bufferSize, bool ___isAsync, bool ___noBuffering, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::.ctor(System.String,System.IO.FileMode,System.IO.FileAccess)
 void FileStream__ctor_m10610 (FileStream_t1833 * __this, String_t* ___path, int32_t ___mode, int32_t ___access, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::.ctor(System.String,System.IO.FileMode,System.IO.FileAccess,System.IO.FileShare)
 void FileStream__ctor_m10611 (FileStream_t1833 * __this, String_t* ___path, int32_t ___mode, int32_t ___access, int32_t ___share, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::.ctor(System.String,System.IO.FileMode,System.IO.FileAccess,System.IO.FileShare,System.Int32)
 void FileStream__ctor_m10612 (FileStream_t1833 * __this, String_t* ___path, int32_t ___mode, int32_t ___access, int32_t ___share, int32_t ___bufferSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::.ctor(System.String,System.IO.FileMode,System.IO.FileAccess,System.IO.FileShare,System.Int32,System.Boolean,System.Boolean)
 void FileStream__ctor_m10613 (FileStream_t1833 * __this, String_t* ___path, int32_t ___mode, int32_t ___access, int32_t ___share, int32_t ___bufferSize, bool ___isAsync, bool ___anonymous, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::.ctor(System.String,System.IO.FileMode,System.IO.FileAccess,System.IO.FileShare,System.Int32,System.Boolean,System.IO.FileOptions)
 void FileStream__ctor_m10614 (FileStream_t1833 * __this, String_t* ___path, int32_t ___mode, int32_t ___access, int32_t ___share, int32_t ___bufferSize, bool ___anonymous, int32_t ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.FileStream::get_CanRead()
 bool FileStream_get_CanRead_m10615 (FileStream_t1833 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.FileStream::get_CanWrite()
 bool FileStream_get_CanWrite_m10616 (FileStream_t1833 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.FileStream::get_CanSeek()
 bool FileStream_get_CanSeek_m10617 (FileStream_t1833 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.FileStream::get_Length()
 int64_t FileStream_get_Length_m8750 (FileStream_t1833 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.FileStream::get_Position()
 int64_t FileStream_get_Position_m10618 (FileStream_t1833 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::set_Position(System.Int64)
 void FileStream_set_Position_m10619 (FileStream_t1833 * __this, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.FileStream::ReadByte()
 int32_t FileStream_ReadByte_m10620 (FileStream_t1833 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::WriteByte(System.Byte)
 void FileStream_WriteByte_m10621 (FileStream_t1833 * __this, uint8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.FileStream::Read(System.Byte[],System.Int32,System.Int32)
 int32_t FileStream_Read_m8751 (FileStream_t1833 * __this, ByteU5BU5D_t163* ___array, int32_t ___offset, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.FileStream::ReadInternal(System.Byte[],System.Int32,System.Int32)
 int32_t FileStream_ReadInternal_m10622 (FileStream_t1833 * __this, ByteU5BU5D_t163* ___dest, int32_t ___offset, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.IO.FileStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
 Object_t * FileStream_BeginRead_m10623 (FileStream_t1833 * __this, ByteU5BU5D_t163* ___array, int32_t ___offset, int32_t ___numBytes, AsyncCallback_t32 * ___userCallback, Object_t * ___stateObject, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.FileStream::EndRead(System.IAsyncResult)
 int32_t FileStream_EndRead_m10624 (FileStream_t1833 * __this, Object_t * ___asyncResult, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::Write(System.Byte[],System.Int32,System.Int32)
 void FileStream_Write_m10625 (FileStream_t1833 * __this, ByteU5BU5D_t163* ___array, int32_t ___offset, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::WriteInternal(System.Byte[],System.Int32,System.Int32)
 void FileStream_WriteInternal_m10626 (FileStream_t1833 * __this, ByteU5BU5D_t163* ___src, int32_t ___offset, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.IO.FileStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
 Object_t * FileStream_BeginWrite_m10627 (FileStream_t1833 * __this, ByteU5BU5D_t163* ___array, int32_t ___offset, int32_t ___numBytes, AsyncCallback_t32 * ___userCallback, Object_t * ___stateObject, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::EndWrite(System.IAsyncResult)
 void FileStream_EndWrite_m10628 (FileStream_t1833 * __this, Object_t * ___asyncResult, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.FileStream::Seek(System.Int64,System.IO.SeekOrigin)
 int64_t FileStream_Seek_m10629 (FileStream_t1833 * __this, int64_t ___offset, int32_t ___origin, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::SetLength(System.Int64)
 void FileStream_SetLength_m10630 (FileStream_t1833 * __this, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::Flush()
 void FileStream_Flush_m10631 (FileStream_t1833 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::Finalize()
 void FileStream_Finalize_m10632 (FileStream_t1833 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::Dispose(System.Boolean)
 void FileStream_Dispose_m10633 (FileStream_t1833 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.FileStream::ReadSegment(System.Byte[],System.Int32,System.Int32)
 int32_t FileStream_ReadSegment_m10634 (FileStream_t1833 * __this, ByteU5BU5D_t163* ___dest, int32_t ___dest_offset, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.FileStream::WriteSegment(System.Byte[],System.Int32,System.Int32)
 int32_t FileStream_WriteSegment_m10635 (FileStream_t1833 * __this, ByteU5BU5D_t163* ___src, int32_t ___src_offset, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::FlushBuffer(System.IO.Stream)
 void FileStream_FlushBuffer_m10636 (FileStream_t1833 * __this, Stream_t1760 * ___st, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::FlushBuffer()
 void FileStream_FlushBuffer_m10637 (FileStream_t1833 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::FlushBufferIfDirty()
 void FileStream_FlushBufferIfDirty_m10638 (FileStream_t1833 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::RefillBuffer()
 void FileStream_RefillBuffer_m10639 (FileStream_t1833 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.FileStream::ReadData(System.IntPtr,System.Byte[],System.Int32,System.Int32)
 int32_t FileStream_ReadData_m10640 (FileStream_t1833 * __this, IntPtr_t35 ___handle, ByteU5BU5D_t163* ___buf, int32_t ___offset, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::InitBuffer(System.Int32,System.Boolean)
 void FileStream_InitBuffer_m10641 (FileStream_t1833 * __this, int32_t ___size, bool ___noBuffering, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.FileStream::GetSecureFileName(System.String)
 String_t* FileStream_GetSecureFileName_m10642 (FileStream_t1833 * __this, String_t* ___filename, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.FileStream::GetSecureFileName(System.String,System.Boolean)
 String_t* FileStream_GetSecureFileName_m10643 (FileStream_t1833 * __this, String_t* ___filename, bool ___full, MethodInfo* method) IL2CPP_METHOD_ATTR;
