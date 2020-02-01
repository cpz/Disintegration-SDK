
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

// Function CommunicationWheelEmoteSelection_BP.CommunicationWheelEmoteSelection_BP_C.OnHoveredBP
// (Event, Public, BlueprintEvent)

void UCommunicationWheelEmoteSelection_BP_C::OnHoveredBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommunicationWheelEmoteSelection_BP.CommunicationWheelEmoteSelection_BP_C.OnHoveredBP");

	UCommunicationWheelEmoteSelection_BP_C_OnHoveredBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommunicationWheelEmoteSelection_BP.CommunicationWheelEmoteSelection_BP_C.OnUnHoveredBP
// (Event, Public, BlueprintEvent)

void UCommunicationWheelEmoteSelection_BP_C::OnUnHoveredBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommunicationWheelEmoteSelection_BP.CommunicationWheelEmoteSelection_BP_C.OnUnHoveredBP");

	UCommunicationWheelEmoteSelection_BP_C_OnUnHoveredBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommunicationWheelEmoteSelection_BP.CommunicationWheelEmoteSelection_BP_C.ExecuteUbergraph_CommunicationWheelEmoteSelection_BP
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCommunicationWheelEmoteSelection_BP_C::ExecuteUbergraph_CommunicationWheelEmoteSelection_BP(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommunicationWheelEmoteSelection_BP.CommunicationWheelEmoteSelection_BP_C.ExecuteUbergraph_CommunicationWheelEmoteSelection_BP");

	UCommunicationWheelEmoteSelection_BP_C_ExecuteUbergraph_CommunicationWheelEmoteSelection_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
