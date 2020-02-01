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

// BlueprintGeneratedClass MultiplayerMenuGameMode_BP.MultiplayerMenuGameMode_BP_C
// 0x0008 (0x04E8 - 0x04E0)
class AMultiplayerMenuGameMode_BP_C : public AMultiplayerMenuGameMode
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x04E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MultiplayerMenuGameMode_BP.MultiplayerMenuGameMode_BP_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
