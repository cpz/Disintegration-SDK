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

// BlueprintGeneratedClass RobogoreGameInstance_BP.RobogoreGameInstance_BP_C
// 0x000E (0x06E6 - 0x06D8)
class URobogoreGameInstance_BP_C : public URobogoreGameInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              DebugSlomo;                                               // 0x06E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DMGReduction;                                             // 0x06E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               MaxDMG;                                                   // 0x06E5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass RobogoreGameInstance_BP.RobogoreGameInstance_BP_C");
		return ptr;
	}


	void EvnFindSessions();
	void ReceiveInit();
	void ReceiveShutdown();
	void ExecuteUbergraph_RobogoreGameInstance_BP(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
