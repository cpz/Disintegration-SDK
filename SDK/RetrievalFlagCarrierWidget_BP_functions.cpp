
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

// Function RetrievalFlagCarrierWidget_BP.RetrievalFlagCarrierWidget_BP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void URetrievalFlagCarrierWidget_BP_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function RetrievalFlagCarrierWidget_BP.RetrievalFlagCarrierWidget_BP_C.Construct");

	URetrievalFlagCarrierWidget_BP_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RetrievalFlagCarrierWidget_BP.RetrievalFlagCarrierWidget_BP_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URetrievalFlagCarrierWidget_BP_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function RetrievalFlagCarrierWidget_BP.RetrievalFlagCarrierWidget_BP_C.Tick");

	URetrievalFlagCarrierWidget_BP_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RetrievalFlagCarrierWidget_BP.RetrievalFlagCarrierWidget_BP_C.ExecuteUbergraph_RetrievalFlagCarrierWidget_BP
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URetrievalFlagCarrierWidget_BP_C::ExecuteUbergraph_RetrievalFlagCarrierWidget_BP(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RetrievalFlagCarrierWidget_BP.RetrievalFlagCarrierWidget_BP_C.ExecuteUbergraph_RetrievalFlagCarrierWidget_BP");

	URetrievalFlagCarrierWidget_BP_C_ExecuteUbergraph_RetrievalFlagCarrierWidget_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
