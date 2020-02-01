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

// Function MatchmakingStatusOverlayWidget_BP.MatchmakingStatusOverlayWidget_BP_C.Construct
struct UMatchmakingStatusOverlayWidget_BP_C_Construct_Params
{
};

// Function MatchmakingStatusOverlayWidget_BP.MatchmakingStatusOverlayWidget_BP_C.OnStatusChanged
struct UMatchmakingStatusOverlayWidget_BP_C_OnStatusChanged_Params
{
	EeMatchmakingStatus*                               Status;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              isPartyHost;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MatchmakingStatusOverlayWidget_BP.MatchmakingStatusOverlayWidget_BP_C.ExecuteUbergraph_MatchmakingStatusOverlayWidget_BP
struct UMatchmakingStatusOverlayWidget_BP_C_ExecuteUbergraph_MatchmakingStatusOverlayWidget_BP_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
