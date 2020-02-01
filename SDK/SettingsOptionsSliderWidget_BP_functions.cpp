
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

// Function SettingsOptionsSliderWidget_BP.SettingsOptionsSliderWidget_BP_C.OnSettingsHovered
// (Event, Protected, BlueprintEvent)

void USettingsOptionsSliderWidget_BP_C::OnSettingsHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsOptionsSliderWidget_BP.SettingsOptionsSliderWidget_BP_C.OnSettingsHovered");

	USettingsOptionsSliderWidget_BP_C_OnSettingsHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingsOptionsSliderWidget_BP.SettingsOptionsSliderWidget_BP_C.OnSettingsUnHovered
// (Event, Protected, BlueprintEvent)

void USettingsOptionsSliderWidget_BP_C::OnSettingsUnHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsOptionsSliderWidget_BP.SettingsOptionsSliderWidget_BP_C.OnSettingsUnHovered");

	USettingsOptionsSliderWidget_BP_C_OnSettingsUnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingsOptionsSliderWidget_BP.SettingsOptionsSliderWidget_BP_C.ExecuteUbergraph_SettingsOptionsSliderWidget_BP
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USettingsOptionsSliderWidget_BP_C::ExecuteUbergraph_SettingsOptionsSliderWidget_BP(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsOptionsSliderWidget_BP.SettingsOptionsSliderWidget_BP_C.ExecuteUbergraph_SettingsOptionsSliderWidget_BP");

	USettingsOptionsSliderWidget_BP_C_ExecuteUbergraph_SettingsOptionsSliderWidget_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
