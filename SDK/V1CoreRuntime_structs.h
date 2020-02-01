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

// Enum V1CoreRuntime.eActionTransformComponent
enum class EeActionTransformComponent : uint8_t
{
	eActionTransformComponent__Translation = 0,
	eActionTransformComponent__Rotation = 1,
	eActionTransformComponent__Scale = 2,
	eActionTransformComponent__eActionTransformComponent_MAX = 3
};


// Enum V1CoreRuntime.eActionUMGTransformComponent
enum class EeActionUMGTransformComponent : uint8_t
{
	eActionUMGTransformComponent__Translation = 0,
	eActionUMGTransformComponent__Rotation = 1,
	eActionUMGTransformComponent__Scale = 2,
	eActionUMGTransformComponent__Shear = 3,
	eActionUMGTransformComponent__Pivot = 4,
	eActionUMGTransformComponent__eActionUMGTransformComponent_MAX = 5
};


// Enum V1CoreRuntime.eActorLifeCycleState
enum class EeActorLifeCycleState : uint8_t
{
	eActorLifeCycleState__Prespawned = 0,
	eActorLifeCycleState__Spawning = 1,
	eActorLifeCycleState__Alive    = 2,
	eActorLifeCycleState__Incapacitated = 3,
	eActorLifeCycleState__Dying    = 4,
	eActorLifeCycleState__Dead     = 5,
	eActorLifeCycleState__Destroyed = 6,
	eActorLifeCycleState__kNUM     = 7,
	eActorLifeCycleState__kINVALID = 8,
	eActorLifeCycleState__eActorLifeCycleState_MAX = 9
};


// Enum V1CoreRuntime.eMoveDirection
enum class EeMoveDirection : uint8_t
{
	eMoveDirection__Forward        = 0,
	eMoveDirection__Right          = 1,
	eMoveDirection__Back           = 2,
	eMoveDirection__Left           = 3,
	eMoveDirection__TOTAL          = 4,
	eMoveDirection__eMoveDirection_MAX = 5
};


// Enum V1CoreRuntime.eGroundLocomotionState
enum class EeGroundLocomotionState : uint8_t
{
	eGroundLocomotionState__Walk   = 0,
	eGroundLocomotionState__Jog    = 1,
	eGroundLocomotionState__Sprint = 2,
	eGroundLocomotionState__SuperSprint = 3,
	eGroundLocomotionState__TOTAL  = 4,
	eGroundLocomotionState__eGroundLocomotionState_MAX = 5
};


// Enum V1CoreRuntime.eCollisionMaskBits
enum class EeCollisionMaskBits : uint8_t
{
	eCollisionMaskBits__DroneAltitudeFilterBit = 0,
	eCollisionMaskBits__Team1      = 1,
	eCollisionMaskBits__Team2      = 2,
	eCollisionMaskBits__LevelBoundaryFilterBit = 3,
	eCollisionMaskBits__eCollisionMaskBits_MAX = 4
};


// Enum V1CoreRuntime.eGameplayCategoryChange
enum class EeGameplayCategoryChange : uint8_t
{
	eGameplayCategoryChange__Added = 0,
	eGameplayCategoryChange__Removed = 1,
	eGameplayCategoryChange__eGameplayCategoryChange_MAX = 2
};


// Enum V1CoreRuntime.eV1PlayerInputType
enum class EeV1PlayerInputType : uint8_t
{
	eV1PlayerInputType__MouseKeyboard = 0,
	eV1PlayerInputType__Gamepad    = 1,
	eV1PlayerInputType__NONE       = 2,
	eV1PlayerInputType__eV1PlayerInputType_MAX = 3
};


// Enum V1CoreRuntime.eStatWriteRule
enum class EeStatWriteRule : uint8_t
{
	eStatWriteRule__Accumulate     = 0,
	eStatWriteRule__KeepLowest     = 1,
	eStatWriteRule__KeepHighest    = 2,
	eStatWriteRule__Overwrite      = 3,
	eStatWriteRule__Average        = 4,
	eStatWriteRule__eStatWriteRule_MAX = 5
};


// Enum V1CoreRuntime.eToggleEnabledState
enum class EeToggleEnabledState : uint8_t
{
	eToggleEnabledState__Disabled  = 0,
	eToggleEnabledState__Enabled   = 1,
	eToggleEnabledState__kNUM      = 2,
	eToggleEnabledState__kINVALID  = 3,
	eToggleEnabledState__eToggleEnabledState_MAX = 4
};


