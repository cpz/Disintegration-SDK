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

// BlueprintGeneratedClass Retrieval_Flag_Base_Squad_Effect_BP.Retrieval_Flag_Base_Squad_Effect_BP_C
// 0x0010 (0x0420 - 0x0410)
class URetrieval_Flag_Base_Squad_Effect_BP_C : public URetrievalObjectiveCarrierSquadGameplayEffect
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0410(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UUserWidget*                                 widgetInstance;                                           // 0x0418(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Retrieval_Flag_Base_Squad_Effect_BP.Retrieval_Flag_Base_Squad_Effect_BP_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void ExecuteUbergraph_Retrieval_Flag_Base_Squad_Effect_BP(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
