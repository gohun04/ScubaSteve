#pragma once
// Soomla.Store.Example.ExampleWindow
struct ExampleWindow_t557;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t220;
// UnityEngine.Font
struct Font_t558;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Texture2D>
struct Dictionary_2_t559;
// System.Collections.Generic.Dictionary`2<System.String,System.Boolean>
struct Dictionary_2_t560;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// Soomla.Store.Example.ExampleWindow/GUIState
#include "AssemblyU2DCSharp_Soomla_Store_Example_ExampleWindow_GUIStat.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// Soomla.Store.Example.ExampleWindow
struct ExampleWindow_t557  : public MonoBehaviour_t39
{
	// Soomla.Store.Example.ExampleWindow/GUIState Soomla.Store.Example.ExampleWindow::guiState
	int32_t ___guiState_3;
	// UnityEngine.Vector2 Soomla.Store.Example.ExampleWindow::goodsScrollPosition
	Vector2_t177  ___goodsScrollPosition_4;
	// UnityEngine.Vector2 Soomla.Store.Example.ExampleWindow::productScrollPosition
	Vector2_t177  ___productScrollPosition_5;
	// System.Boolean Soomla.Store.Example.ExampleWindow::isDragging
	bool ___isDragging_6;
	// UnityEngine.Vector2 Soomla.Store.Example.ExampleWindow::startTouch
	Vector2_t177  ___startTouch_7;
	// System.Boolean Soomla.Store.Example.ExampleWindow::checkAffordable
	bool ___checkAffordable_8;
	// System.String Soomla.Store.Example.ExampleWindow::fontSuffix
	String_t* ___fontSuffix_9;
	// UnityEngine.Texture2D Soomla.Store.Example.ExampleWindow::tImgDirect
	Texture2D_t220 * ___tImgDirect_11;
	// UnityEngine.Texture2D Soomla.Store.Example.ExampleWindow::tLogoNew
	Texture2D_t220 * ___tLogoNew_12;
	// UnityEngine.Font Soomla.Store.Example.ExampleWindow::fgoodDog
	Font_t558 * ___fgoodDog_13;
	// UnityEngine.Font Soomla.Store.Example.ExampleWindow::fgoodDogSmall
	Font_t558 * ___fgoodDogSmall_14;
	// UnityEngine.Font Soomla.Store.Example.ExampleWindow::fTitle
	Font_t558 * ___fTitle_15;
	// UnityEngine.Texture2D Soomla.Store.Example.ExampleWindow::tWhitePixel
	Texture2D_t220 * ___tWhitePixel_16;
	// UnityEngine.Texture2D Soomla.Store.Example.ExampleWindow::tMuffins
	Texture2D_t220 * ___tMuffins_17;
	// UnityEngine.Font Soomla.Store.Example.ExampleWindow::fName
	Font_t558 * ___fName_18;
	// UnityEngine.Font Soomla.Store.Example.ExampleWindow::fDesc
	Font_t558 * ___fDesc_19;
	// UnityEngine.Font Soomla.Store.Example.ExampleWindow::fBuy
	Font_t558 * ___fBuy_20;
	// UnityEngine.Texture2D Soomla.Store.Example.ExampleWindow::tBack
	Texture2D_t220 * ___tBack_21;
	// UnityEngine.Texture2D Soomla.Store.Example.ExampleWindow::tGetMore
	Texture2D_t220 * ___tGetMore_22;
	// UnityEngine.Font Soomla.Store.Example.ExampleWindow::tTitle
	Font_t558 * ___tTitle_23;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Texture2D> Soomla.Store.Example.ExampleWindow::itemsTextures
	Dictionary_2_t559 * ___itemsTextures_24;
	// System.Collections.Generic.Dictionary`2<System.String,System.Boolean> Soomla.Store.Example.ExampleWindow::itemsAffordability
	Dictionary_2_t560 * ___itemsAffordability_25;
};
struct ExampleWindow_t557_StaticFields{
	// Soomla.Store.Example.ExampleWindow Soomla.Store.Example.ExampleWindow::instance
	ExampleWindow_t557 * ___instance_2;
	// System.Boolean Soomla.Store.Example.ExampleWindow::isVisible
	bool ___isVisible_10;
};
