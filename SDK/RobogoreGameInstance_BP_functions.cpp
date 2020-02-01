
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

// Function RobogoreGameInstance_BP.RobogoreGameInstance_BP_C.EvnFindSessions
// (BlueprintCallable, BlueprintEvent)

void URobogoreGameInstance_BP_C::EvnFindSessions()
{
	static auto fn = UObject::FindObject<UFunction>("Function RobogoreGameInstance_BP.RobogoreGameInstance_BP_C.EvnFindSessions");

	URobogoreGameInstance_BP_C_EvnFindSessions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RobogoreGameInstance_BP.RobogoreGameInstance_BP_C.ReceiveInit
// (Event, Public, BlueprintEvent)

void URobogoreGameInstance_BP_C::ReceiveInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function RobogoreGameInstance_BP.RobogoreGameInstance_BP_C.ReceiveInit");

	URobogoreGameInstance_BP_C_ReceiveInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RobogoreGameInstance_BP.RobogoreGameInstance_BP_C.ReceiveShutdown
// (Event, Public, BlueprintEvent)

void URobogoreGameInstance_BP_C::ReceiveShutdown()
{
	static auto fn = UObject::FindObject<UFunction>("Function RobogoreGameInstance_BP.RobogoreGameInstance_BP_C.ReceiveShutdown");

	URobogoreGameInstance_BP_C_ReceiveShutdown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RobogoreGameInstance_BP.RobogoreGameInstance_BP_C.ExecuteUbergraph_RobogoreGameInstance_BP
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URobogoreGameInstance_BP_C::ExecuteUbergraph_RobogoreGameInstance_BP(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RobogoreGameInstance_BP.RobogoreGameInstance_BP_C.ExecuteUbergraph_RobogoreGameInstance_BP");

	URobogoreGameInstance_BP_C_ExecuteUbergraph_RobogoreGameInstance_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
