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

// Function ChatterConfig_BP.ChatterConfig_BP_C.GetInitialConfigForCategory
struct UChatterConfig_BP_C_GetInitialConfigForCategory_Params
{
	EeChatterCategory*                                 Category;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FChatterPriorityConfig                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
