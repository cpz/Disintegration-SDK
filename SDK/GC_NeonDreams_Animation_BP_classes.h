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

// AnimBlueprintGeneratedClass GC_NeonDreams_Animation_BP.GC_NeonDreams_Animation_BP_C
// 0x08D0 (0x0BD0 - 0x0300)
class UGC_NeonDreams_Animation_BP_C : public UGravcycleAnimationController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0300(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_8FAAE13644B2DAF34F1FA3A75C31C6BB;      // 0x0308(0x0020)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_147923904B87B7CE941A01A7ECB1E084;// 0x0328(0x00E0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_6B98D5EA4459A6D29E8765802D7BF7B2;// 0x0408(0x00E0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_9DFDB83E4673EE73BAF20991A09D4AA5;// 0x04E8(0x00C8)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1762CAA4404FB67B6649C5B837C95C2E;// 0x05B0(0x0078)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_0066C117470652C6A3EF8991DE24A12C;// 0x0628(0x00C8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_A170CBE94E135EB31D933AB6E4DD5AA2;// 0x06F0(0x00E0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_7CEF8527499C73E9EEA0BEA8C04EA52B;// 0x07D0(0x00C8)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_055B80FE47CA684F940DFA84EDDE48AE;// 0x0898(0x00C8)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A1C3A92C49D0BC4C0B0CFBB12E473F7D;// 0x0960(0x0078)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_1884F824475665F0E49105914B6D9C5F;// 0x09D8(0x00A0)
	struct FAnimNode_RefPose                           AnimGraphNode_IdentityPose_B9D9061F4E086333D8453F9F415AA188;// 0x0A78(0x0018)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_DEAE9FA8453A5FE7FC54F2A1BBD7A198;// 0x0A90(0x00C8)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_899B16DA4A441C098ED5D3A31E8FFF32;// 0x0B58(0x0078)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass GC_NeonDreams_Animation_BP.GC_NeonDreams_Animation_BP_C");
		return ptr;
	}


	void ExecuteUbergraph_GC_NeonDreams_Animation_BP(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
