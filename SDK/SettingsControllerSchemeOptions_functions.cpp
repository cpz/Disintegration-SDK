
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

// Function SettingsControllerSchemeOptions.SettingsControllerSchemeOptions_C.OnSettingsHovered
// (Event, Protected, BlueprintEvent)

void USettingsControllerSchemeOptions_C::OnSettingsHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsControllerSchemeOptions.SettingsControllerSchemeOptions_C.OnSettingsHovered");

	USettingsControllerSchemeOptions_C_OnSettingsHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingsControllerSchemeOptions.SettingsControllerSchemeOptions_C.OnSettingsUnHovered
// (Event, Protected, BlueprintEvent)

void USettingsControllerSchemeOptions_C::OnSettingsUnHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsControllerSchemeOptions.SettingsControllerSchemeOptions_C.OnSettingsUnHovered");

	USettingsControllerSchemeOptions_C_OnSettingsUnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingsControllerSchemeOptions.SettingsControllerSchemeOptions_C.ExecuteUbergraph_SettingsControllerSchemeOptions
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USettingsControllerSchemeOptions_C::ExecuteUbergraph_SettingsControllerSchemeOptions(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsControllerSchemeOptions.SettingsControllerSchemeOptions_C.ExecuteUbergraph_SettingsControllerSchemeOptions");

	USettingsControllerSchemeOptions_C_ExecuteUbergraph_SettingsControllerSchemeOptions_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
