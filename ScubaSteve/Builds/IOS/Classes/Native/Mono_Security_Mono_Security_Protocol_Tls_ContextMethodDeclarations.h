#pragma once

// Mono.Security.Protocol.Tls.Context
struct Context_t1750;
// System.Byte[]
struct ByteU5BU5D_t163;
// Mono.Security.Protocol.Tls.TlsServerSettings
struct TlsServerSettings_t1766;
// Mono.Security.Protocol.Tls.TlsClientSettings
struct TlsClientSettings_t1767;
// Mono.Security.Protocol.Tls.CipherSuiteCollection
struct CipherSuiteCollection_t1752;
// Mono.Security.Protocol.Tls.TlsStream
struct TlsStream_t1762;
// Mono.Security.Protocol.Tls.RecordProtocol
struct RecordProtocol_t1759;
// Mono.Security.Protocol.Tls.SecurityParameters
struct SecurityParameters_t1768;
// Mono.Security.Protocol.Tls.SecurityProtocolType
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityProtocolTyp.h"
// Mono.Security.Protocol.Tls.SecurityCompressionType
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityCompression.h"
// Mono.Security.Protocol.Tls.Handshake.HandshakeType
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Handshake.h"
// Mono.Security.Protocol.Tls.HandshakeState
#include "Mono_Security_Mono_Security_Protocol_Tls_HandshakeState.h"

