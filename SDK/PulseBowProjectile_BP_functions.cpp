
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

// Function PulseBowProjectile_BP.PulseBowProjectile_BP_C.Event_OnStick
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             HitResult                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void APulseBowProjectile_BP_C::Event_OnStick(struct FHitResult* HitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function PulseBowProjectile_BP.PulseBowProjectile_BP_C.Event_OnStick");

	APulseBowProjectile_BP_C_Event_OnStick_Params params;
	params.HitResult = HitResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PulseBowProjectile_BP.PulseBowProjectile_BP_C.ExecuteUbergraph_PulseBowProjectile_BP
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APulseBowProjectile_BP_C::ExecuteUbergraph_PulseBowProjectile_BP(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PulseBowProjectile_BP.PulseBowProjectile_BP_C.ExecuteUbergraph_PulseBowProjectile_BP");

	APulseBowProjectile_BP_C_ExecuteUbergraph_PulseBowProjectile_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
