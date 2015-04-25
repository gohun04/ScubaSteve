#pragma once
// UnityEngine.GameObject
struct GameObject_t235;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t354;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// SpawnerSC
struct SpawnerSC_t618  : public MonoBehaviour_t39
{
	// UnityEngine.GameObject SpawnerSC::posStart
	GameObject_t235 * ___posStart_2;
	// UnityEngine.GameObject SpawnerSC::posEnd
	GameObject_t235 * ___posEnd_3;
	// UnityEngine.GameObject[] SpawnerSC::objs
	GameObjectU5BU5D_t354* ___objs_4;
	// System.Single SpawnerSC::spawnStartTime
	float ___spawnStartTime_5;
	// System.Single SpawnerSC::spawnTime
	float ___spawnTime_6;
	// System.Int32 SpawnerSC::count
	int32_t ___count_7;
	// System.Single SpawnerSC::posXStart
	float ___posXStart_8;
	// System.Single SpawnerSC::posXEnd
	float ___posXEnd_9;
	// System.Single SpawnerSC::lastXPos
	float ___lastXPos_10;
};
