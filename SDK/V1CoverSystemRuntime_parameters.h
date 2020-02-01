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

// Function V1CoverSystemRuntime.CoverSystemActor.OnTileRebuilt
struct ACoverSystemActor_OnTileRebuilt_Params
{
	class ARecastNavMesh**                             NavMesh;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               tileIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function V1CoverSystemRuntime.CoverSystemActor.GetClosestCoverNode
struct ACoverSystemActor_GetClosestCoverNode_Params
{
	struct FVector*                                    Position;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float*                                             MaxDistance;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UCoverNode*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
