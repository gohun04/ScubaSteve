#pragma once
// System.String
struct String_t;
// System.Collections.Generic.List`1<Soomla.Reward>
struct List_1_t77;
// Soomla.Reward
struct Reward_t40;
// Soomla.Reward
#include "AssemblyU2DCSharpU2Dfirstpass_Soomla_Reward.h"
// Soomla.RandomReward
struct RandomReward_t78  : public Reward_t40
{
	// System.Collections.Generic.List`1<Soomla.Reward> Soomla.RandomReward::Rewards
	List_1_t77 * ___Rewards_8;
	// Soomla.Reward Soomla.RandomReward::LastGivenReward
	Reward_t40 * ___LastGivenReward_9;
};
struct RandomReward_t78_StaticFields{
	// System.String Soomla.RandomReward::TAG
	String_t* ___TAG_7;
};
