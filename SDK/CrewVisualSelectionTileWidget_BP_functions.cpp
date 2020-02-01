
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

// Function CrewVisualSelectionTileWidget_BP.CrewVisualSelectionTileWidget_BP_C.OnHoveredBP
// (Event, Public, BlueprintEvent)

void UCrewVisualSelectionTileWidget_BP_C::OnHoveredBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function CrewVisualSelectionTileWidget_BP.CrewVisualSelectionTileWidget_BP_C.OnHoveredBP");

	UCrewVisualSelectionTileWidget_BP_C_OnHoveredBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CrewVisualSelectionTileWidget_BP.CrewVisualSelectionTileWidget_BP_C.OnUnHoveredBP
// (Event, Public, BlueprintEvent)

void UCrewVisualSelectionTileWidget_BP_C::OnUnHoveredBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function CrewVisualSelectionTileWidget_BP.CrewVisualSelectionTileWidget_BP_C.OnUnHoveredBP");

	UCrewVisualSelectionTileWidget_BP_C_OnUnHoveredBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CrewVisualSelectionTileWidget_BP.CrewVisualSelectionTileWidget_BP_C.SetTileData_BP
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FCrewTileData*          Data                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UCrewVisualSelectionTileWidget_BP_C::SetTileData_BP(struct FCrewTileData* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function CrewVisualSelectionTileWidget_BP.CrewVisualSelectionTileWidget_BP_C.SetTileData_BP");

	UCrewVisualSelectionTileWidget_BP_C_SetTileData_BP_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CrewVisualSelectionTileWidget_BP.CrewVisualSelectionTileWidget_BP_C.ExecuteUbergraph_CrewVisualSelectionTileWidget_BP
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCrewVisualSelectionTileWidget_BP_C::ExecuteUbergraph_CrewVisualSelectionTileWidget_BP(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CrewVisualSelectionTileWidget_BP.CrewVisualSelectionTileWidget_BP_C.ExecuteUbergraph_CrewVisualSelectionTileWidget_BP");

	UCrewVisualSelectionTileWidget_BP_C_ExecuteUbergraph_CrewVisualSelectionTileWidget_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
