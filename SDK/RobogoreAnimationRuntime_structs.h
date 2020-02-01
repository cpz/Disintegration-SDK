#pragma once

// Name: Robogore, Version: 1.1.176

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum RobogoreAnimationRuntime.eLocomotionState
enum class EeLocomotionState : uint8_t
{
	eLocomotionState__Starting     = 0,
	eLocomotionState__MainLoop     = 1,
	eLocomotionState__Stopping     = 2,
	eLocomotionState__TOTAL        = 3,
	eLocomotionState__eLocomotionState_MAX = 4
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct RobogoreAnimationRuntime.AnimNode_V1BoneSpinner
// 0x0060 (0x0128 - 0x00C8)
struct FAnimNode_V1BoneSpinner : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              m_boneToSpin;                                             // 0x00C8(0x0010) (Edit)
	TEnumAsByte<EAxis>                                 m_rotationAxis;                                           // 0x00D8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00D9(0x0003) MISSED OFFSET
	float                                              m_angularAcceleration;                                    // 0x00DC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              m_angularDeceleration;                                    // 0x00E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              m_maxRotationSpeed;                                       // 0x00E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      m_reverseRotation : 1;                                    // 0x00E8(0x0001) (Edit)
	unsigned char                                      m_spin : 1;                                               // 0x00E8(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00E9(0x0007) MISSED OFFSET
	class UAkAudioEvent*                               m_accelAudioEvent;                                        // 0x00F0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x00F8(0x0008) MISSED OFFSET
	class UAkAudioEvent*                               m_decelAudioEvent;                                        // 0x0100(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0108(0x0004) MISSED OFFSET
	float                                              m_currentRotationSpeed;                                   // 0x010C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              m_previousRotationSpeed;                                  // 0x0110(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              m_currentRotation;                                        // 0x0114(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	class UV1AudioComponent*                           m_audioComponent;                                         // 0x0118(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData04[0x1];                                       // 0x0120(0x0001) MISSED OFFSET
	unsigned char                                      m_isDecelerating;                                         // 0x0121(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x6];                                       // 0x0122(0x0006) MISSED OFFSET
};

// ScriptStruct RobogoreAnimationRuntime.AnimNode_V1CharacterStopping
// 0x0020 (0x0148 - 0x0128)
struct FAnimNode_V1CharacterStopping : public FAnimNode_V1DynamicSequencePlayer
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0128(0x0020) MISSED OFFSET
};

// ScriptStruct RobogoreAnimationRuntime.V1CharacterAnimInstanceProxy
// 0x0010 (0x0700 - 0x06F0)
struct FV1CharacterAnimInstanceProxy : public FV1AnimInstanceProxy
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x06F0(0x0010) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
