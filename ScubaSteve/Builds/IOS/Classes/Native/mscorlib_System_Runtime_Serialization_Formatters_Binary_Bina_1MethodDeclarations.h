#pragma once

// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
struct BinaryFormatter_t2203;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t2179;
// System.Runtime.Serialization.SerializationBinder
struct SerializationBinder_t2215;
// System.Object
struct Object_t;
// System.IO.Stream
struct Stream_t1760;
// System.Runtime.Remoting.Messaging.HeaderHandler
struct HeaderHandler_t2216;
// System.IO.BinaryReader
struct BinaryReader_t2021;
// System.Runtime.Serialization.Formatters.FormatterAssemblyStyle
#include "mscorlib_System_Runtime_Serialization_Formatters_FormatterAs.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Runtime.Serialization.Formatters.TypeFilterLevel
#include "mscorlib_System_Runtime_Serialization_Formatters_TypeFilterL.h"

// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::.ctor()
 void BinaryFormatter__ctor_m11620 (BinaryFormatter_t2203 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::.ctor(System.Runtime.Serialization.ISurrogateSelector,System.Runtime.Serialization.StreamingContext)
 void BinaryFormatter__ctor_m11621 (BinaryFormatter_t2203 * __this, Object_t * ___selector, StreamingContext_t1243  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::get_DefaultSurrogateSelector()
 Object_t * BinaryFormatter_get_DefaultSurrogateSelector_m11622 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::set_AssemblyFormat(System.Runtime.Serialization.Formatters.FormatterAssemblyStyle)
 void BinaryFormatter_set_AssemblyFormat_m11623 (BinaryFormatter_t2203 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.SerializationBinder System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::get_Binder()
 SerializationBinder_t2215 * BinaryFormatter_get_Binder_m11624 (BinaryFormatter_t2203 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.StreamingContext System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::get_Context()
 StreamingContext_t1243  BinaryFormatter_get_Context_m11625 (BinaryFormatter_t2203 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::get_SurrogateSelector()
 Object_t * BinaryFormatter_get_SurrogateSelector_m11626 (BinaryFormatter_t2203 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.Formatters.TypeFilterLevel System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::get_FilterLevel()
 int32_t BinaryFormatter_get_FilterLevel_m11627 (BinaryFormatter_t2203 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::Deserialize(System.IO.Stream)
 Object_t * BinaryFormatter_Deserialize_m11628 (BinaryFormatter_t2203 * __this, Stream_t1760 * ___serializationStream, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::NoCheckDeserialize(System.IO.Stream,System.Runtime.Remoting.Messaging.HeaderHandler)
 Object_t * BinaryFormatter_NoCheckDeserialize_m11629 (BinaryFormatter_t2203 * __this, Stream_t1760 * ___serializationStream, HeaderHandler_t2216 * ___handler, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::ReadBinaryHeader(System.IO.BinaryReader,System.Boolean&)
 void BinaryFormatter_ReadBinaryHeader_m11630 (BinaryFormatter_t2203 * __this, BinaryReader_t2021 * ___reader, bool* ___hasHeaders, MethodInfo* method) IL2CPP_METHOD_ATTR;
