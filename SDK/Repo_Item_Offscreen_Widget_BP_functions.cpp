
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

// Function Repo_Item_Offscreen_Widget_BP.Repo_Item_Offscreen_Widget_BP_C.OnInteractBegin
// (Event, Public, BlueprintEvent)

void URepo_Item_Offscreen_Widget_BP_C::OnInteractBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function Repo_Item_Offscreen_Widget_BP.Repo_Item_Offscreen_Widget_BP_C.OnInteractBegin");

	URepo_Item_Offscreen_Widget_BP_C_OnInteractBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Repo_Item_Offscreen_Widget_BP.Repo_Item_Offscreen_Widget_BP_C.OnInteractEnd
// (Event, Public, BlueprintEvent)

void URepo_Item_Offscreen_Widget_BP_C::OnInteractEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function Repo_Item_Offscreen_Widget_BP.Repo_Item_Offscreen_Widget_BP_C.OnInteractEnd");

	URepo_Item_Offscreen_Widget_BP_C_OnInteractEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Repo_Item_Offscreen_Widget_BP.Repo_Item_Offscreen_Widget_BP_C.ExecuteUbergraph_Repo_Item_Offscreen_Widget_BP
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URepo_Item_Offscreen_Widget_BP_C::ExecuteUbergraph_Repo_Item_Offscreen_Widget_BP(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Repo_Item_Offscreen_Widget_BP.Repo_Item_Offscreen_Widget_BP_C.ExecuteUbergraph_Repo_Item_Offscreen_Widget_BP");

	URepo_Item_Offscreen_Widget_BP_C_ExecuteUbergraph_Repo_Item_Offscreen_Widget_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
