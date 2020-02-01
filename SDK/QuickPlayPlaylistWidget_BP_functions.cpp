
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

// Function QuickPlayPlaylistWidget_BP.QuickPlayPlaylistWidget_BP_C.OnHoveredBP
// (Event, Public, BlueprintEvent)

void UQuickPlayPlaylistWidget_BP_C::OnHoveredBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickPlayPlaylistWidget_BP.QuickPlayPlaylistWidget_BP_C.OnHoveredBP");

	UQuickPlayPlaylistWidget_BP_C_OnHoveredBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickPlayPlaylistWidget_BP.QuickPlayPlaylistWidget_BP_C.OnUnHoveredBP
// (Event, Public, BlueprintEvent)

void UQuickPlayPlaylistWidget_BP_C::OnUnHoveredBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickPlayPlaylistWidget_BP.QuickPlayPlaylistWidget_BP_C.OnUnHoveredBP");

	UQuickPlayPlaylistWidget_BP_C_OnUnHoveredBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickPlayPlaylistWidget_BP.QuickPlayPlaylistWidget_BP_C.SetEnabledBP
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          setEnable                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuickPlayPlaylistWidget_BP_C::SetEnabledBP(bool* setEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickPlayPlaylistWidget_BP.QuickPlayPlaylistWidget_BP_C.SetEnabledBP");

	UQuickPlayPlaylistWidget_BP_C_SetEnabledBP_Params params;
	params.setEnable = setEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickPlayPlaylistWidget_BP.QuickPlayPlaylistWidget_BP_C.ExecuteUbergraph_QuickPlayPlaylistWidget_BP
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuickPlayPlaylistWidget_BP_C::ExecuteUbergraph_QuickPlayPlaylistWidget_BP(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickPlayPlaylistWidget_BP.QuickPlayPlaylistWidget_BP_C.ExecuteUbergraph_QuickPlayPlaylistWidget_BP");

	UQuickPlayPlaylistWidget_BP_C_ExecuteUbergraph_QuickPlayPlaylistWidget_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
