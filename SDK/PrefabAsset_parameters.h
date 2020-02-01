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

// Function PrefabAsset.PrefabActor.SetPrefab
struct APrefabActor_SetPrefab_Params
{
	class UPrefabAsset**                               NewPrefab;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bForceRevertEvenDisconnected;                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrefabAsset.PrefabActor.SetMobility
struct APrefabActor_SetMobility_Params
{
	TEnumAsByte<EComponentMobility>*                   InMobility;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrefabAsset.PrefabActor.GetPrefab
struct APrefabActor_GetPrefab_Params
{
	class UPrefabAsset*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PrefabAsset.PrefabActor.DestroyPrefabActor
struct APrefabActor_DestroyPrefabActor_Params
{
	bool*                                              bDestroyAttachedChildren;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
