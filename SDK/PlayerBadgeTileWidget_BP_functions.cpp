
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

// Function PlayerBadgeTileWidget_BP.PlayerBadgeTileWidget_BP_C.OnUnHoveredBP
// (Event, Public, BlueprintEvent)

void UPlayerBadgeTileWidget_BP_C::OnUnHoveredBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerBadgeTileWidget_BP.PlayerBadgeTileWidget_BP_C.OnUnHoveredBP");

	UPlayerBadgeTileWidget_BP_C_OnUnHoveredBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerBadgeTileWidget_BP.PlayerBadgeTileWidget_BP_C.OnEquipedChanged_BP
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          isEquiped                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerBadgeTileWidget_BP_C::OnEquipedChanged_BP(bool* isEquiped)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerBadgeTileWidget_BP.PlayerBadgeTileWidget_BP_C.OnEquipedChanged_BP");

	UPlayerBadgeTileWidget_BP_C_OnEquipedChanged_BP_Params params;
	params.isEquiped = isEquiped;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerBadgeTileWidget_BP.PlayerBadgeTileWidget_BP_C.OnHoveredBP
// (Event, Public, BlueprintEvent)

void UPlayerBadgeTileWidget_BP_C::OnHoveredBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerBadgeTileWidget_BP.PlayerBadgeTileWidget_BP_C.OnHoveredBP");

	UPlayerBadgeTileWidget_BP_C_OnHoveredBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerBadgeTileWidget_BP.PlayerBadgeTileWidget_BP_C.ExecuteUbergraph_PlayerBadgeTileWidget_BP
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerBadgeTileWidget_BP_C::ExecuteUbergraph_PlayerBadgeTileWidget_BP(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerBadgeTileWidget_BP.PlayerBadgeTileWidget_BP_C.ExecuteUbergraph_PlayerBadgeTileWidget_BP");

	UPlayerBadgeTileWidget_BP_C_ExecuteUbergraph_PlayerBadgeTileWidget_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
