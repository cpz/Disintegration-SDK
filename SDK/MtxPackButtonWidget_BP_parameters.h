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

// Function MtxPackButtonWidget_BP.MtxPackButtonWidget_BP_C.OnHoveredBP
struct UMtxPackButtonWidget_BP_C_OnHoveredBP_Params
{
};

// Function MtxPackButtonWidget_BP.MtxPackButtonWidget_BP_C.OnUnHoveredBP
struct UMtxPackButtonWidget_BP_C_OnUnHoveredBP_Params
{
};

// Function MtxPackButtonWidget_BP.MtxPackButtonWidget_BP_C.SetMtxPackButtonBP
struct UMtxPackButtonWidget_BP_C_SetMtxPackButtonBP_Params
{
	struct FText*                                      Name;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FText*                                      currencyAmountText;                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function MtxPackButtonWidget_BP.MtxPackButtonWidget_BP_C.ExecuteUbergraph_MtxPackButtonWidget_BP
struct UMtxPackButtonWidget_BP_C_ExecuteUbergraph_MtxPackButtonWidget_BP_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
