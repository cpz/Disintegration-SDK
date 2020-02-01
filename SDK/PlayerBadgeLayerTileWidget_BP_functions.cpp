
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

// Function PlayerBadgeLayerTileWidget_BP.PlayerBadgeLayerTileWidget_BP_C.OnUnHoveredBP
// (Event, Public, BlueprintEvent)

void UPlayerBadgeLayerTileWidget_BP_C::OnUnHoveredBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerBadgeLayerTileWidget_BP.PlayerBadgeLayerTileWidget_BP_C.OnUnHoveredBP");

	UPlayerBadgeLayerTileWidget_BP_C_OnUnHoveredBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerBadgeLayerTileWidget_BP.PlayerBadgeLayerTileWidget_BP_C.OnHoveredBP
// (Event, Public, BlueprintEvent)

void UPlayerBadgeLayerTileWidget_BP_C::OnHoveredBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerBadgeLayerTileWidget_BP.PlayerBadgeLayerTileWidget_BP_C.OnHoveredBP");

	UPlayerBadgeLayerTileWidget_BP_C_OnHoveredBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerBadgeLayerTileWidget_BP.PlayerBadgeLayerTileWidget_BP_C.ExecuteUbergraph_PlayerBadgeLayerTileWidget_BP
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerBadgeLayerTileWidget_BP_C::ExecuteUbergraph_PlayerBadgeLayerTileWidget_BP(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerBadgeLayerTileWidget_BP.PlayerBadgeLayerTileWidget_BP_C.ExecuteUbergraph_PlayerBadgeLayerTileWidget_BP");

	UPlayerBadgeLayerTileWidget_BP_C_ExecuteUbergraph_PlayerBadgeLayerTileWidget_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
