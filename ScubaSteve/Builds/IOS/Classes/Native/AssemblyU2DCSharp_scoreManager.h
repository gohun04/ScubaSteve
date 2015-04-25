#pragma once
// UnityEngine.Transform
struct Transform_t173;
// UnityEngine.UI.Text
struct Text_t604;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// scoreManager
struct scoreManager_t622  : public MonoBehaviour_t39
{
	// System.Single scoreManager::Score
	float ___Score_2;
	// UnityEngine.Transform scoreManager::Player
	Transform_t173 * ___Player_3;
	// System.Single scoreManager::distance
	float ___distance_4;
	// System.Int32 scoreManager::health
	int32_t ___health_5;
	// UnityEngine.UI.Text scoreManager::scoreTxt
	Text_t604 * ___scoreTxt_6;
	// UnityEngine.Vector3 scoreManager::lastPos
	Vector3_t175  ___lastPos_7;
	// System.Int32 scoreManager::bestScore
	int32_t ___bestScore_8;
};
