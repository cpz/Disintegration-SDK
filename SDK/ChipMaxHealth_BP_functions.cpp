
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

// Function ChipMaxHealth_BP.ChipMaxHealth_BP_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UChipMaxHealth_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChipMaxHealth_BP.ChipMaxHealth_BP_C.ReceiveBeginPlay");

	UChipMaxHealth_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChipMaxHealth_BP.ChipMaxHealth_BP_C.ExecuteUbergraph_ChipMaxHealth_BP
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChipMaxHealth_BP_C::ExecuteUbergraph_ChipMaxHealth_BP(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChipMaxHealth_BP.ChipMaxHealth_BP_C.ExecuteUbergraph_ChipMaxHealth_BP");

	UChipMaxHealth_BP_C_ExecuteUbergraph_ChipMaxHealth_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
