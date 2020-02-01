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

// Enum Robogore.eGameplayObjectState
enum class EeGameplayObjectState : uint8_t
{
	eGameplayObjectState__Uninitialized = 0,
	eGameplayObjectState__Initialized = 1,
	eGameplayObjectState__IsPoweredUp = 2,
	eGameplayObjectState__IsPoweredDown = 3,
	eGameplayObjectState__Destroyed = 4,
	eGameplayObjectState__InteractionComplete = 5,
	eGameplayObjectState__kNUM     = 6,
	eGameplayObjectState__kINVALID = 7,
	eGameplayObjectState__eGameplayObjectState_MAX = 8
};


// Enum Robogore.eActorIdentifierWidgetVisibilityState
enum class EeActorIdentifierWidgetVisibilityState : uint8_t
{
	eActorIdentifierWidgetVisibilityState__NonVisible = 0,
	eActorIdentifierWidgetVisibilityState__VisibleWithFade = 1,
	eActorIdentifierWidgetVisibilityState__VisibleWithCalloutFade = 2,
	eActorIdentifierWidgetVisibilityState__VisibleIndefinitely = 3,
	eActorIdentifierWidgetVisibilityState__eActorIdentifierWidgetVisibilityState_MAX = 4
};


// Enum Robogore.eActorRandomNameSetting
enum class EeActorRandomNameSetting : uint8_t
{
	eActorRandomNameSetting__UsePredefinedName = 0,
	eActorRandomNameSetting__UseBakedRandomNames = 1,
	eActorRandomNameSetting__UseRandomPrefixNumberSuffixNames = 2,
	eActorRandomNameSetting__eActorRandomNameSetting_MAX = 3
};


// Enum Robogore.eCheckAttributeOp
enum class EeCheckAttributeOp : uint8_t
{
	eCheckAttributeOp__LessThan    = 0,
	eCheckAttributeOp__LessThanOrEqual = 1,
	eCheckAttributeOp__GreaterThan = 2,
	eCheckAttributeOp__GreaterThanOrEqual = 3,
	eCheckAttributeOp__Equal       = 4,
	eCheckAttributeOp__eCheckAttributeOp_MAX = 5
};


// Enum Robogore.eCheckAttibuteType
enum class EeCheckAttibuteType : uint8_t
{
	eCheckAttibuteType__Status     = 0,
	eCheckAttibuteType__Float      = 1,
	eCheckAttibuteType__Percentage = 2,
	eCheckAttibuteType__eCheckAttibuteType_MAX = 3
};


// Enum Robogore.eActorOperatorTagType
enum class EeActorOperatorTagType : uint8_t
{
	eActorOperatorTagType__Add     = 0,
	eActorOperatorTagType__Remove  = 1,
	eActorOperatorTagType__ContainsAny = 2,
	eActorOperatorTagType__ContainsAll = 3,
	eActorOperatorTagType__eActorOperatorTagType_MAX = 4
};


// Enum Robogore.eOrderStatus
enum class EeOrderStatus : uint8_t
{
	eOrderStatus__Unassigned       = 0,
	eOrderStatus__Assigned         = 1,
	eOrderStatus__InProgress       = 2,
	eOrderStatus__Ignoring         = 3,
	eOrderStatus__Complete         = 4,
	eOrderStatus__INVALID          = 5,
	eOrderStatus__eOrderStatus_MAX = 6
};


// Enum Robogore.eSkillCompletionType
enum class EeSkillCompletionType : uint8_t
{
	eSkillCompletionType__Manual   = 0,
	eSkillCompletionType__AutoCompleteWhenTreeFinishes = 1,
	eSkillCompletionType__eSkillCompletionType_MAX = 2
};


// Enum Robogore.eSkillResult
enum class EeSkillResult : uint8_t
{
	eSkillResult__Executing        = 0,
	eSkillResult__Completed        = 1,
	eSkillResult__Interrupted      = 2,
	eSkillResult__Failed           = 3,
	eSkillResult__eSkillResult_MAX = 4
};


// Enum Robogore.eSmartObjectAttractorState
enum class EeSmartObjectAttractorState : uint8_t
{
	eSmartObjectAttractorState__Paused = 0,
	eSmartObjectAttractorState__Attracting = 1,
	eSmartObjectAttractorState__CheckingReserved = 2,
	eSmartObjectAttractorState__InteractionInProgress = 3,
	eSmartObjectAttractorState__kNUM = 4,
	eSmartObjectAttractorState__kINVALID = 5,
	eSmartObjectAttractorState__eSmartObjectAttractorState_MAX = 6
};


// Enum Robogore.eLostTargetReason
enum class EeLostTargetReason : uint8_t
{
	eLostTargetReason__NONE        = 0,
	eLostTargetReason__LostTarget  = 1,
	eLostTargetReason__TargetDied  = 2,
	eLostTargetReason__eLostTargetReason_MAX = 3
};


// Enum Robogore.eGenericPopupCloseReason
enum class EeGenericPopupCloseReason : uint8_t
{
	eGenericPopupCloseReason__Accept = 0,
	eGenericPopupCloseReason__Deny = 1,
	eGenericPopupCloseReason__Cancel = 2,
	eGenericPopupCloseReason__None = 3,
	eGenericPopupCloseReason__eGenericPopupCloseReason_MAX = 4
};


// Enum Robogore.eDecoratorEventListenerConfig
enum class EeDecoratorEventListenerConfig : uint8_t
{
	eDecoratorEventListenerConfig__OwningController = 0,
	eDecoratorEventListenerConfig__ControlledPawn = 1,
	eDecoratorEventListenerConfig__eDecoratorEventListenerConfig_MAX = 2
};


// Enum Robogore.eSpiderPickup
enum class EeSpiderPickup : uint8_t
{
	eSpiderPickup__Init            = 0,
	eSpiderPickup__Setup           = 1,
	eSpiderPickup__Pickup          = 2,
	eSpiderPickup__Finish          = 3,
	eSpiderPickup__TOTAL           = 4,
	eSpiderPickup__eSpiderPickup_MAX = 5
};


// Enum Robogore.eCaptureAreaChangeSpeedRule
enum class EeCaptureAreaChangeSpeedRule : uint8_t
{
	eCaptureAreaChangeSpeedRule__NoMultiplier = 0,
	eCaptureAreaChangeSpeedRule__ScaleWithAttackers = 1,
	eCaptureAreaChangeSpeedRule__ScaleWithDefenders = 2,
	eCaptureAreaChangeSpeedRule__eCaptureAreaChangeSpeedRule_MAX = 3
};


// Enum Robogore.eCaptureAreaCaptureRule
enum class EeCaptureAreaCaptureRule : uint8_t
{
	eCaptureAreaCaptureRule__MustBeEmpty = 0,
	eCaptureAreaCaptureRule__UnitRatio = 1,
	eCaptureAreaCaptureRule__CommanderRatio = 2,
	eCaptureAreaCaptureRule__eCaptureAreaCaptureRule_MAX = 3
};


// Enum Robogore.eCaptureAreaRevertRule
enum class EeCaptureAreaRevertRule : uint8_t
{
	eCaptureAreaRevertRule__InstantCaptureStart = 0,
	eCaptureAreaRevertRule__RequiresRevert = 1,
	eCaptureAreaRevertRule__eCaptureAreaRevertRule_MAX = 2
};


// Enum Robogore.eCaptureAreaCaptureState
enum class EeCaptureAreaCaptureState : uint8_t
{
	eCaptureAreaCaptureState__Vacant = 0,
	eCaptureAreaCaptureState__Capturing = 1,
	eCaptureAreaCaptureState__Blocked = 2,
	eCaptureAreaCaptureState__RevertingOwnership = 3,
	eCaptureAreaCaptureState__RevertingCapture = 4,
	eCaptureAreaCaptureState__Occupied = 5,
	eCaptureAreaCaptureState__kNUM = 6,
	eCaptureAreaCaptureState__kINVALID = 7,
	eCaptureAreaCaptureState__eCaptureAreaCaptureState_MAX = 8
};


// Enum Robogore.eChallengeSetCategory
enum class EeChallengeSetCategory : uint8_t
{
	eChallengeSetCategory__NONE    = 0,
	eChallengeSetCategory__All     = 1,
	eChallengeSetCategory__eChallengeSetCategory_MAX = 2
};


// Enum Robogore.eCheckCanPickupRuntimeItemEventResult
enum class EeCheckCanPickupRuntimeItemEventResult : uint8_t
{
	eCheckCanPickupRuntimeItemEventResult__Success = 0,
	eCheckCanPickupRuntimeItemEventResult__Failure_NoRoom = 1,
	eCheckCanPickupRuntimeItemEventResult__Failure_NoReceiver = 2,
	eCheckCanPickupRuntimeItemEventResult__eCheckCanPickupRuntimeItemEventResult_MAX = 3
};


// Enum Robogore.eChyronPlatform
enum class EeChyronPlatform : uint8_t
{
	eChyronPlatform__All           = 0,
	eChyronPlatform__PC            = 1,
	eChyronPlatform__PS4           = 2,
	eChyronPlatform__Xbox          = 3,
	eChyronPlatform__eChyronPlatform_MAX = 4
};


// Enum Robogore.eColorDefinitionType
enum class EeColorDefinitionType : uint8_t
{
	eColorDefinitionType__Color1   = 0,
	eColorDefinitionType__Color2   = 1,
	eColorDefinitionType__Color3   = 2,
	eColorDefinitionType__Color4   = 3,
	eColorDefinitionType__Color5   = 4,
	eColorDefinitionType__Color6   = 5,
	eColorDefinitionType__Color7   = 6,
	eColorDefinitionType__Color8   = 7,
	eColorDefinitionType__eColorDefinitionType_MAX = 8
};


// Enum Robogore.eUnitStateForHUD
enum class EeUnitStateForHUD : uint8_t
{
	eUnitStateForHUD__Active       = 0,
	eUnitStateForHUD__Down         = 1,
	eUnitStateForHUD__WaitingOnBrainCanPickup = 2,
	eUnitStateForHUD__Revivable    = 3,
	eUnitStateForHUD__Respawning   = 4,
	eUnitStateForHUD__eUnitStateForHUD_MAX = 5
};


// Enum Robogore.eCommanderID
enum class EeCommanderID : uint8_t
{
	eCommanderID__Commander1       = 0,
	eCommanderID__Commander2       = 1,
	eCommanderID__Commander3       = 2,
	eCommanderID__Commander4       = 3,
	eCommanderID__Commander5       = 4,
	eCommanderID__Commander6       = 5,
	eCommanderID__Commander7       = 6,
	eCommanderID__Commander8       = 7,
	eCommanderID__Commander9       = 8,
	eCommanderID__Commander10      = 9,
	eCommanderID__Commander11      = 10,
	eCommanderID__Commander12      = 11,
	eCommanderID__Commander13      = 12,
	eCommanderID__Commander14      = 13,
	eCommanderID__Commander15      = 14,
	eCommanderID__Commander16      = 15,
	eCommanderID__Commander17      = 16,
	eCommanderID__Commander18      = 17,
	eCommanderID__Commander19      = 18,
	eCommanderID__Commander20      = 19,
	eCommanderID__Commander21      = 20,
	eCommanderID__Commander22      = 21,
	eCommanderID__Commander23      = 22,
	eCommanderID__Commander24      = 23,
	eCommanderID__Commander25      = 24,
	eCommanderID__Commander26      = 25,
	eCommanderID__Commander27      = 26,
	eCommanderID__Commander28      = 27,
	eCommanderID__Commander29      = 28,
	eCommanderID__Commander30      = 29,
	eCommanderID__Commander31      = 30,
	eCommanderID__NONE             = 31,
	eCommanderID__kCount           = 32,
	eCommanderID__kInvalid         = 33,
	eCommanderID__eCommanderID_MAX = 34
};


// Enum Robogore.CommandPulseDisableType
enum class ECommandPulseDisableType : uint8_t
{
	CommandPulseDisableType__PrimaryPulse = 0,
	CommandPulseDisableType__InteractPulse = 1,
	CommandPulseDisableType__PaintTargetPulse = 2,
	CommandPulseDisableType__CommandPulseDisableType_MAX = 3
};


// Enum Robogore.eCoreCarrierSkillTarget
enum class EeCoreCarrierSkillTarget : uint8_t
{
	eCoreCarrierSkillTarget__Carrier = 0,
	eCoreCarrierSkillTarget__NonCarriers = 1,
	eCoreCarrierSkillTarget__All   = 2,
	eCoreCarrierSkillTarget__eCoreCarrierSkillTarget_MAX = 3
};


// Enum Robogore.eRecentDamageStatus
enum class EeRecentDamageStatus : uint8_t
{
	eRecentDamageStatus__NONE      = 0,
	eRecentDamageStatus__Light     = 1,
	eRecentDamageStatus__Medium    = 2,
	eRecentDamageStatus__Heavy     = 3,
	eRecentDamageStatus__eRecentDamageStatus_MAX = 4
};


// Enum Robogore.eDeathEffectActorListSpawnType
enum class EeDeathEffectActorListSpawnType : uint8_t
{
	eDeathEffectActorListSpawnType__SpawnOneRandomElement = 0,
	eDeathEffectActorListSpawnType__RollChanceSpawnFirst = 1,
	eDeathEffectActorListSpawnType__AttemptSpawnAll = 2,
	eDeathEffectActorListSpawnType__ForceSpawnAll = 3,
	eDeathEffectActorListSpawnType__eDeathEffectActorListSpawnType_MAX = 4
};


// Enum Robogore.eDeathmatchRoundVictoryCondition
enum class EeDeathmatchRoundVictoryCondition : uint8_t
{
	eDeathmatchRoundVictoryCondition__ScoreBased = 0,
	eDeathmatchRoundVictoryCondition__LastOneStanding = 1,
	eDeathmatchRoundVictoryCondition__eDeathmatchRoundVictoryCondition_MAX = 2
};


// Enum Robogore.eDepthStencilTypes
enum class EeDepthStencilTypes : uint8_t
{
	eDepthStencilTypes__DepthStencilType1 = 0,
	eDepthStencilTypes__DepthStencilType2 = 1,
	eDepthStencilTypes__DepthStencilType3 = 2,
	eDepthStencilTypes__DepthStencilType4 = 3,
	eDepthStencilTypes__DepthStencilType5 = 4,
	eDepthStencilTypes__DepthStencilType6 = 5,
	eDepthStencilTypes__DepthStencilType7 = 6,
	eDepthStencilTypes__DepthStencilType8 = 7,
	eDepthStencilTypes__eDepthStencilTypes_MAX = 8
};


// Enum Robogore.eDifficultyLevels
enum class EeDifficultyLevels : uint8_t
{
	eDifficultyLevels__Easy        = 0,
	eDifficultyLevels__Normal      = 1,
	eDifficultyLevels__Hard        = 2,
	eDifficultyLevels__Legendary   = 3,
	eDifficultyLevels__kInvalid    = 4,
	eDifficultyLevels__eDifficultyLevels_MAX = 5
};


// Enum Robogore.eEffectInstancingRecyclePolicy
enum class EeEffectInstancingRecyclePolicy : uint8_t
{
	eEffectInstancingRecyclePolicy__RecycleDisabled = 0,
	eEffectInstancingRecyclePolicy__RecycleOldest = 1,
	eEffectInstancingRecyclePolicy__eEffectInstancingRecyclePolicy_MAX = 2
};


// Enum Robogore.eAchievementLeaderboardStatType
enum class EeAchievementLeaderboardStatType : uint8_t
{
	eAchievementLeaderboardStatType__Int = 0,
	eAchievementLeaderboardStatType__Float = 1,
	eAchievementLeaderboardStatType__eAchievementLeaderboardStatType_MAX = 2
};


// Enum Robogore.eAchievementAccumulationType
enum class EeAchievementAccumulationType : uint8_t
{
	eAchievementAccumulationType__StatBased = 0,
	eAchievementAccumulationType__QueryBased = 1,
	eAchievementAccumulationType__eAchievementAccumulationType_MAX = 2
};


// Enum Robogore.eSpecificGameplayAchievement
enum class EeSpecificGameplayAchievement : uint8_t
{
	eSpecificGameplayAchievement__CompleteTraining = 0,
	eSpecificGameplayAchievement__SocketChip = 1,
	eSpecificGameplayAchievement__PlayMPRound = 2,
	eSpecificGameplayAchievement__CreateBadge = 3,
	eSpecificGameplayAchievement__CustomizeCrew = 4,
	eSpecificGameplayAchievement__CompleteHubQuest = 5,
	eSpecificGameplayAchievement__CompleteMPChallenge = 6,
	eSpecificGameplayAchievement__ReachCrewLevel10 = 7,
	eSpecificGameplayAchievement__CompleteAllLevelsOnAtLeastNormal = 8,
	eSpecificGameplayAchievement__FindAllSalvage = 9,
	eSpecificGameplayAchievement__FullyChipCrew = 10,
	eSpecificGameplayAchievement__CompleteAnyMissionOnLegendary = 11,
	eSpecificGameplayAchievement__AllAchievementsComplete = 12,
	eSpecificGameplayAchievement__eSpecificGameplayAchievement_MAX = 13
};


// Enum Robogore.eGameplayChallengeDisplayType
enum class EeGameplayChallengeDisplayType : uint8_t
{
	eGameplayChallengeDisplayType__Numeric = 0,
	eGameplayChallengeDisplayType__Timespan = 1,
	eGameplayChallengeDisplayType__eGameplayChallengeDisplayType_MAX = 2
};


// Enum Robogore.eGameplayChallengeProgressWindow
enum class EeGameplayChallengeProgressWindow : uint8_t
{
	eGameplayChallengeProgressWindow__NoSavedProgress = 0,
	eGameplayChallengeProgressWindow__SaveProgress = 1,
	eGameplayChallengeProgressWindow__eGameplayChallengeProgressWindow_MAX = 2
};


// Enum Robogore.eGameplayChallengeAccumulationType
enum class EeGameplayChallengeAccumulationType : uint8_t
{
	eGameplayChallengeAccumulationType__StatValueAccumulation = 0,
	eGameplayChallengeAccumulationType__QueryMetAccumulation = 1,
	eGameplayChallengeAccumulationType__eGameplayChallengeAccumulationType_MAX = 2
};


// Enum Robogore.eGameplayGameModeState
enum class EeGameplayGameModeState : uint8_t
{
	eGameplayGameModeState__WaitingForSessionStart = 0,
	eGameplayGameModeState__WaitingForPlayers = 1,
	eGameplayGameModeState__StartingGame = 2,
	eGameplayGameModeState__GameInProgress = 3,
	eGameplayGameModeState__GameEnding = 4,
	eGameplayGameModeState__GameTeardown = 5,
	eGameplayGameModeState__GameCanceled = 6,
	eGameplayGameModeState__kNUM   = 7,
	eGameplayGameModeState__kINVALID = 8,
	eGameplayGameModeState__eGameplayGameModeState_MAX = 9
};


// Enum Robogore.eGameplayMedalDifficulty
enum class EeGameplayMedalDifficulty : uint8_t
{
	eGameplayMedalDifficulty__Low  = 0,
	eGameplayMedalDifficulty__Medium = 1,
	eGameplayMedalDifficulty__Hard = 2,
	eGameplayMedalDifficulty__VeryHard = 3,
	eGameplayMedalDifficulty__NONE = 4,
	eGameplayMedalDifficulty__eGameplayMedalDifficulty_MAX = 5
};


// Enum Robogore.eGameplayStatQueryDuration
enum class EeGameplayStatQueryDuration : uint8_t
{
	eGameplayStatQueryDuration__Streak = 0,
	eGameplayStatQueryDuration__TimeLimited = 1,
	eGameplayStatQueryDuration__PlayerLife = 2,
	eGameplayStatQueryDuration__Round = 3,
	eGameplayStatQueryDuration__Session = 4,
	eGameplayStatQueryDuration__eGameplayStatQueryDuration_MAX = 5
};


// Enum Robogore.eGenericPopupType
enum class EeGenericPopupType : uint8_t
{
	eGenericPopupType__Ok          = 0,
	eGenericPopupType__YesNo       = 1,
	eGenericPopupType__YesNoCancel = 2,
	eGenericPopupType__eGenericPopupType_MAX = 3
};


// Enum Robogore.EAnimationActionTaskPriority
enum class EAnimationActionTaskPriority : uint8_t
{
	EAnimationActionTaskPriority__Lowest = 0,
	EAnimationActionTaskPriority__Low = 1,
	EAnimationActionTaskPriority__Default = 2,
	EAnimationActionTaskPriority__High = 3,
	EAnimationActionTaskPriority__Highest = 4,
	EAnimationActionTaskPriority__EAnimationActionTaskPriority_MAX = 5
};


// Enum Robogore.ePawnAIWeaponAimingState
enum class EePawnAIWeaponAimingState : uint8_t
{
	ePawnAIWeaponAimingState__Idle = 0,
	ePawnAIWeaponAimingState__StartingAim = 1,
	ePawnAIWeaponAimingState__Aiming = 2,
	ePawnAIWeaponAimingState__AimingEndDelay = 3,
	ePawnAIWeaponAimingState__EndingAim = 4,
	ePawnAIWeaponAimingState__kNUM = 5,
	ePawnAIWeaponAimingState__kINVALID = 6,
	ePawnAIWeaponAimingState__ePawnAIWeaponAimingState_MAX = 7
};


// Enum Robogore.eCameraMode
enum class EeCameraMode : uint8_t
{
	eCameraMode__FirstPerson       = 0,
	eCameraMode__Custom            = 1,
	eCameraMode__DeathCamera       = 2,
	eCameraMode__ThirdPerson       = 3,
	eCameraMode__OrbitCamera       = 4,
	eCameraMode__VisionModeCamera  = 5,
	eCameraMode__DebugPivot        = 6,
	eCameraMode__OrthographicFullMap = 7,
	eCameraMode__RoundEndingCamera = 8,
	eCameraMode__kCount            = 9,
	eCameraMode__eCameraMode_MAX   = 10
};


// Enum Robogore.eInteractableType
enum class EeInteractableType : uint8_t
{
	eInteractableType__None        = 0,
	eInteractableType__Friendly    = 1,
	eInteractableType__Ally        = 2,
	eInteractableType__Enemy       = 3,
	eInteractableType__Objective   = 4,
	eInteractableType__Salvage     = 5,
	eInteractableType__Destructible = 6,
	eInteractableType__Explosive   = 7,
	eInteractableType__Generic     = 8,
	eInteractableType__NumElements = 9,
	eInteractableType__eInteractableType_MAX = 10
};


// Enum Robogore.eInteractableState
enum class EeInteractableState : uint8_t
{
	eInteractableState__None       = 0,
	eInteractableState__Scanning   = 1,
	eInteractableState__Scanned    = 2,
	eInteractableState__eInteractableState_MAX = 3
};


// Enum Robogore.eItemActorPickupType
enum class EeItemActorPickupType : uint8_t
{
	eItemActorPickupType__NoPickup = 0,
	eItemActorPickupType__RadiusPickup = 1,
	eItemActorPickupType__InteractPickup = 2,
	eItemActorPickupType__eItemActorPickupType_MAX = 3
};


// Enum Robogore.eItemPlacementState
enum class EeItemPlacementState : uint8_t
{
	eItemPlacementState__Create    = 0,
	eItemPlacementState__Grab      = 1,
	eItemPlacementState__Place     = 2,
	eItemPlacementState__eItemPlacementState_MAX = 3
};


// Enum Robogore.eItemRespawnCondition
enum class EeItemRespawnCondition : uint8_t
{
	eItemRespawnCondition__RespawnAfterDestroyed = 0,
	eItemRespawnCondition__RespawnAfterRemovedFromGame = 1,
	eItemRespawnCondition__eItemRespawnCondition_MAX = 2
};


// Enum Robogore.eItemSpawnReason
enum class EeItemSpawnReason : uint8_t
{
	eItemSpawnReason__SpawnedFromStorageObject = 0,
	eItemSpawnReason__SpawnFromInventory = 1,
	eItemSpawnReason__SpawnedFromPlacementInWorld = 2,
	eItemSpawnReason__Invalid      = 3,
	eItemSpawnReason__eItemSpawnReason_MAX = 4
};


// Enum Robogore.eJukeboxEventType
enum class EeJukeboxEventType : uint8_t
{
	eJukeboxEventType__PlayNextTrack = 0,
	eJukeboxEventType__PlayTrackByName = 1,
	eJukeboxEventType__EnableOverlay = 2,
	eJukeboxEventType__DisableOverlay = 3,
	eJukeboxEventType__StopTrack   = 4,
	eJukeboxEventType__eJukeboxEventType_MAX = 5
};


// Enum Robogore.eLevelSequenceEvent
enum class EeLevelSequenceEvent : uint8_t
{
	eLevelSequenceEvent__Play      = 0,
	eLevelSequenceEvent__Stop      = 1,
	eLevelSequenceEvent__eLevelSequenceEvent_MAX = 2
};


// Enum Robogore.eBinaryTestType
enum class EeBinaryTestType : uint8_t
{
	eBinaryTestType__AND           = 0,
	eBinaryTestType__OR            = 1,
	eBinaryTestType__XOR           = 2,
	eBinaryTestType__NAND          = 3,
	eBinaryTestType__NOR           = 4,
	eBinaryTestType__XNOR          = 5,
	eBinaryTestType__eBinaryTestType_MAX = 6
};


// Enum Robogore.eMatchEndCondition
enum class EeMatchEndCondition : uint8_t
{
	eMatchEndCondition__Win        = 0,
	eMatchEndCondition__Lose       = 1,
	eMatchEndCondition__Draw       = 2,
	eMatchEndCondition__kInvalid   = 3,
	eMatchEndCondition__eMatchEndCondition_MAX = 4
};


// Enum Robogore.eMatchGameModeState
enum class EeMatchGameModeState : uint8_t
{
	eMatchGameModeState__PreGame   = 0,
	eMatchGameModeState__Playing   = 1,
	eMatchGameModeState__PostGameCondition = 2,
	eMatchGameModeState__PostGameStats = 3,
	eMatchGameModeState__KickPlayers = 4,
	eMatchGameModeState__Shutdown  = 5,
	eMatchGameModeState__kNUM      = 6,
	eMatchGameModeState__kINVALID  = 7,
	eMatchGameModeState__eMatchGameModeState_MAX = 8
};


// Enum Robogore.eMatchMessagePriority
enum class EeMatchMessagePriority : uint8_t
{
	eMatchMessagePriority__Max     = 0,
	eMatchMessagePriority__High    = 1,
	eMatchMessagePriority__Med     = 2,
	eMatchMessagePriority__Low     = 3,
	eMatchMessagePriority__MAX_COUNT = 4
};


// Enum Robogore.eMatchPlayerControllerState
enum class EeMatchPlayerControllerState : uint8_t
{
	eMatchPlayerControllerState__None = 0,
	eMatchPlayerControllerState__PreMatch = 1,
	eMatchPlayerControllerState__Alive = 2,
	eMatchPlayerControllerState__Dead = 3,
	eMatchPlayerControllerState__DeathCam = 4,
	eMatchPlayerControllerState__Respawning = 5,
	eMatchPlayerControllerState__WaitingToSpawn = 6,
	eMatchPlayerControllerState__RoundEnding = 7,
	eMatchPlayerControllerState__PostRoundCondition = 8,
	eMatchPlayerControllerState__PostGameCondition = 9,
	eMatchPlayerControllerState__PostGameStats = 10,
	eMatchPlayerControllerState__Shutdown = 11,
	eMatchPlayerControllerState__kNUM = 12,
	eMatchPlayerControllerState__kINVALID = 13,
	eMatchPlayerControllerState__eMatchPlayerControllerState_MAX = 14
};


// Enum Robogore.eMatchPlayerDeathCamState
enum class EeMatchPlayerDeathCamState : uint8_t
{
	eMatchPlayerDeathCamState__Inactive = 0,
	eMatchPlayerDeathCamState__KillerDeathCam = 1,
	eMatchPlayerDeathCamState__TeammateCam = 2,
	eMatchPlayerDeathCamState__EnvironmentCam = 3,
	eMatchPlayerDeathCamState__kNUM = 4,
	eMatchPlayerDeathCamState__kINVALID = 5,
	eMatchPlayerDeathCamState__eMatchPlayerDeathCamState_MAX = 6
};


// Enum Robogore.eMatchRoundState
enum class EeMatchRoundState : uint8_t
{
	eMatchRoundState__PreRound     = 0,
	eMatchRoundState__CrewSelect   = 1,
	eMatchRoundState__Warmup       = 2,
	eMatchRoundState__Playing      = 3,
	eMatchRoundState__Overtime     = 4,
	eMatchRoundState__RoundEnding  = 5,
	eMatchRoundState__PostRoundCondition = 6,
	eMatchRoundState__Shutdown     = 7,
	eMatchRoundState__kNUM         = 8,
	eMatchRoundState__kINVALID     = 9,
	eMatchRoundState__eMatchRoundState_MAX = 10
};


// Enum Robogore.eMatchTeamScoreCompetitionState
enum class EeMatchTeamScoreCompetitionState : uint8_t
{
	eMatchTeamScoreCompetitionState__Tied = 0,
	eMatchTeamScoreCompetitionState__Behind = 1,
	eMatchTeamScoreCompetitionState__Ahead = 2,
	eMatchTeamScoreCompetitionState__eMatchTeamScoreCompetitionState_MAX = 3
};


// Enum Robogore.eMatchWidgetType
enum class EeMatchWidgetType : uint8_t
{
	eMatchWidgetType__GameplayWidget = 0,
	eMatchWidgetType__ViewportWidget = 1,
	eMatchWidgetType__eMatchWidgetType_MAX = 2
};


// Enum Robogore.eMatchWidgetVisibilityOption
enum class EeMatchWidgetVisibilityOption : uint8_t
{
	eMatchWidgetVisibilityOption__Always = 0,
	eMatchWidgetVisibilityOption__PerRound = 1,
	eMatchWidgetVisibilityOption__WhenAlive = 2,
	eMatchWidgetVisibilityOption__OnlyShowOnFirstSpawn = 3,
	eMatchWidgetVisibilityOption__AfterSpawningOnceAlwaysVisible = 4,
	eMatchWidgetVisibilityOption__PlayerCanSpawn = 5,
	eMatchWidgetVisibilityOption__eMatchWidgetVisibilityOption_MAX = 6
};


// Enum Robogore.eMissionGameState
enum class EeMissionGameState : uint8_t
{
	eMissionGameState__LevelEntry  = 0,
	eMissionGameState__Preplay     = 1,
	eMissionGameState__LoadingSave = 2,
	eMissionGameState__Play        = 3,
	eMissionGameState__Respawning  = 4,
	eMissionGameState__StatScreen  = 5,
	eMissionGameState__PostPlay    = 6,
	eMissionGameState__LevelExit   = 7,
	eMissionGameState__kNUM        = 8,
	eMissionGameState__kINVALID    = 9,
	eMissionGameState__eMissionGameState_MAX = 10
};


// Enum Robogore.eIndicatorActorType
enum class EeIndicatorActorType : uint8_t
{
	eIndicatorActorType__Add       = 0,
	eIndicatorActorType__Remove    = 1,
	eIndicatorActorType__eIndicatorActorType_MAX = 2
};


// Enum Robogore.eRobogoreLevelType
enum class EeRobogoreLevelType : uint8_t
{
	eRobogoreLevelType__MainMenu   = 0,
	eRobogoreLevelType__Garage     = 1,
	eRobogoreLevelType__Mission    = 2,
	eRobogoreLevelType__Excursion  = 3,
	eRobogoreLevelType__Training   = 4,
	eRobogoreLevelType__Invalid    = 5,
	eRobogoreLevelType__eRobogoreLevelType_MAX = 6
};


// Enum Robogore.eMissionFinishedState
enum class EeMissionFinishedState : uint8_t
{
	eMissionFinishedState__MissionPass = 0,
	eMissionFinishedState__MissionFail = 1,
	eMissionFinishedState__MissionQuit = 2,
	eMissionFinishedState__MissionRestart = 3,
	eMissionFinishedState__Invalid = 4,
	eMissionFinishedState__eMissionFinishedState_MAX = 5
};


// Enum Robogore.eMissionRetrievalDropOffState
enum class EeMissionRetrievalDropOffState : uint8_t
{
	eMissionRetrievalDropOffState__Idle = 0,
	eMissionRetrievalDropOffState__WaitingForDrop = 1,
	eMissionRetrievalDropOffState__Launching = 2,
	eMissionRetrievalDropOffState__Complete = 3,
	eMissionRetrievalDropOffState__kNUM = 4,
	eMissionRetrievalDropOffState__kINVALID = 5,
	eMissionRetrievalDropOffState__eMissionRetrievalDropOffState_MAX = 6
};


// Enum Robogore.eMissionRetrievalCoreState
enum class EeMissionRetrievalCoreState : uint8_t
{
	eMissionRetrievalCoreState__Idle = 0,
	eMissionRetrievalCoreState__Ticking = 1,
	eMissionRetrievalCoreState__Critical = 2,
	eMissionRetrievalCoreState__Explode = 3,
	eMissionRetrievalCoreState__kNUM = 4,
	eMissionRetrievalCoreState__kINVALID = 5,
	eMissionRetrievalCoreState__eMissionRetrievalCoreState_MAX = 6
};


// Enum Robogore.eMissionRetrievalCoreCarryState
enum class EeMissionRetrievalCoreCarryState : uint8_t
{
	eMissionRetrievalCoreCarryState__Idle = 0,
	eMissionRetrievalCoreCarryState__WaitingPickup = 1,
	eMissionRetrievalCoreCarryState__PickedUp = 2,
	eMissionRetrievalCoreCarryState__Dropped = 3,
	eMissionRetrievalCoreCarryState__Delivered = 4,
	eMissionRetrievalCoreCarryState__kNUM = 5,
	eMissionRetrievalCoreCarryState__kINVALID = 6,
	eMissionRetrievalCoreCarryState__eMissionRetrievalCoreCarryState_MAX = 7
};


// Enum Robogore.eMtxAssetCategory
enum class EeMtxAssetCategory : uint8_t
{
	eMtxAssetCategory__Misc        = 0,
	eMtxAssetCategory__Emote       = 1,
	eMtxAssetCategory__Skin        = 2,
	eMtxAssetCategory__Shader      = 3,
	eMtxAssetCategory__Attachment  = 4,
	eMtxAssetCategory__Badge       = 5,
	eMtxAssetCategory__Banner      = 6,
	eMtxAssetCategory__PilotSkin   = 7,
	eMtxAssetCategory__CrewSkin    = 8,
	eMtxAssetCategory__Count       = 9,
	eMtxAssetCategory__eMtxAssetCategory_MAX = 10
};


// Enum Robogore.eOnActor
enum class EeOnActor : uint8_t
{
	eOnActor__OnDestroyed          = 0,
	eOnActor__OnScanned            = 1,
	eOnActor__OnInteract           = 2,
	eOnActor__eOnActor_MAX         = 3
};


// Enum Robogore.eCounterType
enum class EeCounterType : uint8_t
{
	eCounterType__Increment        = 0,
	eCounterType__Decrement        = 1,
	eCounterType__eCounterType_MAX = 2
};


// Enum Robogore.eObjectiveInfo
enum class EeObjectiveInfo : uint8_t
{
	eObjectiveInfo__New            = 0,
	eObjectiveInfo__Update         = 1,
	eObjectiveInfo__Complete       = 2,
	eObjectiveInfo__Fail           = 3,
	eObjectiveInfo__eObjectiveInfo_MAX = 4
};


// Enum Robogore.eObjectiveState
enum class EeObjectiveState : uint8_t
{
	eObjectiveState__Inactive      = 0,
	eObjectiveState__Active        = 1,
	eObjectiveState__Success       = 2,
	eObjectiveState__Failure       = 3,
	eObjectiveState__kNUM          = 4,
	eObjectiveState__kINVALID      = 5,
	eObjectiveState__eObjectiveState_MAX = 6
};


// Enum Robogore.eOperatorSetType
enum class EeOperatorSetType : uint8_t
{
	eOperatorSetType__Sequence     = 0,
	eOperatorSetType__AllTrue      = 1,
	eOperatorSetType__AnyTrue      = 2,
	eOperatorSetType__AllFalse     = 3,
	eOperatorSetType__AnyFalse     = 4,
	eOperatorSetType__eOperatorSetType_MAX = 5
};


// Enum Robogore.eComparisonTest
enum class EeComparisonTest : uint8_t
{
	eComparisonTest__LessThan      = 0,
	eComparisonTest__LessThanOrEqual = 1,
	eComparisonTest__Equal         = 2,
	eComparisonTest__GreaterThanOrEqual = 3,
	eComparisonTest__GreaterThan   = 4,
	eComparisonTest__eComparisonTest_MAX = 5
};


// Enum Robogore.ePayloadOccupiedState
enum class EePayloadOccupiedState : uint8_t
{
	ePayloadOccupiedState__Vacant  = 0,
	ePayloadOccupiedState__MoverPresent = 1,
	ePayloadOccupiedState__MoverAndStopperPresent = 2,
	ePayloadOccupiedState__StopperPresent = 3,
	ePayloadOccupiedState__kNUM    = 4,
	ePayloadOccupiedState__kINVALID = 5,
	ePayloadOccupiedState__ePayloadOccupiedState_MAX = 6
};


