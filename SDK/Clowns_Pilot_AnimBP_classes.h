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

// AnimBlueprintGeneratedClass Clowns_Pilot_AnimBP.Clowns_Pilot_AnimBP_C
// 0x0549 (0x07B9 - 0x0270)
class UClowns_Pilot_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_D37AD74B41CEDB8B789F20B184997444;      // 0x0278(0x0020)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D2638EAE4EDBB29D5C05F99DEE32D5F7;// 0x0298(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9DE355A24E17FE88BEC45498FDA755B7;// 0x02C0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7358D2C840A7E5B109C1848B09E4A154;// 0x02E8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0C692F4B4162A9C0C49DC49E86D1FB92;// 0x0310(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9CF430B44E6C373ACEDCBC94E61E7278;// 0x0338(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7B257C2C4C15D3F28926EDABA555A372;// 0x0360(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FD92D51445A44F4307689DB7195ABAE5;// 0x0388(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A3BCFC9E459E16EBE9AF3893F42DF39D;// 0x03B0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_97B707C94C5BAB62AE5608AECE899BCF;// 0x03D8(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3EAA685E434031598A2248ADEA1DDFBE;// 0x0400(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_A8AABA1045A6C7A49B6D9FAE7C6E5E14;// 0x0478(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_670CCA6F42E2C0494A581D97B52DC71B;// 0x0498(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_7111E6B3482ABDE39DDD06A92BEF2BB6;// 0x0510(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7546075740F9C4427A3FB395811A69C1;// 0x0530(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_DA879136428E362E252AEEAB38C07886;// 0x05A8(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5804AA9141A9D82D87F8F0AA5951CACC;// 0x05C8(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_7F7B48524BBDC8A27745939CF0E0E3C6;// 0x0640(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_47BAC8D3490DBE0DB67C5E8344A4FCFD;// 0x0660(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_57FD753C45E5FA5CF32EF3AACBC2B37B;// 0x06D8(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_DDE058414F7ECA6FB63BF8880A2E273A;// 0x06F8(0x00B0)
	bool                                               ConfirmSelection;                                         // 0x07A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x07A9(0x0007) MISSED OFFSET
	class UClass*                                      Crew;                                                     // 0x07B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsHighlighted;                                            // 0x07B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Clowns_Pilot_AnimBP.Clowns_Pilot_AnimBP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_Clowns_Pilot_AnimBP_AnimGraphNode_TransitionResult_7B257C2C4C15D3F28926EDABA555A372();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Clowns_Pilot_AnimBP_AnimGraphNode_TransitionResult_A3BCFC9E459E16EBE9AF3893F42DF39D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Clowns_Pilot_AnimBP_AnimGraphNode_TransitionResult_D2638EAE4EDBB29D5C05F99DEE32D5F7();
	void BlueprintBeginPlay();
	void EVN_CrewHighlight(class UV1EventBase** V1Event);
	void ExecuteUbergraph_Clowns_Pilot_AnimBP(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
