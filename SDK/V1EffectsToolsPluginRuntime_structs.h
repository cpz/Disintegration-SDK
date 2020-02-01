#pragma once

// Name: Robogore, Version: 1.1.176

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum V1EffectsToolsPluginRuntime.eImpactType
enum class EeImpactType : uint8_t
{
	eImpactType__Any               = 0,
	eImpactType__Direct            = 1,
	eImpactType__Glancing          = 2,
	eImpactType__eImpactType_MAX   = 3
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct V1EffectsToolsPluginRuntime.V1EffectDecalParams
// 0x0070
struct FV1EffectDecalParams
{
	class UMaterialInterface*                          Material;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty V1EffectsToolsPluginRuntime.V1EffectDecalParams.materialPtr
	int                                                sortOrder;                                                // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              fadeDelay;                                                // 0x0034(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              fadeDuration;                                             // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     sizeMin;                                                  // 0x003C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     sizeMax;                                                  // 0x0048(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    baseRotation;                                             // 0x0054(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              rotationRange;                                            // 0x0060(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EeImpactType                                       impactType;                                               // 0x0064(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0064(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      usesPOM : 1;                                              // 0x0068(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      flipbook : 1;                                             // 0x0068(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      alignToImpact : 1;                                        // 0x0068(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0069(0x0003) MISSED OFFSET
	int                                                Priority;                                                 // 0x006C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct V1EffectsToolsPluginRuntime.V1ImpactEffectData
// 0x0070
struct FV1ImpactEffectData
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty V1EffectsToolsPluginRuntime.V1ImpactEffectData.ParticleSystem
	unsigned char                                      UnknownData01[0x28];                                      // 0x0028(0x0028) UNKNOWN PROPERTY: SoftObjectProperty V1EffectsToolsPluginRuntime.V1ImpactEffectData.audioEventAK
	bool                                               audioIsOccluded;                                          // 0x0050(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      spawnParticlesEvenWhenOffscreen;                          // 0x0051(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0052(0x0006) MISSED OFFSET
	TArray<class UV1EffectDecal*>                      decals;                                                   // 0x0058(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	float                                              totalEffectLifetime;                                      // 0x0068(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
};

// ScriptStruct V1EffectsToolsPluginRuntime.V1EffectTableNodeOverrides
// 0x0003
struct FV1EffectTableNodeOverrides
{
	bool                                               allowNullParticles;                                       // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               allowNullAudio;                                           // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               allowNoDecals;                                            // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct V1EffectsToolsPluginRuntime.V1EffectMatrixNode
// 0x0020
struct FV1EffectMatrixNode
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct V1EffectsToolsPluginRuntime.V1EffectSpawningData
// 0x0078
struct FV1EffectSpawningData
{
	struct FV1ImpactEffectData                         effectData;                                               // 0x0000(0x0070) (Edit)
	struct FV1EffectTableNodeOverrides                 overrides;                                                // 0x0070(0x0003) (Edit)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0073(0x0005) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
