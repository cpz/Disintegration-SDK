
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

// Function TitleNewsEntryWidget_BP.TitleNewsEntryWidget_BP_C.OnHoveredBP
// (Event, Public, BlueprintEvent)

void UTitleNewsEntryWidget_BP_C::OnHoveredBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function TitleNewsEntryWidget_BP.TitleNewsEntryWidget_BP_C.OnHoveredBP");

	UTitleNewsEntryWidget_BP_C_OnHoveredBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TitleNewsEntryWidget_BP.TitleNewsEntryWidget_BP_C.OnUnHoveredBP
// (Event, Public, BlueprintEvent)

void UTitleNewsEntryWidget_BP_C::OnUnHoveredBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function TitleNewsEntryWidget_BP.TitleNewsEntryWidget_BP_C.OnUnHoveredBP");

	UTitleNewsEntryWidget_BP_C_OnUnHoveredBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TitleNewsEntryWidget_BP.TitleNewsEntryWidget_BP_C.ExecuteUbergraph_TitleNewsEntryWidget_BP
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTitleNewsEntryWidget_BP_C::ExecuteUbergraph_TitleNewsEntryWidget_BP(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TitleNewsEntryWidget_BP.TitleNewsEntryWidget_BP_C.ExecuteUbergraph_TitleNewsEntryWidget_BP");

	UTitleNewsEntryWidget_BP_C_ExecuteUbergraph_TitleNewsEntryWidget_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
