﻿#pragma once
// UnityEngine.Texture2D
struct Texture2D_t220;
// UnityEngine.Shader
struct Shader_t210;
// UnityEngine.Material
struct Material_t211;
// UnityStandardAssets.ImageEffects.PostEffectsBase
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_1.h"
// UnityStandardAssets.ImageEffects.Bloom/TweakMode
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_3.h"
// UnityStandardAssets.ImageEffects.Bloom/BloomScreenBlendMode
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_5.h"
// UnityStandardAssets.ImageEffects.Bloom/HDRBloomMode
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_4.h"
// UnityStandardAssets.ImageEffects.Bloom/BloomQuality
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_6.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityStandardAssets.ImageEffects.Bloom/LensFlareStyle
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_2.h"
// UnityStandardAssets.ImageEffects.Bloom
struct Bloom_t221  : public PostEffectsBase_t213
{
	// UnityStandardAssets.ImageEffects.Bloom/TweakMode UnityStandardAssets.ImageEffects.Bloom::tweakMode
	int32_t ___tweakMode_5;
	// UnityStandardAssets.ImageEffects.Bloom/BloomScreenBlendMode UnityStandardAssets.ImageEffects.Bloom::screenBlendMode
	int32_t ___screenBlendMode_6;
	// UnityStandardAssets.ImageEffects.Bloom/HDRBloomMode UnityStandardAssets.ImageEffects.Bloom::hdr
	int32_t ___hdr_7;
	// System.Boolean UnityStandardAssets.ImageEffects.Bloom::doHdr
	bool ___doHdr_8;
	// System.Single UnityStandardAssets.ImageEffects.Bloom::sepBlurSpread
	float ___sepBlurSpread_9;
	// UnityStandardAssets.ImageEffects.Bloom/BloomQuality UnityStandardAssets.ImageEffects.Bloom::quality
	int32_t ___quality_10;
	// System.Single UnityStandardAssets.ImageEffects.Bloom::bloomIntensity
	float ___bloomIntensity_11;
	// System.Single UnityStandardAssets.ImageEffects.Bloom::bloomThreshold
	float ___bloomThreshold_12;
	// UnityEngine.Color UnityStandardAssets.ImageEffects.Bloom::bloomThresholdColor
	Color_t222  ___bloomThresholdColor_13;
	// System.Int32 UnityStandardAssets.ImageEffects.Bloom::bloomBlurIterations
	int32_t ___bloomBlurIterations_14;
	// System.Int32 UnityStandardAssets.ImageEffects.Bloom::hollywoodFlareBlurIterations
	int32_t ___hollywoodFlareBlurIterations_15;
	// System.Single UnityStandardAssets.ImageEffects.Bloom::flareRotation
	float ___flareRotation_16;
	// UnityStandardAssets.ImageEffects.Bloom/LensFlareStyle UnityStandardAssets.ImageEffects.Bloom::lensflareMode
	int32_t ___lensflareMode_17;
	// System.Single UnityStandardAssets.ImageEffects.Bloom::hollyStretchWidth
	float ___hollyStretchWidth_18;
	// System.Single UnityStandardAssets.ImageEffects.Bloom::lensflareIntensity
	float ___lensflareIntensity_19;
	// System.Single UnityStandardAssets.ImageEffects.Bloom::lensflareThreshold
	float ___lensflareThreshold_20;
	// System.Single UnityStandardAssets.ImageEffects.Bloom::lensFlareSaturation
	float ___lensFlareSaturation_21;
	// UnityEngine.Color UnityStandardAssets.ImageEffects.Bloom::flareColorA
	Color_t222  ___flareColorA_22;
	// UnityEngine.Color UnityStandardAssets.ImageEffects.Bloom::flareColorB
	Color_t222  ___flareColorB_23;
	// UnityEngine.Color UnityStandardAssets.ImageEffects.Bloom::flareColorC
	Color_t222  ___flareColorC_24;
	// UnityEngine.Color UnityStandardAssets.ImageEffects.Bloom::flareColorD
	Color_t222  ___flareColorD_25;
	// UnityEngine.Texture2D UnityStandardAssets.ImageEffects.Bloom::lensFlareVignetteMask
	Texture2D_t220 * ___lensFlareVignetteMask_26;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.Bloom::lensFlareShader
	Shader_t210 * ___lensFlareShader_27;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.Bloom::lensFlareMaterial
	Material_t211 * ___lensFlareMaterial_28;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.Bloom::screenBlendShader
	Shader_t210 * ___screenBlendShader_29;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.Bloom::screenBlend
	Material_t211 * ___screenBlend_30;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.Bloom::blurAndFlaresShader
	Shader_t210 * ___blurAndFlaresShader_31;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.Bloom::blurAndFlaresMaterial
	Material_t211 * ___blurAndFlaresMaterial_32;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.Bloom::brightPassFilterShader
	Shader_t210 * ___brightPassFilterShader_33;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.Bloom::brightPassFilterMaterial
	Material_t211 * ___brightPassFilterMaterial_34;
};
