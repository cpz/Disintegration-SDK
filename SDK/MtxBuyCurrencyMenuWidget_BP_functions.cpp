
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

// Function MtxBuyCurrencyMenuWidget_BP.MtxBuyCurrencyMenuWidget_BP_C.OnHoveredMtxTile_BP
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FMtxCurrencyData*       Data                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UMtxBuyCurrencyMenuWidget_BP_C::OnHoveredMtxTile_BP(struct FMtxCurrencyData* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function MtxBuyCurrencyMenuWidget_BP.MtxBuyCurrencyMenuWidget_BP_C.OnHoveredMtxTile_BP");

	UMtxBuyCurrencyMenuWidget_BP_C_OnHoveredMtxTile_BP_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MtxBuyCurrencyMenuWidget_BP.MtxBuyCurrencyMenuWidget_BP_C.ExecuteUbergraph_MtxBuyCurrencyMenuWidget_BP
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMtxBuyCurrencyMenuWidget_BP_C::ExecuteUbergraph_MtxBuyCurrencyMenuWidget_BP(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MtxBuyCurrencyMenuWidget_BP.MtxBuyCurrencyMenuWidget_BP_C.ExecuteUbergraph_MtxBuyCurrencyMenuWidget_BP");

	UMtxBuyCurrencyMenuWidget_BP_C_ExecuteUbergraph_MtxBuyCurrencyMenuWidget_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
