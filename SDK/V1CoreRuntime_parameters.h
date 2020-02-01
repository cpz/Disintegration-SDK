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

// Function V1CoreRuntime.V1ActionBase.Unpause
struct UV1ActionBase_Unpause_Params
{
	class UV1ActionBase*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.V1ActionBase.Unblock
struct UV1ActionBase_Unblock_Params
{
	class UV1ActionBase*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.V1ActionBase.Tick
struct UV1ActionBase_Tick_Params
{
	float*                                             dt;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function V1CoreRuntime.V1ActionBase.Start
struct UV1ActionBase_Start_Params
{
};

// Function V1CoreRuntime.V1ActionBase.SetStarted
struct UV1ActionBase_SetStarted_Params
{
	bool*                                              Started;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function V1CoreRuntime.V1ActionBase.SetPaused
struct UV1ActionBase_SetPaused_Params
{
	bool*                                              paused;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function V1CoreRuntime.V1ActionBase.SetFinished
struct UV1ActionBase_SetFinished_Params
{
	bool*                                              finished;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function V1CoreRuntime.V1ActionBase.SetBlocking
struct UV1ActionBase_SetBlocking_Params
{
	bool*                                              blocking;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function V1CoreRuntime.V1ActionBase.Reset
struct UV1ActionBase_Reset_Params
{
};

// Function V1CoreRuntime.V1ActionBase.Pause
struct UV1ActionBase_Pause_Params
{
	class UV1ActionBase*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.V1ActionBase.IsStarted
struct UV1ActionBase_IsStarted_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.V1ActionBase.IsPaused
struct UV1ActionBase_IsPaused_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.V1ActionBase.IsFinished
struct UV1ActionBase_IsFinished_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.V1ActionBase.IsBlocking
struct UV1ActionBase_IsBlocking_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.V1ActionBase.Complete
struct UV1ActionBase_Complete_Params
{
};

// Function V1CoreRuntime.V1ActionBase.Block
struct UV1ActionBase_Block_Params
{
	class UV1ActionBase*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.V1IntervalAction.Update
struct UV1IntervalAction_Update_Params
{
	float*                                             dt;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function V1CoreRuntime.V1IntervalAction.SetActionLength
struct UV1IntervalAction_SetActionLength_Params
{
	float*                                             newLength;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function V1CoreRuntime.V1IntervalAction.PreBegin
struct UV1IntervalAction_PreBegin_Params
{
};

// Function V1CoreRuntime.V1IntervalAction.GetInterval
struct UV1IntervalAction_GetInterval_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.V1IntervalAction.GetExecutionTime
struct UV1IntervalAction_GetExecutionTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.V1IntervalAction.GetActionLength
struct UV1IntervalAction_GetActionLength_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.V1IntervalAction.End
struct UV1IntervalAction_End_Params
{
};

// Function V1CoreRuntime.V1IntervalAction.Begin
struct UV1IntervalAction_Begin_Params
{
};

// Function V1CoreRuntime.IntervalActorAction.SetActor
struct UIntervalActorAction_SetActor_Params
{
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function V1CoreRuntime.IntervalActorAction.GetActor
struct UIntervalActorAction_GetActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.ActionActorTransformBase.SetLocalSpace
struct UActionActorTransformBase_SetLocalSpace_Params
{
	bool*                                              localSpace;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function V1CoreRuntime.ActionActorTransformBase.IsLocalSpace
struct UActionActorTransformBase_IsLocalSpace_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.ActionActorRotateBy.SetRotationDelta
struct UActionActorRotateBy_SetRotationDelta_Params
{
	struct FRotator*                                   rotationDelta;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function V1CoreRuntime.ActionActorRotateBy.GetRotationDelta
struct UActionActorRotateBy_GetRotationDelta_Params
{
	struct FRotator                                    ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData)
};

// Function V1CoreRuntime.ActionActorRotateBy.CreateAction_ActorRotateBy
struct UActionActorRotateBy_CreateAction_ActorRotateBy_Params
{
	class UObject**                                    Outer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Local;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator*                                   rotationDelta;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float*                                             Length;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UActionActorRotateBy*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.ActionActorRotateTo.SetRotation
struct UActionActorRotateTo_SetRotation_Params
{
	struct FRotator*                                   Rotation;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function V1CoreRuntime.ActionActorRotateTo.GetRotationDelta
struct UActionActorRotateTo_GetRotationDelta_Params
{
	struct FRotator                                    ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData)
};

// Function V1CoreRuntime.ActionActorRotateTo.CreateAction_ActorRotateTo
struct UActionActorRotateTo_CreateAction_ActorRotateTo_Params
{
	class UObject**                                    Outer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Local;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator*                                   Rotation;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float*                                             Length;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UActionActorRotateTo*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.ActionActorScaleBy.SetScaleDelta
struct UActionActorScaleBy_SetScaleDelta_Params
{
	struct FVector*                                    scaleDelta;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function V1CoreRuntime.ActionActorScaleBy.GetScaleDelta
struct UActionActorScaleBy_GetScaleDelta_Params
{
	struct FVector                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData)
};

// Function V1CoreRuntime.ActionActorScaleBy.CreateAction_ActorScaleBy
struct UActionActorScaleBy_CreateAction_ActorScaleBy_Params
{
	class UObject**                                    Outer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Local;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    scaleDelta;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float*                                             Length;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UActionActorScaleBy*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.ActionActorScaleTo.SetScale
struct UActionActorScaleTo_SetScale_Params
{
	struct FVector*                                    Scale;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function V1CoreRuntime.ActionActorScaleTo.GetScale
struct UActionActorScaleTo_GetScale_Params
{
	struct FVector                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData)
};

// Function V1CoreRuntime.ActionActorScaleTo.CreateAction_ActorScaleTo
struct UActionActorScaleTo_CreateAction_ActorScaleTo_Params
{
	class UObject**                                    Outer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Local;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Scale;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float*                                             Length;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UActionActorScaleTo*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.ActionActorTranslateBy.SetPositionDelta
struct UActionActorTranslateBy_SetPositionDelta_Params
{
	struct FVector*                                    positionDelta;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function V1CoreRuntime.ActionActorTranslateBy.GetPositionDelta
struct UActionActorTranslateBy_GetPositionDelta_Params
{
	struct FVector                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData)
};

// Function V1CoreRuntime.ActionActorTranslateBy.CreateAction_ActorTranslateBy
struct UActionActorTranslateBy_CreateAction_ActorTranslateBy_Params
{
	class UObject**                                    Outer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Local;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    translationDelta;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float*                                             Length;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UActionActorTranslateBy*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.ActionActorTranslateTo.SetPosition
struct UActionActorTranslateTo_SetPosition_Params
{
	struct FVector*                                    Position;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function V1CoreRuntime.ActionActorTranslateTo.GetPosition
struct UActionActorTranslateTo_GetPosition_Params
{
	struct FVector                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData)
};

// Function V1CoreRuntime.ActionActorTranslateTo.CreateAction_ActorTranslateTo
struct UActionActorTranslateTo_CreateAction_ActorTranslateTo_Params
{
	class UObject**                                    Outer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Local;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Translation;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float*                                             Length;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UActionActorTranslateTo*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.V1InstantAction.PreExecute
struct UV1InstantAction_PreExecute_Params
{
};

// Function V1CoreRuntime.V1InstantAction.PostExecute
struct UV1InstantAction_PostExecute_Params
{
};

// Function V1CoreRuntime.V1InstantAction.Execute
struct UV1InstantAction_Execute_Params
{
};

// Function V1CoreRuntime.InstantActorAction.SetActor
struct UInstantActorAction_SetActor_Params
{
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function V1CoreRuntime.InstantActorAction.GetActor
struct UInstantActorAction_GetActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.ActionChangeActorTransform.SetTransformDelta
struct UActionChangeActorTransform_SetTransformDelta_Params
{
	struct FTransform*                                 transformDelta;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function V1CoreRuntime.ActionChangeActorTransform.SetScaleDelta
struct UActionChangeActorTransform_SetScaleDelta_Params
{
	struct FVector*                                    scaleDelta;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function V1CoreRuntime.ActionChangeActorTransform.SetRotationDelta
struct UActionChangeActorTransform_SetRotationDelta_Params
{
	struct FRotator*                                   rotationDelta;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function V1CoreRuntime.ActionChangeActorTransform.SetPositionDelta
struct UActionChangeActorTransform_SetPositionDelta_Params
{
	struct FVector*                                    positionDelta;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function V1CoreRuntime.ActionChangeActorTransform.SetLocalSpace
struct UActionChangeActorTransform_SetLocalSpace_Params
{
	bool*                                              localSpace;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function V1CoreRuntime.ActionChangeActorTransform.IsLocalSpace
struct UActionChangeActorTransform_IsLocalSpace_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.ActionChangeActorTransform.GetTransformDelta
struct UActionChangeActorTransform_GetTransformDelta_Params
{
	struct FTransform                                  ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData)
};

// Function V1CoreRuntime.ActionChangeActorTransform.GetScaleDelta
struct UActionChangeActorTransform_GetScaleDelta_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.ActionChangeActorTransform.GetRotationDelta
struct UActionChangeActorTransform_GetRotationDelta_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.ActionChangeActorTransform.GetPositionDelta
struct UActionChangeActorTransform_GetPositionDelta_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.ActionChangeActorTransform.CreateAction_ChangeActorTransform
struct UActionChangeActorTransform_CreateAction_ChangeActorTransform_Params
{
	class UObject**                                    Outer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Local;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform*                                 transformDelta;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class UActionChangeActorTransform*                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.InstantComponentAction.SetComponentByActor
struct UInstantComponentAction_SetComponentByActor_Params
{
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      componentName;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function V1CoreRuntime.InstantComponentAction.SetComponent
struct UInstantComponentAction_SetComponent_Params
{
	class UActorComponent**                            Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function V1CoreRuntime.InstantComponentAction.SetActor
struct UInstantComponentAction_SetActor_Params
{
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function V1CoreRuntime.InstantComponentAction.GetComponent
struct UInstantComponentAction_GetComponent_Params
{
	class UActorComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function V1CoreRuntime.ActionComponentInstantTransformBy.SetTransform
struct UActionComponentInstantTransformBy_SetTransform_Params
{
	struct FTransform*                                 Transform;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function V1CoreRuntime.ActionComponentInstantTransformBy.SetLocal
struct UActionComponentInstantTransformBy_SetLocal_Params
{
	bool*                                              Local;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function V1CoreRuntime.ActionComponentInstantTransformBy.GetTransform
struct UActionComponentInstantTransformBy_GetTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData)
};

// Function V1CoreRuntime.ActionComponentInstantTransformBy.GetLocal
struct UActionComponentInstantTransformBy_GetLocal_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.ActionComponentInstantTransformBy.CreateAction_ComponentInstantTransformTo
struct UActionComponentInstantTransformBy_CreateAction_ComponentInstantTransformTo_Params
{
	class UObject**                                    Outer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent**                            Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool*                                              Local;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform*                                 Transform;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class UActionComponentInstantTransformBy*          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.ActionComponentInstantTransformTo.SetTransform
struct UActionComponentInstantTransformTo_SetTransform_Params
{
	struct FTransform*                                 Transform;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function V1CoreRuntime.ActionComponentInstantTransformTo.SetLocal
struct UActionComponentInstantTransformTo_SetLocal_Params
{
	bool*                                              Local;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function V1CoreRuntime.ActionComponentInstantTransformTo.GetTransform
struct UActionComponentInstantTransformTo_GetTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData)
};

// Function V1CoreRuntime.ActionComponentInstantTransformTo.GetLocal
struct UActionComponentInstantTransformTo_GetLocal_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.ActionComponentInstantTransformTo.CreateAction_ComponentInstantTransformTo
struct UActionComponentInstantTransformTo_CreateAction_ComponentInstantTransformTo_Params
{
	class UObject**                                    Outer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent**                            Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool*                                              Local;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform*                                 Transform;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class UActionComponentInstantTransformTo*          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.IntervalComponentAction.SetComponentByActor
struct UIntervalComponentAction_SetComponentByActor_Params
{
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      componentName;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function V1CoreRuntime.IntervalComponentAction.SetComponent
struct UIntervalComponentAction_SetComponent_Params
{
	class UActorComponent**                            Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function V1CoreRuntime.IntervalComponentAction.SetActor
struct UIntervalComponentAction_SetActor_Params
{
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function V1CoreRuntime.IntervalComponentAction.GetComponent
struct UIntervalComponentAction_GetComponent_Params
{
	class UActorComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function V1CoreRuntime.ActionComponentTransformBase.SetLocalSpace
struct UActionComponentTransformBase_SetLocalSpace_Params
{
	bool*                                              localSpace;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function V1CoreRuntime.ActionComponentTransformBase.IsLocalSpace
struct UActionComponentTransformBase_IsLocalSpace_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.ActionComponentRotateBy.SetRotationDelta
struct UActionComponentRotateBy_SetRotationDelta_Params
{
	struct FRotator*                                   rotationDelta;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function V1CoreRuntime.ActionComponentRotateBy.GetRotationDelta
struct UActionComponentRotateBy_GetRotationDelta_Params
{
	struct FRotator                                    ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData)
};

// Function V1CoreRuntime.ActionComponentRotateBy.CreateAction_ComponentRotateBy
struct UActionComponentRotateBy_CreateAction_ComponentRotateBy_Params
{
	class UObject**                                    Outer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent**                            Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool*                                              Local;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator*                                   rotationDelta;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float*                                             Length;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UActionComponentRotateBy*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.ActionComponentRotateTo.SetRotation
struct UActionComponentRotateTo_SetRotation_Params
{
	struct FRotator*                                   Rotation;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function V1CoreRuntime.ActionComponentRotateTo.GetRotation
struct UActionComponentRotateTo_GetRotation_Params
{
	struct FRotator                                    ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData)
};

// Function V1CoreRuntime.ActionComponentRotateTo.CreateAction_ComponentRotateTo
struct UActionComponentRotateTo_CreateAction_ComponentRotateTo_Params
{
	class UObject**                                    Outer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent**                            Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool*                                              Local;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator*                                   Rotation;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float*                                             Length;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UActionComponentRotateTo*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.ActionComponentScaleBy.SetScaleDelta
struct UActionComponentScaleBy_SetScaleDelta_Params
{
	struct FVector*                                    scaleDelta;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function V1CoreRuntime.ActionComponentScaleBy.GetScaleDelta
struct UActionComponentScaleBy_GetScaleDelta_Params
{
	struct FVector                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData)
};

// Function V1CoreRuntime.ActionComponentScaleBy.CreateAction_ComponentScaleBy
struct UActionComponentScaleBy_CreateAction_ComponentScaleBy_Params
{
	class UObject**                                    Outer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent**                            Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool*                                              Local;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    scaleDelta;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float*                                             Length;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UActionComponentScaleBy*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.ActionComponentScaleTo.SetScale
struct UActionComponentScaleTo_SetScale_Params
{
	struct FVector*                                    Scale;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function V1CoreRuntime.ActionComponentScaleTo.GetScale
struct UActionComponentScaleTo_GetScale_Params
{
	struct FVector                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData)
};

// Function V1CoreRuntime.ActionComponentScaleTo.CreateAction_ComponentScaleTo
struct UActionComponentScaleTo_CreateAction_ComponentScaleTo_Params
{
	class UObject**                                    Outer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent**                            Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool*                                              Local;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Scale;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float*                                             Length;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UActionComponentScaleTo*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.ActionComponentSetVisibility.SetVisible
struct UActionComponentSetVisibility_SetVisible_Params
{
	bool*                                              Visible;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function V1CoreRuntime.ActionComponentSetVisibility.SetApplyToChildren
struct UActionComponentSetVisibility_SetApplyToChildren_Params
{
	bool*                                              applyToChildren;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function V1CoreRuntime.ActionComponentSetVisibility.GetVisible
struct UActionComponentSetVisibility_GetVisible_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.ActionComponentSetVisibility.GetApplyToChildren
struct UActionComponentSetVisibility_GetApplyToChildren_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.ActionComponentSetVisibility.CreateAction_ComponentSetVisibility
struct UActionComponentSetVisibility_CreateAction_ComponentSetVisibility_Params
{
	class UObject**                                    Outer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent**                            Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool*                                              Visible;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              applyToChildren;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UActionComponentSetVisibility*               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.ActionComponentTranslateBy.SetPositionDelta
struct UActionComponentTranslateBy_SetPositionDelta_Params
{
	struct FVector*                                    positionDelta;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function V1CoreRuntime.ActionComponentTranslateBy.GetPositionDelta
struct UActionComponentTranslateBy_GetPositionDelta_Params
{
	struct FVector                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData)
};

// Function V1CoreRuntime.ActionComponentTranslateBy.CreateAction_ComponentTranslateBy
struct UActionComponentTranslateBy_CreateAction_ComponentTranslateBy_Params
{
	class UObject**                                    Outer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent**                            Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool*                                              Local;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    translationDelta;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float*                                             Length;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UActionComponentTranslateBy*                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.ActionComponentTranslateTo.SetPosition
struct UActionComponentTranslateTo_SetPosition_Params
{
	struct FVector*                                    Position;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function V1CoreRuntime.ActionComponentTranslateTo.GetPosition
struct UActionComponentTranslateTo_GetPosition_Params
{
	struct FVector                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData)
};

// Function V1CoreRuntime.ActionComponentTranslateTo.CreateAction_ComponentTranslateTo
struct UActionComponentTranslateTo_CreateAction_ComponentTranslateTo_Params
{
	class UObject**                                    Outer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent**                            Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool*                                              Local;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Translation;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float*                                             Length;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UActionComponentTranslateTo*                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.ActionDestroyActor.CreateAction_DestroyActor
struct UActionDestroyActor_CreateAction_DestroyActor_Params
{
	class UObject**                                    Outer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UActionDestroyActor*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.V1ActionContainer.IsEmpty
struct UV1ActionContainer_IsEmpty_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.V1ActionContainer.GetActions
struct UV1ActionContainer_GetActions_Params
{
	TArray<class UV1ActionBase*>                       ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function V1CoreRuntime.V1ActionContainer.GetActionCount
struct UV1ActionContainer_GetActionCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.V1ActionContainer.Clear
struct UV1ActionContainer_Clear_Params
{
};

// Function V1CoreRuntime.V1ActionContainer.AddActionFront
struct UV1ActionContainer_AddActionFront_Params
{
	class UV1ActionBase**                              Action;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UV1ActionBase*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.V1ActionContainer.AddActionBack
struct UV1ActionContainer_AddActionBack_Params
{
	class UV1ActionBase**                              Action;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UV1ActionBase*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.ActionRepeatFinite.CreateAction_ActionRepeatFinite
struct UActionRepeatFinite_CreateAction_ActionRepeatFinite_Params
{
	class UObject**                                    Outer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               iterations;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UActionRepeatFinite*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.ActionRepeatForever.CreateAction_ActionRepeatForever
struct UActionRepeatForever_CreateAction_ActionRepeatForever_Params
{
	class UObject**                                    Outer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UActionRepeatForever*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.ActionSetActorTransform.SetTransform
struct UActionSetActorTransform_SetTransform_Params
{
	struct FTransform*                                 transformDelta;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function V1CoreRuntime.ActionSetActorTransform.SetScale
struct UActionSetActorTransform_SetScale_Params
{
	struct FVector*                                    scaleDelta;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function V1CoreRuntime.ActionSetActorTransform.SetRotation
struct UActionSetActorTransform_SetRotation_Params
{
	struct FRotator*                                   rotationDelta;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function V1CoreRuntime.ActionSetActorTransform.SetPosition
struct UActionSetActorTransform_SetPosition_Params
{
	struct FVector*                                    positionDelta;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function V1CoreRuntime.ActionSetActorTransform.SetLocalSpace
struct UActionSetActorTransform_SetLocalSpace_Params
{
	bool*                                              localSpace;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function V1CoreRuntime.ActionSetActorTransform.IsLocalSpace
struct UActionSetActorTransform_IsLocalSpace_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.ActionSetActorTransform.GetTransform
struct UActionSetActorTransform_GetTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData)
};

// Function V1CoreRuntime.ActionSetActorTransform.GetScale
struct UActionSetActorTransform_GetScale_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.ActionSetActorTransform.GetRotation
struct UActionSetActorTransform_GetRotation_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.ActionSetActorTransform.GetPosition
struct UActionSetActorTransform_GetPosition_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.ActionSetActorTransform.CreateAction_SetActorTransform
struct UActionSetActorTransform_CreateAction_SetActorTransform_Params
{
	class UObject**                                    Outer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Local;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform*                                 Transform;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class UActionSetActorTransform*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.ActionSetActorVisibility.CreateAction_SetActorVisibility
struct UActionSetActorVisibility_CreateAction_SetActorVisibility_Params
{
	class UObject**                                    Outer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Visible;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              applyToChildren;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UActionSetActorVisibility*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.ActionSpawnActor.SetSpawnTransform
struct UActionSpawnActor_SetSpawnTransform_Params
{
	struct FTransform*                                 SpawnTransform;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function V1CoreRuntime.ActionSpawnActor.SetActorTag
struct UActionSpawnActor_SetActorTag_Params
{
	struct FName*                                      componentTag;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function V1CoreRuntime.ActionSpawnActor.SetActorName
struct UActionSpawnActor_SetActorName_Params
{
	struct FName*                                      actorName;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function V1CoreRuntime.ActionSpawnActor.SetActorClass
struct UActionSpawnActor_SetActorClass_Params
{
	class UClass**                                     actorClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function V1CoreRuntime.ActionSpawnActor.GetSpawnTransform
struct UActionSpawnActor_GetSpawnTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData)
};

// Function V1CoreRuntime.ActionSpawnActor.GetActorTag
struct UActionSpawnActor_GetActorTag_Params
{
	struct FName                                       ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData)
};

// Function V1CoreRuntime.ActionSpawnActor.GetActorName
struct UActionSpawnActor_GetActorName_Params
{
	struct FName                                       ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData)
};

// Function V1CoreRuntime.ActionSpawnActor.GetActorClass
struct UActionSpawnActor_GetActorClass_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.ActionSpawnActor.CreateAction_SpawnActor
struct UActionSpawnActor_CreateAction_SpawnActor_Params
{
	class UObject**                                    Outer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     actorClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform*                                 SpawnTransform;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FName*                                      actorName;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FName*                                      actorTag;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UActionSpawnActor*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.ActionSpawnComponent.SetSpawnTransform
struct UActionSpawnComponent_SetSpawnTransform_Params
{
	struct FTransform*                                 SpawnTransform;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function V1CoreRuntime.ActionSpawnComponent.SetComponentTag
struct UActionSpawnComponent_SetComponentTag_Params
{
	struct FName*                                      componentTag;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function V1CoreRuntime.ActionSpawnComponent.SetComponentName
struct UActionSpawnComponent_SetComponentName_Params
{
	struct FName*                                      componentName;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function V1CoreRuntime.ActionSpawnComponent.SetComponentClass
struct UActionSpawnComponent_SetComponentClass_Params
{
	class UClass**                                     actorClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function V1CoreRuntime.ActionSpawnComponent.GetSpawnTransform
struct UActionSpawnComponent_GetSpawnTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData)
};

// Function V1CoreRuntime.ActionSpawnComponent.GetComponentTag
struct UActionSpawnComponent_GetComponentTag_Params
{
	struct FName                                       ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData)
};

// Function V1CoreRuntime.ActionSpawnComponent.GetComponentName
struct UActionSpawnComponent_GetComponentName_Params
{
	struct FName                                       ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData)
};

// Function V1CoreRuntime.ActionSpawnComponent.GetComponentClass
struct UActionSpawnComponent_GetComponentClass_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.ActionSpawnComponent.CreateAction_SpawnComponent
struct UActionSpawnComponent_CreateAction_SpawnComponent_Params
{
	class UObject**                                    Outer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     ComponentClass;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform*                                 SpawnTransform;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FName*                                      componentName;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FName*                                      componentTag;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UActionSpawnComponent*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.IntervalUMGAction.SetWidget
struct UIntervalUMGAction_SetWidget_Params
{
	class UWidget**                                    Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function V1CoreRuntime.IntervalUMGAction.GetWidget
struct UIntervalUMGAction_GetWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function V1CoreRuntime.ActionUMGFadeAlphaTo.SetTargetAlpha
struct UActionUMGFadeAlphaTo_SetTargetAlpha_Params
{
	float*                                             targetAlpha;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function V1CoreRuntime.ActionUMGFadeAlphaTo.GetTargetAlpha
struct UActionUMGFadeAlphaTo_GetTargetAlpha_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.ActionUMGFadeAlphaTo.CreateAction_UMGFadeAlphaTo
struct UActionUMGFadeAlphaTo_CreateAction_UMGFadeAlphaTo_Params
{
	class UObject**                                    Outer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UWidget**                                    Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float*                                             targetAlpha;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Length;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UActionUMGFadeAlphaTo*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.ActionUMGFadeColorTo.SetFadeColor
struct UActionUMGFadeColorTo_SetFadeColor_Params
{
	struct FLinearColor*                               Color;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function V1CoreRuntime.ActionUMGFadeColorTo.GetFadeColor
struct UActionUMGFadeColorTo_GetFadeColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData)
};

// Function V1CoreRuntime.ActionUMGFadeColorTo.CreateAction_UMGFadeColorTo
struct UActionUMGFadeColorTo_CreateAction_UMGFadeColorTo_Params
{
	class UObject**                                    Outer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UWidget**                                    Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FLinearColor*                               Color;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float*                                             Length;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UActionUMGFadeColorTo*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.ActionUMGMultiplyAlphaBy.SetAlphaScalar
struct UActionUMGMultiplyAlphaBy_SetAlphaScalar_Params
{
	float*                                             alphaScalar;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function V1CoreRuntime.ActionUMGMultiplyAlphaBy.GetAlphaScalar
struct UActionUMGMultiplyAlphaBy_GetAlphaScalar_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.ActionUMGMultiplyAlphaBy.CreateAction_UMGMultiplyAlphaBy
struct UActionUMGMultiplyAlphaBy_CreateAction_UMGMultiplyAlphaBy_Params
{
	class UObject**                                    Outer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UWidget**                                    Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float*                                             alphaScalar;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Length;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UActionUMGMultiplyAlphaBy*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.ActionUMGMultiplyColorBy.SetColorScalar
struct UActionUMGMultiplyColorBy_SetColorScalar_Params
{
	struct FVector*                                    colorScalar;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function V1CoreRuntime.ActionUMGMultiplyColorBy.GetColorScalar
struct UActionUMGMultiplyColorBy_GetColorScalar_Params
{
	struct FVector                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData)
};

// Function V1CoreRuntime.ActionUMGMultiplyColorBy.CreateAction_UMGMultiplyColorBy
struct UActionUMGMultiplyColorBy_CreateAction_UMGMultiplyColorBy_Params
{
	class UObject**                                    Outer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UWidget**                                    Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector*                                    colorScalar;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float*                                             Length;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UActionUMGMultiplyColorBy*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.InstantUMGAction.SetWidget
struct UInstantUMGAction_SetWidget_Params
{
	class UWidget**                                    Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function V1CoreRuntime.InstantUMGAction.GetWidget
struct UInstantUMGAction_GetWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function V1CoreRuntime.ActionUMGRemoveFromParent.CreateAction_UMGRemoveFromParent
struct UActionUMGRemoveFromParent_CreateAction_UMGRemoveFromParent_Params
{
	class UObject**                                    Outer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UWidget**                                    Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UActionUMGRemoveFromParent*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.ActionUMGRotateBy.SetRotationDelta
struct UActionUMGRotateBy_SetRotationDelta_Params
{
	float*                                             rotationDelta;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function V1CoreRuntime.ActionUMGRotateBy.GetRotationDelta
struct UActionUMGRotateBy_GetRotationDelta_Params
{
	float                                              ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData)
};

// Function V1CoreRuntime.ActionUMGRotateBy.CreateAction_UMGRotateBy
struct UActionUMGRotateBy_CreateAction_UMGRotateBy_Params
{
	class UObject**                                    Outer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UWidget**                                    Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float*                                             rotationDelta;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Length;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UActionUMGRotateBy*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.ActionUMGRotateTo.SetRotation
struct UActionUMGRotateTo_SetRotation_Params
{
	float*                                             Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function V1CoreRuntime.ActionUMGRotateTo.GetRotation
struct UActionUMGRotateTo_GetRotation_Params
{
	float                                              ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData)
};

// Function V1CoreRuntime.ActionUMGRotateTo.CreateAction_UMGRotateTo
struct UActionUMGRotateTo_CreateAction_UMGRotateTo_Params
{
	class UObject**                                    Outer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UWidget**                                    Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float*                                             Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Length;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UActionUMGRotateTo*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.ActionUMGScaleBy.SetScaleDelta
struct UActionUMGScaleBy_SetScaleDelta_Params
{
	struct FVector2D*                                  scaleDelta;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function V1CoreRuntime.ActionUMGScaleBy.GetScaleDelta
struct UActionUMGScaleBy_GetScaleDelta_Params
{
	struct FVector2D                                   ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData)
};

// Function V1CoreRuntime.ActionUMGScaleBy.CreateAction_UMGScaleBy
struct UActionUMGScaleBy_CreateAction_UMGScaleBy_Params
{
	class UObject**                                    Outer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UWidget**                                    Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector2D*                                  scaleDelta;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float*                                             Length;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UActionUMGScaleBy*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.ActionUMGScaleTo.SetScale
struct UActionUMGScaleTo_SetScale_Params
{
	struct FVector2D*                                  Scale;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function V1CoreRuntime.ActionUMGScaleTo.GetScale
struct UActionUMGScaleTo_GetScale_Params
{
	struct FVector2D                                   ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData)
};

// Function V1CoreRuntime.ActionUMGScaleTo.CreateAction_UMGScaleTo
struct UActionUMGScaleTo_CreateAction_UMGScaleTo_Params
{
	class UObject**                                    Outer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UWidget**                                    Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector2D*                                  Scale;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float*                                             Length;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UActionUMGScaleTo*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.ActionUMGTranslateBy.SetPositionDelta
struct UActionUMGTranslateBy_SetPositionDelta_Params
{
	struct FVector2D*                                  positionDelta;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function V1CoreRuntime.ActionUMGTranslateBy.GetPositionDelta
struct UActionUMGTranslateBy_GetPositionDelta_Params
{
	struct FVector2D                                   ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData)
};

// Function V1CoreRuntime.ActionUMGTranslateBy.CreateAction_UMGTranslateBy
struct UActionUMGTranslateBy_CreateAction_UMGTranslateBy_Params
{
	class UObject**                                    Outer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UWidget**                                    Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector2D*                                  translationDelta;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float*                                             Length;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UActionUMGTranslateBy*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.ActionUMGTranslateTo.SetPosition
struct UActionUMGTranslateTo_SetPosition_Params
{
	struct FVector2D*                                  Position;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function V1CoreRuntime.ActionUMGTranslateTo.GetPosition
struct UActionUMGTranslateTo_GetPosition_Params
{
	struct FVector2D                                   ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData)
};

// Function V1CoreRuntime.ActionUMGTranslateTo.CreateAction_UMGTranslateTo
struct UActionUMGTranslateTo_CreateAction_UMGTranslateTo_Params
{
	class UObject**                                    Outer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UWidget**                                    Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector2D*                                  Translation;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float*                                             Length;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UActionUMGTranslateTo*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.ActorActionInterface.SetActor
struct UActorActionInterface_SetActor_Params
{
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function V1CoreRuntime.ActorActionInterface.GetActor
struct UActorActionInterface_GetActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.ActorLifeCycleComponent.Server_DummyRPC
struct UActorLifeCycleComponent_Server_DummyRPC_Params
{
};

// Function V1CoreRuntime.ComponentActionInterface.SetComponentByActor
struct UComponentActionInterface_SetComponentByActor_Params
{
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      componentName;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function V1CoreRuntime.ComponentActionInterface.SetComponent
struct UComponentActionInterface_SetComponent_Params
{
	class UActorComponent**                            Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function V1CoreRuntime.ComponentActionInterface.SetActor
struct UComponentActionInterface_SetActor_Params
{
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function V1CoreRuntime.ComponentActionInterface.GetComponent
struct UComponentActionInterface_GetComponent_Params
{
	class UActorComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function V1CoreRuntime.CustomBoundsInterface.GetCustomBounds
struct UCustomBoundsInterface_GetCustomBounds_Params
{
	struct FVector                                     WorldOrigin;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     halfExtents;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function V1CoreRuntime.EaseActionExponentialBase.SetRate
struct UEaseActionExponentialBase_SetRate_Params
{
	float*                                             Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function V1CoreRuntime.EaseActionExponentialBase.SetAction
struct UEaseActionExponentialBase_SetAction_Params
{
	class UV1IntervalAction**                          Action;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function V1CoreRuntime.EaseActionExponentialBase.GetRate
struct UEaseActionExponentialBase_GetRate_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.EasingActionStatics.CreateEaseActionExponentialOut
struct UEasingActionStatics_CreateEaseActionExponentialOut_Params
{
	class UObject**                                    Outer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UV1IntervalAction**                          Action;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UEaseActionExponentialOut*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.EasingActionStatics.CreateEaseActionExponentialInOut
struct UEasingActionStatics_CreateEaseActionExponentialInOut_Params
{
	class UObject**                                    Outer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UV1IntervalAction**                          Action;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UEaseActionExponentialInOut*                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.EasingActionStatics.CreateEaseActionExponentialIn
struct UEasingActionStatics_CreateEaseActionExponentialIn_Params
{
	class UObject**                                    Outer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UV1IntervalAction**                          Action;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UEaseActionExponentialIn*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.V1TimeDilationComponent.S_RequestActorTimeDilation_BP
struct UV1TimeDilationComponent_S_RequestActorTimeDilation_BP_Params
{
	class AActor**                                     targetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    requestingObject;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTimeDilationRequest*                       request;                                                  // (Parm)
};

// Function V1CoreRuntime.V1TimeDilationComponent.S_EndActorTimeDilationRequest
struct UV1TimeDilationComponent_S_EndActorTimeDilationRequest_Params
{
	class AActor**                                     targetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    requestingObject;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function V1CoreRuntime.UMGActionInterface.SetWidget
struct UUMGActionInterface_SetWidget_Params
{
	class UWidget**                                    Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function V1CoreRuntime.UMGActionInterface.GetWidget
struct UUMGActionInterface_GetWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function V1CoreRuntime.V1ActionAsset.GetAction
struct UV1ActionAsset_GetAction_Params
{
	class UV1ActionBase*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.V1ActionClip.Stop
struct UV1ActionClip_Stop_Params
{
};

// Function V1CoreRuntime.V1ActionClip.SetContext
struct UV1ActionClip_SetContext_Params
{
	struct FV1ActionContext*                           Context;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function V1CoreRuntime.V1ActionClip.PlayWithContext
struct UV1ActionClip_PlayWithContext_Params
{
	struct FV1ActionContext*                           Context;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function V1CoreRuntime.V1ActionClip.Play
struct UV1ActionClip_Play_Params
{
};

// Function V1CoreRuntime.V1ActionClip.Pause
struct UV1ActionClip_Pause_Params
{
};

// Function V1CoreRuntime.V1ActionClip.GetContext
struct UV1ActionClip_GetContext_Params
{
	struct FV1ActionContext                            ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function V1CoreRuntime.V1ActionClip.Continue
struct UV1ActionClip_Continue_Params
{
};

// Function V1CoreRuntime.V1ActionList.IsLaneEmpty
struct UV1ActionList_IsLaneEmpty_Params
{
	int*                                               lane;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.V1ActionList.GetLaneCount
struct UV1ActionList_GetLaneCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.V1ActionList.GetLaneActionCount
struct UV1ActionList_GetLaneActionCount_Params
{
	int*                                               lane;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.V1ActionList.GetActionCount
struct UV1ActionList_GetActionCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.V1ActionList.CreateAction_ActionList
struct UV1ActionList_CreateAction_ActionList_Params
{
	class UObject**                                    Outer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UV1ActionList*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.V1ActionList.ClearLane
struct UV1ActionList_ClearLane_Params
{
	int*                                               lane;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function V1CoreRuntime.V1ActionList.ClearAll
struct UV1ActionList_ClearAll_Params
{
	int*                                               lane;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function V1CoreRuntime.V1ActionList.AddActionFront
struct UV1ActionList_AddActionFront_Params
{
	int*                                               lane;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UV1ActionBase**                              Action;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UV1ActionBase*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.V1ActionList.AddActionBack
struct UV1ActionList_AddActionBack_Params
{
	int*                                               lane;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UV1ActionBase**                              Action;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UV1ActionBase*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.V1ActionListComponent.GetActionList
struct UV1ActionListComponent_GetActionList_Params
{
	class UV1ActionList*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.V1ActionSequence.CreateAction_ActionSequence
struct UV1ActionSequence_CreateAction_ActionSequence_Params
{
	class UObject**                                    Outer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UV1ActionSequence*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.V1AttributeMod.SetPostPercentageAdd
struct UV1AttributeMod_SetPostPercentageAdd_Params
{
	float*                                             postPercentageAdd;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function V1CoreRuntime.V1AttributeMod.SetPostMultiplier
struct UV1AttributeMod_SetPostMultiplier_Params
{
	float*                                             postMultiplier;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function V1CoreRuntime.V1AttributeMod.SetPostConstantAdd
struct UV1AttributeMod_SetPostConstantAdd_Params
{
	float*                                             postConstantAdd;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function V1CoreRuntime.V1AttributeMod.SetModData
struct UV1AttributeMod_SetModData_Params
{
	struct FV1AttributeModData*                        modData;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function V1CoreRuntime.V1AttributeMod.SetBasePercentageAdd
struct UV1AttributeMod_SetBasePercentageAdd_Params
{
	float*                                             basePercentageAdd;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function V1CoreRuntime.V1AttributeMod.SetBaseMultiplier
struct UV1AttributeMod_SetBaseMultiplier_Params
{
	float*                                             baseMultiplier;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function V1CoreRuntime.V1AttributeMod.SetBaseConstantAdd
struct UV1AttributeMod_SetBaseConstantAdd_Params
{
	float*                                             baseConstantAdd;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function V1CoreRuntime.V1AttributeModifier.RemoveMod
struct UV1AttributeModifier_RemoveMod_Params
{
	class UV1AttributeMod**                            mod;                                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function V1CoreRuntime.V1AttributeModifier.GetCurrentModData
struct UV1AttributeModifier_GetCurrentModData_Params
{
	struct FV1AttributeModData                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function V1CoreRuntime.V1AttributeModifier.AddMod
struct UV1AttributeModifier_AddMod_Params
{
	class UV1AttributeMod**                            mod;                                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function V1CoreRuntime.V1AttributeBase.GetAttributeTypeTag
struct UV1AttributeBase_GetAttributeTypeTag_Params
{
	struct FGameplayTag                                ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function V1CoreRuntime.V1Attribute.SetCurrentToMax
struct UV1Attribute_SetCurrentToMax_Params
{
	struct FV1AttributeInstigator*                     Instigator;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function V1CoreRuntime.V1Attribute.SetCurrentPercentage
struct UV1Attribute_SetCurrentPercentage_Params
{
	float*                                             percentage;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FV1AttributeInstigator*                     Instigator;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function V1CoreRuntime.V1Attribute.RemoveMaxModifier
struct UV1Attribute_RemoveMaxModifier_Params
{
	class UV1AttributeModifier**                       modifier;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function V1CoreRuntime.V1Attribute.OnRep_ModifiedMaxValue
struct UV1Attribute_OnRep_ModifiedMaxValue_Params
{
};

// Function V1CoreRuntime.V1Attribute.OnRep_CurrentValue
struct UV1Attribute_OnRep_CurrentValue_Params
{
};

// Function V1CoreRuntime.V1Attribute.OnRep_CombinedModData
struct UV1Attribute_OnRep_CombinedModData_Params
{
};

// Function V1CoreRuntime.V1Attribute.InitializeCurrentValue
struct UV1Attribute_InitializeCurrentValue_Params
{
	float*                                             percentageOfMax;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function V1CoreRuntime.V1Attribute.GetMaxAsInt
struct UV1Attribute_GetMaxAsInt_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.V1Attribute.GetMax
struct UV1Attribute_GetMax_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.V1Attribute.GetCurrentPercentage
struct UV1Attribute_GetCurrentPercentage_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.V1Attribute.GetCurrentAsInt
struct UV1Attribute_GetCurrentAsInt_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.V1Attribute.GetCurrent
struct UV1Attribute_GetCurrent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.V1Attribute.AddPercentageOfMaxToCurrent
struct UV1Attribute_AddPercentageOfMaxToCurrent_Params
{
	float*                                             percentageAmount;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FV1AttributeInstigator*                     Instigator;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function V1CoreRuntime.V1Attribute.AddMaxModifier
struct UV1Attribute_AddMaxModifier_Params
{
	class UV1AttributeModifier**                       modifier;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function V1CoreRuntime.V1Attribute.AddConstantToCurrent
struct UV1Attribute_AddConstantToCurrent_Params
{
	float*                                             Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FV1AttributeInstigator*                     Instigator;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function V1CoreRuntime.V1AttributesComponent.S_GetStatusAttributeValue
struct UV1AttributesComponent_S_GetStatusAttributeValue_Params
{
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag*                               attributeType;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
	bool*                                              DefaultValue;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.V1AttributesComponent.S_GetStatusAttribute
struct UV1AttributesComponent_S_GetStatusAttribute_Params
{
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag*                               attributeType;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
	class UV1StatusAttribute*                          ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function V1CoreRuntime.V1AttributesComponent.S_GetFloatAttributeValue
struct UV1AttributesComponent_S_GetFloatAttributeValue_Params
{
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag*                               attributeType;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
	float*                                             DefaultValue;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.V1AttributesComponent.S_GetFloatAttributePercentage
struct UV1AttributesComponent_S_GetFloatAttributePercentage_Params
{
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag*                               attributeType;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
	float*                                             DefaultValue;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.V1AttributesComponent.S_GetFloatAttribute
struct UV1AttributesComponent_S_GetFloatAttribute_Params
{
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag*                               attributeType;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
	class UV1Attribute*                                ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function V1CoreRuntime.V1AttributesComponent.S_GetAttributesComponent
struct UV1AttributesComponent_S_GetAttributesComponent_Params
{
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UV1AttributesComponent*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function V1CoreRuntime.V1AttributesComponent.S_Get
struct UV1AttributesComponent_S_Get_Params
{
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UV1AttributesComponent*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function V1CoreRuntime.V1AttributesComponent.RemoveMod
struct UV1AttributesComponent_RemoveMod_Params
{
	struct FGameplayTag*                               attributeType;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
	class UV1AttributeMod**                            mod;                                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function V1CoreRuntime.V1AttributesComponent.GetStatusAttribute
struct UV1AttributesComponent_GetStatusAttribute_Params
{
	struct FGameplayTag*                               attributeType;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
	class UV1StatusAttribute*                          ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function V1CoreRuntime.V1AttributesComponent.GetModifier
struct UV1AttributesComponent_GetModifier_Params
{
	struct FGameplayTag*                               attributeType;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
	class UV1AttributeModifier*                        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function V1CoreRuntime.V1AttributesComponent.GetFloatAttribute
struct UV1AttributesComponent_GetFloatAttribute_Params
{
	struct FGameplayTag*                               attributeType;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
	class UV1Attribute*                                ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function V1CoreRuntime.V1AttributesComponent.AddMod
struct UV1AttributesComponent_AddMod_Params
{
	struct FGameplayTag*                               attributeType;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
	class UV1AttributeMod**                            mod;                                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function V1CoreRuntime.V1AudioComponent.S_StopAudioEvent
struct UV1AudioComponent_S_StopAudioEvent_Params
{
	int*                                               eventId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function V1CoreRuntime.V1AudioComponent.S_PostAudioEvent
struct UV1AudioComponent_S_PostAudioEvent_Params
{
	class UAkAudioEvent**                              akEvent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              stopOnDestroy;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.V1AudioComponent.S_CreateAudioComponent
struct UV1AudioComponent_S_CreateAudioComponent_Params
{
	class AActor**                                     Owner;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              autoDestroyOnComplete;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    WorldLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UV1AudioComponent*                           ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function V1CoreRuntime.V1AudioComponent.PostAudioEvent_BP
struct UV1AudioComponent_PostAudioEvent_BP_Params
{
	class UAkAudioEvent**                              audioEvent;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.V1Button.SetTouchMethod
struct UV1Button_SetTouchMethod_Params
{
	TEnumAsByte<EButtonTouchMethod>*                   InTouchMethod;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function V1CoreRuntime.V1Button.SetText
struct UV1Button_SetText_Params
{
	struct FText*                                      Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function V1CoreRuntime.V1Button.SetStyle
struct UV1Button_SetStyle_Params
{
	struct FButtonStyle*                               InStyle;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function V1CoreRuntime.V1Button.SetClickMethod
struct UV1Button_SetClickMethod_Params
{
	TEnumAsByte<EButtonClickMethod>*                   InClickMethod;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function V1CoreRuntime.V1Button.SetBackgroundColor
struct UV1Button_SetBackgroundColor_Params
{
	struct FLinearColor*                               InBackgroundColor;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function V1CoreRuntime.V1Button.IsPressed
struct UV1Button_IsPressed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.V1ButtonSlot.SetVerticalAlignment
struct UV1ButtonSlot_SetVerticalAlignment_Params
{
	TEnumAsByte<EVerticalAlignment>*                   InVerticalAlignment;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function V1CoreRuntime.V1ButtonSlot.SetPadding
struct UV1ButtonSlot_SetPadding_Params
{
	struct FMargin*                                    InPadding;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function V1CoreRuntime.V1ButtonSlot.SetHorizontalAlignment
struct UV1ButtonSlot_SetHorizontalAlignment_Params
{
	TEnumAsByte<EHorizontalAlignment>*                 InHorizontalAlignment;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function V1CoreRuntime.V1ComboBoxString.SetSelectedOption
struct UV1ComboBoxString_SetSelectedOption_Params
{
	struct FString*                                    Option;                                                   // (Parm, ZeroConstructor)
};

// Function V1CoreRuntime.V1ComboBoxString.RemoveOption
struct UV1ComboBoxString_RemoveOption_Params
{
	struct FString*                                    Option;                                                   // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.V1ComboBoxString.RefreshOptions
struct UV1ComboBoxString_RefreshOptions_Params
{
};

// Function V1CoreRuntime.V1ComboBoxString.GetSelectedOption
struct UV1ComboBoxString_GetSelectedOption_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function V1CoreRuntime.V1ComboBoxString.GetOptionCount
struct UV1ComboBoxString_GetOptionCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.V1ComboBoxString.GetOptionAtIndex
struct UV1ComboBoxString_GetOptionAtIndex_Params
{
	int*                                               Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function V1CoreRuntime.V1ComboBoxString.FindOptionIndex
struct UV1ComboBoxString_FindOptionIndex_Params
{
	struct FString*                                    Option;                                                   // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.V1ComboBoxString.ClearSelection
struct UV1ComboBoxString_ClearSelection_Params
{
};

// Function V1CoreRuntime.V1ComboBoxString.ClearOptions
struct UV1ComboBoxString_ClearOptions_Params
{
};

// Function V1CoreRuntime.V1ComboBoxString.AddOption
struct UV1ComboBoxString_AddOption_Params
{
	struct FString*                                    Option;                                                   // (Parm, ZeroConstructor)
};

// Function V1CoreRuntime.V1ContextAssignAction.SetContext
struct UV1ContextAssignAction_SetContext_Params
{
	struct FV1ActionContext*                           Context;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function V1CoreRuntime.V1ContextAssignAction.GetContext
struct UV1ContextAssignAction_GetContext_Params
{
	struct FV1ActionContext                            ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function V1CoreRuntime.V1CoreStatics.ReplaceMaterialWithDynamicAtIndex
struct UV1CoreStatics_ReplaceMaterialWithDynamicAtIndex_Params
{
	class UPrimitiveComponent**                        primitive;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.V1ElementMenu.SwitchTab
struct UV1ElementMenu_SwitchTab_Params
{
	int*                                               Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function V1CoreRuntime.V1ElementMenu.RebuildMenu
struct UV1ElementMenu_RebuildMenu_Params
{
};

// Function V1CoreRuntime.V1ElementMenu.OnMenuItemReleased_BP
struct UV1ElementMenu_OnMenuItemReleased_BP_Params
{
	class UWidget**                                    menuItem;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function V1CoreRuntime.V1ElementMenu.OnMenuItemPressed_BP
struct UV1ElementMenu_OnMenuItemPressed_BP_Params
{
	class UWidget**                                    menuItem;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function V1CoreRuntime.V1ElementMenu.OnMenuDeactivate_BP
struct UV1ElementMenu_OnMenuDeactivate_BP_Params
{
};

// Function V1CoreRuntime.V1ElementMenu.OnMenuActivate_BP
struct UV1ElementMenu_OnMenuActivate_BP_Params
{
};

// Function V1CoreRuntime.V1ElementMenu.IsActive
struct UV1ElementMenu_IsActive_Params
{
	bool*                                              includeSubMenuCheck;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.V1ElementMenu.FocusMenuItem
struct UV1ElementMenu_FocusMenuItem_Params
{
	class UWidget**                                    itemToHighlight;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function V1CoreRuntime.V1ElementMenu.Deactivate
struct UV1ElementMenu_Deactivate_Params
{
	bool*                                              destroy;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              activateParent;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function V1CoreRuntime.V1ElementMenu.CreateSubMenu
struct UV1ElementMenu_CreateSubMenu_Params
{
	class UClass**                                     subMenuClass;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UV1ElementMenu*                              ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function V1CoreRuntime.V1ElementMenu.BackoutOfMenu
struct UV1ElementMenu_BackoutOfMenu_Params
{
};

// Function V1CoreRuntime.V1ElementMenu.Activate
struct UV1ElementMenu_Activate_Params
{
};

// Function V1CoreRuntime.V1EventSystem.SendTo
struct UV1EventSystem_SendTo_Params
{
	class UV1EventBase**                               evn;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    Source;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Target;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function V1CoreRuntime.V1EventSystem.RemoveScriptResponder
struct UV1EventSystem_RemoveScriptResponder_Params
{
	class AActor**                                     Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate*                            scriptDelegate;                                           // (Parm, ZeroConstructor)
};

// Function V1CoreRuntime.V1EventSystem.Broadcast
struct UV1EventSystem_Broadcast_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UV1EventBase**                               evn;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    Source;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function V1CoreRuntime.V1EventSystem.BindUnrealEventToV1EventForActor
struct UV1EventSystem_BindUnrealEventToV1EventForActor_Params
{
	class AActor**                                     handlingActor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate*                            unrealDelegate;                                           // (Parm, ZeroConstructor)
};

// Function V1CoreRuntime.V1EventSystem.AddScriptResponder
struct UV1EventSystem_AddScriptResponder_Params
{
	class AActor**                                     Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate*                            scriptDelegate;                                           // (Parm, ZeroConstructor)
};

// Function V1CoreRuntime.V1GameplayEffect.RemoveEffect
struct UV1GameplayEffect_RemoveEffect_Params
{
};

// Function V1CoreRuntime.V1GameplayEffect.OnRep_Suppressed
struct UV1GameplayEffect_OnRep_Suppressed_Params
{
	bool*                                              wasSuppressed;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function V1CoreRuntime.V1GameplayEffect.OnRep_Duration
struct UV1GameplayEffect_OnRep_Duration_Params
{
};

// Function V1CoreRuntime.V1GameplayEffectsComponent.S_HasGameplayEffectCategory
struct UV1GameplayEffectsComponent_S_HasGameplayEffectCategory_Params
{
	class AActor**                                     onActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag*                               gameplayEffectTypeCategory;                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.V1GameplayEffectsComponent.S_HasGameplayEffect
struct UV1GameplayEffectsComponent_S_HasGameplayEffect_Params
{
	class AActor**                                     onActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag*                               gameplayEffectType;                                       // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.V1GameplayEffectsComponent.RemoveGameplayEffects
struct UV1GameplayEffectsComponent_RemoveGameplayEffects_Params
{
	struct FGameplayTag*                               typeTag;                                                  // (Parm)
};

// Function V1CoreRuntime.V1GameplayEffectsComponent.HasGameplayEffectCategory
struct UV1GameplayEffectsComponent_HasGameplayEffectCategory_Params
{
	struct FGameplayTag*                               gameplayEffectTypeCategory;                               // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.V1GameplayEffectsComponent.HasGameplayEffect
struct UV1GameplayEffectsComponent_HasGameplayEffect_Params
{
	struct FGameplayTag*                               gameplayEffectTypeTag;                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.V1GameplayEffectsComponent.AddGenericGameplayEffect
struct UV1GameplayEffectsComponent_AddGenericGameplayEffect_Params
{
	struct FV1GameplayEffectSpec*                      specification;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FV1AttributeInstigator*                     Instigator;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	class UV1GameplayEffect*                           ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function V1CoreRuntime.V1GameplayEffectsComponent.AddGameplayEffect
struct UV1GameplayEffectsComponent_AddGameplayEffect_Params
{
	class UClass**                                     EffectClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FV1AttributeInstigator*                     Instigator;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	class UV1GameplayEffect*                           ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function V1CoreRuntime.V1GameplayEffectsInterface.GetGameplayEffectsComponent
struct UV1GameplayEffectsInterface_GetGameplayEffectsComponent_Params
{
	class UV1GameplayEffectsComponent*                 ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function V1CoreRuntime.V1GameplayTask.Multicast_OnResume
struct UV1GameplayTask_Multicast_OnResume_Params
{
};

// Function V1CoreRuntime.V1GameplayTask.Multicast_OnPause
struct UV1GameplayTask_Multicast_OnPause_Params
{
};

// Function V1CoreRuntime.V1GameViewportClient.IsForcePCControls
struct UV1GameViewportClient_IsForcePCControls_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.V1GameViewportClient.ForcePCControls
struct UV1GameViewportClient_ForcePCControls_Params
{
	bool*                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function V1CoreRuntime.V1GlyphOverlay.OnGlyphImageLoaded
struct UV1GlyphOverlay_OnGlyphImageLoaded_Params
{
};

// Function V1CoreRuntime.V1GlyphOverlay.OnGlyphImageFail
struct UV1GlyphOverlay_OnGlyphImageFail_Params
{
	struct FKey*                                       Key;                                                      // (Parm)
};

// Function V1CoreRuntime.V1GlyphOverlay.OnActionUnbound
struct UV1GlyphOverlay_OnActionUnbound_Params
{
};

// Function V1CoreRuntime.V1GlyphOverlayUserWidget.OnGlyphImageLoaded
struct UV1GlyphOverlayUserWidget_OnGlyphImageLoaded_Params
{
};

// Function V1CoreRuntime.V1GlyphOverlayUserWidget.OnGlyphImageFail
struct UV1GlyphOverlayUserWidget_OnGlyphImageFail_Params
{
	struct FKey*                                       Key;                                                      // (Parm)
};

// Function V1CoreRuntime.V1GlyphOverlayUserWidget.OnActionUnbound
struct UV1GlyphOverlayUserWidget_OnActionUnbound_Params
{
};

// Function V1CoreRuntime.V1HorizontalBox.AddChildToHorizontalBox
struct UV1HorizontalBox_AddChildToHorizontalBox_Params
{
	class UWidget**                                    Content;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UV1HorizontalBoxSlot*                        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function V1CoreRuntime.V1HorizontalBoxSlot.SetVerticalAlignment
struct UV1HorizontalBoxSlot_SetVerticalAlignment_Params
{
	TEnumAsByte<EVerticalAlignment>*                   InVerticalAlignment;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function V1CoreRuntime.V1HorizontalBoxSlot.SetSize
struct UV1HorizontalBoxSlot_SetSize_Params
{
	struct FSlateChildSize*                            InSize;                                                   // (Parm)
};

// Function V1CoreRuntime.V1HorizontalBoxSlot.SetPadding
struct UV1HorizontalBoxSlot_SetPadding_Params
{
	struct FMargin*                                    InPadding;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function V1CoreRuntime.V1HorizontalBoxSlot.SetHorizontalAlignment
struct UV1HorizontalBoxSlot_SetHorizontalAlignment_Params
{
	TEnumAsByte<EHorizontalAlignment>*                 InHorizontalAlignment;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function V1CoreRuntime.V1MenuUserWidget.SetWantsToBeFocusedFirst
struct UV1MenuUserWidget_SetWantsToBeFocusedFirst_Params
{
	bool*                                              wantsToBeFocusedFirst;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function V1CoreRuntime.V1MenuUserWidget.OnUnHoveredBP
struct UV1MenuUserWidget_OnUnHoveredBP_Params
{
};

// Function V1CoreRuntime.V1MenuUserWidget.OnReleasedBP
struct UV1MenuUserWidget_OnReleasedBP_Params
{
};

// Function V1CoreRuntime.V1MenuUserWidget.OnPressedBP
struct UV1MenuUserWidget_OnPressedBP_Params
{
};

// Function V1CoreRuntime.V1MenuUserWidget.OnHoveredBP
struct UV1MenuUserWidget_OnHoveredBP_Params
{
};

// Function V1CoreRuntime.V1MenuUserWidget.OnFocusReceivedBP
struct UV1MenuUserWidget_OnFocusReceivedBP_Params
{
};

// Function V1CoreRuntime.V1MenuUserWidget.OnFocusLostBP
struct UV1MenuUserWidget_OnFocusLostBP_Params
{
};

// Function V1CoreRuntime.V1KeyGlyphImage.UpdateImage
struct UV1KeyGlyphImage_UpdateImage_Params
{
};

// Function V1CoreRuntime.V1LongPressUserWidget.OnStartLongPressBP
struct UV1LongPressUserWidget_OnStartLongPressBP_Params
{
};

// Function V1CoreRuntime.V1LongPressUserWidget.OnProgressUpdatedBP
struct UV1LongPressUserWidget_OnProgressUpdatedBP_Params
{
	float*                                             percent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function V1CoreRuntime.V1OptionsButton.OnUnhoverd
struct UV1OptionsButton_OnUnhoverd_Params
{
};

// Function V1CoreRuntime.V1OptionsButton.OnInputChange
struct UV1OptionsButton_OnInputChange_Params
{
	class APlayerController**                          PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	EeV1PlayerInputType*                               inputType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function V1CoreRuntime.V1OptionsButton.OnHovered
struct UV1OptionsButton_OnHovered_Params
{
};

// Function V1CoreRuntime.V1PlayerController.GetCurrentPlayerInputType
struct AV1PlayerController_GetCurrentPlayerInputType_Params
{
	EeV1PlayerInputType                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.V1RefocusUserWidget.SetWidgetToFocus
struct UV1RefocusUserWidget_SetWidgetToFocus_Params
{
	class UWidget**                                    WidgetToFocus;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function V1CoreRuntime.V1ScreenMenuActor.SpawnElementMenu
struct AV1ScreenMenuActor_SpawnElementMenu_Params
{
	class UWorld**                                     World;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     menuClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AV1PlayerController**                        m_owningPlayer;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AV1ScreenMenuActor*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.V1ScreenMenuActor.IsElementMenuActive
struct AV1ScreenMenuActor_IsElementMenuActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.V1ScreenMenuActor.DeactivateElementMenu
struct AV1ScreenMenuActor_DeactivateElementMenu_Params
{
};

// Function V1CoreRuntime.V1ScreenMenuActor.ActivateElementMenu
struct AV1ScreenMenuActor_ActivateElementMenu_Params
{
};

// Function V1CoreRuntime.V1ScrollBox.SetScrollOffset
struct UV1ScrollBox_SetScrollOffset_Params
{
	float*                                             NewScrollOffset;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function V1CoreRuntime.V1ScrollBox.SetScrollBarVisibility
struct UV1ScrollBox_SetScrollBarVisibility_Params
{
	ESlateVisibility*                                  NewScrollBarVisibility;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function V1CoreRuntime.V1ScrollBox.SetScrollbarThickness
struct UV1ScrollBox_SetScrollbarThickness_Params
{
	struct FVector2D*                                  NewScrollbarThickness;                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function V1CoreRuntime.V1ScrollBox.SetOrientation
struct UV1ScrollBox_SetOrientation_Params
{
	TEnumAsByte<EOrientation>*                         NewOrientation;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function V1CoreRuntime.V1ScrollBox.SetAlwaysShowScrollbar
struct UV1ScrollBox_SetAlwaysShowScrollbar_Params
{
	bool*                                              NewAlwaysShowScrollbar;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function V1CoreRuntime.V1ScrollBox.SetAllowOverscroll
struct UV1ScrollBox_SetAllowOverscroll_Params
{
	bool*                                              NewAllowOverscroll;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function V1CoreRuntime.V1ScrollBox.ScrollWidgetIntoView
struct UV1ScrollBox_ScrollWidgetIntoView_Params
{
	class UWidget**                                    WidgetToFind;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool*                                              AnimateScroll;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	EV1DescendantScrollDestination*                    ScrollDestination;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function V1CoreRuntime.V1ScrollBox.ScrollToStart
struct UV1ScrollBox_ScrollToStart_Params
{
};

// Function V1CoreRuntime.V1ScrollBox.ScrollToEnd
struct UV1ScrollBox_ScrollToEnd_Params
{
};

// Function V1CoreRuntime.V1ScrollBox.GetViewOffsetFraction
struct UV1ScrollBox_GetViewOffsetFraction_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.V1ScrollBox.GetScrollOffset
struct UV1ScrollBox_GetScrollOffset_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.V1ScrollBoxSlot.SetVerticalAlignment
struct UV1ScrollBoxSlot_SetVerticalAlignment_Params
{
	TEnumAsByte<EVerticalAlignment>*                   InVerticalAlignment;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function V1CoreRuntime.V1ScrollBoxSlot.SetPadding
struct UV1ScrollBoxSlot_SetPadding_Params
{
	struct FMargin*                                    InPadding;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function V1CoreRuntime.V1ScrollBoxSlot.SetHorizontalAlignment
struct UV1ScrollBoxSlot_SetHorizontalAlignment_Params
{
	TEnumAsByte<EHorizontalAlignment>*                 InHorizontalAlignment;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function V1CoreRuntime.V1Slider.SetValue
struct UV1Slider_SetValue_Params
{
	float*                                             InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function V1CoreRuntime.V1Slider.SetStepSize
struct UV1Slider_SetStepSize_Params
{
	float*                                             InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function V1CoreRuntime.V1Slider.SetSliderHandleColor
struct UV1Slider_SetSliderHandleColor_Params
{
	struct FLinearColor*                               InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function V1CoreRuntime.V1Slider.SetSliderBarColor
struct UV1Slider_SetSliderBarColor_Params
{
	struct FLinearColor*                               InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function V1CoreRuntime.V1Slider.SetLocked
struct UV1Slider_SetLocked_Params
{
	bool*                                              InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function V1CoreRuntime.V1Slider.SetIndentHandle
struct UV1Slider_SetIndentHandle_Params
{
	bool*                                              InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function V1CoreRuntime.V1Slider.GetValue
struct UV1Slider_GetValue_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.V1StatusAttribute.OnRep_StatusEnabled
struct UV1StatusAttribute_OnRep_StatusEnabled_Params
{
};

// Function V1CoreRuntime.V1StatusAttribute.GetStatus
struct UV1StatusAttribute_GetStatus_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.V1ToggleButton.SetIsChecked
struct UV1ToggleButton_SetIsChecked_Params
{
	bool*                                              InIsChecked;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function V1CoreRuntime.V1ToggleButton.SetCheckedState
struct UV1ToggleButton_SetCheckedState_Params
{
	ECheckBoxState*                                    InCheckedState;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function V1CoreRuntime.V1ToggleButton.IsPressed
struct UV1ToggleButton_IsPressed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.V1ToggleButton.IsChecked
struct UV1ToggleButton_IsChecked_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.V1ToggleButton.GetCheckedState
struct UV1ToggleButton_GetCheckedState_Params
{
	ECheckBoxState                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.V1TabButton.OnMenuTabSwitch
struct UV1TabButton_OnMenuTabSwitch_Params
{
	int*                                               Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function V1CoreRuntime.V1TextBlock.SetText
struct UV1TextBlock_SetText_Params
{
	struct FText*                                      InText;                                                   // (Parm)
};

// Function V1CoreRuntime.V1TextBlock.SetShadowOffset
struct UV1TextBlock_SetShadowOffset_Params
{
	struct FVector2D*                                  InShadowOffset;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function V1CoreRuntime.V1TextBlock.SetShadowColorAndOpacity
struct UV1TextBlock_SetShadowColorAndOpacity_Params
{
	struct FLinearColor*                               InShadowColorAndOpacity;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function V1CoreRuntime.V1TextBlock.SetOpacity
struct UV1TextBlock_SetOpacity_Params
{
	float*                                             InOpacity;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function V1CoreRuntime.V1TextBlock.SetMinDesiredWidth
struct UV1TextBlock_SetMinDesiredWidth_Params
{
	float*                                             InMinDesiredWidth;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function V1CoreRuntime.V1TextBlock.SetJustification
struct UV1TextBlock_SetJustification_Params
{
	TEnumAsByte<ETextJustify>*                         InJustification;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function V1CoreRuntime.V1TextBlock.SetFont
struct UV1TextBlock_SetFont_Params
{
	struct FSlateFontInfo*                             InFontInfo;                                               // (Parm)
};

// Function V1CoreRuntime.V1TextBlock.SetColorAndOpacity
struct UV1TextBlock_SetColorAndOpacity_Params
{
	struct FSlateColor*                                InColorAndOpacity;                                        // (Parm)
};

// Function V1CoreRuntime.V1TextBlock.SetAutoWrapText
struct UV1TextBlock_SetAutoWrapText_Params
{
	bool*                                              InAutoTextWrap;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function V1CoreRuntime.V1TextBlock.GetText
struct UV1TextBlock_GetText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function V1CoreRuntime.V1TextBlock.GetDynamicOutlineMaterial
struct UV1TextBlock_GetDynamicOutlineMaterial_Params
{
	class UMaterialInstanceDynamic*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1CoreRuntime.V1TextBlock.GetDynamicFontMaterial
struct UV1TextBlock_GetDynamicFontMaterial_Params
{
	class UMaterialInstanceDynamic*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// DelegateFunction V1CoreRuntime.V1TriggerVolume.OnEndTriggerOverlap__DelegateSignature
struct AV1TriggerVolume_OnEndTriggerOverlap__DelegateSignature_Params
{
	struct FHitResult*                                 HitResult;                                                // (Parm, IsPlainOldData)
};

// DelegateFunction V1CoreRuntime.V1TriggerVolume.OnBeginTriggerOverlap__DelegateSignature
struct AV1TriggerVolume_OnBeginTriggerOverlap__DelegateSignature_Params
{
	struct FHitResult*                                 HitResult;                                                // (Parm, IsPlainOldData)
};

// Function V1CoreRuntime.V1TriggerVolume.GetV1OverlapComponent
struct AV1TriggerVolume_GetV1OverlapComponent_Params
{
	class UV1OverlapComponent*                         ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function V1CoreRuntime.V1AbilityTask.Multicast_OnResume
struct UV1AbilityTask_Multicast_OnResume_Params
{
};

// Function V1CoreRuntime.V1AbilityTask.Multicast_OnPause
struct UV1AbilityTask_Multicast_OnPause_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
