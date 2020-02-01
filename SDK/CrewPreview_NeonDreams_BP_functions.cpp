
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

// Function CrewPreview_NeonDreams_BP.CrewPreview_NeonDreams_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ACrewPreview_NeonDreams_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function CrewPreview_NeonDreams_BP.CrewPreview_NeonDreams_BP_C.ReceiveBeginPlay");

	ACrewPreview_NeonDreams_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CrewPreview_NeonDreams_BP.CrewPreview_NeonDreams_BP_C.ExecuteUbergraph_CrewPreview_NeonDreams_BP
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACrewPreview_NeonDreams_BP_C::ExecuteUbergraph_CrewPreview_NeonDreams_BP(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CrewPreview_NeonDreams_BP.CrewPreview_NeonDreams_BP_C.ExecuteUbergraph_CrewPreview_NeonDreams_BP");

	ACrewPreview_NeonDreams_BP_C_ExecuteUbergraph_CrewPreview_NeonDreams_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
