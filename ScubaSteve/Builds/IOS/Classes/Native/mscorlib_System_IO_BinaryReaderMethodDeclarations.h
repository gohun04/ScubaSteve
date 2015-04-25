#pragma once

// System.IO.BinaryReader
struct BinaryReader_t2021;
// System.IO.Stream
struct Stream_t1760;
// System.Text.Encoding
struct Encoding_t1047;
// System.Byte[]
struct ByteU5BU5D_t163;
// System.Char[]
struct CharU5BU5D_t58;
// System.String
struct String_t;
// System.Decimal
#include "mscorlib_System_Decimal.h"

// System.Void System.IO.BinaryReader::.ctor(System.IO.Stream)
 void BinaryReader__ctor_m10543 (BinaryReader_t2021 * __this, Stream_t1760 * ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryReader::.ctor(System.IO.Stream,System.Text.Encoding)
 void BinaryReader__ctor_m10544 (BinaryReader_t2021 * __this, Stream_t1760 * ___input, Encoding_t1047 * ___encoding, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryReader::System.IDisposable.Dispose()
 void BinaryReader_System_IDisposable_Dispose_m10545 (BinaryReader_t2021 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryReader::Dispose(System.Boolean)
 void BinaryReader_Dispose_m10546 (BinaryReader_t2021 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryReader::FillBuffer(System.Int32)
 void BinaryReader_FillBuffer_m10547 (BinaryReader_t2021 * __this, int32_t ___numBytes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.BinaryReader::Read()
 int32_t BinaryReader_Read_m10548 (BinaryReader_t2021 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.BinaryReader::Read(System.Byte[],System.Int32,System.Int32)
 int32_t BinaryReader_Read_m10549 (BinaryReader_t2021 * __this, ByteU5BU5D_t163* ___buffer, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.BinaryReader::Read(System.Char[],System.Int32,System.Int32)
 int32_t BinaryReader_Read_m10550 (BinaryReader_t2021 * __this, CharU5BU5D_t58* ___buffer, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.BinaryReader::ReadCharBytes(System.Char[],System.Int32,System.Int32,System.Int32&)
 int32_t BinaryReader_ReadCharBytes_m10551 (BinaryReader_t2021 * __this, CharU5BU5D_t58* ___buffer, int32_t ___index, int32_t ___count, int32_t* ___bytes_read, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.BinaryReader::Read7BitEncodedInt()
 int32_t BinaryReader_Read7BitEncodedInt_m10552 (BinaryReader_t2021 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.BinaryReader::ReadBoolean()
 bool BinaryReader_ReadBoolean_m10553 (BinaryReader_t2021 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.IO.BinaryReader::ReadByte()
 uint8_t BinaryReader_ReadByte_m10554 (BinaryReader_t2021 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.IO.BinaryReader::ReadChar()
 uint16_t BinaryReader_ReadChar_m10555 (BinaryReader_t2021 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.IO.BinaryReader::ReadDecimal()
 Decimal_t171  BinaryReader_ReadDecimal_m10556 (BinaryReader_t2021 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.IO.BinaryReader::ReadDouble()
 double BinaryReader_ReadDouble_m10557 (BinaryReader_t2021 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.IO.BinaryReader::ReadInt16()
 int16_t BinaryReader_ReadInt16_m10558 (BinaryReader_t2021 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.BinaryReader::ReadInt32()
 int32_t BinaryReader_ReadInt32_m10559 (BinaryReader_t2021 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.BinaryReader::ReadInt64()
 int64_t BinaryReader_ReadInt64_m10560 (BinaryReader_t2021 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.IO.BinaryReader::ReadSByte()
 int8_t BinaryReader_ReadSByte_m10561 (BinaryReader_t2021 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.BinaryReader::ReadString()
 String_t* BinaryReader_ReadString_m10562 (BinaryReader_t2021 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.IO.BinaryReader::ReadSingle()
 float BinaryReader_ReadSingle_m10563 (BinaryReader_t2021 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.IO.BinaryReader::ReadUInt16()
 uint16_t BinaryReader_ReadUInt16_m10564 (BinaryReader_t2021 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.IO.BinaryReader::ReadUInt32()
 uint32_t BinaryReader_ReadUInt32_m10565 (BinaryReader_t2021 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.IO.BinaryReader::ReadUInt64()
 uint64_t BinaryReader_ReadUInt64_m10566 (BinaryReader_t2021 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryReader::CheckBuffer(System.Int32)
 void BinaryReader_CheckBuffer_m10567 (BinaryReader_t2021 * __this, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
