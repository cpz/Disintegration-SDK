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

// BlueprintGeneratedClass PulseBow_BP.PulseBow_BP_C
// 0x0008 (0x09E0 - 0x09D8)
class APulseBow_BP_C : public ARangedWeapon
{
public:
	class USkeletalMeshComponent*                      Main;                                                     // 0x09D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PulseBow_BP.PulseBow_BP_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
