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

// Enum V1CustomAnimationRuntime.EIKFootRootLocalAxis
enum class EIKFootRootLocalAxis : uint8_t
{
	EIKFootRootLocalAxis__NONE     = 0,
	EIKFootRootLocalAxis__X        = 1,
	EIKFootRootLocalAxis__Y        = 2,
	EIKFootRootLocalAxis__Z        = 3,
	EIKFootRootLocalAxis__EIKFootRootLocalAxis_MAX = 4
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct V1CustomAnimationRuntime.V1SequenceCollectionEntry
// 0x0050
struct FV1SequenceCollectionEntry
{
	class UAnimSequence*                               Sequence;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ChanceToPlay;                                             // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MinLoopCount;                                             // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxLoopCount;                                             // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinPlayRate;                                              // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxPlayRate;                                              // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              maxStartPlayPositionOffsetRatio;                          // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FAlphaBlend                                 blendInParams;                                            // 0x0020(0x0030) (Edit)
};

// ScriptStruct V1CustomAnimationRuntime.DirectionalAnimSet
// 0x0020
struct FDirectionalAnimSet
{
	class UAnimSequence*                               sequences[0x4];                                           // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct V1CustomAnimationRuntime.RandomAnimationSequenceCollection
// 0x0010
struct FRandomAnimationSequenceCollection
{
	TArray<struct FRandomPlayerSequenceEntry>          sequenceEntries;                                          // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct V1CustomAnimationRuntime.AxisSettings
// 0x0008
struct FAxisSettings
{
	TEnumAsByte<EAxis>                                 YawRotationAxis;                                          // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              BodyOrientationAlpha;                                     // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct V1CustomAnimationRuntime.BoneRef
// 0x0010
struct FBoneRef
{
	struct FBoneReference                              Bone;                                                     // 0x0000(0x0010) (Edit)
};

// ScriptStruct V1CustomAnimationRuntime.AnimMode_OrientationWarping
// 0x0040 (0x0050 - 0x0010)
struct FAnimMode_OrientationWarping : public FAnimNode_Base
{
	struct FPoseLink                                   BasePose;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible)
	float                                              LocomotionAngle;                                          // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FAxisSettings                               Settings;                                                 // 0x0024(0x0008) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	TArray<struct FBoneRef>                            SpineBones;                                               // 0x0030(0x0010) (Edit, ZeroConstructor)
	struct FBoneReference                              IKFootRootBone;                                           // 0x0040(0x0010) (Edit)
};

// ScriptStruct V1CustomAnimationRuntime.IKBones
// 0x0024
struct FIKBones
{
	struct FBoneReference                              IKFootBone;                                               // 0x0000(0x0010) (Edit)
	struct FBoneReference                              FKFootBone;                                               // 0x0010(0x0010) (Edit)
	int                                                NumBonesInLimb;                                           // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct V1CustomAnimationRuntime.PelvisAdjustmentInterp
// 0x0008
struct FPelvisAdjustmentInterp
{
	float                                              Stiffness;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Dampen;                                                   // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct V1CustomAnimationRuntime.AnimNode_SpeedWarping
// 0x0098 (0x0160 - 0x00C8)
struct FAnimNode_SpeedWarping : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              IKFootRootBone;                                           // 0x00C8(0x0010) (Edit)
	TArray<struct FIKBones>                            FeetDefinitions;                                          // 0x00D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBoneReference                              PelvisBone;                                               // 0x00E8(0x0010) (Edit)
	EIKFootRootLocalAxis                               SpeedWarpingAxisMode;                                     // 0x00F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00F9(0x0003) MISSED OFFSET
	float                                              SpeedScaling;                                             // 0x00FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PelvisAdjustmentAlpha;                                    // 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxIter;                                                  // 0x0104(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FPelvisAdjustmentInterp                     PelvisAdjustmentInterp;                                   // 0x0108(0x0008) (Edit, BlueprintVisible)
	bool                                               ClampIKUsingFKLeg;                                        // 0x0110(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4F];                                      // 0x0111(0x004F) MISSED OFFSET
};

// ScriptStruct V1CustomAnimationRuntime.IKFootLocation
// 0x0030
struct FIKFootLocation
{
	struct FVector                                     LimbRootLocation;                                         // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OriginLocation;                                           // 0x000C(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ActualLocation;                                           // 0x0018(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NewLocation;                                              // 0x0024(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct V1CustomAnimationRuntime.AnimNode_V1ApplyDeferredAdditive
// 0x0028 (0x0038 - 0x0010)
struct FAnimNode_V1ApplyDeferredAdditive : public FAnimNode_Base
{
	struct FPoseLink                                   Base;                                                     // 0x0010(0x0010) (Edit, BlueprintVisible)
	struct FName                                       LinkedName;                                               // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Alpha;                                                    // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseMeshSpaceAdditive;                                     // 0x002C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
	int                                                LODThreshold;                                             // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct V1CustomAnimationRuntime.AnimNode_V1DeferredAdditive
// 0x0068 (0x0078 - 0x0010)
struct FAnimNode_V1DeferredAdditive : public FAnimNode_Base
{
	struct FPoseLink                                   MainPose;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible)
	struct FPoseLink                                   Additive;                                                 // 0x0020(0x0010) (Edit, BlueprintVisible)
	bool                                               createDynamicAdditiveFromMainPose;                        // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	struct FName                                       LinkedName;                                               // 0x0034(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              blendAlpha;                                               // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                LODThreshold;                                             // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x34];                                      // 0x0044(0x0034) MISSED OFFSET
};

// ScriptStruct V1CustomAnimationRuntime.AnimNode_V1DynamicBlendSpacePlayer
// 0x01C0 (0x01F0 - 0x0030)
struct FAnimNode_V1DynamicBlendSpacePlayer : public FAnimNode_AssetPlayerBase
{
	float                                              X;                                                        // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Z;                                                        // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLoop;                                                    // 0x003C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	class UBlendSpace*                                 BlendSpace;                                               // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PlayRate;                                                 // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              startPosition;                                            // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               useAsSingleFrameEvaluator;                                // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0051(0x0003) MISSED OFFSET
	float                                              explicitNormalizedTime;                                   // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FAlphaBlend                                 assetBlend;                                               // 0x0058(0x0030) (Edit)
	unsigned char                                      UnknownData02[0x150];                                     // 0x0088(0x0150) MISSED OFFSET
	bool                                               m_isBlending;                                             // 0x01D8(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x17];                                      // 0x01D9(0x0017) MISSED OFFSET
};

// ScriptStruct V1CustomAnimationRuntime.AnimNode_V1DynamicAimOffset
// 0x0028 (0x0218 - 0x01F0)
struct FAnimNode_V1DynamicAimOffset : public FAnimNode_V1DynamicBlendSpacePlayer
{
	struct FPoseLink                                   BasePose;                                                 // 0x01F0(0x0010) (Edit, BlueprintVisible)
	int                                                LODThreshold;                                             // 0x0200(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Alpha;                                                    // 0x0204(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FInputScaleBias                             AlphaScaleBias;                                           // 0x0208(0x0008) (Edit, BlueprintVisible)
	bool                                               m_isLODEnabled;                                           // 0x0210(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0211(0x0003) MISSED OFFSET
	float                                              m_actualAlpha;                                            // 0x0214(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct V1CustomAnimationRuntime.AnimNode_V1DynamicSequencePlayerBase
// 0x00A8 (0x00D8 - 0x0030)
struct FAnimNode_V1DynamicSequencePlayerBase : public FAnimNode_AssetPlayerBase
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0030(0x0060) MISSED OFFSET
	bool                                               m_isBlendingInNewSequence;                                // 0x0090(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0091(0x0007) MISSED OFFSET
	struct FAlphaBlend                                 m_activeBlend;                                            // 0x0098(0x0030) (Transient)
	unsigned char                                      UnknownData02[0x10];                                      // 0x00C8(0x0010) MISSED OFFSET
};

// ScriptStruct V1CustomAnimationRuntime.AnimNode_V1DynamicSequenceCollectionPlayer
// 0x0030 (0x0108 - 0x00D8)
struct FAnimNode_V1DynamicSequenceCollectionPlayer : public FAnimNode_V1DynamicSequencePlayerBase
{
	class UV1SequenceCollection*                       sequenceCollection;                                       // 0x00D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UV1SequenceCollection*                       m_activeCollection;                                       // 0x00E0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<float>                                      m_normalizedPlayChances;                                  // 0x00E8(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00F8(0x0008) MISSED OFFSET
	int                                                m_maxLoopCount;                                           // 0x0100(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                m_currLoopCount;                                          // 0x0104(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct V1CustomAnimationRuntime.AnimNode_V1DynamicSequencePlayer
// 0x0050 (0x0128 - 0x00D8)
struct FAnimNode_V1DynamicSequencePlayer : public FAnimNode_V1DynamicSequencePlayerBase
{
	class UAnimSequence*                               AnimSequence;                                             // 0x00D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLoopAnimation;                                           // 0x00E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00E1(0x0003) MISSED OFFSET
	float                                              PlayRate;                                                 // 0x00E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              startPosition;                                            // 0x00E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               useAsSingleFrameEvaluator;                                // 0x00EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00ED(0x0003) MISSED OFFSET
	float                                              explicitTime;                                             // 0x00F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bTeleportToExplicitTime;                                  // 0x00F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00F5(0x0003) MISSED OFFSET
	struct FAlphaBlend                                 assetBlend;                                               // 0x00F8(0x0030) (Edit)
};

// ScriptStruct V1CustomAnimationRuntime.FootIKData
// 0x0068
struct FFootIKData
{
	struct FBoneReference                              IKDrivenBone;                                             // 0x0000(0x0010) (Edit)
	struct FBoneReference                              FKBone;                                                   // 0x0010(0x0010) (Edit)
	struct FRotator                                    currIKRotationOffset;                                     // 0x0020(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              currentVerticalIKOffset;                                  // 0x002C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              m_maxIKOffsetAboveFloor;                                  // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              m_maxIKOffsetAboveFloorWhenCrouched;                      // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    m_targetIKRotationOffset;                                 // 0x0038(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              m_targetVerticalIKOffset;                                 // 0x0044(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<struct FHitResult>                          m_lastHitResults;                                         // 0x0048(0x0010) (ZeroConstructor, Transient)
	TArray<struct FHitResult>                          m_lastValidHitResults;                                    // 0x0058(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct V1CustomAnimationRuntime.FootIKDriver
// 0x0090
struct FFootIKDriver
{
	float                                              m_IKAlphaMinDistanceFromCamera;                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              m_IKAlphaMaxDistanceFromCamera;                           // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              m_maxHipOffset;                                           // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              m_hipInterpSpeed;                                         // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              m_footInterpSpeed;                                        // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FBoneReference                              m_IKRootBone;                                             // 0x0014(0x0010) (Edit)
	struct FBoneReference                              m_pelvisBone;                                             // 0x0024(0x0010) (Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	TArray<struct FFootIKData>                         m_footIKData;                                             // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FFootIKData>                         m_footIKProxyData;                                        // 0x0048(0x0010) (ZeroConstructor, Transient)
	class UV1AnimInstance*                             m_animController;                                         // 0x0058(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              m_currLocalHipOffset;                                     // 0x0060(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              m_targetLocalHipOffset;                                   // 0x0064(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              m_currIKAlpha;                                            // 0x0068(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              m_targetIKAlpha;                                          // 0x006C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               m_isFootIKValid;                                          // 0x0070(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0071(0x0003) MISSED OFFSET
	struct FVector                                     m_actorVelocity;                                          // 0x0074(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      m_wantsIKTrace : 1;                                       // 0x0080(0x0001) (Transient)
	unsigned char                                      m_isIKSuspended : 1;                                      // 0x0080(0x0001) (Transient)
	unsigned char                                      UnknownData02[0xF];                                       // 0x0081(0x000F) MISSED OFFSET
};

// ScriptStruct V1CustomAnimationRuntime.AnimNode_V1FootIK
// 0x0098 (0x0160 - 0x00C8)
struct FAnimNode_V1FootIK : public FAnimNode_SkeletalControlBase
{
	struct FFootIKDriver                               m_IKDriver;                                               // 0x00C8(0x0090) (Edit)
	float                                              m_deltaTime;                                              // 0x0158(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x015C(0x0004) MISSED OFFSET
};

// ScriptStruct V1CustomAnimationRuntime.V1AnimLegIKDefinition
// 0x0030
struct FV1AnimLegIKDefinition
{
	struct FBoneReference                              IKFootBone;                                               // 0x0000(0x0010) (Edit)
	struct FBoneReference                              FKFootBone;                                               // 0x0010(0x0010) (Edit)
	int                                                NumBonesInLimb;                                           // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAxis>                                 FootBoneForwardAxis;                                      // 0x0024(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableRotationLimit;                                     // 0x0025(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0026(0x0002) MISSED OFFSET
	float                                              MinRotationAngle;                                         // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableKneeTwistCorrection;                               // 0x002C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
};

// ScriptStruct V1CustomAnimationRuntime.V1AnimLegIKData
// 0x0070
struct FV1AnimLegIKData
{
	unsigned char                                      UnknownData00[0x70];                                      // 0x0000(0x0070) MISSED OFFSET
};

// ScriptStruct V1CustomAnimationRuntime.AnimNode_V1LegIK
// 0x0028 (0x00F0 - 0x00C8)
struct FAnimNode_V1LegIK : public FAnimNode_SkeletalControlBase
{
	float                                              ReachPrecision;                                           // 0x00C8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxIterations;                                            // 0x00CC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FV1AnimLegIKDefinition>              LegsDefinition;                                           // 0x00D0(0x0010) (Edit, ZeroConstructor)
	TArray<struct FV1AnimLegIKData>                    LegsData;                                                 // 0x00E0(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct V1CustomAnimationRuntime.V1IKChain
// 0x0030
struct FV1IKChain
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct V1CustomAnimationRuntime.V1IKChainLink
// 0x001C
struct FV1IKChainLink
{
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0000(0x001C) MISSED OFFSET
};

// ScriptStruct V1CustomAnimationRuntime.V1AnimInstanceProxy
// 0x0060 (0x06F0 - 0x0690)
struct FV1AnimInstanceProxy : public FAnimInstanceProxy
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0690(0x0060) MISSED OFFSET
};

// ScriptStruct V1CustomAnimationRuntime.V1RandomAnimation_BehaviorNode
// 0x0018 (0x0080 - 0x0068)
struct FV1RandomAnimation_BehaviorNode : public FAnimNode_RandomPlayer
{
	struct FRandomAnimationSequenceCollection          sequenceCollection;                                       // 0x0068(0x0010) (Edit, BlueprintVisible)
	bool                                               m_LoopSingleSequence;                                     // 0x0078(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0079(0x0007) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
