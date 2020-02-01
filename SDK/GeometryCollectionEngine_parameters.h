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

// Function GeometryCollectionEngine.GeometryCollectionActor.RaycastSingle
struct AGeometryCollectionActor_RaycastSingle_Params
{
	struct FVector*                                    Start;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    End;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  OutHit;                                                   // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
