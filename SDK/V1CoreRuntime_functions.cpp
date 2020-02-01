
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

// Function V1CoreRuntime.V1ActionBase.Unpause
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UV1ActionBase*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UV1ActionBase* UV1ActionBase::Unpause()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1ActionBase.Unpause");

	UV1ActionBase_Unpause_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.V1ActionBase.Unblock
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UV1ActionBase*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UV1ActionBase* UV1ActionBase::Unblock()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1ActionBase.Unblock");

	UV1ActionBase_Unblock_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.V1ActionBase.Tick
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         dt                             (Parm, ZeroConstructor, IsPlainOldData)

void UV1ActionBase::Tick(float* dt)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1ActionBase.Tick");

	UV1ActionBase_Tick_Params params;
	params.dt = dt;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1ActionBase.Start
// (Final, Native, Public, BlueprintCallable)

void UV1ActionBase::Start()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1ActionBase.Start");

	UV1ActionBase_Start_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1ActionBase.SetStarted
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          Started                        (Parm, ZeroConstructor, IsPlainOldData)

void UV1ActionBase::SetStarted(bool* Started)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1ActionBase.SetStarted");

	UV1ActionBase_SetStarted_Params params;
	params.Started = Started;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1ActionBase.SetPaused
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          paused                         (Parm, ZeroConstructor, IsPlainOldData)

void UV1ActionBase::SetPaused(bool* paused)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1ActionBase.SetPaused");

	UV1ActionBase_SetPaused_Params params;
	params.paused = paused;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1ActionBase.SetFinished
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          finished                       (Parm, ZeroConstructor, IsPlainOldData)

void UV1ActionBase::SetFinished(bool* finished)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1ActionBase.SetFinished");

	UV1ActionBase_SetFinished_Params params;
	params.finished = finished;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1ActionBase.SetBlocking
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          blocking                       (Parm, ZeroConstructor, IsPlainOldData)

void UV1ActionBase::SetBlocking(bool* blocking)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1ActionBase.SetBlocking");

	UV1ActionBase_SetBlocking_Params params;
	params.blocking = blocking;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1ActionBase.Reset
// (Final, Native, Public, BlueprintCallable)

void UV1ActionBase::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1ActionBase.Reset");

	UV1ActionBase_Reset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1ActionBase.Pause
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UV1ActionBase*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UV1ActionBase* UV1ActionBase::Pause()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1ActionBase.Pause");

	UV1ActionBase_Pause_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.V1ActionBase.IsStarted
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UV1ActionBase::IsStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1ActionBase.IsStarted");

	UV1ActionBase_IsStarted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.V1ActionBase.IsPaused
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UV1ActionBase::IsPaused()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1ActionBase.IsPaused");

	UV1ActionBase_IsPaused_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.V1ActionBase.IsFinished
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UV1ActionBase::IsFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1ActionBase.IsFinished");

	UV1ActionBase_IsFinished_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.V1ActionBase.IsBlocking
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UV1ActionBase::IsBlocking()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1ActionBase.IsBlocking");

	UV1ActionBase_IsBlocking_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.V1ActionBase.Complete
// (Final, Native, Public, BlueprintCallable)

void UV1ActionBase::Complete()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1ActionBase.Complete");

	UV1ActionBase_Complete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1ActionBase.Block
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UV1ActionBase*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UV1ActionBase* UV1ActionBase::Block()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1ActionBase.Block");

	UV1ActionBase_Block_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.V1IntervalAction.Update
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// float*                         dt                             (Parm, ZeroConstructor, IsPlainOldData)

void UV1IntervalAction::Update(float* dt)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1IntervalAction.Update");

	UV1IntervalAction_Update_Params params;
	params.dt = dt;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1IntervalAction.SetActionLength
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         newLength                      (Parm, ZeroConstructor, IsPlainOldData)

void UV1IntervalAction::SetActionLength(float* newLength)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1IntervalAction.SetActionLength");

	UV1IntervalAction_SetActionLength_Params params;
	params.newLength = newLength;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1IntervalAction.PreBegin
// (Native, Event, Public, BlueprintEvent)

void UV1IntervalAction::PreBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1IntervalAction.PreBegin");

	UV1IntervalAction_PreBegin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1IntervalAction.GetInterval
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UV1IntervalAction::GetInterval()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1IntervalAction.GetInterval");

	UV1IntervalAction_GetInterval_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.V1IntervalAction.GetExecutionTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UV1IntervalAction::GetExecutionTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1IntervalAction.GetExecutionTime");

	UV1IntervalAction_GetExecutionTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.V1IntervalAction.GetActionLength
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UV1IntervalAction::GetActionLength()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1IntervalAction.GetActionLength");

	UV1IntervalAction_GetActionLength_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.V1IntervalAction.End
// (Native, Event, Public, BlueprintEvent)

void UV1IntervalAction::End()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1IntervalAction.End");

	UV1IntervalAction_End_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1IntervalAction.Begin
// (Native, Event, Public, BlueprintEvent)

void UV1IntervalAction::Begin()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1IntervalAction.Begin");

	UV1IntervalAction_Begin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.IntervalActorAction.SetActor
// (Native, Public, BlueprintCallable)
// Parameters:
// class AActor**                 Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void UIntervalActorAction::SetActor(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.IntervalActorAction.SetActor");

	UIntervalActorAction_SetActor_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.IntervalActorAction.GetActor
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UIntervalActorAction::GetActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.IntervalActorAction.GetActor");

	UIntervalActorAction_GetActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.ActionActorTransformBase.SetLocalSpace
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          localSpace                     (Parm, ZeroConstructor, IsPlainOldData)

void UActionActorTransformBase::SetLocalSpace(bool* localSpace)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionActorTransformBase.SetLocalSpace");

	UActionActorTransformBase_SetLocalSpace_Params params;
	params.localSpace = localSpace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.ActionActorTransformBase.IsLocalSpace
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UActionActorTransformBase::IsLocalSpace()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionActorTransformBase.IsLocalSpace");

	UActionActorTransformBase_IsLocalSpace_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.ActionActorRotateBy.SetRotationDelta
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator*               rotationDelta                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UActionActorRotateBy::SetRotationDelta(struct FRotator* rotationDelta)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionActorRotateBy.SetRotationDelta");

	UActionActorRotateBy_SetRotationDelta_Params params;
	params.rotationDelta = rotationDelta;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.ActionActorRotateBy.GetRotationDelta
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRotator                ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData)

