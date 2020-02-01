
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

// Function SuccessObjectiveNotificationWidget_BP.SuccessObjectiveNotificationWidget_BP_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USuccessObjectiveNotificationWidget_BP_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SuccessObjectiveNotificationWidget_BP.SuccessObjectiveNotificationWidget_BP_C.PreConstruct");

	USuccessObjectiveNotificationWidget_BP_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SuccessObjectiveNotificationWidget_BP.SuccessObjectiveNotificationWidget_BP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USuccessObjectiveNotificationWidget_BP_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function SuccessObjectiveNotificationWidget_BP.SuccessObjectiveNotificationWidget_BP_C.Construct");

	USuccessObjectiveNotificationWidget_BP_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SuccessObjectiveNotificationWidget_BP.SuccessObjectiveNotificationWidget_BP_C.ExecuteUbergraph_SuccessObjectiveNotificationWidget_BP
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USuccessObjectiveNotificationWidget_BP_C::ExecuteUbergraph_SuccessObjectiveNotificationWidget_BP(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SuccessObjectiveNotificationWidget_BP.SuccessObjectiveNotificationWidget_BP_C.ExecuteUbergraph_SuccessObjectiveNotificationWidget_BP");

	USuccessObjectiveNotificationWidget_BP_C_ExecuteUbergraph_SuccessObjectiveNotificationWidget_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
