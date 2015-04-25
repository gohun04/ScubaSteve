#pragma once
// UnityEngine.GameObject
struct GameObject_t235;
// UnityEngine.UI.Text
struct Text_t604;
// FullScreenAdd
struct FullScreenAdd_t563;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t354;
// UnityEngine.AudioSource
struct AudioSource_t538;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// GameManager
struct GameManager_t605  : public MonoBehaviour_t39
{
	// System.Boolean GameManager::isGameStarted
	bool ___isGameStarted_2;
	// UnityEngine.GameObject GameManager::UI
	GameObject_t235 * ___UI_3;
	// System.Single GameManager::timer
	float ___timer_4;
	// UnityEngine.UI.Text GameManager::timerText
	Text_t604 * ___timerText_5;
	// UnityEngine.GameObject GameManager::PauseMenuObject
	GameObject_t235 * ___PauseMenuObject_6;
	// UnityEngine.GameObject GameManager::GameUI
	GameObject_t235 * ___GameUI_7;
	// FullScreenAdd GameManager::insert
	FullScreenAdd_t563 * ___insert_9;
	// UnityEngine.Vector3 GameManager::spawnPos
	Vector3_t175  ___spawnPos_10;
	// UnityEngine.GameObject[] GameManager::SpawnStart
	GameObjectU5BU5D_t354* ___SpawnStart_11;
	// UnityEngine.AudioSource GameManager::deathAudio
	AudioSource_t538 * ___deathAudio_12;
};
struct GameManager_t605_StaticFields{
	// System.Boolean GameManager::isGamePaused
	bool ___isGamePaused_8;
};
