
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

// Function RemoveObjectiveNotificationWidget_BP.RemoveObjectiveNotificationWidget_BP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void URemoveObjectiveNotificationWidget_BP_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function RemoveObjectiveNotificationWidget_BP.RemoveObjectiveNotificationWidget_BP_C.Construct");

	URemoveObjectiveNotificationWidget_BP_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RemoveObjectiveNotificationWidget_BP.RemoveObjectiveNotificationWidget_BP_C.ExecuteUbergraph_RemoveObjectiveNotificationWidget_BP
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URemoveObjectiveNotificationWidget_BP_C::ExecuteUbergraph_RemoveObjectiveNotificationWidget_BP(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RemoveObjectiveNotificationWidget_BP.RemoveObjectiveNotificationWidget_BP_C.ExecuteUbergraph_RemoveObjectiveNotificationWidget_BP");

	URemoveObjectiveNotificationWidget_BP_C_ExecuteUbergraph_RemoveObjectiveNotificationWidget_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