// Enum Robogore.ePayloadMovementState
enum class EePayloadMovementState : uint8_t
{
	ePayloadMovementState__Stopped = 0,
	ePayloadMovementState__Activating = 1,
	ePayloadMovementState__MovingForward = 2,
	ePayloadMovementState__Deactivating = 3,
	ePayloadMovementState__kNUM    = 4,
	ePayloadMovementState__kINVALID = 5,
	ePayloadMovementState__ePayloadMovementState_MAX = 6
};


// Enum Robogore.eCargoInteractionStatus
enum class EeCargoInteractionStatus : uint8_t
{
	eCargoInteractionStatus__None  = 0,
	eCargoInteractionStatus__HasAttacker = 1,
	eCargoInteractionStatus__HasDefender = 2,
	eCargoInteractionStatus__eCargoInteractionStatus_MAX = 3
};


// Enum Robogore.ePayloadCargoMovementState
enum class EePayloadCargoMovementState : uint8_t
{
	ePayloadCargoMovementState__Inactive = 0,
	ePayloadCargoMovementState__PowerUp = 1,
	ePayloadCargoMovementState__Activating = 2,
	ePayloadCargoMovementState__Coasting = 3,
	ePayloadCargoMovementState__Active = 4,
	ePayloadCargoMovementState__Deactivating = 5,
	ePayloadCargoMovementState__PowerDown = 6,
	ePayloadCargoMovementState__AtWaypoint = 7,
	ePayloadCargoMovementState__AtDestination = 8,
	ePayloadCargoMovementState__kNUM = 9,
	ePayloadCargoMovementState__kINVALID = 10,
	ePayloadCargoMovementState__ePayloadCargoMovementState_MAX = 11
};


// Enum Robogore.eLandingPadCaptureState
enum class EeLandingPadCaptureState : uint8_t
{
	eLandingPadCaptureState__Vacant = 0,
	eLandingPadCaptureState__Contested = 1,
	eLandingPadCaptureState__Capturing = 2,
	eLandingPadCaptureState__Occupied = 3,
	eLandingPadCaptureState__kNUM  = 4,
	eLandingPadCaptureState__kINVALID = 5,
	eLandingPadCaptureState__eLandingPadCaptureState_MAX = 6
};


// Enum Robogore.ePayloadWaypointType
enum class EePayloadWaypointType : uint8_t
{
	ePayloadWaypointType__StartingWaypoint = 0,
	ePayloadWaypointType__PassThrough = 1,
	ePayloadWaypointType__MajorWaypoint = 2,
	ePayloadWaypointType__DestinationWaypoint = 3,
	ePayloadWaypointType__ePayloadWaypointType_MAX = 4
};


// Enum Robogore.eShuttleAIState
enum class EeShuttleAIState : uint8_t
{
	eShuttleAIState__Idle          = 0,
	eShuttleAIState__Travel        = 1,
	eShuttleAIState__Grounded      = 2,
	eShuttleAIState__kNUM          = 3,
	eShuttleAIState__kINVALID      = 4,
	eShuttleAIState__eShuttleAIState_MAX = 5
};


// Enum Robogore.ePilotControllerButton
enum class EePilotControllerButton : uint8_t
{
	Trigger_L                      = 0,
	Shoulder_L                     = 1,
	Trigger_R                      = 2,
	Shoulder_R                     = 3,
	Face_Bottom                    = 4,
	Face_Top                       = 5,
	Face_Right                     = 6,
	Face_Left                      = 7,
	Dir_Down                       = 8,
	Dir_Up                         = 9,
	Dir_Left                       = 10,
	Dir_Right                      = 11,
	ePilotControllerButton_MAX     = 12
};


// Enum Robogore.ePlayerCharacterInteractableType
enum class EePlayerCharacterInteractableType : uint8_t
{
	ePlayerCharacterInteractableType__RequiresPlayerInput = 0,
	ePlayerCharacterInteractableType__TriggersOnOverlap = 1,
	ePlayerCharacterInteractableType__ePlayerCharacterInteractableType_MAX = 2
};


// Enum Robogore.eChatMessageType
enum class EeChatMessageType : uint8_t
{
	eChatMessageType__NONE         = 0,
	eChatMessageType__Warning      = 1,
	eChatMessageType__Error        = 2,
	eChatMessageType__Team         = 3,
	eChatMessageType__Party        = 4,
	eChatMessageType__AllPlayers   = 5,
	eChatMessageType__eChatMessageType_MAX = 6
};


// Enum Robogore.eAxisSign
enum class EeAxisSign : uint8_t
{
	eAxisSign__Negative            = 0,
	eAxisSign__Positive            = 1,
	eAxisSign__eAxisSign_MAX       = 2
};


// Enum Robogore.ePulseDirectionFallbackMethod
enum class EePulseDirectionFallbackMethod : uint8_t
{
	ePulseDirectionFallbackMethod__PlayerForwardVector = 0,
	ePulseDirectionFallbackMethod__DirectionFromLastPulse_Absolute = 1,
	ePulseDirectionFallbackMethod__DirectionFromLastPulse_Threshold = 2,
	ePulseDirectionFallbackMethod__ePulseDirectionFallbackMethod_MAX = 3
};


// Enum Robogore.eProjectileImpactResponse
enum class EeProjectileImpactResponse : uint8_t
{
	eProjectileImpactResponse__Destroy = 0,
	eProjectileImpactResponse__Pierce = 1,
	eProjectileImpactResponse__Stick = 2,
	eProjectileImpactResponse__Bounce = 3,
	eProjectileImpactResponse__PassThrough = 4,
	eProjectileImpactResponse__INVALID = 5,
	eProjectileImpactResponse__eProjectileImpactResponse_MAX = 6
};


// Enum Robogore.eHomingProjectileMethod
enum class EeHomingProjectileMethod : uint8_t
{
	eHomingProjectileMethod__NoHoming = 0,
	eHomingProjectileMethod__Waver = 1,
	eHomingProjectileMethod__NeverMiss = 2,
	eHomingProjectileMethod__RotationalInterpolation = 3,
	eHomingProjectileMethod__AccelerateTowards = 4,
	eHomingProjectileMethod__kNUM  = 5,
	eHomingProjectileMethod__kINVALID = 6,
	eHomingProjectileMethod__eHomingProjectileMethod_MAX = 7
};


// Enum Robogore.eRadarRing
enum class EeRadarRing : uint8_t
{
	eRadarRing__Near               = 0,
	eRadarRing__Mid                = 1,
	eRadarRing__Far                = 2,
	eRadarRing__Count              = 3,
	eRadarRing__eRadarRing_MAX     = 4
};


// Enum Robogore.eWeaponChargeState
enum class EeWeaponChargeState : uint8_t
{
	eWeaponChargeState__None       = 0,
	eWeaponChargeState__ChargingUp = 1,
	eWeaponChargeState__WindingDown = 2,
	eWeaponChargeState__Charged    = 3,
	eWeaponChargeState__INVALID    = 4,
	eWeaponChargeState__eWeaponChargeState_MAX = 5
};


// Enum Robogore.eWeaponConfigType
enum class EeWeaponConfigType : uint8_t
{
	eWeaponConfigType__Linear      = 0,
	eWeaponConfigType__Instant     = 1,
	eWeaponConfigType__Lob         = 2,
	eWeaponConfigType__Stream      = 3,
	eWeaponConfigType__INVALID     = 4,
	eWeaponConfigType__eWeaponConfigType_MAX = 5
};


// Enum Robogore.eAmmoReadoutType
enum class EeAmmoReadoutType : uint8_t
{
	eAmmoReadoutType__CurrentAmmo  = 0,
	eAmmoReadoutType__MaxAmmo      = 1,
	eAmmoReadoutType__eAmmoReadoutType_MAX = 2
};


// Enum Robogore.eRemoveAllRuntimeItemsEventResult
enum class EeRemoveAllRuntimeItemsEventResult : uint8_t
{
	eRemoveAllRuntimeItemsEventResult__Success = 0,
	eRemoveAllRuntimeItemsEventResult__Failure_NoReceiver = 1,
	eRemoveAllRuntimeItemsEventResult__eRemoveAllRuntimeItemsEventResult_MAX = 2
};


// Enum Robogore.eRemoveAllRuntimeItemsOfTypeEventResult
enum class EeRemoveAllRuntimeItemsOfTypeEventResult : uint8_t
{
	eRemoveAllRuntimeItemsOfTypeEventResult__Success = 0,
	eRemoveAllRuntimeItemsOfTypeEventResult__Failure_NoSuchItem = 1,
	eRemoveAllRuntimeItemsOfTypeEventResult__Failure_NoReceiver = 2,
	eRemoveAllRuntimeItemsOfTypeEventResult__eRemoveAllRuntimeItemsOfTypeEventResult_MAX = 3
};


// Enum Robogore.eRemoveRuntimeItemEventResult
enum class EeRemoveRuntimeItemEventResult : uint8_t
{
	eRemoveRuntimeItemEventResult__Success = 0,
	eRemoveRuntimeItemEventResult__Failure_NoSuchItem = 1,
	eRemoveRuntimeItemEventResult__Failure_NoReceiver = 2,
	eRemoveRuntimeItemEventResult__eRemoveRuntimeItemEventResult_MAX = 3
};


// Enum Robogore.eRetrievalGameFeedEventType
enum class EeRetrievalGameFeedEventType : uint8_t
{
	eRetrievalGameFeedEventType__FirstSpawned = 0,
	eRetrievalGameFeedEventType__PickedUp = 1,
	eRetrievalGameFeedEventType__Dropped = 2,
	eRetrievalGameFeedEventType__Scored = 3,
	eRetrievalGameFeedEventType__eRetrievalGameFeedEventType_MAX = 4
};


// Enum Robogore.eRetrievalInteractableRespawnType
enum class EeRetrievalInteractableRespawnType : uint8_t
{
	eRetrievalInteractableRespawnType__NeverRespawn = 0,
	eRetrievalInteractableRespawnType__WhenInteractionComplete = 1,
	eRetrievalInteractableRespawnType__WhenSpawnedObjectsLeaveTheGame = 2,
	eRetrievalInteractableRespawnType__eRetrievalInteractableRespawnType_MAX = 3
};


// Enum Robogore.eRetrievalLiftoffActorState
enum class EeRetrievalLiftoffActorState : uint8_t
{
	eRetrievalLiftoffActorState__Idle = 0,
	eRetrievalLiftoffActorState__Launching = 1,
	eRetrievalLiftoffActorState__Launched = 2,
	eRetrievalLiftoffActorState__kNUM = 3,
	eRetrievalLiftoffActorState__kINVALID = 4,
	eRetrievalLiftoffActorState__eRetrievalLiftoffActorState_MAX = 5
};


// Enum Robogore.eRetrievalObjectiveState
enum class EeRetrievalObjectiveState : uint8_t
{
	eRetrievalObjectiveState__ItemAtObjective = 0,
	eRetrievalObjectiveState__ItemInWorld = 1,
	eRetrievalObjectiveState__ItemInInventory = 2,
	eRetrievalObjectiveState__ItemScored = 3,
	eRetrievalObjectiveState__ItemRemovedFromGame = 4,
	eRetrievalObjectiveState__None = 5,
	eRetrievalObjectiveState__eRetrievalObjectiveState_MAX = 6
};


// Enum Robogore.ePlayerAudioRelationship
enum class EePlayerAudioRelationship : uint8_t
{
	ePlayerAudioRelationship__Ally = 0,
	ePlayerAudioRelationship__Self = 1,
	ePlayerAudioRelationship__Enemy = 2,
	ePlayerAudioRelationship__None = 3,
	ePlayerAudioRelationship__ePlayerAudioRelationship_MAX = 4
};


// Enum Robogore.eDynamicMusicLevel
enum class EeDynamicMusicLevel : uint8_t
{
	eDynamicMusicLevel__Green      = 0,
	eDynamicMusicLevel__Yellow     = 1,
	eDynamicMusicLevel__Orange     = 2,
	eDynamicMusicLevel__Red        = 3,
	eDynamicMusicLevel__Success    = 4,
	eDynamicMusicLevel__Failure    = 5,
	eDynamicMusicLevel__COUNT      = 6,
	eDynamicMusicLevel__eDynamicMusicLevel_MAX = 7
};


// Enum Robogore.eAbilityStagingMode
enum class EeAbilityStagingMode : uint8_t
{
	eAbilityStagingMode__Toggle    = 0,
	eAbilityStagingMode__QuickRelease = 1,
	eAbilityStagingMode__INVALID   = 2,
	eAbilityStagingMode__eAbilityStagingMode_MAX = 3
};


// Enum Robogore.eRobogoreStatSessionType
enum class EeRobogoreStatSessionType : uint8_t
{
	eRobogoreStatSessionType__Global = 0,
	eRobogoreStatSessionType__GlobalCrew = 1,
	eRobogoreStatSessionType__GlobalRound = 2,
	eRobogoreStatSessionType__PlayerGlobal = 3,
	eRobogoreStatSessionType__PlayerLife = 4,
	eRobogoreStatSessionType__PlayerCrew = 5,
	eRobogoreStatSessionType__PlayerRound = 6,
	eRobogoreStatSessionType__kUndefined = 7,
	eRobogoreStatSessionType__eRobogoreStatSessionType_MAX = 8
};


// Enum Robogore.eStatSessionState
enum class EeStatSessionState : uint8_t
{
	eStatSessionState__PreSession  = 0,
	eStatSessionState__InSession   = 1,
	eStatSessionState__PostSession = 2,
	eStatSessionState__eStatSessionState_MAX = 3
};


// Enum Robogore.eStatSource
enum class EeStatSource : uint8_t
{
	eStatSource__Gravcycle         = 0,
	eStatSource__Unit              = 1,
	eStatSource__Unknown           = 2,
	eStatSource__kInvalid          = 3,
	eStatSource__eStatSource_MAX   = 4
};


// Enum Robogore.eRoundEndCondition
enum class EeRoundEndCondition : uint8_t
{
	eRoundEndCondition__Win        = 0,
	eRoundEndCondition__Lose       = 1,
	eRoundEndCondition__Draw       = 2,
	eRoundEndCondition__kInvalid   = 3,
	eRoundEndCondition__eRoundEndCondition_MAX = 4
};


// Enum Robogore.eWhenInventoryDropsItemsOnDeath
enum class EeWhenInventoryDropsItemsOnDeath : uint8_t
{
	eWhenInventoryDropsItemsOnDeath__DoNotDrop = 0,
	eWhenInventoryDropsItemsOnDeath__DropOnIncap = 1,
	eWhenInventoryDropsItemsOnDeath__DropOnDying = 2,
	eWhenInventoryDropsItemsOnDeath__DropOnDead = 3,
	eWhenInventoryDropsItemsOnDeath__eWhenInventoryDropsItemsOnDeath_MAX = 4
};


// Enum Robogore.eRuntimeItemTeamPickupType
enum class EeRuntimeItemTeamPickupType : uint8_t
{
	eRuntimeItemTeamPickupType__CannotPickup = 0,
	eRuntimeItemTeamPickupType__PickupButDestroy = 1,
	eRuntimeItemTeamPickupType__PickupStoreInInventory = 2,
	eRuntimeItemTeamPickupType__eRuntimeItemTeamPickupType_MAX = 3
};


// Enum Robogore.eRuntimeItemGameplayEffectType
enum class EeRuntimeItemGameplayEffectType : uint8_t
{
	eRuntimeItemGameplayEffectType__Unique = 0,
	eRuntimeItemGameplayEffectType__Shared = 1,
	eRuntimeItemGameplayEffectType__eRuntimeItemGameplayEffectType_MAX = 2
};


// Enum Robogore.eSaveGameEventType
enum class EeSaveGameEventType : uint8_t
{
	eSaveGameEventType__Save       = 0,
	eSaveGameEventType__Load       = 1,
	eSaveGameEventType__Invalid    = 2,
	eSaveGameEventType__eSaveGameEventType_MAX = 3
};


// Enum Robogore.eScreenFadeState
enum class EeScreenFadeState : uint8_t
{
	eScreenFadeState__Opaque       = 0,
	eScreenFadeState__DecreasingOpacity = 1,
	eScreenFadeState__Transparent  = 2,
	eScreenFadeState__IncreasingOpacity = 3,
	eScreenFadeState__kNUM         = 4,
	eScreenFadeState__kINVALID     = 5,
	eScreenFadeState__eScreenFadeState_MAX = 6
};


// Enum Robogore.eSmartObjectInteractorRole
enum class EeSmartObjectInteractorRole : uint8_t
{
	eSmartObjectInteractorRole__NONE = 0,
	eSmartObjectInteractorRole__Interactor = 1,
	eSmartObjectInteractorRole__Support = 2,
	eSmartObjectInteractorRole__eSmartObjectInteractorRole_MAX = 3
};


// Enum Robogore.eSmartObjectInteractorState
enum class EeSmartObjectInteractorState : uint8_t
{
	eSmartObjectInteractorState__None = 0,
	eSmartObjectInteractorState__Claimed = 1,
	eSmartObjectInteractorState__ReadyForInteraction = 2,
	eSmartObjectInteractorState__Interacting = 3,
	eSmartObjectInteractorState__eSmartObjectInteractorState_MAX = 4
};


// Enum Robogore.eSmartObjectClaimResult
enum class EeSmartObjectClaimResult : uint8_t
{
	eSmartObjectClaimResult__Ineligible = 0,
	eSmartObjectClaimResult__Unavailable = 1,
	eSmartObjectClaimResult__AlreadyClaimed = 2,
	eSmartObjectClaimResult__Success = 3,
	eSmartObjectClaimResult__eSmartObjectClaimResult_MAX = 4
};


// Enum Robogore.eSmartObjectInteractionResult
enum class EeSmartObjectInteractionResult : uint8_t
{
	eSmartObjectInteractionResult__InProgress = 0,
	eSmartObjectInteractionResult__Succeeded = 1,
	eSmartObjectInteractionResult__Interrupted = 2,
	eSmartObjectInteractionResult__Failed = 3,
	eSmartObjectInteractionResult__eSmartObjectInteractionResult_MAX = 4
};


// Enum Robogore.eSmartObjectState
enum class EeSmartObjectState : uint8_t
{
	eSmartObjectState__Inactive    = 0,
	eSmartObjectState__WaitingForEnoughClaims = 1,
	eSmartObjectState__WaitingForInteraction = 2,
	eSmartObjectState__InteractionInProgress = 3,
	eSmartObjectState__kNUM        = 4,
	eSmartObjectState__kINVALID    = 5,
	eSmartObjectState__eSmartObjectState_MAX = 6
};


// Enum Robogore.eReticleSnapType
enum class EeReticleSnapType : uint8_t
{
	eReticleSnapType__Enemy        = 0,
	eReticleSnapType__Friendly     = 1,
	eReticleSnapType__Ally         = 2,
	eReticleSnapType__Interactable = 3,
	eReticleSnapType__CommandPulseInteractable = 4,
	eReticleSnapType__Count        = 5,
	eReticleSnapType__Invalid      = 6,
	eReticleSnapType__eReticleSnapType_MAX = 7
};


// Enum Robogore.eSpawnControllerState
enum class EeSpawnControllerState : uint8_t
{
	eSpawnControllerState__Idle    = 0,
	eSpawnControllerState__Spawning = 1,
	eSpawnControllerState__Waiting = 2,
	eSpawnControllerState__QueueNextWaveMachine = 3,
	eSpawnControllerState__Complete = 4,
	eSpawnControllerState__kNUM    = 5,
	eSpawnControllerState__kINVALID = 6,
	eSpawnControllerState__eSpawnControllerState_MAX = 7
};


// Enum Robogore.eSpawnLocationState
enum class EeSpawnLocationState : uint8_t
{
	eSpawnLocationState__Idle      = 0,
	eSpawnLocationState__Spawning  = 1,
	eSpawnLocationState__Complete  = 2,
	eSpawnLocationState__kNUM      = 3,
	eSpawnLocationState__kINVALID  = 4,
	eSpawnLocationState__eSpawnLocationState_MAX = 5
};


// Enum Robogore.eSpawnWaveMachineState
enum class EeSpawnWaveMachineState : uint8_t
{
	eSpawnWaveMachineState__Idle   = 0,
	eSpawnWaveMachineState__Spawning = 1,
	eSpawnWaveMachineState__Spawned = 2,
	eSpawnWaveMachineState__QueueNextWave = 3,
	eSpawnWaveMachineState__Complete = 4,
	eSpawnWaveMachineState__kNUM   = 5,
	eSpawnWaveMachineState__kINVALID = 6,
	eSpawnWaveMachineState__eSpawnWaveMachineState_MAX = 7
};


// Enum Robogore.eSpiderClawState
enum class EeSpiderClawState : uint8_t
{
	eSpiderClawState__Idle         = 0,
	eSpiderClawState__Open         = 1,
	eSpiderClawState__Closed       = 2,
	eSpiderClawState__TOTAL        = 3,
	eSpiderClawState__eSpiderClawState_MAX = 4
};


// Enum Robogore.eOnSplineType
enum class EeOnSplineType : uint8_t
{
	eOnSplineType__OnStart         = 0,
	eOnSplineType__OnFinish        = 1,
	eOnSplineType__OnPercentage    = 2,
	eOnSplineType__OnDistance      = 3,
	eOnSplineType__eOnSplineType_MAX = 4
};


// Enum Robogore.eFollowSplineType
enum class EeFollowSplineType : uint8_t
{
	eFollowSplineType__Start       = 0,
	eFollowSplineType__Play        = 1,
	eFollowSplineType__Pause       = 2,
	eFollowSplineType__eFollowSplineType_MAX = 3
};


// Enum Robogore.eSquadHUDOrderStatus
enum class EeSquadHUDOrderStatus : uint8_t
{
	eSquadHUDOrderStatus__Following = 0,
	eSquadHUDOrderStatus__TakingPosition = 1,
	eSquadHUDOrderStatus__AttackingTarget = 2,
	eSquadHUDOrderStatus__Interacting = 3,
	eSquadHUDOrderStatus__NONE     = 4,
	eSquadHUDOrderStatus__eSquadHUDOrderStatus_MAX = 5
};


// Enum Robogore.eTCHUDOverlayEventType
enum class EeTCHUDOverlayEventType : uint8_t
{
	eTCHUDOverlayEventType__InitialTextAppears = 0,
	eTCHUDOverlayEventType__CapturePointsHUDVisible = 1,
	eTCHUDOverlayEventType__CapturePointsWorldWidgetsVisible = 2,
	eTCHUDOverlayEventType__eTCHUDOverlayEventType_MAX = 3
};


// Enum Robogore.eDefenseWidgetVisibleTo
enum class EeDefenseWidgetVisibleTo : uint8_t
{
	eDefenseWidgetVisibleTo__Everyone = 0,
	eDefenseWidgetVisibleTo__OnlyOwningTeam = 1,
	eDefenseWidgetVisibleTo__OnlyNonOwningTeam = 2,
	eDefenseWidgetVisibleTo__NotVisible = 3,
	eDefenseWidgetVisibleTo__eDefenseWidgetVisibleTo_MAX = 4
};


// Enum Robogore.eTeamDamageMode
enum class EeTeamDamageMode : uint8_t
{
	eTeamDamageMode__NoFriendlyFire = 0,
	eTeamDamageMode__FriendlyFire_CommandedUnitsOnly = 1,
	eTeamDamageMode__FriendlyFire_All = 2,
	eTeamDamageMode__kInvalid      = 3,
	eTeamDamageMode__eTeamDamageMode_MAX = 4
};


// Enum Robogore.eTeamID
enum class EeTeamID : uint8_t
{
	eTeamID__Team1                 = 0,
	eTeamID__Team2                 = 1,
	eTeamID__Team3                 = 2,
	eTeamID__Team4                 = 3,
	eTeamID__Team5                 = 4,
	eTeamID__Team6                 = 5,
	eTeamID__Team7                 = 6,
	eTeamID__Team8                 = 7,
	eTeamID__Team9                 = 8,
	eTeamID__Team10                = 9,
	eTeamID__Team11                = 10,
	eTeamID__Team12                = 11,
	eTeamID__Team13                = 12,
	eTeamID__Team14                = 13,
	eTeamID__Team15                = 14,
	eTeamID__Team16                = 15,
	eTeamID__Team17                = 16,
	eTeamID__Team18                = 17,
	eTeamID__Team19                = 18,
	eTeamID__Team20                = 19,
	eTeamID__Team21                = 20,
	eTeamID__Team22                = 21,
	eTeamID__Team23                = 22,
	eTeamID__Team24                = 23,
	eTeamID__Team25                = 24,
	eTeamID__Team26                = 25,
	eTeamID__Team27                = 26,
	eTeamID__Team28                = 27,
	eTeamID__Team29                = 28,
	eTeamID__Team30                = 29,
	eTeamID__Team31                = 30,
	eTeamID__NONE                  = 31,
	eTeamID__kCount                = 32,
	eTeamID__kInvalid              = 33,
	eTeamID__eTeamID_MAX           = 34
};


// Enum Robogore.eTeamMatrixRelationship
enum class EeTeamMatrixRelationship : uint8_t
{
	eTeamMatrixRelationship__TeamMatrix_Neutral = 0,
	eTeamMatrixRelationship__TeamMatrix_Friendly = 1,
	eTeamMatrixRelationship__TeamMatrix_Enemy = 2,
	eTeamMatrixRelationship__TeamMatrix_kInvalid = 3,
	eTeamMatrixRelationship__TeamMatrix_MAX = 4
};


// Enum Robogore.eTeamRelationship
enum class EeTeamRelationship : uint8_t
{
	eTeamRelationship__Friendly    = 0,
	eTeamRelationship__Allies      = 1,
	eTeamRelationship__Enemy       = 2,
	eTeamRelationship__Neutral     = 3,
	eTeamRelationship__Spectator_Team01 = 4,
	eTeamRelationship__Spectator_Team02 = 5,
	eTeamRelationship__kCount      = 6,
	eTeamRelationship__kInvalid    = 7,
	eTeamRelationship__eTeamRelationship_MAX = 8
};


// Enum Robogore.eTriggeringType
enum class EeTriggeringType : uint8_t
{
	eTriggeringType__All           = 0,
	eTriggeringType__Unit          = 1,
	eTriggeringType__Gravcycle     = 2,
	eTriggeringType__eTriggeringType_MAX = 3
};


// Enum Robogore.eUnitAbilityState
enum class EeUnitAbilityState : uint8_t
{
	eUnitAbilityState__Waiting     = 0,
	eUnitAbilityState__Ready       = 1,
	eUnitAbilityState__Active      = 2,
	eUnitAbilityState__Uninitializing = 3,
	eUnitAbilityState__kNUM        = 4,
	eUnitAbilityState__kINVALID    = 5,
	eUnitAbilityState__eUnitAbilityState_MAX = 6
};


// Enum Robogore.eUnitCameraMode
enum class EeUnitCameraMode : uint8_t
{
	eUnitCameraMode__ThirdPerson   = 0,
	eUnitCameraMode__Custom        = 1,
	eUnitCameraMode__kCount        = 2,
	eUnitCameraMode__eUnitCameraMode_MAX = 3
};


// Enum Robogore.eChatterPriority
enum class EeChatterPriority : uint8_t
{
	eChatterPriority__High         = 0,
	eChatterPriority__Medium       = 1,
	eChatterPriority__Low          = 2,
	eChatterPriority__kNUM         = 3,
	eChatterPriority__Unitialized  = 4,
	eChatterPriority__eChatterPriority_MAX = 5
};


// Enum Robogore.eChatterLane
enum class EeChatterLane : uint8_t
{
	eChatterLane__Vital            = 0,
	eChatterLane__Important        = 1,
	eChatterLane__Standard         = 2,
	eChatterLane__kNUM             = 3,
	eChatterLane__Ignore           = 4,
	eChatterLane__Unitialized      = 5,
	eChatterLane__eChatterLane_MAX = 6
};


// Enum Robogore.eChatterCategory
enum class EeChatterCategory : uint8_t
{
	eChatterCategory__AAA_ThisOnlyExistsForTMaps = 0,
	eChatterCategory__AccoladeCalloutA = 1,
	eChatterCategory__AccoladeCalloutB = 2,
	eChatterCategory__AccoladeCalloutC = 3,
	eChatterCategory__ControlPointFriendlyTeamSecured = 4,
	eChatterCategory__ControlPointFriendlyTeamSecuring = 5,
	eChatterCategory__EnemyGravcycleDestroyed = 6,
	eChatterCategory__EnemyGravcycleDetected = 7,
	eChatterCategory__EnemyReinforcements = 8,
	eChatterCategory__EnemyReviving = 9,
	eChatterCategory__EnemyUnitDestroyed = 10,
	eChatterCategory__EnemyUnitDetected = 11,
	eChatterCategory__EngagingTarget = 12,
	eChatterCategory__ExplosionReaction = 13,
	eChatterCategory__FlagGrabbed  = 14,
	eChatterCategory__FlagSecuring = 15,
	eChatterCategory__FriendlyUnitDestroyed = 16,
	eChatterCategory__FriendlyUnitIncapacitated = 17,
	eChatterCategory__HealingReceived = 18,
	eChatterCategory__HealthLowInCombat = 19,
	eChatterCategory__HealthLowOutOfCombat = 20,
	eChatterCategory__Inactivity   = 21,
	eChatterCategory__InteractingWithSalvageNode = 22,
	eChatterCategory__MeleeExertLarge = 23,
	eChatterCategory__MeleeExertSmall = 24,
	eChatterCategory__MeleeExertSpecial = 25,
	eChatterCategory__PayloadInteractStarted = 26,
	eChatterCategory__PingSmall    = 27,
	eChatterCategory__PriorityTarget = 28,
	eChatterCategory__PriorityTargetLowHealth = 29,
	eChatterCategory__RedshirtFoundInCombat = 30,
	eChatterCategory__RedshirtFoundOutOfCombat = 31,
	eChatterCategory__RedshirtJoinsSquad = 32,
	eChatterCategory__RedshirtRescued = 33,
	eChatterCategory__Revived      = 34,
	eChatterCategory__SelfDestroyed = 35,
	eChatterCategory__SelfDestroyedWithNaniteDrop = 36,
	eChatterCategory__ShotByFriendlyGravcycle = 37,
	eChatterCategory__Stagger      = 38,
	eChatterCategory__UnderFire    = 39,
	eChatterCategory__UnitAbilityCancelledByPlayer = 40,
	eChatterCategory__UnitAbilityNotReady = 41,
	eChatterCategory__UnitAbilityPreformed = 42,
	eChatterCategory__UnitAbilityPreforming = 43,
	eChatterCategory__UnitAbilityReady = 44,
	eChatterCategory__UnitAbilityWilco = 45,
	eChatterCategory__UnitCongratulatePlayer = 46,
	eChatterCategory__UnitCongratulateSelf = 47,
	eChatterCategory__UnitCongratulateUnit = 48,
	eChatterCategory__UnitReturningToPlayer = 49,
	eChatterCategory__Wilco        = 50,
	eChatterCategory__kNUM         = 51,
	eChatterCategory__MissionDialogue = 52,
	eChatterCategory__kINVALID     = 53,
	eChatterCategory__eChatterCategory_MAX = 54
};


// Enum Robogore.eUnitChattingEvent
enum class EeUnitChattingEvent : uint8_t
{
	eUnitChattingEvent__Play       = 0,
	eUnitChattingEvent__Stop       = 1,
	eUnitChattingEvent__eUnitChattingEvent_MAX = 2
};


// Enum Robogore.eUnitCoverState
enum class EeUnitCoverState : uint8_t
{
	eUnitCoverState__TakingCover   = 0,
	eUnitCoverState__InCover       = 1,
	eUnitCoverState__TakeAimFromCover = 2,
	eUnitCoverState__AimingFromCover = 3,
	eUnitCoverState__ReturnToCoverFromAim = 4,
	eUnitCoverState__NONE          = 5,
	eUnitCoverState__eUnitCoverState_MAX = 6
};


// Enum Robogore.eUnitDialogueEvent
enum class EeUnitDialogueEvent : uint8_t
{
	eUnitDialogueEvent__Play       = 0,
	eUnitDialogueEvent__Stop       = 1,
	eUnitDialogueEvent__eUnitDialogueEvent_MAX = 2
};


// Enum Robogore.eUnitRespawnState
enum class EeUnitRespawnState : uint8_t
{
	eUnitRespawnState__Alive       = 0,
	eUnitRespawnState__Ragdoll     = 1,
	eUnitRespawnState__WaitingOnBrainPickup = 2,
	eUnitRespawnState__WaitingOnPlayerInitiatedRespawn = 3,
	eUnitRespawnState__PreRespawning = 4,
	eUnitRespawnState__Respawning  = 5,
	eUnitRespawnState__Respawned   = 6,
	eUnitRespawnState__CommandingPlayerDead = 7,
	eUnitRespawnState__kNUM        = 8,
	eUnitRespawnState__kINVALID    = 9,
	eUnitRespawnState__eUnitRespawnState_MAX = 10
};


// Enum Robogore.eV1AIFocusPriority
enum class EeV1AIFocusPriority : uint8_t
{
	eV1AIFocusPriority__Default    = 0,
	eV1AIFocusPriority__Movement   = 1,
	eV1AIFocusPriority__InterestLowPri = 2,
	eV1AIFocusPriority__InterestHiPri = 3,
	eV1AIFocusPriority__MainTarget = 4,
	eV1AIFocusPriority__CustomAiming = 5,
	eV1AIFocusPriority__TBD_01     = 6,
	eV1AIFocusPriority__GameplayOverride = 7,
	eV1AIFocusPriority__TOTAL      = 8,
	eV1AIFocusPriority__eV1AIFocusPriority_MAX = 9
};


// Enum Robogore.eAwarenessState
enum class EeAwarenessState : uint8_t
{
	eAwarenessState__Relaxed       = 0,
	eAwarenessState__Suspicious    = 1,
	eAwarenessState__Alert         = 2,
	eAwarenessState__Engaged       = 3,
	eAwarenessState__TOTAL         = 4,
	eAwarenessState__eAwarenessState_MAX = 5
};


// Enum Robogore.eVisionModeTransitionState
enum class EeVisionModeTransitionState : uint8_t
{
	eVisionModeTransitionState__None = 0,
	eVisionModeTransitionState__BlendingIn = 1,
	eVisionModeTransitionState__BlendingOut = 2,
	eVisionModeTransitionState__eVisionModeTransitionState_MAX = 3
};


// Enum Robogore.eCalloutTraceType
enum class EeCalloutTraceType : uint8_t
{
	eCalloutTraceType__NoTrace     = 0,
	eCalloutTraceType__RequiresTrace = 1,
	eCalloutTraceType__RequiresLOS = 2,
	eCalloutTraceType__eCalloutTraceType_MAX = 3
};


// Enum Robogore.eWeaponAbilityState
enum class EeWeaponAbilityState : uint8_t
{
	eWeaponAbilityState__Stowed    = 0,
	eWeaponAbilityState__Deploying = 1,
	eWeaponAbilityState__Deployed  = 2,
	eWeaponAbilityState__Stowing   = 3,
	eWeaponAbilityState__kNumStates = 4,
	eWeaponAbilityState__eWeaponAbilityState_MAX = 5
};


// Enum Robogore.eWidgetFadingType
enum class EeWidgetFadingType : uint8_t
{
	eWidgetFadingType__NoFading    = 0,
	eWidgetFadingType__RangeBased  = 1,
	eWidgetFadingType__eWidgetFadingType_MAX = 2
};


// Enum Robogore.eWidgetOcclusionSetting
enum class EeWidgetOcclusionSetting : uint8_t
{
	eWidgetOcclusionSetting__HideWhenBlocked = 0,
	eWidgetOcclusionSetting__DrawThroughWalls = 1,
	eWidgetOcclusionSetting__eWidgetOcclusionSetting_MAX = 2
};


// Enum Robogore.eYesNoMessageValue
enum class EeYesNoMessageValue : uint8_t
{
	eYesNoMessageValue__YES        = 0,
	eYesNoMessageValue__NO         = 1,
	eYesNoMessageValue__NONE       = 2,
	eYesNoMessageValue__eYesNoMessageValue_MAX = 3
};


// Enum Robogore.eCheckAttributeAgainst
enum class EeCheckAttributeAgainst : uint8_t
{
	eCheckAttributeAgainst__Any    = 0,
	eCheckAttributeAgainst__All    = 1,
	eCheckAttributeAgainst__eCheckAttributeAgainst_MAX = 2
};


