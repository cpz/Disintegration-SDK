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

// Function V1ObjectiveSystemRuntime.Operator.Resetting_OnTick_Script
struct UOperator_Resetting_OnTick_Script_Params
{
	class AActor**                                     Context;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             dt;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function V1ObjectiveSystemRuntime.Operator.Resetting_OnExit_Script
struct UOperator_Resetting_OnExit_Script_Params
{
	class AActor**                                     Context;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function V1ObjectiveSystemRuntime.Operator.Resetting_OnEnter_Script
struct UOperator_Resetting_OnEnter_Script_Params
{
	class AActor**                                     Context;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function V1ObjectiveSystemRuntime.Operator.OnTick_Script
struct UOperator_OnTick_Script_Params
{
	float*                                             dt;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function V1ObjectiveSystemRuntime.Operator.OnShutdown_Script
struct UOperator_OnShutdown_Script_Params
{
};

// Function V1ObjectiveSystemRuntime.Operator.OnSetup_Script
struct UOperator_OnSetup_Script_Params
{
};

// Function V1ObjectiveSystemRuntime.Operator.OnLoad_Script
struct UOperator_OnLoad_Script_Params
{
};

// Function V1ObjectiveSystemRuntime.Operator.OnEvaluate_Script
struct UOperator_OnEvaluate_Script_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1ObjectiveSystemRuntime.Operator.Idle_OnTick_Script
struct UOperator_Idle_OnTick_Script_Params
{
	class AActor**                                     Context;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             dt;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function V1ObjectiveSystemRuntime.Operator.Idle_OnExit_Script
struct UOperator_Idle_OnExit_Script_Params
{
	class AActor**                                     Context;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function V1ObjectiveSystemRuntime.Operator.Idle_OnEnter_Script
struct UOperator_Idle_OnEnter_Script_Params
{
	class AActor**                                     Context;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function V1ObjectiveSystemRuntime.Operator.GetOwningMissionEvent
struct UOperator_GetOwningMissionEvent_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1ObjectiveSystemRuntime.Operator.GetCurrentState
struct UOperator_GetCurrentState_Params
{
	EeOperatorState                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1ObjectiveSystemRuntime.Operator.Evaluating_OnTick_Script
struct UOperator_Evaluating_OnTick_Script_Params
{
	class AActor**                                     Context;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             dt;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function V1ObjectiveSystemRuntime.Operator.Evaluating_OnExit_Script
struct UOperator_Evaluating_OnExit_Script_Params
{
	class AActor**                                     Context;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function V1ObjectiveSystemRuntime.Operator.Evaluating_OnEnter_Script
struct UOperator_Evaluating_OnEnter_Script_Params
{
	class AActor**                                     Context;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function V1ObjectiveSystemRuntime.Operator.Complete_OnTick_Script
struct UOperator_Complete_OnTick_Script_Params
{
	class AActor**                                     Context;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             dt;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function V1ObjectiveSystemRuntime.Operator.Complete_OnExit_Script
struct UOperator_Complete_OnExit_Script_Params
{
	class AActor**                                     Context;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function V1ObjectiveSystemRuntime.Operator.Complete_OnEnter_Script
struct UOperator_Complete_OnEnter_Script_Params
{
	class AActor**                                     Context;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function V1ObjectiveSystemRuntime.Operator.AddActorReference
struct UOperator_AddActorReference_Params
{
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function V1ObjectiveSystemRuntime.OperatorActor.SetIsEnabled
struct AOperatorActor_SetIsEnabled_Params
{
	bool*                                              IsEnabled;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function V1ObjectiveSystemRuntime.OperatorActor.GetOperatorByTag
struct AOperatorActor_GetOperatorByTag_Params
{
	struct FName*                                      Tag;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class UOperator*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1ObjectiveSystemRuntime.OperatorActor.GetIsEnabled
struct AOperatorActor_GetIsEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function V1ObjectiveSystemRuntime.OperatorActor.Evaluate
struct AOperatorActor_Evaluate_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
