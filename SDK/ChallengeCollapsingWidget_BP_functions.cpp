
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

// Function ChallengeCollapsingWidget_BP.ChallengeCollapsingWidget_BP_C.OnHoveredBP
// (Event, Public, BlueprintEvent)

void UChallengeCollapsingWidget_BP_C::OnHoveredBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeCollapsingWidget_BP.ChallengeCollapsingWidget_BP_C.OnHoveredBP");

	UChallengeCollapsingWidget_BP_C_OnHoveredBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeCollapsingWidget_BP.ChallengeCollapsingWidget_BP_C.OnUnHoveredBP
// (Event, Public, BlueprintEvent)

void UChallengeCollapsingWidget_BP_C::OnUnHoveredBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeCollapsingWidget_BP.ChallengeCollapsingWidget_BP_C.OnUnHoveredBP");

	UChallengeCollapsingWidget_BP_C_OnUnHoveredBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeCollapsingWidget_BP.ChallengeCollapsingWidget_BP_C.OnCollapseChangeBP
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          isCollapsed                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallengeCollapsingWidget_BP_C::OnCollapseChangeBP(bool* isCollapsed)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeCollapsingWidget_BP.ChallengeCollapsingWidget_BP_C.OnCollapseChangeBP");

	UChallengeCollapsingWidget_BP_C_OnCollapseChangeBP_Params params;
	params.isCollapsed = isCollapsed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeCollapsingWidget_BP.ChallengeCollapsingWidget_BP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UChallengeCollapsingWidget_BP_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeCollapsingWidget_BP.ChallengeCollapsingWidget_BP_C.Construct");

	UChallengeCollapsingWidget_BP_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeCollapsingWidget_BP.ChallengeCollapsingWidget_BP_C.ExecuteUbergraph_ChallengeCollapsingWidget_BP
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallengeCollapsingWidget_BP_C::ExecuteUbergraph_ChallengeCollapsingWidget_BP(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeCollapsingWidget_BP.ChallengeCollapsingWidget_BP_C.ExecuteUbergraph_ChallengeCollapsingWidget_BP");

	UChallengeCollapsingWidget_BP_C_ExecuteUbergraph_ChallengeCollapsingWidget_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
