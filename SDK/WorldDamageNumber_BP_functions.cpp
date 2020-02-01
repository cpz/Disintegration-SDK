
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

// Function WorldDamageNumber_BP.WorldDamageNumber_BP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWorldDamageNumber_BP_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldDamageNumber_BP.WorldDamageNumber_BP_C.Construct");

	UWorldDamageNumber_BP_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WorldDamageNumber_BP.WorldDamageNumber_BP_C.ExecuteUbergraph_WorldDamageNumber_BP
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWorldDamageNumber_BP_C::ExecuteUbergraph_WorldDamageNumber_BP(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldDamageNumber_BP.WorldDamageNumber_BP_C.ExecuteUbergraph_WorldDamageNumber_BP");

	UWorldDamageNumber_BP_C_ExecuteUbergraph_WorldDamageNumber_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
