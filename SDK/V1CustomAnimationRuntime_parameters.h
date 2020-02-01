#pragma once

#include "../SDK.h"

// Name: Robogore, Version: 1.1.176

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function V1CustomAnimationRuntime.V1AnimInstance.OnEndPlay
struct UV1AnimInstance_OnEndPlay_Params
{
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEndPlayReason>*                       Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function V1CustomAnimationRuntime.V1AnimInstance.IsPlayingAnyAnimationOnSlot
struct UV1AnimInstance_IsPlayingAnyAnimationOnSlot_Params
{
	struct FName*                                      SlotName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