// Enum Robogore.eWidgetScalingType
enum class EeWidgetScalingType : uint8_t
{
	eWidgetScalingType__NoScaling  = 0,
	eWidgetScalingType__RangeBased = 1,
	eWidgetScalingType__ScreenSizeBased = 2,
	eWidgetScalingType__eWidgetScalingType_MAX = 3
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Robogore.AchievementData
// 0x0030
struct FAchievementData
{
	struct FText                                       m_nameOfAchievement;                                      // 0x0000(0x0018) (Edit, BlueprintVisible)
	struct FText                                       m_descriptionOfAchievement;                               // 0x0018(0x0018) (Edit, BlueprintVisible)
};

// ScriptStruct Robogore.WidgetFadeConfig
// 0x000C
struct FWidgetFadeConfig
{
	EeWidgetFadingType                                 fadingType;                                               // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              distanceToBeginFade_InCM;                                 // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              distanceToEndFade_InCM;                                   // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Robogore.RangeBasedWidgetScalingConfig
// 0x0010
struct FRangeBasedWidgetScalingConfig
{
	float                                              scaleAtClosestScaleDistance;                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              scaleAtFarthestScaleDistance;                             // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              scalingClosestDistance_InCM;                              // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              scalingFarthestDistance_InCM;                             // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Robogore.WidgetScaleConfig
// 0x001C
struct FWidgetScaleConfig
{
	EeWidgetScalingType                                scalingType;                                              // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FIntPoint                                   worldSpaceQuadSize;                                       // 0x0004(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRangeBasedWidgetScalingConfig              rangeBasedScalingSettings;                                // 0x000C(0x0010) (Edit)
};

// ScriptStruct Robogore.WorldWidgetComponentParentData
// 0x0018
struct FWorldWidgetComponentParentData
{
	class USceneComponent*                             ParentComponent;                                          // 0x0000(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	struct FVector                                     relativeOffset;                                           // 0x0008(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Robogore.ActorNameAndTypeConfig
// 0x00A0
struct FActorNameAndTypeConfig
{
	struct FText                                       m_actorName;                                              // 0x0000(0x0018) (Edit)
	struct FText                                       m_actorType;                                              // 0x0018(0x0018) (Edit)
	bool                                               m_overrideNameIfPossessed;                                // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EeActorRandomNameSetting                           m_randomNameSetting;                                      // 0x0031(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0032(0x0006) MISSED OFFSET
	TArray<struct FText>                               m_fullyPreDefinedRandomNames;                             // 0x0038(0x0010) (Edit, ZeroConstructor)
	TArray<struct FText>                               m_randomNamePrefixes;                                     // 0x0048(0x0010) (Edit, ZeroConstructor)
	TArray<struct FText>                               m_randomNameSuffixes;                                     // 0x0058(0x0010) (Edit, ZeroConstructor)
	uint32_t                                           m_countOfRandomNumbers;                                   // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	struct FText                                       m_preComputedName;                                        // 0x0070(0x0018) (Transient)
	struct FText                                       m_preComputedType;                                        // 0x0088(0x0018) (Transient)
};

// ScriptStruct Robogore.WidgetOcclusionConfig
// 0x0004
struct FWidgetOcclusionConfig
{
	EeWidgetOcclusionSetting                           unscanned_OcclusionOutsideVM;                             // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EeWidgetOcclusionSetting                           unscanned_OcclusionInVM;                                  // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EeWidgetOcclusionSetting                           scanned_OcclusionOutsideVM;                               // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EeWidgetOcclusionSetting                           scanned_OcclusionInVM;                                    // 0x0003(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Robogore.ActorIdentifierCombinedWidgetConfig
// 0x0030
struct FActorIdentifierCombinedWidgetConfig
{
	struct FWidgetFadeConfig                           fadeConfig;                                               // 0x0000(0x000C) (Edit)
	struct FWidgetScaleConfig                          scaleConfig;                                              // 0x000C(0x001C) (Edit)
	struct FWidgetOcclusionConfig                      occlusionConfig;                                          // 0x0028(0x0004) (Edit)
	bool                                               showOffscreenWidget;                                      // 0x002C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
};

// ScriptStruct Robogore.IllumData
// 0x0030
struct FIllumData
{
	bool                                               enableTeamColorIllum;                                     // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               enableActorLifecycleIllum;                                // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              defaultIllumMultiplier;                                   // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              incapIllumMultiplier;                                     // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              deadIllumMultiplier;                                      // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       shaderColorParamName;                                     // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                teamColorTypeTag;                                         // 0x0018(0x0008) (Edit)
	float                                              illumInterpSpeed;                                         // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              currentIllum;                                             // 0x0024(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              wantedIllum;                                              // 0x0028(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               useTeamColor;                                             // 0x002C(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
};

// ScriptStruct Robogore.ActorIllumMaterialInstance
// 0x0018
struct FActorIllumMaterialInstance
{
	struct FLinearColor                                initialColor;                                             // 0x0000(0x0010) (ZeroConstructor, Transient, IsPlainOldData)
	class UMaterialInstanceDynamic*                    dynamicMaterial;                                          // 0x0010(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Robogore.ActorIllumParticleInstance
// 0x0020
struct FActorIllumParticleInstance
{
	struct FLinearColor                                initialColor;                                             // 0x0000(0x0010) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               hasInitialColor;                                          // 0x0010(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	class UParticleSystemComponent*                    particleComponent;                                        // 0x0018(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
};

// ScriptStruct Robogore.ActorIllumLightInstance
// 0x0020
struct FActorIllumLightInstance
{
	struct FLinearColor                                initialColor;                                             // 0x0000(0x0010) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              initialIntensity;                                         // 0x0010(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	class ULightComponent*                             LightComponent;                                           // 0x0018(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
};

// ScriptStruct Robogore.WidgetVisibilityConfig
// 0x0004
struct FWidgetVisibilityConfig
{
	bool                                               unscanned_ShowOutsideVM;                                  // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               unscanned_ShowInVM;                                       // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               scanned_ShowOutsideVM;                                    // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               scanned_ShowInVM;                                         // 0x0003(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Robogore.ActorIconWidgetConfig
// 0x0030
struct FActorIconWidgetConfig
{
	struct FWidgetVisibilityConfig                     defaultVisibilityConfig;                                  // 0x0000(0x0004) (Edit)
	bool                                               visibilityInVisionModeRequiresCallout;                    // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	struct FWidgetFadeConfig                           fadeConfig;                                               // 0x0008(0x000C) (Edit)
	struct FWidgetScaleConfig                          scaleConfig;                                              // 0x0014(0x001C) (Edit)
};

// ScriptStruct Robogore.ActorMortalityWidgetConfig
// 0x0050
struct FActorMortalityWidgetConfig
{
	struct FWidgetVisibilityConfig                     defaultVisibilityConfig;                                  // 0x0000(0x0004) (Edit)
	struct FWidgetVisibilityConfig                     onDamageVisibilityConfig;                                 // 0x0004(0x0004) (Edit)
	struct FWidgetVisibilityConfig                     lowHealthVisibilityConfig;                                // 0x0008(0x0004) (Edit)
	struct FWidgetVisibilityConfig                     healthPercentageVisibilityConfig;                         // 0x000C(0x0004) (Edit)
	struct FWidgetVisibilityConfig                     shieldRegenVisibilityConfig;                              // 0x0010(0x0004) (Edit)
	struct FWidgetVisibilityConfig                     healthRegenVisibilityConfig;                              // 0x0014(0x0004) (Edit)
	bool                                               visibilityInVisionModeRequiresCallout;                    // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	float                                              lowHealthRatio;                                           // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              timeBeforeFadeoutBegins;                                  // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              timeForFadeoutToComplete;                                 // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FWidgetFadeConfig                           fadeConfig;                                               // 0x0028(0x000C) (Edit)
	struct FWidgetScaleConfig                          scaleConfig;                                              // 0x0034(0x001C) (Edit)
};

// ScriptStruct Robogore.AdStringData
// 0x0030
struct FAdStringData
{
	struct FString                                     m_languageCode;                                           // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FString                                     m_titleString;                                            // 0x0010(0x0010) (Edit, ZeroConstructor)
	struct FString                                     m_descriptionString;                                      // 0x0020(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Robogore.AdData
// 0x0020
struct FAdData
{
	TArray<struct FAdStringData>                       m_adContent;                                              // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FString                                     m_imagePath;                                              // 0x0010(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Robogore.AdCollection
// 0x0020
struct FAdCollection
{
	TArray<struct FAdData>                             m_ads;                                                    // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FGuid                                       m_adGuid;                                                 // 0x0010(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Robogore.GameplayTagScore
// 0x000C
struct FGameplayTagScore
{
	struct FGameplayTag                                GameplayTag;                                              // 0x0000(0x0008) (Edit, DisableEditOnInstance)
	float                                              score;                                                    // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Robogore.CustomTagScore
// 0x000C
struct FCustomTagScore
{
	struct FName                                       customTag;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              score;                                                    // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Robogore.GameplayEffectGradeData
// 0x000C
struct FGameplayEffectGradeData
{
	struct FGameplayTag                                m_gameplayEffectTag;                                      // 0x0000(0x0008) (Edit, DisableEditOnInstance)
	float                                              m_scoreIffEffectIsFound;                                  // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Robogore.SkillsetConfig
// 0x0060
struct FSkillsetConfig
{
	class UClass*                                      m_defaultSkillsetAssetClass;                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0008(0x0028) UNKNOWN PROPERTY: SoftClassProperty Robogore.SkillsetConfig.m_defaultSkillsetAsset
	TArray<class UClass*>                              m_skills;                                                 // 0x0030(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0040(0x0010) UNKNOWN PROPERTY: ArrayProperty Robogore.SkillsetConfig.m_additionalSkills
	TArray<class UClass*>                              m_skillClasses;                                           // 0x0050(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct Robogore.ReservedActorCallbackInfo
// 0x0008
struct FReservedActorCallbackInfo
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Robogore.EngagementConfig
// 0x0014
struct FEngagementConfig
{
	float                                              maxEngagementDistance;                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxRangedAttackDistance;                                  // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PreferredRangedAttackDistance;                            // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               canMeleeAttack;                                           // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               canRangedAttack;                                          // 0x000D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000E(0x0002) MISSED OFFSET
	float                                              meleeEngagementDistance;                                  // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Robogore.AnimationAction
// 0x0018
struct FAnimationAction
{
	TArray<class UAnimMontage*>                        actionMontages;                                           // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	EAnimationActionTaskPriority                       m_actionPriority;                                         // 0x0010(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct Robogore.AnimPostureCollection
// 0x0010
struct FAnimPostureCollection
{
	TArray<class UAnimSetPosture*>                     m_possibleAnimSets;                                       // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Robogore.ProjectileBounceInfo
// 0x00B0
struct FProjectileBounceInfo
{
	int                                                maxBounces;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              maxBounceRange;                                           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bounceCanDamage;                                          // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              Bounciness;                                               // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Friction;                                                 // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bounceAngleAffectsFriction : 1;                           // 0x0014(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      destroyOnContactWithMortality : 1;                        // 0x0014(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      destroyOnContactWithDamageable : 1;                       // 0x0014(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      destroyOnStopSimulating : 1;                              // 0x0014(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      stickOnStopSimulating : 1;                                // 0x0014(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      stickOnLastBounce : 1;                                    // 0x0014(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	class UV1EffectTable*                              bounceEffectTable;                                        // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                currentBounceCount;                                       // 0x0020(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FHitResult                                  lastHit;                                                  // 0x0024(0x0088) (Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00AC(0x0004) MISSED OFFSET
};

// ScriptStruct Robogore.ProjectilePierceInfo
// 0x0020
struct FProjectilePierceInfo
{
	int                                                maxPierceThickness;                                       // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                maxPierces;                                               // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               pierceCanDamage;                                          // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               pierceNonDamageables;                                     // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000A(0x0002) MISSED OFFSET
	unsigned char                                      destroyOnContactWithMortality : 1;                        // 0x000C(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      destroyOnContactWithDamageable : 1;                       // 0x000C(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	class UV1EffectTable*                              pierceEffectTable;                                        // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                currentPierceCount;                                       // 0x0018(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct Robogore.ProjectileStickInfo
// 0x0010
struct FProjectileStickInfo
{
	unsigned char                                      destroyOnContactWithMortality : 1;                        // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      destroyOnContactWithDamageable : 1;                       // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	bool                                               dealDamageOnStick;                                        // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	class UV1EffectTable*                              stickEffectTable;                                         // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Robogore.ProjectileDudInfo
// 0x0010
struct FProjectileDudInfo
{
	class UV1EffectTable*                              dudEffectTable;                                           // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               dudCausesDetonation;                                      // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct Robogore.ProjectilePassThroughInfo
// 0x0010
struct FProjectilePassThroughInfo
{
	class UV1EffectTable*                              passThroughEffectTable;                                   // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               usePassThroughEffectTable;                                // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               sendDamageEventsOnPassThrough;                            // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x000A(0x0006) MISSED OFFSET
};

// ScriptStruct Robogore.ProjectileWaverInfo
// 0x0010
struct FProjectileWaverInfo
{
	bool                                               m_doWaver;                                                // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              m_waverAngle;                                             // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              m_waverRotationRate;                                      // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              m_changeAngleRate;                                        // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Robogore.ProjectileHomingInfo
// 0x0010
struct FProjectileHomingInfo
{
	EeHomingProjectileMethod                           m_homingProjectileMethod;                                 // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      m_homeOnlyWhileDescending : 1;                            // 0x0001(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              m_homingDelay;                                            // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              m_rotationSpeed;                                          // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              m_homingAcceleration;                                     // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Robogore.ProjectileAccelerationInfo
// 0x0018
struct FProjectileAccelerationInfo
{
	bool                                               m_overrideInitialSpeed;                                   // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              m_initialSpeed;                                           // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               m_overrideMaxSpeed;                                       // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              m_maxSpeed;                                               // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               m_accelerate;                                             // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              m_accelerationForce;                                      // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Robogore.MtxData
// 0x0048
struct FMtxData
{
	struct FText                                       m_name;                                                   // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       m_description;                                            // 0x0018(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	class UMtxAsset*                                   m_asset;                                                  // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      m_own : 1;                                                // 0x0038(0x0001) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      m_equiped : 1;                                            // 0x0038(0x0001) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      m_isEquiping : 1;                                         // 0x0038(0x0001) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      m_isUnlockedByChallenge : 1;                              // 0x0038(0x0001) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	int                                                m_price;                                                  // 0x003C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                m_sortOrder;                                              // 0x0040(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
};

// ScriptStruct Robogore.MissionAkAudioEventInfo
// 0x0008
struct FMissionAkAudioEventInfo
{
	class UAkAudioEvent*                               m_akEvent;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Robogore.TeamRelationshipMatrixRow
// 0x0008
struct FTeamRelationshipMatrixRow
{
	uint64_t                                           relationshipBitMask;                                      // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Robogore.TeamRelationshipMatrix
// 0x0010
struct FTeamRelationshipMatrix
{
	TArray<struct FTeamRelationshipMatrixRow>          matrixRows;                                               // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Robogore.TeamManager
// 0x00A0
struct FTeamManager
{
	unsigned char                                      UnknownData00[0x90];                                      // 0x0000(0x0090) MISSED OFFSET
	struct FTeamRelationshipMatrix                     m_teamRelationshipMatrix;                                 // 0x0090(0x0010) (Transient)
};

// ScriptStruct Robogore.ObjectiveInfo
// 0x0030
struct FObjectiveInfo
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct Robogore.CrewLoadout
// 0x0030
struct FCrewLoadout
{
	struct FGuid                                       emoteId;                                                  // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       shaderId;                                                 // 0x0010(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       skinId;                                                   // 0x0020(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Robogore.BreadCrumbItemRecord
// 0x0004
struct FBreadCrumbItemRecord
{
	float                                              m_version;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Robogore.BreadCrumbRecords
// 0x00A8
struct FBreadCrumbRecords
{
	float                                              m_version;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TMap<struct FGuid, struct FBreadCrumbItemRecord>   m_items;                                                  // 0x0008(0x0050) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0058(0x0050) MISSED OFFSET
};

// ScriptStruct Robogore.TookDamageInfo
// 0x00F0
struct FTookDamageInfo
{
	TWeakObjectPtr<class AActor>                       DamagedActor;                                             // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class APlayerState*                                damager_PlayerState;                                      // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class APawn*                                       damager_instigator;                                       // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class AActor*                                      damager_actor;                                            // 0x0018(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class APlayerController*                           damager_PlayerController;                                 // 0x0020(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              totalDamage;                                              // 0x0028(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              shieldDamage;                                             // 0x002C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              healthDamage;                                             // 0x0030(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ratioOfPossibleDamage;                                    // 0x0034(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                damageTypeTag;                                            // 0x0038(0x0008) (BlueprintVisible, BlueprintReadOnly)
	struct FHitResult                                  HitResult;                                                // 0x0040(0x0088) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     damageOrigin;                                             // 0x00C8(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              damageMaxRadius;                                          // 0x00D4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     impulseDirection;                                         // 0x00D8(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                damageSourceStatTag;                                      // 0x00E4(0x0008) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00EC(0x0004) MISSED OFFSET
};

// ScriptStruct Robogore.UnitShootAtTaskSettings
// 0x0030
struct FUnitShootAtTaskSettings
{
	unsigned char                                      m_lineOfSightRequired : 1;                                // 0x0000(0x0001) (Edit)
	unsigned char                                      m_inRangeRequired : 1;                                    // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FBlackboardKeySelector                      m_shootAtBlackboardKey;                                   // 0x0008(0x0028) (Edit)
};

// ScriptStruct Robogore.PawnAIWeaponFiringTaskSettings
// 0x0050
struct FPawnAIWeaponFiringTaskSettings
{
	unsigned char                                      m_lineOfSightRequired : 1;                                // 0x0000(0x0001) (Edit)
	unsigned char                                      m_inRangeRequired : 1;                                    // 0x0000(0x0001) (Edit)
	unsigned char                                      m_continueFiringOnceFiringStarts : 1;                     // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FGameplayAbilityTargetDataHandle            m_targetDataHandle;                                       // 0x0008(0x0020) (Transient)
	struct FBlackboardKeySelector                      m_shootAtBlackboardKey;                                   // 0x0028(0x0028) (Edit)
};

// ScriptStruct Robogore.UnitAimAtTaskSettings
// 0x0038
struct FUnitAimAtTaskSettings
{
	struct FBlackboardKeySelector                      m_aimAtBlackboardKey;                                     // 0x0000(0x0028) (Edit)
	bool                                               m_aimWithWeapon;                                          // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	float                                              m_pitchAdjustment;                                        // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      m_usePitchAdjustmentAsCompleteOverride : 1;               // 0x0030(0x0001) (Edit)
	unsigned char                                      m_treatAsDirection : 1;                                   // 0x0030(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};

// ScriptStruct Robogore.PawnWeaponAimTaskSettings
// 0x0050
struct FPawnWeaponAimTaskSettings
{
	struct FGameplayAbilityTargetDataHandle            m_aimAtTargetData;                                        // 0x0000(0x0020) (Transient)
	struct FBlackboardKeySelector                      m_aimAtBlackboardKey;                                     // 0x0020(0x0028) (Edit)
	unsigned char                                      m_treatAsDirection : 1;                                   // 0x0048(0x0001) (Edit)
	unsigned char                                      m_aimWithWeapon : 1;                                      // 0x0048(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
};

// ScriptStruct Robogore.UnitCameraData
// 0x0008
struct FUnitCameraData
{
	bool                                               overrideSpringArmLength;                                  // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              springArmLength;                                          // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Robogore.ChipTileData
// 0x0018
struct FChipTileData
{
	unsigned char                                      m_isApplied : 1;                                          // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	unsigned char                                      m_unlocked : 1;                                           // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                m_chipLevel;                                              // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UUpgradeChipDefinition*                      m_chipDefinition;                                         // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FGameplayTag                                m_unitTag;                                                // 0x0010(0x0008) (Transient)
};

// ScriptStruct Robogore.ChipTileDataArray
// 0x0010
struct FChipTileDataArray
{
	TArray<struct FChipTileData>                       m_dataForChipTiles;                                       // 0x0000(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct Robogore.UnitData
// 0x00B8
struct FUnitData
{
	struct FGameplayTag                                m_unitTag;                                                // 0x0000(0x0008) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Robogore.UnitData.m_previewTexture
	struct FText                                       m_unitName;                                               // 0x0030(0x0018) (Edit, BlueprintVisible)
	struct FText                                       m_unitType;                                               // 0x0048(0x0018) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0060(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Robogore.UnitData.m_abilityTexture
	unsigned char                                      UnknownData02[0x28];                                      // 0x0088(0x0028) UNKNOWN PROPERTY: SoftClassProperty Robogore.UnitData.m_previewActor
	int                                                m_location;                                               // 0x00B0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x00B4(0x0004) MISSED OFFSET
};

// ScriptStruct Robogore.ContestingTeams
// 0x0004
struct FContestingTeams
{
	EeTeamID                                           teamWithMostUnits;                                        // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	EeTeamID                                           teamWithSecondMostUnits;                                  // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      countOfMostUnits;                                         // 0x0002(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      countOfSecondMostUnits;                                   // 0x0003(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Robogore.CategoryListenerAttributeMod
// 0x0030
struct FCategoryListenerAttributeMod
{
	struct FGameplayTag                                Attribute;                                                // 0x0000(0x0008) (Edit)
	struct FV1AttributeModData                         modData;                                                  // 0x0008(0x0018) (Edit)
	class UV1AttributeModifier*                        parentModifier;                                           // 0x0020(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UV1AttributeMod*                             mod;                                                      // 0x0028(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
};

// ScriptStruct Robogore.PawnHandlingAIData
// 0x0098
struct FPawnHandlingAIData
{
	float                                              m_aimSpeedDegPerSec;                                      // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FRuntimeFloatCurve                          m_inaccuracyCurve;                                        // 0x0008(0x0088) (Edit, DisableEditOnInstance)
	float                                              m_firingDelayFromAimStart;                                // 0x0090(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              m_requiredAimSuccessTimeToFire;                           // 0x0094(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Robogore.TeamChatterPriority
// 0x0008
struct FTeamChatterPriority
{
	EeChatterLane                                      lane;                                                     // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EeChatterPriority                                  Priority;                                                 // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               overrideCooldown;                                         // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0003(0x0001) MISSED OFFSET
	float                                              cooldown;                                                 // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Robogore.ChatterPriorityConfig
// 0x002C
struct FChatterPriorityConfig
{
	struct FTeamChatterPriority                        friendlyPriority;                                         // 0x0000(0x0008) (Edit, BlueprintVisible)
	struct FTeamChatterPriority                        allyPriority;                                             // 0x0008(0x0008) (Edit, BlueprintVisible)
	struct FTeamChatterPriority                        enemyPriority;                                            // 0x0010(0x0008) (Edit, BlueprintVisible)
	float                                              chance;                                                   // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              cooldown;                                                 // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               usePreRadio;                                              // 0x0024(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               usePostRadio;                                             // 0x0025(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               triggerOutOfCombat;                                       // 0x0026(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               triggerInCombat;                                          // 0x0027(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               dropFromSquadChatterQueue;                                // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ignoreSquadChatterQueue;                                  // 0x0029(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x002A(0x0002) MISSED OFFSET
};

// ScriptStruct Robogore.ChatterInfo
// 0x0018
struct FChatterInfo
{
	class UAkAudioEvent*                               audioEvent;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               overridePlayChance;                                       // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              chance;                                                   // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               overrideDelay;                                            // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              Delay;                                                    // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Robogore.ChipSectionInfo
// 0x0030
struct FChipSectionInfo
{
	struct FText                                       m_chipSectionDisplayName;                                 // 0x0000(0x0018) (Edit)
	struct FText                                       m_chipSectionDescription;                                 // 0x0018(0x0018) (Edit)
};

// ScriptStruct Robogore.AudioEventsContainer
// 0x0010
struct FAudioEventsContainer
{
	TArray<class UAkAudioEvent*>                       audioEvents;                                              // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Robogore.CloakSavedMaterialInfo
// 0x0018
struct FCloakSavedMaterialInfo
{
	class UMeshComponent*                              sourceMesh;                                               // 0x0000(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	TArray<class UMaterialInterface*>                  replacedMaterials;                                        // 0x0008(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct Robogore.CommandPulseRequirements
// 0x0038
struct FCommandPulseRequirements
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct Robogore.SnappingReticleRules
// 0x0003
struct FSnappingReticleRules
{
	bool                                               snapOnlyInVisionMode;                                     // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               snapOnlyIfScanned;                                        // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               snapOnlyWhenVisible;                                      // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Robogore.SnappingReticleSettings
// 0x0060
struct FSnappingReticleSettings
{
	TMap<EeInteractableType, struct FSnappingReticleRules> m_snapRulesPerInteractableType;                           // 0x0000(0x0050) (Edit, ZeroConstructor)
	float                                              m_snapRadiusInScreenPercentage;                           // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              m_maxSnapWorldDistance;                                   // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0058(0x0008) MISSED OFFSET
};

// ScriptStruct Robogore.ComplexDestructibleConstraint
// 0x00A0
struct FComplexDestructibleConstraint
{
	struct FName                                       constraintName;                                           // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       targetComponentName;                                      // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              constraintHealth;                                         // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              constraintMinBreakDamage;                                 // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               constraintBreakAudio;                                     // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UDamageStateFXCollectionDataAsset*           DamageStateFX;                                            // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               applyBreakImpulse;                                        // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	struct FVector                                     breakImpulse;                                             // 0x002C(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               breakOnActorDeath;                                        // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	float                                              remainingConstraintHealth;                                // 0x003C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	class UPrimitiveComponent*                         targetComponentInstance;                                  // 0x0040(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
	struct FTransform                                  targetComponentOriginalTransform;                         // 0x0050(0x0030) (Transient, IsPlainOldData)
	class UPhysicsConstraintComponent*                 constraintComponentInstance;                              // 0x0080(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	bool                                               IsBroken;                                                 // 0x0088(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0089(0x0007) MISSED OFFSET
	struct FDateTime                                   breakTime;                                                // 0x0090(0x0008) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData04[0x8];                                       // 0x0098(0x0008) MISSED OFFSET
};

// ScriptStruct Robogore.OperatorSet
// 0x0028
struct FOperatorSet
{
	EeOperatorSetType                                  m_type;                                                   // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<class UOperator_User*>                      m_operators;                                              // 0x0008(0x0010) (Edit, ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
	TWeakObjectPtr<class UOperator>                    m_owningOperator;                                         // 0x0020(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Robogore.ConfinementAreaData
// 0x000C
struct FConfinementAreaData
{
	float                                              mainRadius;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              outerRadius;                                              // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               hasDirection;                                             // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

// ScriptStruct Robogore.CrewGravcycleConfiguration
// 0x00C0
struct FCrewGravcycleConfiguration
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: SoftClassProperty Robogore.CrewGravcycleConfiguration.gravcycleClassType
	unsigned char                                      UnknownData01[0x28];                                      // 0x0028(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Robogore.CrewGravcycleConfiguration.gcMeshReplacement
	unsigned char                                      UnknownData02[0x28];                                      // 0x0050(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Robogore.CrewGravcycleConfiguration.gcPilotMeshReplacement
	unsigned char                                      UnknownData03[0x28];                                      // 0x0078(0x0028) UNKNOWN PROPERTY: SoftClassProperty Robogore.CrewGravcycleConfiguration.m_previewActor
	class UObject*                                     gravcycleIconImage;                                       // 0x00A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FText                                       m_nameOfGravcycle;                                        // 0x00A8(0x0018) (Edit)
};

// ScriptStruct Robogore.CrewWeaponConfiguration
// 0x0050
struct FCrewWeaponConfiguration
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Robogore.CrewWeaponConfiguration.sourceMesh
	unsigned char                                      UnknownData01[0x28];                                      // 0x0028(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Robogore.CrewWeaponConfiguration.replacementMesh
};

// ScriptStruct Robogore.UnitRespawnInfo
// 0x0028
struct FUnitRespawnInfo
{
	float                                              m_ejectBrainDelay;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              m_brainTimer;                                             // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              m_playerRespawnDelay;                                     // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              m_respawningDelay;                                        // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               m_canBrainCanExpire;                                      // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData01[0x10];                                      // 0x0011(0x0010) UNKNOWN PROPERTY: ArrayProperty Robogore.UnitRespawnInfo.m_respawnWithGameplayEffects
};

// ScriptStruct Robogore.CrewUnitConfiguration
// 0x00F0
struct FCrewUnitConfiguration
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: SoftClassProperty Robogore.CrewUnitConfiguration.unitClassType
	unsigned char                                      UnknownData01[0x28];                                      // 0x0028(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Robogore.CrewUnitConfiguration.UnitMesh
	unsigned char                                      UnknownData02[0x28];                                      // 0x0050(0x0028) UNKNOWN PROPERTY: SoftClassProperty Robogore.CrewUnitConfiguration.m_previewActor
	class UObject*                                     unitIconImage;                                            // 0x0078(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FText                                       unitName;                                                 // 0x0080(0x0018) (Edit)
	struct FText                                       unitType;                                                 // 0x0098(0x0018) (Edit)
	TArray<struct FCrewWeaponConfiguration>            unitWeaponReplacements;                                   // 0x00B0(0x0010) (Edit, ZeroConstructor)
	bool                                               m_overrideUnitRespawnInfo;                                // 0x00C0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x00C1(0x0007) MISSED OFFSET
	struct FUnitRespawnInfo                            m_unitRespawnInfo;                                        // 0x00C8(0x0028) (Edit)
};

// ScriptStruct Robogore.CameraPreviewData
// 0x0038
struct FCameraPreviewData
{
	struct FVector                                     m_startingAngles;                                         // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     m_pointOffset;                                            // 0x000C(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     m_maxAngles;                                              // 0x0018(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     m_minAngles;                                              // 0x0024(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              m_cameraOrbitRadius;                                      // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      m_unlockedPitch : 1;                                      // 0x0034(0x0001) (Edit)
	unsigned char                                      m_unlockedYaw : 1;                                        // 0x0034(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
};

// ScriptStruct Robogore.CrewGravcycleInfo
// 0x0038
struct FCrewGravcycleInfo
{
	class UTexture*                                    m_abilityImage;                                           // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FText                                       m_abilityName;                                            // 0x0008(0x0018) (Transient)
	struct FText                                       m_abilityDescription;                                     // 0x0020(0x0018) (Transient)
};

// ScriptStruct Robogore.CrewStatsUnitInfo
// 0x0058
struct FCrewStatsUnitInfo
{
	class UObject*                                     m_unitImage;                                              // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTexture*                                    m_abilityImage;                                           // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FText                                       m_abilityName;                                            // 0x0010(0x0018) (Transient)
	uint32_t                                           m_numberOfUnits;                                          // 0x0028(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FText                                       m_unitAbilityDescription;                                 // 0x0030(0x0018) (Transient)
	TArray<int>                                        m_unitAbilityPositions;                                   // 0x0048(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct Robogore.SkinMaterialData
// 0x0038
struct FSkinMaterialData
{
	int                                                m_materialId;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       m_materialSlotName;                                       // 0x0004(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData01[0x28];                                      // 0x000C(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Robogore.SkinMaterialData.m_material
};

// ScriptStruct Robogore.MeshesAndMaterials
// 0x0060
struct FMeshesAndMaterials
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Robogore.MeshesAndMaterials.m_skeletalMesh
	TArray<struct FSkinMaterialData>                   m_materialData;                                           // 0x0028(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0038(0x0028) UNKNOWN PROPERTY: SoftClassProperty Robogore.MeshesAndMaterials.m_animClass
};

// ScriptStruct Robogore.SkinData
// 0x0010
struct FSkinData
{
	TArray<struct FMeshesAndMaterials>                 m_meshesAndMaterialsArray;                                // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Robogore.StatPair
// 0x0020
struct FStatPair
{
	struct FText                                       m_statName;                                               // 0x0000(0x0018) (Edit, BlueprintVisible)
	float                                              m_statValue;                                              // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct Robogore.StatRow
// 0x0060
struct FStatRow
{
	struct FStatPair                                   m_currentSeasonStat;                                      // 0x0000(0x0020) (Edit, BlueprintVisible)
	struct FStatPair                                   m_rankedStat;                                             // 0x0020(0x0020) (Edit, BlueprintVisible)
	struct FStatPair                                   m_unrankedStat;                                           // 0x0040(0x0020) (Edit, BlueprintVisible)
};

// ScriptStruct Robogore.CrewTileData
// 0x0078
struct FCrewTileData
{
	struct FText                                       m_name;                                                   // 0x0000(0x0018) (Edit, BlueprintVisible)
	struct FText                                       m_description;                                            // 0x0018(0x0018) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0030(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Robogore.CrewTileData.m_previewTexture
	struct FGameplayTag                                m_associationTag;                                         // 0x0058(0x0008) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0060(0x0018) MISSED OFFSET
};

// ScriptStruct Robogore.DamageFalloff
// 0x0090
struct FDamageFalloff
{
	bool                                               m_useDamageFalloff;                                       // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              m_maxFalloffRange;                                        // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FRuntimeFloatCurve                          m_falloffCurve;                                           // 0x0008(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct Robogore.SimpleGameplayEffectParticleSystemData
// 0x0010
struct FSimpleGameplayEffectParticleSystemData
{
	class UParticleSystem*                             particleSystemClass;                                      // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       particleSystemAttachmentSocket;                           // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Robogore.SimpleGameplayEffectTagSpecificAudioData
// 0x0010
struct FSimpleGameplayEffectTagSpecificAudioData
{
	class UAkAudioEvent*                               startSound;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               endSound;                                                 // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Robogore.SimpleEffectStatusAttributes
// 0x0040
struct FSimpleEffectStatusAttributes
{
	TArray<struct FGameplayTag>                        statusAttributesThatBlock;                                // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<struct FGameplayTag>                        statusAttributesToAdd;                                    // 0x0010(0x0010) (Edit, ZeroConstructor)
	TArray<struct FGameplayTag>                        statusAttributesToDisable;                                // 0x0020(0x0010) (Edit, ZeroConstructor)
	TArray<struct FGameplayTag>                        statusAttributesToClear;                                  // 0x0030(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Robogore.SimpleEffectBlockAndRemoveEffects
// 0x0040
struct FSimpleEffectBlockAndRemoveEffects
{
	TArray<struct FGameplayTag>                        gameplayEffectTypesThatBlock;                             // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<struct FGameplayTag>                        gameplayEffectCategoriesThatBlock;                        // 0x0010(0x0010) (Edit, ZeroConstructor)
	TArray<struct FGameplayTag>                        gameplayEffectTypesToRemove;                              // 0x0020(0x0010) (Edit, ZeroConstructor)
	TArray<struct FGameplayTag>                        gameplayEffectCategoriesToRemove;                         // 0x0030(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Robogore.SimpleEffectSpec
// 0x0010
struct FSimpleEffectSpec
{
	bool                                               isInstant;                                                // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Duration;                                                 // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              minTimeBetweenTicksInSeconds;                             // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               alwaysTickOnComplete;                                     // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               firstTickIsMinDuration;                                   // 0x000D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x000E(0x0002) MISSED OFFSET
};

// ScriptStruct Robogore.DamageEffectSpec
// 0x001C
struct FDamageEffectSpec
{
	float                                              damagePerSecond;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                damageSourceTypeTag;                                      // 0x0004(0x0008) (Edit)
	struct FSimpleEffectSpec                           SimpleEffectSpec;                                         // 0x000C(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Robogore.DamageMatrix
// 0x0058
struct FDamageMatrix
{
	int                                                m_defaultDamageAmount;                                    // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TMap<struct FGameplayTag, int>                     m_damageSpecializations;                                  // 0x0008(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Robogore.DamageFXInfo
// 0x0038
struct FDamageFXInfo
{
	float                                              chanceToSpawn;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData01[0x10];                                      // 0x0004(0x0010) UNKNOWN PROPERTY: ArrayProperty Robogore.DamageFXInfo.fxActorClasses
	TArray<struct FName>                               componentNames;                                           // 0x0018(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FName>                               socketNames;                                              // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct Robogore.DamageState
// 0x0060
struct FDamageState
{
	struct FName                                       stateName;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              healthPercentage;                                         // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x000C(0x000C) MISSED OFFSET
	unsigned char                                      UnknownData01[0x28];                                      // 0x000C(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Robogore.DamageState.damageStateFXDataAsset
	unsigned char                                      UnknownData02[0x8];                                       // 0x0040(0x0008) MISSED OFFSET
	TArray<class AFXActor*>                            activeDamageFXs;                                          // 0x0048(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0058(0x0008) MISSED OFFSET
};

// ScriptStruct Robogore.TrackedDamage
// 0x0020
struct FTrackedDamage
{
	TWeakObjectPtr<class AActor>                       damager;                                                  // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     lastKnownLocation;                                        // 0x0008(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              normalizedThreatLevel;                                    // 0x0014(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              totalDamage;                                              // 0x0018(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              lastDamageTimeStamp;                                      // 0x001C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Robogore.DeathEffectsActorEntry
// 0x0040
struct FDeathEffectsActorEntry
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: SoftClassProperty Robogore.DeathEffectsActorEntry.Actor
	struct FName                                       Component;                                                // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       Bone;                                                     // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               orient;                                                   // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               attach;                                                   // 0x0039(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               dedicatedServer;                                          // 0x003A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x003B(0x0001) MISSED OFFSET
	float                                              chance;                                                   // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Robogore.ActorLifeCycleStateFX
// 0x0018
struct FActorLifeCycleStateFX
{
	EeDeathEffectActorListSpawnType                    spawnType;                                                // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0000(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData01[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FDeathEffectsActorEntry>             fxActorsToSpawn;                                          // 0x0008(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Robogore.MatchStateRules
// 0x000B
struct FMatchStateRules
{
	bool                                               waitForMinimumNumberOfPlayersToStartMatch;                // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      numberOfPlayersRequiredToStartMatch;                      // 0x0001(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               useStartingGameState;                                     // 0x0002(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               preGameStateEnabled;                                      // 0x0003(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               crewSelectStateEnabled;                                   // 0x0004(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               warmupStateEnabled;                                       // 0x0005(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               playStateEnabled;                                         // 0x0006(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               overtimeStateEnabled;                                     // 0x0007(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               postGameStateEnabled;                                     // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               skipFirstRoundPreRound;                                   // 0x0009(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               skipLastRoundPostRound;                                   // 0x000A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Robogore.MatchTimingRules
// 0x0160
struct FMatchTimingRules
{
	float                                              defaultMaximumWaitingForPlayersLength;                    // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              defaultMatchStartingLength;                               // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              defaultPregameLength;                                     // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              defaultPreRoundLength;                                    // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              defaultCrewSelectLength;                                  // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              defaultWarmupLength;                                      // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               limitPlayTime;                                            // 0x0018(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	float                                              defaultPlaytimeLength;                                    // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              defaultOvertimeTimeoutLength;                             // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              defaultRoundEndingLength;                                 // 0x0024(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              defaultPostRoundLength;                                   // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              defaultPostgameConditionLength;                           // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              defaultPostgameStatLength;                                // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              defaultKickPlayersStateLength;                            // 0x0034(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              defaultPlayerDeadLength;                                  // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              defaultPlayerDeathCamLength;                              // 0x003C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              defaultPlayerRespawnDelay_PreMatch;                       // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              playerForceSpawnDelay;                                    // 0x0044(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              defaultPlayerRespawnDelay;                                // 0x0048(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	TMap<EeTeamID, float>                              defaultTeamBasedRespawnDelays;                            // 0x0050(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               usePlayerRespawnWaves;                                    // 0x00A0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00A1(0x0003) MISSED OFFSET
	float                                              defaultPlayerWaveRespawnDelay;                            // 0x00A4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              minimumWaveSpawnDelay;                                    // 0x00A8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x00AC(0x0004) MISSED OFFSET
	TMap<EeTeamID, float>                              minimumTeamBasedWaveSpawnDelay;                           // 0x00B0(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               forceNextWave;                                            // 0x0100(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0101(0x0007) MISSED OFFSET
	TMap<EeTeamID, float>                              defaultTeamBasedWaveRespawnDelays;                        // 0x0108(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	float                                              onGameCanceledTimeUntilPlayersKicked;                     // 0x0158(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              onGameCanceledTimeAfterKickUntilServerShutsDown;          // 0x015C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Robogore.MatchCrewRules
// 0x0020
struct FMatchCrewRules
{
	bool                                               overrideAvailableCrews;                                   // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<class UClass*>                              overwrittenAvailableCrews;                                // 0x0008(0x0010) (Edit, ZeroConstructor)
	bool                                               overrideMaxDuplicateCrews;                                // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	uint32_t                                           overwrittenMaxDuplicateCrews;                             // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Robogore.MatchTeamRules
// 0x0008
struct FMatchTeamRules
{
	int                                                numberOfTeams;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                playersPerTeam;                                           // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Robogore.MatchTeamSpawnStateRules
// 0x0004
struct FMatchTeamSpawnStateRules
{
	bool                                               canSpawnInCrewSelect;                                     // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               canSpawnInWarmup;                                         // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               canSpawnInPlaying;                                        // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               canRespawn;                                               // 0x0003(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Robogore.MatchSpawnRules
// 0x0058
struct FMatchSpawnRules
{
	bool                                               canSpawnInWaitingForPlayers;                              // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               canSpawnInStartingMatch;                                  // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FMatchTeamSpawnStateRules                   defaultSpawnStateRules;                                   // 0x0002(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
	TMap<EeTeamID, struct FMatchTeamSpawnStateRules>   teamSpecificSpawnStateRules;                              // 0x0008(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Robogore.MatchRoundRules
// 0x0060
struct FMatchRoundRules
{
	int                                                numberOfRounds;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                numberOfRoundsBeforeTeamSwap;                             // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                numberOfRoundsToWin;                                      // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TMap<EeTeamID, EeTeamID>                           teamSwapTargets;                                          // 0x0010(0x0050) (Edit, ZeroConstructor)
};

// ScriptStruct Robogore.MatchPlayerWidgetOverrides
// 0x0050
struct FMatchPlayerWidgetOverrides
{
	class UClass*                                      waitingForPlayersWidgetClass;                             // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      startingMatchWidgetClass;                                 // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      matchShuttingDownWidgetClass;                             // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      crewSelectionWidgetClass;                                 // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      postRoundConditionWidgetClass;                            // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      postGameWidgetClass;                                      // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      postGameMenuClass;                                        // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      deathCamWidgetClass;                                      // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      communicationWheelWidgetClass;                            // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      scoreboardOverlayWidgetClass;                             // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Robogore.MatchTimingGameState
// 0x0240
struct FMatchTimingGameState
{
	unsigned char                                      UnknownData00[0x240];                                     // 0x0000(0x0240) MISSED OFFSET
};

// ScriptStruct Robogore.DeathmatchGameTypeItemsConfig
// 0x00C0
struct FDeathmatchGameTypeItemsConfig
{
	TArray<class URuntimeInventoryItemDefinition*>     implicitGravcycleInventoryItems;                          // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<class URuntimeInventoryItemDefinition*>     implicitUnitInventoryItems;                               // 0x0010(0x0010) (Edit, ZeroConstructor)
	TMap<EeTeamRelationship, struct FGameplayTag>      statForGCPickups;                                         // 0x0020(0x0050) (Edit, ZeroConstructor)
	TMap<EeTeamRelationship, struct FGameplayTag>      statForUnitPickups;                                       // 0x0070(0x0050) (Edit, ZeroConstructor)
};

// ScriptStruct Robogore.DeathmatchScoreConfig
// 0x0060
struct FDeathmatchScoreConfig
{
	EeDeathmatchRoundVictoryCondition                  roundVictoryCondition;                                    // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0000(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData01[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TMap<struct FGameplayTag, float>                   statTagsThatCountTowardsScore;                            // 0x0008(0x0050) (Edit, ZeroConstructor)
	uint32_t                                           perRoundScoreLimit;                                       // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
};

// ScriptStruct Robogore.MatchCrewCountArray
// 0x0010
struct FMatchCrewCountArray
{
	TArray<unsigned char>                              crewCounts;                                               // 0x0000(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct Robogore.MatchRoundDuration
// 0x0010
struct FMatchRoundDuration
{
	unsigned char                                      roundIndex;                                               // 0x0000(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FTimespan                                   roundDuration;                                            // 0x0008(0x0008) (ZeroConstructor, Transient)
};

// ScriptStruct Robogore.MatchRoundTeamAssignment
// 0x0002
struct FMatchRoundTeamAssignment
{
	EeTeamID                                           originalTeamAssignment;                                   // 0x0000(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	EeTeamID                                           currentTeamAssignment;                                    // 0x0001(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Robogore.MatchPerRoundTeamAssignments
// 0x0018
struct FMatchPerRoundTeamAssignments
{
	unsigned char                                      roundIndex;                                               // 0x0000(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FMatchRoundTeamAssignment>           teamAssignments;                                          // 0x0008(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct Robogore.MatchRoundTeamRoundsWon
// 0x0002
struct FMatchRoundTeamRoundsWon
{
	EeTeamID                                           Team;                                                     // 0x0000(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      roundsWon;                                                // 0x0001(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Robogore.MatchRoundGameState
// 0x00B0
struct FMatchRoundGameState
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0000(0x0060) MISSED OFFSET
	uint16_t                                           m_currentRound;                                           // 0x0060(0x0002) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0062(0x0006) MISSED OFFSET
	TArray<struct FMatchRoundDuration>                 m_roundDurations;                                         // 0x0068(0x0010) (ZeroConstructor, Transient)
	TArray<struct FMatchPerRoundTeamAssignments>       m_roundTeamAssignments;                                   // 0x0078(0x0010) (ZeroConstructor, Transient)
	TArray<struct FMatchRoundTeamRoundsWon>            m_teamRoundsWon;                                          // 0x0088(0x0010) (ZeroConstructor, Transient)
	TArray<struct FMatchRoundTeamAssignment>           m_teamAssignments;                                        // 0x0098(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData02[0x8];                                       // 0x00A8(0x0008) MISSED OFFSET
};

// ScriptStruct Robogore.MatchTeamData
// 0x0018
struct FMatchTeamData
{
	EeTeamID                                           Team;                                                     // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      totalPlayerCount;                                         // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      livingPlayerCount;                                        // 0x0002(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0003(0x0005) MISSED OFFSET
	TArray<class AMatchPlayerState*>                   Players;                                                  // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct Robogore.DeathmatchRoundTeamScores
// 0x0008
struct FDeathmatchRoundTeamScores
{
	EeTeamID                                           Team;                                                     // 0x0000(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	uint32_t                                           score;                                                    // 0x0004(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Robogore.DeathmatchRoundScores
// 0x0018
struct FDeathmatchRoundScores
{
	int                                                Round;                                                    // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FDeathmatchRoundTeamScores>          teamScores;                                               // 0x0008(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct Robogore.VisionModeObjectOutlineFillConfig
// 0x0004
struct FVisionModeObjectOutlineFillConfig
{
	bool                                               drawFillVisible;                                          // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               drawOutlineVisible;                                       // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               drawFillOccluded;                                         // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               drawOutlineOccluded;                                      // 0x0003(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Robogore.VisionModeObjectDrawConfig
// 0x001C
struct FVisionModeObjectDrawConfig
{
	struct FVisionModeObjectOutlineFillConfig          defaultOutlineFill;                                       // 0x0000(0x0004) (Edit)
	struct FVisionModeObjectOutlineFillConfig          VMOutlineFill;                                            // 0x0004(0x0004) (Edit)
	struct FVisionModeObjectOutlineFillConfig          calloutOutlineFill;                                       // 0x0008(0x0004) (Edit)
	struct FVisionModeObjectOutlineFillConfig          hoverOutlineFill;                                         // 0x000C(0x0004) (Edit)
	struct FVisionModeObjectOutlineFillConfig          scannedInVMOutlineFill;                                   // 0x0010(0x0004) (Edit)
	struct FVisionModeObjectOutlineFillConfig          scannedOutVMOutlineFill;                                  // 0x0014(0x0004) (Edit)
	struct FVisionModeObjectOutlineFillConfig          commandPulseContextualOutlineFill;                        // 0x0018(0x0004) (Edit)
};

// ScriptStruct Robogore.ReplicatedGameplayEliminationData
// 0x0020
struct FReplicatedGameplayEliminationData
{
	class APlayerState*                                killedPlayerState;                                        // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      damagePercentage;                                         // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	class AActor*                                      victimActor;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      killerActor;                                              // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Robogore.GameplayEffectDecorator
// 0x0050
struct FGameplayEffectDecorator
{
	class UClass*                                      m_decoratorActorClass;                                    // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       m_decoratorAttachmentSocket;                              // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  m_decoratorAttachmentOffset;                              // 0x0010(0x0030) (Edit, IsPlainOldData)
	class AActor*                                      m_decoratorActorInstance;                                 // 0x0040(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
};

// ScriptStruct Robogore.RepairNanoSwarmInfo
// 0x001C
struct FRepairNanoSwarmInfo
{
	bool                                               overrideNanoSwarmInfo;                                    // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0001(0x0001) MISSED OFFSET
	uint16_t                                           repairAmountPerSecond;                                    // 0x0002(0x0002) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              lifetime;                                                 // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class AActor>                       priorityTarget;                                           // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              retargetingRange;                                         // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               retargetRangeFromSpawn;                                   // 0x0014(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	float                                              repairUntilHealthPercentage;                              // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Robogore.DebrisCollection
// 0x0018
struct FDebrisCollection
{
	TArray<class UDestructibleDebris*>                 debris;                                                   // 0x0000(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct Robogore.DestructibleVehicleConstraintSetup
// 0x00A0
struct FDestructibleVehicleConstraintSetup
{
	struct FName                                       constraintName;                                           // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       targetComponentName;                                      // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               allowSimulationBeforeBreak;                               // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               startSimulating;                                          // 0x0011(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0012(0x0002) MISSED OFFSET
	float                                              damageBeforeSimulation;                                   // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              minDamageBeforeSimulating;                                // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              damageBeforeConstraintBreaks;                             // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              minDamageBeforeBreakingConstraint;                        // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0024(0x000C) MISSED OFFSET
	struct FTransform                                  contraintBreakTransformDelta;                             // 0x0030(0x0030) (Edit, IsPlainOldData)
	class UAkAudioEvent*                               constraintBreakAudio;                                     // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UDamageStateFXCollectionDataAsset*           DamageStateFX;                                            // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               applyBreakImpulse;                                        // 0x0070(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               impulseInLocalSpace;                                      // 0x0071(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0072(0x0002) MISSED OFFSET
	struct FVector                                     breakImpulseMin;                                          // 0x0074(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     breakImpulseMax;                                          // 0x0080(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              impulseDelayAfterBreak;                                   // 0x008C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               breakOnActorDeath;                                        // 0x0090(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0xF];                                       // 0x0091(0x000F) MISSED OFFSET
};

// ScriptStruct Robogore.DestructibleVehicleConstraintInstance
// 0x0030
struct FDestructibleVehicleConstraintInstance
{
	int                                                sourceSetupIndex;                                         // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              remainingSimulationHealth;                                // 0x0004(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              remainingConstraintHealth;                                // 0x0008(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UPrimitiveComponent*                         targetComponentInstance;                                  // 0x0010(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UPhysicsConstraintComponent*                 constraintComponentInstance;                              // 0x0018(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	bool                                               isSimulating;                                             // 0x0020(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               IsBroken;                                                 // 0x0021(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0022(0x0006) MISSED OFFSET
	struct FDateTime                                   breakTime;                                                // 0x0028(0x0008) (ZeroConstructor, Transient)
};

// ScriptStruct Robogore.MeshReplacement
// 0x0030
struct FMeshReplacement
{
	class UStaticMesh*                                 StaticMesh;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UDestructibleMesh*                           DestructibleMesh;                                         // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UMaterialInterface*>                  staticMeshMaterials;                                      // 0x0010(0x0010) (Edit, ZeroConstructor)
	TArray<class UMaterialInterface*>                  destructibleMeshMaterials;                                // 0x0020(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Robogore.DamageFX
// 0x0018
struct FDamageFX
{
	class UClass*                                      destructionFX;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     fxOffset;                                                 // 0x0008(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Robogore.DestructionPartitionCollisionSettings
// 0x0150
struct FDestructionPartitionCollisionSettings
{
	struct FBodyInstance                               collisionSettings;                                        // 0x0000(0x0148) (Edit)
	TEnumAsByte<ECanBeCharacterBase>                   CanCharacterStepUpOn;                                     // 0x0148(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               canEverAffectNavigation;                                  // 0x0149(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x014A(0x0006) MISSED OFFSET
};

// ScriptStruct Robogore.MeshDamageLevel
// 0x0200
struct FMeshDamageLevel
{
	float                                              damageRatio;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FMeshReplacement>                    replacementGeometry;                                      // 0x0008(0x0010) (Edit, ZeroConstructor)
	struct FMeshReplacement                            m_choosenMeshReplacement;                                 // 0x0018(0x0030) (Transient)
	TArray<struct FDamageFX>                           replacementFX;                                            // 0x0048(0x0010) (Edit, ZeroConstructor)
	class UAkAudioEvent*                               breakSound;                                               // 0x0058(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               fractureSound;                                            // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               impactSound;                                              // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               enablePhysics;                                            // 0x0070(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               copyActorCollisionMatrix;                                 // 0x0071(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               destructionAffectsNavMesh;                                // 0x0072(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0073(0x0001) MISSED OFFSET
	float                                              destructibleLifetime;                                     // 0x0074(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               lifetimeAppliesToStaticMesh;                              // 0x0078(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0079(0x0003) MISSED OFFSET
	uint32_t                                           debrisPriority;                                           // 0x007C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               applyParentDamage;                                        // 0x0080(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0081(0x0003) MISSED OFFSET
	float                                              parentDamage;                                             // 0x0084(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              parentImpulse;                                            // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               applyForceOnBreak;                                        // 0x008C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x008D(0x0003) MISSED OFFSET
	float                                              breakImpulse;                                             // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               hasCustomStaticMeshCollisionSettings;                     // 0x0094(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0095(0x0003) MISSED OFFSET
	struct FDestructionPartitionCollisionSettings      customStaticMeshCollisionSettings;                        // 0x0098(0x0150) (Edit)
	bool                                               activated;                                                // 0x01E8(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x01E9(0x0007) MISSED OFFSET
	class AV1DestructibleActor*                        spawnedDestructible;                                      // 0x01F0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UStaticMesh*                                 selectedMeshToSpawn;                                      // 0x01F8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Robogore.DestructionPartitionInitialSettings
// 0x0158
struct FDestructionPartitionInitialSettings
{
	struct FDestructionPartitionCollisionSettings      initialCollisionSettings;                                 // 0x0000(0x0150) (Transient)
	class UStaticMesh*                                 staticMeshAsset;                                          // 0x0150(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Robogore.PawnDifficultySettings
// 0x0050
struct FPawnDifficultySettings
{
	TMap<struct FGameplayTag, struct FV1AttributeModData> m_pawnDifficultyAttributeModifiers;                       // 0x0000(0x0050) (Edit, ZeroConstructor)
};

// ScriptStruct Robogore.SensorConfig
// 0x0020
struct FSensorConfig
{
	class UClass*                                      m_sensorCollectionClass;                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              m_sensors;                                                // 0x0008(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
};

// ScriptStruct Robogore.VisionConfig
// 0x0014
struct FVisionConfig
{
	float                                              m_mainFieldOfView;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              m_peripheralFieldOfView;                                  // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              m_closeProximityDistance;                                 // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              m_closeProximityFOV;                                      // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              m_maxVisionDistance;                                      // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Robogore.AwarenessDecayConfig
// 0x0008
struct FAwarenessDecayConfig
{
	bool                                               m_canDecay;                                               // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              m_decayTime;                                              // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Robogore.AxisInputAudioEvent
// 0x0080
struct FAxisInputAudioEvent
{
	class UAkAudioEvent*                               m_startEvent;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               m_stopEvent;                                              // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FString                                     m_RTPCName;                                               // 0x0010(0x0010) (Edit, ZeroConstructor)
	bool                                               m_updateRTPC;                                             // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	struct FVector                                     m_inputAxisMask;                                          // 0x0024(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               m_inputRightStick;                                        // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               m_matchDirection;                                         // 0x0031(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               m_forRemotePlayer;                                        // 0x0032(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xD];                                       // 0x0033(0x000D) MISSED OFFSET
	struct FVector4                                    m_inputActivationCurve;                                   // 0x0040(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              m_activeTimeIncrement;                                    // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              m_activeTimeMax;                                          // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               m_triggerState;                                           // 0x0058(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               m_isInputActive;                                          // 0x0059(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x005A(0x0002) MISSED OFFSET
	struct FVector                                     m_lastInput;                                              // 0x005C(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              m_activeTime;                                             // 0x0068(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              m_magnitude;                                              // 0x006C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               m_isRemotePlayer;                                         // 0x0070(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0071(0x0007) MISSED OFFSET
	class UV1AudioComponent*                           m_owningAudioComp;                                        // 0x0078(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
};

// ScriptStruct Robogore.DamageablePhysicsBone
// 0x0070
struct FDamageablePhysicsBone
{
	struct FName                                       m_bone;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               m_isDisconnected;                                         // 0x0008(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               m_isDestroyed;                                            // 0x0009(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               m_canTearOnRagdoll;                                       // 0x000A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x000B(0x0001) MISSED OFFSET
	float                                              m_ragdollTearChance;                                      // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               m_breakConstraint;                                        // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              m_disconnectedBlendWeight;                                // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   m_boneLifetimeRange;                                      // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              m_calculatedBoneLifetime;                                 // 0x0020(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              m_currentBoneLifetime;                                    // 0x0024(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	class UStaticMesh*                                 m_jointReplaceMesh;                                       // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0030(0x0010) UNKNOWN PROPERTY: ArrayProperty Robogore.DamageablePhysicsBone.m_boneTearFXActorClasses
	unsigned char                                      UnknownData03[0x10];                                      // 0x0040(0x0010) UNKNOWN PROPERTY: ArrayProperty Robogore.DamageablePhysicsBone.m_boneTrailFXActorClasses
	struct FName                                       m_boneTrailFXSocket;                                      // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x10];                                      // 0x0058(0x0010) UNKNOWN PROPERTY: ArrayProperty Robogore.DamageablePhysicsBone.m_boneDestroyFXActorClasses
	struct FName                                       m_boneDestroyFXSocket;                                    // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Robogore.SavedWeaponMeshInfo
// 0x0028
struct FSavedWeaponMeshInfo
{
	struct FName                                       SocketName;                                               // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UMeshComponent*                              MeshComponent;                                            // 0x0008(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	TEnumAsByte<ECollisionEnabled>                     oldCollisionEnabledState;                                 // 0x0010(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	struct FName                                       oldCollisionProfileName;                                  // 0x0014(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     oldCollisionChannel;                                      // 0x001C(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               oldGenerateOverlapEventsFlag;                             // 0x001D(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               oldRenderCustomDepthFlag;                                 // 0x001E(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x001F(0x0001) MISSED OFFSET
	int                                                oldCustomDepthValue;                                      // 0x0020(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct Robogore.SavedWeaponInfo
// 0x0018
struct FSavedWeaponInfo
{
	class ARangedWeapon*                               weaponPointer;                                            // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<struct FSavedWeaponMeshInfo>                SavedWeaponMeshInfo;                                      // 0x0008(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct Robogore.SavedRagdollInfo
// 0x00A0
struct FSavedRagdollInfo
{
	struct FVector                                     enteredRagdollActorLocation;                              // 0x0000(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	struct FRotator                                    enteredRagdollActorRotation;                              // 0x000C(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     enteredRagdollComponentLocation;                          // 0x0018(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	struct FRotator                                    enteredRagdollComponentRotation;                          // 0x0024(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              savedDrawDistance;                                        // 0x0030(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FName                                       savedCollisionProfileName;                                // 0x0034(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FName                                       savedCapsuleCollisionProfileName;                         // 0x003C(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FCollisionResponseContainer                 savedCollisionResponses;                                  // 0x0044(0x0020) (Transient)
	struct FCollisionResponseContainer                 savedCapsuleCollisionResponses;                           // 0x0064(0x0020) (Transient)
	TEnumAsByte<ECollisionChannel>                     savedCollisionChannel;                                    // 0x0084(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     savedCapsuleCollisionChannel;                             // 0x0085(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0086(0x0002) MISSED OFFSET
	TArray<struct FSavedWeaponInfo>                    SavedWeaponInfo;                                          // 0x0088(0x0010) (ZeroConstructor, Transient)
	EVisibilityBasedAnimTickOption                     m_visibilityBasedTickOption;                              // 0x0098(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0099(0x0007) MISSED OFFSET
};

// ScriptStruct Robogore.DroneFXLight
// 0x0020
struct FDroneFXLight
{
	struct FString                                     lightName;                                                // 0x0000(0x0010) (Edit, ZeroConstructor)
	class ULightComponent*                             lightInstance;                                            // 0x0010(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	float                                              rotationRateDegPerSecond;                                 // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct Robogore.DroneMovementConfig
// 0x00CC
struct FDroneMovementConfig
{
	float                                              MaxSpeed;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     MaxSpeedScale;                                            // 0x0004(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DownwardSpeedScale;                                       // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxAcceleration;                                          // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   MaxVerticalAcceleration;                                  // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BrakingFriction;                                          // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BrakingDeceleration;                                      // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUseSeparateBrakingFriction : 1;                          // 0x0028(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	float                                              Mass;                                                     // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Friction;                                                 // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RotationFriction;                                         // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    RotationAcceleration;                                     // 0x0038(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    MaxRotationRate;                                          // 0x0044(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    MaxRotationDelta;                                         // 0x0050(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     VerticalLimits;                                           // 0x005C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   FloorSpringDamper;                                        // 0x0068(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   CeilingSpringDamper;                                      // 0x0070(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LedgeHeightTolerance;                                     // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LedgeDropOffTime;                                         // 0x007C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LedgeDropOffCooldownTime;                                 // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TerrainSlopeLimit;                                        // 0x0084(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ClientImpulseScale;                                       // 0x0088(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ClientImpulseLimit;                                       // 0x008C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ClientImpulseDecayRate;                                   // 0x0090(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CollisionReflectionFactor;                                // 0x0094(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ChassisInterpRates;                                       // 0x0098(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ChassisRotatorMinLimits;                                  // 0x00A4(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ChassisRotatorMaxLimits;                                  // 0x00B0(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   PitchLimits;                                              // 0x00BC(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              VerticalPitchMultiplier;                                  // 0x00C4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NonPlayerPitchMultiplier;                                 // 0x00C8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Robogore.DroneBumper
// 0x0018
struct FDroneBumper
{
	struct FVector                                     Offset;                                                   // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Direction;                                                // 0x000C(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Robogore.DroneBumperConfig
// 0x0040
struct FDroneBumperConfig
{
	bool                                               m_enabled;                                                // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               m_visualize;                                              // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	TArray<struct FDroneBumper>                        m_bumpers;                                                // 0x0008(0x0010) (Edit, ZeroConstructor)
	float                                              m_scale;                                                  // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              m_range;                                                  // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              m_spring;                                                 // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              m_damper;                                                 // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              m_crumpleRange;                                           // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              m_crumpleSpring;                                          // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              m_crumpleDamper;                                          // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              m_dotThreshold;                                           // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              m_trackRate;                                              // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct Robogore.ScaledShaker
// 0x00DC
struct FScaledShaker
{
	struct FROscillator                                BaseRotOscillation;                                       // 0x0000(0x0024) (Edit)
	struct FVOscillator                                BaseLocOscillation;                                       // 0x0024(0x0024) (Edit)
	struct FROscillator                                ScaledRotOscillation;                                     // 0x0048(0x0024) (Edit)
	struct FVOscillator                                ScaledLocOscillation;                                     // 0x006C(0x0024) (Edit)
	struct FVector                                     m_currentLocOffset;                                       // 0x0090(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	struct FRotator                                    m_currentRotOffset;                                       // 0x009C(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              m_shakeScale;                                             // 0x00A8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     m_baseLocOffset;                                          // 0x00AC(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     m_baseRotOffset;                                          // 0x00B8(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     m_scaleLocOffset;                                         // 0x00C4(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     m_scaleRotOffset;                                         // 0x00D0(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Robogore.DroneSpawnParameters
// 0x0060
struct FDroneSpawnParameters
{
	EeTeamID                                           teamID;                                                   // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FName>                               customTags;                                               // 0x0008(0x0010) (Edit, ZeroConstructor)
	struct FGameplayTag                                spawnAnimationActionTag;                                  // 0x0018(0x0008) (Edit)
	EeAwarenessState                                   AwarenessState;                                           // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	class APathGraphActor*                             PatrolPath;                                               // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class AActor*                                      combatHomeLocationOverride;                               // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0038(0x0010) UNKNOWN PROPERTY: ArrayProperty Robogore.DroneSpawnParameters.gameplayEffects
	TArray<class UClass*>                              customAISkills;                                           // 0x0048(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0058(0x0008) MISSED OFFSET
};

// ScriptStruct Robogore.UnitSpawnParameters
// 0x0080
struct FUnitSpawnParameters
{
	EeTeamID                                           teamID;                                                   // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EeCommanderID                                      commanderId;                                              // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	TArray<struct FName>                               customTags;                                               // 0x0008(0x0010) (Edit, ZeroConstructor)
	struct FGameplayTag                                spawnAnimationActionTag;                                  // 0x0018(0x0008)
	EeAwarenessState                                   AwarenessState;                                           // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	class APathGraphActor*                             PatrolPath;                                               // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class AActor*                                      HomeLocation;                                             // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class AActor*                                      combatHomeLocationOverride;                               // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class AActor*                                      AttackPositionLocation;                                   // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       payloadTag;                                               // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0050(0x0010) UNKNOWN PROPERTY: ArrayProperty Robogore.UnitSpawnParameters.gameplayEffects
	TArray<class UClass*>                              customAISkills;                                           // 0x0060(0x0010) (Edit, ZeroConstructor)
	class AActor*                                      Owner;                                                    // 0x0070(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class APawn*                                       Instigator;                                               // 0x0078(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Robogore.DynamicMusicLevelParams
// 0x0020
struct FDynamicMusicLevelParams
{
	bool                                               isThreatDriven;                                           // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               customThreat;                                             // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              minThreat;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               customRelease;                                            // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              releaseTime;                                              // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               customEvent;                                              // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	class UAkAudioEvent*                               musicEvent;                                               // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Robogore.EffectPoolSettings
// 0x0004
struct FEffectPoolSettings
{
	uint16_t                                           PoolSize;                                                 // 0x0000(0x0002) (Edit, ZeroConstructor, Config, IsPlainOldData)
	EeEffectInstancingRecyclePolicy                    recyclingPolicy;                                          // 0x0002(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0003(0x0001) MISSED OFFSET
};

// ScriptStruct Robogore.AmbientVoiceInstance
// 0x0020
struct FAmbientVoiceInstance
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
	class UAkAudioEvent*                               sfx;                                                      // 0x0010(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
};

// ScriptStruct Robogore.RobogoreReplicatedStat
// 0x000C
struct FRobogoreReplicatedStat
{
	struct FGameplayTag                                statTag;                                                  // 0x0000(0x0008)
	int                                                Value;                                                    // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Robogore.RobogoreReplicatedStatStore
// 0x0060
struct FRobogoreReplicatedStatStore
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
	TArray<struct FRobogoreReplicatedStat>             replicatedStats;                                          // 0x0050(0x0010) (ZeroConstructor)
};

// ScriptStruct Robogore.RobogoreReplicatedCrewStats
// 0x0068
struct FRobogoreReplicatedCrewStats
{
	struct FGameplayTag                                crewTag;                                                  // 0x0000(0x0008)
	struct FRobogoreReplicatedStatStore                stats;                                                    // 0x0008(0x0060)
};

// ScriptStruct Robogore.RobogoreReplicatedStats
// 0x00C8
struct FRobogoreReplicatedStats
{
	unsigned char                                      isValidStats : 1;                                         // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FRobogoreReplicatedStatStore                primaryStats;                                             // 0x0008(0x0060)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0068(0x0050) MISSED OFFSET
	TArray<struct FRobogoreReplicatedCrewStats>        replicatedCrewStats;                                      // 0x00B8(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct Robogore.RuntimeInventorySaveData
// 0x0050
struct FRuntimeInventorySaveData
{
	TMap<struct FGameplayTag, uint32_t>                m_inventoryItems;                                         // 0x0000(0x0050) (ZeroConstructor)
};

// ScriptStruct Robogore.GameplayEffectSaveInfo
// 0x0028
struct FGameplayEffectSaveInfo
{
	class UClass*                                      m_actorGameplayEffectClass;                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              m_elapsedTime;                                            // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FV1AttributeInstigator                      m_gameplayEffectInstigator;                               // 0x0010(0x0018)
};

// ScriptStruct Robogore.GameplayEffectSaveData
// 0x0010
struct FGameplayEffectSaveData
{
	TArray<struct FGameplayEffectSaveInfo>             m_gameplayEffectSaveData;                                 // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Robogore.MissionPlayerUnitSaveInfo
// 0x0008
struct FMissionPlayerUnitSaveInfo
{
	class UClass*                                      m_unitClass;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Robogore.MissionPlayerCrewSaveInfo
// 0x0018
struct FMissionPlayerCrewSaveInfo
{
	class UClass*                                      m_playerGravcycleClass;                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FMissionPlayerUnitSaveInfo>          m_playerCrewUnits;                                        // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct Robogore.MissionPlayerStateSaveData
// 0x0078
struct FMissionPlayerStateSaveData
{
	struct FRuntimeInventorySaveData                   m_playerInventorySaveData;                                // 0x0000(0x0050)
	struct FGameplayEffectSaveData                     m_playerGameplayEffectSaveData;                           // 0x0050(0x0010)
	struct FMissionPlayerCrewSaveInfo                  m_playerCrewSaveInfo;                                     // 0x0060(0x0018)
};

// ScriptStruct Robogore.ExpandingAOESettings
// 0x00C0
struct FExpandingAOESettings
{
	float                                              initialRadius;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              finalRadius;                                              // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              growthDuration;                                           // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              lifetimeAfterGrowth;                                      // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int8_t                                             loopCount;                                                // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              edgeDistanceToAllowEffects;                               // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      damageEventClass;                                         // 0x0018(0x0008) (Edit, ZeroConstructor, NoClear, IsPlainOldData)
	class UDamageMatrixObject*                         DamageMatrix;                                             // 0x0020(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDamageFalloffObject*                        DamageFalloff;                                            // 0x0028(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FV1AttributeModData                         damageModData;                                            // 0x0030(0x0018) (Transient)
	struct FGameplayTag                                damageSourceStatTag;                                      // 0x0048(0x0008) (Transient)
	TArray<class UInstigatorEvent*>                    aoeEvents;                                                // 0x0050(0x0010) (Edit, ExportObject, ZeroConstructor)
	bool                                               useTeamRelationshipMaskOverride;                          // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      teamRelationshipMaskOverride;                             // 0x0061(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      applyToInstigator : 1;                                    // 0x0062(0x0001) (Edit)
	unsigned char                                      applyToInstigatorControllerOwnedActors : 1;               // 0x0062(0x0001) (Edit)
	unsigned char                                      hasPlayerEffects : 1;                                     // 0x0062(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0063(0x0001) MISSED OFFSET
	float                                              playerEffectsFinalRadius;                                 // 0x0064(0x0004) (Edit, ZeroConstructor, NoClear, IsPlainOldData)
	class UClass*                                      cameraShakeClass;                                         // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UForceFeedbackEffect*                        rumbleClass;                                              // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      allowAIToPredictAOE : 1;                                  // 0x0078(0x0001) (Edit)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0079(0x0007) MISSED OFFSET
	struct FGameplayTagContainer                       gameplayEffectsThatPreventApplication;                    // 0x0080(0x0020) (Edit)
	struct FGameplayTagContainer                       gameplayEffectCategoriesThatPreventApplication;           // 0x00A0(0x0020) (Edit)
};

// ScriptStruct Robogore.ExpandingAOEOverlapSettings
// 0x0028
struct FExpandingAOEOverlapSettings
{
	unsigned char                                      useObjectLookupMethod : 1;                                // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<class UClass*>                              objectTypeCandidates;                                     // 0x0008(0x0010) (Edit, ZeroConstructor)
	struct FName                                       CollisionProfileName;                                     // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              delayBetweenOverlapTests;                                 // 0x0020(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct Robogore.TreeCanopyParams
// 0x0038
struct FTreeCanopyParams
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Robogore.TreeCanopyParams.mesh
	float                                              startHeight;                                              // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              endHeight;                                                // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              overlapDistance;                                          // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct Robogore.ForceCube
// 0x0014
struct FForceCube
{
	struct FVector                                     Extents;                                                  // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Range;                                                    // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Force;                                                    // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Robogore.ForceSphere
// 0x000C
struct FForceSphere
{
	float                                              Radius;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Range;                                                    // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Force;                                                    // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Robogore.ForceCylinder
// 0x0010
struct FForceCylinder
{
	float                                              Radius;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Height;                                                   // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Range;                                                    // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Force;                                                    // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Robogore.GameplayAchievementStatQueryToAchievementArray
// 0x0010
struct FGameplayAchievementStatQueryToAchievementArray
{
	TArray<class UGameplayAchievement*>                achievements;                                             // 0x0000(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct Robogore.GameplayChallengeProgressionTier
// 0x0040
struct FGameplayChallengeProgressionTier
{
	struct FText                                       tierName;                                                 // 0x0000(0x0018) (Edit)
	struct FText                                       tierDescription;                                          // 0x0018(0x0018) (Edit)
	TArray<class UGameplayChallengeReward*>            progressionTierRewards;                                   // 0x0030(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Robogore.RegisteredGameplayChallenge
// 0x0028
struct FRegisteredGameplayChallenge
{
	class UGameplayChallengeSet*                       owningChallengeSet;                                       // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGameplayChallenge*                          challengeInstance;                                        // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      challegeDataAssetIndex;                                   // 0x0010(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      challengeIndexWithinSet;                                  // 0x0011(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0012(0x0006) MISSED OFFSET
	double                                             challengeProgress;                                        // 0x0018(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               isChallengeComplete;                                      // 0x0020(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               preReqChallengesComplete;                                 // 0x0021(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               isChallengeFailed;                                        // 0x0022(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x0023(0x0005) MISSED OFFSET
};

// ScriptStruct Robogore.ChallengesAssociatedWithQuery
// 0x0010
struct FChallengesAssociatedWithQuery
{
	TArray<class UGameplayChallenge*>                  associatedChallenges;                                     // 0x0000(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct Robogore.SerializedGameplayChallenge
// 0x0018
struct FSerializedGameplayChallenge
{
	struct FGuid                                       challengeGUID;                                            // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           challengeProgress;                                        // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               isChallengeComplete;                                      // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
};

// ScriptStruct Robogore.SerializedGameplayChallengeProgressionSet
// 0x0028
struct FSerializedGameplayChallengeProgressionSet
{
	struct FGuid                                       Guid;                                                     // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	TArray<struct FSerializedGameplayChallenge>        challenges;                                               // 0x0010(0x0010) (ZeroConstructor)
	uint32_t                                           setProgress;                                              // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct Robogore.ReplicatedGameplayChallenge
// 0x002C
struct FReplicatedGameplayChallenge
{
	struct FGuid                                       challengeGUID;                                            // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       challengeSetGUID;                                         // 0x0010(0x0010) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           challengeProgress;                                        // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           initalChallengeProgress;                                  // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               isChallengeComplete;                                      // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               isChallengeFailed;                                        // 0x0029(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               isInitalChallengeProgressSet;                             // 0x002A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x002B(0x0001) MISSED OFFSET
};

// ScriptStruct Robogore.GameplayChallengeDebugData
// 0x0030
struct FGameplayChallengeDebugData
{
	class UGameplayChallengeSet*                       owningChallengeSet;                                       // 0x0000(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	class UGameplayStatQuery*                          challengeStatQuery;                                       // 0x0008(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FText                                       challengeName;                                            // 0x0010(0x0018) (Edit, EditConst)
	bool                                               IsComplete;                                               // 0x0028(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               isFailed;                                                 // 0x0029(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               preReqChallengesComplete;                                 // 0x002A(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x002B(0x0001) MISSED OFFSET
	uint32_t                                           CurrentValue;                                             // 0x002C(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct Robogore.GameplayChallengesDebugPlayerData
// 0x0060
struct FGameplayChallengesDebugPlayerData
{
	struct FString                                     playerName;                                               // 0x0000(0x0010) (Edit, ZeroConstructor, EditConst)
	TMap<class UGameplayChallenge*, struct FGameplayChallengeDebugData> playerChallengeData;                                      // 0x0010(0x0050) (Edit, ZeroConstructor, EditConst)
};

// ScriptStruct Robogore.GameplayEliminationsDamagerData
// 0x0018
struct FGameplayEliminationsDamagerData
{
	class AController*                                 damager;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct Robogore.RegisteredMedalAction
// 0x0010
struct FRegisteredMedalAction
{
	class UGameplayMedalAction*                        associatedAction;                                         // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      medalDataAssetIndex;                                      // 0x0008(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      medalAssetIndexInDataSet;                                 // 0x0009(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x000A(0x0006) MISSED OFFSET
};

// ScriptStruct Robogore.PendingGameplayMedal
// 0x0038
struct FPendingGameplayMedal
{
	class UGameplayMedalAction*                        medalAction;                                              // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UClass*                                      medalClass;                                               // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FGameplayTag                                medalTag;                                                 // 0x0010(0x0008) (Transient)
	struct FText                                       medalText;                                                // 0x0018(0x0018) (Transient)
	class UObject*                                     medalImage;                                               // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Robogore.ScoredActionAccumulator
// 0x0010
struct FScoredActionAccumulator
{
	uint32_t                                           lastBroadcastedScoreValue;                                // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	double                                             deltaAccumulatedScoreValue;                               // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Robogore.RegisteredScoredAction
// 0x0020
struct FRegisteredScoredAction
{
	class UGameplayScoredAction*                       associatedAction;                                         // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      scoreDataAssetIndex;                                      // 0x0008(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      actionAssetIndexInDataAsset;                              // 0x0009(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x000A(0x0006) MISSED OFFSET
	struct FScoredActionAccumulator                    activeAccumulator;                                        // 0x0010(0x0010) (Transient)
};

// ScriptStruct Robogore.GameplayScoreSystemPlayerCache
// 0x0100
struct FGameplayScoreSystemPlayerCache
{
	unsigned char                                      UnknownData00[0x100];                                     // 0x0000(0x0100) MISSED OFFSET
};

// ScriptStruct Robogore.GameplayServerChallengeStoreForPlayer
// 0x00C0
struct FGameplayServerChallengeStoreForPlayer
{
	struct FString                                     playerGameServiceID;                                      // 0x0000(0x0010) (ZeroConstructor, Transient)
	TMap<struct FGuid, struct FSerializedGameplayChallengeProgressionSet> playerInitialChallengeProgress;                           // 0x0010(0x0050) (ZeroConstructor, Transient)
	TMap<struct FGuid, struct FSerializedGameplayChallengeProgressionSet> playerGameEndChallengeProgress;                           // 0x0060(0x0050) (ZeroConstructor, Transient)
	TArray<class UGameplayChallenge*>                  challengesCompletedThisSession;                           // 0x00B0(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct Robogore.GameplayStatQueriesByPlayer
// 0x0058
struct FGameplayStatQueriesByPlayer
{
	class APlayerController*                           owningController;                                         // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0008(0x0050) MISSED OFFSET
};

// ScriptStruct Robogore.WaterSimImpactParam
// 0x001C
struct FWaterSimImpactParam
{
	struct FVector                                     pos;                                                      // 0x0000(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              Radius;                                                   // 0x000C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              Force;                                                    // 0x0010(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              lifetime;                                                 // 0x0014(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               processed;                                                // 0x0018(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
};

// ScriptStruct Robogore.GoalData
// 0x0020
struct FGoalData
{
	struct FText                                       GoalDescription;                                          // 0x0000(0x0018) (Edit, BlueprintVisible)
	float                                              TotalProgress;                                            // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CurrentProgress;                                          // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Robogore.GravcycleAIWeaponFiringTaskSettings
// 0x0030
struct FGravcycleAIWeaponFiringTaskSettings
{
	unsigned char                                      m_lineOfSightRequired : 1;                                // 0x0000(0x0001) (Edit)
	unsigned char                                      m_inRangeRequired : 1;                                    // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FBlackboardKeySelector                      m_shootAtBlackboardKey;                                   // 0x0008(0x0028) (Edit)
};

// ScriptStruct Robogore.GraphicsLevel
// 0x0020
struct FGraphicsLevel
{
	float                                              resolutionQuality;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                viewDistanceQuality;                                      // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                antiAliasingQuality;                                      // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                shadowQuality;                                            // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                postProcessQuality;                                       // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                textureQuality;                                           // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                effectsQuality;                                           // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                foliageQuality;                                           // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Robogore.ScaledRumbleEffect
// 0x0010
struct FScaledRumbleEffect
{
	float                                              m_scale;                                                  // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UForceFeedbackEffect*                        m_forceFeedbackEffect;                                    // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Robogore.GCFoliagePassThroughState
// 0x0030
struct FGCFoliagePassThroughState
{
	class UAkAudioEvent*                               foliagePassThroughStartEvent;                             // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               foliagePassThroughStopEvent;                              // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              playDistanceOffset;                                       // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsPlaying;                                                // 0x0014(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	int                                                playingId;                                                // 0x0018(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               isInFoliage;                                              // 0x001C(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	struct FVector                                     foliageCenter;                                            // 0x0020(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct Robogore.GCAudioInputParams
// 0x0020
struct FGCAudioInputParams
{
	class UAkAudioEvent*                               inputIncreaseEvent;                                       // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               inputDecreaseEvent;                                       // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              inputDeltaMinDifference;                                  // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              inputDeltaRefreshTime;                                    // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              activationTime;                                           // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct Robogore.CameraData
// 0x0060
struct FCameraData
{
	bool                                               overrideLocation;                                         // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               overrideRotation;                                         // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               overrideFOV;                                              // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               useDynamicFOV;                                            // 0x0003(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               overrideEase;                                             // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               overrideInputScale;                                       // 0x0005(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               overrideUserZoomScale;                                    // 0x0006(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               overrideHideHead;                                         // 0x0007(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               overrideShouldPivot;                                      // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               overrideResetRotation;                                    // 0x0009(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               overrideUseCameraCollision;                               // 0x000A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               overrideIsZoom;                                           // 0x000B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               overrideAudio;                                            // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	struct FVector                                     cameraLocation;                                           // 0x0010(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    cameraRotation;                                           // 0x001C(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              fieldOfView;                                              // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              fieldOfViewDynamicMax;                                    // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              cameraEaseInOut;                                          // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              cameraResetRotationEaseInOut;                             // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              inputScale;                                               // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               useUserZoomScale;                                         // 0x003C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               hideHead;                                                 // 0x003D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               pivotCamera;                                              // 0x003E(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               resetRotation;                                            // 0x003F(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               useCameraCollision;                                       // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               isZoomed;                                                 // 0x0041(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0042(0x0006) MISSED OFFSET
	class UAkAudioEvent*                               enterAudio;                                               // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               exitAudio;                                                // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECameraProjectionMode>                 projectionMode;                                           // 0x0058(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0059(0x0007) MISSED OFFSET
};

// ScriptStruct Robogore.DebugPivotState
// 0x0010
struct FDebugPivotState
{
	float                                              DebugPitch;                                               // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              Radius;                                                   // 0x0004(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              Angle;                                                    // 0x0008(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              PitchSpeed;                                               // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Robogore.OrbitState
// 0x000C
struct FOrbitState
{
	float                                              Elevation;                                                // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              Radius;                                                   // 0x0004(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              Angle;                                                    // 0x0008(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Robogore.CommandPulseProjector
// 0x0020
struct FCommandPulseProjector
{
	class UClass*                                      m_decalWidgetClass;                                       // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class ADecalWidgetActor*                           m_decalActor;                                             // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UCommandPulseUserWidget*                     m_widget;                                                 // 0x0010(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	bool                                               m_isVisible;                                              // 0x0018(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
};

// ScriptStruct Robogore.GravcycleFeatureSet
// 0x0020
struct FGravcycleFeatureSet
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct Robogore.EngineLoadModel
// 0x0020
struct FEngineLoadModel
{
	float                                              m_attackRate;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              m_releaseRate;                                            // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              m_decayRate;                                              // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              m_levelThreshold;                                         // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct Robogore.GravcycleImpactConfig
// 0x0018
struct FGravcycleImpactConfig
{
	bool                                               m_doesImpactDamage;                                       // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               m_damageFriendlyUnits;                                    // 0x0001(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              m_impactEnergyToDamageRatio;                              // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              m_verticalImpactThreshold;                                // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              m_grindDamageRatio;                                       // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              m_selfDamageRatio;                                        // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              m_selfDamageThreshold;                                    // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Robogore.HealingDynamicMaterialReference
// 0x0018
struct FHealingDynamicMaterialReference
{
	class UMeshComponent*                              MeshComponent;                                            // 0x0000(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            Materials;                                                // 0x0008(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct Robogore.HealingEffectSpec
// 0x0014
struct FHealingEffectSpec
{
	float                                              healingPerSecond;                                         // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FSimpleEffectSpec                           SimpleEffectSpec;                                         // 0x0004(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Robogore.InteractableResourceInfo
// 0x0028
struct FInteractableResourceInfo
{
	class UObject*                                     resourceImage;                                            // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FText                                       m_resourceNameText;                                       // 0x0008(0x0018) (Edit)
	int                                                resourceCount;                                            // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct Robogore.InteractableObjectStateData
// 0x0010
struct FInteractableObjectStateData
{
	class UInteractableObjectComponent*                interactableObject;                                       // 0x0000(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	struct FTickingTimer                               scanDistanceTimeout;                                      // 0x0008(0x0008) (Transient)
};

// ScriptStruct Robogore.ItemSpawnTravelConfig
// 0x005C
struct FItemSpawnTravelConfig
{
	bool                                               delayItems;                                               // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               throwItems;                                               // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	struct FVector2D                                   throwDistanceRange;                                       // 0x0004(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   throwHeightRange;                                         // 0x000C(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   throwTimeRange;                                           // 0x0014(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   throwDelayRange;                                          // 0x001C(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               spawnWithRandomRotation;                                  // 0x0024(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               rotateWhenTraveling;                                      // 0x0025(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0026(0x0002) MISSED OFFSET
	struct FFloatRange                                 xRotDegPerSecondRange;                                    // 0x0028(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFloatRange                                 yRotDegPerSecondRange;                                    // 0x0038(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFloatRange                                 zRotDegPerSecondRange;                                    // 0x0048(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ignoreCollisionWithOwner;                                 // 0x0058(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0059(0x0003) MISSED OFFSET
};

// ScriptStruct Robogore.ItemSpawnEntry
// 0x0030
struct FItemSpawnEntry
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: SoftClassProperty Robogore.ItemSpawnEntry.actorClass
	class UPersistentItemDataObject*                   itemPersistentData;                                       // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Robogore.ItemRespawnConfig
// 0x000C
struct FItemRespawnConfig
{
	float                                              initialSpawnDelay;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              respawnDelay;                                             // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EeItemRespawnCondition                             itemRespawnCondition;                                     // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      allowedTeamsToCollect;                                    // 0x0009(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000A(0x0002) MISSED OFFSET
};

// ScriptStruct Robogore.ItemSpawnTravelParams
// 0x0070
struct FItemSpawnTravelParams
{
	bool                                               doSpawnTravel;                                            // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               autoGenerateTargetLocation;                               // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               useNavForTargetGen;                                       // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0003(0x0001) MISSED OFFSET
	float                                              maxNavCheckHeight;                                        // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              maxNavCheckWidth;                                         // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   travelDistanceRange;                                      // 0x000C(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   travelHeightRange;                                        // 0x0014(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              travelTime;                                               // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              heightToAllowArc;                                         // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              heightForMaxTravelTime;                                   // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              minimumTimeBeforePickupAllowed;                           // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               spawnWithRandomRotation;                                  // 0x002C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               rotateWhenTraveling;                                      // 0x002D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x002E(0x0002) MISSED OFFSET
	struct FFloatRange                                 xRotDegPerSecondRange;                                    // 0x0030(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFloatRange                                 yRotDegPerSecondRange;                                    // 0x0040(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFloatRange                                 zRotDegPerSecondRange;                                    // 0x0050(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ActorsToIgnore;                                           // 0x0060(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct Robogore.ItemSpawnReplicatedTravelData
// 0x0020
struct FItemSpawnReplicatedTravelData
{
	struct FVector                                     travelLocation;                                           // 0x0000(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     startLocation;                                            // 0x000C(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              travelTime;                                               // 0x0018(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              arcHeight;                                                // 0x001C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Robogore.ItemSpawnTravelData
// 0x0044
struct FItemSpawnTravelData
{
	bool                                               hasValidTravelData;                                       // 0x0000(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FVector                                     travelLocation;                                           // 0x0004(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     startLocation;                                            // 0x0010(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               travelComplete;                                           // 0x001C(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	float                                              travelDistanceCalculated;                                 // 0x0020(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              travelHeightCalculated;                                   // 0x0024(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FTickingTimer                               travelTime;                                               // 0x0028(0x0008) (Transient)
	struct FTickingTimer                               minPickupTime;                                            // 0x0030(0x0008) (Transient)
	float                                              xRotDegPerSecond;                                         // 0x0038(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              yRotDegPerSecond;                                         // 0x003C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              zRotDegPerSecond;                                         // 0x0040(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Robogore.LoadingScreenMap
// 0x0118
struct FLoadingScreenMap
{
	struct FString                                     mapAsset;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FText                                       modeName;                                                 // 0x0010(0x0018) (Edit)
	struct FText                                       mapName;                                                  // 0x0028(0x0018) (Edit)
	bool                                               overrideModeNameFont;                                     // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
	struct FSlateFontInfo                              modeNameFont;                                             // 0x0048(0x0050) (Edit)
	bool                                               overrideMapNameFont;                                      // 0x0098(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0099(0x0007) MISSED OFFSET
	struct FSlateFontInfo                              mapNameFont;                                              // 0x00A0(0x0050) (Edit)
	unsigned char                                      UnknownData02[0x28];                                      // 0x00F0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Robogore.LoadingScreenMap.mapLoadingImage
};

// ScriptStruct Robogore.GameStateChangedEventsContainer
// 0x0060
struct FGameStateChangedEventsContainer
{
	TMap<EeGameplayGameModeState, struct FAudioEventsContainer> gameplayStateChangeEvents;                                // 0x0000(0x0050) (Edit, ZeroConstructor)
	TArray<EeGameplayGameModeState>                    doOnceFlags;                                              // 0x0050(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct Robogore.GameStateChangedEvents
// 0x0160
struct FGameStateChangedEvents
{
	struct FGameStateChangedEventsContainer            defaultGameplayStateChangedEvents;                        // 0x0000(0x0060) (Edit)
	struct FGameStateChangedEventsContainer            playOnceGameplayStateChangedEvents;                       // 0x0060(0x0060) (Edit)
	TMap<EeTeamID, struct FGameStateChangedEventsContainer> teamSpecificGameplayStateChangedEvents;                   // 0x00C0(0x0050) (Edit, ZeroConstructor)
	TMap<EeTeamID, struct FGameStateChangedEventsContainer> teamSpecificPlayOnceGameplayStateChangedEvents;           // 0x0110(0x0050) (Edit, ZeroConstructor)
};

// ScriptStruct Robogore.MatchStateChangedEventsContainer
// 0x0060
struct FMatchStateChangedEventsContainer
{
	TMap<EeMatchGameModeState, struct FAudioEventsContainer> matchStateChangeEvents;                                   // 0x0000(0x0050) (Edit, ZeroConstructor)
	TArray<EeMatchGameModeState>                       doOnceFlags;                                              // 0x0050(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct Robogore.MatchStateChangedEvents
// 0x0160
struct FMatchStateChangedEvents
{
	struct FMatchStateChangedEventsContainer           defaultMatchStateChangedEvents;                           // 0x0000(0x0060) (Edit)
	struct FMatchStateChangedEventsContainer           playOnceMatchStateChangedEvents;                          // 0x0060(0x0060) (Edit)
	TMap<EeTeamID, struct FMatchStateChangedEventsContainer> teamSpecificMatchStateChangedEvents;                      // 0x00C0(0x0050) (Edit, ZeroConstructor)
	TMap<EeTeamID, struct FMatchStateChangedEventsContainer> teamSpecificPlayOnceMatchStateChangedEvents;              // 0x0110(0x0050) (Edit, ZeroConstructor)
};

// ScriptStruct Robogore.RoundStateChangedEventsContainer
// 0x0060
struct FRoundStateChangedEventsContainer
{
	TMap<EeMatchRoundState, struct FAudioEventsContainer> RoundStateChangedEvents;                                  // 0x0000(0x0050) (Edit, ZeroConstructor)
	TArray<EeMatchRoundState>                          doOnceFlags;                                              // 0x0050(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct Robogore.RoundStateChangedEvents
// 0x0160
struct FRoundStateChangedEvents
{
	struct FRoundStateChangedEventsContainer           defaultRoundStateChangedEvents;                           // 0x0000(0x0060) (Edit)
	struct FRoundStateChangedEventsContainer           playOnceRoundStateChangedEvents;                          // 0x0060(0x0060) (Edit)
	TMap<EeTeamID, struct FRoundStateChangedEventsContainer> teamSpecificRoundStateChangedEvents;                      // 0x00C0(0x0050) (Edit, ZeroConstructor)
	TMap<EeTeamID, struct FRoundStateChangedEventsContainer> teamSpecificPlayOnceRoundStateChangedEvents;              // 0x0110(0x0050) (Edit, ZeroConstructor)
};

// ScriptStruct Robogore.MPAudioRange
// 0x0008
struct FMPAudioRange
{
	uint32_t                                           minimumTime;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	uint32_t                                           maximumTime;                                              // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Robogore.MPAudioTimingRange
// 0x0038
struct FMPAudioTimingRange
{
	struct FMPAudioRange                               Range;                                                    // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               executeOnlyOnceWhenInRange;                               // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FAudioEventsContainer                       audioEvents;                                              // 0x0010(0x0010) (Edit)
	struct FAudioEventsContainer                       exitRangeAudioEvents;                                     // 0x0020(0x0010) (Edit)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0030(0x0008) MISSED OFFSET
};

// ScriptStruct Robogore.MPAudioTimingRangeContainer
// 0x0010
struct FMPAudioTimingRangeContainer
{
	TArray<struct FMPAudioTimingRange>                 rangesAndEvents;                                          // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Robogore.RoundEndConditionSequences
// 0x0050
struct FRoundEndConditionSequences
{
	TMap<EeRoundEndCondition, class ALevelSequenceActor*> endConditionSequences;                                    // 0x0000(0x0050) (Edit, ZeroConstructor)
};

// ScriptStruct Robogore.MatchEndConditionSequences
// 0x0050
struct FMatchEndConditionSequences
{
	TMap<EeMatchEndCondition, class ALevelSequenceActor*> endConditionSequences;                                    // 0x0000(0x0050) (Edit, ZeroConstructor)
};

// ScriptStruct Robogore.MatchGenericActorToRestore
// 0x0050
struct FMatchGenericActorToRestore
{
	class AActor*                                      actorInstance;                                            // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               requireAuthority;                                         // 0x0008(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FTransform                                  actorTransform;                                           // 0x0010(0x0030) (Transient, IsPlainOldData)
	class UGameplayObjectControllerComponent*          objectControllerComponent;                                // 0x0040(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
};

// ScriptStruct Robogore.MatchGenericActorToRestoreArray
// 0x0010
struct FMatchGenericActorToRestoreArray
{
	TArray<struct FMatchGenericActorToRestore>         actorsToRestore;                                          // 0x0000(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct Robogore.MatchDestructionPartitionToRestore
// 0x0008
struct FMatchDestructionPartitionToRestore
{
	class UDestructionPartitionComponent*              partitionComponent;                                       // 0x0000(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
};

// ScriptStruct Robogore.MatchDestructibleComponentToRestore
// 0x0008
struct FMatchDestructibleComponentToRestore
{
	class UV1DestructibleComponent*                    DestructibleComponent;                                    // 0x0000(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
};

// ScriptStruct Robogore.MatchTeamScoreFeedback
// 0x0018
struct FMatchTeamScoreFeedback
{
	class UMatchMessageData*                           scoreStatusMessage;                                       // 0x0000(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FAudioEventsContainer                       genericAudioEvents;                                       // 0x0008(0x0010) (Edit)
};

// ScriptStruct Robogore.MatchTeamScoreFeedbackData
// 0x0090
struct FMatchTeamScoreFeedbackData
{
	int                                                expectedScore;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FMatchTeamScoreFeedback                     positivePlayerFeedback;                                   // 0x0008(0x0018) (Edit)
	struct FMatchTeamScoreFeedback                     negativePlayerFeedback;                                   // 0x0020(0x0018) (Edit)
	bool                                               onlyFireForFirstTeam;                                     // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               onlyFireWhenYourTeamReachesScore;                         // 0x0039(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x003A(0x0006) MISSED OFFSET
	TMap<EeTeamID, bool>                               hasFiredContainer;                                        // 0x0040(0x0050) (ZeroConstructor, Transient)
};

// ScriptStruct Robogore.MatchTeamScoreCompetitionData
// 0x0060
struct FMatchTeamScoreCompetitionData
{
	int                                                pointsBehindToBeConsideredLosing;                         // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                pointsAheadToBeConsideredWinning;                         // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                pointsNearToBeConsideredTied;                             // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FMatchTeamScoreFeedback                     losingFeedback;                                           // 0x0010(0x0018) (Edit)
	struct FMatchTeamScoreFeedback                     winningFeedback;                                          // 0x0028(0x0018) (Edit)
	struct FMatchTeamScoreFeedback                     tiedFeedback;                                             // 0x0040(0x0018) (Edit)
	EeMatchTeamScoreCompetitionState                   currentState;                                             // 0x0058(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0059(0x0007) MISSED OFFSET
};

// ScriptStruct Robogore.MatchGameTimeEvent
// 0x0008
struct FMatchGameTimeEvent
{
	class UMatchMessageData*                           timeLeftEvent;                                            // 0x0000(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct Robogore.MatchGameTimeEventStateData
// 0x0050
struct FMatchGameTimeEventStateData
{
	TMap<int, struct FMatchGameTimeEvent>              timeRemainingEvents;                                      // 0x0000(0x0050) (Edit, ZeroConstructor)
};

// ScriptStruct Robogore.MatchGameTimeLeftEvents
// 0x0060
struct FMatchGameTimeLeftEvents
{
	TMap<EeMatchRoundState, struct FMatchGameTimeEventStateData> roundStateTimeLeftEvents;                                 // 0x0000(0x0050) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0050(0x0010) MISSED OFFSET
};

// ScriptStruct Robogore.MatchNotificationData
// 0x0058
struct FMatchNotificationData
{
	EeMatchMessagePriority                             messagePriority;                                          // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0000(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	bool                                               messageQueues;                                            // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	struct FText                                       messageText;                                              // 0x0008(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	float                                              messageTextTimeout;                                       // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               messageAudioEvent;                                        // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              audioEventTimeout;                                        // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              globalDelay;                                              // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              delayBeforeFiringAudioEvent;                              // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              delayBeforeShowingText;                                   // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EeTeamMatrixRelationship                           relationshipToPlayer;                                     // 0x0040(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
	TArray<class UAkAudioEvent*>                       nonBlockingAudioEvents;                                   // 0x0048(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Robogore.MatchMessagePrioritySet
// 0x0010
struct FMatchMessagePrioritySet
{
	TArray<class UMatchMessageData*>                   messages;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Robogore.ReplicatedDeathCamData
// 0x0018
struct FReplicatedDeathCamData
{
	class AMatchPlayerState*                           killerPlayerState;                                        // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AActor*                                      killerActor;                                              // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FGameplayTag                                killedByWeaponTag;                                        // 0x0010(0x0008) (Transient)
};

// ScriptStruct Robogore.SeralizableCrewCostume
// 0x0030
struct FSeralizableCrewCostume
{
	struct FGuid                                       m_crewSkinGuid;                                           // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       m_pilotSkinGuid;                                          // 0x0010(0x0010) (ZeroConstructor, IsPlainOldData)
	TArray<struct FGuid>                               m_crewAttachmentsGuids;                                   // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct Robogore.BadgeLayer
// 0x0030
struct FBadgeLayer
{
	struct FGuid                                       m_imageGuid;                                              // 0x0000(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   m_position;                                               // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   m_scale;                                                  // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              m_rotation;                                               // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                m_colorIndex;                                             // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              m_opacity;                                                // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	uint32_t                                           m_zOrder;                                                 // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Robogore.PlayerBadge
// 0x0018
struct FPlayerBadge
{
	TArray<struct FBadgeLayer>                         m_badgeLayers;                                            // 0x0000(0x0010) (Edit, ZeroConstructor)
	uint32_t                                           m_badgeVersion;                                           // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Robogore.MatchWidget
// 0x0028
struct FMatchWidget
{
	EeMatchWidgetVisibilityOption                      visibilityOption;                                         // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0000(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	uint16_t                                           visibleRoundStates;                                       // 0x0004(0x0002) (Edit, ZeroConstructor, IsPlainOldData)
	uint16_t                                           visibleMatchStates;                                       // 0x0006(0x0002) (Edit, ZeroConstructor, IsPlainOldData)
	EeMatchWidgetType                                  WidgetType;                                               // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0008(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	int                                                widgetZOrder;                                             // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      WidgetClass;                                              // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 widgetInstance;                                           // 0x0018(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0020(0x0008) MISSED OFFSET
};

// ScriptStruct Robogore.HighlightDisplayInfo
// 0x000C
struct FHighlightDisplayInfo
{
	int                                                m_numberOfGameModeStats;                                  // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                m_numberOfGeneralStats;                                   // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                m_numberOfWildCardStats;                                  // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Robogore.GameplayMedalReplicationInfo
// 0x0008
struct FGameplayMedalReplicationInfo
{
	unsigned char                                      medalDataAssetIndex;                                      // 0x0000(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      medalAssetIndexInDataSet;                                 // 0x0001(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	EeGameplayMedalDifficulty                          medalDifficulty;                                          // 0x0002(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0003(0x0001) MISSED OFFSET
	uint32_t                                           numberOfTimesAchieved;                                    // 0x0004(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Robogore.MaterialInfo
// 0x0020
struct FMaterialInfo
{
	uint32_t                                           m_materialIndex;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       m_parameterName;                                          // 0x0004(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    m_materialInstanceDynamic;                                // 0x0010(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               m_invertValue;                                            // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
};

// ScriptStruct Robogore.MeleeAtackMontageArray
// 0x0010
struct FMeleeAtackMontageArray
{
	TArray<class UAnimMontage*>                        attackMontages;                                           // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Robogore.AttachedMeleeWeaponInfo
// 0x0028
struct FAttachedMeleeWeaponInfo
{
	class UClass*                                      meleeWeaponClass;                                         // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AMeleeWeaponActor*                           meleeWeaponInstance;                                      // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0010(0x0018) MISSED OFFSET
};

// ScriptStruct Robogore.MissionCrew
// 0x0028
struct FMissionCrew
{
	class UClass*                                      crewClass;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      gravcycleClass;                                           // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      squadClass;                                               // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              unitClasses;                                              // 0x0018(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Robogore.UnitMissionInfo
// 0x0040
struct FUnitMissionInfo
{
	struct FGameplayTag                                m_unitTag;                                                // 0x0000(0x0008) (Edit)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0008(0x0028) UNKNOWN PROPERTY: SoftClassProperty Robogore.UnitMissionInfo.m_previewActor
	TArray<struct FGameplayTag>                        m_unitAbilitesTags;                                       // 0x0030(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Robogore.MissionDialogueLine
// 0x0068
struct FMissionDialogueLine
{
	struct FGameplayTag                                characterGameplayTag;                                     // 0x0000(0x0008) (Edit)
	float                                              delayBeforePlay;                                          // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               AkAudioEvent;                                             // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FText                                       m_subtitleSpeaker;                                        // 0x0018(0x0018) (Edit)
	struct FText                                       m_subtitleForDialogue;                                    // 0x0030(0x0018) (Edit)
	TArray<struct FText>                               m_subtitleLines;                                          // 0x0048(0x0010) (ZeroConstructor)
	class UUnitChatterComponent*                       characterUnitChatterComponent;                            // 0x0058(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	bool                                               usePreRadio;                                              // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               usePostRadio;                                             // 0x0061(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0062(0x0006) MISSED OFFSET
};

// ScriptStruct Robogore.RobogoreMap
// 0x00F8
struct FRobogoreMap
{
	struct FText                                       mapDisplayName;                                           // 0x0000(0x0018) (Edit)
	struct FString                                     mapAsset;                                                 // 0x0018(0x0010) (Edit, ZeroConstructor)
	class UMissionCrewInfoDataAsset*                   m_crewInfo;                                               // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0030(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Robogore.RobogoreMap.imageTexture
	unsigned char                                      UnknownData01[0x28];                                      // 0x0058(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Robogore.RobogoreMap.missionCompleteImage
	struct FText                                       mapTextDescription;                                       // 0x0080(0x0018) (Edit)
	struct FText                                       loadoutTextDescription;                                   // 0x0098(0x0018) (Edit)
	unsigned char                                      UnknownData02[0x10];                                      // 0x00B0(0x0010) UNKNOWN PROPERTY: ArrayProperty Robogore.RobogoreMap.introLevelSequences
	unsigned char                                      UnknownData03[0x10];                                      // 0x00C0(0x0010) UNKNOWN PROPERTY: ArrayProperty Robogore.RobogoreMap.outroLevelSequences
	class UGameplayChallengeSet*                       challengesAvailable;                                      // 0x00D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UDifficultyData*                             DifficultyData;                                           // 0x00D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	uint32_t                                           chipReward;                                               // 0x00E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	uint32_t                                           salvageReward;                                            // 0x00E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	uint32_t                                           debugChipLevel;                                           // 0x00E8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      boostPlayer : 1;                                          // 0x00EC(0x0001) (Edit)
	unsigned char                                      UnknownData04[0x3];                                       // 0x00ED(0x0003) MISSED OFFSET
	uint32_t                                           boostedSalvageLevel;                                      // 0x00F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x00F4(0x0004) MISSED OFFSET
};

// ScriptStruct Robogore.MissionProgressionRow
// 0x0200
struct FMissionProgressionRow
{
	struct FRobogoreMap                                garageMap;                                                // 0x0000(0x00F8) (Edit)
	struct FRobogoreMap                                missionMap;                                               // 0x00F8(0x00F8) (Edit)
	TArray<struct FRobogoreMap>                        excursionMaps;                                            // 0x01F0(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Robogore.ActorNameplateWidgetConfig
// 0x0038
struct FActorNameplateWidgetConfig
{
	struct FWidgetVisibilityConfig                     defaultVisibilityConfig;                                  // 0x0000(0x0004) (Edit)
	struct FWidgetVisibilityConfig                     nameDefaultVisibilityConfig;                              // 0x0004(0x0004) (Edit)
	struct FWidgetVisibilityConfig                     typeDefaultVisibilityConfig;                              // 0x0008(0x0004) (Edit)
	bool                                               visibilityInVisionModeRequiresCallout;                    // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	struct FWidgetFadeConfig                           fadeConfig;                                               // 0x0010(0x000C) (Edit)
	struct FWidgetScaleConfig                          scaleConfig;                                              // 0x001C(0x001C) (Edit)
};

// ScriptStruct Robogore.ActorToSpawnOnSmartObjectCompletion
// 0x0028
struct FActorToSpawnOnSmartObjectCompletion
{
	class UClass*                                      actorClass;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       boneToSpawnOn;                                            // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     positionOffsetForSpawn;                                   // 0x0010(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    rotationOffsetForSpawn;                                   // 0x001C(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Robogore.MissionRetrievalDropOffActorInfo
// 0x0008
struct FMissionRetrievalDropOffActorInfo
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Robogore.MissionRetrievalCarrierInfo
// 0x0018
struct FMissionRetrievalCarrierInfo
{
	class AActor*                                      m_carrierActor;                                           // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct Robogore.MtxCurrencyData
// 0x0038
struct FMtxCurrencyData
{
	struct FText                                       m_nameOfPack;                                             // 0x0000(0x0018) (Edit, BlueprintVisible)
	struct FText                                       m_currencyAmountText;                                     // 0x0018(0x0018) (Edit, BlueprintVisible)
	int                                                m_internalCurrency;                                       // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                m_localCurrency;                                          // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Robogore.MultiplayerTestState
// 0x000C
struct FMultiplayerTestState
{
	float                                              ForwardBackInput;                                         // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LeftRightInput;                                           // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TurnInput;                                                // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Robogore.ExplicitOverrideInfo
// 0x0008
struct FExplicitOverrideInfo
{
	EeDynamicMusicLevel                                m_toLevel;                                                // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              m_releaseTimeSeconds;                                     // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Robogore.NaniteDropActorChance
// 0x0038
struct FNaniteDropActorChance
{
	struct FGameplayTag                                actorTag;                                                 // 0x0000(0x0008) (Edit)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0008(0x0028) UNKNOWN PROPERTY: SoftClassProperty Robogore.NaniteDropActorChance.naniteItemActorClass
	float                                              chanceToSpawn;                                            // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct Robogore.NaniteDropManagerSettings
// 0x0128
struct FNaniteDropManagerSettings
{
	TArray<struct FNaniteDropActorChance>              dropChancesPerActor;                                      // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FRuntimeFloatCurve                          dropChanceScalarByTimeSinceLastDrop;                      // 0x0010(0x0088) (Edit)
	struct FRuntimeFloatCurve                          dropChanceScalarByPlayerHealthRemaining;                  // 0x0098(0x0088) (Edit)
	uint32_t                                           teamsThatCannotDropNanites;                               // 0x0120(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0124(0x0004) MISSED OFFSET
};

// ScriptStruct Robogore.NaniteDropLastDropTimePerTeam
// 0x0010
struct FNaniteDropLastDropTimePerTeam
{
	EeTeamID                                           Team;                                                     // 0x0000(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FDateTime                                   lastDropTime;                                             // 0x0008(0x0008) (ZeroConstructor, Transient)
};

// ScriptStruct Robogore.TeamInfo
// 0x0002
struct FTeamInfo
{
	unsigned char                                      UnknownData00[0x2];                                       // 0x0000(0x0002) MISSED OFFSET
};

// ScriptStruct Robogore.ObjectiveCounterInfo
// 0x0028
struct FObjectiveCounterInfo
{
	EeCounterType                                      counterType;                                              // 0x0000(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FName                                       objectiveLookupName;                                      // 0x0004(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	EeOnActor                                          onActor;                                                  // 0x000C(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	uint32_t                                           counterValue;                                             // 0x0010(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x14];                                      // 0x0014(0x0014) MISSED OFFSET
};

// ScriptStruct Robogore.ObjectiveDetails
// 0x0040
struct FObjectiveDetails
{
	bool                                               useText;                                                  // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FText                                       detailText;                                               // 0x0008(0x0018) (Edit)
	bool                                               useInputSpecificText;                                     // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	struct FText                                       detailKeyboardMouseText;                                  // 0x0028(0x0018) (Edit)
};

// ScriptStruct Robogore.ObjectiveSection
// 0x0058
struct FObjectiveSection
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
	struct FString                                     objectiveDescriptor;                                      // 0x0018(0x0010) (Edit, ZeroConstructor)
	struct FString                                     ObjectiveDetails;                                         // 0x0028(0x0010) (Edit, ZeroConstructor)
	class USoundBase*                                  objectiveAudioClip;                                       // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class AMissionIndicatorActor*>              m_missionIndicators;                                      // 0x0040(0x0010) (Edit, ZeroConstructor)
	class ULogical_Set*                                condition;                                                // 0x0050(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct Robogore.DropshipData
// 0x0030
struct FDropshipData
{
	float                                              m_dropshipSpeed;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              m_dropshipDropRatio;                                      // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      m_dropshipBlueprint;                                      // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class AActor*                                      m_dropshipInstance;                                       // 0x0010(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class USplineComponent*                            m_dropshipSpline;                                         // 0x0018(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0020(0x0010) MISSED OFFSET
};

// ScriptStruct Robogore.OffscreenWidgetInstance
// 0x0020
struct FOffscreenWidgetInstance
{
	class UBaseOffscreenWidget*                        Widget;                                                   // 0x0000(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	float                                              DesiredAngle;                                             // 0x0008(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              Range;                                                    // 0x000C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              ActualAngle;                                              // 0x0010(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              Weight;                                                   // 0x0014(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               IsOnScreen;                                               // 0x0018(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               WantsVisible;                                             // 0x0019(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x001A(0x0002) MISSED OFFSET
	int                                                LayoutIndex;                                              // 0x001C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Robogore.PaintedEnemy
// 0x0030
struct FPaintedEnemy
{
	class AActor*                                      targetMarker;                                             // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FCommandPulseProjector                      projector;                                                // 0x0008(0x0020) (Transient)
	class AActor*                                      Target;                                                   // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Robogore.PayloadCargoFXLight
// 0x0020
struct FPayloadCargoFXLight
{
	struct FString                                     lightName;                                                // 0x0000(0x0010) (Edit, ZeroConstructor)
	class ULightComponent*                             lightInstance;                                            // 0x0010(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	float                                              rotationRateDegPerSecond;                                 // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct Robogore.PayloadCargoFXStateData
// 0x00B8
struct FPayloadCargoFXStateData
{
	float                                              InterpSpeed;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               usePulse;                                                 // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               useTargetValue;                                           // 0x0005(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
	float                                              targetValue;                                              // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               useCurve;                                                 // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	struct FRuntimeFloatCurve                          Curve;                                                    // 0x0010(0x0088) (Edit)
	struct FVector2D                                   intensityMinMax;                                          // 0x0098(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FTickingTimer                               currentCurveTimer;                                        // 0x00A0(0x0008) (Transient)
	struct FLinearColor                                stateColor;                                               // 0x00A8(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Robogore.PayloadCargoStateFXRatioCurves
// 0x05D8
struct FPayloadCargoStateFXRatioCurves
{
	struct FPayloadCargoFXStateData                    inactiveState;                                            // 0x0000(0x00B8) (Edit)
	struct FPayloadCargoFXStateData                    powerUpState;                                             // 0x00B8(0x00B8) (Edit)
	struct FPayloadCargoFXStateData                    activatingState;                                          // 0x0170(0x00B8) (Edit)
	struct FPayloadCargoFXStateData                    coastingState;                                            // 0x0228(0x00B8) (Edit)
	struct FPayloadCargoFXStateData                    activeState;                                              // 0x02E0(0x00B8) (Edit)
	struct FPayloadCargoFXStateData                    deactivatingState;                                        // 0x0398(0x00B8) (Edit)
	struct FPayloadCargoFXStateData                    powerDownState;                                           // 0x0450(0x00B8) (Edit)
	struct FPayloadCargoFXStateData                    atWaypointState;                                          // 0x0508(0x00B8) (Edit)
	struct FTickingTimer                               pulseLength;                                              // 0x05C0(0x0008) (Edit)
	EePayloadCargoMovementState                        lastState;                                                // 0x05C8(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x05C9(0x0003) MISSED OFFSET
	float                                              lastIntensityRatio;                                       // 0x05CC(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FTickingTimer                               currentCurveTimer;                                        // 0x05D0(0x0008) (Transient)
};

// ScriptStruct Robogore.PayloadCargoMaterial
// 0x0610
struct FPayloadCargoMaterial
{
	class UMaterialInterface*                          materialToReplace;                                        // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    dynamicMaterial;                                          // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FName                                       materialParamName;                                        // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FPayloadCargoStateFXRatioCurves             stateCurves;                                              // 0x0018(0x05D8) (Edit)
	float                                              colorInterpMultiplier;                                    // 0x05F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                currentColor;                                             // 0x05F4(0x0010) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0604(0x0004) MISSED OFFSET
	class UPayloadCargoMeshComponent*                  cargoMeshComponent;                                       // 0x0608(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
};

// ScriptStruct Robogore.PayloadCargoMeshColorParams
// 0x0010
struct FPayloadCargoMeshColorParams
{
	TArray<struct FPayloadCargoMaterial>               materialsToReplace;                                       // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Robogore.PayloadCargoParticleSystem
// 0x0018
struct FPayloadCargoParticleSystem
{
	struct FString                                     particleComponentName;                                    // 0x0000(0x0010) (Edit, ZeroConstructor)
	class UParticleSystemComponent*                    particleSystemInstance;                                   // 0x0010(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
};

// ScriptStruct Robogore.WaypointNodeData
// 0x0018
struct FWaypointNodeData
{
	class UPayloadPathNodeComponent*                   pathNode;                                                 // 0x0000(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	float                                              distanceFromLast;                                         // 0x0008(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UPayloadCargoProgressNodeWidget*             nodeWidget;                                               // 0x0010(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
};

// ScriptStruct Robogore.DutyCycle
// 0x0014
struct FDutyCycle
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
	float                                              m_upTime;                                                 // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              m_dnTime;                                                 // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Robogore.GravcycleAiConfig
// 0x0038
struct FGravcycleAiConfig
{
	struct FDutyCycle                                  engagementDutyCycle;                                      // 0x0000(0x0014) (Edit)
	float                                              engagementRange;                                          // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              attackDistance;                                           // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              attackElevation;                                          // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FTickingTimer                               targetUpdateTimer;                                        // 0x0020(0x0008) (Edit)
	float                                              MaxSpeed;                                                 // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              maxForce;                                                 // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              rotationMaxSpeed;                                         // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              rotationMaxForce;                                         // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Robogore.PayloadMoveSpawnTeamData
// 0x0020
struct FPayloadMoveSpawnTeamData
{
	TArray<class ACommandCenterActor*>                 oldSpawnLocations;                                        // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<class ACommandCenterActor*>                 newSpawnLocations;                                        // 0x0010(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Robogore.PlayerChatMessage
// 0x0040
struct FPlayerChatMessage
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
};

// ScriptStruct Robogore.BannerTileData
// 0x0058
struct FBannerTileData
{
	class UMtxAsset*                                   m_asset;                                                  // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       m_guid;                                                   // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                m_price;                                                  // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FText                                       m_name;                                                   // 0x0020(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FText                                       m_description;                                            // 0x0038(0x0018) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      m_isEquiped : 1;                                          // 0x0050(0x0001) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      m_isOwned : 1;                                            // 0x0050(0x0001) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
};

// ScriptStruct Robogore.DamageSourceInfo
// 0x0018
struct FDamageSourceInfo
{
	TWeakObjectPtr<class AActor>                       damager;                                                  // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	struct FVector2D                                   Direction;                                                // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              screenSpaceAngleDegrees;                                  // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              normalizedThreatLevel;                                    // 0x0014(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Robogore.HandheldCameraShake
// 0x0098
struct FHandheldCameraShake
{
	struct FVector2D                                   timerRange;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     positionOffsetRange;                                      // 0x0008(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    rotationOffsetRange;                                      // 0x0014(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               sinusoidal;                                               // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	float                                              dtMultiplier;                                             // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   velocityMultiplierRange;                                  // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              maxVelocityMultiplier;                                    // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              sinusoidalAccumulator;                                    // 0x0034(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FTickingTimer                               timeBeforeNewVals[0x6];                                   // 0x0038(0x0008) (Transient)
	struct FRotator                                    currShakyCamRotation;                                     // 0x0068(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	struct FRotator                                    wantedShakyCamRotation;                                   // 0x0074(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     currShakyCamPosition;                                     // 0x0080(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     wantedShakyCamPosition;                                   // 0x008C(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Robogore.PlayerEffectAOESettings
// 0x0020
struct FPlayerEffectAOESettings
{
	float                                              initialRadius;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              finalRadius;                                              // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              growthDuration;                                           // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UClass*                                      cameraShakeClass;                                         // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UForceFeedbackEffect*                        rumbleClass;                                              // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Robogore.StatTextAndTag
// 0x0020
struct FStatTextAndTag
{
	struct FText                                       m_statTextName;                                           // 0x0000(0x0018) (Edit)
	struct FGameplayTag                                m_statTag;                                                // 0x0018(0x0008) (Edit)
};

// ScriptStruct Robogore.StatGameplayTags
// 0x0018
struct FStatGameplayTags
{
	EeTeamID                                           m_teamID;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FStatTextAndTag>                     m_statTextAndTags;                                        // 0x0008(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Robogore.GameModeLobbyData
// 0x0028
struct FGameModeLobbyData
{
	struct FString                                     GameModeName;                                             // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     targetLevelName;                                          // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UClass*                                      modeDescriptionWidget;                                    // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Robogore.PulseTargetInfo
// 0x000C
struct FPulseTargetInfo
{
	float                                              renderAngle;                                              // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0004(0x0008) MISSED OFFSET
};

// ScriptStruct Robogore.MakeAINoiseAOESettings
// 0x0010
struct FMakeAINoiseAOESettings
{
	float                                              m_initialRadius;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              m_finalRadius;                                            // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              m_growthDuration;                                         // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              m_sourceVolume;                                           // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Robogore.RadarUnitInfo
// 0x001C
struct FRadarUnitInfo
{
	TWeakObjectPtr<class AActor>                       Unit;                                                     // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     lastKnownLocation;                                        // 0x0008(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              lastTimeSeen;                                             // 0x0014(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               markedForRemoval;                                         // 0x0018(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
};

// ScriptStruct Robogore.DropTableEntry
// 0x0038
struct FDropTableEntry
{
	float                                              m_chance;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               m_spawnAllCount;                                          // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	int                                                m_count;                                                  // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData02[0x28];                                      // 0x000C(0x0028) UNKNOWN PROPERTY: SoftClassProperty Robogore.DropTableEntry.m_actorClass
};

// ScriptStruct Robogore.ItemsToSpawnFromCollectionSetup
// 0x0010
struct FItemsToSpawnFromCollectionSetup
{
	class UItemsToSpawnCollection*                     itemCollection;                                           // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FInt32Interval                              rangeOfItemCountToSpawn;                                  // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Robogore.WeaponAccuracy
// 0x0090
struct FWeaponAccuracy
{
	struct FRuntimeFloatCurve                          m_accuracyCurve;                                          // 0x0000(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly)
	float                                              m_inaccuracyPerShot;                                      // 0x0088(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              m_aimSpeed;                                               // 0x008C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Robogore.ShotPattern
// 0x0018
struct FShotPattern
{
	TArray<struct FVector>                             m_shotLocations;                                          // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	float                                              m_pointVariation;                                         // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Robogore.Muzzle
// 0x0038
struct FMuzzle
{
	struct FName                                       m_muzzleMeshName;                                         // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       m_muzzleSocketName;                                       // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    m_muzzleFlashInst;                                        // 0x0010(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    m_muzzleChargeInst;                                       // 0x0018(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UAkComponent*                                m_muzzleAudioCompInst;                                    // 0x0020(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class ARangedWeapon*                               m_weapon;                                                 // 0x0028(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class USkeletalMeshComponent*                      m_muzzleMesh;                                             // 0x0030(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
};

// ScriptStruct Robogore.WeaponChargingAudioEvents
// 0x0040
struct FWeaponChargingAudioEvents
{
	class UAkAudioEvent*                               chargeWindingUp;                                          // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	class UAkAudioEvent*                               chargeWindingDown;                                        // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
	class UAkAudioEvent*                               autoFireChargeUp;                                         // 0x0020(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	class UAkAudioEvent*                               roundChambered;                                           // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               maxChargeReached;                                         // 0x0038(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Robogore.RangedWeaponChargeConfig
// 0x01A8
struct FRangedWeaponChargeConfig
{
	bool                                               useChargeFire;                                            // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              chargeUpDelay;                                            // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              chargeUpWindDownTime;                                     // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               chargeContinuesFromPreviousCharge;                        // 0x000C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               onlyFireAtFullCharge;                                     // 0x000D(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               rechargeForEveryFireAttempt;                              // 0x000E(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               autoFireAtFullCharge;                                     // 0x000F(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              fullyChargedAutoFireDelay;                                // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               chargeChambersBurstFireRounds;                            // 0x0014(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               chargeChambersBurstFireAlwaysFiresARound;                 // 0x0015(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               chargeIncreasesAccuracy;                                  // 0x0016(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               reloadCancelsCharge;                                      // 0x0017(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRuntimeFloatCurve                          projectileSpeedMultiplierScaledWithCharge;                // 0x0018(0x0088) (Edit, DisableEditOnInstance)
	struct FRuntimeFloatCurve                          projectileDamageMultiplierScaledWithCharge;               // 0x00A0(0x0088) (Edit, DisableEditOnInstance)
	struct FWeaponChargingAudioEvents                  audioEvents;                                              // 0x0128(0x0040) (Edit, DisableEditOnInstance)
	struct FName                                       chargeRatioAudioRTPCName;                                 // 0x0168(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       chargeAutoFireRatioAudioRTPCName;                         // 0x0170(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       numberOfChamberedRoundsAudioRTPCName;                     // 0x0178(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             chargeParticleSystemClass;                                // 0x0180(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class URangedWeaponChargeParticleCurveBase*> chargeRatioParameterInstances;                            // 0x0188(0x0010) (Edit, ExportObject, ZeroConstructor)
	TArray<class URangedWeaponChargeParticleCurveBase*> autoFireChargeRatioParameterInstances;                    // 0x0198(0x0010) (Edit, ExportObject, ZeroConstructor)
};

// ScriptStruct Robogore.RangedWeaponConfig
// 0x0398
struct FRangedWeaponConfig
{
	EeWeaponConfigType                                 configType;                                               // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      startWithMaxAmmo : 1;                                     // 0x0001(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	int                                                startingAmmoCount;                                        // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               hasInfiniteAmmo;                                          // 0x0008(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               hasInfiniteMagazines;                                     // 0x0009(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x000A(0x0002) MISSED OFFSET
	int                                                maxAmmoTotal;                                             // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                maxAmmoPerMagazine;                                       // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanRegenerateAmmo;                                        // 0x0014(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	float                                              regenTimePerRound;                                        // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      ammoAddedEachRegenRound;                                  // 0x001C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	int                                                numProjectilesPerMuzzleShot;                              // 0x0020(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              minSpreadAngle;                                           // 0x0024(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              maxSpreadAngle;                                           // 0x0028(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               useAccuracyCurve;                                         // 0x002C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               accuracyRegenWhileFiring;                                 // 0x002D(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x002E(0x0002) MISSED OFFSET
	struct FWeaponAccuracy                             accuracyCurve;                                            // 0x0030(0x0090) (Edit, DisableEditOnInstance)
	float                                              zoomAccuracyMultiplier;                                   // 0x00C0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               useShotPattern;                                           // 0x00C4(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x00C5(0x0003) MISSED OFFSET
	struct FShotPattern                                ShotPattern;                                              // 0x00C8(0x0018) (Edit, DisableEditOnInstance)
	class UClass*                                      damageEventClass;                                         // 0x00E0(0x0008) (Edit, ZeroConstructor, NoClear, IsPlainOldData)
	class UDamageMatrixObject*                         DamageMatrix;                                             // 0x00E8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UDamageFalloffObject*                        DamageFalloff;                                            // 0x00F0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	unsigned char                                      applyDamageFalloffToAOEs : 1;                             // 0x00F8(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData06[0x7];                                       // 0x00F9(0x0007) MISSED OFFSET
	class UProjectileAOESettings*                      ProjectileAOESettings;                                    // 0x0100(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystem*                             muzzleFlashTemplate;                                      // 0x0108(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UForceFeedbackEffect*                        rumblePerShot;                                            // 0x0110(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UForceFeedbackEffect*                        rumblePerBurst;                                           // 0x0118(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UForceFeedbackEffect*                        rumbleOnReloadStart;                                      // 0x0120(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UForceFeedbackEffect*                        rumbleOnReloadComplete;                                   // 0x0128(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      cameraShakePerShot;                                       // 0x0130(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      cameraShakePerBurst;                                      // 0x0138(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      cameraShakeReloadStart;                                   // 0x0140(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      cameraShakeReloadComplete;                                // 0x0148(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               fireStartEvent;                                           // 0x0150(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               fireOneShotEvent;                                         // 0x0158(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               fireEndEvent;                                             // 0x0160(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               fireNoAmmoEvent;                                          // 0x0168(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               fireBurstEvent;                                           // 0x0170(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              projectileSpeed;                                          // 0x0178(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              projectileSpeedVariation;                                 // 0x017C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              maxProjectileDistance;                                    // 0x0180(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              maxDistanceVariation;                                     // 0x0184(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      projectileClass;                                          // 0x0188(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      reticleClass;                                             // 0x0190(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      targetingReticleClass;                                    // 0x0198(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              delayBetweenShots;                                        // 0x01A0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isSemiAuto;                                               // 0x01A4(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x01A5(0x0003) MISSED OFFSET
	TArray<struct FMuzzle>                             muzzles;                                                  // 0x01A8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	bool                                               multiMuzzleFire;                                          // 0x01B8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               useBurstFire;                                             // 0x01B9(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               incrementMuzzleEveryShot;                                 // 0x01BA(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x1];                                       // 0x01BB(0x0001) MISSED OFFSET
	int                                                shotsPerBurst;                                            // 0x01BC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              delayBetweenBursts;                                       // 0x01C0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x01C4(0x0004) MISSED OFFSET
	struct FRangedWeaponChargeConfig                   chargeConfig;                                             // 0x01C8(0x01A8) (Edit, DisableEditOnInstance)
	bool                                               requiresReload;                                           // 0x0370(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x0371(0x0003) MISSED OFFSET
	float                                              reloadDuration;                                           // 0x0374(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               reloadAutoOnEmptyMagazine;                                // 0x0378(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x0379(0x0003) MISSED OFFSET
	float                                              fallbackReloadDuration;                                   // 0x037C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                reloadAnimationActionTag;                                 // 0x0380(0x0008) (Edit, DisableEditOnInstance)
	struct FMakeAINoiseAOESettings                     muzzleFireAINoiseSettings;                                // 0x0388(0x0010) (Edit, DisableEditOnInstance)
};

// ScriptStruct Robogore.AimAssistConfig
// 0x0028
struct FAimAssistConfig
{
	bool                                               aimAssistEnabled;                                         // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              magnetInnerRadius;                                        // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              magnetOuterRadius;                                        // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              sweetSpotRadius;                                          // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              sweetSpotLerpSpeed;                                       // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	TArray<EeTeamRelationship>                         relationshipsToAssist;                                    // 0x0018(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Robogore.AsyncAnimationInfo
// 0x0038
struct FAsyncAnimationInfo
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: SoftClassProperty Robogore.AsyncAnimationInfo.loadedAnim
	int                                                skinIndex;                                                // 0x0028(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	TWeakObjectPtr<class USkeletalMeshComponent>       MeshComponent;                                            // 0x002C(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct Robogore.AsyncMaterialInfo
// 0x0050
struct FAsyncMaterialInfo
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Robogore.AsyncMaterialInfo.loadedMaterial
	struct FSkinData                                   SkinData;                                                 // 0x0028(0x0010) (Transient)
	int                                                skinIndex;                                                // 0x0038(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FName                                       MaterialSlotName;                                         // 0x003C(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TWeakObjectPtr<class USkeletalMeshComponent>       MeshComponent;                                            // 0x0044(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
};

// ScriptStruct Robogore.AsyncMeshInfo
// 0x0048
struct FAsyncMeshInfo
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Robogore.AsyncMeshInfo.loadedMesh
	struct FSkinData                                   SkinData;                                                 // 0x0028(0x0010) (Transient)
	int                                                skinIndex;                                                // 0x0038(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	TWeakObjectPtr<class USkeletalMeshComponent>       MeshComponent;                                            // 0x003C(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
};

// ScriptStruct Robogore.AimingConfig
// 0x00D0
struct FAimingConfig
{
	float                                              yawAimCap;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              pitchAimCap;                                              // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              maxAllowedAimSuccessAngle;                                // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AIControlledAimSpeed;                                     // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              playerControlledAimSpeed;                                 // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       aimInputActionName;                                       // 0x0014(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       customAimSocketName;                                      // 0x001C(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FTickingTimer                               requiredAimTime;                                          // 0x0024(0x0008) (Edit)
	struct FTickingTimer                               resetAimTimer;                                            // 0x002C(0x0008) (Edit)
	float                                              preFirstShotWiggleAngle;                                  // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRuntimeFloatCurve                          inaccuracyCurve;                                          // 0x0038(0x0088) (Edit)
	struct FTickingTimer                               inaccuracyResetTimer;                                     // 0x00C0(0x0008) (Edit)
	struct FTickingTimer                               inaccuracyTimer;                                          // 0x00C8(0x0008) (Transient)
};

// ScriptStruct Robogore.WeaponFireConfig
// 0x0008
struct FWeaponFireConfig
{
	struct FName                                       fireWeaponInputActionName;                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Robogore.AttachedRangedWeapon
// 0x0020
struct FAttachedRangedWeapon
{
	TArray<struct FName>                               attachedSocketNames;                                      // 0x0000(0x0010) (Edit, ZeroConstructor)
	class UClass*                                      weaponClass;                                              // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class ARangedWeapon*                               instance;                                                 // 0x0018(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Robogore.WeaponAimingData
// 0x0030
struct FWeaponAimingData
{
	unsigned char                                      IsAiming : 1;                                             // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class ARangedWeapon*                               m_weapon;                                                 // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0010(0x0020) MISSED OFFSET
};

// ScriptStruct Robogore.ReadoutParameter
// 0x0020
struct FReadoutParameter
{
	struct FName                                       m_materialMeshName;                                       // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       m_parameterName;                                          // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UBaseReadoutBehaviorConfig*                  m_behaviorConfig;                                         // 0x0010(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMeshComponent*                              m_materialMesh;                                           // 0x0018(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
};

// ScriptStruct Robogore.AmmoReadoutMuzzleData
// 0x0008
struct FAmmoReadoutMuzzleData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Robogore.RepairerTimer
// 0x000C
struct FRepairerTimer
{
	struct FTickingTimer                               Timer;                                                    // 0x0000(0x0008) (Transient)
	uint16_t                                           totalRepair;                                              // 0x0008(0x0002) (ZeroConstructor, Transient, IsPlainOldData)
	uint16_t                                           appliedRepair;                                            // 0x000A(0x0002) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Robogore.RepairInfo
// 0x0018
struct FRepairInfo
{
	float                                              repairTickTimer;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	uint16_t                                           repairAmountPerSecond;                                    // 0x0004(0x0002) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
	float                                              repairDistance;                                           // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FTeamInfo                                   repairTeamInfo;                                           // 0x000C(0x0002) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x000E(0x0002) MISSED OFFSET
	TWeakObjectPtr<class AActor>                       repairTarget;                                             // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Robogore.RepairTimeInfo
// 0x0008
struct FRepairTimeInfo
{
	float                                              repairStartDelay;                                         // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              repairDuration;                                           // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Robogore.RetrievalObjectiveInstance
// 0x0048
struct FRetrievalObjectiveInstance
{
	class ARetrievalObjectiveNodeActor*                objectiveNodeActor;                                       // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	EeRetrievalObjectiveState                          State;                                                    // 0x0008(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	class AItemActor*                                  itemRepresentingObjective;                                // 0x0010(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class URuntimeInventoryComponent*                  inventoryItemIsWithin;                                    // 0x0018(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0020(0x0028) MISSED OFFSET
};

// ScriptStruct Robogore.RetrievalCoreInstance
// 0x0008
struct FRetrievalCoreInstance
{
	class ARetrievalObjectiveNodeActor*                objectiveNodeActor;                                       // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Robogore.RetrievalCoreLiftime
// 0x0008
struct FRetrievalCoreLiftime
{
	bool                                               IsCritical;                                               // 0x0000(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              lifetimeLeft;                                             // 0x0004(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Robogore.RetrievalGameFeedEventTypeData
// 0x0020
struct FRetrievalGameFeedEventTypeData
{
	struct FText                                       actionText;                                               // 0x0000(0x0018) (Edit)
	class UClass*                                      WidgetType;                                               // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Robogore.RetrievalScoreConfig
// 0x00A8
struct FRetrievalScoreConfig
{
	TMap<struct FGameplayTag, float>                   scoredItemTimeChanges;                                    // 0x0000(0x0050) (Edit, ZeroConstructor)
	TMap<EeTeamID, uint32_t>                           teamScoreLimits;                                          // 0x0050(0x0050) (Edit, ZeroConstructor)
	bool                                               addTimeForCapturesAfterTeamSwap;                          // 0x00A0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               roundWinRequiresReachingScoreLimit;                       // 0x00A1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               checkForMaxPossibleScoreWin;                              // 0x00A2(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               matchWonByReachingMaxScoreFaster;                         // 0x00A3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               matchWonByScoreInsteadOfRoundsWon;                        // 0x00A4(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00A5(0x0003) MISSED OFFSET
};

// ScriptStruct Robogore.ItemDropOffLocationConfig
// 0x0078
struct FItemDropOffLocationConfig
{
	TArray<class URuntimeInventoryItemDefinition*>     itemCollectionFilter;                                     // 0x0000(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      teamCollectionFilter;                                     // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	TMap<struct FGameplayTag, uint32_t>                itemTypeWorth;                                            // 0x0018(0x0050) (Edit, ZeroConstructor)
	TArray<struct FGameplayTag>                        itemTypesToStore;                                         // 0x0068(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Robogore.RetrievalRoundTeamScores
// 0x0008
struct FRetrievalRoundTeamScores
{
	EeTeamID                                           Team;                                                     // 0x0000(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	uint32_t                                           score;                                                    // 0x0004(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Robogore.RetrievalRoundScores
// 0x0018
struct FRetrievalRoundScores
{
	int                                                Round;                                                    // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FRetrievalRoundTeamScores>           teamScores;                                               // 0x0008(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct Robogore.MatchGenericMessage
// 0x0018
struct FMatchGenericMessage
{
	class UMatchMessageData*                           messageData;                                              // 0x0000(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FAudioEventsContainer                       genericAudioEvents;                                       // 0x0008(0x0010) (Edit)
};

// ScriptStruct Robogore.MatchPositiveNegativeGenericMessage
// 0x0030
struct FMatchPositiveNegativeGenericMessage
{
	struct FMatchGenericMessage                        positiveMessage;                                          // 0x0000(0x0018) (Edit)
	struct FMatchGenericMessage                        negativeMessage;                                          // 0x0018(0x0018) (Edit)
};

// ScriptStruct Robogore.RetrievalObjectiveStateEvents
// 0x0150
struct FRetrievalObjectiveStateEvents
{
	struct FMatchPositiveNegativeGenericMessage        onObjectiveEnabled;                                       // 0x0000(0x0030) (Edit)
	struct FMatchPositiveNegativeGenericMessage        onObjectiveCreated;                                       // 0x0030(0x0030) (Edit)
	struct FMatchPositiveNegativeGenericMessage        onObjectiveInInventory;                                   // 0x0060(0x0030) (Edit)
	struct FMatchPositiveNegativeGenericMessage        onObjectiveDroppedFromInventory;                          // 0x0090(0x0030) (Edit)
	struct FMatchPositiveNegativeGenericMessage        onObjectiveScored;                                        // 0x00C0(0x0030) (Edit)
	struct FMatchPositiveNegativeGenericMessage        onObjectiveRemovedFromGame;                               // 0x00F0(0x0030) (Edit)
	struct FMatchPositiveNegativeGenericMessage        onCoreGoingCritical;                                      // 0x0120(0x0030) (Edit)
};

// ScriptStruct Robogore.RetrievalInteractableObjectConfig
// 0x0014
struct FRetrievalInteractableObjectConfig
{
	TWeakObjectPtr<class AActor>                       interactableObjectActor;                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	EeRetrievalInteractableRespawnType                 respawnType;                                              // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              respawnTime;                                              // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              initialDelayUntilActive;                                  // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Robogore.RetrievalInteractableObjectInstance
// 0x0028
struct FRetrievalInteractableObjectInstance
{
	TWeakObjectPtr<class AActor>                       interactableObjectActor;                                  // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<TWeakObjectPtr<class UPersistentItemDataObject>> instancedPersistantData;                                  // 0x0008(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0018(0x0010) MISSED OFFSET
};

// ScriptStruct Robogore.RetrievalImplicitInventoryEntry
// 0x0010
struct FRetrievalImplicitInventoryEntry
{
	class URuntimeInventoryItemDefinition*             itemDefinition;                                           // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	uint32_t                                           itemCount;                                                // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Robogore.RetrievalLaunchPadMeshes
// 0x0010
struct FRetrievalLaunchPadMeshes
{
	struct FName                                       materialParameterName;                                    // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                colorDefinitionTag;                                       // 0x0008(0x0008) (Edit)
};

// ScriptStruct Robogore.RetrievalLaunchPadLights
// 0x0010
struct FRetrievalLaunchPadLights
{
	struct FName                                       materialParameterName;                                    // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                colorDefinitionTag;                                       // 0x0008(0x0008) (Edit)
};

// ScriptStruct Robogore.RetrievalObjectiveDecalState
// 0x000C
struct FRetrievalObjectiveDecalState
{
	bool                                               IsVisible;                                                // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               isInteracting;                                            // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	struct FGameplayTag                                colorTag;                                                 // 0x0004(0x0008) (Edit)
};

// ScriptStruct Robogore.RetrievalObjectiveBrushData
// 0x0098
struct FRetrievalObjectiveBrushData
{
	struct FSlateBrush                                 Brush;                                                    // 0x0000(0x0088) (Edit)
	bool                                               useTeamRelationship;                                      // 0x0088(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EeTeamRelationship                                 relationshipToUse;                                        // 0x0089(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x008A(0x0002) MISSED OFFSET
	struct FGameplayTag                                relationshipTagToUse;                                     // 0x008C(0x0008) (Edit)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0094(0x0004) MISSED OFFSET
};

// ScriptStruct Robogore.RetrievalScoreLocationConfig
// 0x0008
struct FRetrievalScoreLocationConfig
{
	TWeakObjectPtr<class AItemDropOffLocationActor>    ItemDropOffLocationActor;                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Robogore.SimulatedProjectileCollider
// 0x0080
struct FSimulatedProjectileCollider
{
	float                                              m_radius;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7C];                                      // 0x0004(0x007C) MISSED OFFSET
};

// ScriptStruct Robogore.RobogoreLoadedAchievements
// 0x0110
struct FRobogoreLoadedAchievements
{
	TArray<class UGameplayAchievement*>                runtimeAchievements;                                      // 0x0000(0x0010) (ZeroConstructor, Transient)
	TMap<EeSpecificGameplayAchievement, class UGameplayAchievement*> specificAchievements;                                     // 0x0010(0x0050) (ZeroConstructor, Transient)
	TArray<class UMissionChallengesAchievementData*>   missionChallengeSets;                                     // 0x0060(0x0010) (ZeroConstructor, Transient)
	TMap<struct FString, class UGameplayAchievement*>  missionCompleteAchievements;                              // 0x0070(0x0050) (ZeroConstructor, Transient)
	TMap<struct FString, class UGameplayAchievement*>  openHubAchievements;                                      // 0x00C0(0x0050) (ZeroConstructor, Transient)
};

// ScriptStruct Robogore.RobogoreAchievementStatus
// 0x0018
struct FRobogoreAchievementStatus
{
	class UGameplayAchievement*                        achievementDataAsset;                                     // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct Robogore.AudioDefaults
// 0x0018
struct FAudioDefaults
{
	struct FString                                     m_RTPCName;                                               // 0x0000(0x0010) (Edit, ZeroConstructor)
	float                                              m_defaultValue;                                           // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Robogore.AnnouncerSettings
// 0x0020
struct FAnnouncerSettings
{
	struct FText                                       m_announcerName;                                          // 0x0000(0x0018) (Edit)
	int                                                m_announcerIndex;                                         // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct Robogore.RobogoreInputKeyMapOverride
// 0x0020
struct FRobogoreInputKeyMapOverride
{
	TArray<struct FInputActionKeyMapping>              m_actionRemappings;                                       // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<struct FInputAxisKeyMapping>                m_axisRemappings;                                         // 0x0010(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Robogore.RobogoreInputKeyMapOverrides
// 0x0050
struct FRobogoreInputKeyMapOverrides
{
	TMap<struct FName, struct FRobogoreInputKeyMapOverride> m_inputOverrides;                                         // 0x0000(0x0050) (Edit, ZeroConstructor)
};

// ScriptStruct Robogore.LocalPlayerVaultState
// 0x0018
struct FLocalPlayerVaultState
{
	TArray<struct FGuid>                               entitlements;                                             // 0x0000(0x0010) (ZeroConstructor)
	int                                                currency;                                                 // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Robogore.VaultAssetInfo
// 0x0088
struct FVaultAssetInfo
{
	struct FGuid                                       Guid;                                                     // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	int                                                virtualCurrencyCost;                                      // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                realMoneyCost;                                            // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FText                                       DisplayName;                                              // 0x0018(0x0018)
	struct FText                                       DisplayDescription;                                       // 0x0030(0x0018)
	EeMtxAssetCategory                                 Category;                                                 // 0x0048(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	int                                                displaySortIndex;                                         // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FDateTime                                   refreshTime;                                              // 0x0050(0x0008) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0058(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Robogore.VaultAssetInfo.Content
	bool                                               own;                                                      // 0x0080(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0081(0x0007) MISSED OFFSET
};

// ScriptStruct Robogore.VaultCurrencyBundle
// 0x0018
struct FVaultCurrencyBundle
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct Robogore.LocalMtxCatalog
// 0x00A0
struct FLocalMtxCatalog
{
	TMap<struct FGuid, struct FVaultAssetInfo>         assetOfferings;                                           // 0x0000(0x0050) (ZeroConstructor)
	TMap<struct FString, struct FVaultCurrencyBundle>  currencyOfferings;                                        // 0x0050(0x0050) (ZeroConstructor)
};

// ScriptStruct Robogore.EffectInstanceHandle
// 0x0020
struct FEffectInstanceHandle
{
	struct FString                                     poolID;                                                   // 0x0000(0x0010) (ZeroConstructor, Transient)
	uint16_t                                           effectIndex;                                              // 0x0010(0x0002) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0012(0x0006) MISSED OFFSET
	class ARobogoreFXActor*                            actorInstance;                                            // 0x0018(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Robogore.V1WorldSpawnActorTracker
// 0x0078
struct FV1WorldSpawnActorTracker
{
	TMap<class UClass*, int>                           m_classCounts;                                            // 0x0000(0x0050) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0050(0x0028) MISSED OFFSET
};

// ScriptStruct Robogore.MissionProgress
// 0x0038
struct FMissionProgress
{
	int                                                m_currentMissionIndex;                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	EeMissionFinishedState                             m_prevMissionFinishState;                                 // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	EeRobogoreLevelType                                m_prevLevelType;                                          // 0x0005(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
	struct FString                                     m_prevLevelName;                                          // 0x0008(0x0010) (ZeroConstructor)
	EeRobogoreLevelType                                m_nextLevelType;                                          // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
	struct FString                                     m_nextLevelName;                                          // 0x0020(0x0010) (ZeroConstructor)
	unsigned char                                      m_isCampaignMissionsComplete : 1;                         // 0x0030(0x0001)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};

// ScriptStruct Robogore.CinematicLoadingLevelInfo
// 0x0050
struct FCinematicLoadingLevelInfo
{
	struct FString                                     m_nextLevelName;                                          // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
	unsigned char                                      UnknownData01[0x28];                                      // 0x0010(0x0028) UNKNOWN PROPERTY: SoftClassProperty Robogore.CinematicLoadingLevelInfo.m_loadingScreenWidget
	TArray<class UWorld*>                              m_loadedWorlds;                                           // 0x0040(0x0010) (ZeroConstructor)
};

// ScriptStruct Robogore.PS4SaveInfo
// 0x0060
struct FPS4SaveInfo
{
	int                                                m_sizeBytes;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FText                                       m_title;                                                  // 0x0008(0x0018) (Edit)
	struct FText                                       m_subtitle;                                               // 0x0020(0x0018) (Edit)
	struct FText                                       m_description;                                            // 0x0038(0x0018) (Edit)
	struct FString                                     m_iconPath;                                               // 0x0050(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Robogore.RobogoreSaveGameInfo
// 0x0120
struct FRobogoreSaveGameInfo
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0000(0x0060) MISSED OFFSET
	struct FPS4SaveInfo                                m_ps4PlayerProgressSaveInfo;                              // 0x0060(0x0060) (Edit)
	struct FPS4SaveInfo                                m_ps4PlayerSettingsSaveInfo;                              // 0x00C0(0x0060) (Edit)
};

// ScriptStruct Robogore.DefaultCrewCostume
// 0x0020
struct FDefaultCrewCostume
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty Robogore.DefaultCrewCostume.m_crewSkins
	unsigned char                                      UnknownData01[0x10];                                      // 0x0010(0x0010) UNKNOWN PROPERTY: ArrayProperty Robogore.DefaultCrewCostume.m_crewAttachments
};

// ScriptStruct Robogore.CrewDefault
// 0x0028
struct FCrewDefault
{
	class UClass*                                      m_crewClass;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FDefaultCrewCostume                         m_crewCostume;                                            // 0x0008(0x0020) (Edit)
};

// ScriptStruct Robogore.DefaultBadgeLayer
// 0x0048
struct FDefaultBadgeLayer
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Robogore.DefaultBadgeLayer.m_imageMtxAsset
	struct FVector2D                                   m_position;                                               // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   m_scale;                                                  // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              m_rotation;                                               // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                m_colorIndex;                                             // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              m_opacity;                                                // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	uint32_t                                           m_zOrder;                                                 // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Robogore.DefaultBadge
// 0x0010
struct FDefaultBadge
{
	TArray<struct FDefaultBadgeLayer>                  m_badgeLayers;                                            // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Robogore.ChallengeGuidAndSetGuid
// 0x0020
struct FChallengeGuidAndSetGuid
{
	struct FGuid                                       m_challengeGuid;                                          // 0x0000(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       m_challengeSetGuid;                                       // 0x0010(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Robogore.RobogoreOnlinePlayerBadgeAndBanner
// 0x0028
struct FRobogoreOnlinePlayerBadgeAndBanner
{
	struct FPlayerBadge                                PlayerBadge;                                              // 0x0000(0x0018)
	struct FGuid                                       playerBannerGuid;                                         // 0x0018(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Robogore.RobogoreOnlinePlayerCostumesAndEmotes
// 0x0060
struct FRobogoreOnlinePlayerCostumesAndEmotes
{
	TArray<struct FGuid>                               m_emoteArray;                                             // 0x0000(0x0010) (ZeroConstructor)
	TMap<struct FGuid, struct FSeralizableCrewCostume> m_cosmeticGroups;                                         // 0x0010(0x0050) (ZeroConstructor)
};

// ScriptStruct Robogore.RobogoreOnlinePlayerBadges
// 0x0018
struct FRobogoreOnlinePlayerBadges
{
	TArray<struct FPlayerBadge>                        m_playerBadges;                                           // 0x0000(0x0010) (ZeroConstructor)
	int                                                m_selectedBadgeIndex;                                     // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Robogore.RobogorePlayerProfileData
// 0x0088
struct FRobogorePlayerProfileData
{
	TArray<struct FGuid>                               m_emoteArray;                                             // 0x0000(0x0010) (ZeroConstructor)
	TMap<struct FGuid, struct FSeralizableCrewCostume> m_cosmeticGroups;                                         // 0x0010(0x0050) (ZeroConstructor)
	TArray<struct FPlayerBadge>                        m_playerBadges;                                           // 0x0060(0x0010) (ZeroConstructor)
	struct FGuid                                       m_playerBannerGuid;                                       // 0x0070(0x0010) (ZeroConstructor, IsPlainOldData)
	int                                                m_selectedBadgeIndex;                                     // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0084(0x0004) MISSED OFFSET
};

// ScriptStruct Robogore.RobogorePlayerRoundStats
// 0x0010
struct FRobogorePlayerRoundStats
{
	uint32_t                                           roundIndex;                                               // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class URobogoreStatSession*                        roundStatSession;                                         // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Robogore.MtxStoreItem
// 0x0070
struct FMtxStoreItem
{
	unsigned char                                      UnknownData00[0x70];                                      // 0x0000(0x0070) MISSED OFFSET
};

// ScriptStruct Robogore.MissionGameStateSaveData
// 0x0010
struct FMissionGameStateSaveData
{
	struct FString                                     playerSpawnName;                                          // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Robogore.TimedSmartObjectSaveInfo
// 0x0002
struct FTimedSmartObjectSaveInfo
{
	bool                                               IsActive;                                                 // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               IsVisible;                                                // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Robogore.TimedSmartObjectSaveData
// 0x0050
struct FTimedSmartObjectSaveData
{
	TMap<struct FString, struct FTimedSmartObjectSaveInfo> timedSmartObjectSaveInfos;                                // 0x0000(0x0050) (ZeroConstructor)
};

// ScriptStruct Robogore.InteractableSaveInfo
// 0x0003
struct FInteractableSaveInfo
{
	bool                                               IsInteractable;                                           // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	EeInteractableState                                interactableState;                                        // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               active;                                                   // 0x0002(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Robogore.InteractableSaveData
// 0x0050
struct FInteractableSaveData
{
	TMap<struct FString, struct FInteractableSaveInfo> interactablesSaveInfos;                                   // 0x0000(0x0050) (ZeroConstructor)
};

// ScriptStruct Robogore.DestructibleSaveInfo
// 0x0008
struct FDestructibleSaveInfo
{
	float                                              m_health;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int16_t                                            m_damageIndex;                                            // 0x0004(0x0002) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
};

// ScriptStruct Robogore.DestructibleSaveData
// 0x0050
struct FDestructibleSaveData
{
	TMap<class UDestructionPartitionComponent*, struct FDestructibleSaveInfo> m_destructibleSaveInfos;                                  // 0x0000(0x0050) (ZeroConstructor)
};

// ScriptStruct Robogore.ComplexDestructibleSaveInstance
// 0x0040
struct FComplexDestructibleSaveInstance
{
	struct FTransform                                  Transform;                                                // 0x0000(0x0030) (IsPlainOldData)
	uint32_t                                           currentInstanceID;                                        // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0034(0x000C) MISSED OFFSET
};

// ScriptStruct Robogore.ComplexDestructibleSaveInstances
// 0x0010
struct FComplexDestructibleSaveInstances
{
	TArray<struct FComplexDestructibleSaveInstance>    Instances;                                                // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Robogore.ComplexDestructibleSaveData
// 0x0050
struct FComplexDestructibleSaveData
{
	TMap<class UClass*, struct FComplexDestructibleSaveInstances> actorTypeToTransformsMap;                                 // 0x0000(0x0050) (ZeroConstructor)
};

// ScriptStruct Robogore.TriggerZoneSaveInfo
// 0x0001
struct FTriggerZoneSaveInfo
{
	bool                                               IsEnabled;                                                // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Robogore.TriggerZoneSaveData
// 0x0050
struct FTriggerZoneSaveData
{
	TMap<struct FString, struct FTriggerZoneSaveInfo>  triggerZoneSaveInfos;                                     // 0x0000(0x0050) (ZeroConstructor)
};

// ScriptStruct Robogore.MissionIndicatorSaveInfo
// 0x0001
struct FMissionIndicatorSaveInfo
{
	bool                                               IsEnabled;                                                // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Robogore.MissionIndicatorSaveData
// 0x0050
struct FMissionIndicatorSaveData
{
	TMap<struct FString, struct FMissionIndicatorSaveInfo> missionIndicatorSaveInfos;                                // 0x0000(0x0050) (ZeroConstructor)
};

// ScriptStruct Robogore.ObjectiveSaveInfo
// 0x0008
struct FObjectiveSaveInfo
{
	bool                                               userTimer;                                                // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               useProgressBar;                                           // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               showProgressText;                                         // 0x0002(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               showProgressBar;                                          // 0x0003(0x0001) (ZeroConstructor, IsPlainOldData)
	EeObjectiveState                                   objectiveState;                                           // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0004(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
};

// ScriptStruct Robogore.ObjectiveDescriptionSaveInfo
// 0x0004
struct FObjectiveDescriptionSaveInfo
{
	uint32_t                                           activeDetailIndex;                                        // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Robogore.ObjectiveProgressSaveInfo
// 0x000C
struct FObjectiveProgressSaveInfo
{
	int                                                CurrentValue;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaxValue;                                                 // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               showText;                                                 // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               showBar;                                                  // 0x0009(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000A(0x0002) MISSED OFFSET
};

// ScriptStruct Robogore.ObjectiveTimerSaveInfo
// 0x000C
struct FObjectiveTimerSaveInfo
{
	bool                                               isTiming;                                                 // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              currentTime;                                              // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              maxTime;                                                  // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Robogore.ObjectiveSaveData
// 0x0140
struct FObjectiveSaveData
{
	TMap<struct FString, struct FObjectiveSaveInfo>    objectiveSaveInfos;                                       // 0x0000(0x0050) (ZeroConstructor)
	TMap<struct FString, struct FObjectiveDescriptionSaveInfo> objectiveDescriptionSaveInfos;                            // 0x0050(0x0050) (ZeroConstructor)
	TMap<struct FString, struct FObjectiveProgressSaveInfo> objectiveProgressSaveInfos;                               // 0x00A0(0x0050) (ZeroConstructor)
	TMap<struct FString, struct FObjectiveTimerSaveInfo> objectiveTimerSaveInfos;                                  // 0x00F0(0x0050) (ZeroConstructor)
};

// ScriptStruct Robogore.CampaignChallengeSaveData
// 0x0008
struct FCampaignChallengeSaveData
{
	bool                                               Complete;                                                 // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	uint32_t                                           progress;                                                 // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Robogore.CampaignChallengesSaveData
// 0x0050
struct FCampaignChallengesSaveData
{
	TMap<struct FGuid, struct FCampaignChallengeSaveData> challengeSaveData;                                        // 0x0000(0x0050) (ZeroConstructor)
};

// ScriptStruct Robogore.DestructibleComponentKeyTransfrom
// 0x0040
struct FDestructibleComponentKeyTransfrom
{
	uint32_t                                           m_destructibleMappingKey;                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) MISSED OFFSET
	struct FTransform                                  m_destructibleTransform;                                  // 0x0010(0x0030) (IsPlainOldData)
};

// ScriptStruct Robogore.DestructibleComponentSaveInfo
// 0x0010
struct FDestructibleComponentSaveInfo
{
	TArray<struct FDestructibleComponentKeyTransfrom>  m_destructibleKeyTransforms;                              // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Robogore.DestructibleVehicleKeyTransfrom
// 0x0040
struct FDestructibleVehicleKeyTransfrom
{
	uint32_t                                           m_vehicleMappingKey;                                      // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) MISSED OFFSET
	struct FTransform                                  m_vehicleTransform;                                       // 0x0010(0x0030) (IsPlainOldData)
};

// ScriptStruct Robogore.DestructibleVehicleSaveInfo
// 0x0010
struct FDestructibleVehicleSaveInfo
{
	TArray<struct FDestructibleVehicleKeyTransfrom>    m_vehicleKeyTransforms;                                   // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Robogore.DestructibeSaveData
// 0x00A0
struct FDestructibeSaveData
{
	TMap<class UClass*, struct FDestructibleComponentSaveInfo> m_destructibleComponentInstanceInfo;                      // 0x0000(0x0050) (ZeroConstructor)
	TMap<class UClass*, struct FDestructibleVehicleSaveInfo> m_destructibleVehicleInstanceInfo;                        // 0x0050(0x0050) (ZeroConstructor)
};

// ScriptStruct Robogore.MissionUnitSpawnSaveInfo
// 0x00A0
struct FMissionUnitSpawnSaveInfo
{
	class UClass*                                      unitClass;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  unitTransform;                                            // 0x0010(0x0030) (IsPlainOldData)
	class ASpawnController*                            SpawnController;                                          // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	class USpawnWaveMachine*                           SpawnWaveMachine;                                         // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	class USpawn*                                      spawnOperator;                                            // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)
	EeTeamID                                           teamID;                                                   // 0x0058(0x0001) (ZeroConstructor, IsPlainOldData)
	EeCommanderID                                      commanderId;                                              // 0x0059(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x005A(0x0006) MISSED OFFSET
	TArray<struct FName>                               customTags;                                               // 0x0060(0x0010) (ZeroConstructor)
	class APathGraphActor*                             PatrolPath;                                               // 0x0070(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     HomeLocation;                                             // 0x0078(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0084(0x0004) MISSED OFFSET
	class AActor*                                      combatHomeActor;                                          // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     AttackPositionLocation;                                   // 0x0090(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
};

// ScriptStruct Robogore.MissionUnitSpawnSaveData
// 0x0010
struct FMissionUnitSpawnSaveData
{
	TArray<struct FMissionUnitSpawnSaveInfo>           unitSpawnSaveInfos;                                       // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Robogore.MissionDroneSpawnSaveInfo
// 0x0080
struct FMissionDroneSpawnSaveInfo
{
	class UClass*                                      droneClass;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  droneTransform;                                           // 0x0010(0x0030) (IsPlainOldData)
	class ASpawnController*                            SpawnController;                                          // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	class USpawnWaveMachine*                           SpawnWaveMachine;                                         // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	class USpawn*                                      spawnOperator;                                            // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)
	EeTeamID                                           teamID;                                                   // 0x0058(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0059(0x0007) MISSED OFFSET
	TArray<struct FName>                               customTags;                                               // 0x0060(0x0010) (ZeroConstructor)
	class APathGraphActor*                             PatrolPath;                                               // 0x0070(0x0008) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      combatHomeActor;                                          // 0x0078(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Robogore.MissionDroneSpawnSaveData
// 0x0010
struct FMissionDroneSpawnSaveData
{
	TArray<struct FMissionDroneSpawnSaveInfo>          droneSpawnSaveInfos;                                      // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Robogore.SpawnWaveMachineSaveInfo
// 0x0014
struct FSpawnWaveMachineSaveInfo
{
	EeSpawnWaveMachineState                            spawnWaveMachineState;                                    // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	uint32_t                                           spawnWaveCount;                                           // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           spawningSpawnLocationCount;                               // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           aliveActorCount;                                          // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           spawnedActorCount;                                        // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Robogore.SpawnWaveMachineSaveData
// 0x0050
struct FSpawnWaveMachineSaveData
{
	TMap<class USpawnWaveMachine*, struct FSpawnWaveMachineSaveInfo> spawnWaveSaveInfos;                                       // 0x0000(0x0050) (ZeroConstructor)
};

// ScriptStruct Robogore.SpawnControllerSaveInfo
// 0x0008
struct FSpawnControllerSaveInfo
{
	EeSpawnControllerState                             spawnControllerState;                                     // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      spawnWaveMachineIndex;                                    // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	uint32_t                                           currentAliveActorCount;                                   // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Robogore.SpawnControllerSaveData
// 0x0050
struct FSpawnControllerSaveData
{
	TMap<class ASpawnController*, struct FSpawnControllerSaveInfo> spawnControllerSaveInfos;                                 // 0x0000(0x0050) (ZeroConstructor)
};

// ScriptStruct Robogore.GameplayObjectControllerSaveInfo
// 0x0001
struct FGameplayObjectControllerSaveInfo
{
	EeGameplayObjectState                              m_savedState;                                             // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Robogore.GameplayObjectControllerSaveData
// 0x0050
struct FGameplayObjectControllerSaveData
{
	TMap<struct FString, struct FGameplayObjectControllerSaveInfo> m_gameplayObjectControllerSaveInfos;                      // 0x0000(0x0050) (ZeroConstructor)
};

// ScriptStruct Robogore.MissionConfigSaveData
// 0x0010
struct FMissionConfigSaveData
{
	TArray<class UClass*>                              m_playerCrewUnitClasses;                                  // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Robogore.MissionItemActorSaveInfo
// 0x0040
struct FMissionItemActorSaveInfo
{
	class UClass*                                      m_itemClass;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  m_itemTransform;                                          // 0x0010(0x0030) (IsPlainOldData)
};

// ScriptStruct Robogore.MissionItemActorManagerSaveData
// 0x0010
struct FMissionItemActorManagerSaveData
{
	TArray<struct FMissionItemActorSaveInfo>           m_missionItemSaveInfos;                                   // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Robogore.MissionDialogueSequenceActorSaveInfo
// 0x0004
struct FMissionDialogueSequenceActorSaveInfo
{
	int                                                m_index;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Robogore.MissionDialogueSequenceActorSaveData
// 0x0050
struct FMissionDialogueSequenceActorSaveData
{
	TMap<class AMissionDialogueSequenceActor*, struct FMissionDialogueSequenceActorSaveInfo> m_saveInfos;                                              // 0x0000(0x0050) (ZeroConstructor)
};

// ScriptStruct Robogore.SmartObjectAttractorSaveInfo
// 0x0001
struct FSmartObjectAttractorSaveInfo
{
	bool                                               m_isAttractive;                                           // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Robogore.SmartObjectAttractorSaveData
// 0x0050
struct FSmartObjectAttractorSaveData
{
	TMap<class UAiSmartObjectAttractorComponent*, struct FSmartObjectAttractorSaveInfo> m_smartObjectAttractorSaveData;                           // 0x0000(0x0050) (ZeroConstructor)
};

// ScriptStruct Robogore.MortalitySaveInstance
// 0x0004
struct FMortalitySaveInstance
{
	float                                              currentHealth;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Robogore.MortalitySaveData
// 0x0050
struct FMortalitySaveData
{
	TMap<class UMortalityComponent*, struct FMortalitySaveInstance> saveInstances;                                            // 0x0000(0x0050) (ZeroConstructor)
};

// ScriptStruct Robogore.PayloadSaveInfo
// 0x0060
struct FPayloadSaveInfo
{
	EeTeamID                                           m_movingTeamId;                                           // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	EeTeamID                                           m_stoppingTeamId;                                         // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xE];                                       // 0x0002(0x000E) MISSED OFFSET
	struct FTransform                                  m_payloadTransform;                                       // 0x0010(0x0030) (IsPlainOldData)
	class APayloadPathGraphActor*                      m_payloadPath;                                            // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	class UPayloadPathNodeComponent*                   m_lastPayloadNode;                                        // 0x0048(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPayloadPathNodeComponent*                   m_nextPayloadNode;                                        // 0x0050(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0058(0x0008) MISSED OFFSET
};

// ScriptStruct Robogore.PayloadSaveData
// 0x0050
struct FPayloadSaveData
{
	TMap<class APayloadActor*, struct FPayloadSaveInfo> m_payloadSaveInfos;                                       // 0x0000(0x0050) (ZeroConstructor)
};

// ScriptStruct Robogore.SpiderSpawnerSaveGameData
// 0x0050
struct FSpiderSpawnerSaveGameData
{
	TMap<class ASpiderSpawner*, bool>                  m_spiderSpawnerSaveInfo;                                  // 0x0000(0x0050) (ZeroConstructor)
};

// ScriptStruct Robogore.MissionRetrievalDropOffSaveInfo
// 0x0001
struct FMissionRetrievalDropOffSaveInfo
{
	EeMissionRetrievalDropOffState                     m_state;                                                  // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Robogore.MissionRetrievalPickupSaveInfo
// 0x0001
struct FMissionRetrievalPickupSaveInfo
{
	EeMissionRetrievalCoreCarryState                   m_state;                                                  // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Robogore.MissionRetrievalSaveData
// 0x00A0
struct FMissionRetrievalSaveData
{
	TMap<class AMissionRetrievalDropOffActor*, struct FMissionRetrievalDropOffSaveInfo> m_dropOffSaveData;                                        // 0x0000(0x0050) (ZeroConstructor)
	TMap<class AMissionRetrievalPickupActor*, struct FMissionRetrievalPickupSaveInfo> m_pickupSaveData;                                         // 0x0050(0x0050) (ZeroConstructor)
};

// ScriptStruct Robogore.MissionBoundarySaveInfo
// 0x0001
struct FMissionBoundarySaveInfo
{
	bool                                               IsEnabled;                                                // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Robogore.MissionBoundarySaveData
// 0x0050
struct FMissionBoundarySaveData
{
	TMap<class AMissionBoundaryActor*, struct FMissionBoundarySaveInfo> instanceInfo;                                             // 0x0000(0x0050) (ZeroConstructor)
};

// ScriptStruct Robogore.ScreenEdgePositionResult
// 0x0014
struct FScreenEdgePositionResult
{
	bool                                               isValidResult;                                            // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FVector2D                                   outPos;                                                   // 0x0004(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              outAngle;                                                 // 0x000C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsOnScreen;                                               // 0x0010(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
};

// ScriptStruct Robogore.RobogoreStatTimer
// 0x0028
struct FRobogoreStatTimer
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct Robogore.RobogoreStatTimerContainer
// 0x0050
struct FRobogoreStatTimerContainer
{
	TMap<struct FGameplayTag, struct FRobogoreStatTimer> timers;                                                   // 0x0000(0x0050) (ZeroConstructor, Transient)
};

// ScriptStruct Robogore.RobogoreStatPlayerListeners
// 0x0050
struct FRobogoreStatPlayerListeners
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct Robogore.RobogoreStat
// 0x0018
struct FRobogoreStat
{
	double                                             CurrentValue;                                             // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	double                                             totalValueWritten;                                        // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	uint32_t                                           numberOfWrites;                                           // 0x0010(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Robogore.RobogoreStatStore
// 0x0050
struct FRobogoreStatStore
{
	TMap<struct FGameplayTag, struct FRobogoreStat>    statValues;                                               // 0x0000(0x0050) (ZeroConstructor, Transient)
};

// ScriptStruct Robogore.RobogoreImageData
// 0x0020
struct FRobogoreImageData
{
	struct FString                                     m_resourceName;                                           // 0x0000(0x0010) (ZeroConstructor)
	TArray<unsigned char>                              m_imageData;                                              // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct Robogore.RobogoreTitleSaveData
// 0x0010
struct FRobogoreTitleSaveData
{
	TArray<struct FRobogoreImageData>                  m_collectionOfImageData;                                  // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Robogore.TrackedChallengesData
// 0x0028
struct FTrackedChallengesData
{
	TArray<struct FChallengeGuidAndSetGuid>            m_challengeGuids;                                         // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FChallengeGuidAndSetGuid>            m_recentlyUpdatedChallenges;                              // 0x0010(0x0010) (ZeroConstructor)
	unsigned char                                      m_firstTimeSetup : 1;                                     // 0x0020(0x0001)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct Robogore.RobogoreInputSettings
// 0x00E8 (0x00F0 - 0x0008)
struct FRobogoreInputSettings : public FAbstractSettings
{
	bool                                               invertVerticalLook;                                       // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               invertAltitudeControl;                                    // 0x0009(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               enableControllerFeedback;                                 // 0x000A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x000B(0x0001) MISSED OFFSET
	float                                              controllerPitchSensitivity;                               // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              controllerYawSensitivity;                                 // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              controllerExponentialRamp;                                // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               useControllerEase;                                        // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	float                                              controllerEaseAmount;                                     // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              controllerAimAssistStrength;                              // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FName                                       controllerScheme;                                         // 0x0024(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      hasDoneFirstTimeSetup : 1;                                // 0x002C(0x0001)
	unsigned char                                      UnknownData02[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
	float                                              mouseYSensitvity;                                         // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              mouseXSensitvity;                                         // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              userZoomScale;                                            // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	struct FRobogoreInputKeyMapOverrides               mouseKeyboardKeyMapBindings;                              // 0x0040(0x0050)
	TMap<struct FGameplayTag, int>                     unitAbilityBindings;                                      // 0x0090(0x0050) (ZeroConstructor)
	int                                                versionNumber;                                            // 0x00E0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x00E4(0x0004) MISSED OFFSET
	class URobogoreUserDataSaveGame*                   m_owningSaveData;                                         // 0x00E8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Robogore.RobogoreAudioSettings
// 0x0020 (0x0028 - 0x0008)
struct FRobogoreAudioSettings : public FAbstractSettings
{
	float                                              masterVolume;                                             // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              voVolume;                                                 // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              sfxVolume;                                                // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              musicVolume;                                              // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               usesPTT;                                                  // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               joinVoice;                                                // 0x0019(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x001A(0x0002) MISSED OFFSET
	int                                                announcerType;                                            // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               useSubtitles;                                             // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      hasDoneFirstTimeSetup : 1;                                // 0x0021(0x0001)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0022(0x0002) MISSED OFFSET
	int                                                versionNumber;                                            // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Robogore.RobogoreGameplaySettings
// 0x0020 (0x0028 - 0x0008)
struct FRobogoreGameplaySettings : public FAbstractSettings
{
	EeAbilityStagingMode                               m_abilityStagingMode;                                     // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	struct FGuid                                       m_adGuid;                                                 // 0x000C(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      hasDoneFirstTimeSetup : 1;                                // 0x001C(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	int                                                versionNumber;                                            // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct Robogore.RobogoreVideoSettings
// 0x0010 (0x0018 - 0x0008)
struct FRobogoreVideoSettings : public FAbstractSettings
{
	bool                                               showFPS;                                                  // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      hasDoneFirstTimeSetup : 1;                                // 0x0009(0x0001)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000A(0x0002) MISSED OFFSET
	float                                              gamma;                                                    // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              versionNumber;                                            // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Robogore.ReportedPlayers
// 0x0050
struct FReportedPlayers
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) UNKNOWN PROPERTY: SetProperty Robogore.ReportedPlayers.m_playersReportedForBadges
};

// ScriptStruct Robogore.RuntimeInventoryItemInstance
// 0x0010
struct FRuntimeInventoryItemInstance
{
	class UPersistentItemDataObject*                   m_persistentItemData;                                     // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UV1GameplayEffect*                           m_gameplayEffectInstance;                                 // 0x0008(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
};

// ScriptStruct Robogore.RuntimeInventoryItemContainer
// 0x0028
struct FRuntimeInventoryItemContainer
{
	class URuntimeInventoryComponent*                  m_inventoryComponent;                                     // 0x0000(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class URuntimeInventoryItemDefinition*             m_itemDefinition;                                         // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<struct FRuntimeInventoryItemInstance>       m_itemInstances;                                          // 0x0010(0x0010) (ZeroConstructor, Transient)
	class UV1GameplayEffect*                           m_sharedGameplayEffect;                                   // 0x0020(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
};

// ScriptStruct Robogore.RuntimeInventoryAuthorityContainer
// 0x0058
struct FRuntimeInventoryAuthorityContainer
{
	class URuntimeInventoryComponent*                  m_inventoryComponent;                                     // 0x0000(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	TMap<struct FGameplayTag, struct FRuntimeInventoryItemContainer> m_inventoryItemContainers;                                // 0x0008(0x0050) (ZeroConstructor, Transient)
};

// ScriptStruct Robogore.ReplicatedInventoryInstance
// 0x000C
struct FReplicatedInventoryInstance
{
	struct FGameplayTag                                itemTag;                                                  // 0x0000(0x0008) (Transient)
	uint32_t                                           itemCount;                                                // 0x0008(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Robogore.OptionsBoolPrerequisite
// 0x000C
struct FOptionsBoolPrerequisite
{
	struct FName                                       m_settingName;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      m_settingRequiredValue : 1;                               // 0x0008(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

// ScriptStruct Robogore.OptionsInfo
// 0x0068
struct FOptionsInfo
{
	struct FName                                       m_settingsPropertyName;                                   // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       m_defaultSettingsName;                                    // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FText                                       m_settingName;                                            // 0x0010(0x0018) (Edit)
	struct FText                                       m_settingsDescription;                                    // 0x0028(0x0018) (Edit)
	TArray<struct FOptionsBoolPrerequisite>            m_prerequisites;                                          // 0x0040(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      m_isPCOption : 1;                                         // 0x0050(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
	TArray<class USettingsOptionsInfo*>                m_subOptionsInfo;                                         // 0x0058(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor)
};

// ScriptStruct Robogore.QualityOverrides
// 0x0001
struct FQualityOverrides
{
	unsigned char                                      m_overrideOverallScaleQuality : 1;                        // 0x0000(0x0001) (Edit)
	unsigned char                                      m_overrideViewDistanceQuality : 1;                        // 0x0000(0x0001) (Edit)
	unsigned char                                      m_overrideAntiAliasingQuality : 1;                        // 0x0000(0x0001) (Edit)
	unsigned char                                      m_overrideShadowQuality : 1;                              // 0x0000(0x0001) (Edit)
	unsigned char                                      m_overridePostProcessQuality : 1;                         // 0x0000(0x0001) (Edit)
	unsigned char                                      m_overrideTextureQuality : 1;                             // 0x0000(0x0001) (Edit)
	unsigned char                                      m_overrideEffectsQuality : 1;                             // 0x0000(0x0001) (Edit)
	unsigned char                                      m_overrideFoliageQuality : 1;                             // 0x0000(0x0001) (Edit)
};

// ScriptStruct Robogore.RobogorePlayerCrewChallengesProgress
// 0x0030
struct FRobogorePlayerCrewChallengesProgress
{
	class UGameplayCrewChallengeProgressionSet*        crewProgressionSet;                                       // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FSerializedGameplayChallengeProgressionSet  statusOfCrewChallenges;                                   // 0x0008(0x0028) (Transient)
};

// ScriptStruct Robogore.RobogorePlayerSeasonalChallengesProgress
// 0x0030
struct FRobogorePlayerSeasonalChallengesProgress
{
	class UGameplayChallengeProgressionSet*            seasonalProgressionSet;                                   // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FSerializedGameplayChallengeProgressionSet  statusOfSeasonalChallenges;                               // 0x0008(0x0028) (Transient)
};

// ScriptStruct Robogore.RobogorePlayerGenericChallengeProgress
// 0x0030
struct FRobogorePlayerGenericChallengeProgress
{
	class UGameplayChallengeSet*                       genericProgressionSet;                                    // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FSerializedGameplayChallengeProgressionSet  statusOfGenericChallenges;                                // 0x0008(0x0028) (Transient)
};

// ScriptStruct Robogore.SetAndChallengeRewardInfo
// 0x0048
struct FSetAndChallengeRewardInfo
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Robogore.SetAndChallengeRewardInfo.m_challengeSet
	struct FGuid                                       m_challengeGuid;                                          // 0x0028(0x0010) (ZeroConstructor, Transient, IsPlainOldData)
	struct FGuid                                       m_rewardGuid;                                             // 0x0038(0x0010) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Robogore.ShieldRegenData
// 0x0020
struct FShieldRegenData
{
	struct FString                                     regenPerSecondParameterName;                              // 0x0000(0x0010) (Edit, ZeroConstructor)
	float                                              regenInterpolationSpeed;                                  // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              lastShieldValue;                                          // 0x0014(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              currentRPSValue;                                          // 0x0018(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              wantedRPSValue;                                           // 0x001C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Robogore.ShieldFloatParameterTrack
// 0x00B0
struct FShieldFloatParameterTrack
{
	struct FString                                     ParameterName;                                            // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FRuntimeFloatCurve                          parameterCurve;                                           // 0x0010(0x0088) (Edit)
	float                                              replacementTime;                                          // 0x0098(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              runningTime;                                              // 0x009C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              wantedValue;                                              // 0x00A0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              lastValue;                                                // 0x00A4(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              trackScalar;                                              // 0x00A8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               isBeingReplaced;                                          // 0x00AC(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               IsRunning;                                                // 0x00AD(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x00AE(0x0002) MISSED OFFSET
};

// ScriptStruct Robogore.ShieldDirectionParameterTrack
// 0x0038
struct FShieldDirectionParameterTrack
{
	struct FString                                     ParameterName;                                            // 0x0000(0x0010) (Edit, ZeroConstructor)
	float                                              replacementTime;                                          // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              runningTime;                                              // 0x0014(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     wantedDirection;                                          // 0x0018(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     lastDirection;                                            // 0x0024(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               IsRunning;                                                // 0x0030(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};

// ScriptStruct Robogore.ShieldImpactData
// 0x0198
struct FShieldImpactData
{
	struct FShieldFloatParameterTrack                  fadeParameterTrack;                                       // 0x0000(0x00B0) (Edit)
	struct FShieldFloatParameterTrack                  damageParameterTrack;                                     // 0x00B0(0x00B0) (Edit)
	struct FShieldDirectionParameterTrack              directionParameterTrack;                                  // 0x0160(0x0038) (Edit)
};

// ScriptStruct Robogore.ShieldStoredDamageEnvelope
// 0x0088
struct FShieldStoredDamageEnvelope
{
	struct FRichCurve                                  Curve;                                                    // 0x0000(0x0080) (Transient)
	float                                              scalar;                                                   // 0x0080(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              Time;                                                     // 0x0084(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Robogore.ShieldStoredDamageData
// 0x00B0
struct FShieldStoredDamageData
{
	struct FString                                     accumulatedDamageParameterName;                           // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FRuntimeFloatCurve                          damageValueStorageEnvelope;                               // 0x0010(0x0088) (Edit)
	TArray<struct FShieldStoredDamageEnvelope>         damageEnvelopes;                                          // 0x0098(0x0010) (ZeroConstructor, Transient)
	float                                              lastValue;                                                // 0x00A8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00AC(0x0004) MISSED OFFSET
};

// ScriptStruct Robogore.SpawnWaveMachineInfo
// 0x0018
struct FSpawnWaveMachineInfo
{
	class USpawnWaveMachine*                           SpawnWaveMachine;                                         // 0x0000(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               autoAdvanceToNextWaveMachine;                             // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              autoAdvanceDelay;                                         // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	uint32_t                                           autoAdvanceAliveActorCount;                               // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Robogore.ChipArray
// 0x0010
struct FChipArray
{
	TArray<class UUpgradeChipDefinition*>              availableChips;                                           // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct Robogore.UnitChipContainer
// 0x0060
struct FUnitChipContainer
{
	TArray<class UUpgradeChipDefinition*>              appliedChips;                                             // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TMap<uint32_t, struct FChipArray>                  availableChipsMap;                                        // 0x0010(0x0050) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct Robogore.ChipConfiguration
// 0x0050
struct FChipConfiguration
{
	TMap<struct FGameplayTag, struct FUnitChipContainer> m_chipConfigs;                                            // 0x0000(0x0050) (ZeroConstructor)
};

// ScriptStruct Robogore.SmartObjectData
// 0x0002
struct FSmartObjectData
{
	bool                                               m_isInteractionComplete;                                  // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	EeGameplayObjectState                              m_gameplayObjectState;                                    // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Robogore.MissionSmartObjectsData
// 0x0058
struct FMissionSmartObjectsData
{
	bool                                               m_allInteractionsComplete;                                // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TMap<struct FString, struct FSmartObjectData>      m_smartObjectsData;                                       // 0x0008(0x0050) (ZeroConstructor)
};

// ScriptStruct Robogore.PlayerProgressionMissionSmartObjectsData
// 0x0050
struct FPlayerProgressionMissionSmartObjectsData
{
	TMap<struct FString, struct FMissionSmartObjectsData> m_missionLevelSmartObjects;                               // 0x0000(0x0050) (ZeroConstructor)
};

// ScriptStruct Robogore.PlayerProgressionCampaignChallengeData
// 0x0014
struct FPlayerProgressionCampaignChallengeData
{
	struct FGuid                                       challengeGUID;                                            // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	bool                                               isUnlocked;                                               // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               IsComplete;                                               // 0x0011(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0012(0x0002) MISSED OFFSET
};

// ScriptStruct Robogore.PlayerProgressionCampaignChallengeSet
// 0x0060
struct FPlayerProgressionCampaignChallengeSet
{
	struct FGuid                                       setGuid;                                                  // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	TMap<struct FGuid, struct FPlayerProgressionCampaignChallengeData> setData;                                                  // 0x0010(0x0050) (ZeroConstructor)
};

// ScriptStruct Robogore.PlayerProgressionCampaignSingleLevelChallengeSets
// 0x0050
struct FPlayerProgressionCampaignSingleLevelChallengeSets
{
	TMap<struct FGuid, struct FPlayerProgressionCampaignChallengeSet> allSets;                                                  // 0x0000(0x0050) (ZeroConstructor)
};

// ScriptStruct Robogore.PlayerProgressionCampaignChallenges
// 0x0050
struct FPlayerProgressionCampaignChallenges
{
	TMap<struct FString, struct FPlayerProgressionCampaignSingleLevelChallengeSets> mapToProgressData;                                        // 0x0000(0x0050) (ZeroConstructor)
};

// ScriptStruct Robogore.MissionDifficulty
// 0x0010
struct FMissionDifficulty
{
	TArray<int>                                        difficulties;                                             // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Robogore.MissionDifficultyMap
// 0x0050
struct FMissionDifficultyMap
{
	TMap<struct FString, struct FMissionDifficulty>    missionCompletedifficulties;                              // 0x0000(0x0050) (ZeroConstructor)
};

// ScriptStruct Robogore.SinglePlayerProgressionData
// 0x0178
struct FSinglePlayerProgressionData
{
	struct FChipConfiguration                          m_chipConfiguration;                                      // 0x0000(0x0050)
	uint32_t                                           m_salvageCount;                                           // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           m_chipCount;                                              // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FTimespan                                   m_missionPassTime;                                        // 0x0058(0x0008) (ZeroConstructor)
	struct FString                                     m_mapReturningFrom;                                       // 0x0060(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0070(0x0004) MISSED OFFSET
	uint32_t                                           m_prevSalvageCount;                                       // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           m_prevChipCount;                                          // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                m_currentMissionIndex;                                    // 0x007C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FPlayerProgressionMissionSmartObjectsData   m_playerProgressionMissionSmartObjects;                   // 0x0080(0x0050)
	struct FPlayerProgressionCampaignChallenges        m_campaignChallenges;                                     // 0x00D0(0x0050)
	struct FMissionDifficultyMap                       m_missionCompletedDifficulties;                           // 0x0120(0x0050)
	int                                                m_currentCampaignDifficulty;                              // 0x0170(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      m_isCampaignMissionsComplete : 1;                         // 0x0174(0x0001)
	unsigned char                                      m_returningFromMission : 1;                               // 0x0174(0x0001)
	unsigned char                                      m_hasSeenChipTutorial : 1;                                // 0x0174(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0175(0x0003) MISSED OFFSET
};

// ScriptStruct Robogore.UnitSpawns
// 0x0098
struct FUnitSpawns
{
	TArray<class UClass*>                              UnitSpawns;                                               // 0x0000(0x0010) (Edit, ZeroConstructor)
	bool                                               overrideUnitSpawnParams;                                  // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	struct FUnitSpawnParameters                        unitSpawnParams;                                          // 0x0018(0x0080) (Edit)
};

// ScriptStruct Robogore.DroneSpawns
// 0x0078
struct FDroneSpawns
{
	TArray<class UClass*>                              DroneSpawns;                                              // 0x0000(0x0010) (Edit, ZeroConstructor)
	bool                                               overrideDroneSpawnParams;                                 // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	struct FDroneSpawnParameters                       droneSpawnParams;                                         // 0x0018(0x0060) (Edit)
};

// ScriptStruct Robogore.ActorSpawns
// 0x0118
struct FActorSpawns
{
	class ASpawnLocation*                              SpawnLocation;                                            // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FUnitSpawns                                 UnitSpawns;                                               // 0x0008(0x0098) (Edit)
	struct FDroneSpawns                                DroneSpawns;                                              // 0x00A0(0x0078) (Edit)
};

// ScriptStruct Robogore.SpawnInfo
// 0x0130
struct FSpawnInfo
{
	TMap<class ASpawnLocation*, struct FActorSpawns>   ActorSpawns;                                              // 0x0000(0x0050) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0xE0];                                      // 0x0050(0x00E0) MISSED OFFSET
};

// ScriptStruct Robogore.OverlapActor
// 0x0018
struct FOverlapActor
{
	class AActor*                                      Actor;                                                    // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct Robogore.ImpactParam
// 0x0014
struct FImpactParam
{
	struct FVector                                     pos;                                                      // 0x0000(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              Radius;                                                   // 0x000C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              Force;                                                    // 0x0010(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Robogore.SquadMemberInstance
// 0x0008
struct FSquadMemberInstance
{
	class AUnitBaseActor*                              unitInstance;                                             // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Robogore.SquadMemberContainer
// 0x0010
struct FSquadMemberContainer
{
	TArray<struct FSquadMemberInstance>                squadMembers;                                             // 0x0000(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct Robogore.SubtitleData
// 0x0040
struct FSubtitleData
{
	struct FString                                     subtitleName;                                             // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FText                                       subtitleSpeaker;                                          // 0x0010(0x0018) (Edit)
	struct FText                                       subtitleText;                                             // 0x0028(0x0018) (Edit)
};

// ScriptStruct Robogore.TCTeamScore
// 0x0004
struct FTCTeamScore
{
	EeTeamID                                           Team;                                                     // 0x0000(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0001(0x0001) MISSED OFFSET
	uint16_t                                           score;                                                    // 0x0002(0x0002) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Robogore.TCRoundScore
// 0x0018
struct FTCRoundScore
{
	int                                                Round;                                                    // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FTCTeamScore>                        teamScores;                                               // 0x0008(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct Robogore.TCObjectiveStatusUpdate
// 0x0068
struct FTCObjectiveStatusUpdate
{
	struct FMatchNotificationData                      notificationData;                                         // 0x0000(0x0058) (Edit)
	struct FAudioEventsContainer                       genericAudioEvents;                                       // 0x0058(0x0010) (Edit)
};

// ScriptStruct Robogore.TCPointStatusEvents
// 0x0208
struct FTCPointStatusEvents
{
	struct FTCObjectiveStatusUpdate                    onPointCaptured;                                          // 0x0000(0x0068) (Edit)
	struct FTCObjectiveStatusUpdate                    onPointLost;                                              // 0x0068(0x0068) (Edit)
	struct FTCObjectiveStatusUpdate                    onPointLostInitially;                                     // 0x00D0(0x0068) (Edit)
	struct FTCObjectiveStatusUpdate                    onFriendlyReturnToNeutral;                                // 0x0138(0x0068) (Edit)
	struct FTCObjectiveStatusUpdate                    onEnemyReturnToNeutral;                                   // 0x01A0(0x0068) (Edit)
};

// ScriptStruct Robogore.TCPointDefenseConfig
// 0x0048
struct FTCPointDefenseConfig
{
	bool                                               Enabled;                                                  // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               allowRespawn;                                             // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsCritical;                                               // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0003(0x0001) MISSED OFFSET
	float                                              delayBeforeWaveSpawns;                                    // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              respawnDelay;                                             // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TArray<class UClass*>                              defenseActorClasses;                                      // 0x0010(0x0010) (Edit, ZeroConstructor)
	struct FString                                     spawnLocationFilter;                                      // 0x0020(0x0010) (Edit, ZeroConstructor)
	class UParticleSystem*                             spawnParticle;                                            // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              spawnParticleDelay;                                       // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               spawnAudio;                                               // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Robogore.TCPointAudioAudioEvents
// 0x0020
struct FTCPointAudioAudioEvents
{
	struct FAudioEventsContainer                       positiveAudioEvents;                                      // 0x0000(0x0010) (Edit)
	struct FAudioEventsContainer                       negativeAudioEvents;                                      // 0x0010(0x0010) (Edit)
};

// ScriptStruct Robogore.TCPointDefenceAudioOnDamage
// 0x0058
struct FTCPointDefenceAudioOnDamage
{
	struct FAudioEventsContainer                       onDamageStartFriendly;                                    // 0x0000(0x0010) (Edit)
	struct FAudioEventsContainer                       onDamageStartEnemy;                                       // 0x0010(0x0010) (Edit)
	struct FAudioEventsContainer                       onDamageEndFriendly;                                      // 0x0020(0x0010) (Edit)
	struct FAudioEventsContainer                       onDamageEndEnemy;                                         // 0x0030(0x0010) (Edit)
	struct FTickingTimer                               requiredTimeForDamageEndEvent;                            // 0x0040(0x0008) (Edit)
	struct FTickingTimer                               refireCooldown;                                           // 0x0048(0x0008) (Edit)
	bool                                               takingDamage;                                             // 0x0050(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
};

// ScriptStruct Robogore.DamageableVent
// 0x0020
struct FDamageableVent
{
	class UClass*                                      m_ventClass;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class ADamageableVentActor*                        m_instance;                                               // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FName                                       m_attachSocketName;                                       // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
};

// ScriptStruct Robogore.UnitCommandAbilityData
// 0x0020
struct FUnitCommandAbilityData
{
	class UUnitAbilityComponent*                       m_unitAbility;                                            // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      m_unitAbilityClass;                                       // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                m_unitSquadIndex;                                         // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class AUnitAIController>            m_unitAIController;                                       // 0x0014(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct Robogore.UnitChatterLocImportCategoryData
// 0x0058
struct FUnitChatterLocImportCategoryData
{
	EeChatterCategory                                  Category;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TMap<struct FString, struct FString>               assetToDialogueMap;                                       // 0x0008(0x0050) (Edit, ZeroConstructor, EditConst)
};

// ScriptStruct Robogore.UnitChatterLocImportCharacterData
// 0x0060
struct FUnitChatterLocImportCharacterData
{
	struct FString                                     characterName;                                            // 0x0000(0x0010) (Edit, ZeroConstructor, EditConst)
	TMap<EeChatterCategory, struct FUnitChatterLocImportCategoryData> categoryToCategoryDataMap;                                // 0x0010(0x0050) (Edit, ZeroConstructor, EditConst)
};

// ScriptStruct Robogore.PlayChatterInfo
// 0x0003
struct FPlayChatterInfo
{
	EeChatterCategory                                  Category;                                                 // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	EeChatterLane                                      lane;                                                     // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	EeChatterPriority                                  Priority;                                                 // 0x0002(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Robogore.RequestPlayChatterInfo
// 0x0010
struct FRequestPlayChatterInfo
{
	struct FPlayChatterInfo                            PlayChatterInfo;                                          // 0x0000(0x0003)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0003(0x0001) MISSED OFFSET
	TWeakObjectPtr<class UUnitChatterComponent>        requestingUnitChatterComponent;                           // 0x0004(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Robogore.ArrayOfChipEffectsAndMods
// 0x0010
struct FArrayOfChipEffectsAndMods
{
	TArray<class UChipEffectAndModsData*>              m_arrayOfChipEffectAndModsData;                           // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct Robogore.ReplicatedCoverData
// 0x0030
struct FReplicatedCoverData
{
	class UAnimMontage*                                Montage;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       currentSection;                                           // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FRotator                                    facingRotation;                                           // 0x0010(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     coverLocation;                                            // 0x001C(0x000C) (ZeroConstructor, IsPlainOldData)
	EeUnitCoverState                                   currentCoverState;                                        // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      inLowCover : 1;                                           // 0x0029(0x0001)
	unsigned char                                      UnknownData00[0x6];                                       // 0x002A(0x0006) MISSED OFFSET
};

// ScriptStruct Robogore.DodgeAttributeContainer
// 0x0018
struct FDodgeAttributeContainer
{
	class UV1Attribute*                                m_dodgeChance;                                            // 0x0000(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UV1Attribute*                                m_cooldownMin;                                            // 0x0008(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UV1Attribute*                                m_cooldownMax;                                            // 0x0010(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
};

// ScriptStruct Robogore.EvadeAttibuteContainer
// 0x0030
struct FEvadeAttibuteContainer
{
	class UV1Attribute*                                m_damageChance;                                           // 0x0000(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UV1Attribute*                                m_lightDamageChance;                                      // 0x0008(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UV1Attribute*                                m_mediumDamageChance;                                     // 0x0010(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UV1Attribute*                                m_heavyDamageChance;                                      // 0x0018(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UV1Attribute*                                m_cooldownMin;                                            // 0x0020(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UV1Attribute*                                m_cooldownMax;                                            // 0x0028(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
};

// ScriptStruct Robogore.PingSimulationBone
// 0x001C
struct FPingSimulationBone
{
	int                                                boneIndex;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneName;                                                 // 0x0004(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x000C(0x0010) MISSED OFFSET
};

// ScriptStruct Robogore.CharacterPingDriver
// 0x0050
struct FCharacterPingDriver
{
	bool                                               m_canEverPing;                                            // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              m_pingSimulationDuration;                                 // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              m_impactPingStrength;                                     // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              m_AOEPingStrength;                                        // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              m_maxFallbackPingDistanceFromImpact;                      // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       m_pingRootBoneName;                                       // 0x0014(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	TArray<struct FPingSimulationBone>                 m_simulationBones;                                        // 0x0020(0x0010) (ZeroConstructor)
	float                                              m_disablePingCurveValue;                                  // 0x0030(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	class USkeletalMeshComponent*                      m_skeletalMesh;                                           // 0x0038(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UPhysicalAnimationComponent*                 m_physicalAnimationComponent;                             // 0x0040(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UUnitHitReactionsComponent*                  m_owningHitReactionsComponent;                            // 0x0048(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
};

// ScriptStruct Robogore.DirectionalStagger
// 0x0010
struct FDirectionalStagger
{
	TArray<class UAnimMontage*>                        m_montages;                                               // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Robogore.StaggerAttributeContainer
// 0x0010
struct FStaggerAttributeContainer
{
	TArray<class UV1Attribute*>                        m_staggerDirectionDamageRatios;                           // 0x0000(0x0010) (ExportObject, ZeroConstructor, Transient)
};

// ScriptStruct Robogore.CharacterStaggerDriver
// 0x00F8
struct FCharacterStaggerDriver
{
	unsigned char                                      m_canEverStagger : 1;                                     // 0x0000(0x0001) (Edit)
	unsigned char                                      m_staggerOnShieldDamage : 1;                              // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FDirectionalStagger                         m_staggers[0x4];                                          // 0x0008(0x0010) (Edit)
	struct FDirectionalStagger                         m_stationaryFallbackStagger;                              // 0x0048(0x0010) (Edit)
	float                                              m_AOEdamageIgnoreThreshold;                               // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFloatRange                                 m_staggerDurationRanges[0x4];                             // 0x005C(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              m_staggerTriggerDamageRatios[0x4];                        // 0x009C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              m_staggerCooldownTime;                                    // 0x00AC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              m_damageAccumulationMaxDelay;                             // 0x00B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00B4(0x0004) MISSED OFFSET
	class UClass*                                      m_critDamageGameplayEffectClass;                          // 0x00B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UGPTask_UnitStagger*                         m_staggerTask;                                            // 0x00C0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              m_staggerCooldownTimeStamp;                               // 0x00C8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              m_lastDamageTimeStamp;                                    // 0x00CC(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              m_accumulatedDamage;                                      // 0x00D0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00D4(0x0004) MISSED OFFSET
	class USkeletalMeshComponent*                      m_skeletalMesh;                                           // 0x00D8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UUnitHitReactionsComponent*                  m_hitReactionComponent;                                   // 0x00E0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	struct FStaggerAttributeContainer                  m_staggerAttributes;                                      // 0x00E8(0x0010) (Transient)
};

// ScriptStruct Robogore.UnitInformation
// 0x0068
struct FUnitInformation
{
	struct FText                                       m_unitName;                                               // 0x0000(0x0018) (Edit)
	struct FText                                       m_unitType;                                               // 0x0018(0x0018) (Edit)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0030(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Robogore.UnitInformation.m_unitImage
	TArray<struct FGameplayTag>                        m_abilityGameplayTags;                                    // 0x0058(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Robogore.AbilityInformation
// 0x0058
struct FAbilityInformation
{
	struct FText                                       m_abilityName;                                            // 0x0000(0x0018) (Edit)
	struct FText                                       m_abilityDescription;                                     // 0x0018(0x0018) (Edit)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0030(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Robogore.AbilityInformation.m_icon
};

// ScriptStruct Robogore.GPEWeaponReplacementConfig
// 0x002C
struct FGPEWeaponReplacementConfig
{
	bool                                               overrideDelayBetweenShots;                                // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              delayBetweenShots;                                        // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               overrideUseBurstFire;                                     // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               useBurstFire;                                             // 0x0009(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x000A(0x0002) MISSED OFFSET
	int                                                shotsPerBurst;                                            // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              delayBetweenBursts;                                       // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               overrideAmmoPerMagazine;                                  // 0x0014(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	int                                                ammoPerMagazine;                                          // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               overrideProjectilesPerMuzzleShot;                         // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	int                                                projectilesPerMuzzleShot;                                 // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               overrideReloadDuration;                                   // 0x0024(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
	float                                              reloadDuration;                                           // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Robogore.GPEWeaponReplacementProjectileConfig
// 0x0038
struct FGPEWeaponReplacementProjectileConfig
{
	bool                                               overrideProjectileClass;                                  // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UClass*                                      replacementProjectile;                                    // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               overrideSpeed;                                            // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              projectileSpeed;                                          // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              projectileSpeedVariance;                                  // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               overrideMaxDistance;                                      // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	float                                              maxProjectileDistance;                                    // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              maxProjectileDistanceVariance;                            // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UInstigatorEvent*>                    additionalImpactEvents;                                   // 0x0028(0x0010) (Edit, ExportObject, ZeroConstructor)
};

// ScriptStruct Robogore.GPEWeaponReplacementData
// 0x0098
struct FGPEWeaponReplacementData
{
	bool                                               replaceWeaponClass;                                       // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FName>                               attachSocketNames;                                        // 0x0008(0x0010) (Edit, ZeroConstructor)
	class UClass*                                      replacementWeaponClass;                                   // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               overrideWeaponConfig;                                     // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	struct FGPEWeaponReplacementConfig                 weaponConfig;                                             // 0x0024(0x002C) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               overrideProjectileConfig;                                 // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
	struct FGPEWeaponReplacementProjectileConfig       projectileConfig;                                         // 0x0058(0x0038) (Edit)
	class ARangedWeapon*                               weaponInstance;                                           // 0x0090(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Robogore.ChipModifier
// 0x0010
struct FChipModifier
{
	struct FGameplayTag                                m_attributeTag;                                           // 0x0000(0x0008) (Edit)
	class UV1AttributeMod*                             m_attributeModifier;                                      // 0x0008(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, NoClear, IsPlainOldData)
};

// ScriptStruct Robogore.AnimationTwinningManagementRules
// 0x0010
struct FAnimationTwinningManagementRules
{
	struct FGameplayTag                                m_animationActionTag;                                     // 0x0000(0x0008) (Edit, DisableEditOnInstance)
	float                                              m_cooldown;                                               // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      m_maxSimultaneousUses;                                    // 0x000C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct Robogore.UnitAbilityManagementRules
// 0x0030
struct FUnitAbilityManagementRules
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: SoftClassProperty Robogore.UnitAbilityManagementRules.m_abilityClassType
	float                                              m_cooldown;                                               // 0x0028(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      m_maxSimultaneousUses;                                    // 0x002C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
};

// ScriptStruct Robogore.V1InputKeyMapOverride
// 0x0020
struct FV1InputKeyMapOverride
{
	TArray<struct FInputActionKeyMapping>              m_actionRemappings;                                       // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<struct FInputAxisKeyMapping>                m_axisRemappings;                                         // 0x0010(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Robogore.V1InputKeyMapOverrides
// 0x0050
struct FV1InputKeyMapOverrides
{
	TMap<struct FName, struct FV1InputKeyMapOverride>  m_inputOverrides;                                         // 0x0000(0x0050) (Edit, ZeroConstructor)
};

// ScriptStruct Robogore.MeshColorOverride
// 0x0018
struct FMeshColorOverride
{
	class UStaticMeshComponent*                        MeshComponent;                                            // 0x0000(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	TArray<struct FColor>                              vertColors;                                               // 0x0008(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct Robogore.VisionModeConfig
// 0x0140
struct FVisionModeConfig
{
	class UObject*                                     visionModePostProcessingBlendable;                        // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      overlayWidgetClass;                                       // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      reticleClass;                                             // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              cursorSnapViewportWidth;                                  // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FCameraData                                 altCameraSettings;                                        // 0x0020(0x0060) (Edit)
	float                                              calloutAOERadius;                                         // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              calloutAOEGrowthTime;                                     // 0x0084(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              calloutAOEGrowthPower;                                    // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              calloutAOEHoldTime;                                       // 0x008C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              calloutAOEFadeOutTime;                                    // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EeCalloutTraceType                                 calloutAOETraceType;                                      // 0x0094(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               calloutScans;                                             // 0x0095(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0096(0x0002) MISSED OFFSET
	struct FTickingTimer                               BlendTime;                                                // 0x0098(0x0008) (Edit)
	TMap<EeInteractableType, class UClass*>            shaderConfigs;                                            // 0x00A0(0x0050) (Edit, ZeroConstructor)
	TMap<EeInteractableType, class UClass*>            objectConfigs;                                            // 0x00F0(0x0050) (Edit, ZeroConstructor)
};

// ScriptStruct Robogore.VisionModeTrackedObject
// 0x0018
struct FVisionModeTrackedObject
{
	class UInteractableObjectComponent*                interactableObject;                                       // 0x0000(0x0008) (Edit, ExportObject, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData)
	struct FTickingTimer                               hoverTimer;                                               // 0x0008(0x0008) (Edit, Transient, EditConst)
	struct FTickingTimer                               scanTimer;                                                // 0x0010(0x0008) (Edit, Transient, EditConst)
};

// ScriptStruct Robogore.OnScreenInteractable
// 0x0034
struct FOnScreenInteractable
{
	unsigned char                                      UnknownData00[0x34];                                      // 0x0000(0x0034) MISSED OFFSET
};

// ScriptStruct Robogore.VisionModeAOECalloutData
// 0x0028
struct FVisionModeAOECalloutData
{
	struct FVector                                     startingPosition;                                         // 0x0000(0x000C) (Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	float                                              currentRadius;                                            // 0x000C(0x0004) (Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	float                                              Timer;                                                    // 0x0010(0x0004) (Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	TArray<class UInteractableObjectComponent*>        objectsInRadius;                                          // 0x0018(0x0010) (Edit, ExportObject, ZeroConstructor, Transient, EditConst)
};

// ScriptStruct Robogore.ReloadWidgetHUDSounds
// 0x0018
struct FReloadWidgetHUDSounds
{
	class UAkAudioEvent*                               m_roundAddedWhileReloading;                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               m_reloadComplete;                                         // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               m_ammoAddedFromRegen;                                     // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Robogore.V1LineOfSightResult
// 0x008C
struct FV1LineOfSightResult
{
	unsigned char                                      UnknownData00[0x8C];                                      // 0x0000(0x008C) MISSED OFFSET
};

// ScriptStruct Robogore.AnimPostureRequest
// 0x0010
struct FAnimPostureRequest
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Robogore.AsyncAttachmentInfo
// 0x0030
struct FAsyncAttachmentInfo
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Robogore.AsyncAttachmentInfo.loadedSkeletalMesh
	TWeakObjectPtr<class USceneComponent>              SceneComponent;                                           // 0x0028(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
};

// ScriptStruct Robogore.CalculatedDamage
// 0x0008
struct FCalculatedDamage
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Robogore.AutoChipSection
// 0x0008
struct FAutoChipSection
{
	int                                                m_numberOfAppliedChips;                                   // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      m_cantChipSection : 1;                                    // 0x0004(0x0001) (Transient)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct Robogore.AutoChipData
// 0x0058
struct FAutoChipData
{
	TMap<struct FGameplayTag, struct FAutoChipSection> m_appliedChipsPerSection;                                 // 0x0000(0x0050) (ZeroConstructor, Transient)
	unsigned char                                      m_cantChipUnit : 1;                                       // 0x0050(0x0001) (Transient)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
};

// ScriptStruct Robogore.DynamicMaterialOverride
// 0x0020
struct FDynamicMaterialOverride
{
	class UMaterialInstanceDynamic*                    changeColorMatInstance;                                   // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FLinearColor                                initialColor;                                             // 0x0008(0x0010) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               hasInitialized;                                           // 0x0018(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
};

// ScriptStruct Robogore.ChangeColorMaterial
// 0x0070
struct FChangeColorMaterial
{
	struct FName                                       changeColorParamName;                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               doChangeColor;                                            // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	TArray<class UMaterialInterface*>                  changeColorMaterials;                                     // 0x0010(0x0010) (Edit, ZeroConstructor)
	TMap<struct FName, struct FDynamicMaterialOverride> materialInstances;                                        // 0x0020(0x0050) (ZeroConstructor, Transient)
};

// ScriptStruct Robogore.AnimationUpdateStateRequest
// 0x0010
struct FAnimationUpdateStateRequest
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Robogore.ChyronLocalizedStringData
// 0x0020
struct FChyronLocalizedStringData
{
	struct FString                                     languageCode;                                             // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FString                                     textString;                                               // 0x0010(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Robogore.ChyronEntry
// 0x0030
struct FChyronEntry
{
	TArray<struct FChyronLocalizedStringData>          stringData;                                               // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FGuid                                       newsGUID;                                                 // 0x0010(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	EeChyronPlatform                                   Platform;                                                 // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	struct FDateTime                                   postTime;                                                 // 0x0028(0x0008) (Edit, ZeroConstructor)
};

// ScriptStruct Robogore.ChyronNews
// 0x0010
struct FChyronNews
{
	TArray<struct FChyronEntry>                        newsEntries;                                              // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Robogore.CommandCenterEditorData
// 0x0028
struct FCommandCenterEditorData
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct Robogore.Commander
// 0x0030
struct FCommander
{
	EeCommanderID                                      m_commanderID;                                            // 0x0000(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	EeTeamID                                           m_teamID;                                                 // 0x0001(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	class UCommanderComponent*                         m_commanderInstance;                                      // 0x0008(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	TArray<TWeakObjectPtr<class AUnitAIController>>    m_commandedUnits;                                         // 0x0010(0x0010) (ZeroConstructor, Transient)
	TArray<TWeakObjectPtr<class AUnitAIController>>    m_unassignedUnits;                                        // 0x0020(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct Robogore.CommandPulseData
// 0x0040
struct FCommandPulseData
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
};

// ScriptStruct Robogore.GuidAndSkinType
// 0x0010
struct FGuidAndSkinType
{
	struct FGuid                                       m_guid;                                                   // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Robogore.CrewCostume
// 0x0020
struct FCrewCostume
{
	TArray<class UMtxAsset*>                           m_crewSkins;                                              // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<class UMtxAsset*>                           m_crewAttachments;                                        // 0x0010(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Robogore.DamageFXSpawnInfo
// 0x0048
struct FDamageFXSpawnInfo
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: SoftClassProperty Robogore.DamageFXSpawnInfo.fxActorClass
	TArray<struct FName>                               componentNames;                                           // 0x0028(0x0010) (ZeroConstructor)
	TArray<struct FName>                               socketNames;                                              // 0x0038(0x0010) (ZeroConstructor)
};

// ScriptStruct Robogore.DeathEffectsActorToSpawn
// 0x0050
struct FDeathEffectsActorToSpawn
{
	struct FName                                       Component;                                                // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FName                                       Bone;                                                     // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               orient;                                                   // 0x0010(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               attach;                                                   // 0x0011(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0012(0x0006) MISSED OFFSET
	unsigned char                                      UnknownData01[0x28];                                      // 0x0012(0x0028) UNKNOWN PROPERTY: SoftClassProperty Robogore.DeathEffectsActorToSpawn.fxActorClass
	unsigned char                                      UnknownData02[0x8];                                       // 0x0040(0x0008) MISSED OFFSET
	bool                                               wantsSpawn;                                               // 0x0048(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
};

// ScriptStruct Robogore.DebugPlotData
// 0x0058
struct FDebugPlotData
{
	unsigned char                                      UnknownData00[0x58];                                      // 0x0000(0x0058) MISSED OFFSET
};

// ScriptStruct Robogore.DebugPlotSeries
// 0x0024
struct FDebugPlotSeries
{
	unsigned char                                      UnknownData00[0x24];                                      // 0x0000(0x0024) MISSED OFFSET
};

// ScriptStruct Robogore.VisibilityUpdatedDecalCollection
// 0x0068
struct FVisibilityUpdatedDecalCollection
{
	TArray<class UDecalComponent*>                     decalComponents;                                          // 0x0000(0x0010) (ExportObject, ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x58];                                      // 0x0010(0x0058) MISSED OFFSET
};

// ScriptStruct Robogore.DifficultyManager
// 0x0010
struct FDifficultyManager
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Robogore.EffectSpawningParameters
// 0x00D0
struct FEffectSpawningParameters
{
	struct FGameplayTag                                Source;                                                   // 0x0000(0x0008) (BlueprintVisible)
	struct FGameplayTag                                Target;                                                   // 0x0008(0x0008) (BlueprintVisible)
	struct FTransform                                  Transform;                                                // 0x0010(0x0030) (BlueprintVisible, IsPlainOldData)
	TWeakObjectPtr<class AActor>                       responsibleActor;                                         // 0x0040(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // 0x0048(0x0088) (BlueprintVisible, IsPlainOldData)
};

// ScriptStruct Robogore.SerializedPlayerChallengeSets
// 0x0050
struct FSerializedPlayerChallengeSets
{
	TMap<struct FString, struct FString>               jsonSerializedChallengeSets;                              // 0x0000(0x0050) (ZeroConstructor)
};

// ScriptStruct Robogore.GameplayScoredActionInstance
// 0x0001
struct FGameplayScoredActionInstance
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Robogore.GameplayScoreSystemCache
// 0x00F0
struct FGameplayScoreSystemCache
{
	unsigned char                                      UnknownData00[0xF0];                                      // 0x0000(0x00F0) MISSED OFFSET
};

// ScriptStruct Robogore.GameplayStatQueryInstance
// 0x0040
struct FGameplayStatQueryInstance
{
	class UGameplayStatQuery*                          m_statQuery;                                              // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AGameplayPlayerController*                   m_owningController;                                       // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0010(0x0030) MISSED OFFSET
};

// ScriptStruct Robogore.GameplayStatQueryTimeLimitedValueChange
// 0x0010
struct FGameplayStatQueryTimeLimitedValueChange
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Robogore.WaterSimScopedCanvas
// 0x0030
struct FWaterSimScopedCanvas
{
	class UObject*                                     WorldContext;                                             // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextureRenderTarget2D*                      Target;                                                   // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UCanvas*                                     Canvas;                                                   // 0x0010(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector2D                                   canvasSize;                                               // 0x0018(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FDrawToRenderTargetContext                  Context;                                                  // 0x0020(0x0010) (Transient)
};

// ScriptStruct Robogore.AimUpdater
// 0x001C
struct FAimUpdater
{
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0000(0x001C) MISSED OFFSET
};

// ScriptStruct Robogore.GameModeTableRow
// 0x0010 (0x0018 - 0x0008)
struct FGameModeTableRow : public FTableRowBase
{
	struct FString                                     URL;                                                      // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Robogore.GameLevelTableRow
// 0x0010 (0x0018 - 0x0008)
struct FGameLevelTableRow : public FTableRowBase
{
	struct FString                                     URL;                                                      // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Robogore.MatchDestructibleActorToRestore
// 0x0008
struct FMatchDestructibleActorToRestore
{
	class AV1DestructibleActor*                        DestructibleActor;                                        // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Robogore.WeightedStat
// 0x0010
struct FWeightedStat
{
	struct FGameplayTag                                m_statTag;                                                // 0x0000(0x0008) (Edit)
	uint32_t                                           m_orginalValue;                                           // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              m_weightedValue;                                          // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Robogore.MovieSceneSubtitleTemplate
// 0x0008 (0x0028 - 0x0020)
struct FMovieSceneSubtitleTemplate : public FMovieSceneEvalTemplate
{
	class UMovieSceneSubtitleSection*                  Section;                                                  // 0x0020(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct Robogore.PlayerStateStat
// 0x0030
struct FPlayerStateStat
{
	struct FString                                     m_playerName;                                             // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor, Transient)
	int                                                m_gravcyclekills;                                         // 0x0010(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	int                                                m_unitKills;                                              // 0x0014(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	int                                                m_deaths;                                                 // 0x0018(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	int                                                m_damageDealt;                                            // 0x001C(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	int                                                m_unitsDamageDealt;                                       // 0x0020(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	int                                                m_healingDealt;                                           // 0x0024(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	int                                                m_flagsCaptured;                                          // 0x0028(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	int                                                m_territoriesCaptured;                                    // 0x002C(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Robogore.ProjectileImpactData
// 0x0034
struct FProjectileImpactData
{
	unsigned char                                      UnknownData00[0x34];                                      // 0x0000(0x0034) MISSED OFFSET
};

// ScriptStruct Robogore.RadarSegment
// 0x0014
struct FRadarSegment
{
	struct FVector2D                                   m_range;                                                  // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               m_isOccupied;                                             // 0x0008(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	struct FTickingTimer                               m_clearTimer;                                             // 0x000C(0x0008) (Transient)
};

// ScriptStruct Robogore.RobogoreDisplayStat
// 0x0020
struct FRobogoreDisplayStat
{
	uint32_t                                           Value;                                                    // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FText                                       DisplayName;                                              // 0x0008(0x0018) (Transient)
};

// ScriptStruct Robogore.MtxLoadedAssetStatus
// 0x0001
struct FMtxLoadedAssetStatus
{
	unsigned char                                      m_assetIsLoaded : 1;                                      // 0x0000(0x0001) (Transient)
	unsigned char                                      m_assetWillNotLoad : 1;                                   // 0x0000(0x0001) (Transient)
};

// ScriptStruct Robogore.ScopedCanvas
// 0x0030
struct FScopedCanvas
{
	class UObject*                                     WorldContext;                                             // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextureRenderTarget2D*                      Target;                                                   // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UCanvas*                                     Canvas;                                                   // 0x0010(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector2D                                   canvasSize;                                               // 0x0018(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FDrawToRenderTargetContext                  Context;                                                  // 0x0020(0x0010) (Transient)
};

// ScriptStruct Robogore.ReticleSnappedActor
// 0x0040
struct FReticleSnappedActor
{
	TWeakObjectPtr<class AActor>                       Actor;                                                    // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	EeReticleSnapType                                  snapType;                                                 // 0x0008(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	struct FOnScreenInteractable                       OnScreenInteractable;                                     // 0x000C(0x0034) (Transient)
};

// ScriptStruct Robogore.QueuedDroneSpawn
// 0x00A0
struct FQueuedDroneSpawn
{
	class UClass*                                      droneClass;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  spawnTranform;                                            // 0x0010(0x0030) (IsPlainOldData)
	struct FDroneSpawnParameters                       droneSpawnParams;                                         // 0x0040(0x0060)
};

// ScriptStruct Robogore.QueuedUnitSpawn
// 0x00C0
struct FQueuedUnitSpawn
{
	class UClass*                                      unitClass;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  spawnTranform;                                            // 0x0010(0x0030) (IsPlainOldData)
	struct FUnitSpawnParameters                        unitSpawnParams;                                          // 0x0040(0x0080)
};

// ScriptStruct Robogore.StatData
// 0x0010
struct FStatData
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Robogore.TCObjectiveStatusFeedback
// 0x0018
struct FTCObjectiveStatusFeedback
{
	class UTCObjectiveStatusMultiplayerMessage*        objectiveStatusData;                                      // 0x0000(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FAudioEventsContainer                       genericAudioEvents;                                       // 0x0008(0x0010) (Edit)
};

// ScriptStruct Robogore.TransformReference
// 0x0030
struct FTransformReference
{
	class AActor*                                      m_actor;                                                  // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FComponentReference                         m_componentReference;                                     // 0x0008(0x0018) (Transient)
	class UMeshComponent*                              m_mesh;                                                   // 0x0020(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	struct FName                                       m_socketName;                                             // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Robogore.UnitAbilityPredictionResult
// 0x00F8
struct FUnitAbilityPredictionResult
{
	unsigned char                                      UnknownData00[0xF8];                                      // 0x0000(0x00F8) MISSED OFFSET
};

// ScriptStruct Robogore.UnitChatterLocImportCategoryDefinition
// 0x000C
struct FUnitChatterLocImportCategoryDefinition
{
	EeChatterCategory                                  Category;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	uint32_t                                           startRowIndex;                                            // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	uint32_t                                           endRowIndex;                                              // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Robogore.UnitChatterLocImportCharacterDefinition
// 0x0018
struct FUnitChatterLocImportCharacterDefinition
{
	struct FString                                     characterName;                                            // 0x0000(0x0010) (Edit, ZeroConstructor)
	uint32_t                                           dialogueColumnIndex;                                      // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	uint32_t                                           isFinalizedColumnIndex;                                   // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Robogore.CoverAnimSections
// 0x0001
struct FCoverAnimSections
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Robogore.V1AbilityTargetData_ContextTarget
// 0x0138 (0x0140 - 0x0008)
struct FV1AbilityTargetData_ContextTarget : public FGameplayAbilityTargetData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FGameplayAbilityTargetingLocationInfo       SourceInfo;                                               // 0x0010(0x0070) (Edit, BlueprintVisible)
	struct FGameplayAbilityTargetingLocationInfo       TargetInfo;                                               // 0x0080(0x0070) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x50];                                      // 0x00F0(0x0050) MISSED OFFSET
};

// ScriptStruct Robogore.TargetingConfig
// 0x0008
struct FTargetingConfig
{
	class UClass*                                      m_targetingBehaviorCollection;                            // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Robogore.V1AIContext
// 0x0018
struct FV1AIContext
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct Robogore.SelectedThought
// 0x0060
struct FSelectedThought
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0000(0x0060) MISSED OFFSET
};

// ScriptStruct Robogore.V1MovieSceneMediaSectionParams
// 0x0030
struct FV1MovieSceneMediaSectionParams
{
	class UMediaSoundComponent*                        MediaSoundComponent;                                      // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMediaSource*                                MediaSource;                                              // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMediaTexture*                               MediaTexture;                                             // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     Proxy;                                                    // 0x0018(0x0010) (ZeroConstructor)
	struct FFrameNumber                                SectionStartFrame;                                        // 0x0028(0x0004)
	struct FFrameNumber                                SectionEndFrame;                                          // 0x002C(0x0004)
};

// ScriptStruct Robogore.V1MovieSceneMediaSectionTemplate
// 0x0038 (0x0058 - 0x0020)
struct FV1MovieSceneMediaSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FV1MovieSceneMediaSectionParams             Params;                                                   // 0x0020(0x0030)
	class UV1MovieSceneMediaSection*                   Section;                                                  // 0x0050(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct Robogore.V1SpawnActorParameters
// 0x0090
struct FV1SpawnActorParameters
{
	unsigned char                                      UnknownData00[0x90];                                      // 0x0000(0x0090) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
