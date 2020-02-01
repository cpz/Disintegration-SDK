
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

// Function PrefabAsset.PrefabActor.SetPrefab
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPrefabAsset**           NewPrefab                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bForceRevertEvenDisconnected   (Parm, ZeroConstructor, IsPlainOldData)

void APrefabActor::SetPrefab(class UPrefabAsset** NewPrefab, bool* bForceRevertEvenDisconnected)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrefabAsset.PrefabActor.SetPrefab");

	APrefabActor_SetPrefab_Params params;
	params.NewPrefab = NewPrefab;
	params.bForceRevertEvenDisconnected = bForceRevertEvenDisconnected;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrefabAsset.PrefabActor.SetMobility
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EComponentMobility>* InMobility                     (Parm, ZeroConstructor, IsPlainOldData)

void APrefabActor::SetMobility(TEnumAsByte<EComponentMobility>* InMobility)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrefabAsset.PrefabActor.SetMobility");

	APrefabActor_SetMobility_Params params;
	params.InMobility = InMobility;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrefabAsset.PrefabActor.GetPrefab
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPrefabAsset*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UPrefabAsset* APrefabActor::GetPrefab()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrefabAsset.PrefabActor.GetPrefab");

	APrefabActor_GetPrefab_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrefabAsset.PrefabActor.DestroyPrefabActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bDestroyAttachedChildren       (Parm, ZeroConstructor, IsPlainOldData)

void APrefabActor::DestroyPrefabActor(bool* bDestroyAttachedChildren)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrefabAsset.PrefabActor.DestroyPrefabActor");

	APrefabActor_DestroyPrefabActor_Params params;
	params.bDestroyAttachedChildren = bDestroyAttachedChildren;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
