
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

// Function V1LongPressUserWidget_BP.V1LongPressUserWidget_BP_C.OnProgressUpdatedBP
// (Event, Protected, BlueprintEvent)
// Parameters:
// float*                         percent                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UV1LongPressUserWidget_BP_C::OnProgressUpdatedBP(float* percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1LongPressUserWidget_BP.V1LongPressUserWidget_BP_C.OnProgressUpdatedBP");

	UV1LongPressUserWidget_BP_C_OnProgressUpdatedBP_Params params;
	params.percent = percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1LongPressUserWidget_BP.V1LongPressUserWidget_BP_C.ExecuteUbergraph_V1LongPressUserWidget_BP
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UV1LongPressUserWidget_BP_C::ExecuteUbergraph_V1LongPressUserWidget_BP(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1LongPressUserWidget_BP.V1LongPressUserWidget_BP_C.ExecuteUbergraph_V1LongPressUserWidget_BP");

	UV1LongPressUserWidget_BP_C_ExecuteUbergraph_V1LongPressUserWidget_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
