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

// BlueprintGeneratedClass CrewSceneCapture_BP.CrewSceneCapture_BP_C
// 0x0010 (0x0480 - 0x0470)
class ACrewSceneCapture_BP_C : public ACrewSceneCapture
{
public:
	class UParticleSystemComponent*                    Fog_Small_P;                                              // 0x0470(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        UI_Room_BP;                                               // 0x0478(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CrewSceneCapture_BP.CrewSceneCapture_BP_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
