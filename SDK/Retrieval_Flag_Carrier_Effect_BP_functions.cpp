
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

// Function Retrieval_Flag_Carrier_Effect_BP.Retrieval_Flag_Carrier_Effect_BP_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void URetrieval_Flag_Carrier_Effect_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Retrieval_Flag_Carrier_Effect_BP.Retrieval_Flag_Carrier_Effect_BP_C.ReceiveBeginPlay");

	URetrieval_Flag_Carrier_Effect_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Retrieval_Flag_Carrier_Effect_BP.Retrieval_Flag_Carrier_Effect_BP_C.ExecuteUbergraph_Retrieval_Flag_Carrier_Effect_BP
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URetrieval_Flag_Carrier_Effect_BP_C::ExecuteUbergraph_Retrieval_Flag_Carrier_Effect_BP(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Retrieval_Flag_Carrier_Effect_BP.Retrieval_Flag_Carrier_Effect_BP_C.ExecuteUbergraph_Retrieval_Flag_Carrier_Effect_BP");

	URetrieval_Flag_Carrier_Effect_BP_C_ExecuteUbergraph_Retrieval_Flag_Carrier_Effect_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
