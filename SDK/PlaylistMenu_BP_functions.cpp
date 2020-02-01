
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

// Function PlaylistMenu_BP.PlaylistMenu_BP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPlaylistMenu_BP_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlaylistMenu_BP.PlaylistMenu_BP_C.Construct");

	UPlaylistMenu_BP_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlaylistMenu_BP.PlaylistMenu_BP_C.ExecuteUbergraph_PlaylistMenu_BP
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlaylistMenu_BP_C::ExecuteUbergraph_PlaylistMenu_BP(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlaylistMenu_BP.PlaylistMenu_BP_C.ExecuteUbergraph_PlaylistMenu_BP");

	UPlaylistMenu_BP_C_ExecuteUbergraph_PlaylistMenu_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
