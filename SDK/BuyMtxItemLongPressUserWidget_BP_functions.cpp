
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

// Function BuyMtxItemLongPressUserWidget_BP.BuyMtxItemLongPressUserWidget_BP_C.OnProgressUpdatedBP
// (Event, Protected, BlueprintEvent)
// Parameters:
// float*                         percent                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBuyMtxItemLongPressUserWidget_BP_C::OnProgressUpdatedBP(float* percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuyMtxItemLongPressUserWidget_BP.BuyMtxItemLongPressUserWidget_BP_C.OnProgressUpdatedBP");

	UBuyMtxItemLongPressUserWidget_BP_C_OnProgressUpdatedBP_Params params;
	params.percent = percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuyMtxItemLongPressUserWidget_BP.BuyMtxItemLongPressUserWidget_BP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBuyMtxItemLongPressUserWidget_BP_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BuyMtxItemLongPressUserWidget_BP.BuyMtxItemLongPressUserWidget_BP_C.Construct");

	UBuyMtxItemLongPressUserWidget_BP_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuyMtxItemLongPressUserWidget_BP.BuyMtxItemLongPressUserWidget_BP_C.OnStartLongPressBP
// (Event, Protected, BlueprintEvent)

void UBuyMtxItemLongPressUserWidget_BP_C::OnStartLongPressBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function BuyMtxItemLongPressUserWidget_BP.BuyMtxItemLongPressUserWidget_BP_C.OnStartLongPressBP");

	UBuyMtxItemLongPressUserWidget_BP_C_OnStartLongPressBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuyMtxItemLongPressUserWidget_BP.BuyMtxItemLongPressUserWidget_BP_C.ExecuteUbergraph_BuyMtxItemLongPressUserWidget_BP
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBuyMtxItemLongPressUserWidget_BP_C::ExecuteUbergraph_BuyMtxItemLongPressUserWidget_BP(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuyMtxItemLongPressUserWidget_BP.BuyMtxItemLongPressUserWidget_BP_C.ExecuteUbergraph_BuyMtxItemLongPressUserWidget_BP");

	UBuyMtxItemLongPressUserWidget_BP_C_ExecuteUbergraph_BuyMtxItemLongPressUserWidget_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