// Enum V1CoreRuntime.eUnitAIMovmentConfigs
enum class EeUnitAIMovmentConfigs : uint8_t
{
	eUnitAIMovmentConfigs__Patrol  = 0,
	eUnitAIMovmentConfigs__Wander  = 1,
	eUnitAIMovmentConfigs__Combat  = 2,
	eUnitAIMovmentConfigs__FollowCommander = 3,
	eUnitAIMovmentConfigs__GetToCommandPulse = 4,
	eUnitAIMovmentConfigs__AbilitySprint = 5,
	eUnitAIMovmentConfigs__Total   = 6,
	eUnitAIMovmentConfigs__CUSTOM  = 7,
	eUnitAIMovmentConfigs__eUnitAIMovmentConfigs_MAX = 8
};


// Enum V1CoreRuntime.eV1AttributeType
enum class EeV1AttributeType : uint8_t
{
	eV1AttributeType__Health       = 0,
	eV1AttributeType__HealthRegenRate = 1,
	eV1AttributeType__HealthRegenCooldown = 2,
	eV1AttributeType__Shields      = 3,
	eV1AttributeType__ShieldsRegenRate = 4,
	eV1AttributeType__ShieldsRegenCooldown = 5,
	eV1AttributeType__Damage       = 6,
	eV1AttributeType__MaxMovementSpeed = 7,
	eV1AttributeType__MaxMovementAcceleration = 8,
	eV1AttributeType__DamageReduction = 9,
	eV1AttributeType__HealthLeech  = 10,
	eV1AttributeType__ShieldLeech  = 11,
	eV1AttributeType__ReloadSpeed  = 12,
	eV1AttributeType__FireRate     = 13,
	eV1AttributeType__Invulnerable = 14,
	eV1AttributeType__Stunned      = 15,
	eV1AttributeType__StunVulnerable = 16,
	eV1AttributeType__Invisible    = 17,
	eV1AttributeType__VisionDisruption = 18,
	eV1AttributeType__GC_CanMoveForwardBack = 19,
	eV1AttributeType__GC_CanMoveUpDown = 20,
	eV1AttributeType__GC_CanMoveLeftRight = 21,
	eV1AttributeType__GC_CanRotateLeftRight = 22,
	eV1AttributeType__GC_CanPitchUpDown = 23,
	eV1AttributeType__GC_CanZoom   = 24,
	eV1AttributeType__GC_CanUseWeapons = 25,
	eV1AttributeType__GC_CanBoost  = 26,
	eV1AttributeType__GC_CanSwitchAbilities = 27,
	eV1AttributeType__GC_CanVisionMode = 28,
	eV1AttributeType__GC_CanEmote  = 29,
	eV1AttributeType__GC_CanPrimaryCommandPulse = 30,
	eV1AttributeType__GC_CanInteractCommandPulse = 31,
	eV1AttributeType__GC_CanPaintEnemyCommandPulse = 32,
	eV1AttributeType__GC_CanUnitAbilities = 33,
	eV1AttributeType__GC_CanSecondGear = 34,
	eV1AttributeType__INVALID      = 35,
	eV1AttributeType__eV1AttributeType_MAX = 36
};


// Enum V1CoreRuntime.eV1ElementMenuTypes
enum class EeV1ElementMenuTypes : uint8_t
{
	eV1ElementMenuTypes__Normal    = 0,
	eV1ElementMenuTypes__Gameplay  = 1,
	eV1ElementMenuTypes__Popup     = 2,
	eV1ElementMenuTypes__Tab       = 3,
	eV1ElementMenuTypes__eV1ElementMenuTypes_MAX = 4
};


// Enum V1CoreRuntime.eV1SoundEventType
enum class EeV1SoundEventType : uint8_t
{
	eV1SoundEventType__NavHover    = 0,
	eV1SoundEventType__NavUnhover  = 1,
	eV1SoundEventType__NavSelect   = 2,
	eV1SoundEventType__NavError    = 3,
	eV1SoundEventType__eV1SoundEventType_MAX = 4
};


