
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

// Function PlayerBadgeEditorMenu_BP.PlayerBadgeEditorMenu_BP_C.Get_Outline_bIsEnabled_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPlayerBadgeEditorMenu_BP_C::Get_Outline_bIsEnabled_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerBadgeEditorMenu_BP.PlayerBadgeEditorMenu_BP_C.Get_Outline_bIsEnabled_1");

	UPlayerBadgeEditorMenu_BP_C_Get_Outline_bIsEnabled_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlayerBadgeEditorMenu_BP.PlayerBadgeEditorMenu_BP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPlayerBadgeEditorMenu_BP_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerBadgeEditorMenu_BP.PlayerBadgeEditorMenu_BP_C.Construct");

	UPlayerBadgeEditorMenu_BP_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerBadgeEditorMenu_BP.PlayerBadgeEditorMenu_BP_C.ExecuteUbergraph_PlayerBadgeEditorMenu_BP
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerBadgeEditorMenu_BP_C::ExecuteUbergraph_PlayerBadgeEditorMenu_BP(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerBadgeEditorMenu_BP.PlayerBadgeEditorMenu_BP_C.ExecuteUbergraph_PlayerBadgeEditorMenu_BP");

	UPlayerBadgeEditorMenu_BP_C_ExecuteUbergraph_PlayerBadgeEditorMenu_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
