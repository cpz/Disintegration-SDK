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

// AnimBlueprintGeneratedClass GRD_PostProcess_Animation_BP.GRD_PostProcess_Animation_BP_C
// 0x0778 (0x09E8 - 0x0270)
class UGRD_PostProcess_Animation_BP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_6E8195B749F6F3339578549F07AB4E5F;      // 0x0278(0x0020)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0298(0x0008) MISSED OFFSET
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_E07106544AC1475BE19553B8F48DA171;    // 0x02A0(0x01B0)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_662C47E54B2DC86ABAF7EE9BD6A0EE99;    // 0x0450(0x01B0)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_4D41BC2B4F09DF12AE7123BB9B2ABFFA;    // 0x0600(0x01B0)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_F8ABF41C46B296163B12AA8E8620A8DA;    // 0x07B0(0x01B0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_811E8CC64FC128911BD849A7C9BF009B;// 0x0960(0x0020)
	struct FAnimNode_SubInput                          AnimGraphNode_SubInput_FFAF62624423D3FD73F6FEB1B6A33598;  // 0x0980(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_C60666C0446827E5E299ED88C5459C33;// 0x09C8(0x0020)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass GRD_PostProcess_Animation_BP.GRD_PostProcess_Animation_BP_C");
		return ptr;
	}


	void ExecuteUbergraph_GRD_PostProcess_Animation_BP(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
