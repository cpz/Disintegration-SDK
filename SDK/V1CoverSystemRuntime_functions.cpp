
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

// Function V1CoverSystemRuntime.CoverSystemActor.OnTileRebuilt
// (Final, Native, Private)
// Parameters:
// class ARecastNavMesh**         NavMesh                        (Parm, ZeroConstructor, IsPlainOldData)
// int*                           tileIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void ACoverSystemActor::OnTileRebuilt(class ARecastNavMesh** NavMesh, int* tileIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoverSystemRuntime.CoverSystemActor.OnTileRebuilt");

	ACoverSystemActor_OnTileRebuilt_Params params;
	params.NavMesh = NavMesh;
	params.tileIndex = tileIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoverSystemRuntime.CoverSystemActor.GetClosestCoverNode
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                Position                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float*                         MaxDistance                    (Parm, ZeroConstructor, IsPlainOldData)
// class UCoverNode*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCoverNode* ACoverSystemActor::GetClosestCoverNode(struct FVector* Position, float* MaxDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoverSystemRuntime.CoverSystemActor.GetClosestCoverNode");

	ACoverSystemActor_GetClosestCoverNode_Params params;
	params.Position = Position;
	params.MaxDistance = MaxDistance;

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