// System.Void Mono.Security.Protocol.Tls.Context::.ctor(Mono.Security.Protocol.Tls.SecurityProtocolType)
 void Context__ctor_m8275 (Context_t1750 * __this, int32_t ___securityProtocolType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.Context::get_AbbreviatedHandshake()
 bool Context_get_AbbreviatedHandshake_m8276 (Context_t1750 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_AbbreviatedHandshake(System.Boolean)
 void Context_set_AbbreviatedHandshake_m8277 (Context_t1750 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.Context::get_ProtocolNegotiated()
 bool Context_get_ProtocolNegotiated_m8278 (Context_t1750 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_ProtocolNegotiated(System.Boolean)
 void Context_set_ProtocolNegotiated_m8279 (Context_t1750 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.SecurityProtocolType Mono.Security.Protocol.Tls.Context::get_SecurityProtocol()
 int32_t Context_get_SecurityProtocol_m8280 (Context_t1750 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_SecurityProtocol(Mono.Security.Protocol.Tls.SecurityProtocolType)
 void Context_set_SecurityProtocol_m8281 (Context_t1750 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.SecurityProtocolType Mono.Security.Protocol.Tls.Context::get_SecurityProtocolFlags()
 int32_t Context_get_SecurityProtocolFlags_m8282 (Context_t1750 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 Mono.Security.Protocol.Tls.Context::get_Protocol()
 int16_t Context_get_Protocol_m8283 (Context_t1750 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Context::get_SessionId()
 ByteU5BU5D_t163* Context_get_SessionId_m8284 (Context_t1750 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_SessionId(System.Byte[])
 void Context_set_SessionId_m8285 (Context_t1750 * __this, ByteU5BU5D_t163* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.SecurityCompressionType Mono.Security.Protocol.Tls.Context::get_CompressionMethod()
 int32_t Context_get_CompressionMethod_m8286 (Context_t1750 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_CompressionMethod(Mono.Security.Protocol.Tls.SecurityCompressionType)
 void Context_set_CompressionMethod_m8287 (Context_t1750 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.TlsServerSettings Mono.Security.Protocol.Tls.Context::get_ServerSettings()
 TlsServerSettings_t1766 * Context_get_ServerSettings_m8288 (Context_t1750 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.TlsClientSettings Mono.Security.Protocol.Tls.Context::get_ClientSettings()
 TlsClientSettings_t1767 * Context_get_ClientSettings_m8289 (Context_t1750 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Handshake.HandshakeType Mono.Security.Protocol.Tls.Context::get_LastHandshakeMsg()
 uint8_t Context_get_LastHandshakeMsg_m8290 (Context_t1750 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_LastHandshakeMsg(Mono.Security.Protocol.Tls.Handshake.HandshakeType)
 void Context_set_LastHandshakeMsg_m8291 (Context_t1750 * __this, uint8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.HandshakeState Mono.Security.Protocol.Tls.Context::get_HandshakeState()
 int32_t Context_get_HandshakeState_m8292 (Context_t1750 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_HandshakeState(Mono.Security.Protocol.Tls.HandshakeState)
 void Context_set_HandshakeState_m8293 (Context_t1750 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.Context::get_ReceivedConnectionEnd()
 bool Context_get_ReceivedConnectionEnd_m8294 (Context_t1750 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_ReceivedConnectionEnd(System.Boolean)
 void Context_set_ReceivedConnectionEnd_m8295 (Context_t1750 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.Context::get_SentConnectionEnd()
 bool Context_get_SentConnectionEnd_m8296 (Context_t1750 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_SentConnectionEnd(System.Boolean)
 void Context_set_SentConnectionEnd_m8297 (Context_t1750 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.CipherSuiteCollection Mono.Security.Protocol.Tls.Context::get_SupportedCiphers()
 CipherSuiteCollection_t1752 * Context_get_SupportedCiphers_m8298 (Context_t1750 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_SupportedCiphers(Mono.Security.Protocol.Tls.CipherSuiteCollection)
 void Context_set_SupportedCiphers_m8299 (Context_t1750 * __this, CipherSuiteCollection_t1752 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.TlsStream Mono.Security.Protocol.Tls.Context::get_HandshakeMessages()
 TlsStream_t1762 * Context_get_HandshakeMessages_m8300 (Context_t1750 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 Mono.Security.Protocol.Tls.Context::get_WriteSequenceNumber()
 uint64_t Context_get_WriteSequenceNumber_m8301 (Context_t1750 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_WriteSequenceNumber(System.UInt64)
 void Context_set_WriteSequenceNumber_m8302 (Context_t1750 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 Mono.Security.Protocol.Tls.Context::get_ReadSequenceNumber()
 uint64_t Context_get_ReadSequenceNumber_m8303 (Context_t1750 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_ReadSequenceNumber(System.UInt64)
 void Context_set_ReadSequenceNumber_m8304 (Context_t1750 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Context::get_ClientRandom()
 ByteU5BU5D_t163* Context_get_ClientRandom_m8305 (Context_t1750 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_ClientRandom(System.Byte[])
 void Context_set_ClientRandom_m8306 (Context_t1750 * __this, ByteU5BU5D_t163* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Context::get_ServerRandom()
 ByteU5BU5D_t163* Context_get_ServerRandom_m8307 (Context_t1750 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_ServerRandom(System.Byte[])
 void Context_set_ServerRandom_m8308 (Context_t1750 * __this, ByteU5BU5D_t163* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Context::get_RandomCS()
 ByteU5BU5D_t163* Context_get_RandomCS_m8309 (Context_t1750 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_RandomCS(System.Byte[])
 void Context_set_RandomCS_m8310 (Context_t1750 * __this, ByteU5BU5D_t163* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Context::get_RandomSC()
 ByteU5BU5D_t163* Context_get_RandomSC_m8311 (Context_t1750 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_RandomSC(System.Byte[])
 void Context_set_RandomSC_m8312 (Context_t1750 * __this, ByteU5BU5D_t163* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Context::get_MasterSecret()
 ByteU5BU5D_t163* Context_get_MasterSecret_m8313 (Context_t1750 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_MasterSecret(System.Byte[])
 void Context_set_MasterSecret_m8314 (Context_t1750 * __this, ByteU5BU5D_t163* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Context::get_ClientWriteKey()
 ByteU5BU5D_t163* Context_get_ClientWriteKey_m8315 (Context_t1750 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_ClientWriteKey(System.Byte[])
 void Context_set_ClientWriteKey_m8316 (Context_t1750 * __this, ByteU5BU5D_t163* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Context::get_ServerWriteKey()
 ByteU5BU5D_t163* Context_get_ServerWriteKey_m8317 (Context_t1750 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_ServerWriteKey(System.Byte[])
 void Context_set_ServerWriteKey_m8318 (Context_t1750 * __this, ByteU5BU5D_t163* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Context::get_ClientWriteIV()
 ByteU5BU5D_t163* Context_get_ClientWriteIV_m8319 (Context_t1750 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_ClientWriteIV(System.Byte[])
 void Context_set_ClientWriteIV_m8320 (Context_t1750 * __this, ByteU5BU5D_t163* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Context::get_ServerWriteIV()
 ByteU5BU5D_t163* Context_get_ServerWriteIV_m8321 (Context_t1750 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_ServerWriteIV(System.Byte[])
 void Context_set_ServerWriteIV_m8322 (Context_t1750 * __this, ByteU5BU5D_t163* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.RecordProtocol Mono.Security.Protocol.Tls.Context::get_RecordProtocol()
 RecordProtocol_t1759 * Context_get_RecordProtocol_m8323 (Context_t1750 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_RecordProtocol(Mono.Security.Protocol.Tls.RecordProtocol)
 void Context_set_RecordProtocol_m8324 (Context_t1750 * __this, RecordProtocol_t1759 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.Context::GetUnixTime()
 int32_t Context_GetUnixTime_m8325 (Context_t1750 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Context::GetSecureRandomBytes(System.Int32)
 ByteU5BU5D_t163* Context_GetSecureRandomBytes_m8326 (Context_t1750 * __this, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::Clear()
 void Context_Clear_m8327 (Context_t1750 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::ClearKeyInfo()
 void Context_ClearKeyInfo_m8328 (Context_t1750 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.SecurityProtocolType Mono.Security.Protocol.Tls.Context::DecodeProtocolCode(System.Int16)
 int32_t Context_DecodeProtocolCode_m8329 (Context_t1750 * __this, int16_t ___code, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::ChangeProtocol(System.Int16)
 void Context_ChangeProtocol_m8330 (Context_t1750 * __this, int16_t ___protocol, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.SecurityParameters Mono.Security.Protocol.Tls.Context::get_Current()
 SecurityParameters_t1768 * Context_get_Current_m8331 (Context_t1750 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.SecurityParameters Mono.Security.Protocol.Tls.Context::get_Negotiating()
 SecurityParameters_t1768 * Context_get_Negotiating_m8332 (Context_t1750 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.SecurityParameters Mono.Security.Protocol.Tls.Context::get_Read()
 SecurityParameters_t1768 * Context_get_Read_m8333 (Context_t1750 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.SecurityParameters Mono.Security.Protocol.Tls.Context::get_Write()
 SecurityParameters_t1768 * Context_get_Write_m8334 (Context_t1750 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::StartSwitchingSecurityParameters(System.Boolean)
 void Context_StartSwitchingSecurityParameters_m8335 (Context_t1750 * __this, bool ___client, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::EndSwitchingSecurityParameters(System.Boolean)
 void Context_EndSwitchingSecurityParameters_m8336 (Context_t1750 * __this, bool ___client, MethodInfo* method) IL2CPP_METHOD_ATTR;
