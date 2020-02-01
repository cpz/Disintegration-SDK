
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

// Function V1ObjectiveSystemRuntime.Operator.Resetting_OnTick_Script
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 Context                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         dt                             (Parm, ZeroConstructor, IsPlainOldData)

void UOperator::Resetting_OnTick_Script(class AActor** Context, float* dt)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1ObjectiveSystemRuntime.Operator.Resetting_OnTick_Script");

	UOperator_Resetting_OnTick_Script_Params params;
	params.Context = Context;
	params.dt = dt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1ObjectiveSystemRuntime.Operator.Resetting_OnExit_Script
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 Context                        (Parm, ZeroConstructor, IsPlainOldData)

void UOperator::Resetting_OnExit_Script(class AActor** Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1ObjectiveSystemRuntime.Operator.Resetting_OnExit_Script");

	UOperator_Resetting_OnExit_Script_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1ObjectiveSystemRuntime.Operator.Resetting_OnEnter_Script
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 Context                        (Parm, ZeroConstructor, IsPlainOldData)

void UOperator::Resetting_OnEnter_Script(class AActor** Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1ObjectiveSystemRuntime.Operator.Resetting_OnEnter_Script");

	UOperator_Resetting_OnEnter_Script_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1ObjectiveSystemRuntime.Operator.OnTick_Script
// (Event, Protected, BlueprintEvent)
// Parameters:
// float*                         dt                             (Parm, ZeroConstructor, IsPlainOldData)

void UOperator::OnTick_Script(float* dt)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1ObjectiveSystemRuntime.Operator.OnTick_Script");

	UOperator_OnTick_Script_Params params;
	params.dt = dt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1ObjectiveSystemRuntime.Operator.OnShutdown_Script
// (Event, Protected, BlueprintEvent)

void UOperator::OnShutdown_Script()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1ObjectiveSystemRuntime.Operator.OnShutdown_Script");

	UOperator_OnShutdown_Script_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1ObjectiveSystemRuntime.Operator.OnSetup_Script
// (Event, Protected, BlueprintEvent)

void UOperator::OnSetup_Script()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1ObjectiveSystemRuntime.Operator.OnSetup_Script");

	UOperator_OnSetup_Script_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1ObjectiveSystemRuntime.Operator.OnLoad_Script
// (Event, Protected, BlueprintEvent)

void UOperator::OnLoad_Script()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1ObjectiveSystemRuntime.Operator.OnLoad_Script");

	UOperator_OnLoad_Script_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1ObjectiveSystemRuntime.Operator.OnEvaluate_Script
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UOperator::OnEvaluate_Script()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1ObjectiveSystemRuntime.Operator.OnEvaluate_Script");

	UOperator_OnEvaluate_Script_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1ObjectiveSystemRuntime.Operator.Idle_OnTick_Script
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 Context                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         dt                             (Parm, ZeroConstructor, IsPlainOldData)

void UOperator::Idle_OnTick_Script(class AActor** Context, float* dt)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1ObjectiveSystemRuntime.Operator.Idle_OnTick_Script");

	UOperator_Idle_OnTick_Script_Params params;
	params.Context = Context;
	params.dt = dt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1ObjectiveSystemRuntime.Operator.Idle_OnExit_Script
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 Context                        (Parm, ZeroConstructor, IsPlainOldData)

void UOperator::Idle_OnExit_Script(class AActor** Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1ObjectiveSystemRuntime.Operator.Idle_OnExit_Script");

	UOperator_Idle_OnExit_Script_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1ObjectiveSystemRuntime.Operator.Idle_OnEnter_Script
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 Context                        (Parm, ZeroConstructor, IsPlainOldData)

void UOperator::Idle_OnEnter_Script(class AActor** Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1ObjectiveSystemRuntime.Operator.Idle_OnEnter_Script");

	UOperator_Idle_OnEnter_Script_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1ObjectiveSystemRuntime.Operator.GetOwningMissionEvent
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UOperator::GetOwningMissionEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1ObjectiveSystemRuntime.Operator.GetOwningMissionEvent");

	UOperator_GetOwningMissionEvent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1ObjectiveSystemRuntime.Operator.GetCurrentState
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EeOperatorState                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EeOperatorState UOperator::GetCurrentState()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1ObjectiveSystemRuntime.Operator.GetCurrentState");

	UOperator_GetCurrentState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1ObjectiveSystemRuntime.Operator.Evaluating_OnTick_Script
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 Context                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         dt                             (Parm, ZeroConstructor, IsPlainOldData)

void UOperator::Evaluating_OnTick_Script(class AActor** Context, float* dt)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1ObjectiveSystemRuntime.Operator.Evaluating_OnTick_Script");

	UOperator_Evaluating_OnTick_Script_Params params;
	params.Context = Context;
	params.dt = dt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1ObjectiveSystemRuntime.Operator.Evaluating_OnExit_Script
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 Context                        (Parm, ZeroConstructor, IsPlainOldData)

void UOperator::Evaluating_OnExit_Script(class AActor** Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1ObjectiveSystemRuntime.Operator.Evaluating_OnExit_Script");

	UOperator_Evaluating_OnExit_Script_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1ObjectiveSystemRuntime.Operator.Evaluating_OnEnter_Script
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 Context                        (Parm, ZeroConstructor, IsPlainOldData)

void UOperator::Evaluating_OnEnter_Script(class AActor** Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1ObjectiveSystemRuntime.Operator.Evaluating_OnEnter_Script");

	UOperator_Evaluating_OnEnter_Script_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1ObjectiveSystemRuntime.Operator.Complete_OnTick_Script
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 Context                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         dt                             (Parm, ZeroConstructor, IsPlainOldData)

void UOperator::Complete_OnTick_Script(class AActor** Context, float* dt)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1ObjectiveSystemRuntime.Operator.Complete_OnTick_Script");

	UOperator_Complete_OnTick_Script_Params params;
	params.Context = Context;
	params.dt = dt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1ObjectiveSystemRuntime.Operator.Complete_OnExit_Script
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 Context                        (Parm, ZeroConstructor, IsPlainOldData)

void UOperator::Complete_OnExit_Script(class AActor** Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1ObjectiveSystemRuntime.Operator.Complete_OnExit_Script");

	UOperator_Complete_OnExit_Script_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1ObjectiveSystemRuntime.Operator.Complete_OnEnter_Script
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 Context                        (Parm, ZeroConstructor, IsPlainOldData)

void UOperator::Complete_OnEnter_Script(class AActor** Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1ObjectiveSystemRuntime.Operator.Complete_OnEnter_Script");

	UOperator_Complete_OnEnter_Script_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1ObjectiveSystemRuntime.Operator.AddActorReference
// (Native, Public, BlueprintCallable)
// Parameters:
// class AActor**                 Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void UOperator::AddActorReference(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1ObjectiveSystemRuntime.Operator.AddActorReference");

	UOperator_AddActorReference_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1ObjectiveSystemRuntime.OperatorActor.SetIsEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          IsEnabled                      (Parm, ZeroConstructor, IsPlainOldData)

void AOperatorActor::SetIsEnabled(bool* IsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1ObjectiveSystemRuntime.OperatorActor.SetIsEnabled");

	AOperatorActor_SetIsEnabled_Params params;
	params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1ObjectiveSystemRuntime.OperatorActor.GetOperatorByTag
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  Tag                            (Parm, ZeroConstructor, IsPlainOldData)
// class UOperator*               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UOperator* AOperatorActor::GetOperatorByTag(struct FName* Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1ObjectiveSystemRuntime.OperatorActor.GetOperatorByTag");

	AOperatorActor_GetOperatorByTag_Params params;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1ObjectiveSystemRuntime.OperatorActor.GetIsEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AOperatorActor::GetIsEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1ObjectiveSystemRuntime.OperatorActor.GetIsEnabled");

	AOperatorActor_GetIsEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1ObjectiveSystemRuntime.OperatorActor.Evaluate
// (Final, Native, Private)

void AOperatorActor::Evaluate()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1ObjectiveSystemRuntime.OperatorActor.Evaluate");

	AOperatorActor_Evaluate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
