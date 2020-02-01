
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

// Function AdWidget_BP.AdWidget_BP_C.OnHoveredBP
// (BlueprintEvent)

void UAdWidget_BP_C::OnHoveredBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdWidget_BP.AdWidget_BP_C.OnHoveredBP");

	UAdWidget_BP_C_OnHoveredBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AdWidget_BP.AdWidget_BP_C.OnUnHoveredBP
// (BlueprintEvent)

void UAdWidget_BP_C::OnUnHoveredBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdWidget_BP.AdWidget_BP_C.OnUnHoveredBP");

	UAdWidget_BP_C_OnUnHoveredBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AdWidget_BP.AdWidget_BP_C.ExecuteUbergraph_AdWidget_BP
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAdWidget_BP_C::ExecuteUbergraph_AdWidget_BP(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdWidget_BP.AdWidget_BP_C.ExecuteUbergraph_AdWidget_BP");

	UAdWidget_BP_C_ExecuteUbergraph_AdWidget_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
