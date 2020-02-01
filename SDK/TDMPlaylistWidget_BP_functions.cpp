
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

// Function TDMPlaylistWidget_BP.TDMPlaylistWidget_BP_C.OnHoveredBP
// (Event, Public, BlueprintEvent)

void UTDMPlaylistWidget_BP_C::OnHoveredBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function TDMPlaylistWidget_BP.TDMPlaylistWidget_BP_C.OnHoveredBP");

	UTDMPlaylistWidget_BP_C_OnHoveredBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TDMPlaylistWidget_BP.TDMPlaylistWidget_BP_C.OnUnHoveredBP
// (Event, Public, BlueprintEvent)

void UTDMPlaylistWidget_BP_C::OnUnHoveredBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function TDMPlaylistWidget_BP.TDMPlaylistWidget_BP_C.OnUnHoveredBP");

	UTDMPlaylistWidget_BP_C_OnUnHoveredBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TDMPlaylistWidget_BP.TDMPlaylistWidget_BP_C.SetEnabledBP
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          setEnable                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTDMPlaylistWidget_BP_C::SetEnabledBP(bool* setEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function TDMPlaylistWidget_BP.TDMPlaylistWidget_BP_C.SetEnabledBP");

	UTDMPlaylistWidget_BP_C_SetEnabledBP_Params params;
	params.setEnable = setEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TDMPlaylistWidget_BP.TDMPlaylistWidget_BP_C.ExecuteUbergraph_TDMPlaylistWidget_BP
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTDMPlaylistWidget_BP_C::ExecuteUbergraph_TDMPlaylistWidget_BP(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TDMPlaylistWidget_BP.TDMPlaylistWidget_BP_C.ExecuteUbergraph_TDMPlaylistWidget_BP");

	UTDMPlaylistWidget_BP_C_ExecuteUbergraph_TDMPlaylistWidget_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
