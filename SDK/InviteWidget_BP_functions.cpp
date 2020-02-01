
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

// Function InviteWidget_BP.InviteWidget_BP_C.OnHoveredBP
// (Event, Public, BlueprintEvent)

void UInviteWidget_BP_C::OnHoveredBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function InviteWidget_BP.InviteWidget_BP_C.OnHoveredBP");

	UInviteWidget_BP_C_OnHoveredBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InviteWidget_BP.InviteWidget_BP_C.OnUnHoveredBP
// (Event, Public, BlueprintEvent)

void UInviteWidget_BP_C::OnUnHoveredBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function InviteWidget_BP.InviteWidget_BP_C.OnUnHoveredBP");

	UInviteWidget_BP_C_OnUnHoveredBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InviteWidget_BP.InviteWidget_BP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UInviteWidget_BP_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function InviteWidget_BP.InviteWidget_BP_C.Construct");

	UInviteWidget_BP_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InviteWidget_BP.InviteWidget_BP_C.ExecuteUbergraph_InviteWidget_BP
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInviteWidget_BP_C::ExecuteUbergraph_InviteWidget_BP(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function InviteWidget_BP.InviteWidget_BP_C.ExecuteUbergraph_InviteWidget_BP");

	UInviteWidget_BP_C_ExecuteUbergraph_InviteWidget_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
