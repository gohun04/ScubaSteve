﻿#pragma once
// UnityEngine.Transform
struct Transform_t173;
// UnityEngine.Shader
struct Shader_t210;
// UnityEngine.Material
struct Material_t211;
// UnityStandardAssets.ImageEffects.PostEffectsBase
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_1.h"
// UnityStandardAssets.ImageEffects.SunShafts/SunShaftsResolution
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_54.h"
// UnityStandardAssets.ImageEffects.SunShafts/ShaftsScreenBlendMode
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_55.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityStandardAssets.ImageEffects.SunShafts
struct SunShafts_t281  : public PostEffectsBase_t213
{
	// UnityStandardAssets.ImageEffects.SunShafts/SunShaftsResolution UnityStandardAssets.ImageEffects.SunShafts::resolution
	int32_t ___resolution_5;
	// UnityStandardAssets.ImageEffects.SunShafts/ShaftsScreenBlendMode UnityStandardAssets.ImageEffects.SunShafts::screenBlendMode
	int32_t ___screenBlendMode_6;
	// UnityEngine.Transform UnityStandardAssets.ImageEffects.SunShafts::sunTransform
	Transform_t173 * ___sunTransform_7;
	// System.Int32 UnityStandardAssets.ImageEffects.SunShafts::radialBlurIterations
	int32_t ___radialBlurIterations_8;
	// UnityEngine.Color UnityStandardAssets.ImageEffects.SunShafts::sunColor
	Color_t222  ___sunColor_9;
	// UnityEngine.Color UnityStandardAssets.ImageEffects.SunShafts::sunThreshold
	Color_t222  ___sunThreshold_10;
	// System.Single UnityStandardAssets.ImageEffects.SunShafts::sunShaftBlurRadius
	float ___sunShaftBlurRadius_11;
	// System.Single UnityStandardAssets.ImageEffects.SunShafts::sunShaftIntensity
	float ___sunShaftIntensity_12;
	// System.Single UnityStandardAssets.ImageEffects.SunShafts::maxRadius
	float ___maxRadius_13;
	// System.Boolean UnityStandardAssets.ImageEffects.SunShafts::useDepthTexture
	bool ___useDepthTexture_14;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.SunShafts::sunShaftsShader
	Shader_t210 * ___sunShaftsShader_15;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.SunShafts::sunShaftsMaterial
	Material_t211 * ___sunShaftsMaterial_16;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.SunShafts::simpleClearShader
	Shader_t210 * ___simpleClearShader_17;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.SunShafts::simpleClearMaterial
	Material_t211 * ___simpleClearMaterial_18;
};
