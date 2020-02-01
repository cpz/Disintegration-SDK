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

// Class V1CustomAnimationRuntime.V1SequenceCollection
// 0x0010 (0x0038 - 0x0028)
class UV1SequenceCollection : public UObject
{
public:
	TArray<struct FV1SequenceCollectionEntry>          sequenceEntries;                                          // 0x0028(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CustomAnimationRuntime.V1SequenceCollection");
		return ptr;
	}

};


// Class V1CustomAnimationRuntime.AnimSetCharacter
// 0x0030 (0x0060 - 0x0030)
class UAnimSetCharacter : public UDataAsset
{
public:
	class UAnimSetIdles*                               idleSet;                                                  // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSetLocomotion*                          locomotionSet;                                            // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               m_weaponAimingBase;                                       // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAimOffsetBlendSpace*                        weaponAiming;                                             // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               m_weaponAimingHipBase;                                    // 0x0050(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAimOffsetBlendSpace*                        weaponAimingHip;                                          // 0x0058(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CustomAnimationRuntime.AnimSetCharacter");
		return ptr;
	}

};


// Class V1CustomAnimationRuntime.AnimSetLocomotion
// 0x0160 (0x0190 - 0x0030)
class UAnimSetLocomotion : public UDataAsset
{
public:
	class UAnimSequence*                               additiveOverlay;                                          // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UV1SequenceCollection*                       additiveCollection;                                       // 0x0038(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FDirectionalAnimSet                         startAnims;                                               // 0x0040(0x0020) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FDirectionalAnimSet                         stopAnims[0x4];                                           // 0x0060(0x0020) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FDirectionalAnimSet                         movementAnims[0x4];                                       // 0x00E0(0x0020) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              speedWarpMaxAuthoredSpeedRatio[0x4];                      // 0x0160(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               turnInPlaceLeft90;                                        // 0x0170(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               turnInPlaceLeft180;                                       // 0x0178(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               turnInPlaceRight90;                                       // 0x0180(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               turnInPlaceRight180;                                      // 0x0188(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CustomAnimationRuntime.AnimSetLocomotion");
		return ptr;
	}

};


// Class V1CustomAnimationRuntime.AnimSetIdles
// 0x0018 (0x0048 - 0x0030)
class UAnimSetIdles : public UDataAsset
{
public:
	class UAnimSequence*                               idleBasePose;                                             // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UV1SequenceCollection*                       additiveCollection;                                       // 0x0038(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UAimOffsetBlendSpace*                        idleAiming;                                               // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CustomAnimationRuntime.AnimSetIdles");
		return ptr;
	}

};


// Class V1CustomAnimationRuntime.AnimSetPosture
// 0x0020 (0x0050 - 0x0030)
class UAnimSetPosture : public UDataAsset
{
public:
	class UAnimSequence*                               idleBasePose;                                             // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UV1SequenceCollection*                       idleAdditiveCollection;                                   // 0x0038(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UAnimSequence*                               locomotionAdditiveOverlay;                                // 0x0040(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UV1SequenceCollection*                       locomotionAdditiveCollection;                             // 0x0048(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CustomAnimationRuntime.AnimSetPosture");
		return ptr;
	}

};


// Class V1CustomAnimationRuntime.V1AnimInstance
// 0x0030 (0x02A0 - 0x0270)
class UV1AnimInstance : public UAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0270(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnBoneSpinnerStop;                                        // 0x0278(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class USkeletalMeshComponent*                      m_skeletalMeshComponent;                                  // 0x0288(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class AActor*                                      m_owningActor;                                            // 0x0290(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0298(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CustomAnimationRuntime.V1AnimInstance");
		return ptr;
	}


	void OnEndPlay(class AActor** Actor, TEnumAsByte<EEndPlayReason>* Reason);
	bool IsPlayingAnyAnimationOnSlot(struct FName* SlotName);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
