#pragma once

// Name: Robogore, Version: 1.1.176

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum V1ObjectiveSystemRuntime.eObjectiveSystemState
enum class EeObjectiveSystemState : uint8_t
{
	eObjectiveSystemState__MissionStarting = 0,
	eObjectiveSystemState__MissionPaused = 1,
	eObjectiveSystemState__MissionEnding = 2,
	eObjectiveSystemState__eObjectiveSystemState_MAX = 3
};


// Enum V1ObjectiveSystemRuntime.eOperatorState
enum class EeOperatorState : uint8_t
{
	eOperatorState__Preinitialized = 0,
	eOperatorState__Initializing   = 1,
	eOperatorState__Idle           = 2,
	eOperatorState__Evaluating     = 3,
	eOperatorState__Complete       = 4,
	eOperatorState__Resetting      = 5,
	eOperatorState__Uninitializing = 6,
	eOperatorState__kNUM           = 7,
	eOperatorState__kINVALID       = 8,
	eOperatorState__eOperatorState_MAX = 9
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct V1ObjectiveSystemRuntime.OperatorSaveInfo
// 0x0002
struct FOperatorSaveInfo
{
	EeOperatorState                                    operatorState;                                            // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               operatorEnabled;                                          // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct V1ObjectiveSystemRuntime.OperatorSaveData
// 0x0050
struct FOperatorSaveData
{
	TMap<class UOperator*, struct FOperatorSaveInfo>   operatorSaveInfos;                                        // 0x0000(0x0050) (ZeroConstructor)
};

// ScriptStruct V1ObjectiveSystemRuntime.OperatorActorSaveData
// 0x0050
struct FOperatorActorSaveData
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct V1ObjectiveSystemRuntime.OperatorActionList
// 0x0010
struct FOperatorActionList
{
	TArray<class UObject_Operator_Action*>             m_operatorActions;                                        // 0x0000(0x0010) (Edit, ExportObject, ZeroConstructor)
};

// ScriptStruct V1ObjectiveSystemRuntime.OperatorActorQueury
// 0x0010
struct FOperatorActorQueury
{
	TArray<class UGetActor*>                           m_querys;                                                 // 0x0000(0x0010) (Edit, ExportObject, ZeroConstructor, DisableEditOnTemplate)
};

// ScriptStruct V1ObjectiveSystemRuntime.OperatorActorSaveInfo
// 0x0001
struct FOperatorActorSaveInfo
{
	bool                                               operatorActorEnabled;                                     // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