struct FRotator UActionActorRotateBy::GetRotationDelta()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionActorRotateBy.GetRotationDelta");

	UActionActorRotateBy_GetRotationDelta_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.ActionActorRotateBy.CreateAction_ActorRotateBy
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject**                Outer                          (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Local                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator*               rotationDelta                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float*                         Length                         (Parm, ZeroConstructor, IsPlainOldData)
// class UActionActorRotateBy*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UActionActorRotateBy* UActionActorRotateBy::STATIC_CreateAction_ActorRotateBy(class UObject** Outer, class AActor** Actor, bool* Local, struct FRotator* rotationDelta, float* Length)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionActorRotateBy.CreateAction_ActorRotateBy");

	UActionActorRotateBy_CreateAction_ActorRotateBy_Params params;
	params.Outer = Outer;
	params.Actor = Actor;
	params.Local = Local;
	params.rotationDelta = rotationDelta;
	params.Length = Length;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.ActionActorRotateTo.SetRotation
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator*               Rotation                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UActionActorRotateTo::SetRotation(struct FRotator* Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionActorRotateTo.SetRotation");

	UActionActorRotateTo_SetRotation_Params params;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.ActionActorRotateTo.GetRotationDelta
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRotator                ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData)

struct FRotator UActionActorRotateTo::GetRotationDelta()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionActorRotateTo.GetRotationDelta");

	UActionActorRotateTo_GetRotationDelta_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.ActionActorRotateTo.CreateAction_ActorRotateTo
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject**                Outer                          (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Local                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator*               Rotation                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float*                         Length                         (Parm, ZeroConstructor, IsPlainOldData)
// class UActionActorRotateTo*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UActionActorRotateTo* UActionActorRotateTo::STATIC_CreateAction_ActorRotateTo(class UObject** Outer, class AActor** Actor, bool* Local, struct FRotator* Rotation, float* Length)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionActorRotateTo.CreateAction_ActorRotateTo");

	UActionActorRotateTo_CreateAction_ActorRotateTo_Params params;
	params.Outer = Outer;
	params.Actor = Actor;
	params.Local = Local;
	params.Rotation = Rotation;
	params.Length = Length;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.ActionActorScaleBy.SetScaleDelta
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                scaleDelta                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UActionActorScaleBy::SetScaleDelta(struct FVector* scaleDelta)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionActorScaleBy.SetScaleDelta");

	UActionActorScaleBy_SetScaleDelta_Params params;
	params.scaleDelta = scaleDelta;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.ActionActorScaleBy.GetScaleDelta
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData)

struct FVector UActionActorScaleBy::GetScaleDelta()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionActorScaleBy.GetScaleDelta");

	UActionActorScaleBy_GetScaleDelta_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.ActionActorScaleBy.CreateAction_ActorScaleBy
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject**                Outer                          (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Local                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                scaleDelta                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float*                         Length                         (Parm, ZeroConstructor, IsPlainOldData)
// class UActionActorScaleBy*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UActionActorScaleBy* UActionActorScaleBy::STATIC_CreateAction_ActorScaleBy(class UObject** Outer, class AActor** Actor, bool* Local, struct FVector* scaleDelta, float* Length)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionActorScaleBy.CreateAction_ActorScaleBy");

	UActionActorScaleBy_CreateAction_ActorScaleBy_Params params;
	params.Outer = Outer;
	params.Actor = Actor;
	params.Local = Local;
	params.scaleDelta = scaleDelta;
	params.Length = Length;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.ActionActorScaleTo.SetScale
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                Scale                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UActionActorScaleTo::SetScale(struct FVector* Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionActorScaleTo.SetScale");

	UActionActorScaleTo_SetScale_Params params;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.ActionActorScaleTo.GetScale
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData)

struct FVector UActionActorScaleTo::GetScale()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionActorScaleTo.GetScale");

	UActionActorScaleTo_GetScale_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.ActionActorScaleTo.CreateAction_ActorScaleTo
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject**                Outer                          (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Local                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Scale                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float*                         Length                         (Parm, ZeroConstructor, IsPlainOldData)
// class UActionActorScaleTo*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UActionActorScaleTo* UActionActorScaleTo::STATIC_CreateAction_ActorScaleTo(class UObject** Outer, class AActor** Actor, bool* Local, struct FVector* Scale, float* Length)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionActorScaleTo.CreateAction_ActorScaleTo");

	UActionActorScaleTo_CreateAction_ActorScaleTo_Params params;
	params.Outer = Outer;
	params.Actor = Actor;
	params.Local = Local;
	params.Scale = Scale;
	params.Length = Length;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.ActionActorTranslateBy.SetPositionDelta
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                positionDelta                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UActionActorTranslateBy::SetPositionDelta(struct FVector* positionDelta)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionActorTranslateBy.SetPositionDelta");

	UActionActorTranslateBy_SetPositionDelta_Params params;
	params.positionDelta = positionDelta;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.ActionActorTranslateBy.GetPositionDelta
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData)

struct FVector UActionActorTranslateBy::GetPositionDelta()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionActorTranslateBy.GetPositionDelta");

	UActionActorTranslateBy_GetPositionDelta_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.ActionActorTranslateBy.CreateAction_ActorTranslateBy
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject**                Outer                          (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Local                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                translationDelta               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float*                         Length                         (Parm, ZeroConstructor, IsPlainOldData)
// class UActionActorTranslateBy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UActionActorTranslateBy* UActionActorTranslateBy::STATIC_CreateAction_ActorTranslateBy(class UObject** Outer, class AActor** Actor, bool* Local, struct FVector* translationDelta, float* Length)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionActorTranslateBy.CreateAction_ActorTranslateBy");

	UActionActorTranslateBy_CreateAction_ActorTranslateBy_Params params;
	params.Outer = Outer;
	params.Actor = Actor;
	params.Local = Local;
	params.translationDelta = translationDelta;
	params.Length = Length;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.ActionActorTranslateTo.SetPosition
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                Position                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UActionActorTranslateTo::SetPosition(struct FVector* Position)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionActorTranslateTo.SetPosition");

	UActionActorTranslateTo_SetPosition_Params params;
	params.Position = Position;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.ActionActorTranslateTo.GetPosition
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData)

struct FVector UActionActorTranslateTo::GetPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionActorTranslateTo.GetPosition");

	UActionActorTranslateTo_GetPosition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.ActionActorTranslateTo.CreateAction_ActorTranslateTo
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject**                Outer                          (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Local                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Translation                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float*                         Length                         (Parm, ZeroConstructor, IsPlainOldData)
// class UActionActorTranslateTo* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UActionActorTranslateTo* UActionActorTranslateTo::STATIC_CreateAction_ActorTranslateTo(class UObject** Outer, class AActor** Actor, bool* Local, struct FVector* Translation, float* Length)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionActorTranslateTo.CreateAction_ActorTranslateTo");

	UActionActorTranslateTo_CreateAction_ActorTranslateTo_Params params;
	params.Outer = Outer;
	params.Actor = Actor;
	params.Local = Local;
	params.Translation = Translation;
	params.Length = Length;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.V1InstantAction.PreExecute
// (Native, Event, Public, BlueprintEvent)

void UV1InstantAction::PreExecute()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1InstantAction.PreExecute");

	UV1InstantAction_PreExecute_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1InstantAction.PostExecute
// (Native, Event, Public, BlueprintEvent)

void UV1InstantAction::PostExecute()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1InstantAction.PostExecute");

	UV1InstantAction_PostExecute_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1InstantAction.Execute
// (Native, Event, Public, BlueprintEvent)

void UV1InstantAction::Execute()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1InstantAction.Execute");

	UV1InstantAction_Execute_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.InstantActorAction.SetActor
// (Native, Public, BlueprintCallable)
// Parameters:
// class AActor**                 Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void UInstantActorAction::SetActor(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.InstantActorAction.SetActor");

	UInstantActorAction_SetActor_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.InstantActorAction.GetActor
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UInstantActorAction::GetActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.InstantActorAction.GetActor");

	UInstantActorAction_GetActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.ActionChangeActorTransform.SetTransformDelta
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform*             transformDelta                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UActionChangeActorTransform::SetTransformDelta(struct FTransform* transformDelta)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionChangeActorTransform.SetTransformDelta");

	UActionChangeActorTransform_SetTransformDelta_Params params;
	params.transformDelta = transformDelta;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.ActionChangeActorTransform.SetScaleDelta
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                scaleDelta                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UActionChangeActorTransform::SetScaleDelta(struct FVector* scaleDelta)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionChangeActorTransform.SetScaleDelta");

	UActionChangeActorTransform_SetScaleDelta_Params params;
	params.scaleDelta = scaleDelta;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.ActionChangeActorTransform.SetRotationDelta
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator*               rotationDelta                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UActionChangeActorTransform::SetRotationDelta(struct FRotator* rotationDelta)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionChangeActorTransform.SetRotationDelta");

	UActionChangeActorTransform_SetRotationDelta_Params params;
	params.rotationDelta = rotationDelta;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.ActionChangeActorTransform.SetPositionDelta
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                positionDelta                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UActionChangeActorTransform::SetPositionDelta(struct FVector* positionDelta)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionChangeActorTransform.SetPositionDelta");

	UActionChangeActorTransform_SetPositionDelta_Params params;
	params.positionDelta = positionDelta;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.ActionChangeActorTransform.SetLocalSpace
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          localSpace                     (Parm, ZeroConstructor, IsPlainOldData)

void UActionChangeActorTransform::SetLocalSpace(bool* localSpace)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionChangeActorTransform.SetLocalSpace");

	UActionChangeActorTransform_SetLocalSpace_Params params;
	params.localSpace = localSpace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.ActionChangeActorTransform.IsLocalSpace
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UActionChangeActorTransform::IsLocalSpace()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionChangeActorTransform.IsLocalSpace");

	UActionChangeActorTransform_IsLocalSpace_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.ActionChangeActorTransform.GetTransformDelta
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTransform              ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData)

struct FTransform UActionChangeActorTransform::GetTransformDelta()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionChangeActorTransform.GetTransformDelta");

	UActionChangeActorTransform_GetTransformDelta_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.ActionChangeActorTransform.GetScaleDelta
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UActionChangeActorTransform::GetScaleDelta()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionChangeActorTransform.GetScaleDelta");

	UActionChangeActorTransform_GetScaleDelta_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.ActionChangeActorTransform.GetRotationDelta
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FRotator UActionChangeActorTransform::GetRotationDelta()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionChangeActorTransform.GetRotationDelta");

	UActionChangeActorTransform_GetRotationDelta_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.ActionChangeActorTransform.GetPositionDelta
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UActionChangeActorTransform::GetPositionDelta()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionChangeActorTransform.GetPositionDelta");

	UActionChangeActorTransform_GetPositionDelta_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.ActionChangeActorTransform.CreateAction_ChangeActorTransform
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject**                Outer                          (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Local                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform*             transformDelta                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class UActionChangeActorTransform* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UActionChangeActorTransform* UActionChangeActorTransform::STATIC_CreateAction_ChangeActorTransform(class UObject** Outer, class AActor** Actor, bool* Local, struct FTransform* transformDelta)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionChangeActorTransform.CreateAction_ChangeActorTransform");

	UActionChangeActorTransform_CreateAction_ChangeActorTransform_Params params;
	params.Outer = Outer;
	params.Actor = Actor;
	params.Local = Local;
	params.transformDelta = transformDelta;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.InstantComponentAction.SetComponentByActor
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class AActor**                 Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  componentName                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UInstantComponentAction::SetComponentByActor(class AActor** Actor, struct FName* componentName)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.InstantComponentAction.SetComponentByActor");

	UInstantComponentAction_SetComponentByActor_Params params;
	params.Actor = Actor;
	params.componentName = componentName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.InstantComponentAction.SetComponent
// (Native, Public, BlueprintCallable)
// Parameters:
// class UActorComponent**        Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UInstantComponentAction::SetComponent(class UActorComponent** Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.InstantComponentAction.SetComponent");

	UInstantComponentAction_SetComponent_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.InstantComponentAction.SetActor
// (Native, Public, BlueprintCallable)
// Parameters:
// class AActor**                 Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void UInstantComponentAction::SetActor(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.InstantComponentAction.SetActor");

	UInstantComponentAction_SetActor_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.InstantComponentAction.GetComponent
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UActorComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UActorComponent* UInstantComponentAction::GetComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.InstantComponentAction.GetComponent");

	UInstantComponentAction_GetComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.ActionComponentInstantTransformBy.SetTransform
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform*             Transform                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UActionComponentInstantTransformBy::SetTransform(struct FTransform* Transform)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionComponentInstantTransformBy.SetTransform");

	UActionComponentInstantTransformBy_SetTransform_Params params;
	params.Transform = Transform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.ActionComponentInstantTransformBy.SetLocal
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          Local                          (Parm, ZeroConstructor, IsPlainOldData)

void UActionComponentInstantTransformBy::SetLocal(bool* Local)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionComponentInstantTransformBy.SetLocal");

	UActionComponentInstantTransformBy_SetLocal_Params params;
	params.Local = Local;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.ActionComponentInstantTransformBy.GetTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTransform              ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData)

struct FTransform UActionComponentInstantTransformBy::GetTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionComponentInstantTransformBy.GetTransform");

	UActionComponentInstantTransformBy_GetTransform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.ActionComponentInstantTransformBy.GetLocal
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UActionComponentInstantTransformBy::GetLocal()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionComponentInstantTransformBy.GetLocal");

	UActionComponentInstantTransformBy_GetLocal_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.ActionComponentInstantTransformBy.CreateAction_ComponentInstantTransformTo
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject**                Outer                          (Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent**        Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          Local                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform*             Transform                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class UActionComponentInstantTransformBy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UActionComponentInstantTransformBy* UActionComponentInstantTransformBy::STATIC_CreateAction_ComponentInstantTransformTo(class UObject** Outer, class USceneComponent** Component, bool* Local, struct FTransform* Transform)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionComponentInstantTransformBy.CreateAction_ComponentInstantTransformTo");

	UActionComponentInstantTransformBy_CreateAction_ComponentInstantTransformTo_Params params;
	params.Outer = Outer;
	params.Component = Component;
	params.Local = Local;
	params.Transform = Transform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.ActionComponentInstantTransformTo.SetTransform
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform*             Transform                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UActionComponentInstantTransformTo::SetTransform(struct FTransform* Transform)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionComponentInstantTransformTo.SetTransform");

	UActionComponentInstantTransformTo_SetTransform_Params params;
	params.Transform = Transform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.ActionComponentInstantTransformTo.SetLocal
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          Local                          (Parm, ZeroConstructor, IsPlainOldData)

void UActionComponentInstantTransformTo::SetLocal(bool* Local)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionComponentInstantTransformTo.SetLocal");

	UActionComponentInstantTransformTo_SetLocal_Params params;
	params.Local = Local;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.ActionComponentInstantTransformTo.GetTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTransform              ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData)

struct FTransform UActionComponentInstantTransformTo::GetTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionComponentInstantTransformTo.GetTransform");

	UActionComponentInstantTransformTo_GetTransform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.ActionComponentInstantTransformTo.GetLocal
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UActionComponentInstantTransformTo::GetLocal()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionComponentInstantTransformTo.GetLocal");

	UActionComponentInstantTransformTo_GetLocal_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.ActionComponentInstantTransformTo.CreateAction_ComponentInstantTransformTo
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject**                Outer                          (Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent**        Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          Local                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform*             Transform                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class UActionComponentInstantTransformTo* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UActionComponentInstantTransformTo* UActionComponentInstantTransformTo::STATIC_CreateAction_ComponentInstantTransformTo(class UObject** Outer, class USceneComponent** Component, bool* Local, struct FTransform* Transform)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionComponentInstantTransformTo.CreateAction_ComponentInstantTransformTo");

	UActionComponentInstantTransformTo_CreateAction_ComponentInstantTransformTo_Params params;
	params.Outer = Outer;
	params.Component = Component;
	params.Local = Local;
	params.Transform = Transform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.IntervalComponentAction.SetComponentByActor
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class AActor**                 Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  componentName                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UIntervalComponentAction::SetComponentByActor(class AActor** Actor, struct FName* componentName)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.IntervalComponentAction.SetComponentByActor");

	UIntervalComponentAction_SetComponentByActor_Params params;
	params.Actor = Actor;
	params.componentName = componentName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.IntervalComponentAction.SetComponent
// (Native, Public, BlueprintCallable)
// Parameters:
// class UActorComponent**        Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UIntervalComponentAction::SetComponent(class UActorComponent** Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.IntervalComponentAction.SetComponent");

	UIntervalComponentAction_SetComponent_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.IntervalComponentAction.SetActor
// (Native, Public, BlueprintCallable)
// Parameters:
// class AActor**                 Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void UIntervalComponentAction::SetActor(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.IntervalComponentAction.SetActor");

	UIntervalComponentAction_SetActor_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.IntervalComponentAction.GetComponent
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UActorComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UActorComponent* UIntervalComponentAction::GetComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.IntervalComponentAction.GetComponent");

	UIntervalComponentAction_GetComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.ActionComponentTransformBase.SetLocalSpace
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          localSpace                     (Parm, ZeroConstructor, IsPlainOldData)

void UActionComponentTransformBase::SetLocalSpace(bool* localSpace)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionComponentTransformBase.SetLocalSpace");

	UActionComponentTransformBase_SetLocalSpace_Params params;
	params.localSpace = localSpace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.ActionComponentTransformBase.IsLocalSpace
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UActionComponentTransformBase::IsLocalSpace()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionComponentTransformBase.IsLocalSpace");

	UActionComponentTransformBase_IsLocalSpace_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.ActionComponentRotateBy.SetRotationDelta
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator*               rotationDelta                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UActionComponentRotateBy::SetRotationDelta(struct FRotator* rotationDelta)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionComponentRotateBy.SetRotationDelta");

	UActionComponentRotateBy_SetRotationDelta_Params params;
	params.rotationDelta = rotationDelta;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.ActionComponentRotateBy.GetRotationDelta
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRotator                ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData)

struct FRotator UActionComponentRotateBy::GetRotationDelta()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionComponentRotateBy.GetRotationDelta");

	UActionComponentRotateBy_GetRotationDelta_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.ActionComponentRotateBy.CreateAction_ComponentRotateBy
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject**                Outer                          (Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent**        Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          Local                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator*               rotationDelta                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float*                         Length                         (Parm, ZeroConstructor, IsPlainOldData)
// class UActionComponentRotateBy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UActionComponentRotateBy* UActionComponentRotateBy::STATIC_CreateAction_ComponentRotateBy(class UObject** Outer, class USceneComponent** Component, bool* Local, struct FRotator* rotationDelta, float* Length)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionComponentRotateBy.CreateAction_ComponentRotateBy");

	UActionComponentRotateBy_CreateAction_ComponentRotateBy_Params params;
	params.Outer = Outer;
	params.Component = Component;
	params.Local = Local;
	params.rotationDelta = rotationDelta;
	params.Length = Length;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.ActionComponentRotateTo.SetRotation
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator*               Rotation                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UActionComponentRotateTo::SetRotation(struct FRotator* Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionComponentRotateTo.SetRotation");

	UActionComponentRotateTo_SetRotation_Params params;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.ActionComponentRotateTo.GetRotation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRotator                ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData)

struct FRotator UActionComponentRotateTo::GetRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionComponentRotateTo.GetRotation");

	UActionComponentRotateTo_GetRotation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.ActionComponentRotateTo.CreateAction_ComponentRotateTo
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject**                Outer                          (Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent**        Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          Local                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator*               Rotation                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float*                         Length                         (Parm, ZeroConstructor, IsPlainOldData)
// class UActionComponentRotateTo* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UActionComponentRotateTo* UActionComponentRotateTo::STATIC_CreateAction_ComponentRotateTo(class UObject** Outer, class USceneComponent** Component, bool* Local, struct FRotator* Rotation, float* Length)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionComponentRotateTo.CreateAction_ComponentRotateTo");

	UActionComponentRotateTo_CreateAction_ComponentRotateTo_Params params;
	params.Outer = Outer;
	params.Component = Component;
	params.Local = Local;
	params.Rotation = Rotation;
	params.Length = Length;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.ActionComponentScaleBy.SetScaleDelta
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                scaleDelta                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UActionComponentScaleBy::SetScaleDelta(struct FVector* scaleDelta)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionComponentScaleBy.SetScaleDelta");

	UActionComponentScaleBy_SetScaleDelta_Params params;
	params.scaleDelta = scaleDelta;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.ActionComponentScaleBy.GetScaleDelta
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData)

struct FVector UActionComponentScaleBy::GetScaleDelta()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionComponentScaleBy.GetScaleDelta");

	UActionComponentScaleBy_GetScaleDelta_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.ActionComponentScaleBy.CreateAction_ComponentScaleBy
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject**                Outer                          (Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent**        Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          Local                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                scaleDelta                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float*                         Length                         (Parm, ZeroConstructor, IsPlainOldData)
// class UActionComponentScaleBy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UActionComponentScaleBy* UActionComponentScaleBy::STATIC_CreateAction_ComponentScaleBy(class UObject** Outer, class USceneComponent** Component, bool* Local, struct FVector* scaleDelta, float* Length)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionComponentScaleBy.CreateAction_ComponentScaleBy");

	UActionComponentScaleBy_CreateAction_ComponentScaleBy_Params params;
	params.Outer = Outer;
	params.Component = Component;
	params.Local = Local;
	params.scaleDelta = scaleDelta;
	params.Length = Length;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.ActionComponentScaleTo.SetScale
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                Scale                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UActionComponentScaleTo::SetScale(struct FVector* Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionComponentScaleTo.SetScale");

	UActionComponentScaleTo_SetScale_Params params;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.ActionComponentScaleTo.GetScale
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData)

struct FVector UActionComponentScaleTo::GetScale()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionComponentScaleTo.GetScale");

	UActionComponentScaleTo_GetScale_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.ActionComponentScaleTo.CreateAction_ComponentScaleTo
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject**                Outer                          (Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent**        Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          Local                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Scale                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float*                         Length                         (Parm, ZeroConstructor, IsPlainOldData)
// class UActionComponentScaleTo* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UActionComponentScaleTo* UActionComponentScaleTo::STATIC_CreateAction_ComponentScaleTo(class UObject** Outer, class USceneComponent** Component, bool* Local, struct FVector* Scale, float* Length)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionComponentScaleTo.CreateAction_ComponentScaleTo");

	UActionComponentScaleTo_CreateAction_ComponentScaleTo_Params params;
	params.Outer = Outer;
	params.Component = Component;
	params.Local = Local;
	params.Scale = Scale;
	params.Length = Length;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.ActionComponentSetVisibility.SetVisible
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          Visible                        (Parm, ZeroConstructor, IsPlainOldData)

void UActionComponentSetVisibility::SetVisible(bool* Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionComponentSetVisibility.SetVisible");

	UActionComponentSetVisibility_SetVisible_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.ActionComponentSetVisibility.SetApplyToChildren
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          applyToChildren                (Parm, ZeroConstructor, IsPlainOldData)

void UActionComponentSetVisibility::SetApplyToChildren(bool* applyToChildren)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionComponentSetVisibility.SetApplyToChildren");

	UActionComponentSetVisibility_SetApplyToChildren_Params params;
	params.applyToChildren = applyToChildren;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.ActionComponentSetVisibility.GetVisible
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UActionComponentSetVisibility::GetVisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionComponentSetVisibility.GetVisible");

	UActionComponentSetVisibility_GetVisible_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.ActionComponentSetVisibility.GetApplyToChildren
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UActionComponentSetVisibility::GetApplyToChildren()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionComponentSetVisibility.GetApplyToChildren");

	UActionComponentSetVisibility_GetApplyToChildren_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.ActionComponentSetVisibility.CreateAction_ComponentSetVisibility
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject**                Outer                          (Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent**        Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          Visible                        (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          applyToChildren                (Parm, ZeroConstructor, IsPlainOldData)
// class UActionComponentSetVisibility* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UActionComponentSetVisibility* UActionComponentSetVisibility::STATIC_CreateAction_ComponentSetVisibility(class UObject** Outer, class USceneComponent** Component, bool* Visible, bool* applyToChildren)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionComponentSetVisibility.CreateAction_ComponentSetVisibility");

	UActionComponentSetVisibility_CreateAction_ComponentSetVisibility_Params params;
	params.Outer = Outer;
	params.Component = Component;
	params.Visible = Visible;
	params.applyToChildren = applyToChildren;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.ActionComponentTranslateBy.SetPositionDelta
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                positionDelta                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UActionComponentTranslateBy::SetPositionDelta(struct FVector* positionDelta)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionComponentTranslateBy.SetPositionDelta");

	UActionComponentTranslateBy_SetPositionDelta_Params params;
	params.positionDelta = positionDelta;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.ActionComponentTranslateBy.GetPositionDelta
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData)

struct FVector UActionComponentTranslateBy::GetPositionDelta()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionComponentTranslateBy.GetPositionDelta");

	UActionComponentTranslateBy_GetPositionDelta_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.ActionComponentTranslateBy.CreateAction_ComponentTranslateBy
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject**                Outer                          (Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent**        Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          Local                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                translationDelta               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float*                         Length                         (Parm, ZeroConstructor, IsPlainOldData)
// class UActionComponentTranslateBy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UActionComponentTranslateBy* UActionComponentTranslateBy::STATIC_CreateAction_ComponentTranslateBy(class UObject** Outer, class USceneComponent** Component, bool* Local, struct FVector* translationDelta, float* Length)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionComponentTranslateBy.CreateAction_ComponentTranslateBy");

	UActionComponentTranslateBy_CreateAction_ComponentTranslateBy_Params params;
	params.Outer = Outer;
	params.Component = Component;
	params.Local = Local;
	params.translationDelta = translationDelta;
	params.Length = Length;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.ActionComponentTranslateTo.SetPosition
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                Position                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UActionComponentTranslateTo::SetPosition(struct FVector* Position)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionComponentTranslateTo.SetPosition");

	UActionComponentTranslateTo_SetPosition_Params params;
	params.Position = Position;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.ActionComponentTranslateTo.GetPosition
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData)

struct FVector UActionComponentTranslateTo::GetPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionComponentTranslateTo.GetPosition");

	UActionComponentTranslateTo_GetPosition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.ActionComponentTranslateTo.CreateAction_ComponentTranslateTo
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject**                Outer                          (Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent**        Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          Local                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Translation                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float*                         Length                         (Parm, ZeroConstructor, IsPlainOldData)
// class UActionComponentTranslateTo* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UActionComponentTranslateTo* UActionComponentTranslateTo::STATIC_CreateAction_ComponentTranslateTo(class UObject** Outer, class USceneComponent** Component, bool* Local, struct FVector* Translation, float* Length)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionComponentTranslateTo.CreateAction_ComponentTranslateTo");

	UActionComponentTranslateTo_CreateAction_ComponentTranslateTo_Params params;
	params.Outer = Outer;
	params.Component = Component;
	params.Local = Local;
	params.Translation = Translation;
	params.Length = Length;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.ActionDestroyActor.CreateAction_DestroyActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject**                Outer                          (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// class UActionDestroyActor*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UActionDestroyActor* UActionDestroyActor::STATIC_CreateAction_DestroyActor(class UObject** Outer, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionDestroyActor.CreateAction_DestroyActor");

	UActionDestroyActor_CreateAction_DestroyActor_Params params;
	params.Outer = Outer;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.V1ActionContainer.IsEmpty
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UV1ActionContainer::IsEmpty()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1ActionContainer.IsEmpty");

	UV1ActionContainer_IsEmpty_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.V1ActionContainer.GetActions
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UV1ActionBase*>   ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

TArray<class UV1ActionBase*> UV1ActionContainer::GetActions()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1ActionContainer.GetActions");

	UV1ActionContainer_GetActions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.V1ActionContainer.GetActionCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UV1ActionContainer::GetActionCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1ActionContainer.GetActionCount");

	UV1ActionContainer_GetActionCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.V1ActionContainer.Clear
// (Final, Native, Public, BlueprintCallable)

void UV1ActionContainer::Clear()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1ActionContainer.Clear");

	UV1ActionContainer_Clear_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1ActionContainer.AddActionFront
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UV1ActionBase**          Action                         (Parm, ZeroConstructor, IsPlainOldData)
// class UV1ActionBase*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UV1ActionBase* UV1ActionContainer::AddActionFront(class UV1ActionBase** Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1ActionContainer.AddActionFront");

	UV1ActionContainer_AddActionFront_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.V1ActionContainer.AddActionBack
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UV1ActionBase**          Action                         (Parm, ZeroConstructor, IsPlainOldData)
// class UV1ActionBase*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UV1ActionBase* UV1ActionContainer::AddActionBack(class UV1ActionBase** Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1ActionContainer.AddActionBack");

	UV1ActionContainer_AddActionBack_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.ActionRepeatFinite.CreateAction_ActionRepeatFinite
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject**                Outer                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           iterations                     (Parm, ZeroConstructor, IsPlainOldData)
// class UActionRepeatFinite*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UActionRepeatFinite* UActionRepeatFinite::STATIC_CreateAction_ActionRepeatFinite(class UObject** Outer, int* iterations)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionRepeatFinite.CreateAction_ActionRepeatFinite");

	UActionRepeatFinite_CreateAction_ActionRepeatFinite_Params params;
	params.Outer = Outer;
	params.iterations = iterations;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.ActionRepeatForever.CreateAction_ActionRepeatForever
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject**                Outer                          (Parm, ZeroConstructor, IsPlainOldData)
// class UActionRepeatForever*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UActionRepeatForever* UActionRepeatForever::STATIC_CreateAction_ActionRepeatForever(class UObject** Outer)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionRepeatForever.CreateAction_ActionRepeatForever");

	UActionRepeatForever_CreateAction_ActionRepeatForever_Params params;
	params.Outer = Outer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.ActionSetActorTransform.SetTransform
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform*             transformDelta                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UActionSetActorTransform::SetTransform(struct FTransform* transformDelta)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionSetActorTransform.SetTransform");

	UActionSetActorTransform_SetTransform_Params params;
	params.transformDelta = transformDelta;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.ActionSetActorTransform.SetScale
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                scaleDelta                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UActionSetActorTransform::SetScale(struct FVector* scaleDelta)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionSetActorTransform.SetScale");

	UActionSetActorTransform_SetScale_Params params;
	params.scaleDelta = scaleDelta;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.ActionSetActorTransform.SetRotation
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator*               rotationDelta                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UActionSetActorTransform::SetRotation(struct FRotator* rotationDelta)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionSetActorTransform.SetRotation");

	UActionSetActorTransform_SetRotation_Params params;
	params.rotationDelta = rotationDelta;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.ActionSetActorTransform.SetPosition
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                positionDelta                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UActionSetActorTransform::SetPosition(struct FVector* positionDelta)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionSetActorTransform.SetPosition");

	UActionSetActorTransform_SetPosition_Params params;
	params.positionDelta = positionDelta;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.ActionSetActorTransform.SetLocalSpace
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          localSpace                     (Parm, ZeroConstructor, IsPlainOldData)

void UActionSetActorTransform::SetLocalSpace(bool* localSpace)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionSetActorTransform.SetLocalSpace");

	UActionSetActorTransform_SetLocalSpace_Params params;
	params.localSpace = localSpace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.ActionSetActorTransform.IsLocalSpace
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UActionSetActorTransform::IsLocalSpace()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionSetActorTransform.IsLocalSpace");

	UActionSetActorTransform_IsLocalSpace_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.ActionSetActorTransform.GetTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTransform              ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData)

struct FTransform UActionSetActorTransform::GetTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionSetActorTransform.GetTransform");

	UActionSetActorTransform_GetTransform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.ActionSetActorTransform.GetScale
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UActionSetActorTransform::GetScale()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionSetActorTransform.GetScale");

	UActionSetActorTransform_GetScale_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.ActionSetActorTransform.GetRotation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FRotator UActionSetActorTransform::GetRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionSetActorTransform.GetRotation");

	UActionSetActorTransform_GetRotation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.ActionSetActorTransform.GetPosition
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UActionSetActorTransform::GetPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionSetActorTransform.GetPosition");

	UActionSetActorTransform_GetPosition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.ActionSetActorTransform.CreateAction_SetActorTransform
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject**                Outer                          (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Local                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform*             Transform                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class UActionSetActorTransform* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UActionSetActorTransform* UActionSetActorTransform::STATIC_CreateAction_SetActorTransform(class UObject** Outer, class AActor** Actor, bool* Local, struct FTransform* Transform)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionSetActorTransform.CreateAction_SetActorTransform");

	UActionSetActorTransform_CreateAction_SetActorTransform_Params params;
	params.Outer = Outer;
	params.Actor = Actor;
	params.Local = Local;
	params.Transform = Transform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.ActionSetActorVisibility.CreateAction_SetActorVisibility
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject**                Outer                          (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Visible                        (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          applyToChildren                (Parm, ZeroConstructor, IsPlainOldData)
// class UActionSetActorVisibility* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UActionSetActorVisibility* UActionSetActorVisibility::STATIC_CreateAction_SetActorVisibility(class UObject** Outer, class AActor** Actor, bool* Visible, bool* applyToChildren)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionSetActorVisibility.CreateAction_SetActorVisibility");

	UActionSetActorVisibility_CreateAction_SetActorVisibility_Params params;
	params.Outer = Outer;
	params.Actor = Actor;
	params.Visible = Visible;
	params.applyToChildren = applyToChildren;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.ActionSpawnActor.SetSpawnTransform
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform*             SpawnTransform                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UActionSpawnActor::SetSpawnTransform(struct FTransform* SpawnTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionSpawnActor.SetSpawnTransform");

	UActionSpawnActor_SetSpawnTransform_Params params;
	params.SpawnTransform = SpawnTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.ActionSpawnActor.SetActorTag
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName*                  componentTag                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UActionSpawnActor::SetActorTag(struct FName* componentTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionSpawnActor.SetActorTag");

	UActionSpawnActor_SetActorTag_Params params;
	params.componentTag = componentTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.ActionSpawnActor.SetActorName
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName*                  actorName                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UActionSpawnActor::SetActorName(struct FName* actorName)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionSpawnActor.SetActorName");

	UActionSpawnActor_SetActorName_Params params;
	params.actorName = actorName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.ActionSpawnActor.SetActorClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass**                 actorClass                     (Parm, ZeroConstructor, IsPlainOldData)

void UActionSpawnActor::SetActorClass(class UClass** actorClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionSpawnActor.SetActorClass");

	UActionSpawnActor_SetActorClass_Params params;
	params.actorClass = actorClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.ActionSpawnActor.GetSpawnTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTransform              ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData)

struct FTransform UActionSpawnActor::GetSpawnTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionSpawnActor.GetSpawnTransform");

	UActionSpawnActor_GetSpawnTransform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.ActionSpawnActor.GetActorTag
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData)

struct FName UActionSpawnActor::GetActorTag()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionSpawnActor.GetActorTag");

	UActionSpawnActor_GetActorTag_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.ActionSpawnActor.GetActorName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData)

struct FName UActionSpawnActor::GetActorName()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionSpawnActor.GetActorName");

	UActionSpawnActor_GetActorName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.ActionSpawnActor.GetActorClass
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UActionSpawnActor::GetActorClass()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionSpawnActor.GetActorClass");

	UActionSpawnActor_GetActorClass_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.ActionSpawnActor.CreateAction_SpawnActor
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject**                Outer                          (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 actorClass                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform*             SpawnTransform                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FName*                  actorName                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName*                  actorTag                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UActionSpawnActor*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UActionSpawnActor* UActionSpawnActor::STATIC_CreateAction_SpawnActor(class UObject** Outer, class UClass** actorClass, struct FTransform* SpawnTransform, struct FName* actorName, struct FName* actorTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionSpawnActor.CreateAction_SpawnActor");

	UActionSpawnActor_CreateAction_SpawnActor_Params params;
	params.Outer = Outer;
	params.actorClass = actorClass;
	params.SpawnTransform = SpawnTransform;
	params.actorName = actorName;
	params.actorTag = actorTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.ActionSpawnComponent.SetSpawnTransform
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform*             SpawnTransform                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UActionSpawnComponent::SetSpawnTransform(struct FTransform* SpawnTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionSpawnComponent.SetSpawnTransform");

	UActionSpawnComponent_SetSpawnTransform_Params params;
	params.SpawnTransform = SpawnTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.ActionSpawnComponent.SetComponentTag
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName*                  componentTag                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UActionSpawnComponent::SetComponentTag(struct FName* componentTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionSpawnComponent.SetComponentTag");

	UActionSpawnComponent_SetComponentTag_Params params;
	params.componentTag = componentTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.ActionSpawnComponent.SetComponentName
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName*                  componentName                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UActionSpawnComponent::SetComponentName(struct FName* componentName)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionSpawnComponent.SetComponentName");

	UActionSpawnComponent_SetComponentName_Params params;
	params.componentName = componentName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.ActionSpawnComponent.SetComponentClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass**                 actorClass                     (Parm, ZeroConstructor, IsPlainOldData)

void UActionSpawnComponent::SetComponentClass(class UClass** actorClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionSpawnComponent.SetComponentClass");

	UActionSpawnComponent_SetComponentClass_Params params;
	params.actorClass = actorClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.ActionSpawnComponent.GetSpawnTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTransform              ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData)

struct FTransform UActionSpawnComponent::GetSpawnTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionSpawnComponent.GetSpawnTransform");

	UActionSpawnComponent_GetSpawnTransform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.ActionSpawnComponent.GetComponentTag
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData)

struct FName UActionSpawnComponent::GetComponentTag()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionSpawnComponent.GetComponentTag");

	UActionSpawnComponent_GetComponentTag_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.ActionSpawnComponent.GetComponentName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData)

struct FName UActionSpawnComponent::GetComponentName()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionSpawnComponent.GetComponentName");

	UActionSpawnComponent_GetComponentName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.ActionSpawnComponent.GetComponentClass
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UActionSpawnComponent::GetComponentClass()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionSpawnComponent.GetComponentClass");

	UActionSpawnComponent_GetComponentClass_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.ActionSpawnComponent.CreateAction_SpawnComponent
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject**                Outer                          (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 ComponentClass                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform*             SpawnTransform                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FName*                  componentName                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName*                  componentTag                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UActionSpawnComponent*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UActionSpawnComponent* UActionSpawnComponent::STATIC_CreateAction_SpawnComponent(class UObject** Outer, class AActor** Actor, class UClass** ComponentClass, struct FTransform* SpawnTransform, struct FName* componentName, struct FName* componentTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionSpawnComponent.CreateAction_SpawnComponent");

	UActionSpawnComponent_CreateAction_SpawnComponent_Params params;
	params.Outer = Outer;
	params.Actor = Actor;
	params.ComponentClass = ComponentClass;
	params.SpawnTransform = SpawnTransform;
	params.componentName = componentName;
	params.componentTag = componentTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.IntervalUMGAction.SetWidget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget**                Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UIntervalUMGAction::SetWidget(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.IntervalUMGAction.SetWidget");

	UIntervalUMGAction_SetWidget_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.IntervalUMGAction.GetWidget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWidget*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UIntervalUMGAction::GetWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.IntervalUMGAction.GetWidget");

	UIntervalUMGAction_GetWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.ActionUMGFadeAlphaTo.SetTargetAlpha
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         targetAlpha                    (Parm, ZeroConstructor, IsPlainOldData)

void UActionUMGFadeAlphaTo::SetTargetAlpha(float* targetAlpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionUMGFadeAlphaTo.SetTargetAlpha");

	UActionUMGFadeAlphaTo_SetTargetAlpha_Params params;
	params.targetAlpha = targetAlpha;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.ActionUMGFadeAlphaTo.GetTargetAlpha
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UActionUMGFadeAlphaTo::GetTargetAlpha()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionUMGFadeAlphaTo.GetTargetAlpha");

	UActionUMGFadeAlphaTo_GetTargetAlpha_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.ActionUMGFadeAlphaTo.CreateAction_UMGFadeAlphaTo
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject**                Outer                          (Parm, ZeroConstructor, IsPlainOldData)
// class UWidget**                Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float*                         targetAlpha                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Length                         (Parm, ZeroConstructor, IsPlainOldData)
// class UActionUMGFadeAlphaTo*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UActionUMGFadeAlphaTo* UActionUMGFadeAlphaTo::STATIC_CreateAction_UMGFadeAlphaTo(class UObject** Outer, class UWidget** Widget, float* targetAlpha, float* Length)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionUMGFadeAlphaTo.CreateAction_UMGFadeAlphaTo");

	UActionUMGFadeAlphaTo_CreateAction_UMGFadeAlphaTo_Params params;
	params.Outer = Outer;
	params.Widget = Widget;
	params.targetAlpha = targetAlpha;
	params.Length = Length;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.ActionUMGFadeColorTo.SetFadeColor
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor*           Color                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UActionUMGFadeColorTo::SetFadeColor(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionUMGFadeColorTo.SetFadeColor");

	UActionUMGFadeColorTo_SetFadeColor_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.ActionUMGFadeColorTo.GetFadeColor
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLinearColor            ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData)

struct FLinearColor UActionUMGFadeColorTo::GetFadeColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionUMGFadeColorTo.GetFadeColor");

	UActionUMGFadeColorTo_GetFadeColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.ActionUMGFadeColorTo.CreateAction_UMGFadeColorTo
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject**                Outer                          (Parm, ZeroConstructor, IsPlainOldData)
// class UWidget**                Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FLinearColor*           Color                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float*                         Length                         (Parm, ZeroConstructor, IsPlainOldData)
// class UActionUMGFadeColorTo*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UActionUMGFadeColorTo* UActionUMGFadeColorTo::STATIC_CreateAction_UMGFadeColorTo(class UObject** Outer, class UWidget** Widget, struct FLinearColor* Color, float* Length)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionUMGFadeColorTo.CreateAction_UMGFadeColorTo");

	UActionUMGFadeColorTo_CreateAction_UMGFadeColorTo_Params params;
	params.Outer = Outer;
	params.Widget = Widget;
	params.Color = Color;
	params.Length = Length;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.ActionUMGMultiplyAlphaBy.SetAlphaScalar
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         alphaScalar                    (Parm, ZeroConstructor, IsPlainOldData)

void UActionUMGMultiplyAlphaBy::SetAlphaScalar(float* alphaScalar)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionUMGMultiplyAlphaBy.SetAlphaScalar");

	UActionUMGMultiplyAlphaBy_SetAlphaScalar_Params params;
	params.alphaScalar = alphaScalar;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.ActionUMGMultiplyAlphaBy.GetAlphaScalar
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UActionUMGMultiplyAlphaBy::GetAlphaScalar()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionUMGMultiplyAlphaBy.GetAlphaScalar");

	UActionUMGMultiplyAlphaBy_GetAlphaScalar_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.ActionUMGMultiplyAlphaBy.CreateAction_UMGMultiplyAlphaBy
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject**                Outer                          (Parm, ZeroConstructor, IsPlainOldData)
// class UWidget**                Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float*                         alphaScalar                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Length                         (Parm, ZeroConstructor, IsPlainOldData)
// class UActionUMGMultiplyAlphaBy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UActionUMGMultiplyAlphaBy* UActionUMGMultiplyAlphaBy::STATIC_CreateAction_UMGMultiplyAlphaBy(class UObject** Outer, class UWidget** Widget, float* alphaScalar, float* Length)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionUMGMultiplyAlphaBy.CreateAction_UMGMultiplyAlphaBy");

	UActionUMGMultiplyAlphaBy_CreateAction_UMGMultiplyAlphaBy_Params params;
	params.Outer = Outer;
	params.Widget = Widget;
	params.alphaScalar = alphaScalar;
	params.Length = Length;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.ActionUMGMultiplyColorBy.SetColorScalar
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                colorScalar                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UActionUMGMultiplyColorBy::SetColorScalar(struct FVector* colorScalar)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionUMGMultiplyColorBy.SetColorScalar");

	UActionUMGMultiplyColorBy_SetColorScalar_Params params;
	params.colorScalar = colorScalar;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.ActionUMGMultiplyColorBy.GetColorScalar
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData)

struct FVector UActionUMGMultiplyColorBy::GetColorScalar()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionUMGMultiplyColorBy.GetColorScalar");

	UActionUMGMultiplyColorBy_GetColorScalar_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.ActionUMGMultiplyColorBy.CreateAction_UMGMultiplyColorBy
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject**                Outer                          (Parm, ZeroConstructor, IsPlainOldData)
// class UWidget**                Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector*                colorScalar                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float*                         Length                         (Parm, ZeroConstructor, IsPlainOldData)
// class UActionUMGMultiplyColorBy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UActionUMGMultiplyColorBy* UActionUMGMultiplyColorBy::STATIC_CreateAction_UMGMultiplyColorBy(class UObject** Outer, class UWidget** Widget, struct FVector* colorScalar, float* Length)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionUMGMultiplyColorBy.CreateAction_UMGMultiplyColorBy");

	UActionUMGMultiplyColorBy_CreateAction_UMGMultiplyColorBy_Params params;
	params.Outer = Outer;
	params.Widget = Widget;
	params.colorScalar = colorScalar;
	params.Length = Length;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.InstantUMGAction.SetWidget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget**                Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UInstantUMGAction::SetWidget(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.InstantUMGAction.SetWidget");

	UInstantUMGAction_SetWidget_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.InstantUMGAction.GetWidget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWidget*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UInstantUMGAction::GetWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.InstantUMGAction.GetWidget");

	UInstantUMGAction_GetWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.ActionUMGRemoveFromParent.CreateAction_UMGRemoveFromParent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject**                Outer                          (Parm, ZeroConstructor, IsPlainOldData)
// class UWidget**                Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UActionUMGRemoveFromParent* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UActionUMGRemoveFromParent* UActionUMGRemoveFromParent::STATIC_CreateAction_UMGRemoveFromParent(class UObject** Outer, class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionUMGRemoveFromParent.CreateAction_UMGRemoveFromParent");

	UActionUMGRemoveFromParent_CreateAction_UMGRemoveFromParent_Params params;
	params.Outer = Outer;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.ActionUMGRotateBy.SetRotationDelta
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         rotationDelta                  (Parm, ZeroConstructor, IsPlainOldData)

void UActionUMGRotateBy::SetRotationDelta(float* rotationDelta)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionUMGRotateBy.SetRotationDelta");

	UActionUMGRotateBy_SetRotationDelta_Params params;
	params.rotationDelta = rotationDelta;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.ActionUMGRotateBy.GetRotationDelta
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData)

float UActionUMGRotateBy::GetRotationDelta()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionUMGRotateBy.GetRotationDelta");

	UActionUMGRotateBy_GetRotationDelta_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.ActionUMGRotateBy.CreateAction_UMGRotateBy
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject**                Outer                          (Parm, ZeroConstructor, IsPlainOldData)
// class UWidget**                Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float*                         rotationDelta                  (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Length                         (Parm, ZeroConstructor, IsPlainOldData)
// class UActionUMGRotateBy*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UActionUMGRotateBy* UActionUMGRotateBy::STATIC_CreateAction_UMGRotateBy(class UObject** Outer, class UWidget** Widget, float* rotationDelta, float* Length)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionUMGRotateBy.CreateAction_UMGRotateBy");

	UActionUMGRotateBy_CreateAction_UMGRotateBy_Params params;
	params.Outer = Outer;
	params.Widget = Widget;
	params.rotationDelta = rotationDelta;
	params.Length = Length;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.ActionUMGRotateTo.SetRotation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         Rotation                       (Parm, ZeroConstructor, IsPlainOldData)

void UActionUMGRotateTo::SetRotation(float* Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionUMGRotateTo.SetRotation");

	UActionUMGRotateTo_SetRotation_Params params;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.ActionUMGRotateTo.GetRotation
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData)

float UActionUMGRotateTo::GetRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionUMGRotateTo.GetRotation");

	UActionUMGRotateTo_GetRotation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.ActionUMGRotateTo.CreateAction_UMGRotateTo
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject**                Outer                          (Parm, ZeroConstructor, IsPlainOldData)
// class UWidget**                Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float*                         Rotation                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Length                         (Parm, ZeroConstructor, IsPlainOldData)
// class UActionUMGRotateTo*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UActionUMGRotateTo* UActionUMGRotateTo::STATIC_CreateAction_UMGRotateTo(class UObject** Outer, class UWidget** Widget, float* Rotation, float* Length)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionUMGRotateTo.CreateAction_UMGRotateTo");

	UActionUMGRotateTo_CreateAction_UMGRotateTo_Params params;
	params.Outer = Outer;
	params.Widget = Widget;
	params.Rotation = Rotation;
	params.Length = Length;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.ActionUMGScaleBy.SetScaleDelta
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D*              scaleDelta                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UActionUMGScaleBy::SetScaleDelta(struct FVector2D* scaleDelta)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionUMGScaleBy.SetScaleDelta");

	UActionUMGScaleBy_SetScaleDelta_Params params;
	params.scaleDelta = scaleDelta;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.ActionUMGScaleBy.GetScaleDelta
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D               ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData)

struct FVector2D UActionUMGScaleBy::GetScaleDelta()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionUMGScaleBy.GetScaleDelta");

	UActionUMGScaleBy_GetScaleDelta_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.ActionUMGScaleBy.CreateAction_UMGScaleBy
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject**                Outer                          (Parm, ZeroConstructor, IsPlainOldData)
// class UWidget**                Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector2D*              scaleDelta                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float*                         Length                         (Parm, ZeroConstructor, IsPlainOldData)
// class UActionUMGScaleBy*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UActionUMGScaleBy* UActionUMGScaleBy::STATIC_CreateAction_UMGScaleBy(class UObject** Outer, class UWidget** Widget, struct FVector2D* scaleDelta, float* Length)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionUMGScaleBy.CreateAction_UMGScaleBy");

	UActionUMGScaleBy_CreateAction_UMGScaleBy_Params params;
	params.Outer = Outer;
	params.Widget = Widget;
	params.scaleDelta = scaleDelta;
	params.Length = Length;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.ActionUMGScaleTo.SetScale
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D*              Scale                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UActionUMGScaleTo::SetScale(struct FVector2D* Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionUMGScaleTo.SetScale");

	UActionUMGScaleTo_SetScale_Params params;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.ActionUMGScaleTo.GetScale
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D               ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData)

struct FVector2D UActionUMGScaleTo::GetScale()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionUMGScaleTo.GetScale");

	UActionUMGScaleTo_GetScale_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.ActionUMGScaleTo.CreateAction_UMGScaleTo
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject**                Outer                          (Parm, ZeroConstructor, IsPlainOldData)
// class UWidget**                Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector2D*              Scale                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float*                         Length                         (Parm, ZeroConstructor, IsPlainOldData)
// class UActionUMGScaleTo*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UActionUMGScaleTo* UActionUMGScaleTo::STATIC_CreateAction_UMGScaleTo(class UObject** Outer, class UWidget** Widget, struct FVector2D* Scale, float* Length)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionUMGScaleTo.CreateAction_UMGScaleTo");

	UActionUMGScaleTo_CreateAction_UMGScaleTo_Params params;
	params.Outer = Outer;
	params.Widget = Widget;
	params.Scale = Scale;
	params.Length = Length;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.ActionUMGTranslateBy.SetPositionDelta
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D*              positionDelta                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UActionUMGTranslateBy::SetPositionDelta(struct FVector2D* positionDelta)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionUMGTranslateBy.SetPositionDelta");

	UActionUMGTranslateBy_SetPositionDelta_Params params;
	params.positionDelta = positionDelta;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.ActionUMGTranslateBy.GetPositionDelta
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D               ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData)

struct FVector2D UActionUMGTranslateBy::GetPositionDelta()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionUMGTranslateBy.GetPositionDelta");

	UActionUMGTranslateBy_GetPositionDelta_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.ActionUMGTranslateBy.CreateAction_UMGTranslateBy
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject**                Outer                          (Parm, ZeroConstructor, IsPlainOldData)
// class UWidget**                Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector2D*              translationDelta               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float*                         Length                         (Parm, ZeroConstructor, IsPlainOldData)
// class UActionUMGTranslateBy*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UActionUMGTranslateBy* UActionUMGTranslateBy::STATIC_CreateAction_UMGTranslateBy(class UObject** Outer, class UWidget** Widget, struct FVector2D* translationDelta, float* Length)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionUMGTranslateBy.CreateAction_UMGTranslateBy");

	UActionUMGTranslateBy_CreateAction_UMGTranslateBy_Params params;
	params.Outer = Outer;
	params.Widget = Widget;
	params.translationDelta = translationDelta;
	params.Length = Length;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.ActionUMGTranslateTo.SetPosition
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D*              Position                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UActionUMGTranslateTo::SetPosition(struct FVector2D* Position)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionUMGTranslateTo.SetPosition");

	UActionUMGTranslateTo_SetPosition_Params params;
	params.Position = Position;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.ActionUMGTranslateTo.GetPosition
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D               ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData)

struct FVector2D UActionUMGTranslateTo::GetPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionUMGTranslateTo.GetPosition");

	UActionUMGTranslateTo_GetPosition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.ActionUMGTranslateTo.CreateAction_UMGTranslateTo
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject**                Outer                          (Parm, ZeroConstructor, IsPlainOldData)
// class UWidget**                Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector2D*              Translation                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float*                         Length                         (Parm, ZeroConstructor, IsPlainOldData)
// class UActionUMGTranslateTo*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UActionUMGTranslateTo* UActionUMGTranslateTo::STATIC_CreateAction_UMGTranslateTo(class UObject** Outer, class UWidget** Widget, struct FVector2D* Translation, float* Length)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActionUMGTranslateTo.CreateAction_UMGTranslateTo");

	UActionUMGTranslateTo_CreateAction_UMGTranslateTo_Params params;
	params.Outer = Outer;
	params.Widget = Widget;
	params.Translation = Translation;
	params.Length = Length;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.ActorActionInterface.SetActor
// (Native, Public, BlueprintCallable)
// Parameters:
// class AActor**                 Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void UActorActionInterface::SetActor(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActorActionInterface.SetActor");

	UActorActionInterface_SetActor_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.ActorActionInterface.GetActor
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UActorActionInterface::GetActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActorActionInterface.GetActor");

	UActorActionInterface_GetActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.ActorLifeCycleComponent.Server_DummyRPC
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)

void UActorLifeCycleComponent::Server_DummyRPC()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ActorLifeCycleComponent.Server_DummyRPC");

	UActorLifeCycleComponent_Server_DummyRPC_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.ComponentActionInterface.SetComponentByActor
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class AActor**                 Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  componentName                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UComponentActionInterface::SetComponentByActor(class AActor** Actor, struct FName* componentName)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ComponentActionInterface.SetComponentByActor");

	UComponentActionInterface_SetComponentByActor_Params params;
	params.Actor = Actor;
	params.componentName = componentName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.ComponentActionInterface.SetComponent
// (Native, Public, BlueprintCallable)
// Parameters:
// class UActorComponent**        Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UComponentActionInterface::SetComponent(class UActorComponent** Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ComponentActionInterface.SetComponent");

	UComponentActionInterface_SetComponent_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.ComponentActionInterface.SetActor
// (Native, Public, BlueprintCallable)
// Parameters:
// class AActor**                 Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void UComponentActionInterface::SetActor(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ComponentActionInterface.SetActor");

	UComponentActionInterface_SetActor_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.ComponentActionInterface.GetComponent
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UActorComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UActorComponent* UComponentActionInterface::GetComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.ComponentActionInterface.GetComponent");

	UComponentActionInterface_GetComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.CustomBoundsInterface.GetCustomBounds
// (Native, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                 WorldOrigin                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 halfExtents                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCustomBoundsInterface::GetCustomBounds(struct FVector* WorldOrigin, struct FVector* halfExtents)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.CustomBoundsInterface.GetCustomBounds");

	UCustomBoundsInterface_GetCustomBounds_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WorldOrigin != nullptr)
		*WorldOrigin = params.WorldOrigin;
	if (halfExtents != nullptr)
		*halfExtents = params.halfExtents;
}


// Function V1CoreRuntime.EaseActionExponentialBase.SetRate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         Rate                           (Parm, ZeroConstructor, IsPlainOldData)

void UEaseActionExponentialBase::SetRate(float* Rate)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.EaseActionExponentialBase.SetRate");

	UEaseActionExponentialBase_SetRate_Params params;
	params.Rate = Rate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.EaseActionExponentialBase.SetAction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UV1IntervalAction**      Action                         (Parm, ZeroConstructor, IsPlainOldData)

void UEaseActionExponentialBase::SetAction(class UV1IntervalAction** Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.EaseActionExponentialBase.SetAction");

	UEaseActionExponentialBase_SetAction_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.EaseActionExponentialBase.GetRate
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UEaseActionExponentialBase::GetRate()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.EaseActionExponentialBase.GetRate");

	UEaseActionExponentialBase_GetRate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.EasingActionStatics.CreateEaseActionExponentialOut
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject**                Outer                          (Parm, ZeroConstructor, IsPlainOldData)
// class UV1IntervalAction**      Action                         (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Rate                           (Parm, ZeroConstructor, IsPlainOldData)
// class UEaseActionExponentialOut* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UEaseActionExponentialOut* UEasingActionStatics::STATIC_CreateEaseActionExponentialOut(class UObject** Outer, class UV1IntervalAction** Action, float* Rate)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.EasingActionStatics.CreateEaseActionExponentialOut");

	UEasingActionStatics_CreateEaseActionExponentialOut_Params params;
	params.Outer = Outer;
	params.Action = Action;
	params.Rate = Rate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.EasingActionStatics.CreateEaseActionExponentialInOut
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject**                Outer                          (Parm, ZeroConstructor, IsPlainOldData)
// class UV1IntervalAction**      Action                         (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Rate                           (Parm, ZeroConstructor, IsPlainOldData)
// class UEaseActionExponentialInOut* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UEaseActionExponentialInOut* UEasingActionStatics::STATIC_CreateEaseActionExponentialInOut(class UObject** Outer, class UV1IntervalAction** Action, float* Rate)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.EasingActionStatics.CreateEaseActionExponentialInOut");

	UEasingActionStatics_CreateEaseActionExponentialInOut_Params params;
	params.Outer = Outer;
	params.Action = Action;
	params.Rate = Rate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.EasingActionStatics.CreateEaseActionExponentialIn
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject**                Outer                          (Parm, ZeroConstructor, IsPlainOldData)
// class UV1IntervalAction**      Action                         (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Rate                           (Parm, ZeroConstructor, IsPlainOldData)
// class UEaseActionExponentialIn* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UEaseActionExponentialIn* UEasingActionStatics::STATIC_CreateEaseActionExponentialIn(class UObject** Outer, class UV1IntervalAction** Action, float* Rate)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.EasingActionStatics.CreateEaseActionExponentialIn");

	UEasingActionStatics_CreateEaseActionExponentialIn_Params params;
	params.Outer = Outer;
	params.Action = Action;
	params.Rate = Rate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.V1TimeDilationComponent.S_RequestActorTimeDilation_BP
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor**                 targetActor                    (Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                requestingObject               (Parm, ZeroConstructor, IsPlainOldData)
// struct FTimeDilationRequest*   request                        (Parm)

void UV1TimeDilationComponent::STATIC_S_RequestActorTimeDilation_BP(class AActor** targetActor, class UObject** requestingObject, struct FTimeDilationRequest* request)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1TimeDilationComponent.S_RequestActorTimeDilation_BP");

	UV1TimeDilationComponent_S_RequestActorTimeDilation_BP_Params params;
	params.targetActor = targetActor;
	params.requestingObject = requestingObject;
	params.request = request;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1TimeDilationComponent.S_EndActorTimeDilationRequest
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor**                 targetActor                    (Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                requestingObject               (Parm, ZeroConstructor, IsPlainOldData)

void UV1TimeDilationComponent::STATIC_S_EndActorTimeDilationRequest(class AActor** targetActor, class UObject** requestingObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1TimeDilationComponent.S_EndActorTimeDilationRequest");

	UV1TimeDilationComponent_S_EndActorTimeDilationRequest_Params params;
	params.targetActor = targetActor;
	params.requestingObject = requestingObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.UMGActionInterface.SetWidget
// (Native, Public, BlueprintCallable)
// Parameters:
// class UWidget**                Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUMGActionInterface::SetWidget(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.UMGActionInterface.SetWidget");

	UUMGActionInterface_SetWidget_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.UMGActionInterface.GetWidget
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWidget*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UUMGActionInterface::GetWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.UMGActionInterface.GetWidget");

	UUMGActionInterface_GetWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.V1ActionAsset.GetAction
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UV1ActionBase*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UV1ActionBase* UV1ActionAsset::GetAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1ActionAsset.GetAction");

	UV1ActionAsset_GetAction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.V1ActionClip.Stop
// (Final, Native, Public, BlueprintCallable)

void UV1ActionClip::Stop()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1ActionClip.Stop");

	UV1ActionClip_Stop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1ActionClip.SetContext
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FV1ActionContext*       Context                        (ConstParm, Parm, OutParm, ReferenceParm)

void UV1ActionClip::SetContext(struct FV1ActionContext* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1ActionClip.SetContext");

	UV1ActionClip_SetContext_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1ActionClip.PlayWithContext
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FV1ActionContext*       Context                        (ConstParm, Parm, OutParm, ReferenceParm)

void UV1ActionClip::PlayWithContext(struct FV1ActionContext* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1ActionClip.PlayWithContext");

	UV1ActionClip_PlayWithContext_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1ActionClip.Play
// (Final, Native, Public, BlueprintCallable)

void UV1ActionClip::Play()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1ActionClip.Play");

	UV1ActionClip_Play_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1ActionClip.Pause
// (Final, Native, Public, BlueprintCallable)

void UV1ActionClip::Pause()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1ActionClip.Pause");

	UV1ActionClip_Pause_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1ActionClip.GetContext
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FV1ActionContext        ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)

struct FV1ActionContext UV1ActionClip::GetContext()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1ActionClip.GetContext");

	UV1ActionClip_GetContext_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.V1ActionClip.Continue
// (Final, Native, Public, BlueprintCallable)

void UV1ActionClip::Continue()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1ActionClip.Continue");

	UV1ActionClip_Continue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1ActionList.IsLaneEmpty
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int*                           lane                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UV1ActionList::IsLaneEmpty(int* lane)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1ActionList.IsLaneEmpty");

	UV1ActionList_IsLaneEmpty_Params params;
	params.lane = lane;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.V1ActionList.GetLaneCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UV1ActionList::GetLaneCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1ActionList.GetLaneCount");

	UV1ActionList_GetLaneCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.V1ActionList.GetLaneActionCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int*                           lane                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UV1ActionList::GetLaneActionCount(int* lane)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1ActionList.GetLaneActionCount");

	UV1ActionList_GetLaneActionCount_Params params;
	params.lane = lane;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.V1ActionList.GetActionCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UV1ActionList::GetActionCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1ActionList.GetActionCount");

	UV1ActionList_GetActionCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.V1ActionList.CreateAction_ActionList
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject**                Outer                          (Parm, ZeroConstructor, IsPlainOldData)
// class UV1ActionList*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UV1ActionList* UV1ActionList::STATIC_CreateAction_ActionList(class UObject** Outer)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1ActionList.CreateAction_ActionList");

	UV1ActionList_CreateAction_ActionList_Params params;
	params.Outer = Outer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.V1ActionList.ClearLane
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           lane                           (Parm, ZeroConstructor, IsPlainOldData)

void UV1ActionList::ClearLane(int* lane)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1ActionList.ClearLane");

	UV1ActionList_ClearLane_Params params;
	params.lane = lane;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1ActionList.ClearAll
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           lane                           (Parm, ZeroConstructor, IsPlainOldData)

void UV1ActionList::ClearAll(int* lane)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1ActionList.ClearAll");

	UV1ActionList_ClearAll_Params params;
	params.lane = lane;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1ActionList.AddActionFront
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           lane                           (Parm, ZeroConstructor, IsPlainOldData)
// class UV1ActionBase**          Action                         (Parm, ZeroConstructor, IsPlainOldData)
// class UV1ActionBase*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UV1ActionBase* UV1ActionList::AddActionFront(int* lane, class UV1ActionBase** Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1ActionList.AddActionFront");

	UV1ActionList_AddActionFront_Params params;
	params.lane = lane;
	params.Action = Action;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.V1ActionList.AddActionBack
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           lane                           (Parm, ZeroConstructor, IsPlainOldData)
// class UV1ActionBase**          Action                         (Parm, ZeroConstructor, IsPlainOldData)
// class UV1ActionBase*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UV1ActionBase* UV1ActionList::AddActionBack(int* lane, class UV1ActionBase** Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1ActionList.AddActionBack");

	UV1ActionList_AddActionBack_Params params;
	params.lane = lane;
	params.Action = Action;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.V1ActionListComponent.GetActionList
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UV1ActionList*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UV1ActionList* UV1ActionListComponent::GetActionList()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1ActionListComponent.GetActionList");

	UV1ActionListComponent_GetActionList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.V1ActionSequence.CreateAction_ActionSequence
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject**                Outer                          (Parm, ZeroConstructor, IsPlainOldData)
// class UV1ActionSequence*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UV1ActionSequence* UV1ActionSequence::STATIC_CreateAction_ActionSequence(class UObject** Outer)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1ActionSequence.CreateAction_ActionSequence");

	UV1ActionSequence_CreateAction_ActionSequence_Params params;
	params.Outer = Outer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.V1AttributeMod.SetPostPercentageAdd
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         postPercentageAdd              (Parm, ZeroConstructor, IsPlainOldData)

void UV1AttributeMod::SetPostPercentageAdd(float* postPercentageAdd)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1AttributeMod.SetPostPercentageAdd");

	UV1AttributeMod_SetPostPercentageAdd_Params params;
	params.postPercentageAdd = postPercentageAdd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1AttributeMod.SetPostMultiplier
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         postMultiplier                 (Parm, ZeroConstructor, IsPlainOldData)

void UV1AttributeMod::SetPostMultiplier(float* postMultiplier)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1AttributeMod.SetPostMultiplier");

	UV1AttributeMod_SetPostMultiplier_Params params;
	params.postMultiplier = postMultiplier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1AttributeMod.SetPostConstantAdd
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         postConstantAdd                (Parm, ZeroConstructor, IsPlainOldData)

void UV1AttributeMod::SetPostConstantAdd(float* postConstantAdd)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1AttributeMod.SetPostConstantAdd");

	UV1AttributeMod_SetPostConstantAdd_Params params;
	params.postConstantAdd = postConstantAdd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1AttributeMod.SetModData
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FV1AttributeModData*    modData                        (ConstParm, Parm, OutParm, ReferenceParm)

void UV1AttributeMod::SetModData(struct FV1AttributeModData* modData)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1AttributeMod.SetModData");

	UV1AttributeMod_SetModData_Params params;
	params.modData = modData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1AttributeMod.SetBasePercentageAdd
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         basePercentageAdd              (Parm, ZeroConstructor, IsPlainOldData)

void UV1AttributeMod::SetBasePercentageAdd(float* basePercentageAdd)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1AttributeMod.SetBasePercentageAdd");

	UV1AttributeMod_SetBasePercentageAdd_Params params;
	params.basePercentageAdd = basePercentageAdd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1AttributeMod.SetBaseMultiplier
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         baseMultiplier                 (Parm, ZeroConstructor, IsPlainOldData)

void UV1AttributeMod::SetBaseMultiplier(float* baseMultiplier)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1AttributeMod.SetBaseMultiplier");

	UV1AttributeMod_SetBaseMultiplier_Params params;
	params.baseMultiplier = baseMultiplier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1AttributeMod.SetBaseConstantAdd
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         baseConstantAdd                (Parm, ZeroConstructor, IsPlainOldData)

void UV1AttributeMod::SetBaseConstantAdd(float* baseConstantAdd)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1AttributeMod.SetBaseConstantAdd");

	UV1AttributeMod_SetBaseConstantAdd_Params params;
	params.baseConstantAdd = baseConstantAdd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1AttributeModifier.RemoveMod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UV1AttributeMod**        mod                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UV1AttributeModifier::RemoveMod(class UV1AttributeMod** mod)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1AttributeModifier.RemoveMod");

	UV1AttributeModifier_RemoveMod_Params params;
	params.mod = mod;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1AttributeModifier.GetCurrentModData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FV1AttributeModData     ReturnValue                    (Parm, OutParm, ReturnParm)

struct FV1AttributeModData UV1AttributeModifier::GetCurrentModData()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1AttributeModifier.GetCurrentModData");

	UV1AttributeModifier_GetCurrentModData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.V1AttributeModifier.AddMod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UV1AttributeMod**        mod                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UV1AttributeModifier::AddMod(class UV1AttributeMod** mod)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1AttributeModifier.AddMod");

	UV1AttributeModifier_AddMod_Params params;
	params.mod = mod;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1AttributeBase.GetAttributeTypeTag
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag            ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)

struct FGameplayTag UV1AttributeBase::GetAttributeTypeTag()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1AttributeBase.GetAttributeTypeTag");

	UV1AttributeBase_GetAttributeTypeTag_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.V1Attribute.SetCurrentToMax
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FV1AttributeInstigator* Instigator                     (ConstParm, Parm, OutParm, ReferenceParm)

void UV1Attribute::SetCurrentToMax(struct FV1AttributeInstigator* Instigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1Attribute.SetCurrentToMax");

	UV1Attribute_SetCurrentToMax_Params params;
	params.Instigator = Instigator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1Attribute.SetCurrentPercentage
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// float*                         percentage                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FV1AttributeInstigator* Instigator                     (ConstParm, Parm, OutParm, ReferenceParm)

void UV1Attribute::SetCurrentPercentage(float* percentage, struct FV1AttributeInstigator* Instigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1Attribute.SetCurrentPercentage");

	UV1Attribute_SetCurrentPercentage_Params params;
	params.percentage = percentage;
	params.Instigator = Instigator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1Attribute.RemoveMaxModifier
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UV1AttributeModifier**   modifier                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UV1Attribute::RemoveMaxModifier(class UV1AttributeModifier** modifier)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1Attribute.RemoveMaxModifier");

	UV1Attribute_RemoveMaxModifier_Params params;
	params.modifier = modifier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1Attribute.OnRep_ModifiedMaxValue
// (Final, Native, Protected)

void UV1Attribute::OnRep_ModifiedMaxValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1Attribute.OnRep_ModifiedMaxValue");

	UV1Attribute_OnRep_ModifiedMaxValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1Attribute.OnRep_CurrentValue
// (Final, Native, Protected)

void UV1Attribute::OnRep_CurrentValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1Attribute.OnRep_CurrentValue");

	UV1Attribute_OnRep_CurrentValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1Attribute.OnRep_CombinedModData
// (Final, Native, Protected)

void UV1Attribute::OnRep_CombinedModData()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1Attribute.OnRep_CombinedModData");

	UV1Attribute_OnRep_CombinedModData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1Attribute.InitializeCurrentValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         percentageOfMax                (Parm, ZeroConstructor, IsPlainOldData)

void UV1Attribute::InitializeCurrentValue(float* percentageOfMax)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1Attribute.InitializeCurrentValue");

	UV1Attribute_InitializeCurrentValue_Params params;
	params.percentageOfMax = percentageOfMax;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1Attribute.GetMaxAsInt
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UV1Attribute::GetMaxAsInt()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1Attribute.GetMaxAsInt");

	UV1Attribute_GetMaxAsInt_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.V1Attribute.GetMax
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UV1Attribute::GetMax()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1Attribute.GetMax");

	UV1Attribute_GetMax_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.V1Attribute.GetCurrentPercentage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UV1Attribute::GetCurrentPercentage()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1Attribute.GetCurrentPercentage");

	UV1Attribute_GetCurrentPercentage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.V1Attribute.GetCurrentAsInt
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UV1Attribute::GetCurrentAsInt()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1Attribute.GetCurrentAsInt");

	UV1Attribute_GetCurrentAsInt_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.V1Attribute.GetCurrent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UV1Attribute::GetCurrent()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1Attribute.GetCurrent");

	UV1Attribute_GetCurrent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.V1Attribute.AddPercentageOfMaxToCurrent
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// float*                         percentageAmount               (Parm, ZeroConstructor, IsPlainOldData)
// struct FV1AttributeInstigator* Instigator                     (ConstParm, Parm, OutParm, ReferenceParm)

void UV1Attribute::AddPercentageOfMaxToCurrent(float* percentageAmount, struct FV1AttributeInstigator* Instigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1Attribute.AddPercentageOfMaxToCurrent");

	UV1Attribute_AddPercentageOfMaxToCurrent_Params params;
	params.percentageAmount = percentageAmount;
	params.Instigator = Instigator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1Attribute.AddMaxModifier
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UV1AttributeModifier**   modifier                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UV1Attribute::AddMaxModifier(class UV1AttributeModifier** modifier)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1Attribute.AddMaxModifier");

	UV1Attribute_AddMaxModifier_Params params;
	params.modifier = modifier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1Attribute.AddConstantToCurrent
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// float*                         Amount                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FV1AttributeInstigator* Instigator                     (ConstParm, Parm, OutParm, ReferenceParm)

void UV1Attribute::AddConstantToCurrent(float* Amount, struct FV1AttributeInstigator* Instigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1Attribute.AddConstantToCurrent");

	UV1Attribute_AddConstantToCurrent_Params params;
	params.Amount = Amount;
	params.Instigator = Instigator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1AttributesComponent.S_GetStatusAttributeValue
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class AActor**                 Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag*           attributeType                  (ConstParm, Parm, OutParm, ReferenceParm)
// bool*                          DefaultValue                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UV1AttributesComponent::STATIC_S_GetStatusAttributeValue(class AActor** Actor, struct FGameplayTag* attributeType, bool* DefaultValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1AttributesComponent.S_GetStatusAttributeValue");

	UV1AttributesComponent_S_GetStatusAttributeValue_Params params;
	params.Actor = Actor;
	params.attributeType = attributeType;
	params.DefaultValue = DefaultValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.V1AttributesComponent.S_GetStatusAttribute
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class AActor**                 Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag*           attributeType                  (ConstParm, Parm, OutParm, ReferenceParm)
// class UV1StatusAttribute*      ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UV1StatusAttribute* UV1AttributesComponent::STATIC_S_GetStatusAttribute(class AActor** Actor, struct FGameplayTag* attributeType)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1AttributesComponent.S_GetStatusAttribute");

	UV1AttributesComponent_S_GetStatusAttribute_Params params;
	params.Actor = Actor;
	params.attributeType = attributeType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.V1AttributesComponent.S_GetFloatAttributeValue
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class AActor**                 Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag*           attributeType                  (ConstParm, Parm, OutParm, ReferenceParm)
// float*                         DefaultValue                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UV1AttributesComponent::STATIC_S_GetFloatAttributeValue(class AActor** Actor, struct FGameplayTag* attributeType, float* DefaultValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1AttributesComponent.S_GetFloatAttributeValue");

	UV1AttributesComponent_S_GetFloatAttributeValue_Params params;
	params.Actor = Actor;
	params.attributeType = attributeType;
	params.DefaultValue = DefaultValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.V1AttributesComponent.S_GetFloatAttributePercentage
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class AActor**                 Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag*           attributeType                  (ConstParm, Parm, OutParm, ReferenceParm)
// float*                         DefaultValue                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UV1AttributesComponent::STATIC_S_GetFloatAttributePercentage(class AActor** Actor, struct FGameplayTag* attributeType, float* DefaultValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1AttributesComponent.S_GetFloatAttributePercentage");

	UV1AttributesComponent_S_GetFloatAttributePercentage_Params params;
	params.Actor = Actor;
	params.attributeType = attributeType;
	params.DefaultValue = DefaultValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.V1AttributesComponent.S_GetFloatAttribute
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class AActor**                 Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag*           attributeType                  (ConstParm, Parm, OutParm, ReferenceParm)
// class UV1Attribute*            ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UV1Attribute* UV1AttributesComponent::STATIC_S_GetFloatAttribute(class AActor** Actor, struct FGameplayTag* attributeType)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1AttributesComponent.S_GetFloatAttribute");

	UV1AttributesComponent_S_GetFloatAttribute_Params params;
	params.Actor = Actor;
	params.attributeType = attributeType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.V1AttributesComponent.S_GetAttributesComponent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor**                 Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// class UV1AttributesComponent*  ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UV1AttributesComponent* UV1AttributesComponent::STATIC_S_GetAttributesComponent(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1AttributesComponent.S_GetAttributesComponent");

	UV1AttributesComponent_S_GetAttributesComponent_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.V1AttributesComponent.S_Get
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor**                 Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// class UV1AttributesComponent*  ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UV1AttributesComponent* UV1AttributesComponent::STATIC_S_Get(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1AttributesComponent.S_Get");

	UV1AttributesComponent_S_Get_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.V1AttributesComponent.RemoveMod
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGameplayTag*           attributeType                  (ConstParm, Parm, OutParm, ReferenceParm)
// class UV1AttributeMod**        mod                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UV1AttributesComponent::RemoveMod(struct FGameplayTag* attributeType, class UV1AttributeMod** mod)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1AttributesComponent.RemoveMod");

	UV1AttributesComponent_RemoveMod_Params params;
	params.attributeType = attributeType;
	params.mod = mod;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1AttributesComponent.GetStatusAttribute
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGameplayTag*           attributeType                  (ConstParm, Parm, OutParm, ReferenceParm)
// class UV1StatusAttribute*      ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UV1StatusAttribute* UV1AttributesComponent::GetStatusAttribute(struct FGameplayTag* attributeType)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1AttributesComponent.GetStatusAttribute");

	UV1AttributesComponent_GetStatusAttribute_Params params;
	params.attributeType = attributeType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.V1AttributesComponent.GetModifier
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGameplayTag*           attributeType                  (ConstParm, Parm, OutParm, ReferenceParm)
// class UV1AttributeModifier*    ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UV1AttributeModifier* UV1AttributesComponent::GetModifier(struct FGameplayTag* attributeType)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1AttributesComponent.GetModifier");

	UV1AttributesComponent_GetModifier_Params params;
	params.attributeType = attributeType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.V1AttributesComponent.GetFloatAttribute
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGameplayTag*           attributeType                  (ConstParm, Parm, OutParm, ReferenceParm)
// class UV1Attribute*            ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UV1Attribute* UV1AttributesComponent::GetFloatAttribute(struct FGameplayTag* attributeType)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1AttributesComponent.GetFloatAttribute");

	UV1AttributesComponent_GetFloatAttribute_Params params;
	params.attributeType = attributeType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.V1AttributesComponent.AddMod
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGameplayTag*           attributeType                  (ConstParm, Parm, OutParm, ReferenceParm)
// class UV1AttributeMod**        mod                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UV1AttributesComponent::AddMod(struct FGameplayTag* attributeType, class UV1AttributeMod** mod)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1AttributesComponent.AddMod");

	UV1AttributesComponent_AddMod_Params params;
	params.attributeType = attributeType;
	params.mod = mod;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1AudioComponent.S_StopAudioEvent
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// int*                           eventId                        (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void UV1AudioComponent::STATIC_S_StopAudioEvent(int* eventId, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1AudioComponent.S_StopAudioEvent");

	UV1AudioComponent_S_StopAudioEvent_Params params;
	params.eventId = eventId;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1AudioComponent.S_PostAudioEvent
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAkAudioEvent**          akEvent                        (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          stopOnDestroy                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UV1AudioComponent::STATIC_S_PostAudioEvent(class UAkAudioEvent** akEvent, class AActor** Actor, bool* stopOnDestroy)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1AudioComponent.S_PostAudioEvent");

	UV1AudioComponent_S_PostAudioEvent_Params params;
	params.akEvent = akEvent;
	params.Actor = Actor;
	params.stopOnDestroy = stopOnDestroy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.V1AudioComponent.S_CreateAudioComponent
// (Final, BlueprintCosmetic, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor**                 Owner                          (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          autoDestroyOnComplete          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                WorldLocation                  (Parm, ZeroConstructor, IsPlainOldData)
// class UV1AudioComponent*       ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UV1AudioComponent* UV1AudioComponent::STATIC_S_CreateAudioComponent(class AActor** Owner, bool* autoDestroyOnComplete, struct FVector* WorldLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1AudioComponent.S_CreateAudioComponent");

	UV1AudioComponent_S_CreateAudioComponent_Params params;
	params.Owner = Owner;
	params.autoDestroyOnComplete = autoDestroyOnComplete;
	params.WorldLocation = WorldLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.V1AudioComponent.PostAudioEvent_BP
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UAkAudioEvent**          audioEvent                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UV1AudioComponent::PostAudioEvent_BP(class UAkAudioEvent** audioEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1AudioComponent.PostAudioEvent_BP");

	UV1AudioComponent_PostAudioEvent_BP_Params params;
	params.audioEvent = audioEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.V1Button.SetTouchMethod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EButtonTouchMethod>* InTouchMethod                  (Parm, ZeroConstructor, IsPlainOldData)

void UV1Button::SetTouchMethod(TEnumAsByte<EButtonTouchMethod>* InTouchMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1Button.SetTouchMethod");

	UV1Button_SetTouchMethod_Params params;
	params.InTouchMethod = InTouchMethod;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1Button.SetText
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FText*                  Text                           (ConstParm, Parm, OutParm, ReferenceParm)

void UV1Button::SetText(struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1Button.SetText");

	UV1Button_SetText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1Button.SetStyle
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FButtonStyle*           InStyle                        (ConstParm, Parm, OutParm, ReferenceParm)

void UV1Button::SetStyle(struct FButtonStyle* InStyle)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1Button.SetStyle");

	UV1Button_SetStyle_Params params;
	params.InStyle = InStyle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1Button.SetClickMethod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EButtonClickMethod>* InClickMethod                  (Parm, ZeroConstructor, IsPlainOldData)

void UV1Button::SetClickMethod(TEnumAsByte<EButtonClickMethod>* InClickMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1Button.SetClickMethod");

	UV1Button_SetClickMethod_Params params;
	params.InClickMethod = InClickMethod;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1Button.SetBackgroundColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor*           InBackgroundColor              (Parm, ZeroConstructor, IsPlainOldData)

void UV1Button::SetBackgroundColor(struct FLinearColor* InBackgroundColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1Button.SetBackgroundColor");

	UV1Button_SetBackgroundColor_Params params;
	params.InBackgroundColor = InBackgroundColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1Button.IsPressed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UV1Button::IsPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1Button.IsPressed");

	UV1Button_IsPressed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.V1ButtonSlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EVerticalAlignment>* InVerticalAlignment            (Parm, ZeroConstructor, IsPlainOldData)

void UV1ButtonSlot::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment>* InVerticalAlignment)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1ButtonSlot.SetVerticalAlignment");

	UV1ButtonSlot_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1ButtonSlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin*                InPadding                      (Parm, ZeroConstructor, IsPlainOldData)

void UV1ButtonSlot::SetPadding(struct FMargin* InPadding)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1ButtonSlot.SetPadding");

	UV1ButtonSlot_SetPadding_Params params;
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1ButtonSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EHorizontalAlignment>* InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData)

void UV1ButtonSlot::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment>* InHorizontalAlignment)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1ButtonSlot.SetHorizontalAlignment");

	UV1ButtonSlot_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1ComboBoxString.SetSelectedOption
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString*                Option                         (Parm, ZeroConstructor)

void UV1ComboBoxString::SetSelectedOption(struct FString* Option)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1ComboBoxString.SetSelectedOption");

	UV1ComboBoxString_SetSelectedOption_Params params;
	params.Option = Option;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1ComboBoxString.RemoveOption
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString*                Option                         (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UV1ComboBoxString::RemoveOption(struct FString* Option)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1ComboBoxString.RemoveOption");

	UV1ComboBoxString_RemoveOption_Params params;
	params.Option = Option;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.V1ComboBoxString.RefreshOptions
// (Final, Native, Public, BlueprintCallable)

void UV1ComboBoxString::RefreshOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1ComboBoxString.RefreshOptions");

	UV1ComboBoxString_RefreshOptions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1ComboBoxString.GetSelectedOption
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UV1ComboBoxString::GetSelectedOption()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1ComboBoxString.GetSelectedOption");

	UV1ComboBoxString_GetSelectedOption_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.V1ComboBoxString.GetOptionCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UV1ComboBoxString::GetOptionCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1ComboBoxString.GetOptionCount");

	UV1ComboBoxString_GetOptionCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.V1ComboBoxString.GetOptionAtIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int*                           Index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UV1ComboBoxString::GetOptionAtIndex(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1ComboBoxString.GetOptionAtIndex");

	UV1ComboBoxString_GetOptionAtIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.V1ComboBoxString.FindOptionIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString*                Option                         (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UV1ComboBoxString::FindOptionIndex(struct FString* Option)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1ComboBoxString.FindOptionIndex");

	UV1ComboBoxString_FindOptionIndex_Params params;
	params.Option = Option;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.V1ComboBoxString.ClearSelection
// (Final, Native, Public, BlueprintCallable)

void UV1ComboBoxString::ClearSelection()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1ComboBoxString.ClearSelection");

	UV1ComboBoxString_ClearSelection_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1ComboBoxString.ClearOptions
// (Final, Native, Public, BlueprintCallable)

void UV1ComboBoxString::ClearOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1ComboBoxString.ClearOptions");

	UV1ComboBoxString_ClearOptions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1ComboBoxString.AddOption
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString*                Option                         (Parm, ZeroConstructor)

void UV1ComboBoxString::AddOption(struct FString* Option)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1ComboBoxString.AddOption");

	UV1ComboBoxString_AddOption_Params params;
	params.Option = Option;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1ContextAssignAction.SetContext
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FV1ActionContext*       Context                        (ConstParm, Parm, OutParm, ReferenceParm)

void UV1ContextAssignAction::SetContext(struct FV1ActionContext* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1ContextAssignAction.SetContext");

	UV1ContextAssignAction_SetContext_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1ContextAssignAction.GetContext
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FV1ActionContext        ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)

struct FV1ActionContext UV1ContextAssignAction::GetContext()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1ContextAssignAction.GetContext");

	UV1ContextAssignAction_GetContext_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.V1CoreStatics.ReplaceMaterialWithDynamicAtIndex
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent**    primitive                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           Index                          (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstanceDynamic* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMaterialInstanceDynamic* UV1CoreStatics::STATIC_ReplaceMaterialWithDynamicAtIndex(class UPrimitiveComponent** primitive, int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1CoreStatics.ReplaceMaterialWithDynamicAtIndex");

	UV1CoreStatics_ReplaceMaterialWithDynamicAtIndex_Params params;
	params.primitive = primitive;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.V1ElementMenu.SwitchTab
// (Native, Public, BlueprintCallable)
// Parameters:
// int*                           Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UV1ElementMenu::SwitchTab(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1ElementMenu.SwitchTab");

	UV1ElementMenu_SwitchTab_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1ElementMenu.RebuildMenu
// (Final, Native, Public, BlueprintCallable)

void UV1ElementMenu::RebuildMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1ElementMenu.RebuildMenu");

	UV1ElementMenu_RebuildMenu_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1ElementMenu.OnMenuItemReleased_BP
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UWidget**                menuItem                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UV1ElementMenu::OnMenuItemReleased_BP(class UWidget** menuItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1ElementMenu.OnMenuItemReleased_BP");

	UV1ElementMenu_OnMenuItemReleased_BP_Params params;
	params.menuItem = menuItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1ElementMenu.OnMenuItemPressed_BP
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UWidget**                menuItem                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UV1ElementMenu::OnMenuItemPressed_BP(class UWidget** menuItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1ElementMenu.OnMenuItemPressed_BP");

	UV1ElementMenu_OnMenuItemPressed_BP_Params params;
	params.menuItem = menuItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1ElementMenu.OnMenuDeactivate_BP
// (Event, Protected, BlueprintEvent)

void UV1ElementMenu::OnMenuDeactivate_BP()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1ElementMenu.OnMenuDeactivate_BP");

	UV1ElementMenu_OnMenuDeactivate_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1ElementMenu.OnMenuActivate_BP
// (Event, Protected, BlueprintEvent)

void UV1ElementMenu::OnMenuActivate_BP()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1ElementMenu.OnMenuActivate_BP");

	UV1ElementMenu_OnMenuActivate_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1ElementMenu.IsActive
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool*                          includeSubMenuCheck            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UV1ElementMenu::IsActive(bool* includeSubMenuCheck)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1ElementMenu.IsActive");

	UV1ElementMenu_IsActive_Params params;
	params.includeSubMenuCheck = includeSubMenuCheck;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.V1ElementMenu.FocusMenuItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget**                itemToHighlight                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UV1ElementMenu::FocusMenuItem(class UWidget** itemToHighlight)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1ElementMenu.FocusMenuItem");

	UV1ElementMenu_FocusMenuItem_Params params;
	params.itemToHighlight = itemToHighlight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1ElementMenu.Deactivate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          destroy                        (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          activateParent                 (Parm, ZeroConstructor, IsPlainOldData)

void UV1ElementMenu::Deactivate(bool* destroy, bool* activateParent)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1ElementMenu.Deactivate");

	UV1ElementMenu_Deactivate_Params params;
	params.destroy = destroy;
	params.activateParent = activateParent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1ElementMenu.CreateSubMenu
// (Native, Public, BlueprintCallable)
// Parameters:
// class UClass**                 subMenuClass                   (Parm, ZeroConstructor, IsPlainOldData)
// class UV1ElementMenu*          ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UV1ElementMenu* UV1ElementMenu::CreateSubMenu(class UClass** subMenuClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1ElementMenu.CreateSubMenu");

	UV1ElementMenu_CreateSubMenu_Params params;
	params.subMenuClass = subMenuClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.V1ElementMenu.BackoutOfMenu
// (Native, Public, BlueprintCallable)

void UV1ElementMenu::BackoutOfMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1ElementMenu.BackoutOfMenu");

	UV1ElementMenu_BackoutOfMenu_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1ElementMenu.Activate
// (Native, Public, BlueprintCallable)

void UV1ElementMenu::Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1ElementMenu.Activate");

	UV1ElementMenu_Activate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1EventSystem.SendTo
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UV1EventBase**           evn                            (Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                Source                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Target                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UV1EventSystem::STATIC_SendTo(class UV1EventBase** evn, class UObject** Source, class AActor** Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1EventSystem.SendTo");

	UV1EventSystem_SendTo_Params params;
	params.evn = evn;
	params.Source = Source;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1EventSystem.RemoveScriptResponder
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor**                 Target                         (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 EventType                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate*        scriptDelegate                 (Parm, ZeroConstructor)

void UV1EventSystem::STATIC_RemoveScriptResponder(class AActor** Target, class UClass** EventType, struct FScriptDelegate* scriptDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1EventSystem.RemoveScriptResponder");

	UV1EventSystem_RemoveScriptResponder_Params params;
	params.Target = Target;
	params.EventType = EventType;
	params.scriptDelegate = scriptDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1EventSystem.Broadcast
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UV1EventBase**           evn                            (Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                Source                         (Parm, ZeroConstructor, IsPlainOldData)

void UV1EventSystem::STATIC_Broadcast(class UObject** WorldContextObject, class UV1EventBase** evn, class UObject** Source)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1EventSystem.Broadcast");

	UV1EventSystem_Broadcast_Params params;
	params.WorldContextObject = WorldContextObject;
	params.evn = evn;
	params.Source = Source;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1EventSystem.BindUnrealEventToV1EventForActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor**                 handlingActor                  (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 EventType                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate*        unrealDelegate                 (Parm, ZeroConstructor)

void UV1EventSystem::STATIC_BindUnrealEventToV1EventForActor(class AActor** handlingActor, class UClass** EventType, struct FScriptDelegate* unrealDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1EventSystem.BindUnrealEventToV1EventForActor");

	UV1EventSystem_BindUnrealEventToV1EventForActor_Params params;
	params.handlingActor = handlingActor;
	params.EventType = EventType;
	params.unrealDelegate = unrealDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1EventSystem.AddScriptResponder
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor**                 Target                         (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 EventType                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate*        scriptDelegate                 (Parm, ZeroConstructor)

void UV1EventSystem::STATIC_AddScriptResponder(class AActor** Target, class UClass** EventType, struct FScriptDelegate* scriptDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1EventSystem.AddScriptResponder");

	UV1EventSystem_AddScriptResponder_Params params;
	params.Target = Target;
	params.EventType = EventType;
	params.scriptDelegate = scriptDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1GameplayEffect.RemoveEffect
// (Final, Native, Public, BlueprintCallable)

void UV1GameplayEffect::RemoveEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1GameplayEffect.RemoveEffect");

	UV1GameplayEffect_RemoveEffect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1GameplayEffect.OnRep_Suppressed
// (Final, Native, Private)
// Parameters:
// bool*                          wasSuppressed                  (Parm, ZeroConstructor, IsPlainOldData)

void UV1GameplayEffect::OnRep_Suppressed(bool* wasSuppressed)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1GameplayEffect.OnRep_Suppressed");

	UV1GameplayEffect_OnRep_Suppressed_Params params;
	params.wasSuppressed = wasSuppressed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1GameplayEffect.OnRep_Duration
// (Final, Native, Private)

void UV1GameplayEffect::OnRep_Duration()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1GameplayEffect.OnRep_Duration");

	UV1GameplayEffect_OnRep_Duration_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1GameplayEffectsComponent.S_HasGameplayEffectCategory
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor**                 onActor                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag*           gameplayEffectTypeCategory     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UV1GameplayEffectsComponent::STATIC_S_HasGameplayEffectCategory(class AActor** onActor, struct FGameplayTag* gameplayEffectTypeCategory)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1GameplayEffectsComponent.S_HasGameplayEffectCategory");

	UV1GameplayEffectsComponent_S_HasGameplayEffectCategory_Params params;
	params.onActor = onActor;
	params.gameplayEffectTypeCategory = gameplayEffectTypeCategory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.V1GameplayEffectsComponent.S_HasGameplayEffect
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor**                 onActor                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag*           gameplayEffectType             (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UV1GameplayEffectsComponent::STATIC_S_HasGameplayEffect(class AActor** onActor, struct FGameplayTag* gameplayEffectType)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1GameplayEffectsComponent.S_HasGameplayEffect");

	UV1GameplayEffectsComponent_S_HasGameplayEffect_Params params;
	params.onActor = onActor;
	params.gameplayEffectType = gameplayEffectType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.V1GameplayEffectsComponent.RemoveGameplayEffects
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTag*           typeTag                        (Parm)

void UV1GameplayEffectsComponent::RemoveGameplayEffects(struct FGameplayTag* typeTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1GameplayEffectsComponent.RemoveGameplayEffects");

	UV1GameplayEffectsComponent_RemoveGameplayEffects_Params params;
	params.typeTag = typeTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1GameplayEffectsComponent.HasGameplayEffectCategory
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag*           gameplayEffectTypeCategory     (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UV1GameplayEffectsComponent::HasGameplayEffectCategory(struct FGameplayTag* gameplayEffectTypeCategory)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1GameplayEffectsComponent.HasGameplayEffectCategory");

	UV1GameplayEffectsComponent_HasGameplayEffectCategory_Params params;
	params.gameplayEffectTypeCategory = gameplayEffectTypeCategory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.V1GameplayEffectsComponent.HasGameplayEffect
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag*           gameplayEffectTypeTag          (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UV1GameplayEffectsComponent::HasGameplayEffect(struct FGameplayTag* gameplayEffectTypeTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1GameplayEffectsComponent.HasGameplayEffect");

	UV1GameplayEffectsComponent_HasGameplayEffect_Params params;
	params.gameplayEffectTypeTag = gameplayEffectTypeTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.V1GameplayEffectsComponent.AddGenericGameplayEffect
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FV1GameplayEffectSpec*  specification                  (ConstParm, Parm, OutParm, ReferenceParm)
// struct FV1AttributeInstigator* Instigator                     (ConstParm, Parm, OutParm, ReferenceParm)
// class UV1GameplayEffect*       ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UV1GameplayEffect* UV1GameplayEffectsComponent::AddGenericGameplayEffect(struct FV1GameplayEffectSpec* specification, struct FV1AttributeInstigator* Instigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1GameplayEffectsComponent.AddGenericGameplayEffect");

	UV1GameplayEffectsComponent_AddGenericGameplayEffect_Params params;
	params.specification = specification;
	params.Instigator = Instigator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.V1GameplayEffectsComponent.AddGameplayEffect
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UClass**                 EffectClass                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FV1AttributeInstigator* Instigator                     (ConstParm, Parm, OutParm, ReferenceParm)
// class UV1GameplayEffect*       ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UV1GameplayEffect* UV1GameplayEffectsComponent::AddGameplayEffect(class UClass** EffectClass, struct FV1AttributeInstigator* Instigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1GameplayEffectsComponent.AddGameplayEffect");

	UV1GameplayEffectsComponent_AddGameplayEffect_Params params;
	params.EffectClass = EffectClass;
	params.Instigator = Instigator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.V1GameplayEffectsInterface.GetGameplayEffectsComponent
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UV1GameplayEffectsComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UV1GameplayEffectsComponent* UV1GameplayEffectsInterface::GetGameplayEffectsComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1GameplayEffectsInterface.GetGameplayEffectsComponent");

	UV1GameplayEffectsInterface_GetGameplayEffectsComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.V1GameplayTask.Multicast_OnResume
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)

void UV1GameplayTask::Multicast_OnResume()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1GameplayTask.Multicast_OnResume");

	UV1GameplayTask_Multicast_OnResume_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1GameplayTask.Multicast_OnPause
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)

void UV1GameplayTask::Multicast_OnPause()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1GameplayTask.Multicast_OnPause");

	UV1GameplayTask_Multicast_OnPause_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1GameViewportClient.IsForcePCControls
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UV1GameViewportClient::IsForcePCControls()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1GameViewportClient.IsForcePCControls");

	UV1GameViewportClient_IsForcePCControls_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.V1GameViewportClient.ForcePCControls
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UV1GameViewportClient::ForcePCControls(bool* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1GameViewportClient.ForcePCControls");

	UV1GameViewportClient_ForcePCControls_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1GlyphOverlay.OnGlyphImageLoaded
// (Native, Protected)

void UV1GlyphOverlay::OnGlyphImageLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1GlyphOverlay.OnGlyphImageLoaded");

	UV1GlyphOverlay_OnGlyphImageLoaded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1GlyphOverlay.OnGlyphImageFail
// (Native, Protected)
// Parameters:
// struct FKey*                   Key                            (Parm)

void UV1GlyphOverlay::OnGlyphImageFail(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1GlyphOverlay.OnGlyphImageFail");

	UV1GlyphOverlay_OnGlyphImageFail_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1GlyphOverlay.OnActionUnbound
// (Native, Protected)

void UV1GlyphOverlay::OnActionUnbound()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1GlyphOverlay.OnActionUnbound");

	UV1GlyphOverlay_OnActionUnbound_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1GlyphOverlayUserWidget.OnGlyphImageLoaded
// (Native, Protected)

void UV1GlyphOverlayUserWidget::OnGlyphImageLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1GlyphOverlayUserWidget.OnGlyphImageLoaded");

	UV1GlyphOverlayUserWidget_OnGlyphImageLoaded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1GlyphOverlayUserWidget.OnGlyphImageFail
// (Native, Protected)
// Parameters:
// struct FKey*                   Key                            (Parm)

void UV1GlyphOverlayUserWidget::OnGlyphImageFail(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1GlyphOverlayUserWidget.OnGlyphImageFail");

	UV1GlyphOverlayUserWidget_OnGlyphImageFail_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1GlyphOverlayUserWidget.OnActionUnbound
// (Native, Protected)

void UV1GlyphOverlayUserWidget::OnActionUnbound()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1GlyphOverlayUserWidget.OnActionUnbound");

	UV1GlyphOverlayUserWidget_OnActionUnbound_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1HorizontalBox.AddChildToHorizontalBox
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget**                Content                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UV1HorizontalBoxSlot*    ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UV1HorizontalBoxSlot* UV1HorizontalBox::AddChildToHorizontalBox(class UWidget** Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1HorizontalBox.AddChildToHorizontalBox");

	UV1HorizontalBox_AddChildToHorizontalBox_Params params;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.V1HorizontalBoxSlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EVerticalAlignment>* InVerticalAlignment            (Parm, ZeroConstructor, IsPlainOldData)

void UV1HorizontalBoxSlot::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment>* InVerticalAlignment)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1HorizontalBoxSlot.SetVerticalAlignment");

	UV1HorizontalBoxSlot_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1HorizontalBoxSlot.SetSize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateChildSize*        InSize                         (Parm)

void UV1HorizontalBoxSlot::SetSize(struct FSlateChildSize* InSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1HorizontalBoxSlot.SetSize");

	UV1HorizontalBoxSlot_SetSize_Params params;
	params.InSize = InSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1HorizontalBoxSlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin*                InPadding                      (Parm, ZeroConstructor, IsPlainOldData)

void UV1HorizontalBoxSlot::SetPadding(struct FMargin* InPadding)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1HorizontalBoxSlot.SetPadding");

	UV1HorizontalBoxSlot_SetPadding_Params params;
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1HorizontalBoxSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EHorizontalAlignment>* InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData)

void UV1HorizontalBoxSlot::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment>* InHorizontalAlignment)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1HorizontalBoxSlot.SetHorizontalAlignment");

	UV1HorizontalBoxSlot_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1MenuUserWidget.SetWantsToBeFocusedFirst
// (Native, Public, BlueprintCallable)
// Parameters:
// bool*                          wantsToBeFocusedFirst          (Parm, ZeroConstructor, IsPlainOldData)

void UV1MenuUserWidget::SetWantsToBeFocusedFirst(bool* wantsToBeFocusedFirst)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1MenuUserWidget.SetWantsToBeFocusedFirst");

	UV1MenuUserWidget_SetWantsToBeFocusedFirst_Params params;
	params.wantsToBeFocusedFirst = wantsToBeFocusedFirst;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1MenuUserWidget.OnUnHoveredBP
// (Event, Public, BlueprintEvent)

void UV1MenuUserWidget::OnUnHoveredBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1MenuUserWidget.OnUnHoveredBP");

	UV1MenuUserWidget_OnUnHoveredBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1MenuUserWidget.OnReleasedBP
// (Event, Public, BlueprintEvent)

void UV1MenuUserWidget::OnReleasedBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1MenuUserWidget.OnReleasedBP");

	UV1MenuUserWidget_OnReleasedBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1MenuUserWidget.OnPressedBP
// (Event, Public, BlueprintEvent)

void UV1MenuUserWidget::OnPressedBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1MenuUserWidget.OnPressedBP");

	UV1MenuUserWidget_OnPressedBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1MenuUserWidget.OnHoveredBP
// (Event, Public, BlueprintEvent)

void UV1MenuUserWidget::OnHoveredBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1MenuUserWidget.OnHoveredBP");

	UV1MenuUserWidget_OnHoveredBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1MenuUserWidget.OnFocusReceivedBP
// (Event, Public, BlueprintEvent)

void UV1MenuUserWidget::OnFocusReceivedBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1MenuUserWidget.OnFocusReceivedBP");

	UV1MenuUserWidget_OnFocusReceivedBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1MenuUserWidget.OnFocusLostBP
// (Event, Public, BlueprintEvent)

void UV1MenuUserWidget::OnFocusLostBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1MenuUserWidget.OnFocusLostBP");

	UV1MenuUserWidget_OnFocusLostBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1KeyGlyphImage.UpdateImage
// (Native, Public, BlueprintCallable)

void UV1KeyGlyphImage::UpdateImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1KeyGlyphImage.UpdateImage");

	UV1KeyGlyphImage_UpdateImage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1LongPressUserWidget.OnStartLongPressBP
// (Event, Protected, BlueprintEvent)

void UV1LongPressUserWidget::OnStartLongPressBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1LongPressUserWidget.OnStartLongPressBP");

	UV1LongPressUserWidget_OnStartLongPressBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1LongPressUserWidget.OnProgressUpdatedBP
// (Event, Protected, BlueprintEvent)
// Parameters:
// float*                         percent                        (Parm, ZeroConstructor, IsPlainOldData)

void UV1LongPressUserWidget::OnProgressUpdatedBP(float* percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1LongPressUserWidget.OnProgressUpdatedBP");

	UV1LongPressUserWidget_OnProgressUpdatedBP_Params params;
	params.percent = percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1OptionsButton.OnUnhoverd
// (Final, Native, Protected)

void UV1OptionsButton::OnUnhoverd()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1OptionsButton.OnUnhoverd");

	UV1OptionsButton_OnUnhoverd_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1OptionsButton.OnInputChange
// (Final, Native, Protected)
// Parameters:
// class APlayerController**      PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// EeV1PlayerInputType*           inputType                      (Parm, ZeroConstructor, IsPlainOldData)

void UV1OptionsButton::OnInputChange(class APlayerController** PlayerController, EeV1PlayerInputType* inputType)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1OptionsButton.OnInputChange");

	UV1OptionsButton_OnInputChange_Params params;
	params.PlayerController = PlayerController;
	params.inputType = inputType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1OptionsButton.OnHovered
// (Final, Native, Protected)

void UV1OptionsButton::OnHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1OptionsButton.OnHovered");

	UV1OptionsButton_OnHovered_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1PlayerController.GetCurrentPlayerInputType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EeV1PlayerInputType            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EeV1PlayerInputType AV1PlayerController::GetCurrentPlayerInputType()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1PlayerController.GetCurrentPlayerInputType");

	AV1PlayerController_GetCurrentPlayerInputType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.V1RefocusUserWidget.SetWidgetToFocus
// (Native, Public, BlueprintCallable)
// Parameters:
// class UWidget**                WidgetToFocus                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UV1RefocusUserWidget::SetWidgetToFocus(class UWidget** WidgetToFocus)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1RefocusUserWidget.SetWidgetToFocus");

	UV1RefocusUserWidget_SetWidgetToFocus_Params params;
	params.WidgetToFocus = WidgetToFocus;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1ScreenMenuActor.SpawnElementMenu
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWorld**                 World                          (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 menuClass                      (Parm, ZeroConstructor, IsPlainOldData)
// class AV1PlayerController**    m_owningPlayer                 (Parm, ZeroConstructor, IsPlainOldData)
// class AV1ScreenMenuActor*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AV1ScreenMenuActor* AV1ScreenMenuActor::STATIC_SpawnElementMenu(class UWorld** World, class UClass** menuClass, class AV1PlayerController** m_owningPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1ScreenMenuActor.SpawnElementMenu");

	AV1ScreenMenuActor_SpawnElementMenu_Params params;
	params.World = World;
	params.menuClass = menuClass;
	params.m_owningPlayer = m_owningPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.V1ScreenMenuActor.IsElementMenuActive
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AV1ScreenMenuActor::IsElementMenuActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1ScreenMenuActor.IsElementMenuActive");

	AV1ScreenMenuActor_IsElementMenuActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.V1ScreenMenuActor.DeactivateElementMenu
// (Final, Native, Public, BlueprintCallable)

void AV1ScreenMenuActor::DeactivateElementMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1ScreenMenuActor.DeactivateElementMenu");

	AV1ScreenMenuActor_DeactivateElementMenu_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1ScreenMenuActor.ActivateElementMenu
// (Final, Native, Public, BlueprintCallable)

void AV1ScreenMenuActor::ActivateElementMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1ScreenMenuActor.ActivateElementMenu");

	AV1ScreenMenuActor_ActivateElementMenu_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1ScrollBox.SetScrollOffset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         NewScrollOffset                (Parm, ZeroConstructor, IsPlainOldData)

void UV1ScrollBox::SetScrollOffset(float* NewScrollOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1ScrollBox.SetScrollOffset");

	UV1ScrollBox_SetScrollOffset_Params params;
	params.NewScrollOffset = NewScrollOffset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1ScrollBox.SetScrollBarVisibility
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// ESlateVisibility*              NewScrollBarVisibility         (Parm, ZeroConstructor, IsPlainOldData)

void UV1ScrollBox::SetScrollBarVisibility(ESlateVisibility* NewScrollBarVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1ScrollBox.SetScrollBarVisibility");

	UV1ScrollBox_SetScrollBarVisibility_Params params;
	params.NewScrollBarVisibility = NewScrollBarVisibility;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1ScrollBox.SetScrollbarThickness
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D*              NewScrollbarThickness          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UV1ScrollBox::SetScrollbarThickness(struct FVector2D* NewScrollbarThickness)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1ScrollBox.SetScrollbarThickness");

	UV1ScrollBox_SetScrollbarThickness_Params params;
	params.NewScrollbarThickness = NewScrollbarThickness;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1ScrollBox.SetOrientation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EOrientation>*     NewOrientation                 (Parm, ZeroConstructor, IsPlainOldData)

void UV1ScrollBox::SetOrientation(TEnumAsByte<EOrientation>* NewOrientation)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1ScrollBox.SetOrientation");

	UV1ScrollBox_SetOrientation_Params params;
	params.NewOrientation = NewOrientation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1ScrollBox.SetAlwaysShowScrollbar
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          NewAlwaysShowScrollbar         (Parm, ZeroConstructor, IsPlainOldData)

void UV1ScrollBox::SetAlwaysShowScrollbar(bool* NewAlwaysShowScrollbar)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1ScrollBox.SetAlwaysShowScrollbar");

	UV1ScrollBox_SetAlwaysShowScrollbar_Params params;
	params.NewAlwaysShowScrollbar = NewAlwaysShowScrollbar;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1ScrollBox.SetAllowOverscroll
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          NewAllowOverscroll             (Parm, ZeroConstructor, IsPlainOldData)

void UV1ScrollBox::SetAllowOverscroll(bool* NewAllowOverscroll)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1ScrollBox.SetAllowOverscroll");

	UV1ScrollBox_SetAllowOverscroll_Params params;
	params.NewAllowOverscroll = NewAllowOverscroll;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1ScrollBox.ScrollWidgetIntoView
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget**                WidgetToFind                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          AnimateScroll                  (Parm, ZeroConstructor, IsPlainOldData)
// EV1DescendantScrollDestination* ScrollDestination              (Parm, ZeroConstructor, IsPlainOldData)

void UV1ScrollBox::ScrollWidgetIntoView(class UWidget** WidgetToFind, bool* AnimateScroll, EV1DescendantScrollDestination* ScrollDestination)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1ScrollBox.ScrollWidgetIntoView");

	UV1ScrollBox_ScrollWidgetIntoView_Params params;
	params.WidgetToFind = WidgetToFind;
	params.AnimateScroll = AnimateScroll;
	params.ScrollDestination = ScrollDestination;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1ScrollBox.ScrollToStart
// (Final, Native, Public, BlueprintCallable)

void UV1ScrollBox::ScrollToStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1ScrollBox.ScrollToStart");

	UV1ScrollBox_ScrollToStart_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1ScrollBox.ScrollToEnd
// (Final, Native, Public, BlueprintCallable)

void UV1ScrollBox::ScrollToEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1ScrollBox.ScrollToEnd");

	UV1ScrollBox_ScrollToEnd_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1ScrollBox.GetViewOffsetFraction
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UV1ScrollBox::GetViewOffsetFraction()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1ScrollBox.GetViewOffsetFraction");

	UV1ScrollBox_GetViewOffsetFraction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.V1ScrollBox.GetScrollOffset
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UV1ScrollBox::GetScrollOffset()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1ScrollBox.GetScrollOffset");

	UV1ScrollBox_GetScrollOffset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.V1ScrollBoxSlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EVerticalAlignment>* InVerticalAlignment            (Parm, ZeroConstructor, IsPlainOldData)

void UV1ScrollBoxSlot::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment>* InVerticalAlignment)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1ScrollBoxSlot.SetVerticalAlignment");

	UV1ScrollBoxSlot_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1ScrollBoxSlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin*                InPadding                      (Parm, ZeroConstructor, IsPlainOldData)

void UV1ScrollBoxSlot::SetPadding(struct FMargin* InPadding)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1ScrollBoxSlot.SetPadding");

	UV1ScrollBoxSlot_SetPadding_Params params;
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1ScrollBoxSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EHorizontalAlignment>* InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData)

void UV1ScrollBoxSlot::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment>* InHorizontalAlignment)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1ScrollBoxSlot.SetHorizontalAlignment");

	UV1ScrollBoxSlot_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1Slider.SetValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UV1Slider::SetValue(float* InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1Slider.SetValue");

	UV1Slider_SetValue_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1Slider.SetStepSize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UV1Slider::SetStepSize(float* InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1Slider.SetStepSize");

	UV1Slider_SetStepSize_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1Slider.SetSliderHandleColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor*           InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UV1Slider::SetSliderHandleColor(struct FLinearColor* InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1Slider.SetSliderHandleColor");

	UV1Slider_SetSliderHandleColor_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1Slider.SetSliderBarColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor*           InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UV1Slider::SetSliderBarColor(struct FLinearColor* InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1Slider.SetSliderBarColor");

	UV1Slider_SetSliderBarColor_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1Slider.SetLocked
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UV1Slider::SetLocked(bool* InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1Slider.SetLocked");

	UV1Slider_SetLocked_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1Slider.SetIndentHandle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UV1Slider::SetIndentHandle(bool* InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1Slider.SetIndentHandle");

	UV1Slider_SetIndentHandle_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1Slider.GetValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UV1Slider::GetValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1Slider.GetValue");

	UV1Slider_GetValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.V1StatusAttribute.OnRep_StatusEnabled
// (Final, Native, Private)

void UV1StatusAttribute::OnRep_StatusEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1StatusAttribute.OnRep_StatusEnabled");

	UV1StatusAttribute_OnRep_StatusEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1StatusAttribute.GetStatus
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UV1StatusAttribute::GetStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1StatusAttribute.GetStatus");

	UV1StatusAttribute_GetStatus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.V1ToggleButton.SetIsChecked
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          InIsChecked                    (Parm, ZeroConstructor, IsPlainOldData)

void UV1ToggleButton::SetIsChecked(bool* InIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1ToggleButton.SetIsChecked");

	UV1ToggleButton_SetIsChecked_Params params;
	params.InIsChecked = InIsChecked;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1ToggleButton.SetCheckedState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// ECheckBoxState*                InCheckedState                 (Parm, ZeroConstructor, IsPlainOldData)

void UV1ToggleButton::SetCheckedState(ECheckBoxState* InCheckedState)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1ToggleButton.SetCheckedState");

	UV1ToggleButton_SetCheckedState_Params params;
	params.InCheckedState = InCheckedState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1ToggleButton.IsPressed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UV1ToggleButton::IsPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1ToggleButton.IsPressed");

	UV1ToggleButton_IsPressed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.V1ToggleButton.IsChecked
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UV1ToggleButton::IsChecked()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1ToggleButton.IsChecked");

	UV1ToggleButton_IsChecked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.V1ToggleButton.GetCheckedState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// ECheckBoxState                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ECheckBoxState UV1ToggleButton::GetCheckedState()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1ToggleButton.GetCheckedState");

	UV1ToggleButton_GetCheckedState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.V1TabButton.OnMenuTabSwitch
// (Native, Public)
// Parameters:
// int*                           Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UV1TabButton::OnMenuTabSwitch(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1TabButton.OnMenuTabSwitch");

	UV1TabButton_OnMenuTabSwitch_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1TextBlock.SetText
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FText*                  InText                         (Parm)

void UV1TextBlock::SetText(struct FText* InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1TextBlock.SetText");

	UV1TextBlock_SetText_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1TextBlock.SetShadowOffset
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D*              InShadowOffset                 (Parm, ZeroConstructor, IsPlainOldData)

void UV1TextBlock::SetShadowOffset(struct FVector2D* InShadowOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1TextBlock.SetShadowOffset");

	UV1TextBlock_SetShadowOffset_Params params;
	params.InShadowOffset = InShadowOffset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1TextBlock.SetShadowColorAndOpacity
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor*           InShadowColorAndOpacity        (Parm, ZeroConstructor, IsPlainOldData)

void UV1TextBlock::SetShadowColorAndOpacity(struct FLinearColor* InShadowColorAndOpacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1TextBlock.SetShadowColorAndOpacity");

	UV1TextBlock_SetShadowColorAndOpacity_Params params;
	params.InShadowColorAndOpacity = InShadowColorAndOpacity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1TextBlock.SetOpacity
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         InOpacity                      (Parm, ZeroConstructor, IsPlainOldData)

void UV1TextBlock::SetOpacity(float* InOpacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1TextBlock.SetOpacity");

	UV1TextBlock_SetOpacity_Params params;
	params.InOpacity = InOpacity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1TextBlock.SetMinDesiredWidth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         InMinDesiredWidth              (Parm, ZeroConstructor, IsPlainOldData)

void UV1TextBlock::SetMinDesiredWidth(float* InMinDesiredWidth)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1TextBlock.SetMinDesiredWidth");

	UV1TextBlock_SetMinDesiredWidth_Params params;
	params.InMinDesiredWidth = InMinDesiredWidth;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1TextBlock.SetJustification
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<ETextJustify>*     InJustification                (Parm, ZeroConstructor, IsPlainOldData)

void UV1TextBlock::SetJustification(TEnumAsByte<ETextJustify>* InJustification)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1TextBlock.SetJustification");

	UV1TextBlock_SetJustification_Params params;
	params.InJustification = InJustification;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1TextBlock.SetFont
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateFontInfo*         InFontInfo                     (Parm)

void UV1TextBlock::SetFont(struct FSlateFontInfo* InFontInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1TextBlock.SetFont");

	UV1TextBlock_SetFont_Params params;
	params.InFontInfo = InFontInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1TextBlock.SetColorAndOpacity
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateColor*            InColorAndOpacity              (Parm)

void UV1TextBlock::SetColorAndOpacity(struct FSlateColor* InColorAndOpacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1TextBlock.SetColorAndOpacity");

	UV1TextBlock_SetColorAndOpacity_Params params;
	params.InColorAndOpacity = InColorAndOpacity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1TextBlock.SetAutoWrapText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          InAutoTextWrap                 (Parm, ZeroConstructor, IsPlainOldData)

void UV1TextBlock::SetAutoWrapText(bool* InAutoTextWrap)
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1TextBlock.SetAutoWrapText");

	UV1TextBlock_SetAutoWrapText_Params params;
	params.InAutoTextWrap = InAutoTextWrap;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1TextBlock.GetText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UV1TextBlock::GetText()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1TextBlock.GetText");

	UV1TextBlock_GetText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.V1TextBlock.GetDynamicOutlineMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInstanceDynamic* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMaterialInstanceDynamic* UV1TextBlock::GetDynamicOutlineMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1TextBlock.GetDynamicOutlineMaterial");

	UV1TextBlock_GetDynamicOutlineMaterial_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.V1TextBlock.GetDynamicFontMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInstanceDynamic* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMaterialInstanceDynamic* UV1TextBlock::GetDynamicFontMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1TextBlock.GetDynamicFontMaterial");

	UV1TextBlock_GetDynamicFontMaterial_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// DelegateFunction V1CoreRuntime.V1TriggerVolume.OnEndTriggerOverlap__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// struct FHitResult*             HitResult                      (Parm, IsPlainOldData)

void AV1TriggerVolume::OnEndTriggerOverlap__DelegateSignature(struct FHitResult* HitResult)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction V1CoreRuntime.V1TriggerVolume.OnEndTriggerOverlap__DelegateSignature");

	AV1TriggerVolume_OnEndTriggerOverlap__DelegateSignature_Params params;
	params.HitResult = HitResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction V1CoreRuntime.V1TriggerVolume.OnBeginTriggerOverlap__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// struct FHitResult*             HitResult                      (Parm, IsPlainOldData)

void AV1TriggerVolume::OnBeginTriggerOverlap__DelegateSignature(struct FHitResult* HitResult)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction V1CoreRuntime.V1TriggerVolume.OnBeginTriggerOverlap__DelegateSignature");

	AV1TriggerVolume_OnBeginTriggerOverlap__DelegateSignature_Params params;
	params.HitResult = HitResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1TriggerVolume.GetV1OverlapComponent
// (Native, Public, BlueprintCallable)
// Parameters:
// class UV1OverlapComponent*     ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UV1OverlapComponent* AV1TriggerVolume::GetV1OverlapComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1TriggerVolume.GetV1OverlapComponent");

	AV1TriggerVolume_GetV1OverlapComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function V1CoreRuntime.V1AbilityTask.Multicast_OnResume
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)

void UV1AbilityTask::Multicast_OnResume()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1AbilityTask.Multicast_OnResume");

	UV1AbilityTask_Multicast_OnResume_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function V1CoreRuntime.V1AbilityTask.Multicast_OnPause
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)

void UV1AbilityTask::Multicast_OnPause()
{
	static auto fn = UObject::FindObject<UFunction>("Function V1CoreRuntime.V1AbilityTask.Multicast_OnPause");

	UV1AbilityTask_Multicast_OnPause_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
