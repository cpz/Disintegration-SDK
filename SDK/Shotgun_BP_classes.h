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

// BlueprintGeneratedClass Shotgun_BP.Shotgun_BP_C
// 0x0010 (0x09E8 - 0x09D8)
class AShotgun_BP_C : public ARangedWeapon
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x09D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                      Main;                                                     // 0x09E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Shotgun_BP.Shotgun_BP_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void ExecuteUbergraph_Shotgun_BP(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
