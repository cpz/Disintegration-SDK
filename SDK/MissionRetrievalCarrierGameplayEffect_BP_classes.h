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

// BlueprintGeneratedClass MissionRetrievalCarrierGameplayEffect_BP.MissionRetrievalCarrierGameplayEffect_BP_C
// 0x0008 (0x0458 - 0x0450)
class UMissionRetrievalCarrierGameplayEffect_BP_C : public UDecoratedSimpleGameplayEffect
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0450(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MissionRetrievalCarrierGameplayEffect_BP.MissionRetrievalCarrierGameplayEffect_BP_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void ExecuteUbergraph_MissionRetrievalCarrierGameplayEffect_BP(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