// Enum V1CoreRuntime.eV1MenuBackoutBehavior
enum class EeV1MenuBackoutBehavior : uint8_t
{
	eV1MenuBackoutBehavior__Ignore = 0,
	eV1MenuBackoutBehavior__Deactivate = 1,
	eV1MenuBackoutBehavior__DeactivateDestroy = 2,
	eV1MenuBackoutBehavior__eV1MenuBackoutBehavior_MAX = 3
};


// Enum V1CoreRuntime.eV1GameplayEffectStackingPolicy
enum class EeV1GameplayEffectStackingPolicy : uint8_t
{
	eV1GameplayEffectStackingPolicy__NoStacking = 0,
	eV1GameplayEffectStackingPolicy__UseHighestDuration = 1,
	eV1GameplayEffectStackingPolicy__UseLowestDuration = 2,
	eV1GameplayEffectStackingPolicy__DropPastStackLimit = 3,
	eV1GameplayEffectStackingPolicy__NoLimit = 4,
	eV1GameplayEffectStackingPolicy__eV1GameplayEffectStackingPolicy_MAX = 5
};


// Enum V1CoreRuntime.eV1GlyphPlatform
enum class EeV1GlyphPlatform : uint8_t
{
	eV1GlyphPlatform__PC           = 0,
	eV1GlyphPlatform__Xbox         = 1,
	eV1GlyphPlatform__PS           = 2,
	eV1GlyphPlatform__eV1GlyphPlatform_MAX = 3
};


// Enum V1CoreRuntime.eV1OverlapShapeMode
enum class EeV1OverlapShapeMode : uint8_t
{
	eV1OverlapShapeMode__SimpleRadius = 0,
	eV1OverlapShapeMode__ParentComponentShape = 1,
	eV1OverlapShapeMode__eV1OverlapShapeMode_MAX = 2
};


// Enum V1CoreRuntime.eV1OverlapTestType
enum class EeV1OverlapTestType : uint8_t
{
	eV1OverlapTestType__PhysicsOverlap = 0,
	eV1OverlapTestType__ObjectsOfClassLookup = 1,
	eV1OverlapTestType__eV1OverlapTestType_MAX = 2
};


// Enum V1CoreRuntime.EV1DescendantScrollDestination
enum class EV1DescendantScrollDestination : uint8_t
{
	EV1DescendantScrollDestination__IntoView = 0,
	EV1DescendantScrollDestination__TopOrLeft = 1,
	EV1DescendantScrollDestination__Center = 2,
	EV1DescendantScrollDestination__EV1DescendantScrollDestination_MAX = 3
};


// Enum V1CoreRuntime.eV1TextCase
enum class EeV1TextCase : uint8_t
{
	eV1TextCase__NONE              = 0,
	eV1TextCase__ToUpper           = 1,
	eV1TextCase__ToLower           = 2,
	eV1TextCase__eV1TextCase_MAX   = 3
};


