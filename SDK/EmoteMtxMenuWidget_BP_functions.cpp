
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

// Function EmoteMtxMenuWidget_BP.EmoteMtxMenuWidget_BP_C.FailUnlockMtxChallengeBP
// (Event, Protected, BlueprintEvent)

void UEmoteMtxMenuWidget_BP_C::FailUnlockMtxChallengeBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function EmoteMtxMenuWidget_BP.EmoteMtxMenuWidget_BP_C.FailUnlockMtxChallengeBP");

	UEmoteMtxMenuWidget_BP_C_FailUnlockMtxChallengeBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmoteMtxMenuWidget_BP.EmoteMtxMenuWidget_BP_C.ExecuteUbergraph_EmoteMtxMenuWidget_BP
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEmoteMtxMenuWidget_BP_C::ExecuteUbergraph_EmoteMtxMenuWidget_BP(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EmoteMtxMenuWidget_BP.EmoteMtxMenuWidget_BP_C.ExecuteUbergraph_EmoteMtxMenuWidget_BP");

	UEmoteMtxMenuWidget_BP_C_ExecuteUbergraph_EmoteMtxMenuWidget_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
