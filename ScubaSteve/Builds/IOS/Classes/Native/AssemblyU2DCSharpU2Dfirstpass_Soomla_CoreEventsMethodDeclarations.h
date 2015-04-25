#pragma once

// Soomla.CoreEvents
struct CoreEvents_t36;
// System.String
struct String_t;
// Soomla.Reward
struct Reward_t40;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t41;

// System.Void Soomla.CoreEvents::.ctor()
 void CoreEvents__ctor_m33 (CoreEvents_t36 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.CoreEvents::.cctor()
 void CoreEvents__cctor_m34 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.CoreEvents::soomlaCore_Init(System.String,System.Boolean)
 void CoreEvents_soomlaCore_Init_m35 (Object_t * __this/* static, unused */, String_t* ___secret, bool ___debug, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.CoreEvents::Awake()
 void CoreEvents_Awake_m36 (CoreEvents_t36 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.CoreEvents::Initialize()
 void CoreEvents_Initialize_m37 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.CoreEvents::onRewardGiven(System.String)
 void CoreEvents_onRewardGiven_m38 (CoreEvents_t36 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.CoreEvents::onRewardTaken(System.String)
 void CoreEvents_onRewardTaken_m39 (CoreEvents_t36 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.CoreEvents::onCustomEvent(System.String)
 void CoreEvents_onCustomEvent_m40 (CoreEvents_t36 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.CoreEvents::<OnRewardGiven>m__A(Soomla.Reward)
 void CoreEvents_U3COnRewardGivenU3Em__A_m41 (Object_t * __this/* static, unused */, Reward_t40 * p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.CoreEvents::<OnRewardTaken>m__B(Soomla.Reward)
 void CoreEvents_U3COnRewardTakenU3Em__B_m42 (Object_t * __this/* static, unused */, Reward_t40 * p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.CoreEvents::<OnCustomEvent>m__C(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>)
 void CoreEvents_U3COnCustomEventU3Em__C_m43 (Object_t * __this/* static, unused */, String_t* p0, Dictionary_2_t41 * p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
