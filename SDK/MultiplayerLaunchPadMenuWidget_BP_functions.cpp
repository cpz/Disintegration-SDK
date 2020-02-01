
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

// Function MultiplayerLaunchPadMenuWidget_BP.MultiplayerLaunchPadMenuWidget_BP_C.OnMenuActivate_BP
// (Event, Protected, BlueprintEvent)

void UMultiplayerLaunchPadMenuWidget_BP_C::OnMenuActivate_BP()
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerLaunchPadMenuWidget_BP.MultiplayerLaunchPadMenuWidget_BP_C.OnMenuActivate_BP");

	UMultiplayerLaunchPadMenuWidget_BP_C_OnMenuActivate_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerLaunchPadMenuWidget_BP.MultiplayerLaunchPadMenuWidget_BP_C.BndEvt__GoalVerticalBox_92_K2Node_ComponentBoundEvent_0_OnGoalPressedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FGoalData*              GoalData                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UMultiplayerLaunchPadMenuWidget_BP_C::BndEvt__GoalVerticalBox_92_K2Node_ComponentBoundEvent_0_OnGoalPressedEvent__DelegateSignature(struct FGoalData* GoalData)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerLaunchPadMenuWidget_BP.MultiplayerLaunchPadMenuWidget_BP_C.BndEvt__GoalVerticalBox_92_K2Node_ComponentBoundEvent_0_OnGoalPressedEvent__DelegateSignature");

	UMultiplayerLaunchPadMenuWidget_BP_C_BndEvt__GoalVerticalBox_92_K2Node_ComponentBoundEvent_0_OnGoalPressedEvent__DelegateSignature_Params params;
	params.GoalData = GoalData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerLaunchPadMenuWidget_BP.MultiplayerLaunchPadMenuWidget_BP_C.ExecuteUbergraph_MultiplayerLaunchPadMenuWidget_BP
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMultiplayerLaunchPadMenuWidget_BP_C::ExecuteUbergraph_MultiplayerLaunchPadMenuWidget_BP(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerLaunchPadMenuWidget_BP.MultiplayerLaunchPadMenuWidget_BP_C.ExecuteUbergraph_MultiplayerLaunchPadMenuWidget_BP");

	UMultiplayerLaunchPadMenuWidget_BP_C_ExecuteUbergraph_MultiplayerLaunchPadMenuWidget_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
