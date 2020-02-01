
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

// Function MatchmakingStatusOverlayWidget_BP.MatchmakingStatusOverlayWidget_BP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMatchmakingStatusOverlayWidget_BP_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MatchmakingStatusOverlayWidget_BP.MatchmakingStatusOverlayWidget_BP_C.Construct");

	UMatchmakingStatusOverlayWidget_BP_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MatchmakingStatusOverlayWidget_BP.MatchmakingStatusOverlayWidget_BP_C.OnStatusChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// EeMatchmakingStatus*           Status                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          isPartyHost                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMatchmakingStatusOverlayWidget_BP_C::OnStatusChanged(EeMatchmakingStatus* Status, bool* isPartyHost)
{
	static auto fn = UObject::FindObject<UFunction>("Function MatchmakingStatusOverlayWidget_BP.MatchmakingStatusOverlayWidget_BP_C.OnStatusChanged");

	UMatchmakingStatusOverlayWidget_BP_C_OnStatusChanged_Params params;
	params.Status = Status;
	params.isPartyHost = isPartyHost;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MatchmakingStatusOverlayWidget_BP.MatchmakingStatusOverlayWidget_BP_C.ExecuteUbergraph_MatchmakingStatusOverlayWidget_BP
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMatchmakingStatusOverlayWidget_BP_C::ExecuteUbergraph_MatchmakingStatusOverlayWidget_BP(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MatchmakingStatusOverlayWidget_BP.MatchmakingStatusOverlayWidget_BP_C.ExecuteUbergraph_MatchmakingStatusOverlayWidget_BP");

	UMatchmakingStatusOverlayWidget_BP_C_ExecuteUbergraph_MatchmakingStatusOverlayWidget_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
