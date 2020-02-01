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

// BlueprintGeneratedClass CrewPreview_NeonDreams_BP.CrewPreview_NeonDreams_BP_C
// 0x0078 (0x0598 - 0x0520)
class ACrewPreview_NeonDreams_BP_C : public ACrewPreviewActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0520(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USpotLightComponent*                         Jangler_Light;                                            // 0x0528(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCrewPreviewSkeletalMeshComponent*           AttachmentCameraPosition;                                 // 0x0530(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCrewPreviewSkeletalMeshComponent*           CannonR1;                                                 // 0x0538(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCrewPreviewSkeletalMeshComponent*           CannonL0;                                                 // 0x0540(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      GCW_MG_Left;                                              // 0x0548(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCrewPreviewSkeletalMeshComponent*           Pilot;                                                    // 0x0550(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCrewPreviewSkeletalMeshComponent*           Warrior2;                                                 // 0x0558(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      RailAccelerator;                                          // 0x0560(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCrewPreviewSkeletalMeshComponent*           Destroyer;                                                // 0x0568(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCrewPreviewSkeletalMeshComponent*           Warrior1;                                                 // 0x0570(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      Shotgun;                                                  // 0x0578(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCrewPreviewSkeletalMeshComponent*           Gravcycle;                                                // 0x0580(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      GCWeaponRig;                                              // 0x0588(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      GCW_MG_Right;                                             // 0x0590(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CrewPreview_NeonDreams_BP.CrewPreview_NeonDreams_BP_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void ExecuteUbergraph_CrewPreview_NeonDreams_BP(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