// Enum V1CoreRuntime.eTileFocusWidgetType
enum class EeTileFocusWidgetType : uint8_t
{
	eTileFocusWidgetType__LastHovered = 0,
	eTileFocusWidgetType__FirstItem = 1,
	eTileFocusWidgetType__None     = 2,
	eTileFocusWidgetType__eTileFocusWidgetType_MAX = 3
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct V1CoreRuntime.UMGColorWrapper
// 0x0028
struct FUMGColorWrapper
{
	class UButton*                                     Button;                                                   // 0x0000(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UImage*                                      Image;                                                    // 0x0008(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  TextBlock;                                                // 0x0010(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UUserWidget*                                 UserWidget;                                               // 0x0018(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UWidget*                                     m_widget;                                                 // 0x0020(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
};

// ScriptStruct V1CoreRuntime.UMGActionTransform
// 0x0024
struct FUMGActionTransform
{
	struct FVector2D                                   Translation;                                              // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              Angle;                                                    // 0x0008(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector2D                                   Scale;                                                    // 0x000C(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector2D                                   Shear;                                                    // 0x0014(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector2D                                   Pivot;                                                    // 0x001C(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct V1CoreRuntime.StateExitWait
// 0x0008
struct FStateExitWait
{
	EeActorLifeCycleState                              State;                                                    // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              waitTime;                                                 // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct V1CoreRuntime.V1AttributeModData
// 0x0018
struct FV1AttributeModData
{
	float                                              baseConstantAdd;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              basePercentageAdd;                                        // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              baseMultiplier;                                           // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              postConstantAdd;                                          // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              postPercentageAdd;                                        // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              postMultiplier;                                           // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct V1CoreRuntime.V1AttributeCurrentValueModConfig
// 0x000C
struct FV1AttributeCurrentValueModConfig
{
	bool                                               treatAsPercentage;                                        // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              targetAdd;                                                // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              addAmountPerSec;                                          // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct V1CoreRuntime.V1AttributeEffectData
// 0x0050
struct FV1AttributeEffectData
{
	struct FGameplayTag                                attributeTag;                                             // 0x0000(0x0008) (Edit)
	struct FV1AttributeModData                         maxModConfig;                                             // 0x0008(0x0018) (Edit)
	struct FV1AttributeCurrentValueModConfig           currentValueModConfig;                                    // 0x0020(0x000C) (Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	class UV1AttributeMod*                             maxModInst;                                               // 0x0030(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UV1Attribute*                                foundAttribute;                                           // 0x0038(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UV1AttributeModifier*                        foundModifier;                                            // 0x0040(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	EeV1AttributeType                                  attributeType;                                            // 0x0048(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
};

// ScriptStruct V1CoreRuntime.V1GameplayEffectSpec
// 0x0148
struct FV1GameplayEffectSpec
{
	bool                                               isInstant;                                                // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Duration;                                                 // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               persistent;                                               // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              minTimeBetweenTicksInSeconds;                             // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               alwaysTickOnComplete;                                     // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               firstTickIsMinDuration;                                   // 0x0011(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0012(0x0006) MISSED OFFSET
	TArray<struct FV1AttributeEffectData>              attributeEffects;                                         // 0x0018(0x0010) (Edit, ZeroConstructor)
	TArray<struct FGameplayTag>                        statusAttributesThatBlock;                                // 0x0028(0x0010) (Edit, ZeroConstructor)
	TArray<struct FGameplayTag>                        statusAttributesToAdd;                                    // 0x0038(0x0010) (Edit, ZeroConstructor)
	TArray<struct FGameplayTag>                        statusAttributesToDisable;                                // 0x0048(0x0010) (Edit, ZeroConstructor)
	TArray<struct FGameplayTag>                        statusAttributesToClear;                                  // 0x0058(0x0010) (Edit, ZeroConstructor)
	TArray<struct FGameplayTag>                        gameplayEffectTypesThatBlock;                             // 0x0068(0x0010) (Edit, ZeroConstructor)
	TArray<struct FGameplayTag>                        gameplayEffectCategoriesThatBlock;                        // 0x0078(0x0010) (Edit, ZeroConstructor)
	TArray<struct FGameplayTag>                        gameplayEffectTypesToRemove;                              // 0x0088(0x0010) (Edit, ZeroConstructor)
	TArray<struct FGameplayTag>                        gameplayEffectCategoriesToRemove;                         // 0x0098(0x0010) (Edit, ZeroConstructor)
	struct FGameplayTagContainer                       gameplayEffectTagsThatSuppress;                           // 0x00A8(0x0020) (Edit)
	struct FGameplayTagContainer                       gameplayEffectCategoriesThatSuppress;                     // 0x00C8(0x0020) (Edit)
	struct FGameplayTag                                uniqueEffectTag;                                          // 0x00E8(0x0008) (Edit)
	struct FGameplayTag                                effectCategory;                                           // 0x00F0(0x0008) (Edit)
	struct FGameplayTag                                effectApplicationStatCategoryTag;                         // 0x00F8(0x0008) (Edit)
	EeV1GameplayEffectStackingPolicy                   stackingPolicy;                                           // 0x0100(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0101(0x0003) MISSED OFFSET
	uint32_t                                           uniqueEffectStackLimit;                                   // 0x0104(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<EeV1AttributeType>                          statusesThatBlock;                                        // 0x0108(0x0010) (ZeroConstructor)
	TArray<EeV1AttributeType>                          statusesToAdd;                                            // 0x0118(0x0010) (ZeroConstructor)
	TArray<EeV1AttributeType>                          statusesToDisable;                                        // 0x0128(0x0010) (ZeroConstructor)
	TArray<EeV1AttributeType>                          statusesToClear;                                          // 0x0138(0x0010) (ZeroConstructor)
};

// ScriptStruct V1CoreRuntime.PostAudioRTPCParam
// 0x0018
struct FPostAudioRTPCParam
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (Edit, ZeroConstructor)
	float                                              Value;                                                    // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct V1CoreRuntime.TimeDilationRequest
// 0x0030
struct FTimeDilationRequest
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	float                                              m_desiredTimeScale;                                       // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              m_lerpSpeedIn;                                            // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              m_lerpSpeedOut;                                           // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              m_duration;                                               // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               m_dilationAudioEventIn;                                   // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               m_dilationAudioEventOut;                                  // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
};

// ScriptStruct V1CoreRuntime.V1ActionContext
// 0x0020
struct FV1ActionContext
{
	class AActor*                                      Actor;                                                    // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       componentName;                                            // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UActorComponent*                             Component;                                                // 0x0010(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UWidget*                                     Widget;                                                   // 0x0018(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct V1CoreRuntime.AIMovementConfiguration
// 0x0018
struct FAIMovementConfiguration
{
	class UV1AIMovementLogic*                          m_customLogicInst;                                        // 0x0000(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               m_useSharedLogicClass;                                    // 0x0008(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	class UClass*                                      m_sharedLogicSubclass;                                    // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct V1CoreRuntime.V1AttributeInstigator
// 0x0018
struct FV1AttributeInstigator
{
	class AActor*                                      instigatorActor;                                          // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UActorComponent*                             instigatorComponent;                                      // 0x0008(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AController*                                 instigatorController;                                     // 0x0010(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct V1CoreRuntime.ToolTipContext
// 0x0028
struct FToolTipContext
{
	struct FName                                       m_actionName;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FText                                       m_contextDescription;                                     // 0x0008(0x0018) (Edit)
	unsigned char                                      m_isEnabled : 1;                                          // 0x0020(0x0001) (Edit)
	unsigned char                                      m_useForController : 1;                                   // 0x0020(0x0001) (Edit)
	unsigned char                                      m_useForMouseAndKeyboard : 1;                             // 0x0020(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct V1CoreRuntime.V1MenuActions
// 0x0040
struct FV1MenuActions
{
	class UClass*                                      hoverActionClass;                                         // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UV1ActionClip*                               hoverActionClip;                                          // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UClass*                                      unhoverActionClass;                                       // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UV1ActionClip*                               unhoverActionClip;                                        // 0x0018(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UClass*                                      pressedActionClass;                                       // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UV1ActionClip*                               pressedActionClip;                                        // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UClass*                                      releasedActionClass;                                      // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UV1ActionClip*                               releasedActionClip;                                       // 0x0038(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct V1CoreRuntime.V1ComboBoxStyle
// 0x03F0 (0x03F8 - 0x0008)
struct FV1ComboBoxStyle : public FSlateWidgetStyle
{
	struct FComboButtonStyle                           ComboButtonStyle;                                         // 0x0008(0x03A0) (Edit, BlueprintVisible)
	struct FMargin                                     m_menuItemMargin;                                         // 0x03A8(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     m_rowPaddingMargin;                                       // 0x03B8(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FSlateSound                                 PressedSlateSound;                                        // 0x03C8(0x0018) (Edit, BlueprintVisible)
	struct FSlateSound                                 SelectionChangeSlateSound;                                // 0x03E0(0x0018) (Edit, BlueprintVisible)
};

// ScriptStruct V1CoreRuntime.SpecialKeyMenuActivation
// 0x0038
struct FSpecialKeyMenuActivation
{
	struct FKey                                        m_pcActivationKey;                                        // 0x0000(0x0018) (Edit)
	struct FKey                                        m_consoleActivationKey;                                   // 0x0018(0x0018) (Edit)
	class UClass*                                      m_menuClass;                                              // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct V1CoreRuntime.V1ForceFeedbackChannelDetails
// 0x0090
struct FV1ForceFeedbackChannelDetails
{
	unsigned char                                      bIsLargeRumble : 1;                                       // 0x0000(0x0001) (Edit)
	unsigned char                                      bIsSmallRumble : 1;                                       // 0x0000(0x0001) (Edit)
	unsigned char                                      bIsLeftTriggerRumble : 1;                                 // 0x0000(0x0001) (Edit)
	unsigned char                                      bIsRightTriggerRumble : 1;                                // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FRuntimeFloatCurve                          Curve;                                                    // 0x0008(0x0088) (Edit)
};

// ScriptStruct V1CoreRuntime.GameplayEffectAttributeChanges
// 0x0010
struct FGameplayEffectAttributeChanges
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct V1CoreRuntime.V1Glyph
// 0x0018
struct FV1Glyph
{
	class UTexture2D*                                  PCTextureGlyph;                                           // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  XBoxTextureGlyph;                                         // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  PSTextureGlyph;                                           // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct V1CoreRuntime.V1GlyphAxis
// 0x0050
struct FV1GlyphAxis
{
	TMap<float, struct FV1Glyph>                       m_axisImages;                                             // 0x0000(0x0050) (Edit, ZeroConstructor)
};

// ScriptStruct V1CoreRuntime.V1GlyphOverlayStyle
// 0x0030 (0x0038 - 0x0008)
struct FV1GlyphOverlayStyle : public FSlateWidgetStyle
{
	TEnumAsByte<EHorizontalAlignment>                  m_imageHorizontalAlignment;                               // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    m_imageVerticalAlignment;                                 // 0x0009(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000A(0x0002) MISSED OFFSET
	struct FMargin                                     m_imagePadding;                                           // 0x000C(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHorizontalAlignment>                  m_textHorizontalAlignment;                                // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    m_textVerticalAlignment;                                  // 0x001D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x001E(0x0002) MISSED OFFSET
	struct FMargin                                     m_textPadding;                                            // 0x0020(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      m_imageMatchSize : 1;                                     // 0x0030(0x0001) (Edit)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};

// ScriptStruct V1CoreRuntime.MultiVoiceContainer
// 0x0018
struct FMultiVoiceContainer
{
	int                                                m_voiceCount;                                             // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<class UV1AudioVoice*>                       m_voicePool;                                              // 0x0008(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct V1CoreRuntime.V1OptionsStyle
// 0x0388 (0x0390 - 0x0008)
struct FV1OptionsStyle : public FSlateWidgetStyle
{
	struct FSlateColor                                 m_backgroundColorAndOpacity;                              // 0x0008(0x0028) (Edit, BlueprintVisible)
	struct FSlateColor                                 m_foregroundColorAndOpacity;                              // 0x0030(0x0028) (Edit, BlueprintVisible)
	struct FSlateBrush                                 m_leftUnfocusedArrowBrush;                                // 0x0058(0x0088) (Edit, BlueprintVisible)
	struct FSlateBrush                                 m_leftFocusedArrowBrush;                                  // 0x00E0(0x0088) (Edit, BlueprintVisible)
	struct FSlateBrush                                 m_rightUnfocusedArrowBrush;                               // 0x0168(0x0088) (Edit, BlueprintVisible)
	struct FSlateBrush                                 m_rightFocusedArrowBrush;                                 // 0x01F0(0x0088) (Edit, BlueprintVisible)
	struct FSlateBrush                                 m_focusedbackgroundBrush;                                 // 0x0278(0x0088) (Edit, BlueprintVisible)
	struct FSlateBrush                                 m_unfocusedbackgroundBrush;                               // 0x0300(0x0088) (Edit, BlueprintVisible)
	float                                              m_arrowFillWidth;                                         // 0x0388(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x038C(0x0004) MISSED OFFSET
};

// ScriptStruct V1CoreRuntime.ButtonSoundStyle
// 0x0038
struct FButtonSoundStyle
{
	class UAkAudioEvent*                               m_hoveredAudioEvent;                                      // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               m_unHoveredAudioEvent;                                    // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               m_pressedAudioEvent;                                      // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               m_pressedAcceptSpecialAudioEvent;                         // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               m_pressedDenySpecialAudioEvent;                           // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               m_releasedAudioEvent;                                     // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               m_pressedDenyAudioEvent;                                  // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct V1CoreRuntime.ToggleButtonSoundStyle
// 0x0028
struct FToggleButtonSoundStyle
{
	class UAkAudioEvent*                               m_hoveredAudioEvent;                                      // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               m_unHoveredAudioEvent;                                    // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               m_checkedAudioEvent;                                      // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               m_uncheckedAudioEvent;                                    // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               m_denyAudioEvent;                                         // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct V1CoreRuntime.SliderSoundStyle
// 0x0020
struct FSliderSoundStyle
{
	class UAkAudioEvent*                               m_valueChangedAudioEvent;                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               m_boundsHitAudioEvent;                                    // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               m_hoveredAudioEvent;                                      // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               m_unHoveredAudioEvent;                                    // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct V1CoreRuntime.ComboBoxSoundStyle
// 0x0040
struct FComboBoxSoundStyle
{
	class UAkAudioEvent*                               m_navigationMoveAudioEvent;                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               m_selectionChangedAudioEvent;                             // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               m_onSelectionNotChangedAudioEvent;                        // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               m_pressedAudioEvent;                                      // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               m_closeMenuAudioEvent;                                    // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               m_hoveredAudioEvent;                                      // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               m_unHoveredAudioEvent;                                    // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               m_hitBoundAudioEvent;                                     // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct V1CoreRuntime.ElementMenuSoundStyle
// 0x0018
struct FElementMenuSoundStyle
{
	class UAkAudioEvent*                               m_menuActivateAudioEvent;                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               m_menuDeactivateAudioEvent;                               // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               m_tabChangeEvent;                                         // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct V1CoreRuntime.OptionButtonSoundStyle
// 0x0018
struct FOptionButtonSoundStyle
{
	class UAkAudioEvent*                               m_hoveredAudioEvent;                                      // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               m_unHoveredAudioEvent;                                    // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               m_optionChangedEvent;                                     // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct V1CoreRuntime.MenuUserWidgetSoundStyle
// 0x0050
struct FMenuUserWidgetSoundStyle
{
	class UAkAudioEvent*                               m_hoveredAudioEvent;                                      // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               m_unHoveredAudioEvent;                                    // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               m_pressedAudioEvent;                                      // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               m_releasedAudioEvent;                                     // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               m_longPressStart;                                         // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               m_longPressSuccess;                                       // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               m_longPressFailed;                                        // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               m_errorAudioEvent;                                        // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FString                                     m_longPressUpdateRTPC;                                    // 0x0040(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct V1CoreRuntime.V1StatusAttributeStackElement
// 0x0008
struct FV1StatusAttributeStackElement
{
	int                                                Key;                                                      // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               Value;                                                    // 0x0004(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct V1CoreRuntime.V1StatusAttributeStack
// 0x0018
struct FV1StatusAttributeStack
{
	TArray<struct FV1StatusAttributeStackElement>      attributeStatusStack;                                     // 0x0000(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct V1CoreRuntime.V1TextBlockWidgetStyle
// 0x0238 (0x0240 - 0x0008)
struct FV1TextBlockWidgetStyle : public FSlateWidgetStyle
{
	struct FSlateFontInfo                              Font;                                                     // 0x0008(0x0050) (Edit, BlueprintVisible)
	struct FSlateColor                                 ColorAndOpacity;                                          // 0x0058(0x0028) (Edit, BlueprintVisible)
	struct FVector2D                                   ShadowOffset;                                             // 0x0080(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ShadowColorAndOpacity;                                    // 0x0088(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FSlateColor                                 SelectedBackgroundColor;                                  // 0x0098(0x0028) (Edit)
	struct FLinearColor                                HighlightColor;                                           // 0x00C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FSlateBrush                                 HighlightShape;                                           // 0x00D0(0x0088) (Edit, BlueprintVisible)
	struct FSlateBrush                                 UnderlineBrush;                                           // 0x0158(0x0088) (Edit, BlueprintVisible)
	struct FLinearColor                                FocusColor;                                               // 0x01E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FSlateFontInfo                              FocusFont;                                                // 0x01F0(0x0050) (Edit, BlueprintVisible)
};

// ScriptStruct V1CoreRuntime.V1OverlapInfo
// 0x0028
struct FV1OverlapInfo
{
	TWeakObjectPtr<class AActor>                       OverlappedActor;                                          // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UPrimitiveComponent>          OverlappedComponent;                                      // 0x0008(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     pointOfOverlap;                                           // 0x0010(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     overlapTestOrigin;                                        // 0x001C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct V1CoreRuntime.AbstractSettings
// 0x0008
struct FAbstractSettings
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct V1CoreRuntime.Ellipse
// 0x0008
struct FEllipse
{
	struct FVector2D                                   m_axis;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct V1CoreRuntime.PIDController
// 0x0028
struct FPIDController
{
	float                                              m_proportionalConstant;                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              m_integralConstant;                                       // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              m_derivativeConstant;                                     // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	float                                              m_numIntegralSamples;                                     // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x14];                                      // 0x0014(0x0014) MISSED OFFSET
};

// ScriptStruct V1CoreRuntime.ADSRConfig
// 0x0018
struct FADSRConfig
{
	float                                              attackMagnitude;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              sustainMagnitude;                                         // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              attackPeriod;                                             // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              decayPeriod;                                              // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              sustainPeriod;                                            // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              releasePeriod;                                            // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct V1CoreRuntime.SimpleADSREnvelope
// 0x0080
struct FSimpleADSREnvelope
{
	struct FADSRConfig                                 m_config;                                                 // 0x0000(0x0018) (Edit)
	unsigned char                                      UnknownData00[0x68];                                      // 0x0018(0x0068) MISSED OFFSET
};

// ScriptStruct V1CoreRuntime.SimpleLatch
// 0x0020
struct FSimpleLatch
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct V1CoreRuntime.TickingTimer
// 0x0008
struct FTickingTimer
{
	float                                              m_maxTime;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              m_currTime;                                               // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct V1CoreRuntime.RotatorTracker
// 0x0010
struct FRotatorTracker
{
	float                                              InterpSpeed;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    m_current;                                                // 0x0004(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct V1CoreRuntime.DistanceSpeedEntry
// 0x0008
struct FDistanceSpeedEntry
{
	float                                              Distance;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Speed;                                                    // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct V1CoreRuntime.V1AttributeOverflowEventData
// 0x0028
struct FV1AttributeOverflowEventData
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct V1CoreRuntime.V1StatusAttributeChangedEventData
// 0x0028
struct FV1StatusAttributeChangedEventData
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct V1CoreRuntime.V1AttributeChangedEventData
// 0x0028
struct FV1AttributeChangedEventData
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct V1CoreRuntime.V1AttributeManager
// 0x0018
struct FV1AttributeManager
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct V1CoreRuntime.V1AudioDebug
// 0x0020
struct FV1AudioDebug
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct V1CoreRuntime.OtherMenuActivationBehavior
// 0x0002
struct FOtherMenuActivationBehavior
{
	EeV1MenuBackoutBehavior                            m_otherMenuActivateBehavior;                              // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      m_applyActivateBehaviorToSubMenus : 1;                    // 0x0001(0x0001) (Edit)
	unsigned char                                      m_deactivateParent : 1;                                   // 0x0001(0x0001) (Edit)
};

// ScriptStruct V1CoreRuntime.V1StatusAttributeEffectData
// 0x0020
struct FV1StatusAttributeEffectData
{
	struct FGameplayTag                                attributeTag;                                             // 0x0000(0x0008) (Edit)
	bool                                               oldStatusState;                                           // 0x0008(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               newStatusState;                                           // 0x0009(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x000A(0x0006) MISSED OFFSET
	class UV1StatusAttribute*                          foundAttribute;                                           // 0x0010(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	EeV1AttributeType                                  attributeType;                                            // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
};

// ScriptStruct V1CoreRuntime.QueuedGameplayEffect
// 0x0160
struct FQueuedGameplayEffect
{
	struct FV1GameplayEffectSpec                       specification;                                            // 0x0000(0x0148)
	struct FV1AttributeInstigator                      Instigator;                                               // 0x0148(0x0018)
};

// ScriptStruct V1CoreRuntime.V1OverlapSetupData
// 0x0030
struct FV1OverlapSetupData
{
	unsigned char                                      startActive : 1;                                          // 0x0000(0x0001) (Edit)
	unsigned char                                      performTestsSynchronously : 1;                            // 0x0000(0x0001) (Edit)
	EeV1OverlapTestType                                overlapTestType;                                          // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EeV1OverlapShapeMode                               shapeMode;                                                // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0003(0x0001) MISSED OFFSET
	float                                              initialSimpleRadius;                                      // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              delayBetweenTests;                                        // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              delayRandomDeviation;                                     // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              initialDelayOnceActive;                                   // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       collisionProfileNameOverride;                             // 0x0014(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	TArray<class UClass*>                              ClassFilter;                                              // 0x0020(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct V1CoreRuntime.V1OverlapResult
// 0x0048
struct FV1OverlapResult
{
	unsigned char                                      UnknownData00[0x48];                                      // 0x0000(0x0048) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
