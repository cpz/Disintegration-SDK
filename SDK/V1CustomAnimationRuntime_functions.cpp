
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

// Function V1CustomAnimationRuntime.V1AnimInstance.OnEndPlay
// (Native, Protected)
// Parameters:
// class AActor**                 Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EEndPlayReason>*   Reason                         (Parm, ZeroConstructor, IsPlainOldData)

void UV1AnimInstance::OnEndPlay(class AActor** Actor, TEnumAsByte<EEndPlayReason>* Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CustomAnimationRuntime.V1AnimInstance.OnEndPlay");

	UV1AnimInstance_OnEndPlay_Params params;
	params.Actor = Actor;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CustomAnimationRuntime.V1AnimInstance.IsPlayingAnyAnimationOnSlot
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  SlotName                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UV1AnimInstance::IsPlayingAnyAnimationOnSlot(struct FName* SlotName)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CustomAnimationRuntime.V1AnimInstance.IsPlayingAnyAnimationOnSlot");

	UV1AnimInstance_IsPlayingAnyAnimationOnSlot_Params params;
	params.SlotName = SlotName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
