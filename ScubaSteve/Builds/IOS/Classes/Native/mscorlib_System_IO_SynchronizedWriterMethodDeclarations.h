#pragma once

// System.IO.SynchronizedWriter
struct SynchronizedWriter_t2049;
// System.IO.TextWriter
struct TextWriter_t1688;
// System.Char[]
struct CharU5BU5D_t58;
// System.String
struct String_t;

// System.Void System.IO.SynchronizedWriter::.ctor(System.IO.TextWriter,System.Boolean)
 void SynchronizedWriter__ctor_m10819 (SynchronizedWriter_t2049 * __this, TextWriter_t1688 * ___writer, bool ___neverClose, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Close()
 void SynchronizedWriter_Close_m10820 (SynchronizedWriter_t2049 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Flush()
 void SynchronizedWriter_Flush_m10821 (SynchronizedWriter_t2049 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Write(System.Char)
 void SynchronizedWriter_Write_m10822 (SynchronizedWriter_t2049 * __this, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Write(System.Char[])
 void SynchronizedWriter_Write_m10823 (SynchronizedWriter_t2049 * __this, CharU5BU5D_t58* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Write(System.String)
 void SynchronizedWriter_Write_m10824 (SynchronizedWriter_t2049 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Write(System.Char[],System.Int32,System.Int32)
 void SynchronizedWriter_Write_m10825 (SynchronizedWriter_t2049 * __this, CharU5BU5D_t58* ___buffer, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::WriteLine()
 void SynchronizedWriter_WriteLine_m10826 (SynchronizedWriter_t2049 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::WriteLine(System.String)
 void SynchronizedWriter_WriteLine_m10827 (SynchronizedWriter_t2049 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
