
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

// Function PilotSkinMtxMenuWidget_BP.PilotSkinMtxMenuWidget_BP_C.FailUnlockMtxChallengeBP
// (Event, Protected, BlueprintEvent)

void UPilotSkinMtxMenuWidget_BP_C::FailUnlockMtxChallengeBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function PilotSkinMtxMenuWidget_BP.PilotSkinMtxMenuWidget_BP_C.FailUnlockMtxChallengeBP");

	UPilotSkinMtxMenuWidget_BP_C_FailUnlockMtxChallengeBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PilotSkinMtxMenuWidget_BP.PilotSkinMtxMenuWidget_BP_C.ExecuteUbergraph_PilotSkinMtxMenuWidget_BP
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPilotSkinMtxMenuWidget_BP_C::ExecuteUbergraph_PilotSkinMtxMenuWidget_BP(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PilotSkinMtxMenuWidget_BP.PilotSkinMtxMenuWidget_BP_C.ExecuteUbergraph_PilotSkinMtxMenuWidget_BP");

	UPilotSkinMtxMenuWidget_BP_C_ExecuteUbergraph_PilotSkinMtxMenuWidget_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif