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

// BlueprintGeneratedClass AnimNotify_AkEvent.AnimNotify_AkEvent_C
// 0x0009 (0x0041 - 0x0038)
class UAnimNotify_AkEvent_C : public UAnimNotify
{
public:
	class UAkAudioEvent*                               Event;                                                    // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsManagedSound;                                           // 0x0040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AnimNotify_AkEvent.AnimNotify_AkEvent_C");
		return ptr;
	}


	bool Received_Notify(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
