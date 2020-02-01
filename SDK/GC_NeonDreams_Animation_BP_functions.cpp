
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

// Function GC_NeonDreams_Animation_BP.GC_NeonDreams_Animation_BP_C.ExecuteUbergraph_GC_NeonDreams_Animation_BP
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGC_NeonDreams_Animation_BP_C::ExecuteUbergraph_GC_NeonDreams_Animation_BP(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_NeonDreams_Animation_BP.GC_NeonDreams_Animation_BP_C.ExecuteUbergraph_GC_NeonDreams_Animation_BP");

	UGC_NeonDreams_Animation_BP_C_ExecuteUbergraph_GC_NeonDreams_Animation_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
