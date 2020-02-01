#pragma once

// Name: Robogore, Version: 1.1.176

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class V1ObjectiveSystemRuntime.ObjectiveSystemStateEvent
// 0x0008 (0x0040 - 0x0038)
class UObjectiveSystemStateEvent : public UV1EventBase
{
public:
	EeObjectiveSystemState                             State;                                                    // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1ObjectiveSystemRuntime.ObjectiveSystemStateEvent");
		return ptr;
	}

};


// Class V1ObjectiveSystemRuntime.Operator
// 0x03F0 (0x0418 - 0x0028)
class UOperator : public UObject
{
public:
	unsigned char                                      UnknownData00[0x3D0];                                     // 0x0028(0x03D0) MISSED OFFSET
	EeOperatorState                                    m_desiredOperatorState;                                   // 0x03F8(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               m_isEnabled;                                              // 0x03F9(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               m_isCompletable;                                          // 0x03FA(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x03FB(0x0005) MISSED OFFSET
	TArray<class UOperator*>                           m_childOperators;                                         // 0x0400(0x0010) (ZeroConstructor, Transient)
	struct FName                                       m_tag;                                                    // 0x0410(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1ObjectiveSystemRuntime.Operator");
		return ptr;
	}


	void Resetting_OnTick_Script(class AActor** Context, float* dt);
	void Resetting_OnExit_Script(class AActor** Context);
	void Resetting_OnEnter_Script(class AActor** Context);
	void OnTick_Script(float* dt);
	void OnShutdown_Script();
	void OnSetup_Script();
	void OnLoad_Script();
	bool OnEvaluate_Script();
	void Idle_OnTick_Script(class AActor** Context, float* dt);
	void Idle_OnExit_Script(class AActor** Context);
	void Idle_OnEnter_Script(class AActor** Context);
	class AActor* GetOwningMissionEvent();
	EeOperatorState GetCurrentState();
	void Evaluating_OnTick_Script(class AActor** Context, float* dt);
	void Evaluating_OnExit_Script(class AActor** Context);
	void Evaluating_OnEnter_Script(class AActor** Context);
	void Complete_OnTick_Script(class AActor** Context, float* dt);
	void Complete_OnExit_Script(class AActor** Context);
	void Complete_OnEnter_Script(class AActor** Context);
	void AddActorReference(class AActor** Actor);
};


// Class V1ObjectiveSystemRuntime.Object_Operator_Action
// 0x0008 (0x0030 - 0x0028)
class UObject_Operator_Action : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1ObjectiveSystemRuntime.Object_Operator_Action");
		return ptr;
	}

};


// Class V1ObjectiveSystemRuntime.OperatorActor
// 0x0030 (0x03C0 - 0x0390)
class AOperatorActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x9];                                       // 0x0390(0x0009) MISSED OFFSET
	bool                                               m_isEnabled;                                              // 0x0399(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x039A(0x0002) MISSED OFFSET
	float                                              m_evaluationDelay;                                        // 0x039C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x20];                                      // 0x03A0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1ObjectiveSystemRuntime.OperatorActor");
		return ptr;
	}


	void SetIsEnabled(bool* IsEnabled);
	class UOperator* GetOperatorByTag(struct FName* Tag);
	bool GetIsEnabled();
	void Evaluate();
};


// Class V1ObjectiveSystemRuntime.GetActor
// 0x0010 (0x0038 - 0x0028)
class UGetActor : public UObject
{
public:
	bool                                               m_invertFilter;                                           // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	class UGetActor*                                   m_queryFilter;                                            // 0x0030(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnTemplate, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1ObjectiveSystemRuntime.GetActor");
		return ptr;
	}

};


// Class V1ObjectiveSystemRuntime.OperatorSaveGame
// 0x00A0 (0x00C8 - 0x0028)
class UOperatorSaveGame : public UV1SaveGame
{
public:
	struct FOperatorSaveData                           saveData;                                                 // 0x0028(0x0050)
	struct FOperatorActorSaveData                      OperatorActorSaveData;                                    // 0x0078(0x0050)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1ObjectiveSystemRuntime.OperatorSaveGame");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
