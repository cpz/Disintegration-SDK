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

// BlueprintGeneratedClass Chip_STR_UnitAbilityRecharge_BP.Chip_STR_UnitAbilityRecharge_BP_C
// 0x0008 (0x0318 - 0x0310)
class UChip_STR_UnitAbilityRecharge_BP_C : public UV1GameplayEffect
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0310(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Chip_STR_UnitAbilityRecharge_BP.Chip_STR_UnitAbilityRecharge_BP_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void ExecuteUbergraph_Chip_STR_UnitAbilityRecharge_BP(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
