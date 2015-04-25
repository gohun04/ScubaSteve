#pragma once
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t235;
// UnityEngine.UI.Slider
struct Slider_t613;
// GoogleAds
struct GoogleAds_t607;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// LevelLoader
struct LevelLoader_t611  : public MonoBehaviour_t39
{
	// System.String LevelLoader::leveltoLoad
	String_t* ___leveltoLoad_2;
	// UnityEngine.GameObject LevelLoader::progressBar
	GameObject_t235 * ___progressBar_3;
	// UnityEngine.UI.Slider LevelLoader::slider
	Slider_t613 * ___slider_4;
	// GoogleAds LevelLoader::ads
	GoogleAds_t607 * ___ads_5;
	// System.Int32 LevelLoader::levelProgress
	int32_t ___levelProgress_6;
};
