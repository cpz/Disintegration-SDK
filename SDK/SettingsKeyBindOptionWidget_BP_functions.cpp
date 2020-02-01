
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

// Function SettingsKeyBindOptionWidget_BP.SettingsKeyBindOptionWidget_BP_C.OnSettingsHovered
// (Event, Protected, BlueprintEvent)

void USettingsKeyBindOptionWidget_BP_C::OnSettingsHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsKeyBindOptionWidget_BP.SettingsKeyBindOptionWidget_BP_C.OnSettingsHovered");

	USettingsKeyBindOptionWidget_BP_C_OnSettingsHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingsKeyBindOptionWidget_BP.SettingsKeyBindOptionWidget_BP_C.OnSettingsUnHovered
// (Event, Protected, BlueprintEvent)

void USettingsKeyBindOptionWidget_BP_C::OnSettingsUnHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsKeyBindOptionWidget_BP.SettingsKeyBindOptionWidget_BP_C.OnSettingsUnHovered");

	USettingsKeyBindOptionWidget_BP_C_OnSettingsUnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingsKeyBindOptionWidget_BP.SettingsKeyBindOptionWidget_BP_C.ExecuteUbergraph_SettingsKeyBindOptionWidget_BP
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USettingsKeyBindOptionWidget_BP_C::ExecuteUbergraph_SettingsKeyBindOptionWidget_BP(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsKeyBindOptionWidget_BP.SettingsKeyBindOptionWidget_BP_C.ExecuteUbergraph_SettingsKeyBindOptionWidget_BP");

	USettingsKeyBindOptionWidget_BP_C_ExecuteUbergraph_SettingsKeyBindOptionWidget_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
