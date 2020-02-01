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

// Function MtxTileWidget_BP.MtxTileWidget_BP_C.EquipChange
struct UMtxTileWidget_BP_C_EquipChange_Params
{
	bool*                                              Equip;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MtxTileWidget_BP.MtxTileWidget_BP_C.SetTileMtxData_BP
struct UMtxTileWidget_BP_C_SetTileMtxData_BP_Params
{
	struct FMtxData*                                   Data;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function MtxTileWidget_BP.MtxTileWidget_BP_C.OnHoveredBP
struct UMtxTileWidget_BP_C_OnHoveredBP_Params
{
};

// Function MtxTileWidget_BP.MtxTileWidget_BP_C.OnUnHoveredBP
struct UMtxTileWidget_BP_C_OnUnHoveredBP_Params
{
};

// Function MtxTileWidget_BP.MtxTileWidget_BP_C.OnOwnChange_BP
struct UMtxTileWidget_BP_C_OnOwnChange_BP_Params
{
	bool*                                              doesOwn;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MtxTileWidget_BP.MtxTileWidget_BP_C.OnEquipChange_BP
struct UMtxTileWidget_BP_C_OnEquipChange_BP_Params
{
	bool*                                              isEquiped;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MtxTileWidget_BP.MtxTileWidget_BP_C.Construct
struct UMtxTileWidget_BP_C_Construct_Params
{
};

// Function MtxTileWidget_BP.MtxTileWidget_BP_C.OnEquipingChange
struct UMtxTileWidget_BP_C_OnEquipingChange_Params
{
	bool*                                              isEquiping;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MtxTileWidget_BP.MtxTileWidget_BP_C.ExecuteUbergraph_MtxTileWidget_BP
struct UMtxTileWidget_BP_C_ExecuteUbergraph_MtxTileWidget_BP_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
