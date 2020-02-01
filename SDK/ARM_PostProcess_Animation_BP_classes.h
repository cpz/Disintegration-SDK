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

// AnimBlueprintGeneratedClass ARM_PostProcess_Animation_BP.ARM_PostProcess_Animation_BP_C
// 0x18B8 (0x1B28 - 0x0270)
class UARM_PostProcess_Animation_BP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_BBF7317A41D5C45E33ABA8A622EA3D0A;      // 0x0278(0x0020)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0298(0x0008) MISSED OFFSET
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_4603C3674B871BC1419610B1193D29C3;    // 0x02A0(0x01B0)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_E391F8FD48B3C7936DA4ABBFD5995104;    // 0x0450(0x01B0)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_90277CFC41C104AA649FE8809AAB5DBE;    // 0x0600(0x01B0)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_89F192144D11B7D49A675D95DFC287C8;    // 0x07B0(0x01B0)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_490168EC4CEAE11BCA29D48895915EBE;    // 0x0960(0x01B0)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_56844EEA411533AE32CF138AE6DB765A;    // 0x0B10(0x01B0)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_CEF72CA84B101BE78B4B8F90D545C23F;    // 0x0CC0(0x01B0)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_6843B7FF475AECA4ABE7D59F3F7749B5;    // 0x0E70(0x01B0)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_C414CC9440D54426292B13A0710EAC26;    // 0x1020(0x01B0)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_4039A0424AC77876CAE7BE83518FC711;    // 0x11D0(0x01B0)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_94EA23AA4826BA25B68DDEBA7B2F35E6;    // 0x1380(0x01B0)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_64ECA4554BBE9548EBE94585EECAC54F;    // 0x1530(0x01B0)
	struct FAnimNode_SubInput                          AnimGraphNode_SubInput_828E45E14D1B991A6D2893A2FA9C3EBC;  // 0x16E0(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_2E73AD92439D3B2B634FF0AAD9942E37;// 0x1728(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_3F9519774A87C6E75F48988E836510C8;// 0x1748(0x0020)
	struct FAnimNode_RotationMultiplier                AnimGraphNode_RotationMultiplier_400550274D01F8C841422AA95A541208;// 0x1768(0x00F0)
	struct FAnimNode_RotationMultiplier                AnimGraphNode_RotationMultiplier_40D5D1E04FC8D5002AFDF08C0050E090;// 0x1858(0x00F0)
	struct FAnimNode_RotationMultiplier                AnimGraphNode_RotationMultiplier_31DF5DC94F8706208AC46B92E6D86FAF;// 0x1948(0x00F0)
	struct FAnimNode_RotationMultiplier                AnimGraphNode_RotationMultiplier_7B6BF9A245319A8215EED28029C666F9;// 0x1A38(0x00F0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ARM_PostProcess_Animation_BP.ARM_PostProcess_Animation_BP_C");
		return ptr;
	}


	void ExecuteUbergraph_ARM_PostProcess_Animation_BP(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
