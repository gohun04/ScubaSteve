#pragma once

// System.Runtime.Serialization.Formatters.Binary.MessageFormatter
struct MessageFormatter_t2217;
// System.Object
struct Object_t;
// System.IO.BinaryReader
struct BinaryReader_t2021;
// System.Runtime.Remoting.Messaging.HeaderHandler
struct HeaderHandler_t2216;
// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
struct BinaryFormatter_t2203;
// System.Runtime.Remoting.Messaging.IMethodCallMessage
struct IMethodCallMessage_t2184;
// System.Runtime.Serialization.Formatters.Binary.BinaryElement
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_Bina_0.h"

// System.Object System.Runtime.Serialization.Formatters.Binary.MessageFormatter::ReadMethodCall(System.Runtime.Serialization.Formatters.Binary.BinaryElement,System.IO.BinaryReader,System.Boolean,System.Runtime.Remoting.Messaging.HeaderHandler,System.Runtime.Serialization.Formatters.Binary.BinaryFormatter)
 Object_t * MessageFormatter_ReadMethodCall_m11631 (Object_t * __this/* static, unused */, uint8_t ___elem, BinaryReader_t2021 * ___reader, bool ___hasHeaders, HeaderHandler_t2216 * ___headerHandler, BinaryFormatter_t2203 * ___formatter, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.Formatters.Binary.MessageFormatter::ReadMethodResponse(System.Runtime.Serialization.Formatters.Binary.BinaryElement,System.IO.BinaryReader,System.Boolean,System.Runtime.Remoting.Messaging.HeaderHandler,System.Runtime.Remoting.Messaging.IMethodCallMessage,System.Runtime.Serialization.Formatters.Binary.BinaryFormatter)
 Object_t * MessageFormatter_ReadMethodResponse_m11632 (Object_t * __this/* static, unused */, uint8_t ___elem, BinaryReader_t2021 * ___reader, bool ___hasHeaders, HeaderHandler_t2216 * ___headerHandler, Object_t * ___methodCallMessage, BinaryFormatter_t2203 * ___formatter, MethodInfo* method) IL2CPP_METHOD_ATTR;
