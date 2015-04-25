#pragma once

// System.DelegateSerializationHolder/DelegateEntry
struct DelegateEntry_t2359;
// System.Delegate
struct Delegate_t624;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1242;

// System.Void System.DelegateSerializationHolder/DelegateEntry::.ctor(System.Delegate,System.String)
 void DelegateEntry__ctor_m12793 (DelegateEntry_t2359 * __this, Delegate_t624 * ___del, String_t* ___targetLabel, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.DelegateSerializationHolder/DelegateEntry::DeserializeDelegate(System.Runtime.Serialization.SerializationInfo)
 Delegate_t624 * DelegateEntry_DeserializeDelegate_m12794 (DelegateEntry_t2359 * __this, SerializationInfo_t1242 * ___info, MethodInfo* method) IL2CPP_METHOD_ATTR;
