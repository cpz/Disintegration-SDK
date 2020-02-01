
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

// Function MainCursor.MainCursor_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMainCursor_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCursor.MainCursor_C.Construct");

	UMainCursor_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCursor.MainCursor_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainCursor_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCursor.MainCursor_C.Tick");

	UMainCursor_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCursor.MainCursor_C.ExecuteUbergraph_MainCursor
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainCursor_C::ExecuteUbergraph_MainCursor(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCursor.MainCursor_C.ExecuteUbergraph_MainCursor");

	UMainCursor_C_ExecuteUbergraph_MainCursor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
