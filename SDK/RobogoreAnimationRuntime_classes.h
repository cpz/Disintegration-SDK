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

// Class RobogoreAnimationRuntime.V1CharacterAnimationController
// 0x0190 (0x0430 - 0x02A0)
class UV1CharacterAnimationController : public UV1AnimInstance
{
public:
	class UCharacterAnimationComponent*                m_characterAnimationComponent;                            // 0x02A0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	float                                              m_lastComponentYaw;                                       // 0x02A8(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              m_speed;                                                  // 0x02AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              m_velocityZ;                                              // 0x02B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              m_locomotionAuthoredSpeed;                                // 0x02B4(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              m_yawOffsetLerpSpeedIntoSprint;                           // 0x02B8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              m_yawOffsetLerpSpeedOutOfSprint;                          // 0x02BC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              m_maxSpeedWarpThreshold;                                  // 0x02C0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              m_speedWarpWeight;                                        // 0x02C4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              m_playbackRateWeight;                                     // 0x02C8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              m_locomotionPlaybackRate;                                 // 0x02CC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              m_locomotionSpeedWarpingRate;                             // 0x02D0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              m_turnInPlaceAnimPosition;                                // 0x02D4(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UAnimSequence*                               m_currTurnInPlaceAnim;                                    // 0x02D8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UAnimSequence*                               m_currTurnInPlaceRecoveryAnim;                            // 0x02E0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UAnimSequence*                               m_turnInPlaceLeft90;                                      // 0x02E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               m_turnInPlaceLeft180;                                     // 0x02F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               m_turnInPlaceRight90;                                     // 0x02F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               m_turnInPlaceRight180;                                    // 0x0300(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     m_weaponIKWorldLocationR;                                 // 0x0308(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    m_weaponIKWorldRotationR;                                 // 0x0314(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     m_weaponIKWorldLocationL;                                 // 0x0320(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    m_weaponIKWorldRotationL;                                 // 0x032C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              m_handIKAlphaR;                                           // 0x0338(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              m_handIKAlphaL;                                           // 0x033C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EeLocomotionState                                  m_locomotionState;                                        // 0x0340(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	TEnumAsByte<EeGroundLocomotionState>               m_groundLocmotionState;                                   // 0x0341(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	TEnumAsByte<EeMoveDirection>                       m_locomotionDirection;                                    // 0x0342(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0343(0x0001) MISSED OFFSET
	float                                              m_locomotionDeltaAngleF;                                  // 0x0344(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              m_locomotionDeltaAngleB;                                  // 0x0348(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              m_locomotionDeltaAngleL;                                  // 0x034C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              m_locomotionDeltaAngleR;                                  // 0x0350(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              m_currentLocomotionDeltaAngle;                            // 0x0354(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              m_cardinalDirectionBlendTime;                             // 0x0358(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              m_cardinalDirectionSwitchAngleOffset;                     // 0x035C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               m_currLocomotionF;                                        // 0x0360(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UAnimSequence*                               m_currLocomotionB;                                        // 0x0368(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UAnimSequence*                               m_currLocomotionL;                                        // 0x0370(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UAnimSequence*                               m_currLocomotionR;                                        // 0x0378(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UAnimSequence*                               m_currLocomotionStartAnim;                                // 0x0380(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              m_startAnimPosition;                                      // 0x0388(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              m_startAnimDirectionAngle;                                // 0x038C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     m_startPredictionMarker;                                  // 0x0390(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x039C(0x0004) MISSED OFFSET
	class UCharacterWeaponHandlingComponent*           m_weaponHandlingComponent;                                // 0x03A0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UAimOffsetBlendSpace*                        m_idleAimOffset;                                          // 0x03A8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UAnimSequence*                               m_weaponAimOffsetBase;                                    // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UAimOffsetBlendSpace*                        m_weaponAimOffest;                                        // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UAnimSequence*                               m_weaponHipAimOffsetBase;                                 // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UAimOffsetBlendSpace*                        m_weaponHipAimOffest;                                     // 0x03C8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              m_aimOffsetPitch;                                         // 0x03D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              m_aimOffsetYaw;                                           // 0x03D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSetCharacter*                           m_defaultCharacterAnimSet;                                // 0x03D8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSetCharacter*                           m_activeAnimSet;                                          // 0x03E0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x03E8(0x0010) MISSED OFFSET
	class UV1SequenceCollection*                       m_idleAdditives;                                          // 0x03F8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UAnimSequence*                               m_idleBasePose;                                           // 0x0400(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UV1SequenceCollection*                       m_locomotionAdditiveCollection;                           // 0x0408(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UAnimSequence*                               m_locomotionAdditiveOverlay;                              // 0x0410(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UAnimSetPosture*                             m_activePosture;                                          // 0x0418(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      m_isPlayingUpperBodyMontage : 1;                          // 0x0420(0x0001) (BlueprintVisible, BlueprintReadOnly, Transient)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0421(0x0003) MISSED OFFSET
	float                                              m_lowerBodyMotionAlpha;                                   // 0x0424(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              m_overrideUpperBodyAimAlpha;                              // 0x0428(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      m_isPlayingLocomotionStart : 1;                           // 0x042C(0x0001) (Transient)
	unsigned char                                      m_isAlive : 1;                                            // 0x042C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	unsigned char                                      UnknownData04 : 2;                                        // 0x042C(0x0001)
	unsigned char                                      m_isInAir : 1;                                            // 0x042C(0x0001) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      m_hasDownwardVelocity : 1;                                // 0x042C(0x0001) (BlueprintVisible, Transient)
	unsigned char                                      m_hasPositiveSpeedWhileAccelerating : 1;                  // 0x042C(0x0001) (BlueprintVisible, Transient)
	unsigned char                                      m_turningInPlace : 1;                                     // 0x042C(0x0001) (BlueprintVisible, Transient)
	unsigned char                                      m_isAccelerating : 1;                                     // 0x042D(0x0001) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      m_isRangedAiming : 1;                                     // 0x042D(0x0001) (BlueprintVisible, Transient)
	unsigned char                                      m_wantsHipAiming : 1;                                     // 0x042D(0x0001) (BlueprintVisible, Transient)
	unsigned char                                      m_hasLocomotionAdditiveOverlay : 1;                       // 0x042D(0x0001) (Transient)
	unsigned char                                      m_hasLocomotionAdditiveCollection : 1;                    // 0x042D(0x0001) (Transient)
	unsigned char                                      m_startedVisible : 1;                                     // 0x042D(0x0001) (Transient)
	unsigned char                                      UnknownData05[0x2];                                       // 0x042E(0x0002) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class RobogoreAnimationRuntime.V1CharacterAnimationController");
		return ptr;
	}


	void AnimNotify_TurnInPlaceRecoveryBegin();
	void AnimNotify_TurnInPlaceEnd();
	void AnimNotify_LocomotionStartEnd();
	void AnimNotify_LocomotionStartBegin();
	void AnimNotify_LocomotionLoopBegin();
	void AnimNotify_IdleStateExit();
	void AnimNotify_IdleStateEnter();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
