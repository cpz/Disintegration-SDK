
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

// Function ChatterConfig_BP.ChatterConfig_BP_C.GetInitialConfigForCategory
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EeChatterCategory*             Category                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FChatterPriorityConfig  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FChatterPriorityConfig UChatterConfig_BP_C::GetInitialConfigForCategory(EeChatterCategory* Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChatterConfig_BP.ChatterConfig_BP_C.GetInitialConfigForCategory");

	UChatterConfig_BP_C_GetInitialConfigForCategory_Params params;
	params.Category = Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
