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

// BlueprintGeneratedClass Retrieval_Flag_Base_Carrier_Effect_BP.Retrieval_Flag_Base_Carrier_Effect_BP_C
// 0x0008 (0x0478 - 0x0470)
class URetrieval_Flag_Base_Carrier_Effect_BP_C : public URetrievalObjectiveCarrierGameplayEffect
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0470(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Retrieval_Flag_Base_Carrier_Effect_BP.Retrieval_Flag_Base_Carrier_Effect_BP_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void ExecuteUbergraph_Retrieval_Flag_Base_Carrier_Effect_BP(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
