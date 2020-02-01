
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

// Function NewObjectiveNotificationWidget_BP.NewObjectiveNotificationWidget_BP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UNewObjectiveNotificationWidget_BP_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewObjectiveNotificationWidget_BP.NewObjectiveNotificationWidget_BP_C.Construct");

	UNewObjectiveNotificationWidget_BP_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewObjectiveNotificationWidget_BP.NewObjectiveNotificationWidget_BP_C.ExecuteUbergraph_NewObjectiveNotificationWidget_BP
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNewObjectiveNotificationWidget_BP_C::ExecuteUbergraph_NewObjectiveNotificationWidget_BP(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewObjectiveNotificationWidget_BP.NewObjectiveNotificationWidget_BP_C.ExecuteUbergraph_NewObjectiveNotificationWidget_BP");

	UNewObjectiveNotificationWidget_BP_C_ExecuteUbergraph_NewObjectiveNotificationWidget_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
