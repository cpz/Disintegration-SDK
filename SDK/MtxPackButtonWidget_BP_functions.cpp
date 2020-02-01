
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

// Function MtxPackButtonWidget_BP.MtxPackButtonWidget_BP_C.OnHoveredBP
// (Event, Public, BlueprintEvent)

void UMtxPackButtonWidget_BP_C::OnHoveredBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function MtxPackButtonWidget_BP.MtxPackButtonWidget_BP_C.OnHoveredBP");

	UMtxPackButtonWidget_BP_C_OnHoveredBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MtxPackButtonWidget_BP.MtxPackButtonWidget_BP_C.OnUnHoveredBP
// (Event, Public, BlueprintEvent)

void UMtxPackButtonWidget_BP_C::OnUnHoveredBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function MtxPackButtonWidget_BP.MtxPackButtonWidget_BP_C.OnUnHoveredBP");

	UMtxPackButtonWidget_BP_C_OnUnHoveredBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MtxPackButtonWidget_BP.MtxPackButtonWidget_BP_C.SetMtxPackButtonBP
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText*                  Name                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FText*                  currencyAmountText             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UMtxPackButtonWidget_BP_C::SetMtxPackButtonBP(struct FText* Name, struct FText* currencyAmountText)
{
	static auto fn = UObject::FindObject<UFunction>("Function MtxPackButtonWidget_BP.MtxPackButtonWidget_BP_C.SetMtxPackButtonBP");

	UMtxPackButtonWidget_BP_C_SetMtxPackButtonBP_Params params;
	params.Name = Name;
	params.currencyAmountText = currencyAmountText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MtxPackButtonWidget_BP.MtxPackButtonWidget_BP_C.ExecuteUbergraph_MtxPackButtonWidget_BP
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMtxPackButtonWidget_BP_C::ExecuteUbergraph_MtxPackButtonWidget_BP(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MtxPackButtonWidget_BP.MtxPackButtonWidget_BP_C.ExecuteUbergraph_MtxPackButtonWidget_BP");

	UMtxPackButtonWidget_BP_C_ExecuteUbergraph_MtxPackButtonWidget_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
