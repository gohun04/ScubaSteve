#pragma once
// GameManager
struct GameManager_t605;
// UnityEngine.AudioSource
struct AudioSource_t538;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// PlayerManager
struct PlayerManager_t608  : public MonoBehaviour_t39
{
	// GameManager PlayerManager::man
	GameManager_t605 * ___man_2;
	// System.Int32 PlayerManager::health
	int32_t ___health_3;
	// UnityEngine.AudioSource PlayerManager::bombAudio
	AudioSource_t538 * ___bombAudio_4;
	// UnityEngine.AudioSource PlayerManager::deathAudio
	AudioSource_t538 * ___deathAudio_5;
	// UnityEngine.AudioSource PlayerManager::enemyAudio
	AudioSource_t538 * ___enemyAudio_6;
};
