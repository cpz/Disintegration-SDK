
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

// Function SettingsResolutionOptionWidget_BP.SettingsResolutionOptionWidget_BP_C.OnSettingsUnHovered
// (Event, Public, BlueprintEvent)

void USettingsResolutionOptionWidget_BP_C::OnSettingsUnHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsResolutionOptionWidget_BP.SettingsResolutionOptionWidget_BP_C.OnSettingsUnHovered");

	USettingsResolutionOptionWidget_BP_C_OnSettingsUnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingsResolutionOptionWidget_BP.SettingsResolutionOptionWidget_BP_C.OnSettingsHovered
// (Event, Public, BlueprintEvent)

void USettingsResolutionOptionWidget_BP_C::OnSettingsHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsResolutionOptionWidget_BP.SettingsResolutionOptionWidget_BP_C.OnSettingsHovered");

	USettingsResolutionOptionWidget_BP_C_OnSettingsHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingsResolutionOptionWidget_BP.SettingsResolutionOptionWidget_BP_C.ExecuteUbergraph_SettingsResolutionOptionWidget_BP
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USettingsResolutionOptionWidget_BP_C::ExecuteUbergraph_SettingsResolutionOptionWidget_BP(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsResolutionOptionWidget_BP.SettingsResolutionOptionWidget_BP_C.ExecuteUbergraph_SettingsResolutionOptionWidget_BP");

	USettingsResolutionOptionWidget_BP_C_ExecuteUbergraph_SettingsResolutionOptionWidget_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
