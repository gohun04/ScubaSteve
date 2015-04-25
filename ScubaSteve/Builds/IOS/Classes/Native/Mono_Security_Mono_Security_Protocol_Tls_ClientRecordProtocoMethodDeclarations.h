#pragma once

// Mono.Security.Protocol.Tls.ClientRecordProtocol
struct ClientRecordProtocol_t1758;
// System.IO.Stream
struct Stream_t1760;
// Mono.Security.Protocol.Tls.ClientContext
struct ClientContext_t1757;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage
struct HandshakeMessage_t1761;
// Mono.Security.Protocol.Tls.TlsStream
struct TlsStream_t1762;
// System.Byte[]
struct ByteU5BU5D_t163;
// Mono.Security.Protocol.Tls.Handshake.HandshakeType
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Handshake.h"

// System.Void Mono.Security.Protocol.Tls.ClientRecordProtocol::.ctor(System.IO.Stream,Mono.Security.Protocol.Tls.ClientContext)
 void ClientRecordProtocol__ctor_m8252 (ClientRecordProtocol_t1758 * __this, Stream_t1760 * ___innerStream, ClientContext_t1757 * ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage Mono.Security.Protocol.Tls.ClientRecordProtocol::GetMessage(Mono.Security.Protocol.Tls.Handshake.HandshakeType)
 HandshakeMessage_t1761 * ClientRecordProtocol_GetMessage_m8253 (ClientRecordProtocol_t1758 * __this, uint8_t ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientRecordProtocol::ProcessHandshakeMessage(Mono.Security.Protocol.Tls.TlsStream)
 void ClientRecordProtocol_ProcessHandshakeMessage_m8254 (ClientRecordProtocol_t1758 * __this, TlsStream_t1762 * ___handMsg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage Mono.Security.Protocol.Tls.ClientRecordProtocol::createClientHandshakeMessage(Mono.Security.Protocol.Tls.Handshake.HandshakeType)
 HandshakeMessage_t1761 * ClientRecordProtocol_createClientHandshakeMessage_m8255 (ClientRecordProtocol_t1758 * __this, uint8_t ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage Mono.Security.Protocol.Tls.ClientRecordProtocol::createServerHandshakeMessage(Mono.Security.Protocol.Tls.Handshake.HandshakeType,System.Byte[])
 HandshakeMessage_t1761 * ClientRecordProtocol_createServerHandshakeMessage_m8256 (ClientRecordProtocol_t1758 * __this, uint8_t ___type, ByteU5BU5D_t163* ___buffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
