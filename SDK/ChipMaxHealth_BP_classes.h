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

// BlueprintGeneratedClass ChipMaxHealth_BP.ChipMaxHealth_BP_C
// 0x0008 (0x0318 - 0x0310)
class UChipMaxHealth_BP_C : public UV1GameplayEffect
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0310(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ChipMaxHealth_BP.ChipMaxHealth_BP_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void ExecuteUbergraph_ChipMaxHealth_BP(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
