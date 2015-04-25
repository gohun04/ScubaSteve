#pragma once
// UnityEngine.GameObject
struct GameObject_t235;
// UnityEngine.Animator
struct Animator_t180;
// System.String
struct String_t;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// GetScore
struct GetScore_t568  : public MonoBehaviour_t39
{
	// UnityEngine.GameObject GetScore::newBestScoreLabel
	GameObject_t235 * ___newBestScoreLabel_2;
	// UnityEngine.Animator GetScore::anim
	Animator_t180 * ___anim_3;
	// System.Int32 GetScore::LastScore
	int32_t ___LastScore_4;
	// System.Int32 GetScore::bestScore
	int32_t ___bestScore_5;
	// System.String GetScore::bestScorestring
	String_t* ___bestScorestring_6;
};
