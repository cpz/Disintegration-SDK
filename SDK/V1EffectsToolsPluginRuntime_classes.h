#pragma once

// Name: Robogore, Version: 1.1.176

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class V1EffectsToolsPluginRuntime.OverrideMaterialResponseInterface
// 0x0000 (0x0028 - 0x0028)
class UOverrideMaterialResponseInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1EffectsToolsPluginRuntime.OverrideMaterialResponseInterface");
		return ptr;
	}

};


// Class V1EffectsToolsPluginRuntime.V1EffectActor
// 0x0030 (0x03C0 - 0x0390)
class AV1EffectActor : public AActor
{
public:
	class USceneComponent*                             m_root;                                                   // 0x0390(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    m_particleSystemComponent;                                // 0x0398(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	bool                                               m_particlesFinished;                                      // 0x03A0(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1F];                                      // 0x03A1(0x001F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1EffectsToolsPluginRuntime.V1EffectActor");
		return ptr;
	}


	void OnSystemFinished(class UParticleSystemComponent** system);
};


// Class V1EffectsToolsPluginRuntime.V1EffectDecal
// 0x0070 (0x0098 - 0x0028)
class UV1EffectDecal : public UObject
{
public:
	struct FV1EffectDecalParams                        decalData;                                                // 0x0028(0x0070) (Edit, BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1EffectsToolsPluginRuntime.V1EffectDecal");
		return ptr;
	}

};


// Class V1EffectsToolsPluginRuntime.V1EffectMatrix
// 0x0100 (0x0128 - 0x0028)
class UV1EffectMatrix : public UObject
{
public:
	struct FGameplayTag                                m_rootFXTag;                                              // 0x0028(0x0008) (Edit)
	TMap<class UPhysicalMaterial*, struct FGameplayTag> m_materialMapping;                                        // 0x0030(0x0050) (Edit, ZeroConstructor)
	struct FGameplayTag                                m_defaultSurfaceMaterial;                                 // 0x0080(0x0008) (Edit)
	TMap<struct FName, class UV1EffectTable*>          m_fxTables;                                               // 0x0088(0x0050) (ZeroConstructor)
	TMap<class UV1EffectTable*, struct FGameplayTag>   m_inverseTableMapping;                                    // 0x00D8(0x0050) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1EffectsToolsPluginRuntime.V1EffectMatrix");
		return ptr;
	}

};


// Class V1EffectsToolsPluginRuntime.V1EffectsToolsSettings
// 0x0000 (0x0028 - 0x0028)
class UV1EffectsToolsSettings : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1EffectsToolsPluginRuntime.V1EffectsToolsSettings");
		return ptr;
	}

};


// Class V1EffectsToolsPluginRuntime.V1EffectTable
// 0x0058 (0x0080 - 0x0028)
class UV1EffectTable : public UObject
{
public:
	struct FGameplayTag                                m_targetFXTagRoot;                                        // 0x0028(0x0008) (Edit)
	TMap<struct FName, class UV1EffectTableNode*>      m_effectMapping;                                          // 0x0030(0x0050) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1EffectsToolsPluginRuntime.V1EffectTable");
		return ptr;
	}

};


// Class V1EffectsToolsPluginRuntime.V1EffectTableNode
// 0x0078 (0x00A0 - 0x0028)
class UV1EffectTableNode : public UObject
{
public:
	struct FV1ImpactEffectData                         effectData;                                               // 0x0028(0x0070) (Edit)
	struct FV1EffectTableNodeOverrides                 overrides;                                                // 0x0098(0x0003) (Edit)
	unsigned char                                      UnknownData00[0x5];                                       // 0x009B(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1EffectsToolsPluginRuntime.V1EffectTableNode");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
