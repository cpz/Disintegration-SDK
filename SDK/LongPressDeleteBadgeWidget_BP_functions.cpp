
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

// Function LongPressDeleteBadgeWidget_BP.LongPressDeleteBadgeWidget_BP_C.OnProgressUpdatedBP
// (Event, Protected, BlueprintEvent)
// Parameters:
// float*                         percent                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULongPressDeleteBadgeWidget_BP_C::OnProgressUpdatedBP(float* percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function LongPressDeleteBadgeWidget_BP.LongPressDeleteBadgeWidget_BP_C.OnProgressUpdatedBP");

	ULongPressDeleteBadgeWidget_BP_C_OnProgressUpdatedBP_Params params;
	params.percent = percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LongPressDeleteBadgeWidget_BP.LongPressDeleteBadgeWidget_BP_C.ExecuteUbergraph_LongPressDeleteBadgeWidget_BP
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULongPressDeleteBadgeWidget_BP_C::ExecuteUbergraph_LongPressDeleteBadgeWidget_BP(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LongPressDeleteBadgeWidget_BP.LongPressDeleteBadgeWidget_BP_C.ExecuteUbergraph_LongPressDeleteBadgeWidget_BP");

	ULongPressDeleteBadgeWidget_BP_C_ExecuteUbergraph_LongPressDeleteBadgeWidget_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
