
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

// Function SettingsBindingSubMenuWidget_BP.SettingsBindingSubMenuWidget_BP_C.AnimateToast
// (Event, Public, BlueprintEvent)

void USettingsBindingSubMenuWidget_BP_C::AnimateToast()
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsBindingSubMenuWidget_BP.SettingsBindingSubMenuWidget_BP_C.AnimateToast");

	USettingsBindingSubMenuWidget_BP_C_AnimateToast_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingsBindingSubMenuWidget_BP.SettingsBindingSubMenuWidget_BP_C.ExecuteUbergraph_SettingsBindingSubMenuWidget_BP
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USettingsBindingSubMenuWidget_BP_C::ExecuteUbergraph_SettingsBindingSubMenuWidget_BP(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsBindingSubMenuWidget_BP.SettingsBindingSubMenuWidget_BP_C.ExecuteUbergraph_SettingsBindingSubMenuWidget_BP");

	USettingsBindingSubMenuWidget_BP_C_ExecuteUbergraph_SettingsBindingSubMenuWidget_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
