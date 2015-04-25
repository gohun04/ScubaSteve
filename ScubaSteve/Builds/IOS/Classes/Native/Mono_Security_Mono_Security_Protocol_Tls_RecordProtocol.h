#pragma once
// System.Threading.ManualResetEvent
struct ManualResetEvent_t1775;
// System.IO.Stream
struct Stream_t1760;
// Mono.Security.Protocol.Tls.Context
struct Context_t1750;
// System.Object
#include "mscorlib_System_Object.h"
// Mono.Security.Protocol.Tls.RecordProtocol
struct RecordProtocol_t1759  : public Object_t
{
	// System.IO.Stream Mono.Security.Protocol.Tls.RecordProtocol::innerStream
	Stream_t1760 * ___innerStream_1;
	// Mono.Security.Protocol.Tls.Context Mono.Security.Protocol.Tls.RecordProtocol::context
	Context_t1750 * ___context_2;
};
struct RecordProtocol_t1759_StaticFields{
	// System.Threading.ManualResetEvent Mono.Security.Protocol.Tls.RecordProtocol::record_processing
	ManualResetEvent_t1775 * ___record_processing_0;
};
