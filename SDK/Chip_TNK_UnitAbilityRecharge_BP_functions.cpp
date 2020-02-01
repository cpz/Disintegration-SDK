
#include "../SDK.h"

// Name: Robogore, Version: 1.1.176

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function Chip_TNK_UnitAbilityRecharge_BP.Chip_TNK_UnitAbilityRecharge_BP_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UChip_TNK_UnitAbilityRecharge_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Chip_TNK_UnitAbilityRecharge_BP.Chip_TNK_UnitAbilityRecharge_BP_C.ReceiveBeginPlay");

	UChip_TNK_UnitAbilityRecharge_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Chip_TNK_UnitAbilityRecharge_BP.Chip_TNK_UnitAbilityRecharge_BP_C.ExecuteUbergraph_Chip_TNK_UnitAbilityRecharge_BP
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChip_TNK_UnitAbilityRecharge_BP_C::ExecuteUbergraph_Chip_TNK_UnitAbilityRecharge_BP(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Chip_TNK_UnitAbilityRecharge_BP.Chip_TNK_UnitAbilityRecharge_BP_C.ExecuteUbergraph_Chip_TNK_UnitAbilityRecharge_BP");

	UChip_TNK_UnitAbilityRecharge_BP_C_ExecuteUbergraph_Chip_TNK_UnitAbilityRecharge_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
