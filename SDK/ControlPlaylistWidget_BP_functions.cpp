
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

// Function ControlPlaylistWidget_BP.ControlPlaylistWidget_BP_C.OnHoveredBP
// (Event, Public, BlueprintEvent)

void UControlPlaylistWidget_BP_C::OnHoveredBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlPlaylistWidget_BP.ControlPlaylistWidget_BP_C.OnHoveredBP");

	UControlPlaylistWidget_BP_C_OnHoveredBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlPlaylistWidget_BP.ControlPlaylistWidget_BP_C.OnUnHoveredBP
// (Event, Public, BlueprintEvent)

void UControlPlaylistWidget_BP_C::OnUnHoveredBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlPlaylistWidget_BP.ControlPlaylistWidget_BP_C.OnUnHoveredBP");

	UControlPlaylistWidget_BP_C_OnUnHoveredBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlPlaylistWidget_BP.ControlPlaylistWidget_BP_C.SetEnabledBP
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          setEnable                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UControlPlaylistWidget_BP_C::SetEnabledBP(bool* setEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlPlaylistWidget_BP.ControlPlaylistWidget_BP_C.SetEnabledBP");

	UControlPlaylistWidget_BP_C_SetEnabledBP_Params params;
	params.setEnable = setEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlPlaylistWidget_BP.ControlPlaylistWidget_BP_C.ExecuteUbergraph_ControlPlaylistWidget_BP
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UControlPlaylistWidget_BP_C::ExecuteUbergraph_ControlPlaylistWidget_BP(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlPlaylistWidget_BP.ControlPlaylistWidget_BP_C.ExecuteUbergraph_ControlPlaylistWidget_BP");

	UControlPlaylistWidget_BP_C_ExecuteUbergraph_ControlPlaylistWidget_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
