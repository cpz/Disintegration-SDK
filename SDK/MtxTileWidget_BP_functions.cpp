
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

// Function MtxTileWidget_BP.MtxTileWidget_BP_C.EquipChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Equip                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMtxTileWidget_BP_C::EquipChange(bool* Equip)
{
	static auto fn = UObject::FindObject<UFunction>("Function MtxTileWidget_BP.MtxTileWidget_BP_C.EquipChange");

	UMtxTileWidget_BP_C_EquipChange_Params params;
	params.Equip = Equip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MtxTileWidget_BP.MtxTileWidget_BP_C.SetTileMtxData_BP
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FMtxData*               Data                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UMtxTileWidget_BP_C::SetTileMtxData_BP(struct FMtxData* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function MtxTileWidget_BP.MtxTileWidget_BP_C.SetTileMtxData_BP");

	UMtxTileWidget_BP_C_SetTileMtxData_BP_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MtxTileWidget_BP.MtxTileWidget_BP_C.OnHoveredBP
// (Event, Public, BlueprintEvent)

void UMtxTileWidget_BP_C::OnHoveredBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function MtxTileWidget_BP.MtxTileWidget_BP_C.OnHoveredBP");

	UMtxTileWidget_BP_C_OnHoveredBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MtxTileWidget_BP.MtxTileWidget_BP_C.OnUnHoveredBP
// (Event, Public, BlueprintEvent)

void UMtxTileWidget_BP_C::OnUnHoveredBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function MtxTileWidget_BP.MtxTileWidget_BP_C.OnUnHoveredBP");

	UMtxTileWidget_BP_C_OnUnHoveredBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MtxTileWidget_BP.MtxTileWidget_BP_C.OnOwnChange_BP
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          doesOwn                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMtxTileWidget_BP_C::OnOwnChange_BP(bool* doesOwn)
{
	static auto fn = UObject::FindObject<UFunction>("Function MtxTileWidget_BP.MtxTileWidget_BP_C.OnOwnChange_BP");

	UMtxTileWidget_BP_C_OnOwnChange_BP_Params params;
	params.doesOwn = doesOwn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MtxTileWidget_BP.MtxTileWidget_BP_C.OnEquipChange_BP
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          isEquiped                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMtxTileWidget_BP_C::OnEquipChange_BP(bool* isEquiped)
{
	static auto fn = UObject::FindObject<UFunction>("Function MtxTileWidget_BP.MtxTileWidget_BP_C.OnEquipChange_BP");

	UMtxTileWidget_BP_C_OnEquipChange_BP_Params params;
	params.isEquiped = isEquiped;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MtxTileWidget_BP.MtxTileWidget_BP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMtxTileWidget_BP_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MtxTileWidget_BP.MtxTileWidget_BP_C.Construct");

	UMtxTileWidget_BP_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MtxTileWidget_BP.MtxTileWidget_BP_C.OnEquipingChange
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          isEquiping                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMtxTileWidget_BP_C::OnEquipingChange(bool* isEquiping)
{
	static auto fn = UObject::FindObject<UFunction>("Function MtxTileWidget_BP.MtxTileWidget_BP_C.OnEquipingChange");

	UMtxTileWidget_BP_C_OnEquipingChange_Params params;
	params.isEquiping = isEquiping;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MtxTileWidget_BP.MtxTileWidget_BP_C.ExecuteUbergraph_MtxTileWidget_BP
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMtxTileWidget_BP_C::ExecuteUbergraph_MtxTileWidget_BP(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MtxTileWidget_BP.MtxTileWidget_BP_C.ExecuteUbergraph_MtxTileWidget_BP");

	UMtxTileWidget_BP_C_ExecuteUbergraph_MtxTileWidget_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
