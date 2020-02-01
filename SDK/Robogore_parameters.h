#pragma once

#include "../SDK.h"

// Name: Robogore, Version: 1.1.176

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function Robogore.AchievementsMenu.OnPressedTile
struct UAchievementsMenu_OnPressedTile_Params
{
	class UWidget**                                    PressedWidget;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Robogore.AchievementsMenu.OnHoveredTile
struct UAchievementsMenu_OnHoveredTile_Params
{
	class UWidget**                                    HoveredWidget;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Robogore.AchievementsMenu.OnHoveredAchievementTile_BP
struct UAchievementsMenu_OnHoveredAchievementTile_BP_Params
{
	struct FAchievementData*                           Data;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Robogore.AchievementTileWidget.SetAchievementTileData_BP
struct UAchievementTileWidget_SetAchievementTileData_BP_Params
{
	struct FAchievementData*                           Data;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Robogore.RobogoreUserWidget.GotoParentWidget
struct URobogoreUserWidget_GotoParentWidget_Params
{
};

// Function Robogore.ActorIdentifierCombinedWidgetComponent.GetActorType
struct UActorIdentifierCombinedWidgetComponent_GetActorType_Params
{
	struct FText                                       ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function Robogore.ActorIdentifierCombinedWidgetComponent.GetActorName
struct UActorIdentifierCombinedWidgetComponent_GetActorName_Params
{
	struct FText                                       ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function Robogore.ActorIdentifierCombinedWidgetComponent.GetActorIconBrush
struct UActorIdentifierCombinedWidgetComponent_GetActorIconBrush_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function Robogore.ActorMortalityHitPipWidget.OnAnimationComplete
struct UActorMortalityHitPipWidget_OnAnimationComplete_Params
{
};

// Function Robogore.ActorMortalityWidget.OnUnderEffectHealthDamageTaken
struct UActorMortalityWidget_OnUnderEffectHealthDamageTaken_Params
{
	struct FGameplayTag*                               categoryTag;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Robogore.ActorMortalityWidget.OnShieldDamageTaken
struct UActorMortalityWidget_OnShieldDamageTaken_Params
{
};

// Function Robogore.ActorMortalityWidget.OnRegenerateShield
struct UActorMortalityWidget_OnRegenerateShield_Params
{
};

// Function Robogore.ActorMortalityWidget.OnRegenerateHealth
struct UActorMortalityWidget_OnRegenerateHealth_Params
{
};

// Function Robogore.ActorMortalityWidget.OnHealthDamageTaken
struct UActorMortalityWidget_OnHealthDamageTaken_Params
{
};

// Function Robogore.AimTargetableComponent.S_GetDefaultTargetAimLocation
struct UAimTargetableComponent_S_GetDefaultTargetAimLocation_Params
{
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.AIOrderBase.SetStatus
struct UAIOrderBase_SetStatus_Params
{
	EeOrderStatus*                                     Status;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.AIOrderBase.IsPending
struct UAIOrderBase_IsPending_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.AIOrderBase.GetStatus
struct UAIOrderBase_GetStatus_Params
{
	EeOrderStatus                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.AIOrderBase.CopyDataFrom
struct UAIOrderBase_CopyDataFrom_Params
{
	class UAIOrderBase**                               from;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.AIOrdersComponent.SetOrderStatus
struct UAIOrdersComponent_SetOrderStatus_Params
{
	class UClass**                                     orderType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	EeOrderStatus*                                     newStatus;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.AIOrdersComponent.HasPendingOrder
struct UAIOrdersComponent_HasPendingOrder_Params
{
	class UClass**                                     orderType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.AIOrdersComponent.HasAnyOrder
struct UAIOrdersComponent_HasAnyOrder_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.AIOrdersComponent.GiveOrder
struct UAIOrdersComponent_GiveOrder_Params
{
	class UAIOrderBase**                               Order;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              clearAllOtherOrders;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.AIOrdersComponent.GetOrderStatus
struct UAIOrdersComponent_GetOrderStatus_Params
{
	class UClass**                                     orderType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	EeOrderStatus                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.AIOrdersComponent.GetOrder
struct UAIOrdersComponent_GetOrder_Params
{
	class UClass**                                     orderType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAIOrderBase*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.AIOrdersComponent.CompleteOrder
struct UAIOrdersComponent_CompleteOrder_Params
{
	class UClass**                                     orderType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.AIOrdersComponent.CancelOrder
struct UAIOrdersComponent_CancelOrder_Params
{
	class UClass**                                     orderType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.AISkillBase.PerformRelevanceCheck
struct UAISkillBase_PerformRelevanceCheck_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.AISkillBase.OnUpdate
struct UAISkillBase_OnUpdate_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	EeSkillResult                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.AISkillBase.OnFinished
struct UAISkillBase_OnFinished_Params
{
	EeSkillResult*                                     skillResult;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.AISkillBase.OnExecute
struct UAISkillBase_OnExecute_Params
{
};

// Function Robogore.AnimPostureDriver.OnRep_ActivePosture
struct UAnimPostureDriver_OnRep_ActivePosture_Params
{
};

// Function Robogore.ProjectileActor.RemoteDud
struct AProjectileActor_RemoteDud_Params
{
};

// Function Robogore.ProjectileActor.RemoteDetonate
struct AProjectileActor_RemoteDetonate_Params
{
};

// Function Robogore.ProjectileActor.OnRep_ProjectileSeed
struct AProjectileActor_OnRep_ProjectileSeed_Params
{
};

// Function Robogore.ProjectileActor.NetMulticast_SetTarget
struct AProjectileActor_NetMulticast_SetTarget_Params
{
	class USceneComponent**                            targetComponent;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Robogore.ProjectileActor.NetMulticast_OnImpact
struct AProjectileActor_NetMulticast_OnImpact_Params
{
	struct FVector_NetQuantize*                        ImpactPoint;                                              // (Parm)
	bool*                                              forceBlockingHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.ProjectileActor.NetMulticast_OnDud
struct AProjectileActor_NetMulticast_OnDud_Params
{
	struct FVector_NetQuantize*                        ImpactPoint;                                              // (Parm)
};

// Function Robogore.ProjectileActor.GetProjectileStickInfo
struct AProjectileActor_GetProjectileStickInfo_Params
{
	struct FProjectileStickInfo                        ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function Robogore.ProjectileActor.GetProjectilePierceInfo
struct AProjectileActor_GetProjectilePierceInfo_Params
{
	struct FProjectilePierceInfo                       ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function Robogore.ProjectileActor.GetProjectileBounceInfo
struct AProjectileActor_GetProjectileBounceInfo_Params
{
	struct FProjectileBounceInfo                       ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function Robogore.ProjectileActor.GetOwningWeapon
struct AProjectileActor_GetOwningWeapon_Params
{
	class ARangedWeapon*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.ProjectileActor.GetImpactResponse
struct AProjectileActor_GetImpactResponse_Params
{
	EeProjectileImpactResponse                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.ProjectileActor.Event_ProcessHit
struct AProjectileActor_Event_ProcessHit_Params
{
	struct FHitResult*                                 HitResult;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Robogore.ProjectileActor.Event_OnStick
struct AProjectileActor_Event_OnStick_Params
{
	struct FHitResult*                                 HitResult;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Robogore.ProjectileActor.Event_OnProjectileSpawn
struct AProjectileActor_Event_OnProjectileSpawn_Params
{
};

// Function Robogore.ProjectileActor.Event_OnPierce
struct AProjectileActor_Event_OnPierce_Params
{
	struct FHitResult*                                 HitResult;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Robogore.ProjectileActor.Event_OnDud
struct AProjectileActor_Event_OnDud_Params
{
	struct FHitResult*                                 HitResult;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Robogore.ProjectileActor.Event_OnBounce
struct AProjectileActor_Event_OnBounce_Params
{
	struct FHitResult*                                 HitResult;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Robogore.ProjectileActor.Event_OnBlockingHit
struct AProjectileActor_Event_OnBlockingHit_Params
{
	struct FHitResult*                                 HitResult;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Robogore.MtxMenu.OnReleasedTile
struct UMtxMenu_OnReleasedTile_Params
{
	class UWidget**                                    ReleasedWidget;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Robogore.MtxMenu.OnPressedTile
struct UMtxMenu_OnPressedTile_Params
{
	class UWidget**                                    PressedWidget;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Robogore.MtxMenu.OnHoveredTile
struct UMtxMenu_OnHoveredTile_Params
{
	class UWidget**                                    HoveredWidget;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Robogore.MtxMenu.FailUnlockMtxChallengeBP
struct UMtxMenu_FailUnlockMtxChallengeBP_Params
{
};

// Function Robogore.Audio_Play2DSound.OnAudioFinished
struct UAudio_Play2DSound_OnAudioFinished_Params
{
	class UAudioComponent**                            AudioComponent;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Robogore.BackendLoginWidget.OnLoginCompleteOnline
struct UBackendLoginWidget_OnLoginCompleteOnline_Params
{
};

// Function Robogore.BackendLoginWidget.OnLoginCompleteLAN
struct UBackendLoginWidget_OnLoginCompleteLAN_Params
{
};

// Function Robogore.BackendLoginWidget.OnLoginAnimationComplete
struct UBackendLoginWidget_OnLoginAnimationComplete_Params
{
};

// Function Robogore.BackendLoginWidget.OnAttemptLogin
struct UBackendLoginWidget_OnAttemptLogin_Params
{
};

// Function Robogore.RobogorePlayerController.V1RC
struct ARobogorePlayerController_V1RC_Params
{
	struct FString*                                    consoleCommand;                                           // (Parm, ZeroConstructor)
};

// Function Robogore.RobogorePlayerController.UpdateControllerPairing
struct ARobogorePlayerController_UpdateControllerPairing_Params
{
	bool*                                              paired;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.RobogorePlayerController.ToggleVoiceEcho
struct ARobogorePlayerController_ToggleVoiceEcho_Params
{
};

// Function Robogore.RobogorePlayerController.ServerV1RC
struct ARobogorePlayerController_ServerV1RC_Params
{
	struct FString*                                    consoleCommand;                                           // (Parm, ZeroConstructor)
};

// Function Robogore.RobogorePlayerState.Server_SetTeamIndex
struct ARobogorePlayerState_Server_SetTeamIndex_Params
{
	EeTeamID*                                          newTeamIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.RobogorePlayerState.GetTeamIndex
struct ARobogorePlayerState_GetTeamIndex_Params
{
	EeTeamID                                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.BadgeEditorMenu.OnLayerTilePressed
struct UBadgeEditorMenu_OnLayerTilePressed_Params
{
	class UWidget**                                    Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Robogore.BadgeEditorMenu.OnLayerTileHovered
struct UBadgeEditorMenu_OnLayerTileHovered_Params
{
	class UWidget**                                    Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Robogore.BadgeEditorMenu.OnLayerImageChange
struct UBadgeEditorMenu_OnLayerImageChange_Params
{
	int*                                               LayerIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.BadgeEditorMenu.OnLayerColorChange
struct UBadgeEditorMenu_OnLayerColorChange_Params
{
	struct FColor*                                     Color;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int*                                               LayerIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.BadgeEditorMenu.OnImageTilePressed
struct UBadgeEditorMenu_OnImageTilePressed_Params
{
	class UWidget**                                    Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Robogore.BadgeEditorMenu.OnImageTileHoverd
struct UBadgeEditorMenu_OnImageTileHoverd_Params
{
	class UWidget**                                    Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Robogore.BadgeEditorMenu.OnColorTilePressed
struct UBadgeEditorMenu_OnColorTilePressed_Params
{
	class UWidget**                                    Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Robogore.BadgeEditorMenu.OnColorTileHovered
struct UBadgeEditorMenu_OnColorTileHovered_Params
{
	class UWidget**                                    Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Robogore.BadgeSavePopupMenu.OnSaveButtonClicked
struct UBadgeSavePopupMenu_OnSaveButtonClicked_Params
{
};

// Function Robogore.BadgeSavePopupMenu.OnContinueButtonPressed
struct UBadgeSavePopupMenu_OnContinueButtonPressed_Params
{
};

// Function Robogore.BadgeSavePopupMenu.OnCancelButtonPressed
struct UBadgeSavePopupMenu_OnCancelButtonPressed_Params
{
};

// Function Robogore.BadgeSelectionMenu.OnBadgeTilePressed
struct UBadgeSelectionMenu_OnBadgeTilePressed_Params
{
	class UWidget**                                    Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Robogore.BadgeSelectionMenu.OnBadgeTileHovered
struct UBadgeSelectionMenu_OnBadgeTileHovered_Params
{
	class UWidget**                                    Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Robogore.BaseOffscreenWidget.SetTeamRelationship
struct UBaseOffscreenWidget_SetTeamRelationship_Params
{
	EeTeamRelationship*                                teamRelationship;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.BaseOffscreenWidget.SetRangeValue
struct UBaseOffscreenWidget_SetRangeValue_Params
{
	float*                                             Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.BaseOffscreenWidget.SetDisplayAngle
struct UBaseOffscreenWidget_SetDisplayAngle_Params
{
	float*                                             Angle;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.IndicatorWidgetComponent.GetOnScreenWidget
struct UIndicatorWidgetComponent_GetOnScreenWidget_Params
{
	class UIndicatorWidget*                            ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Robogore.IndicatorWidgetComponent.GetOffscreenWidget
struct UIndicatorWidgetComponent_GetOffscreenWidget_Params
{
	class UBaseOffscreenWidget*                        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Robogore.BTDecorator_OnV1Event.EventFired
struct UBTDecorator_OnV1Event_EventFired_Params
{
	class UV1EventBase**                               evn;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.UnitAbilityComponent.Server_ActivateAbility
struct UUnitAbilityComponent_Server_ActivateAbility_Params
{
};

// Function Robogore.UnitAbilityComponent.OnRep_PercentStockServerOverride
struct UUnitAbilityComponent_OnRep_PercentStockServerOverride_Params
{
};

// Function Robogore.UnitAbilityComponent.NetMulticast_SetDesiredAbilityState
struct UUnitAbilityComponent_NetMulticast_SetDesiredAbilityState_Params
{
	EeUnitAbilityState*                                desiredState;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.UnitAbilityComponent.NetMulticast_ForceRegenRPC
struct UUnitAbilityComponent_NetMulticast_ForceRegenRPC_Params
{
};

// Function Robogore.UnitAbilityComponent.GetStockPercentage
struct UUnitAbilityComponent_GetStockPercentage_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.UnitAbilityComponent.GetHUDAccentColor
struct UUnitAbilityComponent_GetHUDAccentColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.UnitAbilityComponent.GetAbilityIconTexture
struct UUnitAbilityComponent_GetAbilityIconTexture_Params
{
	class UTexture*                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.UnitAbilityComponent.GetAbilityHUDMaterial
struct UUnitAbilityComponent_GetAbilityHUDMaterial_Params
{
	class UMaterialInterface*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.UnitAbilityComponent.ApplyForceReviveRegenTime
struct UUnitAbilityComponent_ApplyForceReviveRegenTime_Params
{
};

// Function Robogore.CampaignAfterMissionReportMenu.OnCrewLevelUp_BP
struct UCampaignAfterMissionReportMenu_OnCrewLevelUp_BP_Params
{
	int*                                               newCrewLevel;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.CampaignChipTile.SetChipTileData_BP
struct UCampaignChipTile_SetChipTileData_BP_Params
{
	struct FChipTileData*                              Data;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Robogore.CampaignChipTile.OnChipAppliedValueChange_BP
struct UCampaignChipTile_OnChipAppliedValueChange_BP_Params
{
	bool*                                              isApplied;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.CampaignDifficultyMenu.OnDifficultyWidgetPressed
struct UCampaignDifficultyMenu_OnDifficultyWidgetPressed_Params
{
	class UWidget**                                    Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Robogore.CampaignDifficultyMenu.OnDifficultyWidgetHovered
struct UCampaignDifficultyMenu_OnDifficultyWidgetHovered_Params
{
	class UWidget**                                    Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Robogore.CampaignMainMenu.OnNewGamePressed
struct UCampaignMainMenu_OnNewGamePressed_Params
{
};

// Function Robogore.CampaignMainMenu.OnContinuePressed
struct UCampaignMainMenu_OnContinuePressed_Params
{
};

// Function Robogore.CampaignMapTile.OnButtonPressed
struct UCampaignMapTile_OnButtonPressed_Params
{
};

// Function Robogore.CampaignMapTile.OnButtonHovered
struct UCampaignMapTile_OnButtonHovered_Params
{
};

// Function Robogore.CampaignMissionSelectionMenu.OnListItemSelected
struct UCampaignMissionSelectionMenu_OnListItemSelected_Params
{
	class UWidget**                                    Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Robogore.CampaignMissionSelectionMenu.OnListItemHovered
struct UCampaignMissionSelectionMenu_OnListItemHovered_Params
{
	class UWidget**                                    Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Robogore.CampaignProgressionChipMenu.UpdateMenuValues
struct UCampaignProgressionChipMenu_UpdateMenuValues_Params
{
};

// Function Robogore.CampaignProgressionChipMenu.OnReleasedTile
struct UCampaignProgressionChipMenu_OnReleasedTile_Params
{
	class UWidget**                                    releaseWidget;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Robogore.CampaignProgressionChipMenu.OnPressedTile
struct UCampaignProgressionChipMenu_OnPressedTile_Params
{
	class UWidget**                                    PressedWidget;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Robogore.CampaignProgressionChipMenu.OnHoveredTile
struct UCampaignProgressionChipMenu_OnHoveredTile_Params
{
	class UWidget**                                    HoveredWidget;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Robogore.CampaignProgressionChipMenu.DebugAddSalvage
struct UCampaignProgressionChipMenu_DebugAddSalvage_Params
{
	int*                                               Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.CampaignProgressionChipMenu.DebugAddChips
struct UCampaignProgressionChipMenu_DebugAddChips_Params
{
	int*                                               Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.CampaignProgressionMenu.OnStartMissionButtonPressed
struct UCampaignProgressionMenu_OnStartMissionButtonPressed_Params
{
};

// Function Robogore.CampaignProgressionMenu.OnSelectMissionButtonPressed
struct UCampaignProgressionMenu_OnSelectMissionButtonPressed_Params
{
};

// Function Robogore.CampaignTutorialPrompt.OnYes
struct UCampaignTutorialPrompt_OnYes_Params
{
};

// Function Robogore.CampaignTutorialPrompt.OnNo
struct UCampaignTutorialPrompt_OnNo_Params
{
};

// Function Robogore.CampaignUnitTile.SetUnitTileData_BP
struct UCampaignUnitTile_SetUnitTileData_BP_Params
{
	struct FUnitData*                                  Data;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Robogore.CampaignUnitTile.OnCampaignUnitTileSelected
struct UCampaignUnitTile_OnCampaignUnitTileSelected_Params
{
	bool*                                              isSelected;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.CaptureAreaActor.GetCaptureAreaComponent
struct ACaptureAreaActor_GetCaptureAreaComponent_Params
{
	class UCaptureAreaComponent*                       ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Robogore.CaptureAreaComponent.OnCaptureAreaEndOverlap
struct UCaptureAreaComponent_OnCaptureAreaEndOverlap_Params
{
	struct FV1OverlapInfo*                             overlapInfo;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	class UV1OverlapComponent**                        V1OverlapComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Robogore.CaptureAreaComponent.OnCaptureAreaBeginOverlap
struct UCaptureAreaComponent_OnCaptureAreaBeginOverlap_Params
{
	struct FV1OverlapInfo*                             overlapInfo;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	class UV1OverlapComponent**                        V1OverlapComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Robogore.CaptureAreaComponent.NetMulticast_OnCaptureStateChange
struct UCaptureAreaComponent_NetMulticast_OnCaptureStateChange_Params
{
	EeCaptureAreaCaptureState*                         oldState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	EeCaptureAreaCaptureState*                         NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	EeTeamID*                                          previousTeamAttempting;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	EeTeamID*                                          teamAttempting;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	EeTeamID*                                          previousTeamInControl;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	EeTeamID*                                          teamInControl;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              isGameplayChange;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.CaptureAreaComponent.IsContested
struct UCaptureAreaComponent_IsContested_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.CaptureAreaComponent.IsCommanderInArea
struct UCaptureAreaComponent_IsCommanderInArea_Params
{
	EeCommanderID*                                     Commander;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.CaptureAreaComponent.GetTeamInControl
struct UCaptureAreaComponent_GetTeamInControl_Params
{
	EeTeamID                                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.CaptureAreaComponent.GetTeamForColoring
struct UCaptureAreaComponent_GetTeamForColoring_Params
{
	EeTeamID                                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.CaptureAreaComponent.GetTeamAttemptingControl
struct UCaptureAreaComponent_GetTeamAttemptingControl_Params
{
	EeTeamID                                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.CaptureAreaComponent.GetCaptureState
struct UCaptureAreaComponent_GetCaptureState_Params
{
	EeCaptureAreaCaptureState                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.CaptureAreaComponent.GetCaptureRatio
struct UCaptureAreaComponent_GetCaptureRatio_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.CaptureAreaComponent.CountOfCommandersInArea
struct UCaptureAreaComponent_CountOfCommandersInArea_Params
{
	EeTeamID*                                          Team;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.ChallengeCollapsingWidget.OnCollapseChangeBP
struct UChallengeCollapsingWidget_OnCollapseChangeBP_Params
{
	bool*                                              isCollapsed;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.ChallengeInteractionOverlayWidget.OnShowChallengeInfo
struct UChallengeInteractionOverlayWidget_OnShowChallengeInfo_Params
{
};

// Function Robogore.ChallengeInteractionOverlayWidget.OnHideChallengeInfo
struct UChallengeInteractionOverlayWidget_OnHideChallengeInfo_Params
{
};

// Function Robogore.ChallengeMenu.OnSetWidgetPressed
struct UChallengeMenu_OnSetWidgetPressed_Params
{
	class UWidget**                                    Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Robogore.ChallengeMenu.OnSetWidgetHovered
struct UChallengeMenu_OnSetWidgetHovered_Params
{
	class UWidget**                                    Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Robogore.ChallengeMenu.OnChallengeTilePressed
struct UChallengeMenu_OnChallengeTilePressed_Params
{
	class UWidget**                                    Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Robogore.ChallengeMenu.OnChallengeTileHovered
struct UChallengeMenu_OnChallengeTileHovered_Params
{
	class UWidget**                                    Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Robogore.CharacterAnimationComponent.OnRepActiveAnimSet
struct UCharacterAnimationComponent_OnRepActiveAnimSet_Params
{
};

// Function Robogore.HandledWeapon.OnRep_Weapon
struct UHandledWeapon_OnRep_Weapon_Params
{
};

// Function Robogore.PawnWeaponHandlingComponent.OnRepWeaponInventory
struct UPawnWeaponHandlingComponent_OnRepWeaponInventory_Params
{
};

// Function Robogore.ChatterConfig.GetInitialConfigForCategory
struct UChatterConfig_GetInitialConfigForCategory_Params
{
	EeChatterCategory*                                 Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FChatterPriorityConfig                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Robogore.ChatterInfoCollection.GetInitialChatterInfoForCategory
struct UChatterInfoCollection_GetInitialChatterInfoForCategory_Params
{
	EeChatterCategory*                                 Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FChatterInfo                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Robogore.CommandCenterActor.GetUnitsSpawnPoint
struct ACommandCenterActor_GetUnitsSpawnPoint_Params
{
	class USceneComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Robogore.CommandCenterActor.GetGravCycleSpawnPoint
struct ACommandCenterActor_GetGravCycleSpawnPoint_Params
{
	class USceneComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Robogore.CinematicLoadingScreenWidget.OnInitializeLoadingScreen
struct UCinematicLoadingScreenWidget_OnInitializeLoadingScreen_Params
{
};

// Function Robogore.CloakAbilityWidget.SetCloakPercentageLeft
struct UCloakAbilityWidget_SetCloakPercentageLeft_Params
{
	float*                                             percentage;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.CloakAbilityWidget.OnCloakStart
struct UCloakAbilityWidget_OnCloakStart_Params
{
};

// Function Robogore.CloakAbilityWidget.OnCloakEnd
struct UCloakAbilityWidget_OnCloakEnd_Params
{
};

// Function Robogore.ColorDefinition.GetUnitColor
struct UColorDefinition_GetUnitColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.ColorDefinition.GetTypeColor
struct UColorDefinition_GetTypeColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.ColorDefinition.GetSnapReticleColor
struct UColorDefinition_GetSnapReticleColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.ColorDefinition.GetShieldsBarMissingShieldColor
struct UColorDefinition_GetShieldsBarMissingShieldColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.ColorDefinition.GetShieldsBarLowShieldColor
struct UColorDefinition_GetShieldsBarLowShieldColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.ColorDefinition.GetShieldsBarColor
struct UColorDefinition_GetShieldsBarColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.ColorDefinition.GetProjectileColor
struct UColorDefinition_GetProjectileColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.ColorDefinition.GetPostProcessingColor
struct UColorDefinition_GetPostProcessingColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.ColorDefinition.GetOffscreenColor
struct UColorDefinition_GetOffscreenColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.ColorDefinition.GetNameColor
struct UColorDefinition_GetNameColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.ColorDefinition.GetHUDColor
struct UColorDefinition_GetHUDColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.ColorDefinition.GetHealthTextColor
struct UColorDefinition_GetHealthTextColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.ColorDefinition.GetHealthBarMissingHealthColor
struct UColorDefinition_GetHealthBarMissingHealthColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.ColorDefinition.GetHealthBarLowHealthColor
struct UColorDefinition_GetHealthBarLowHealthColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.ColorDefinition.GetHealthBarColor
struct UColorDefinition_GetHealthBarColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.ColorDefinition.GetFXColor
struct UColorDefinition_GetFXColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.ColorDefinition.GetDownedColor
struct UColorDefinition_GetDownedColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.ColorDefinition.GetCommandPulseColor
struct UColorDefinition_GetCommandPulseColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.ColorDefinition.GetColorDefinitionType
struct UColorDefinition_GetColorDefinitionType_Params
{
	EeColorDefinitionType                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.ColorDefinition.GetColor
struct UColorDefinition_GetColor_Params
{
	struct FGameplayTag*                               Tag;                                                      // (Parm)
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.ColorDefinition.GetChevronColor
struct UColorDefinition_GetChevronColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.ColorManager.GetTeamRelationshipColorDefinition
struct UColorManager_GetTeamRelationshipColorDefinition_Params
{
	EeTeamRelationship*                                Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UColorDefinition*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.ColorManager.GetInteractableColorDefinition
struct UColorManager_GetInteractableColorDefinition_Params
{
	EeInteractableType*                                Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UColorDefinition*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.ColorManager.GetGenericColorDefinition
struct UColorManager_GetGenericColorDefinition_Params
{
	EeColorDefinitionType*                             Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UColorDefinition*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.CommandedAbilityHUDWidget.OnUnitWaitingOnBrainCanPickup_BP
struct UCommandedAbilityHUDWidget_OnUnitWaitingOnBrainCanPickup_BP_Params
{
};

// Function Robogore.CommandedAbilityHUDWidget.OnUnitRevivable_BP
struct UCommandedAbilityHUDWidget_OnUnitRevivable_BP_Params
{
};

// Function Robogore.CommandedAbilityHUDWidget.OnUnitRespawning_BP
struct UCommandedAbilityHUDWidget_OnUnitRespawning_BP_Params
{
};

// Function Robogore.CommandedAbilityHUDWidget.OnUnitDownedTimerEnd_BP
struct UCommandedAbilityHUDWidget_OnUnitDownedTimerEnd_BP_Params
{
};

// Function Robogore.CommandedAbilityHUDWidget.OnUnitDownedTimerBegin_BP
struct UCommandedAbilityHUDWidget_OnUnitDownedTimerBegin_BP_Params
{
};

// Function Robogore.CommandedAbilityHUDWidget.OnUnitDown_BP
struct UCommandedAbilityHUDWidget_OnUnitDown_BP_Params
{
};

// Function Robogore.CommandedAbilityHUDWidget.OnUnitActive_BP
struct UCommandedAbilityHUDWidget_OnUnitActive_BP_Params
{
};

// Function Robogore.CommandedAbilityHUDWidget.OnInvalidInputPressed_BP
struct UCommandedAbilityHUDWidget_OnInvalidInputPressed_BP_Params
{
};

// Function Robogore.CommandedAbilityHUDWidget.OnInputResponseCapableChanged_BP
struct UCommandedAbilityHUDWidget_OnInputResponseCapableChanged_BP_Params
{
	bool*                                              hasInput;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.CommandedAbilityHUDWidget.OnAbilityStagingEnd_BP
struct UCommandedAbilityHUDWidget_OnAbilityStagingEnd_BP_Params
{
};

// Function Robogore.CommandedAbilityHUDWidget.OnAbilityStagingCancelled_BP
struct UCommandedAbilityHUDWidget_OnAbilityStagingCancelled_BP_Params
{
};

// Function Robogore.CommandedAbilityHUDWidget.OnAbilityStagingBegin_BP
struct UCommandedAbilityHUDWidget_OnAbilityStagingBegin_BP_Params
{
};

// Function Robogore.CommandedAbilityHUDWidget.OnAbilityCooldown_BP
struct UCommandedAbilityHUDWidget_OnAbilityCooldown_BP_Params
{
};

// Function Robogore.CommandedAbilityHUDWidget.OnAbilityAvailable_BP
struct UCommandedAbilityHUDWidget_OnAbilityAvailable_BP_Params
{
	float*                                             syncTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.CommandedAbilityHUDWidget.OnAbilityActivated_BP
struct UCommandedAbilityHUDWidget_OnAbilityActivated_BP_Params
{
};

// Function Robogore.CommanderComponentPlayer.OnServer_SendSmartObjectOrderToSquad
struct UCommanderComponentPlayer_OnServer_SendSmartObjectOrderToSquad_Params
{
	class USmartObjectComponent**                      SmartObject;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Robogore.CommandPulseLogic.Server_Deactivate
struct UCommandPulseLogic_Server_Deactivate_Params
{
	bool*                                              ignoreOwningClient;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.CommandPulseLogic.Server_Activate
struct UCommandPulseLogic_Server_Activate_Params
{
	struct FCommandPulseRequirements*                  pulseData;                                                // (Parm)
	bool*                                              ignoreOwningClient;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.CommandPulseLogic.Multicast_Deactivate
struct UCommandPulseLogic_Multicast_Deactivate_Params
{
	bool*                                              ignoreOwningClient;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.CommandPulseLogic.Multicast_Activate
struct UCommandPulseLogic_Multicast_Activate_Params
{
	struct FCommandPulseRequirements*                  pulseData;                                                // (Parm)
	bool*                                              ignoreOwningClient;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.CommandPulseLogic.GetOwningPlayerController
struct UCommandPulseLogic_GetOwningPlayerController_Params
{
	class ARobogorePlayerController*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.CommandPulseLogic.GetOwningPawn
struct UCommandPulseLogic_GetOwningPawn_Params
{
	class APawn*                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.CommandPulseLogic.GetOwnerRole
struct UCommandPulseLogic_GetOwnerRole_Params
{
	TEnumAsByte<ENetRole>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.CustomReticle.OnZoomEnd
struct UCustomReticle_OnZoomEnd_Params
{
};

// Function Robogore.CustomReticle.OnZoomBegin
struct UCustomReticle_OnZoomBegin_Params
{
};

// Function Robogore.CustomReticle.OnWeaponAssigned_BP
struct UCustomReticle_OnWeaponAssigned_BP_Params
{
};

// Function Robogore.CustomReticle.OnWeaponAbilityAssigned_BP
struct UCustomReticle_OnWeaponAbilityAssigned_BP_Params
{
};

// Function Robogore.CustomReticle.OnCustomReticleUpdate_BP
struct UCustomReticle_OnCustomReticleUpdate_BP_Params
{
	float*                                             dt;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.CustomReticle.GetWeaponAbility
struct UCustomReticle_GetWeaponAbility_Params
{
	class AWeaponAbility*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.CustomReticle.GetWeapon
struct UCustomReticle_GetWeapon_Params
{
	class ARangedWeapon*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.SnappingReticle.OnSnapEnd_BP
struct USnappingReticle_OnSnapEnd_BP_Params
{
};

// Function Robogore.SnappingReticle.OnSnapBegin_BP
struct USnappingReticle_OnSnapBegin_BP_Params
{
	class AActor**                                     snappedActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	EeReticleSnapType*                                 snapType;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UInteractableObjectComponent**               interactable;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Robogore.SnappingReticle.IsSnapping
struct USnappingReticle_IsSnapping_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.CommandPulseReticle.OnSnapCandidateEnd_BP
struct UCommandPulseReticle_OnSnapCandidateEnd_BP_Params
{
};

// Function Robogore.CommandPulseReticle.OnSnapCandidateBegin_BP
struct UCommandPulseReticle_OnSnapCandidateBegin_BP_Params
{
	class AActor**                                     snappedActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	EeReticleSnapType*                                 snapType;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UInteractableObjectComponent**               interactable;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Robogore.CommandPulseReticle.OnCommandPulseReleased_BP
struct UCommandPulseReticle_OnCommandPulseReleased_BP_Params
{
};

// Function Robogore.CommandPulseReticle.OnCommandPulseEnabled_BP
struct UCommandPulseReticle_OnCommandPulseEnabled_BP_Params
{
};

// Function Robogore.CommandPulseReticle.OnCommandPulseDisabled_BP
struct UCommandPulseReticle_OnCommandPulseDisabled_BP_Params
{
};

// Function Robogore.CommandPulseReticle.GetCommandPulseCandidateSnapDistancePercent
struct UCommandPulseReticle_GetCommandPulseCandidateSnapDistancePercent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.CommandPulseUserWidget.UpdateCommandPulseAngle
struct UCommandPulseUserWidget_UpdateCommandPulseAngle_Params
{
	float*                                             angleFromForward;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.CommandPulseUserWidget.SetInnerPulseRatio
struct UCommandPulseUserWidget_SetInnerPulseRatio_Params
{
	float*                                             Ratio;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.CommandPulseUserWidget.OnStagingCancelled
struct UCommandPulseUserWidget_OnStagingCancelled_Params
{
};

// Function Robogore.CommandPulseUserWidget.OnStagingBegin
struct UCommandPulseUserWidget_OnStagingBegin_Params
{
};

// Function Robogore.CommandPulseUserWidget.OnSquadAwarenessStateChange
struct UCommandPulseUserWidget_OnSquadAwarenessStateChange_Params
{
};

// Function Robogore.CommandPulseUserWidget.OnEndVisualization
struct UCommandPulseUserWidget_OnEndVisualization_Params
{
};

// Function Robogore.CommandPulseUserWidget.OnDeactivate
struct UCommandPulseUserWidget_OnDeactivate_Params
{
};

// Function Robogore.CommandPulseUserWidget.OnActivate
struct UCommandPulseUserWidget_OnActivate_Params
{
};

// Function Robogore.CommandPulseUserWidget.AddTargetMarkerWidget
struct UCommandPulseUserWidget_AddTargetMarkerWidget_Params
{
	class UPrimaryPulseOutsideTargetMarkerWidget**     targetWidget;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Robogore.CommunicationWheelEmoteWidget.OnEnabledBP
struct UCommunicationWheelEmoteWidget_OnEnabledBP_Params
{
};

// Function Robogore.CommunicationWheelEmoteWidget.OnDisableBP
struct UCommunicationWheelEmoteWidget_OnDisableBP_Params
{
};

// Function Robogore.CreditsPlayerController.OnCreditsEnded
struct ACreditsPlayerController_OnCreditsEnded_Params
{
};

// Function Robogore.CrewDisplayWidget.OnSelectedBP
struct UCrewDisplayWidget_OnSelectedBP_Params
{
};

// Function Robogore.CrewDisplayWidget.OnFailSelectBP
struct UCrewDisplayWidget_OnFailSelectBP_Params
{
};

// Function Robogore.CrewDisplayWidget.OnDeselectedBP
struct UCrewDisplayWidget_OnDeselectedBP_Params
{
};

// Function Robogore.CrewSceneCapture.OnEmoteCompleted
struct ACrewSceneCapture_OnEmoteCompleted_Params
{
};

// Function Robogore.StatRowTile.SetTileData_BP
struct UStatRowTile_SetTileData_BP_Params
{
	struct FStatRow*                                   Data;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Robogore.CrewStatsMenu.OnPressedTile
struct UCrewStatsMenu_OnPressedTile_Params
{
	class UWidget**                                    PressedWidget;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Robogore.CrewStatsMenu.OnHoveredTile
struct UCrewStatsMenu_OnHoveredTile_Params
{
	class UWidget**                                    HoveredWidget;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Robogore.CrewVisualsSelectionTile.SetTileData_BP
struct UCrewVisualsSelectionTile_SetTileData_BP_Params
{
	struct FCrewTileData*                              Data;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Robogore.CrewVisualsSelection.OnPressedTile
struct UCrewVisualsSelection_OnPressedTile_Params
{
	class UWidget**                                    PressedWidget;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Robogore.CrewVisualsSelection.OnHoveredTile
struct UCrewVisualsSelection_OnHoveredTile_Params
{
	class UWidget**                                    HoveredWidget;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Robogore.DamageableVentActor.OnThunderheadGoingDown_BP
struct ADamageableVentActor_OnThunderheadGoingDown_BP_Params
{
};

// Function Robogore.DamageableVentActor.OnDamageableStateChange_BP
struct ADamageableVentActor_OnDamageableStateChange_BP_Params
{
	bool*                                              isDamageable;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.DamageDealtIndicatorWidget.OnApplicableDamageDealt
struct UDamageDealtIndicatorWidget_OnApplicableDamageDealt_Params
{
	float*                                             damageDealtAlpha;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             rawDamageDealt;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsCritical;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.DamageTrackerComponent.S_GetTotalCombinedTrackedDamage
struct UDamageTrackerComponent_S_GetTotalCombinedTrackedDamage_Params
{
	class AActor**                                     Actor;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.DamageTrackerComponent.S_GetDamageTrackerComponent
struct UDamageTrackerComponent_S_GetDamageTrackerComponent_Params
{
	class AActor**                                     Actor;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageTrackerComponent*                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Robogore.DamageTrackerComponent.S_GetComponentFromInterface
struct UDamageTrackerComponent_S_GetComponentFromInterface_Params
{
	class AActor**                                     Actor;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageTrackerComponent*                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Robogore.DamageTrackerComponent.GetTrackedDamageContainer
struct UDamageTrackerComponent_GetTrackedDamageContainer_Params
{
	TArray<struct FTrackedDamage>                      ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Robogore.GameplayGameState.OnRep_GameplayGameModeState
struct AGameplayGameState_OnRep_GameplayGameModeState_Params
{
};

// Function Robogore.MatchGameState.OnRep_StateTimerPaused
struct AMatchGameState_OnRep_StateTimerPaused_Params
{
};

// Function Robogore.MatchGameState.OnRep_DesiredRoundState
struct AMatchGameState_OnRep_DesiredRoundState_Params
{
};

// Function Robogore.MatchGameState.OnRep_DesiredMatchState
struct AMatchGameState_OnRep_DesiredMatchState_Params
{
};

// Function Robogore.MatchGameState.NetMulticast_OnPlayerKilled
struct AMatchGameState_NetMulticast_OnPlayerKilled_Params
{
	class APlayerState**                               killerPlayer;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerState**                               killedPlayer;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.DeathmatchGameState.OnRep_TeamScores
struct ADeathmatchGameState_OnRep_TeamScores_Params
{
};

// Function Robogore.ItemActor.OnRep_Gravcycle
struct AItemActor_OnRep_Gravcycle_Params
{
};

// Function Robogore.DeathmatchPickupItemActor.OnInitializeFriendlyDrop
struct ADeathmatchPickupItemActor_OnInitializeFriendlyDrop_Params
{
};

// Function Robogore.DeathmatchPickupItemActor.OnInitializeEnemyDrop
struct ADeathmatchPickupItemActor_OnInitializeEnemyDrop_Params
{
};

// Function Robogore.GameplayPlayerController.Server_ClientIsNetworkInitialized
struct AGameplayPlayerController_Server_ClientIsNetworkInitialized_Params
{
};

// Function Robogore.GameplayPlayerController.GetTeamComponent
struct AGameplayPlayerController_GetTeamComponent_Params
{
	class UTeamComponent*                              ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Robogore.GameplayPlayerController.GetPostProcessComponent
struct AGameplayPlayerController_GetPostProcessComponent_Params
{
	class UPostProcessComponent*                       ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Robogore.GameplayPlayerController.GetPlayerSquad
struct AGameplayPlayerController_GetPlayerSquad_Params
{
	class ASquadActor*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.GameplayPlayerController.GetPlayerHUDComponent
struct AGameplayPlayerController_GetPlayerHUDComponent_Params
{
	class UPlayerHUDComponent*                         ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Robogore.GameplayPlayerController.GetOffscreenIdentifierManager
struct AGameplayPlayerController_GetOffscreenIdentifierManager_Params
{
	class UOffscreenIdentiferManager*                  ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Robogore.GameplayPlayerController.GetCommanderComponent
struct AGameplayPlayerController_GetCommanderComponent_Params
{
	class UCommanderComponentPlayer*                   ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Robogore.GameplayPlayerController.Client_ShowHUD
struct AGameplayPlayerController_Client_ShowHUD_Params
{
};

// Function Robogore.GameplayPlayerController.Client_RecordElimination
struct AGameplayPlayerController_Client_RecordElimination_Params
{
	struct FReplicatedGameplayEliminationData*         elimData;                                                 // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Robogore.GameplayPlayerController.Client_PlayerUnspawn
struct AGameplayPlayerController_Client_PlayerUnspawn_Params
{
};

// Function Robogore.GameplayPlayerController.Client_PlayerSpawn
struct AGameplayPlayerController_Client_PlayerSpawn_Params
{
};

// Function Robogore.GameplayPlayerController.Client_PlayerGravcycleDying
struct AGameplayPlayerController_Client_PlayerGravcycleDying_Params
{
};

// Function Robogore.GameplayPlayerController.Client_PlayerGravcycleDead
struct AGameplayPlayerController_Client_PlayerGravcycleDead_Params
{
};

// Function Robogore.GameplayPlayerController.Client_PlayerGravcycleAlive
struct AGameplayPlayerController_Client_PlayerGravcycleAlive_Params
{
};

// Function Robogore.GameplayPlayerController.Client_HideHUD
struct AGameplayPlayerController_Client_HideHUD_Params
{
};

// Function Robogore.MatchPlayerController.Server_MATCH_DEBUG_WinRound
struct AMatchPlayerController_Server_MATCH_DEBUG_WinRound_Params
{
	unsigned char*                                     teamIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.MatchPlayerController.Server_MATCH_DEBUG_WinMatch
struct AMatchPlayerController_Server_MATCH_DEBUG_WinMatch_Params
{
	unsigned char*                                     teamIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.MatchPlayerController.Server_MATCH_DEBUG_ShutdownServer
struct AMatchPlayerController_Server_MATCH_DEBUG_ShutdownServer_Params
{
};

// Function Robogore.MatchPlayerController.Server_MATCH_DEBUG_ResetDestructibles
struct AMatchPlayerController_Server_MATCH_DEBUG_ResetDestructibles_Params
{
};

// Function Robogore.MatchPlayerController.Server_MATCH_DEBUG_ForcePostGame
struct AMatchPlayerController_Server_MATCH_DEBUG_ForcePostGame_Params
{
};

// Function Robogore.MatchPlayerController.Server_MATCH_DEBUG_ForcePlayTimeTo
struct AMatchPlayerController_Server_MATCH_DEBUG_ForcePlayTimeTo_Params
{
	uint32_t*                                          newStateTime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.MatchPlayerController.Server_MATCH_DEBUG_FinishRound
struct AMatchPlayerController_Server_MATCH_DEBUG_FinishRound_Params
{
};

// Function Robogore.MatchPlayerController.Server_MATCH_DEBUG_FailFindingPlayers
struct AMatchPlayerController_Server_MATCH_DEBUG_FailFindingPlayers_Params
{
};

// Function Robogore.MatchPlayerController.Server_MATCH_DEBUG_DrawRound
struct AMatchPlayerController_Server_MATCH_DEBUG_DrawRound_Params
{
};

// Function Robogore.MatchPlayerController.Server_MATCH_DEBUG_DrawMatch
struct AMatchPlayerController_Server_MATCH_DEBUG_DrawMatch_Params
{
};

// Function Robogore.MatchPlayerController.OnRep_RoundEndCondition
struct AMatchPlayerController_OnRep_RoundEndCondition_Params
{
};

// Function Robogore.MatchPlayerController.OnRep_MatchEndCondition
struct AMatchPlayerController_OnRep_MatchEndCondition_Params
{
};

// Function Robogore.MatchPlayerController.MEDALS_DEBUG_AwardMedal
struct AMatchPlayerController_MEDALS_DEBUG_AwardMedal_Params
{
	struct FString*                                    medalTag;                                                 // (Parm, ZeroConstructor)
	int*                                               Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.MatchPlayerController.MATCH_DEBUG_WinRound
struct AMatchPlayerController_MATCH_DEBUG_WinRound_Params
{
	unsigned char*                                     teamIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.MatchPlayerController.MATCH_DEBUG_WinMatch
struct AMatchPlayerController_MATCH_DEBUG_WinMatch_Params
{
	unsigned char*                                     teamIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.MatchPlayerController.MATCH_DEBUG_ShutdownServer
struct AMatchPlayerController_MATCH_DEBUG_ShutdownServer_Params
{
};

// Function Robogore.MatchPlayerController.MATCH_DEBUG_ResetDestructibles
struct AMatchPlayerController_MATCH_DEBUG_ResetDestructibles_Params
{
};

// Function Robogore.MatchPlayerController.MATCH_DEBUG_ForcePostGame
struct AMatchPlayerController_MATCH_DEBUG_ForcePostGame_Params
{
};

// Function Robogore.MatchPlayerController.MATCH_DEBUG_ForcePlayTimeTo
struct AMatchPlayerController_MATCH_DEBUG_ForcePlayTimeTo_Params
{
	uint32_t*                                          newPlayTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.MatchPlayerController.MATCH_DEBUG_FinishRound
struct AMatchPlayerController_MATCH_DEBUG_FinishRound_Params
{
};

// Function Robogore.MatchPlayerController.MATCH_DEBUG_FailFindingPlayers
struct AMatchPlayerController_MATCH_DEBUG_FailFindingPlayers_Params
{
};

// Function Robogore.MatchPlayerController.MATCH_DEBUG_DrawRound
struct AMatchPlayerController_MATCH_DEBUG_DrawRound_Params
{
};

// Function Robogore.MatchPlayerController.MATCH_DEBUG_DrawMatch
struct AMatchPlayerController_MATCH_DEBUG_DrawMatch_Params
{
};

// Function Robogore.MatchPlayerController.Client_TimeAdded
struct AMatchPlayerController_Client_TimeAdded_Params
{
	float*                                             timeAddedInSeconds;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.MatchPlayerController.Client_SetRespawnTimeLeft
struct AMatchPlayerController_Client_SetRespawnTimeLeft_Params
{
	float*                                             respawnTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.MatchPlayerController.Client_SetRemainingMatchStateTime
struct AMatchPlayerController_Client_SetRemainingMatchStateTime_Params
{
	float*                                             Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	EeMatchGameModeState*                              matchState;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	EeMatchRoundState*                                 roundState;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.MatchPlayerController.Client_SetForceRespawnTimeLeft
struct AMatchPlayerController_Client_SetForceRespawnTimeLeft_Params
{
	float*                                             forceRespawnTime;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.MatchPlayerController.Client_NewRoundStarted
struct AMatchPlayerController_Client_NewRoundStarted_Params
{
};

// Function Robogore.MatchPlayerController.Client_LeaveServerAndReturnToMenus
struct AMatchPlayerController_Client_LeaveServerAndReturnToMenus_Params
{
};

// Function Robogore.GameplayPlayerState.OnRep_Squad
struct AGameplayPlayerState_OnRep_Squad_Params
{
};

// Function Robogore.MatchPlayerState.Server_SetCrewIndex
struct AMatchPlayerState_Server_SetCrewIndex_Params
{
	unsigned char*                                     Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.MatchPlayerState.Server_ClearCrewIndex
struct AMatchPlayerState_Server_ClearCrewIndex_Params
{
};

// Function Robogore.DebugSpectatorPawn.Server_SpectateNextPlayer
struct ADebugSpectatorPawn_Server_SpectateNextPlayer_Params
{
};

// Function Robogore.DestructibleVehicleActor.OnRep_UpdateBrokenConstraints
struct ADestructibleVehicleActor_OnRep_UpdateBrokenConstraints_Params
{
};

// Function Robogore.DestructionPartitionComponent.OnRep_DamageLevelIndex
struct UDestructionPartitionComponent_OnRep_DamageLevelIndex_Params
{
};

// Function Robogore.DestructionPartitionComponent.NetMulticast_RestoreToInitialState
struct UDestructionPartitionComponent_NetMulticast_RestoreToInitialState_Params
{
};

// Function Robogore.DestructionPartitionComponent.NetMulticast_RestoreToIndex
struct UDestructionPartitionComponent_NetMulticast_RestoreToIndex_Params
{
	int16_t*                                           Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.DroneActor.OnRep_TeamComponent
struct ADroneActor_OnRep_TeamComponent_Params
{
};

// Function Robogore.DroneActor.OnRep_ReplicatedBasedMovement
struct ADroneActor_OnRep_ReplicatedBasedMovement_Params
{
};

// Function Robogore.DroneActor.K2_UpdateCustomMovement
struct ADroneActor_K2_UpdateCustomMovement_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.DroneActor.GetMortalityComponent
struct ADroneActor_GetMortalityComponent_Params
{
	class UMortalityComponent*                         ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Robogore.DroneActor.GetBoostComponent
struct ADroneActor_GetBoostComponent_Params
{
	class UDroneBoostComponent*                        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Robogore.DroneActor.GetBaseTranslationOffset
struct ADroneActor_GetBaseTranslationOffset_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.DroneActor.GetBaseRotationOffsetRotator
struct ADroneActor_GetBaseRotationOffsetRotator_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.DroneBoostComponent.OnRep_ActiveBoostCount
struct UDroneBoostComponent_OnRep_ActiveBoostCount_Params
{
};

// Function Robogore.DroneBoostComponent.GetMaxStoredBoostCount
struct UDroneBoostComponent_GetMaxStoredBoostCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.DroneBoostComponent.GetBoostRechargePercent
struct UDroneBoostComponent_GetBoostRechargePercent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.SkeletalDamageComponent.OnHit
struct USkeletalDamageComponent_OnHit_Params
{
	class UPrimitiveComponent**                        HitComp;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector*                                    NormalImpulse;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Robogore.DroneMovementComponent.ServerMoveOld
struct UDroneMovementComponent_ServerMoveOld_Params
{
	float*                                             OldTimeStamp;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize10*                      OldAccel;                                                 // (Parm)
	unsigned char*                                     OldMoveFlags;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.DroneMovementComponent.ServerMoveDual
struct UDroneMovementComponent_ServerMoveDual_Params
{
	float*                                             TimeStamp0;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize10*                      InAccel0;                                                 // (Parm)
	unsigned char*                                     PendingFlags;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t*                                          View0;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Timestamp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize10*                      InAccel;                                                  // (Parm)
	struct FVector_NetQuantize100*                     ClientLoc;                                                // (Parm)
	unsigned char*                                     NewFlags;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     ClientRoll;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t*                                          View;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        ClientMovementBase;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName*                                      ClientBaseBoneName;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.DroneMovementComponent.ServerMove
struct UDroneMovementComponent_ServerMove_Params
{
	float*                                             Timestamp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize10*                      InAccel;                                                  // (Parm)
	struct FVector_NetQuantize100*                     ClientLoc;                                                // (Parm)
	unsigned char*                                     CompressedMoveFlags;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     ClientRoll;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t*                                          View;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        ClientMovementBase;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName*                                      ClientBaseBoneName;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.DroneMovementComponent.GetDroneOwner
struct UDroneMovementComponent_GetDroneOwner_Params
{
	class ADroneActor*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.DroneMovementComponent.ClientVeryShortAdjustPosition
struct UDroneMovementComponent_ClientVeryShortAdjustPosition_Params
{
	float*                                             Timestamp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    NewLoc;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        NewBase;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName*                                      NewBaseBoneName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bHasBase;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bBaseRelativePosition;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.DroneMovementComponent.ClientAdjustPosition
struct UDroneMovementComponent_ClientAdjustPosition_Params
{
	float*                                             Timestamp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    NewLoc;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    NewVel;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        NewBase;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName*                                      NewBaseBoneName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bHasBase;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bBaseRelativePosition;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.DroneMovementComponent.ClientAckGoodMove
struct UDroneMovementComponent_ClientAckGoodMove_Params
{
	float*                                             Timestamp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.DroneMovementComponent.CapsuleTouched
struct UDroneMovementComponent_CapsuleTouched_Params
{
	class UPrimitiveComponent**                        OverlappedComp;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     Other;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Robogore.DroneMovementComponent.AddImpulse
struct UDroneMovementComponent_AddImpulse_Params
{
	struct FVector*                                    Impulse;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bVelocityChange;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.DroneMovementComponent.AddForce
struct UDroneMovementComponent_AddForce_Params
{
	struct FVector*                                    Force;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.EULAMenu.OnAccept
struct UEULAMenu_OnAccept_Params
{
};

// Function Robogore.MissionGameMode.SaveMission
struct AMissionGameMode_SaveMission_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString*                                    saveGameName;                                             // (Parm, ZeroConstructor)
};

// Function Robogore.MissionGameMode.MissionRestart
struct AMissionGameMode_MissionRestart_Params
{
};

// Function Robogore.MissionGameMode.MissionQuit
struct AMissionGameMode_MissionQuit_Params
{
};

// Function Robogore.MissionGameMode.MissionPass
struct AMissionGameMode_MissionPass_Params
{
};

// Function Robogore.MissionGameMode.MissionFail
struct AMissionGameMode_MissionFail_Params
{
};

// Function Robogore.MissionGameMode.MissionCheckpoint
struct AMissionGameMode_MissionCheckpoint_Params
{
};

// Function Robogore.MissionGameMode.LoadMission
struct AMissionGameMode_LoadMission_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString*                                    saveGameName;                                             // (Parm, ZeroConstructor)
};

// Function Robogore.MissionGameMode.IgnoreGoingToGarage
struct AMissionGameMode_IgnoreGoingToGarage_Params
{
};

// Function Robogore.MissionGameMode.DeleteMissionSave
struct AMissionGameMode_DeleteMissionSave_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString*                                    saveGameName;                                             // (Parm, ZeroConstructor)
};

// Function Robogore.MissionGameMode.CHEAT_UnlockChallenges
struct AMissionGameMode_CHEAT_UnlockChallenges_Params
{
};

// Function Robogore.MissionGameMode.CHEAT_ForceInteractAllHiddenSalvage
struct AMissionGameMode_CHEAT_ForceInteractAllHiddenSalvage_Params
{
};

// Function Robogore.MissionGameMode.CHEAT_CompleteChallenges
struct AMissionGameMode_CHEAT_CompleteChallenges_Params
{
};

// Function Robogore.ExcursionPlayerController.VoteToRetry
struct AExcursionPlayerController_VoteToRetry_Params
{
};

// Function Robogore.ExcursionPlayerController.VoteToQuit
struct AExcursionPlayerController_VoteToQuit_Params
{
};

// Function Robogore.ExcursionPlayerController.Server_VoteToRetry
struct AExcursionPlayerController_Server_VoteToRetry_Params
{
};

// Function Robogore.ExcursionPlayerController.Server_VoteToQuit
struct AExcursionPlayerController_Server_VoteToQuit_Params
{
};

// Function Robogore.ExcursionPlayerController.OnExcursionComplete_Success_BP
struct AExcursionPlayerController_OnExcursionComplete_Success_BP_Params
{
};

// Function Robogore.ExcursionPlayerController.OnExcursionComplete_Failed_BP
struct AExcursionPlayerController_OnExcursionComplete_Failed_BP_Params
{
};

// Function Robogore.ExcursionPlayerController.Client_OnExcursionEnd
struct AExcursionPlayerController_Client_OnExcursionEnd_Params
{
	struct FRobogoreReplicatedStats*                   stats;                                                    // (ConstParm, Parm, ReferenceParm)
	bool*                                              beatExcursion;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>*                            playerNames;                                              // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function Robogore.ExtrasMenu.OnCreditsButton
struct UExtrasMenu_OnCreditsButton_Params
{
};

// Function Robogore.FriendsListWidget.OnStartGetFriendsList
struct UFriendsListWidget_OnStartGetFriendsList_Params
{
};

// Function Robogore.FriendsListWidget.OnGetFriendsListSucceeded
struct UFriendsListWidget_OnGetFriendsListSucceeded_Params
{
};

// Function Robogore.FriendsListWidget.OnGetFriendsListFailed
struct UFriendsListWidget_OnGetFriendsListFailed_Params
{
};

// Function Robogore.FriendsListWidget.GetFriends
struct UFriendsListWidget_GetFriends_Params
{
};

// Function Robogore.FXActor.OnParticleSystemComplete
struct AFXActor_OnParticleSystemComplete_Params
{
	class UParticleSystemComponent**                   ParticleSystem;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Robogore.GameplayAchievementsComponent.Server_SetIgnoreAchievementProgress
struct UGameplayAchievementsComponent_Server_SetIgnoreAchievementProgress_Params
{
	TArray<uint16_t>*                                  achievementIndicesToIgnore;                               // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function Robogore.GameplayAchievementsComponent.Server_AddIgnoreAchievementProgress
struct UGameplayAchievementsComponent_Server_AddIgnoreAchievementProgress_Params
{
	uint16_t*                                          achievementIndex;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.GameplayAchievementsComponent.Client_AddAchievementProgress
struct UGameplayAchievementsComponent_Client_AddAchievementProgress_Params
{
	uint16_t*                                          achievementIndex;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	uint16_t*                                          statChange;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.GameplayMedalsComponent.SERVER_DEBUG_MEDALS_AwardMedal
struct UGameplayMedalsComponent_SERVER_DEBUG_MEDALS_AwardMedal_Params
{
	struct FString*                                    medalTag;                                                 // (Parm, ZeroConstructor)
	int*                                               Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.GameplayMedalsComponent.Client_MedalEvent
struct UGameplayMedalsComponent_Client_MedalEvent_Params
{
	unsigned char*                                     dataSetIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     actionIndexInDataSet;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.GameplayMedalWidget.OnMedalCreated
struct UGameplayMedalWidget_OnMedalCreated_Params
{
};

// Function Robogore.GameplayMedalWidget.MedalRemovedFromScreen
struct UGameplayMedalWidget_MedalRemovedFromScreen_Params
{
};

// Function Robogore.GameplayMedalWidget.MedalDisplayComplete
struct UGameplayMedalWidget_MedalDisplayComplete_Params
{
};

// Function Robogore.GameplayObjectControllerComponent.SetNextState
struct UGameplayObjectControllerComponent_SetNextState_Params
{
	EeGameplayObjectState*                             NextState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.GameplayObjectControllerComponent.SetLockState
struct UGameplayObjectControllerComponent_SetLockState_Params
{
	EeGameplayObjectState*                             lockState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.GameplayObjectControllerComponent.GetStartupState
struct UGameplayObjectControllerComponent_GetStartupState_Params
{
	EeGameplayObjectState                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.GameplayObjectControllerComponent.GetCurrentState
struct UGameplayObjectControllerComponent_GetCurrentState_Params
{
	EeGameplayObjectState                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.GameplayScoringComponent.Client_ScoreActionEvent
struct UGameplayScoringComponent_Client_ScoreActionEvent_Params
{
	unsigned char*                                     dataSetIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     actionIndexInDataSet;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t*                                          scoreChange;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.GameplayScoringEventWidget.ScoreDisplayComplete
struct UGameplayScoringEventWidget_ScoreDisplayComplete_Params
{
};

// Function Robogore.GameplayScoringEventWidget.OnScoreUpdated
struct UGameplayScoringEventWidget_OnScoreUpdated_Params
{
};

// Function Robogore.GameplayScoringEventWidget.OnScoreAndNameSet
struct UGameplayScoringEventWidget_OnScoreAndNameSet_Params
{
};

// Function Robogore.GameplayTagManager.RemoveGameplayTag
struct UGameplayTagManager_RemoveGameplayTag_Params
{
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag*                               GameplayTag;                                              // (Parm)
};

// Function Robogore.GameplayTagManager.HasMatchingTag
struct UGameplayTagManager_HasMatchingTag_Params
{
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag*                               GameplayTag;                                              // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.GameplayTagManager.GetGameplayTagContainerOnActor
struct UGameplayTagManager_GetGameplayTagContainerOnActor_Params
{
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Robogore.GameplayTagManager.AddGameplayTag
struct UGameplayTagManager_AddGameplayTag_Params
{
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag*                               GameplayTag;                                              // (Parm)
};

// Function Robogore.GoalsAndLevelsMenu.OnGoalChange
struct UGoalsAndLevelsMenu_OnGoalChange_Params
{
	struct FGoalData*                                  GoalData;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Robogore.GoalsAndLevelsMenu.GoalChange_BP
struct UGoalsAndLevelsMenu_GoalChange_BP_Params
{
	struct FGoalData*                                  GoalData;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Robogore.GoalWidget.SetGoal
struct UGoalWidget_SetGoal_Params
{
	struct FText*                                      Description;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	float*                                             CurrentProgress;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             TotalProgress;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.GPTask_SpawningAnimation.AnimInstance_OnMontageEnd
struct UGPTask_SpawningAnimation_AnimInstance_OnMontageEnd_Params
{
	class UAnimMontage**                               Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              interrupted;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.GravcycleAbility.ResetAbility
struct AGravcycleAbility_ResetAbility_Params
{
};

// Function Robogore.GravcycleAbility.GetAbilityHUDClass
struct AGravcycleAbility_GetAbilityHUDClass_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.GravcycleActivatedAbility.ServerActivate
struct AGravcycleActivatedAbility_ServerActivate_Params
{
};

// Function Robogore.GravcycleActivatedAbility.OnAbilityUse_BP
struct AGravcycleActivatedAbility_OnAbilityUse_BP_Params
{
};

// Function Robogore.GravcycleAbilityCloak.OnWeaponUsed
struct AGravcycleAbilityCloak_OnWeaponUsed_Params
{
};

// Function Robogore.GravcycleAbilityCloak.OnRep_InvisEffect
struct AGravcycleAbilityCloak_OnRep_InvisEffect_Params
{
};

// Function Robogore.GravcycleAbilityCloak.OnEffectEnd
struct AGravcycleAbilityCloak_OnEffectEnd_Params
{
};

// Function Robogore.GravcycleAbilityCloak.IsCloakRecharging
struct AGravcycleAbilityCloak_IsCloakRecharging_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.GravcycleAbilityCloak.IsCloakInUse
struct AGravcycleAbilityCloak_IsCloakInUse_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.GravcycleAbilityCloak.GetCloakPercentage
struct AGravcycleAbilityCloak_GetCloakPercentage_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.GravcycleAbilityComponent.Server_SetDesiredIndex
struct UGravcycleAbilityComponent_Server_SetDesiredIndex_Params
{
	int*                                               abilityIndex;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.GravcycleAbilityComponent.Server_RequestInfiniteAbilityChange
struct UGravcycleAbilityComponent_Server_RequestInfiniteAbilityChange_Params
{
	bool*                                              infiniteAbilities;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.GravcycleAbilityComponent.OnRep_DesiredIndex
struct UGravcycleAbilityComponent_OnRep_DesiredIndex_Params
{
};

// Function Robogore.GravcycleAbilityComponent.OnRep_AbilityArray
struct UGravcycleAbilityComponent_OnRep_AbilityArray_Params
{
};

// Function Robogore.GravcycleAbilityComponent.GetMaxAbilityCount
struct UGravcycleAbilityComponent_GetMaxAbilityCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.GravcycleAbilityComponent.GetActiveAbilityIndex
struct UGravcycleAbilityComponent_GetActiveAbilityIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.GravcycleAbilityComponent.GetAbilityAtIndex
struct UGravcycleAbilityComponent_GetAbilityAtIndex_Params
{
	int*                                               Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AGravcycleAbility*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.GravcycleAbilityHUDWidget.OnAbilityAssignedBP
struct UGravcycleAbilityHUDWidget_OnAbilityAssignedBP_Params
{
};

// Function Robogore.GravcycleAbilityHUDWidget.AbilityHUDTickBP
struct UGravcycleAbilityHUDWidget_AbilityHUDTickBP_Params
{
};

// Function Robogore.GravcycleActor.Server_SetAimRotation
struct AGravcycleActor_Server_SetAimRotation_Params
{
	float*                                             Yaw;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Pitch;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.GravcycleActor.Server_CollisionFromClient
struct AGravcycleActor_Server_CollisionFromClient_Params
{
	struct FHitResult*                                 Hit;                                                      // (Parm, IsPlainOldData)
	float*                                             impactSpeedRatio;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.GravcycleActor.NetMulticast_OnUnpossess
struct AGravcycleActor_NetMulticast_OnUnpossess_Params
{
};

// Function Robogore.GravcycleActor.GetNavLocator
struct AGravcycleActor_GetNavLocator_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.GravcycleActor.GetDebugString
struct AGravcycleActor_GetDebugString_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Robogore.GravcycleActor.GetDamageTrackerComponent
struct AGravcycleActor_GetDamageTrackerComponent_Params
{
	class UDamageTrackerComponent*                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Robogore.GravcycleActor.GetAimAssistComponent
struct AGravcycleActor_GetAimAssistComponent_Params
{
	class UAimAssistComponent*                         ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Robogore.GravcycleActor.GetAbilityLoadout
struct AGravcycleActor_GetAbilityLoadout_Params
{
	class UGravcycleAbilityComponent*                  ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Robogore.GravcycleActor.Cheat_SetHealthPercentage
struct AGravcycleActor_Cheat_SetHealthPercentage_Params
{
	float*                                             healthPercentage;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.GravcycleActor.Cheat_Die
struct AGravcycleActor_Cheat_Die_Params
{
};

// Function Robogore.GravcycleCommunicationsComponent.Server_PlayEmote
struct UGravcycleCommunicationsComponent_Server_PlayEmote_Params
{
	struct FGuid*                                      ID;                                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.GravcycleCommunicationsComponent.NetMulticast_PlayEmote
struct UGravcycleCommunicationsComponent_NetMulticast_PlayEmote_Params
{
	struct FGuid*                                      ID;                                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.PawnHUDComponent.SetRenderToScreen
struct UPawnHUDComponent_SetRenderToScreen_Params
{
	bool*                                              toRender;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.GravcycleHUDWidget.OnGravcycleSet
struct UGravcycleHUDWidget_OnGravcycleSet_Params
{
};

// Function Robogore.GravcycleMovementComponent.GetEngineLoad
struct UGravcycleMovementComponent_GetEngineLoad_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.InGameMenuUserWidget.GotoReturnToMainMenu
struct UInGameMenuUserWidget_GotoReturnToMainMenu_Params
{
};

// Function Robogore.InGameMenuUserWidget.GotoResumeGame
struct UInGameMenuUserWidget_GotoResumeGame_Params
{
};

// Function Robogore.InGameMenuUserWidget.GotoCloseApplicationUserWidget
struct UInGameMenuUserWidget_GotoCloseApplicationUserWidget_Params
{
};

// Function Robogore.InteractableObjectComponent.OnRep_IsInteractable
struct UInteractableObjectComponent_OnRep_IsInteractable_Params
{
};

// Function Robogore.InteractableObjectComponent.IsHovered
struct UInteractableObjectComponent_IsHovered_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.InteractableObjectComponent.IsCalledOut
struct UInteractableObjectComponent_IsCalledOut_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.InteractableObjectComponent.GetOutlineFillConfig
struct UInteractableObjectComponent_GetOutlineFillConfig_Params
{
	struct FVisionModeObjectOutlineFillConfig          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Robogore.InteractableObjectComponent.GetInteractableType
struct UInteractableObjectComponent_GetInteractableType_Params
{
	EeInteractableType                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.InteractableObjectComponent.GetInteractableState
struct UInteractableObjectComponent_GetInteractableState_Params
{
	EeInteractableState                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.InteractablesManagementComponent.Server_RequestScanRemove
struct UInteractablesManagementComponent_Server_RequestScanRemove_Params
{
	class UInteractableObjectComponent**               Object;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Robogore.InteractablesManagementComponent.Server_RequestScanComplete
struct UInteractablesManagementComponent_Server_RequestScanComplete_Params
{
	class UInteractableObjectComponent**               Object;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Robogore.InteractablesManagementComponent.Client_NotifyOnScanChange
struct UInteractablesManagementComponent_Client_NotifyOnScanChange_Params
{
	class UInteractableObjectComponent**               Object;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool*                                              scanned;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.UnitRespawnComponent.Server_Respawn
struct UUnitRespawnComponent_Server_Respawn_Params
{
};

// Function Robogore.UnitRespawnComponent.OnRep_DesiredRespawnState
struct UUnitRespawnComponent_OnRep_DesiredRespawnState_Params
{
};

// Function Robogore.JoinGameSessionRowUserWidget.SetText
struct UJoinGameSessionRowUserWidget_SetText_Params
{
	struct FString*                                    SessionName;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Robogore.JoinGameSessionRowUserWidget.JoinMultiplayerSession
struct UJoinGameSessionRowUserWidget_JoinMultiplayerSession_Params
{
};

// Function Robogore.JoinMultiplayerGameMenu.OnButtonMatchmakePressed
struct UJoinMultiplayerGameMenu_OnButtonMatchmakePressed_Params
{
};

// Function Robogore.JoinMultiplayerGameMenu.OnButtonListServersPressed
struct UJoinMultiplayerGameMenu_OnButtonListServersPressed_Params
{
};

// Function Robogore.JoinMultiplayerGameMenu.OnButtonLeaveGameInSessionPressed
struct UJoinMultiplayerGameMenu_OnButtonLeaveGameInSessionPressed_Params
{
};

// Function Robogore.JoinMultiplayerGameMenu.OnButtonJoinGameInSessionPressed
struct UJoinMultiplayerGameMenu_OnButtonJoinGameInSessionPressed_Params
{
};

// Function Robogore.JoinMultiplayerGameMenu.OnButtonCancelMatchmakingPressed
struct UJoinMultiplayerGameMenu_OnButtonCancelMatchmakingPressed_Params
{
};

// Function Robogore.JoinMultiplayerGameMenu.OnButtonBackOutOfMenuPressed
struct UJoinMultiplayerGameMenu_OnButtonBackOutOfMenuPressed_Params
{
};

// Function Robogore.LeaderboardEntryWidget.OnSetEntryIsPlayer
struct ULeaderboardEntryWidget_OnSetEntryIsPlayer_Params
{
};

// Function Robogore.LeaderboardEntryWidget.OnEntryCreated
struct ULeaderboardEntryWidget_OnEntryCreated_Params
{
	int*                                               place;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.LeaderboardSampleContainerWidget.SetLeaderboard
struct ULeaderboardSampleContainerWidget_SetLeaderboard_Params
{
	struct FString*                                    StatName;                                                 // (Parm, ZeroConstructor)
};

// Function Robogore.LeaderboardSampleContainerWidget.OnStartGetLeaderboard
struct ULeaderboardSampleContainerWidget_OnStartGetLeaderboard_Params
{
};

// Function Robogore.LeaderboardSampleContainerWidget.OnFailedGetLeaderboard
struct ULeaderboardSampleContainerWidget_OnFailedGetLeaderboard_Params
{
};

// Function Robogore.LeaderboardSampleContainerWidget.OnCompleteGetLeaderboard
struct ULeaderboardSampleContainerWidget_OnCompleteGetLeaderboard_Params
{
};

// Function Robogore.LevelCinematicActor.LevelSequenceActor_OnStop
struct ALevelCinematicActor_LevelSequenceActor_OnStop_Params
{
};

// Function Robogore.LevelSequence_Play.OnStopSequence
struct ULevelSequence_Play_OnStopSequence_Params
{
};

// Function Robogore.MainMenu.OpenTrainingCenter
struct UMainMenu_OpenTrainingCenter_Params
{
};

// Function Robogore.MainMenu.OpenMultiplayMenuLevel
struct UMainMenu_OpenMultiplayMenuLevel_Params
{
};

// Function Robogore.MainMenuPlayerController.ToggleKioskMode
struct AMainMenuPlayerController_ToggleKioskMode_Params
{
};

// Function Robogore.MatchmakingStatusWidget.OnStatusChanged
struct UMatchmakingStatusWidget_OnStatusChanged_Params
{
	EeMatchmakingStatus*                               Status;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              isPartyHost;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.MatchPlayerDeathCamComponent.OnRep_KilledByPlayerData
struct UMatchPlayerDeathCamComponent_OnRep_KilledByPlayerData_Params
{
};

// Function Robogore.MatchPlayerProfile.Server_SetPlayerProfileDataArray
struct UMatchPlayerProfile_Server_SetPlayerProfileDataArray_Params
{
	TArray<struct FSeralizableCrewCostume>*            playerProfileData;                                        // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function Robogore.MatchPlayerProfile.Server_SetPlayerBanner
struct UMatchPlayerProfile_Server_SetPlayerBanner_Params
{
	struct FGuid*                                      PlayerBanner;                                             // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Robogore.MatchPlayerProfile.Server_SetPlayerBadge
struct UMatchPlayerProfile_Server_SetPlayerBadge_Params
{
	struct FPlayerBadge*                               PlayerBadge;                                              // (ConstParm, Parm, ReferenceParm)
};

// Function Robogore.MatchPlayerProfile.OnRep_PlayerProfile
struct UMatchPlayerProfile_OnRep_PlayerProfile_Params
{
};

// Function Robogore.MatchPostGameComponent.Client_SetPostGameStats
struct UMatchPostGameComponent_Client_SetPostGameStats_Params
{
	struct FRobogoreReplicatedStats*                   postGameStats;                                            // (ConstParm, Parm, ReferenceParm)
};

// Function Robogore.MatchPostGameComponent.Client_SetPostGameMedals
struct UMatchPostGameComponent_Client_SetPostGameMedals_Params
{
	TArray<struct FGameplayMedalReplicationInfo>*      postGameMedals;                                           // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function Robogore.MatchPostGameComponent.Client_SetPostGameChallenges
struct UMatchPostGameComponent_Client_SetPostGameChallenges_Params
{
	TArray<struct FReplicatedGameplayChallenge>*       postGameChallenges;                                       // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function Robogore.MatchPreLoadComponent.Server_OnLoadComplete
struct UMatchPreLoadComponent_Server_OnLoadComplete_Params
{
};

// Function Robogore.MatchScoreboard.OnPlayerSelected
struct UMatchScoreboard_OnPlayerSelected_Params
{
	class UWidget**                                    Tile;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Robogore.MatchSpawnProtectionGameplayEffect.HandleWeaponFireCallback
struct UMatchSpawnProtectionGameplayEffect_HandleWeaponFireCallback_Params
{
};

// Function Robogore.MatchTimerWidget.OnTimeAdded
struct UMatchTimerWidget_OnTimeAdded_Params
{
	int*                                               secondsAdded;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.MatchVoiceConnectionComponent.Server_RequestLogin
struct UMatchVoiceConnectionComponent_Server_RequestLogin_Params
{
};

// Function Robogore.MatchVoiceConnectionComponent.Server_RequestJoin
struct UMatchVoiceConnectionComponent_Server_RequestJoin_Params
{
};

// Function Robogore.MatchVoiceConnectionComponent.Client_OnSessionParametersSet
struct UMatchVoiceConnectionComponent_Client_OnSessionParametersSet_Params
{
	struct FString*                                    playerName;                                               // (Parm, ZeroConstructor)
};

// Function Robogore.MatchVoiceConnectionComponent.Client_LoginVoice
struct UMatchVoiceConnectionComponent_Client_LoginVoice_Params
{
	struct FString*                                    Token;                                                    // (Parm, ZeroConstructor)
};

// Function Robogore.MatchVoiceConnectionComponent.Client_JoinSession
struct UMatchVoiceConnectionComponent_Client_JoinSession_Params
{
	struct FString*                                    Channel;                                                  // (Parm, ZeroConstructor)
	struct FString*                                    Token;                                                    // (Parm, ZeroConstructor)
};

// Function Robogore.MeleeComponent.Server_PerformMeleAttack
struct UMeleeComponent_Server_PerformMeleAttack_Params
{
	class AActor**                                     Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage**                               attackMontage;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.MeleeComponent.Server_NotifySuccessfulWindow
struct UMeleeComponent_Server_NotifySuccessfulWindow_Params
{
};

// Function Robogore.MeleeComponent.NetMulticast_PerformMeleeAttack
struct UMeleeComponent_NetMulticast_PerformMeleeAttack_Params
{
	class AActor**                                     Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage**                               attackMontage;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.MeleeComponent.Multicast_FailedWindow
struct UMeleeComponent_Multicast_FailedWindow_Params
{
	unsigned char*                                     failedSectionIndex;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     sectionToJumpToIndex;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.MeleeComponent.Client_SetLerpLocation
struct UMeleeComponent_Client_SetLerpLocation_Params
{
	struct FVector_NetQuantize*                        Location;                                                 // (Parm)
	struct FVector_NetQuantizeNormal*                  Direction;                                                // (Parm)
};

// Function Robogore.MeleeWeaponActor.OnHit_Script
struct AMeleeWeaponActor_OnHit_Script_Params
{
	struct FHitResult*                                 HitResult;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Robogore.MenuCampaignWidget.SetDisplayName
struct UMenuCampaignWidget_SetDisplayName_Params
{
	struct FText*                                      Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Robogore.MenuCampaignWidget.OpenMap
struct UMenuCampaignWidget_OpenMap_Params
{
};

// Function Robogore.MissionBoundaryNotifierHUDWidget.UpdateTimeLeft
struct UMissionBoundaryNotifierHUDWidget_UpdateTimeLeft_Params
{
	float*                                             timeLeft;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              timeCounting;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.MissionBoundaryNotifierHUDWidget.StopBoundaryWarning
struct UMissionBoundaryNotifierHUDWidget_StopBoundaryWarning_Params
{
};

// Function Robogore.MissionBoundaryNotifierHUDWidget.StartDowned
struct UMissionBoundaryNotifierHUDWidget_StartDowned_Params
{
};

// Function Robogore.MissionBoundaryNotifierHUDWidget.StartBoundaryWarning
struct UMissionBoundaryNotifierHUDWidget_StartBoundaryWarning_Params
{
};

// Function Robogore.MissionBoundaryNotifierHUDWidget.EndDowned
struct UMissionBoundaryNotifierHUDWidget_EndDowned_Params
{
};

// Function Robogore.MissionIndicatorActor.SetEnabled
struct AMissionIndicatorActor_SetEnabled_Params
{
	bool*                                              Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              skipAnimation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.MissionIndicatorOffScreenWidget.OnSetEnabled
struct UMissionIndicatorOffScreenWidget_OnSetEnabled_Params
{
	bool*                                              skipAnimation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.MissionIndicatorOffScreenWidget.OnSetDisabled
struct UMissionIndicatorOffScreenWidget_OnSetDisabled_Params
{
	bool*                                              skipAnimation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.MissionIndicatorWidget.OnSetEnabled
struct UMissionIndicatorWidget_OnSetEnabled_Params
{
	bool*                                              skipAnimation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.MissionIndicatorWidget.OnSetDisabled
struct UMissionIndicatorWidget_OnSetDisabled_Params
{
	bool*                                              skipAnimation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.MissionIndicatorWidgetComponent.SetIsEnabled
struct UMissionIndicatorWidgetComponent_SetIsEnabled_Params
{
	bool*                                              IsEnabled;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              skipAnimation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.MissionRetrievalDropOffActor.ParticleSystemComponent_OnSystemFinished
struct AMissionRetrievalDropOffActor_ParticleSystemComponent_OnSystemFinished_Params
{
	class UParticleSystemComponent**                   ParticleSystemComponent;                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Robogore.MissionRetrievalDropOffActor.OnWaitingForDrop
struct AMissionRetrievalDropOffActor_OnWaitingForDrop_Params
{
};

// Function Robogore.MissionRetrievalDropOffActor.OnLaunch
struct AMissionRetrievalDropOffActor_OnLaunch_Params
{
};

// Function Robogore.MissionRetrievalDropOffActor.OnIdle
struct AMissionRetrievalDropOffActor_OnIdle_Params
{
};

// Function Robogore.MissionRetrievalDropOffActor.OnComplete
struct AMissionRetrievalDropOffActor_OnComplete_Params
{
};

// Function Robogore.SmartObjectComponent.PopPulse
struct USmartObjectComponent_PopPulse_Params
{
};

// Function Robogore.MissionRetrievalWidgetComponent.SetRelationship
struct UMissionRetrievalWidgetComponent_SetRelationship_Params
{
	bool*                                              useRelationship;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	EeTeamRelationship*                                relationship;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.MissionRetrievalWidgetComponent.SetObjectiveName
struct UMissionRetrievalWidgetComponent_SetObjectiveName_Params
{
	struct FText*                                      Name;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Robogore.MissionRetrievalPickupActor.Uninitialize
struct AMissionRetrievalPickupActor_Uninitialize_Params
{
};

// Function Robogore.MissionRetrievalPickupActor.Initialize
struct AMissionRetrievalPickupActor_Initialize_Params
{
};

// Function Robogore.MortalityComponent.GetDamageReceiverType
struct UMortalityComponent_GetDamageReceiverType_Params
{
	struct FGameplayTag                                ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function Robogore.MortalityComponent.GetCurrentShieldPercentage
struct UMortalityComponent_GetCurrentShieldPercentage_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.MortalityComponent.GetCurrentHealthPercentage
struct UMortalityComponent_GetCurrentHealthPercentage_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.MPCharacterTestGameMode.SpawnEnemy
struct AMPCharacterTestGameMode_SpawnEnemy_Params
{
};

// Function Robogore.MPCharacterTestGameMode.OnPlayerPawnDestroyed
struct AMPCharacterTestGameMode_OnPlayerPawnDestroyed_Params
{
	class AActor**                                     pawnActor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.MPCharacterTestPlayerState.GetKills
struct AMPCharacterTestPlayerState_GetKills_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.MPCharacterTestPlayerState.GetDeaths
struct AMPCharacterTestPlayerState_GetDeaths_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.MtxAssetCollection.GetItemsOfCategory
struct UMtxAssetCollection_GetItemsOfCategory_Params
{
	EeMtxAssetCategory*                                Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FGuid>                               ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Robogore.MtxAssetCollection.GetAssetInfo
struct UMtxAssetCollection_GetAssetInfo_Params
{
	struct FGuid*                                      ID;                                                       // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UMtxAsset*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.MtxCurrencyMenu.OnPressedMtxTile
struct UMtxCurrencyMenu_OnPressedMtxTile_Params
{
	class UWidget**                                    PressedWidget;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Robogore.MtxCurrencyMenu.OnHoveredMtxTile_BP
struct UMtxCurrencyMenu_OnHoveredMtxTile_BP_Params
{
	struct FMtxCurrencyData*                           Data;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Robogore.MtxCurrencyMenu.OnHoveredMtxTile
struct UMtxCurrencyMenu_OnHoveredMtxTile_Params
{
	class UWidget**                                    HoveredWidget;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Robogore.MtxPackButton.SetMtxPackButtonBP
struct UMtxPackButton_SetMtxPackButtonBP_Params
{
	struct FText*                                      Name;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FText*                                      currencyAmountText;                                       // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Robogore.MtxTile.SetTileMtxData_BP
struct UMtxTile_SetTileMtxData_BP_Params
{
	struct FMtxData*                                   Data;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Robogore.MtxTile.OnOwnChange_BP
struct UMtxTile_OnOwnChange_BP_Params
{
	bool*                                              doesOwn;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.MtxTile.OnEquipingChange
struct UMtxTile_OnEquipingChange_Params
{
	bool*                                              isEquiping;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.MtxTile.OnEquipChange_BP
struct UMtxTile_OnEquipChange_BP_Params
{
	bool*                                              isEquiped;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.MultiplayerLaunchPadMenu.ReturnToMainMenu
struct UMultiplayerLaunchPadMenu_ReturnToMainMenu_Params
{
};

// Function Robogore.MultiplayerMenuPlayerController.ToggleKioskMode
struct AMultiplayerMenuPlayerController_ToggleKioskMode_Params
{
};

// Function Robogore.PauseMenu.OnReturnToMainMenuPressed
struct UPauseMenu_OnReturnToMainMenuPressed_Params
{
};

// Function Robogore.PauseMenu.OnReturnToGaragePressed
struct UPauseMenu_OnReturnToGaragePressed_Params
{
};

// Function Robogore.PauseMenu.OnRestartMissionPresssed
struct UPauseMenu_OnRestartMissionPresssed_Params
{
};

// Function Robogore.PauseMenu.OnRestartCheckpointPressed
struct UPauseMenu_OnRestartCheckpointPressed_Params
{
};

// Function Robogore.PauseMenu.OnQuitToDesktopPressed
struct UPauseMenu_OnQuitToDesktopPressed_Params
{
};

// Function Robogore.MultiplayerTestMovementComponent.ServerUpdateState
struct UMultiplayerTestMovementComponent_ServerUpdateState_Params
{
	float*                                             ForwardBackInput;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             leftRigthInput;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             TurnInput;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.NaniteItemActor.OnNaniteTimeout_BP
struct ANaniteItemActor_OnNaniteTimeout_BP_Params
{
};

// Function Robogore.NaniteItemActor.OnNaniteDeactivated_BP
struct ANaniteItemActor_OnNaniteDeactivated_BP_Params
{
};

// Function Robogore.NaniteItemActor.OnNaniteCleanup_BP
struct ANaniteItemActor_OnNaniteCleanup_BP_Params
{
};

// Function Robogore.NaniteItemActor.OnNaniteActivated_BP
struct ANaniteItemActor_OnNaniteActivated_BP_Params
{
};

// Function Robogore.NanoSwarmCanisterActor.OnComponentBeginOverlap
struct ANanoSwarmCanisterActor_OnComponentBeginOverlap_Params
{
	struct FV1OverlapInfo*                             overlapInfo;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	class UV1OverlapComponent**                        V1OverlapComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Robogore.ObjectiveUtility.IncrementObjectiveCounter
struct UObjectiveUtility_IncrementObjectiveCounter_Params
{
	class UObject**                                    WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      objectiveName;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int*                                               incrementAmount;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.ObjectRespawnActor.Client_SpawnDropship
struct AObjectRespawnActor_Client_SpawnDropship_Params
{
};

// Function Robogore.StatTile.SetTileData_BP
struct UStatTile_SetTileData_BP_Params
{
	struct FStatPair*                                  Data;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Robogore.OverallStatsMenu.OnPressedTile
struct UOverallStatsMenu_OnPressedTile_Params
{
	class UWidget**                                    PressedWidget;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Robogore.OverallStatsMenu.OnHoveredTile
struct UOverallStatsMenu_OnHoveredTile_Params
{
	class UWidget**                                    HoveredWidget;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Robogore.PartyInviteMenu.OnInviteHovered
struct UPartyInviteMenu_OnInviteHovered_Params
{
	class UWidget**                                    Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Robogore.PartyInviteMenu.OnInvitedPressed
struct UPartyInviteMenu_OnInvitedPressed_Params
{
	class UWidget**                                    Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Robogore.PartyManagementMenuWidget.OnPromoteCurrentPlayerToPartyLeader
struct UPartyManagementMenuWidget_OnPromoteCurrentPlayerToPartyLeader_Params
{
};

// Function Robogore.PartyManagementMenuWidget.OnPartyListWidgetPressed
struct UPartyManagementMenuWidget_OnPartyListWidgetPressed_Params
{
	class UWidget**                                    Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Robogore.PartyManagementMenuWidget.OnPartyListWidgetHovered
struct UPartyManagementMenuWidget_OnPartyListWidgetHovered_Params
{
	class UWidget**                                    Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Robogore.PartyManagementMenuWidget.OnMuteCurrentPlayer
struct UPartyManagementMenuWidget_OnMuteCurrentPlayer_Params
{
};

// Function Robogore.PartyManagementMenuWidget.OnLeaveParty
struct UPartyManagementMenuWidget_OnLeaveParty_Params
{
};

// Function Robogore.PartyManagementMenuWidget.OnKickCurrentPlayerFromParty
struct UPartyManagementMenuWidget_OnKickCurrentPlayerFromParty_Params
{
};

// Function Robogore.PartyManagementMenuWidget.OnInviteCurrentPlayerToParty
struct UPartyManagementMenuWidget_OnInviteCurrentPlayerToParty_Params
{
};

// Function Robogore.PartyManagementMenuWidget.OnFriendsListWidgetPressed
struct UPartyManagementMenuWidget_OnFriendsListWidgetPressed_Params
{
	class UWidget**                                    Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Robogore.PartyManagementMenuWidget.OnFriendsListWidgetHovered
struct UPartyManagementMenuWidget_OnFriendsListWidgetHovered_Params
{
	class UWidget**                                    Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Robogore.PartyPlayerInspectionWidget.OnPromoteButton
struct UPartyPlayerInspectionWidget_OnPromoteButton_Params
{
};

// Function Robogore.PartyPlayerInspectionWidget.OnKickButton
struct UPartyPlayerInspectionWidget_OnKickButton_Params
{
};

// Function Robogore.PartyPlayerInspectionWidget.OnInviteButton
struct UPartyPlayerInspectionWidget_OnInviteButton_Params
{
};

// Function Robogore.PartyPlayerInspectionWidget.OnGamerCardButton
struct UPartyPlayerInspectionWidget_OnGamerCardButton_Params
{
};

// Function Robogore.PartyToastGenericMessageWidget.DismissMessage_BP
struct UPartyToastGenericMessageWidget_DismissMessage_BP_Params
{
};

// Function Robogore.PartyToastGenericMessageWidget.DismissMessage
struct UPartyToastGenericMessageWidget_DismissMessage_Params
{
};

// Function Robogore.PartyToastGenericMessageWidget.AcceptMessage_BP
struct UPartyToastGenericMessageWidget_AcceptMessage_BP_Params
{
};

// Function Robogore.PartyToastGenericMessageWidget.AcceptMessage
struct UPartyToastGenericMessageWidget_AcceptMessage_Params
{
};

// Function Robogore.PayloadActor.SetActive
struct APayloadActor_SetActive_Params
{
	bool*                                              IsActive;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.PayloadActor.NetMulticast_InitialSetActorTransform
struct APayloadActor_NetMulticast_InitialSetActorTransform_Params
{
	struct FTransform*                                 Transform;                                                // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
};

// Function Robogore.PayloadCargoActor.OnRep_TargetWorldPos
struct APayloadCargoActor_OnRep_TargetWorldPos_Params
{
};

// Function Robogore.PayloadCargoActor.OnRep_IsContested
struct APayloadCargoActor_OnRep_IsContested_Params
{
};

// Function Robogore.PayloadCargoIndicatorWidget.StateChanged
struct UPayloadCargoIndicatorWidget_StateChanged_Params
{
	EePayloadCargoMovementState*                       oldState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	EePayloadCargoMovementState*                       NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.PayloadCargoProgressEdgeWidget.OnCargoCompletedEdge
struct UPayloadCargoProgressEdgeWidget_OnCargoCompletedEdge_Params
{
};

// Function Robogore.PayloadCargoProgressEdgeWidget.InitializeTeamState
struct UPayloadCargoProgressEdgeWidget_InitializeTeamState_Params
{
	EeTeamRelationship*                                relationship;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.PayloadCargoProgressEdgeWidget.InitializeReachedState
struct UPayloadCargoProgressEdgeWidget_InitializeReachedState_Params
{
	bool*                                              hasBeenReached;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.PayloadCargoProgressNodeWidget.OnCargoReachedNode
struct UPayloadCargoProgressNodeWidget_OnCargoReachedNode_Params
{
};

// Function Robogore.PayloadCargoProgressNodeWidget.InitializeTeamState
struct UPayloadCargoProgressNodeWidget_InitializeTeamState_Params
{
	EeTeamRelationship*                                relationship;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.PayloadCargoProgressNodeWidget.InitializeReachedState
struct UPayloadCargoProgressNodeWidget_InitializeReachedState_Params
{
	bool*                                              hasBeenReached;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.PayloadCargoProgressWidget.OnPayloadReachedNode
struct UPayloadCargoProgressWidget_OnPayloadReachedNode_Params
{
};

// Function Robogore.PayloadCargoStateWidget.SetTeamRelationship
struct UPayloadCargoStateWidget_SetTeamRelationship_Params
{
	EeTeamRelationship*                                relationship;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.PayloadCargoStateWidget.OnPayloadStateChange
struct UPayloadCargoStateWidget_OnPayloadStateChange_Params
{
	EePayloadCargoMovementState*                       MovementState;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.PayloadLandingPadActor.GetLandingPadCaptureState
struct APayloadLandingPadActor_GetLandingPadCaptureState_Params
{
	EeLandingPadCaptureState                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.PayloadLandingPadIndicatorWidget.LandingPadLost
struct UPayloadLandingPadIndicatorWidget_LandingPadLost_Params
{
};

// Function Robogore.PayloadLandingPadIndicatorWidget.LandingPadCaptured
struct UPayloadLandingPadIndicatorWidget_LandingPadCaptured_Params
{
	EeTeamID*                                          Team;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	EeCommanderID*                                     Commander;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.PayloadPlayerController.Client_NotifyPayloadAtWaypoint
struct APayloadPlayerController_Client_NotifyPayloadAtWaypoint_Params
{
	float*                                             addedTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.PersistentPlayerChatLog.Get
struct UPersistentPlayerChatLog_Get_Params
{
	class UWorld**                                     World;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UPersistentPlayerChatLog*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.PilotAnimationController.ButtonPress
struct UPilotAnimationController_ButtonPress_Params
{
	TEnumAsByte<EePilotControllerButton>*              Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              active;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.PlayCampaignUserWidget.OpenLevelByIndex
struct UPlayCampaignUserWidget_OpenLevelByIndex_Params
{
	int*                                               Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.PlayerBadgeTile.OnEquipedChanged_BP
struct UPlayerBadgeTile_OnEquipedChanged_BP_Params
{
	bool*                                              isEquiped;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.PlayerBannerTile.SetDataBP
struct UPlayerBannerTile_SetDataBP_Params
{
	struct FBannerTileData*                            Data;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Robogore.PlayerBannerTile.OnEquipedChangeBP
struct UPlayerBannerTile_OnEquipedChangeBP_Params
{
	bool*                                              isEquiped;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.PlayerCampaignFailureComponent.ClientStartUnitsDown
struct UPlayerCampaignFailureComponent_ClientStartUnitsDown_Params
{
};

// Function Robogore.PlayerCampaignFailureComponent.ClientMissionFailure
struct UPlayerCampaignFailureComponent_ClientMissionFailure_Params
{
};

// Function Robogore.PlayerCampaignFailureComponent.ClientEndUnitsDown
struct UPlayerCampaignFailureComponent_ClientEndUnitsDown_Params
{
};

// Function Robogore.PlayerChallengesHighlightsWidget.Animate
struct UPlayerChallengesHighlightsWidget_Animate_Params
{
	float*                                             timeBetweenAnimations;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.PlayerChatComponent.Server_NewChatMessage
struct UPlayerChatComponent_Server_NewChatMessage_Params
{
	struct FText*                                      Message;                                                  // (ConstParm, Parm, ReferenceParm)
	EeChatMessageType*                                 MessageType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.PlayerChatComponent.Client_NewChatMessage
struct UPlayerChatComponent_Client_NewChatMessage_Params
{
	struct FText*                                      senderName;                                               // (ConstParm, Parm, ReferenceParm)
	struct FText*                                      Message;                                                  // (ConstParm, Parm, ReferenceParm)
	EeTeamRelationship*                                relationship;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	EeChatMessageType*                                 MessageType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.PlayerChatEntryWindow.OnTextCommitted
struct UPlayerChatEntryWindow_OnTextCommitted_Params
{
	struct FText*                                      enteredText;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>*                          CommitMethod;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.PlayerChatEntryWindow.OnTextChanged
struct UPlayerChatEntryWindow_OnTextChanged_Params
{
	struct FText*                                      enteredText;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Robogore.PlayerDamageTakenWidget.OnTookDamageFromSource_BP
struct UPlayerDamageTakenWidget_OnTookDamageFromSource_BP_Params
{
	int*                                               SourceIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.PlayerDebugComponent.Server_StopSpectating
struct UPlayerDebugComponent_Server_StopSpectating_Params
{
};

// Function Robogore.PlayerDebugComponent.Server_StopGroundSpectating
struct UPlayerDebugComponent_Server_StopGroundSpectating_Params
{
};

// Function Robogore.PlayerDebugComponent.Server_StartSpectating
struct UPlayerDebugComponent_Server_StartSpectating_Params
{
	struct FTransform*                                 SpawnTransform;                                           // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
};

// Function Robogore.PlayerDebugComponent.Server_StartGroundSpectating
struct UPlayerDebugComponent_Server_StartGroundSpectating_Params
{
};

// Function Robogore.ParticleEmoteInstance.OnParticleSystemFinished
struct UParticleEmoteInstance_OnParticleSystemFinished_Params
{
	class UParticleSystemComponent**                   sys;                                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Robogore.PlayerEmote.Play
struct UPlayerEmote_Play_Params
{
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              isPreview;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              PlaySound;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UEmoteInstance*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.PlayerHealthWidget.GetShieldPercentage
struct UPlayerHealthWidget_GetShieldPercentage_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.PlayerHealthWidget.GetHealthPercentage
struct UPlayerHealthWidget_GetHealthPercentage_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.PlayerHubPlayerController.CreateAndActivateAfterMissionMenu
struct APlayerHubPlayerController_CreateAndActivateAfterMissionMenu_Params
{
	bool*                                              Force;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.PlayerHUDUserWidget.GetOwnerHeading
struct UPlayerHUDUserWidget_GetOwnerHeading_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.PlayerHUDUserWidget.GetGravcycleActor
struct UPlayerHUDUserWidget_GetGravcycleActor_Params
{
	class AGravcycleActor*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.PlayerInfoWidget.OnShowGamerCard
struct UPlayerInfoWidget_OnShowGamerCard_Params
{
};

// Function Robogore.PlayerInteractableDecorator.GetVisionModeOutlineColor
struct UPlayerInteractableDecorator_GetVisionModeOutlineColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.PlayerInteractableDecorator.GetVisionModeFillColor
struct UPlayerInteractableDecorator_GetVisionModeFillColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.PlayerInteractableDecorator.GetSnapReticleColor
struct UPlayerInteractableDecorator_GetSnapReticleColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.PlayerInteractableDecorator.GetInteractableType
struct UPlayerInteractableDecorator_GetInteractableType_Params
{
	EeInteractableType                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.PlayerInteractableDecorator.GetCommandPulseColor
struct UPlayerInteractableDecorator_GetCommandPulseColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.PlayerInteractableOverlayWidget.OnPlayerCannotInteract
struct UPlayerInteractableOverlayWidget_OnPlayerCannotInteract_Params
{
};

// Function Robogore.PlayerInteractableOverlayWidget.OnPlayerCanInteract
struct UPlayerInteractableOverlayWidget_OnPlayerCanInteract_Params
{
};

// Function Robogore.PlayerMatchStatWidget.OnStatUpdate
struct UPlayerMatchStatWidget_OnStatUpdate_Params
{
	int*                                               NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.PlayerOnlineStatsScreen.OnStatsGetSuccess
struct UPlayerOnlineStatsScreen_OnStatsGetSuccess_Params
{
};

// Function Robogore.PlayerOnlineStatsScreen.OnStatsGetFailed
struct UPlayerOnlineStatsScreen_OnStatsGetFailed_Params
{
};

// Function Robogore.PlayerOnlineStatsScreen.OnAttemptGetStats
struct UPlayerOnlineStatsScreen_OnAttemptGetStats_Params
{
};

// Function Robogore.PlayerOnlineStatsScreen.GetStats
struct UPlayerOnlineStatsScreen_GetStats_Params
{
};

// Function Robogore.ReplicatedPlayerStat.OnRep_StatValue
struct UReplicatedPlayerStat_OnRep_StatValue_Params
{
};

// Function Robogore.PlayerReplicatedStatsComponent.GetStatValue
struct UPlayerReplicatedStatsComponent_GetStatValue_Params
{
	struct FGameplayTag*                               statTag;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.PlayerReplicatedStatsComponent.GetStatObject
struct UPlayerReplicatedStatsComponent_GetStatObject_Params
{
	struct FGameplayTag*                               statTag;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	class UReplicatedPlayerStat*                       ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Robogore.PlayerReplicatedStatsComponent.GetReplicatedStats
struct UPlayerReplicatedStatsComponent_GetReplicatedStats_Params
{
	TArray<class UReplicatedPlayerStat*>               ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Robogore.PlaylistWidget.SetEnabledBP
struct UPlaylistWidget_SetEnabledBP_Params
{
	bool*                                              setEnable;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.PostExcursionStatsScreenWidget.SetPlayerNames
struct UPostExcursionStatsScreenWidget_SetPlayerNames_Params
{
	TArray<struct FString>*                            Players;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Robogore.PostExcursionStatsScreenWidget.SetAttempts
struct UPostExcursionStatsScreenWidget_SetAttempts_Params
{
	int*                                               stats;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.PostExcursionStatsScreenWidget.PlayersWon
struct UPostExcursionStatsScreenWidget_PlayersWon_Params
{
};

// Function Robogore.PostExcursionStatsScreenWidget.PlayersLost
struct UPostExcursionStatsScreenWidget_PlayersLost_Params
{
};

// Function Robogore.PostGameChallengeWidget.SetProgressChangeBP
struct UPostGameChallengeWidget_SetProgressChangeBP_Params
{
	int*                                               Delta;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.PostGameChallengeWidget.OnCompletedBP
struct UPostGameChallengeWidget_OnCompletedBP_Params
{
};

// Function Robogore.PostGameChallengeWidget.AnimateBP
struct UPostGameChallengeWidget_AnimateBP_Params
{
	float*                                             delayTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.PostGameChallengeWidget.Animate
struct UPostGameChallengeWidget_Animate_Params
{
};

// Function Robogore.PostGameConditionWidget.StartPostGameConditionDisplay
struct UPostGameConditionWidget_StartPostGameConditionDisplay_Params
{
	EeMatchEndCondition*                               endCondition;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.PostGameHighlightsMenu.OnAnimateBP
struct UPostGameHighlightsMenu_OnAnimateBP_Params
{
};

// Function Robogore.PostGameHighlightsMenu.AnimateChallenges
struct UPostGameHighlightsMenu_AnimateChallenges_Params
{
	float*                                             timeBetweenChallengeAnimations;                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.PostGameMedalWidget.OnShowMedalBP
struct UPostGameMedalWidget_OnShowMedalBP_Params
{
};

// Function Robogore.PostGameStatWidget.OnStatShownBP
struct UPostGameStatWidget_OnStatShownBP_Params
{
};

// Function Robogore.PostRoundConditionWidget.OnPostRoundCondition
struct UPostRoundConditionWidget_OnPostRoundCondition_Params
{
	EeRoundEndCondition*                               endCondition;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.PregameLobbyGameState.SetTargetMultiplayerLevel
struct APregameLobbyGameState_SetTargetMultiplayerLevel_Params
{
	struct FString*                                    newTargetLevel;                                           // (Parm, ZeroConstructor)
};

// Function Robogore.PregameLobbyGameState.SetTargetGameMode
struct APregameLobbyGameState_SetTargetGameMode_Params
{
	struct FString*                                    newGameMode;                                              // (Parm, ZeroConstructor)
};

// Function Robogore.PregameLobbyGameState.OnRep_CurrentGameModeChanged
struct APregameLobbyGameState_OnRep_CurrentGameModeChanged_Params
{
};

// Function Robogore.PregameLobbyGameState.GetTimeToStart
struct APregameLobbyGameState_GetTimeToStart_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.PregameLobbyGameState.GetTargetMultiplayerLevel
struct APregameLobbyGameState_GetTargetMultiplayerLevel_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Robogore.PregameLobbyGameState.GetPossibleGameModes
struct APregameLobbyGameState_GetPossibleGameModes_Params
{
	TArray<struct FGameModeLobbyData>                  ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Robogore.PregameLobbyGameState.GetMaxTimeToStart
struct APregameLobbyGameState_GetMaxTimeToStart_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.PregameLobbyGameState.GetGameModeFromName
struct APregameLobbyGameState_GetGameModeFromName_Params
{
	struct FString*                                    GameModeName;                                             // (Parm, ZeroConstructor)
	struct FGameModeLobbyData                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Robogore.PregameLobbyGameState.GetCurrentGameModeName
struct APregameLobbyGameState_GetCurrentGameModeName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Robogore.PregameLobbyPlayerController.SetTargetLevel
struct APregameLobbyPlayerController_SetTargetLevel_Params
{
	struct FString*                                    LevelName;                                                // (Parm, ZeroConstructor)
};

// Function Robogore.PregameLobbyPlayerController.SetTargetGameMode
struct APregameLobbyPlayerController_SetTargetGameMode_Params
{
	struct FString*                                    GameModeName;                                             // (Parm, ZeroConstructor)
};

// Function Robogore.PregameLobbyPlayerController.Server_SetTargetLevel
struct APregameLobbyPlayerController_Server_SetTargetLevel_Params
{
	struct FString*                                    targetLevel;                                              // (Parm, ZeroConstructor)
};

// Function Robogore.PregameLobbyPlayerController.Server_SetTargetGameMode
struct APregameLobbyPlayerController_Server_SetTargetGameMode_Params
{
	struct FString*                                    GameModeName;                                             // (Parm, ZeroConstructor)
};

// Function Robogore.PregameLobbyPlayerState.Server_SetPlayerReady
struct APregameLobbyPlayerState_Server_SetPlayerReady_Params
{
	bool*                                              IsReady;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.PregameLobbyPlayerState.Server_SetPlayerBadgeAndBanner
struct APregameLobbyPlayerState_Server_SetPlayerBadgeAndBanner_Params
{
	struct FPlayerBadge*                               badge;                                                    // (ConstParm, Parm, ReferenceParm)
	struct FGuid*                                      bannerGuid;                                               // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Robogore.PregameLobbyPlayerState.OnRep_PlayerBanner
struct APregameLobbyPlayerState_OnRep_PlayerBanner_Params
{
};

// Function Robogore.PregameLobbyPlayerState.OnRep_PlayerBadge
struct APregameLobbyPlayerState_OnRep_PlayerBadge_Params
{
};

// Function Robogore.PregameLobbyPlayerState.OnRep_IsReadyForGame
struct APregameLobbyPlayerState_OnRep_IsReadyForGame_Params
{
};

// Function Robogore.PregameLobbyPlayerState.IsReadyForGame
struct APregameLobbyPlayerState_IsReadyForGame_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.PregameLobbyUserWidget.ToggleReady
struct UPregameLobbyUserWidget_ToggleReady_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.PregameLobbyUserWidget.ChangeTeam
struct UPregameLobbyUserWidget_ChangeTeam_Params
{
};

// Function Robogore.RadarComponent.IsSegmentOccupied
struct URadarComponent_IsSegmentOccupied_Params
{
	EeRadarRing*                                       ring;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               SegmentIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.RadarComponent.Initialize
struct URadarComponent_Initialize_Params
{
	float*                                             timeToClear;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             timeToForget;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D*                                  nearRange;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               nearSegments;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D*                                  midRange;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               midSegments;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D*                                  farRange;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               farSegments;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.RadarWidget.GetRadarComponent
struct URadarWidget_GetRadarComponent_Params
{
	class URadarComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Robogore.RangedAmmoRegenComponent.OnRep_CanRegen
struct URangedAmmoRegenComponent_OnRep_CanRegen_Params
{
};

// Function Robogore.RangedAmmoRegenComponent.Multicast_OnSingleRegenCycleComplete
struct URangedAmmoRegenComponent_Multicast_OnSingleRegenCycleComplete_Params
{
	float*                                             syncRegenAccumulation;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.RangedWeapon.UsesAccuracyCurve
struct ARangedWeapon_UsesAccuracyCurve_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.RangedWeapon.Server_StopFiring
struct ARangedWeapon_Server_StopFiring_Params
{
};

// Function Robogore.RangedWeapon.Server_StopCharging
struct ARangedWeapon_Server_StopCharging_Params
{
};

// Function Robogore.RangedWeapon.Server_StartFiring
struct ARangedWeapon_Server_StartFiring_Params
{
};

// Function Robogore.RangedWeapon.Server_StartCharging
struct ARangedWeapon_Server_StartCharging_Params
{
};

// Function Robogore.RangedWeapon.Server_Reload
struct ARangedWeapon_Server_Reload_Params
{
};

// Function Robogore.RangedWeapon.Server_FireShot
struct ARangedWeapon_Server_FireShot_Params
{
	struct FVector_NetQuantize*                        from;                                                     // (Parm)
	struct FVector_NetQuantize*                        projectileVelocity;                                       // (Parm)
};

// Function Robogore.RangedWeapon.Server_CancelReload
struct ARangedWeapon_Server_CancelReload_Params
{
};

// Function Robogore.RangedWeapon.NumberOfChamberedRoundsBasedOnCharge
struct ARangedWeapon_NumberOfChamberedRoundsBasedOnCharge_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.RangedWeapon.Multicast_StopFiring
struct ARangedWeapon_Multicast_StopFiring_Params
{
};

// Function Robogore.RangedWeapon.Multicast_StopCharging
struct ARangedWeapon_Multicast_StopCharging_Params
{
};

// Function Robogore.RangedWeapon.Multicast_StartFiring
struct ARangedWeapon_Multicast_StartFiring_Params
{
};

// Function Robogore.RangedWeapon.Multicast_StartCharging
struct ARangedWeapon_Multicast_StartCharging_Params
{
};

// Function Robogore.RangedWeapon.Multicast_Reload
struct ARangedWeapon_Multicast_Reload_Params
{
};

// Function Robogore.RangedWeapon.Multicast_FireShot
struct ARangedWeapon_Multicast_FireShot_Params
{
	struct FVector_NetQuantize*                        from;                                                     // (Parm)
	struct FVector_NetQuantize*                        projectileVelocity;                                       // (Parm)
};

// Function Robogore.RangedWeapon.Multicast_CancelReload
struct ARangedWeapon_Multicast_CancelReload_Params
{
};

// Function Robogore.RangedWeapon.MaximumNumberOfFireAttemptsPerShot
struct ARangedWeapon_MaximumNumberOfFireAttemptsPerShot_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.RangedWeapon.IsFiring
struct ARangedWeapon_IsFiring_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.RangedWeapon.IsCharging
struct ARangedWeapon_IsCharging_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.RangedWeapon.GetReloadPercent
struct ARangedWeapon_GetReloadPercent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.RangedWeapon.GetRegenTotalPercentage
struct ARangedWeapon_GetRegenTotalPercentage_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.RangedWeapon.GetRegenTimeRemainingTotal
struct ARangedWeapon_GetRegenTimeRemainingTotal_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.RangedWeapon.GetRegenTimeRemainingForNextRound
struct ARangedWeapon_GetRegenTimeRemainingForNextRound_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.RangedWeapon.GetRegenPercentageForNextRound
struct ARangedWeapon_GetRegenPercentageForNextRound_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.RangedWeapon.GetNextMuzzleIndex
struct ARangedWeapon_GetNextMuzzleIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.RangedWeapon.GetMaxMagazineAmmo
struct ARangedWeapon_GetMaxMagazineAmmo_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.RangedWeapon.GetMaxChargeTime
struct ARangedWeapon_GetMaxChargeTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.RangedWeapon.GetMaxAmmo
struct ARangedWeapon_GetMaxAmmo_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.RangedWeapon.GetIsReloading
struct ARangedWeapon_GetIsReloading_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.RangedWeapon.GetCurrentAmmoTotal
struct ARangedWeapon_GetCurrentAmmoTotal_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.RangedWeapon.GetCurrentAmmoInMagazine
struct ARangedWeapon_GetCurrentAmmoInMagazine_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.RangedWeapon.GetCurrentAmmo
struct ARangedWeapon_GetCurrentAmmo_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.RangedWeapon.GetCurrentAccuracyPercentage
struct ARangedWeapon_GetCurrentAccuracyPercentage_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.RangedWeapon.GetCurrentAccuracy
struct ARangedWeapon_GetCurrentAccuracy_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.RangedWeapon.GetChargeTimeRemaining
struct ARangedWeapon_GetChargeTimeRemaining_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.RangedWeapon.GetChargeState
struct ARangedWeapon_GetChargeState_Params
{
	EeWeaponChargeState                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.RangedWeapon.GetChargeRatio
struct ARangedWeapon_GetChargeRatio_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.RangedWeapon.GetAutoFireMaxChargeTime
struct ARangedWeapon_GetAutoFireMaxChargeTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.RangedWeapon.GetAutoFireChargeTimeRemaining
struct ARangedWeapon_GetAutoFireChargeTimeRemaining_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.RangedWeapon.GetAutoFireChargeRatio
struct ARangedWeapon_GetAutoFireChargeRatio_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.RangedWeapon.GetActiveMuzzleIndex
struct ARangedWeapon_GetActiveMuzzleIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.RangedWeapon.DoesWeaponUseCharge
struct ARangedWeapon_DoesWeaponUseCharge_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.RangedWeapon.ChargeModifiesRoundCount
struct ARangedWeapon_ChargeModifiesRoundCount_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.RangedWeapon.CanRegenerateAmmo
struct ARangedWeapon_CanRegenerateAmmo_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.RangedWeaponHandlingComponent.Server_SetWantsAiming
struct URangedWeaponHandlingComponent_Server_SetWantsAiming_Params
{
	bool*                                              wantsAiming;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.RangedWeaponHandlingComponent.Server_SetIsAiming
struct URangedWeaponHandlingComponent_Server_SetIsAiming_Params
{
	bool*                                              aiming;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.RangedWeaponHandlingComponent.OnRepWeapons
struct URangedWeaponHandlingComponent_OnRepWeapons_Params
{
};

// Function Robogore.RangedWeaponHandlingComponent.OnRep_IsAiming
struct URangedWeaponHandlingComponent_OnRep_IsAiming_Params
{
};

// Function Robogore.RangedWeaponHandlingComponent.MultiCast_UpdateAimTargetData
struct URangedWeaponHandlingComponent_MultiCast_UpdateAimTargetData_Params
{
	struct FVector_NetQuantize*                        updatedAimData;                                           // (Parm)
};

// Function Robogore.RangedWeaponHandlingComponent.Multicast_DrawAimLine
struct URangedWeaponHandlingComponent_Multicast_DrawAimLine_Params
{
	struct FVector_NetQuantize*                        drawStart;                                                // (Parm)
	struct FVector_NetQuantize*                        drawEnd;                                                  // (Parm)
};

// Function Robogore.RangedWeaponHandlingComponent.Multicast_DrawAimDirection
struct URangedWeaponHandlingComponent_Multicast_DrawAimDirection_Params
{
	struct FVector_NetQuantize*                        drawStart;                                                // (Parm)
	struct FVector_NetQuantizeNormal*                  Direction;                                                // (Parm)
};

// Function Robogore.RangedWeaponHandlingComponent.IsAiming
struct URangedWeaponHandlingComponent_IsAiming_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.RangedWeaponHandlingComponent.GetAimingDataPerWeapon
struct URangedWeaponHandlingComponent_GetAimingDataPerWeapon_Params
{
	TArray<struct FWeaponAimingData>                   ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Robogore.RepairerComponent.NetMulticast_ExecuteRepair
struct URepairerComponent_NetMulticast_ExecuteRepair_Params
{
	struct FRepairInfo*                                RepairInfo;                                               // (ConstParm, Parm, ReferenceParm)
};

// Function Robogore.RepairerComponent.NetMulticast_AbortRepair
struct URepairerComponent_NetMulticast_AbortRepair_Params
{
};

// Function Robogore.RepairerComponent.ExecuteRepair
struct URepairerComponent_ExecuteRepair_Params
{
	struct FRepairInfo*                                RepairInfo;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Robogore.RepairerComponent.AbortRepair
struct URepairerComponent_AbortRepair_Params
{
};

// Function Robogore.RepairerSpawnerActor.OnComponentBeginOverlap
struct ARepairerSpawnerActor_OnComponentBeginOverlap_Params
{
	class UPrimitiveComponent**                        OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Robogore.RepairNanoSwarmActor.NetMulticast_RepairTarget
struct ARepairNanoSwarmActor_NetMulticast_RepairTarget_Params
{
	class AActor**                                     Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.ReplayOverlayWidget.OnTogglePause
struct UReplayOverlayWidget_OnTogglePause_Params
{
};

// Function Robogore.ReplayOverlayWidget.OnStopScrub
struct UReplayOverlayWidget_OnStopScrub_Params
{
};

// Function Robogore.ReplayOverlayWidget.OnStartScrub
struct UReplayOverlayWidget_OnStartScrub_Params
{
};

// Function Robogore.ReplayOverlayWidget.OnComboBoxValueChange
struct UReplayOverlayWidget_OnComboBoxValueChange_Params
{
	struct FString*                                    NewValue;                                                 // (Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>*                          Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.ReplayPlayerController.SetCameraShakeScale
struct AReplayPlayerController_SetCameraShakeScale_Params
{
	float*                                             NewScale;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.ReplayPlayerController.RestartReplay
struct AReplayPlayerController_RestartReplay_Params
{
	bool*                                              keepCurrentLocation;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.ResolutionConfirmMenu.OnRevertButton
struct UResolutionConfirmMenu_OnRevertButton_Params
{
};

// Function Robogore.ResolutionConfirmMenu.OnConfirmButton
struct UResolutionConfirmMenu_OnConfirmButton_Params
{
};

// Function Robogore.ReticleComponent.IsSnapping
struct UReticleComponent_IsSnapping_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.ReticleComponent.IsReticleOverEnemy
struct UReticleComponent_IsReticleOverEnemy_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.ReticleComponent.GetSnappedReticleViewportPosition
struct UReticleComponent_GetSnappedReticleViewportPosition_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.ReticleComponent.GetSnappedReticleOffset
struct UReticleComponent_GetSnappedReticleOffset_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.ReticleComponent.GetReticleViewportPosition
struct UReticleComponent_GetReticleViewportPosition_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.RetrievalSingleObjectObjectiveTracker.OnRep_ObjectiveStates
struct ARetrievalSingleObjectObjectiveTracker_OnRep_ObjectiveStates_Params
{
};

// Function Robogore.RetrievalCoreTrackingManager.OnRep_ActiveCores
struct ARetrievalCoreTrackingManager_OnRep_ActiveCores_Params
{
};

// Function Robogore.RetrievalCoreTrackingManager.NetMulticast_PlayExplosionFX
struct ARetrievalCoreTrackingManager_NetMulticast_PlayExplosionFX_Params
{
	struct FTransform*                                 SpawnTransform;                                           // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
};

// Function Robogore.RetrievalGameState.OnRep_TeamScores
struct ARetrievalGameState_OnRep_TeamScores_Params
{
};

// Function Robogore.RetrievalGameState.OnRep_PreviousRoundScores
struct ARetrievalGameState_OnRep_PreviousRoundScores_Params
{
};

// Function Robogore.RetrievalGameState.NetMulticast_OnItemScored
struct ARetrievalGameState_NetMulticast_OnItemScored_Params
{
	class ARetrievalPlayerState**                      scoringPlayer;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class ARetrievalObjectiveNodeActor**               Node;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.RetrievalGameState.NetMulticast_OnItemPickedUp
struct ARetrievalGameState_NetMulticast_OnItemPickedUp_Params
{
	class ARetrievalPlayerState**                      playerPickedUp;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class ARetrievalObjectiveNodeActor**               Node;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.RetrievalGameState.NetMulticast_OnItemFirstSpawned
struct ARetrievalGameState_NetMulticast_OnItemFirstSpawned_Params
{
	class ARetrievalPlayerState**                      playerPickedUp;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class ARetrievalObjectiveNodeActor**               Node;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.RetrievalGameState.NetMulticast_OnItemDropped
struct ARetrievalGameState_NetMulticast_OnItemDropped_Params
{
	class ARetrievalPlayerState**                      playerKilledCarrier;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class ARetrievalObjectiveNodeActor**               Node;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.RetrievalInteractableWidget.OnInteractEnd
struct URetrievalInteractableWidget_OnInteractEnd_Params
{
};

// Function Robogore.RetrievalInteractableWidget.OnInteractBegin
struct URetrievalInteractableWidget_OnInteractBegin_Params
{
};

// Function Robogore.RetrievalInteractableWidget.OnInteractableInactive
struct URetrievalInteractableWidget_OnInteractableInactive_Params
{
};

// Function Robogore.RetrievalInteractableWidget.OnInteractableActive
struct URetrievalInteractableWidget_OnInteractableActive_Params
{
};

// Function Robogore.RetrievalInteractableWidget.OnHoverStart
struct URetrievalInteractableWidget_OnHoverStart_Params
{
};

// Function Robogore.RetrievalInteractableWidget.OnHoverEnd
struct URetrievalInteractableWidget_OnHoverEnd_Params
{
};

// Function Robogore.RetrievalInteractableWidgetComponent.SetRelationship
struct URetrievalInteractableWidgetComponent_SetRelationship_Params
{
	bool*                                              useRelationship;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	EeTeamRelationship*                                relationship;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.RetrievalInteractableWidgetComponent.SetObjectiveState
struct URetrievalInteractableWidgetComponent_SetObjectiveState_Params
{
	EeRetrievalObjectiveState*                         State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.RetrievalInteractableWidgetComponent.SetObjectiveName
struct URetrievalInteractableWidgetComponent_SetObjectiveName_Params
{
	struct FText*                                      Name;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Robogore.RetrievalLiftoffActor.OnRep_DesiredState
struct ARetrievalLiftoffActor_OnRep_DesiredState_Params
{
};

// Function Robogore.RetrievalLiftoffActor.OnLaunchTimeOut_BP
struct ARetrievalLiftoffActor_OnLaunchTimeOut_BP_Params
{
};

// Function Robogore.RetrievalLiftoffActor.OnLaunch_BP
struct ARetrievalLiftoffActor_OnLaunch_BP_Params
{
};

// Function Robogore.RetrievalLiftoffActor.OnIdle_BP
struct ARetrievalLiftoffActor_OnIdle_BP_Params
{
};

// Function Robogore.RetrievalObjectiveHUDWidget.OnInteractEnd
struct URetrievalObjectiveHUDWidget_OnInteractEnd_Params
{
};

// Function Robogore.RetrievalObjectiveHUDWidget.OnInteractBegin
struct URetrievalObjectiveHUDWidget_OnInteractBegin_Params
{
};

// Function Robogore.RetrievalObjectiveNodeActor.OnNodeStateChange_BP
struct ARetrievalObjectiveNodeActor_OnNodeStateChange_BP_Params
{
	EeRetrievalObjectiveState*                         oldState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	EeRetrievalObjectiveState*                         NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.RetrievalOffscreenWidget.OnInteractEnd
struct URetrievalOffscreenWidget_OnInteractEnd_Params
{
};

// Function Robogore.RetrievalOffscreenWidget.OnInteractBegin
struct URetrievalOffscreenWidget_OnInteractBegin_Params
{
};

// Function Robogore.RetrievalOffscreenWidget.OnInteractableInactive
struct URetrievalOffscreenWidget_OnInteractableInactive_Params
{
};

// Function Robogore.RetrievalOffscreenWidget.OnInteractableActive
struct URetrievalOffscreenWidget_OnInteractableActive_Params
{
};

// Function Robogore.RetrievalPlayerController.Server_RETRIEVAL_DEBUG_SetScore
struct ARetrievalPlayerController_Server_RETRIEVAL_DEBUG_SetScore_Params
{
	int*                                               teamIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t*                                          score;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.RetrievalPlayerController.RETRIEVAL_DEBUG_SetScore
struct ARetrievalPlayerController_RETRIEVAL_DEBUG_SetScore_Params
{
	int*                                               teamIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t*                                          score;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.RetrievalScoreboardHeaderWidget.SetTeamColor
struct URetrievalScoreboardHeaderWidget_SetTeamColor_Params
{
	struct FLinearColor*                               Color;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Robogore.RetrievalSingleRoundPostGameConditionWidget.OnWin_Defenders
struct URetrievalSingleRoundPostGameConditionWidget_OnWin_Defenders_Params
{
};

// Function Robogore.RetrievalSingleRoundPostGameConditionWidget.OnWin_Attackers
struct URetrievalSingleRoundPostGameConditionWidget_OnWin_Attackers_Params
{
};

// Function Robogore.RetrievalSingleRoundPostGameConditionWidget.OnLoss_Defenders
struct URetrievalSingleRoundPostGameConditionWidget_OnLoss_Defenders_Params
{
};

// Function Robogore.RetrievalSingleRoundPostGameConditionWidget.OnLoss_Attackers
struct URetrievalSingleRoundPostGameConditionWidget_OnLoss_Attackers_Params
{
};

// Function Robogore.RobogoreGameInstance.UnlockAllMissions
struct URobogoreGameInstance_UnlockAllMissions_Params
{
};

// Function Robogore.RobogoreGameInstance.TakeOrthographicScreenShot
struct URobogoreGameInstance_TakeOrthographicScreenShot_Params
{
};

// Function Robogore.RobogoreGameInstance.SetForcePCControls
struct URobogoreGameInstance_SetForcePCControls_Params
{
	bool*                                              Force;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.RobogoreGameInstance.PrintMissionProgress
struct URobogoreGameInstance_PrintMissionProgress_Params
{
};

// Function Robogore.RobogoreGameInstance.OpenTutorialMap
struct URobogoreGameInstance_OpenTutorialMap_Params
{
};

// Function Robogore.RobogoreGameInstance.OpenLevel
struct URobogoreGameInstance_OpenLevel_Params
{
	struct FName*                                      Level;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.RobogoreGameInstance.OpenCurrentMission
struct URobogoreGameInstance_OpenCurrentMission_Params
{
};

// Function Robogore.RobogoreGameInstance.OpenCurrentGarage
struct URobogoreGameInstance_OpenCurrentGarage_Params
{
};

// Function Robogore.RobogoreGameInstance.GetViewportForcePCControls
struct URobogoreGameInstance_GetViewportForcePCControls_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.RobogoreGameInstance.GetStatsManager
struct URobogoreGameInstance_GetStatsManager_Params
{
	class URobogoreStatManager*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.RobogoreGameInstance.GetPlayerVault
struct URobogoreGameInstance_GetPlayerVault_Params
{
	class URobogorePlayerVault*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.RobogoreGameInstance.GetPlayerProfile
struct URobogoreGameInstance_GetPlayerProfile_Params
{
	class URobogorePlayerProfile*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.RobogoreGameInstance.GetPlayerChatLog
struct URobogoreGameInstance_GetPlayerChatLog_Params
{
	class UPersistentPlayerChatLog*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.RobogoreGameInstance.GetOnline
struct URobogoreGameInstance_GetOnline_Params
{
	class URobogoreOnline*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.RobogoreGameInstance.GetGameLevelTable
struct URobogoreGameInstance_GetGameLevelTable_Params
{
	class UDataTable*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.RobogoreGameInstance.GetEffectInstancingManager
struct URobogoreGameInstance_GetEffectInstancingManager_Params
{
	class UEffectInstancingManager*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.RobogoreGameInstance.GetDestructibleManager
struct URobogoreGameInstance_GetDestructibleManager_Params
{
	class UDestructibleManager*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.RobogoreGameInstance.GetDecalManager
struct URobogoreGameInstance_GetDecalManager_Params
{
	class UDecalManager*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.RobogoreGameInstance.GetColorManager
struct URobogoreGameInstance_GetColorManager_Params
{
	class UColorManager*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.RobogoreGameInstance.AdvanceMissionProgression
struct URobogoreGameInstance_AdvanceMissionProgression_Params
{
};

// Function Robogore.RobogoreOnline.Get
struct URobogoreOnline_Get_Params
{
	class UObject**                                    Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class URobogoreOnline*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.RobogoreRelationshipImageWidget.UpdateRelationshipColor
struct URobogoreRelationshipImageWidget_UpdateRelationshipColor_Params
{
};

// Function Robogore.RobogoreStatics.SetUnitThreatLevels
struct URobogoreStatics_SetUnitThreatLevels_Params
{
	class UObject**                                    WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TMap<struct FGameplayTag, float>*                  baseThreatLevels;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class APlayerController**                          Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.RobogoreStatics.SetMusicParams
struct URobogoreStatics_SetMusicParams_Params
{
	class UObject**                                    WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TMap<EeDynamicMusicLevel, struct FDynamicMusicLevelParams>* Params;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class APlayerController**                          Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.RobogoreStatics.SetCanAffectNavigation
struct URobogoreStatics_SetCanAffectNavigation_Params
{
	class UActorComponent**                            Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool*                                              canAffectNavigation;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.RobogoreStatics.PostGlobalMusicEvent
struct URobogoreStatics_PostGlobalMusicEvent_Params
{
	class UObject**                                    WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent**                              akEvent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.RobogoreStatics.IsGameMultiplayer
struct URobogoreStatics_IsGameMultiplayer_Params
{
	class UObject**                                    WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.RobogoreStatics.IsActorAlive
struct URobogoreStatics_IsActorAlive_Params
{
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.RobogoreStatics.GoToMainMenu
struct URobogoreStatics_GoToMainMenu_Params
{
	class UObject**                                    WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.RobogoreStatics.GetOwningPlayerController
struct URobogoreStatics_GetOwningPlayerController_Params
{
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.RobogoreStatics.GetDefaultGameMode
struct URobogoreStatics_GetDefaultGameMode_Params
{
	class UObject**                                    WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AGameModeBase*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.RobogoreStatics.FindScreenEdgePosition
struct URobogoreStatics_FindScreenEdgePosition_Params
{
	class UObject**                                    WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    WorldLocation;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector2D*                                  screenMargin;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FScreenEdgePositionResult                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Robogore.RobogoreStatics.CalculateScreenEdgeUIOffset
struct URobogoreStatics_CalculateScreenEdgeUIOffset_Params
{
	struct FVector2D*                                  screenPos;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UUserWidget**                                UserWidget;                                               // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.RuntimeInventoryComponent.OnRep_Inventory
struct URuntimeInventoryComponent_OnRep_Inventory_Params
{
};

// Function Robogore.RuntimeInventoryComponent.NetMulticast_PlayPickupAudio
struct URuntimeInventoryComponent_NetMulticast_PlayPickupAudio_Params
{
	struct FGameplayTag*                               ItemType;                                                 // (ConstParm, Parm, ReferenceParm)
};

// Function Robogore.RuntimeInventoryComponent.ItemValueInInventory_BP
struct URuntimeInventoryComponent_ItemValueInInventory_BP_Params
{
	struct FGameplayTag*                               Type;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	bool*                                              useCategory;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.RuntimeInventoryComponent.ItemValueInImplicitInventory_BP
struct URuntimeInventoryComponent_ItemValueInImplicitInventory_BP_Params
{
	struct FGameplayTag*                               Type;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.RuntimeInventoryComponent.ItemCountInInventory_BP
struct URuntimeInventoryComponent_ItemCountInInventory_BP_Params
{
	struct FGameplayTag*                               Type;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	bool*                                              useCategory;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.RuntimeInventoryComponent.ItemCountInImplicitInventory_BP
struct URuntimeInventoryComponent_ItemCountInImplicitInventory_BP_Params
{
	struct FGameplayTag*                               Type;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.RuntimeInventoryComponent.HasItemInInventory_BP
struct URuntimeInventoryComponent_HasItemInInventory_BP_Params
{
	struct FGameplayTag*                               Type;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	bool*                                              useCategory;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.SalvageCollectionUIWidget.OnCollectSalvage
struct USalvageCollectionUIWidget_OnCollectSalvage_Params
{
};

// Function Robogore.SalvageOwnershipComponent.OnRep_SalvageCount
struct USalvageOwnershipComponent_OnRep_SalvageCount_Params
{
};

// Function Robogore.SmartObjectProgressUserWidget.UpdateMoveTo
struct USmartObjectProgressUserWidget_UpdateMoveTo_Params
{
	float*                                             dt;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.SmartObjectProgressUserWidget.UpdateInteraction
struct USmartObjectProgressUserWidget_UpdateInteraction_Params
{
	float*                                             dt;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.SmartObjectProgressUserWidget.StartMoveTo
struct USmartObjectProgressUserWidget_StartMoveTo_Params
{
};

// Function Robogore.SmartObjectProgressUserWidget.StartInteraction
struct USmartObjectProgressUserWidget_StartInteraction_Params
{
};

// Function Robogore.SmartObjectProgressUserWidget.SetInteractionLength
struct USmartObjectProgressUserWidget_SetInteractionLength_Params
{
	float*                                             Len;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.SmartObjectProgressUserWidget.EndMoveTo
struct USmartObjectProgressUserWidget_EndMoveTo_Params
{
};

// Function Robogore.SmartObjectProgressUserWidget.CompleteInteraction
struct USmartObjectProgressUserWidget_CompleteInteraction_Params
{
};

// Function Robogore.SmartObjectProgressUserWidget.CancelInteraction
struct USmartObjectProgressUserWidget_CancelInteraction_Params
{
};

// Function Robogore.SaveGameWidget.OnWidgetShowBP
struct USaveGameWidget_OnWidgetShowBP_Params
{
};

// Function Robogore.SaveGameWidget.HideWidget
struct USaveGameWidget_HideWidget_Params
{
};

// Function Robogore.ScoreboardTileWidget.GetPlayerTeamId
struct UScoreboardTileWidget_GetPlayerTeamId_Params
{
	EeTeamID                                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.SequenceInteraction.OnSequenceComplete
struct USequenceInteraction_OnSequenceComplete_Params
{
};

// Function Robogore.SettingsOptionsWidget.EnableBP
struct USettingsOptionsWidget_EnableBP_Params
{
};

// Function Robogore.SettingsOptionsWidget.DisableBP
struct USettingsOptionsWidget_DisableBP_Params
{
};

// Function Robogore.SettingsAbilityStagingModeOption.OnSettingsUnHovered
struct USettingsAbilityStagingModeOption_OnSettingsUnHovered_Params
{
};

// Function Robogore.SettingsAbilityStagingModeOption.OnSettingsHovered
struct USettingsAbilityStagingModeOption_OnSettingsHovered_Params
{
};

// Function Robogore.SettingsAbilityStagingModeOption.OnOptionValueChanged
struct USettingsAbilityStagingModeOption_OnOptionValueChanged_Params
{
	int*                                               Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText*                                      Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Robogore.SettingsAbilityStagingModeOption.OnButtonUnHovered
struct USettingsAbilityStagingModeOption_OnButtonUnHovered_Params
{
};

// Function Robogore.SettingsAbilityStagingModeOption.OnButtonHovered
struct USettingsAbilityStagingModeOption_OnButtonHovered_Params
{
};

// Function Robogore.SettingsAnnouncerOption.OnSettingsUnHovered
struct USettingsAnnouncerOption_OnSettingsUnHovered_Params
{
};

// Function Robogore.SettingsAnnouncerOption.OnSettingsHovered
struct USettingsAnnouncerOption_OnSettingsHovered_Params
{
};

// Function Robogore.SettingsAnnouncerOption.OnOptionValueChanged
struct USettingsAnnouncerOption_OnOptionValueChanged_Params
{
	int*                                               Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText*                                      Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Robogore.SettingsAnnouncerOption.OnButtonUnHovered
struct USettingsAnnouncerOption_OnButtonUnHovered_Params
{
};

// Function Robogore.SettingsAnnouncerOption.OnButtonHovered
struct USettingsAnnouncerOption_OnButtonHovered_Params
{
};

// Function Robogore.SettingsSubMenu.ResetToDefault
struct USettingsSubMenu_ResetToDefault_Params
{
};

// Function Robogore.SettingsBindingSubMenu.DefaultButtonPressed
struct USettingsBindingSubMenu_DefaultButtonPressed_Params
{
};

// Function Robogore.SettingsBindingSubMenu.AnimateToast
struct USettingsBindingSubMenu_AnimateToast_Params
{
};

// Function Robogore.SettingsControlSchemeOption.OnSettingsUnHovered
struct USettingsControlSchemeOption_OnSettingsUnHovered_Params
{
};

// Function Robogore.SettingsControlSchemeOption.OnSettingsHovered
struct USettingsControlSchemeOption_OnSettingsHovered_Params
{
};

// Function Robogore.SettingsControlSchemeOption.OnOptionValueChanged
struct USettingsControlSchemeOption_OnOptionValueChanged_Params
{
	int*                                               Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText*                                      Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Robogore.SettingsControlSchemeOption.OnButtonUnHovered
struct USettingsControlSchemeOption_OnButtonUnHovered_Params
{
};

// Function Robogore.SettingsControlSchemeOption.OnButtonHovered
struct USettingsControlSchemeOption_OnButtonHovered_Params
{
};

// Function Robogore.SettingsFrameRateLimitOption.OnSettingsUnHovered
struct USettingsFrameRateLimitOption_OnSettingsUnHovered_Params
{
};

// Function Robogore.SettingsFrameRateLimitOption.OnSettingsHovered
struct USettingsFrameRateLimitOption_OnSettingsHovered_Params
{
};

// Function Robogore.SettingsFrameRateLimitOption.OnOptionValueChanged
struct USettingsFrameRateLimitOption_OnOptionValueChanged_Params
{
	int*                                               Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText*                                      Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Robogore.SettingsFrameRateLimitOption.OnButtonUnHovered
struct USettingsFrameRateLimitOption_OnButtonUnHovered_Params
{
};

// Function Robogore.SettingsOptionsSlider.OnValueChanged
struct USettingsOptionsSlider_OnValueChanged_Params
{
	float*                                             Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.SettingsOptionsSlider.OnTextChange
struct USettingsOptionsSlider_OnTextChange_Params
{
	struct FText*                                      Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>*                          commitType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.SettingsOptionsSlider.OnSliderUnHovered
struct USettingsOptionsSlider_OnSliderUnHovered_Params
{
};

// Function Robogore.SettingsOptionsSlider.OnSliderHovered
struct USettingsOptionsSlider_OnSliderHovered_Params
{
};

// Function Robogore.SettingsOptionsSlider.OnSettingsUnHovered
struct USettingsOptionsSlider_OnSettingsUnHovered_Params
{
};

// Function Robogore.SettingsOptionsSlider.OnSettingsHovered
struct USettingsOptionsSlider_OnSettingsHovered_Params
{
};

// Function Robogore.SettingsGraphicsOption.OnSettingsUnHovered
struct USettingsGraphicsOption_OnSettingsUnHovered_Params
{
};

// Function Robogore.SettingsGraphicsOption.OnSettingsHovered
struct USettingsGraphicsOption_OnSettingsHovered_Params
{
};

// Function Robogore.SettingsGraphicsOption.OnOptionValueChanged
struct USettingsGraphicsOption_OnOptionValueChanged_Params
{
	int*                                               Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText*                                      Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Robogore.SettingsGraphicsOption.OnButtonUnHovered
struct USettingsGraphicsOption_OnButtonUnHovered_Params
{
};

// Function Robogore.SettingsGraphicsOption.OnButtonHovered
struct USettingsGraphicsOption_OnButtonHovered_Params
{
};

// Function Robogore.SettingsOptionsBoolean.OnValueChanged
struct USettingsOptionsBoolean_OnValueChanged_Params
{
	int*                                               Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText*                                      Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Robogore.SettingsOptionsBoolean.OnSettingsUnHovered
struct USettingsOptionsBoolean_OnSettingsUnHovered_Params
{
};

// Function Robogore.SettingsOptionsBoolean.OnSettingsHovered
struct USettingsOptionsBoolean_OnSettingsHovered_Params
{
};

// Function Robogore.SettingsOptionsBoolean.OnButtonUnHovered
struct USettingsOptionsBoolean_OnButtonUnHovered_Params
{
};

// Function Robogore.SettingsOptionsBoolean.OnButtonHovered
struct USettingsOptionsBoolean_OnButtonHovered_Params
{
};

// Function Robogore.SettingsKeyBindingOption.OnWidgetsUnhovered
struct USettingsKeyBindingOption_OnWidgetsUnhovered_Params
{
};

// Function Robogore.SettingsKeyBindingOption.OnUnBindButtonPressed
struct USettingsKeyBindingOption_OnUnBindButtonPressed_Params
{
};

// Function Robogore.SettingsKeyBindingOption.OnSettingsUnHovered
struct USettingsKeyBindingOption_OnSettingsUnHovered_Params
{
};

// Function Robogore.SettingsKeyBindingOption.OnSettingsHovered
struct USettingsKeyBindingOption_OnSettingsHovered_Params
{
};

// Function Robogore.SettingsOptionsBox.OnOpenButtonPressed
struct USettingsOptionsBox_OnOpenButtonPressed_Params
{
};

// Function Robogore.SettingsResolutionOption.OnSettingsUnHovered
struct USettingsResolutionOption_OnSettingsUnHovered_Params
{
};

// Function Robogore.SettingsResolutionOption.OnSettingsHovered
struct USettingsResolutionOption_OnSettingsHovered_Params
{
};

// Function Robogore.SettingsResolutionOption.OnOptionValueChanged
struct USettingsResolutionOption_OnOptionValueChanged_Params
{
	int*                                               Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText*                                      Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Robogore.SettingsResolutionOption.OnButtonUnHovered
struct USettingsResolutionOption_OnButtonUnHovered_Params
{
};

// Function Robogore.SettingsResolutionOption.OnButtonHovered
struct USettingsResolutionOption_OnButtonHovered_Params
{
};

// Function Robogore.SettingsWindowTypeOption.OnSettingsUnHovered
struct USettingsWindowTypeOption_OnSettingsUnHovered_Params
{
};

// Function Robogore.SettingsWindowTypeOption.OnSettingsHovered
struct USettingsWindowTypeOption_OnSettingsHovered_Params
{
};

// Function Robogore.SettingsWindowTypeOption.OnOptionValueChanged
struct USettingsWindowTypeOption_OnOptionValueChanged_Params
{
	int*                                               Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText*                                      Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Robogore.SettingsWindowTypeOption.OnButtonUnHovered
struct USettingsWindowTypeOption_OnButtonUnHovered_Params
{
};

// Function Robogore.SpawnActorAtComponent.Spawn
struct USpawnActorAtComponent_Spawn_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.SpawnActorAtComponent.Multicast_Spawn
struct USpawnActorAtComponent_Multicast_Spawn_Params
{
};

// Function Robogore.SpawnController.IsWaiting
struct ASpawnController_IsWaiting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.SpawnController.IsComplete
struct ASpawnController_IsComplete_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.SpawnController.EndSpawn
struct ASpawnController_EndSpawn_Params
{
};

// Function Robogore.SpawnController.BeginSpawn
struct ASpawnController_BeginSpawn_Params
{
};

// Function Robogore.SpawnController.AdvanceSpawn
struct ASpawnController_AdvanceSpawn_Params
{
};

// Function Robogore.Spawn_Squad.AddSpawnSquadActor
struct USpawn_Squad_AddSpawnSquadActor_Params
{
	class ASpawnSquadActor**                           SpawnSquadActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.Spawn_Squad.AddPathGraphActor
struct USpawn_Squad_AddPathGraphActor_Params
{
	class APathGraphActor**                            PathGraphActor;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.Spawn_Squad.AddDefendAreaActor
struct USpawn_Squad_AddDefendAreaActor_Params
{
	class ADefendAreaActor**                           DefendAreaActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.SplashScreenWidget.SplashComplete
struct USplashScreenWidget_SplashComplete_Params
{
};

// Function Robogore.SplashScreenWidget.SkipCurrentSplash
struct USplashScreenWidget_SkipCurrentSplash_Params
{
};

// Function Robogore.SquadActor.OnRep_SquadContainer
struct ASquadActor_OnRep_SquadContainer_Params
{
};

// Function Robogore.SquadActor.GetAllUnitInstances
struct ASquadActor_GetAllUnitInstances_Params
{
	TArray<class AUnitBaseActor*>                      squadInstances;                                           // (Parm, OutParm, ZeroConstructor)
};

// Function Robogore.SquadHUDWidget.OnSquadOrderStatusChanged_BP
struct USquadHUDWidget_OnSquadOrderStatusChanged_BP_Params
{
	EeSquadHUDOrderStatus*                             newStatus;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.SquadHUDWidget.OnSquadMembersHUDModified_BP
struct USquadHUDWidget_OnSquadMembersHUDModified_BP_Params
{
	int*                                               mainSquadMembersCount;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.SquadMemberHUDWidget.OnInvalidInputPressed_BP
struct USquadMemberHUDWidget_OnInvalidInputPressed_BP_Params
{
};

// Function Robogore.SquadMemberHUDWidget.OnInputResponseCapableChanged_BP
struct USquadMemberHUDWidget_OnInputResponseCapableChanged_BP_Params
{
	bool*                                              hasInput;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.SquadMemberHUDWidget.OnAbilityStagingEnd_BP
struct USquadMemberHUDWidget_OnAbilityStagingEnd_BP_Params
{
};

// Function Robogore.SquadMemberHUDWidget.OnAbilityStagingCancelled_BP
struct USquadMemberHUDWidget_OnAbilityStagingCancelled_BP_Params
{
};

// Function Robogore.SquadMemberHUDWidget.OnAbilityStagingBegin_BP
struct USquadMemberHUDWidget_OnAbilityStagingBegin_BP_Params
{
};

// Function Robogore.SquadMemberHUDWidget.OnAbilityActivated_BP
struct USquadMemberHUDWidget_OnAbilityActivated_BP_Params
{
};

// Function Robogore.StartMenu.ShowRequiredWidgets
struct UStartMenu_ShowRequiredWidgets_Params
{
};

// Function Robogore.StartMenu.OnEULAAccept
struct UStartMenu_OnEULAAccept_Params
{
};

// Function Robogore.StartMenu.DoneWithRequiredWidgets
struct UStartMenu_DoneWithRequiredWidgets_Params
{
};

// Function Robogore.WeaponAbility.Server_SetWeaponTarget
struct AWeaponAbility_Server_SetWeaponTarget_Params
{
	class AActor**                                     aimTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.WeaponAbility.Server_ApplyAimAssistConfig
struct AWeaponAbility_Server_ApplyAimAssistConfig_Params
{
	bool*                                              useZoomConfig;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.WeaponAbility.OnWeaponFireCallback
struct AWeaponAbility_OnWeaponFireCallback_Params
{
};

// Function Robogore.WeaponAbility.OnRep_AttachedWeapon
struct AWeaponAbility_OnRep_AttachedWeapon_Params
{
};

// Function Robogore.WeaponAbility.IsWithinMaxRange
struct AWeaponAbility_IsWithinMaxRange_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.WeaponAbility.IsWeaponDisabled
struct AWeaponAbility_IsWeaponDisabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.WeaponAbility.IsReloading
struct AWeaponAbility_IsReloading_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.WeaponAbility.IsAlternateAbility
struct AWeaponAbility_IsAlternateAbility_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.WeaponAbility.GetTotalAmmoCount
struct AWeaponAbility_GetTotalAmmoCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.WeaponAbility.GetReloadPercentage
struct AWeaponAbility_GetReloadPercentage_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.WeaponAbility.GetRegenTotalPercentage
struct AWeaponAbility_GetRegenTotalPercentage_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.WeaponAbility.GetRegenTimeRemainingTotal
struct AWeaponAbility_GetRegenTimeRemainingTotal_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.WeaponAbility.GetRegenTimeRemainingForNextRound
struct AWeaponAbility_GetRegenTimeRemainingForNextRound_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.WeaponAbility.GetRegenPercentageForNextRound
struct AWeaponAbility_GetRegenPercentageForNextRound_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.WeaponAbility.GetDamageFalloffToTarget
struct AWeaponAbility_GetDamageFalloffToTarget_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.WeaponAbility.GetAttachedWeapon
struct AWeaponAbility_GetAttachedWeapon_Params
{
	class ARangedWeapon*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.WeaponAbility.GetAmmoCountInMagazine
struct AWeaponAbility_GetAmmoCountInMagazine_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.WeaponAbility.CanRegenerateAmmo
struct AWeaponAbility_CanRegenerateAmmo_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.StickyGrendadeAbility.Server_DetonateStickyGrenades
struct AStickyGrendadeAbility_Server_DetonateStickyGrenades_Params
{
};

// Function Robogore.WeaponAbilityHUDWidget.BP_OnDisabledStatusChanged
struct UWeaponAbilityHUDWidget_BP_OnDisabledStatusChanged_Params
{
	bool*                                              Disabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.WeaponAbilityHUDWidget.BP_OnActiveStatusChanged
struct UWeaponAbilityHUDWidget_BP_OnActiveStatusChanged_Params
{
	bool*                                              IsActive;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.StickyGrenadesAbilityHUDBottomWidget.GetActiveStickyCount
struct UStickyGrenadesAbilityHUDBottomWidget_GetActiveStickyCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.TaggableActorManager.RemoveCustomTags
struct UTaggableActorManager_RemoveCustomTags_Params
{
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>*                              Tags;                                                     // (Parm, ZeroConstructor)
};

// Function Robogore.TaggableActorManager.RemoveCustomTag
struct UTaggableActorManager_RemoveCustomTag_Params
{
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      Tag;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.TaggableActorManager.ContainsCustomTag
struct UTaggableActorManager_ContainsCustomTag_Params
{
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      Tag;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.TaggableActorManager.ContainsAnyCustomTags
struct UTaggableActorManager_ContainsAnyCustomTags_Params
{
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>*                              Tags;                                                     // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.TaggableActorManager.AddCustomTags
struct UTaggableActorManager_AddCustomTags_Params
{
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>*                              Tags;                                                     // (Parm, ZeroConstructor)
};

// Function Robogore.TaggableActorManager.AddCustomTag
struct UTaggableActorManager_AddCustomTag_Params
{
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      Tag;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.TargetNavLocatorInterface.GetNavLocator
struct UTargetNavLocatorInterface_GetNavLocator_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.TCControlPointHUDWidget.SetNumberOfFriendliesOnPoint
struct UTCControlPointHUDWidget_SetNumberOfFriendliesOnPoint_Params
{
	int*                                               Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.TCControlPointHUDWidget.SetNumberOfEnemiesOnPoint
struct UTCControlPointHUDWidget_SetNumberOfEnemiesOnPoint_Params
{
	int*                                               Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.TCControlPointHUDWidget.SetCriticalActorRatio
struct UTCControlPointHUDWidget_SetCriticalActorRatio_Params
{
	float*                                             Ratio;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.TCControlPointHUDWidget.SetCaptureRatio
struct UTCControlPointHUDWidget_SetCaptureRatio_Params
{
	float*                                             Ratio;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.TCControlPointHUDWidget.SetCaptureBarColor
struct UTCControlPointHUDWidget_SetCaptureBarColor_Params
{
	struct FLinearColor*                               Color;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.TCControlPointHUDWidget.OnVacant
struct UTCControlPointHUDWidget_OnVacant_Params
{
};

// Function Robogore.TCControlPointHUDWidget.OnTookDamageStart
struct UTCControlPointHUDWidget_OnTookDamageStart_Params
{
	bool*                                              isPointOwnedByFriendly;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.TCControlPointHUDWidget.OnTookDamageEnd
struct UTCControlPointHUDWidget_OnTookDamageEnd_Params
{
};

// Function Robogore.TCControlPointHUDWidget.OnStartOfRound
struct UTCControlPointHUDWidget_OnStartOfRound_Params
{
};

// Function Robogore.TCControlPointHUDWidget.OnOccupiedFriendly
struct UTCControlPointHUDWidget_OnOccupiedFriendly_Params
{
};

// Function Robogore.TCControlPointHUDWidget.OnOccupiedEnemy
struct UTCControlPointHUDWidget_OnOccupiedEnemy_Params
{
};

// Function Robogore.TCControlPointHUDWidget.OnContestingFriendly
struct UTCControlPointHUDWidget_OnContestingFriendly_Params
{
};

// Function Robogore.TCControlPointHUDWidget.OnContestingEnemy
struct UTCControlPointHUDWidget_OnContestingEnemy_Params
{
};

// Function Robogore.TCControlPointHUDWidget.OnCaptureStartFriendly
struct UTCControlPointHUDWidget_OnCaptureStartFriendly_Params
{
};

// Function Robogore.TCControlPointHUDWidget.OnCaptureStartEnemy
struct UTCControlPointHUDWidget_OnCaptureStartEnemy_Params
{
};

// Function Robogore.TCControlPointHUDWidget.OnCaptured
struct UTCControlPointHUDWidget_OnCaptured_Params
{
	bool*                                              isPointOwnedByFriendly;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.TCGameState.OnRep_TeamScores
struct ATCGameState_OnRep_TeamScores_Params
{
};

// Function Robogore.TCLivingPlayerOverlayWidget.SetPointInteractVisible
struct UTCLivingPlayerOverlayWidget_SetPointInteractVisible_Params
{
	bool*                                              Visible;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.TCLivingPlayerOverlayWidget.SetPointInteractState
struct UTCLivingPlayerOverlayWidget_SetPointInteractState_Params
{
	EeCaptureAreaCaptureState*                         State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.TCLivingPlayerOverlayWidget.SetPointInteractRatio
struct UTCLivingPlayerOverlayWidget_SetPointInteractRatio_Params
{
	float*                                             Ratio;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.TCLivingPlayerOverlayWidget.SetPointInteractName
struct UTCLivingPlayerOverlayWidget_SetPointInteractName_Params
{
	struct FString*                                    Name;                                                     // (Parm, ZeroConstructor)
};

// Function Robogore.TCLivingPlayerOverlayWidget.SetPointInteractColor
struct UTCLivingPlayerOverlayWidget_SetPointInteractColor_Params
{
	struct FLinearColor*                               Color;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.TCLivingPlayerOverlayWidget.OnStartOfRound
struct UTCLivingPlayerOverlayWidget_OnStartOfRound_Params
{
};

// Function Robogore.TCOverlayWidget.ShowWorldControlPointWidgets
struct UTCOverlayWidget_ShowWorldControlPointWidgets_Params
{
};

// Function Robogore.TCOverlayWidget.ShowHUDControlPointWidgets
struct UTCOverlayWidget_ShowHUDControlPointWidgets_Params
{
};

// Function Robogore.TCOverlayWidget.OnStartOfRound
struct UTCOverlayWidget_OnStartOfRound_Params
{
};

// Function Robogore.TCPlayerController.TC_DEBUG_ReleasePoint
struct ATCPlayerController_TC_DEBUG_ReleasePoint_Params
{
	struct FString*                                    pointName;                                                // (Parm, ZeroConstructor)
};

// Function Robogore.TCPlayerController.TC_DEBUG_ReleaseAllPoints
struct ATCPlayerController_TC_DEBUG_ReleaseAllPoints_Params
{
};

// Function Robogore.TCPlayerController.TC_DEBUG_CapturePoint
struct ATCPlayerController_TC_DEBUG_CapturePoint_Params
{
	struct FString*                                    pointName;                                                // (Parm, ZeroConstructor)
	int*                                               teamIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.TCPlayerController.TC_DEBUG_CaptureAllPoints
struct ATCPlayerController_TC_DEBUG_CaptureAllPoints_Params
{
	int*                                               teamIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.TCPlayerController.Server_TC_DEBUG_ReleasePoint
struct ATCPlayerController_Server_TC_DEBUG_ReleasePoint_Params
{
	struct FString*                                    pointName;                                                // (Parm, ZeroConstructor)
};

// Function Robogore.TCPlayerController.Server_TC_DEBUG_ReleaseAllPoints
struct ATCPlayerController_Server_TC_DEBUG_ReleaseAllPoints_Params
{
};

// Function Robogore.TCPlayerController.Server_TC_DEBUG_CapturePoint
struct ATCPlayerController_Server_TC_DEBUG_CapturePoint_Params
{
	struct FString*                                    pointName;                                                // (Parm, ZeroConstructor)
	int*                                               teamIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.TCPlayerController.Server_TC_DEBUG_CaptureAllPoints
struct ATCPlayerController_Server_TC_DEBUG_CaptureAllPoints_Params
{
	int*                                               teamIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.TCPointActor.NetMulticast_OnPointCaptureStart
struct ATCPointActor_NetMulticast_OnPointCaptureStart_Params
{
	EeTeamID*                                          teamInControl;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	EeTeamID*                                          teamAttemptingControl;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.TCPointActor.NetMulticast_OnPointCaptured
struct ATCPointActor_NetMulticast_OnPointCaptured_Params
{
	EeTeamID*                                          teamInControl;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	EeTeamID*                                          previousTeam;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.TCPointActor.NetMulticast_OnPointCaptureCancelled
struct ATCPointActor_NetMulticast_OnPointCaptureCancelled_Params
{
	EeTeamID*                                          teamInControl;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	EeTeamID*                                          teamAttemptingControl;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.TCPointActor.IsCaptured
struct ATCPointActor_IsCaptured_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.TCPointActor.GetPointName
struct ATCPointActor_GetPointName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Robogore.TCPointActor.GetOrderInHUD
struct ATCPointActor_GetOrderInHUD_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.TCPointActor.GetCurrentOwner
struct ATCPointActor_GetCurrentOwner_Params
{
	EeTeamID                                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.TCPointActor.GetCriticalActorRatio
struct ATCPointActor_GetCriticalActorRatio_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.TCPointDefenseSpawnComponent.OnRep_DefenseActorInstance
struct UTCPointDefenseSpawnComponent_OnRep_DefenseActorInstance_Params
{
};

// Function Robogore.TCPointDefenseSpawnComponent.NetMulticast_WaitForRespawn
struct UTCPointDefenseSpawnComponent_NetMulticast_WaitForRespawn_Params
{
};

// Function Robogore.TCPointDefenseSpawnComponent.NetMulticast_WaitForInitialSpawn
struct UTCPointDefenseSpawnComponent_NetMulticast_WaitForInitialSpawn_Params
{
};

// Function Robogore.TCPointDefenseSpawnComponent.NetMulticast_SpawnDelayedSpawnParticle
struct UTCPointDefenseSpawnComponent_NetMulticast_SpawnDelayedSpawnParticle_Params
{
};

// Function Robogore.TCPointDefenseSpawnComponent.NetMulticast_OnDefenseSpawned
struct UTCPointDefenseSpawnComponent_NetMulticast_OnDefenseSpawned_Params
{
};

// Function Robogore.TCPointDefenseSpawnComponent.NetMulticast_OnDefenseDestroyed
struct UTCPointDefenseSpawnComponent_NetMulticast_OnDefenseDestroyed_Params
{
};

// Function Robogore.TCPointDefenseSpawnComponent.IsSpawning
struct UTCPointDefenseSpawnComponent_IsSpawning_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.TCPointDefenseSpawnComponent.IsRespawning
struct UTCPointDefenseSpawnComponent_IsRespawning_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.TCPointDefenseSpawnComponent.IsPointControlled
struct UTCPointDefenseSpawnComponent_IsPointControlled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.TCPointDefenseSpawnComponent.IsCritical
struct UTCPointDefenseSpawnComponent_IsCritical_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.TCPointDefenseSpawnComponent.GetRespawnTimerRatio
struct UTCPointDefenseSpawnComponent_GetRespawnTimerRatio_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.TCPointDefenseSpawnComponent.GetOwningTeam
struct UTCPointDefenseSpawnComponent_GetOwningTeam_Params
{
	EeTeamID                                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.TCPointDefenseSpawnComponent.GetInitialSpawnTimerRatio
struct UTCPointDefenseSpawnComponent_GetInitialSpawnTimerRatio_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.TCPointDefenseWidget.SetTimerRatio
struct UTCPointDefenseWidget_SetTimerRatio_Params
{
	float*                                             Ratio;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.TCPointDefenseWidget.SetOwningSpawnComponent
struct UTCPointDefenseWidget_SetOwningSpawnComponent_Params
{
	class UTCPointDefenseSpawnComponent**              Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Robogore.TCScoreboardHeaderWidget.SetTeamColor
struct UTCScoreboardHeaderWidget_SetTeamColor_Params
{
	struct FLinearColor*                               Color;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Robogore.TDMScoreboardHeader.SetTeamColor
struct UTDMScoreboardHeader_SetTeamColor_Params
{
	struct FLinearColor*                               Color;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Robogore.TeamComponent.S_GetTeamComponent
struct UTeamComponent_S_GetTeamComponent_Params
{
	class AActor**                                     Actor;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UTeamComponent*                              ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Robogore.TeamComponent.S_GetResponsibleTeamComponent
struct UTeamComponent_S_GetResponsibleTeamComponent_Params
{
	class AActor**                                     Actor;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UTeamComponent*                              ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Robogore.TeamComponent.S_GetComponentFromInterface
struct UTeamComponent_S_GetComponentFromInterface_Params
{
	class AActor**                                     Actor;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UTeamComponent*                              ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Robogore.TeamComponent.OverrideTargetTeamRelationship
struct UTeamComponent_OverrideTargetTeamRelationship_Params
{
	EeTeamID*                                          querierTeam;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	EeTeamMatrixRelationship*                          newRelationship;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.TeamComponent.OverrideQuerierTeamRelationship
struct UTeamComponent_OverrideQuerierTeamRelationship_Params
{
	EeTeamID*                                          targetedTeam;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	EeTeamMatrixRelationship*                          newRelationship;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.TeamComponent.OnRep_TeamID
struct UTeamComponent_OnRep_TeamID_Params
{
};

// Function Robogore.TeamComponent.OnRep_TargetOverrides
struct UTeamComponent_OnRep_TargetOverrides_Params
{
};

// Function Robogore.TeamComponent.OnRep_QuerierOverrides
struct UTeamComponent_OnRep_QuerierOverrides_Params
{
};

// Function Robogore.TeamComponent.OnRep_CommanderID
struct UTeamComponent_OnRep_CommanderID_Params
{
};

// Function Robogore.TeamComponent.IsNeutral
struct UTeamComponent_IsNeutral_Params
{
	class UTeamComponent**                             Other;                                                    // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.TeamComponent.IsFriendly
struct UTeamComponent_IsFriendly_Params
{
	class UTeamComponent**                             Other;                                                    // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.TeamComponent.IsEnemy
struct UTeamComponent_IsEnemy_Params
{
	class UTeamComponent**                             Other;                                                    // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.TeamComponent.IsCommandedBy
struct UTeamComponent_IsCommandedBy_Params
{
	class UTeamComponent**                             Other;                                                    // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.TeamComponent.IsACommander
struct UTeamComponent_IsACommander_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.TeamComponent.HasSameCommander
struct UTeamComponent_HasSameCommander_Params
{
	class UTeamComponent**                             otherTeamComponent;                                       // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.TeamComponent.GetTeamRelationshipDecorator
struct UTeamComponent_GetTeamRelationshipDecorator_Params
{
	class UColorDefinition*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.TeamComponent.GetTeamManager
struct UTeamComponent_GetTeamManager_Params
{
	struct FTeamManager                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Robogore.TeamComponent.GetTeamID
struct UTeamComponent_GetTeamID_Params
{
	EeTeamID                                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.TeamComponent.GetTeamDecorator
struct UTeamComponent_GetTeamDecorator_Params
{
	class UColorDefinition*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.TeamComponent.GetRelationshipToLocalPlayerController
struct UTeamComponent_GetRelationshipToLocalPlayerController_Params
{
	EeTeamRelationship                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.TeamComponent.GetRelationshipTo
struct UTeamComponent_GetRelationshipTo_Params
{
	class UTeamComponent**                             Other;                                                    // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	EeTeamRelationship                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.TeamComponent.GetCommanderID
struct UTeamComponent_GetCommanderID_Params
{
	EeCommanderID                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.TeamComponent.AssignTeam
struct UTeamComponent_AssignTeam_Params
{
	EeTeamID*                                          Team;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.TeamComponent.AssignCommander
struct UTeamComponent_AssignCommander_Params
{
	EeCommanderID*                                     Commander;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.TeamDecorator.GetUnitColor
struct UTeamDecorator_GetUnitColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.TeamDecorator.GetTeamName
struct UTeamDecorator_GetTeamName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.TeamDecorator.GetProjectileColor
struct UTeamDecorator_GetProjectileColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.TeamDecorator.GetPostProcessingColor
struct UTeamDecorator_GetPostProcessingColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.TeamDecorator.GetHUDColor
struct UTeamDecorator_GetHUDColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.TeamDecorator.GetFXColor
struct UTeamDecorator_GetFXColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.TeamDecorator.GetCommandPulseColor
struct UTeamDecorator_GetCommandPulseColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.TeamDecorator.GetColor
struct UTeamDecorator_GetColor_Params
{
	struct FGameplayTag*                               Tag;                                                      // (Parm)
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.TeamUtilities.S_IsNeutralWithLocalPlayerController
struct UTeamUtilities_S_IsNeutralWithLocalPlayerController_Params
{
	class UObject**                                    WorldContext;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UTeamComponent**                             Target;                                                   // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.TeamUtilities.S_IsFriendlyWithLocalPlayerController
struct UTeamUtilities_S_IsFriendlyWithLocalPlayerController_Params
{
	class UObject**                                    WorldContext;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UTeamComponent**                             Target;                                                   // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.TeamUtilities.S_IsEnemyWithLocalPlayerController
struct UTeamUtilities_S_IsEnemyWithLocalPlayerController_Params
{
	class UObject**                                    WorldContext;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UTeamComponent**                             Target;                                                   // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.TeamUtilities.S_HasSameCommanderAs_LocalPlayerController
struct UTeamUtilities_S_HasSameCommanderAs_LocalPlayerController_Params
{
	class UObject**                                    WorldContext;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UTeamComponent**                             Target;                                                   // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.TeamUtilities.S_HasSameCommander
struct UTeamUtilities_S_HasSameCommander_Params
{
	class UTeamComponent**                             querier;                                                  // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTeamComponent**                             Target;                                                   // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.TeamUtilities.S_GetTeamRelationshipDecoratorUsingIDs
struct UTeamUtilities_S_GetTeamRelationshipDecoratorUsingIDs_Params
{
	class UObject**                                    WorldContext;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	EeTeamID*                                          teamID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	EeCommanderID*                                     commanderId;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UColorDefinition*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.TeamUtilities.S_GetTeamRelationshipDecoratorFromRelationship
struct UTeamUtilities_S_GetTeamRelationshipDecoratorFromRelationship_Params
{
	class UObject**                                    WorldContext;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	EeTeamRelationship*                                relationship;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UColorDefinition*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.TeamUtilities.S_GetTeamRelationshipDecorator
struct UTeamUtilities_S_GetTeamRelationshipDecorator_Params
{
	class UObject**                                    WorldContext;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UTeamComponent**                             targetTeamComponent;                                      // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UColorDefinition*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.TeamUtilities.S_GetTeamComponents
struct UTeamUtilities_S_GetTeamComponents_Params
{
	class UObject**                                    WorldContext;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	EeTeamID*                                          teamToLookFor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	EeCommanderID*                                     commanderToLookFor;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UTeamComponent*>                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Robogore.TeamUtilities.S_GetLocalPlayerControllerTeamComponent
struct UTeamUtilities_S_GetLocalPlayerControllerTeamComponent_Params
{
	class UObject**                                    WorldContext;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UTeamComponent*                              ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Robogore.TeamUtilities.S_GetCommanderComponents
struct UTeamUtilities_S_GetCommanderComponents_Params
{
	class UObject**                                    WorldContext;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	EeTeamID*                                          teamToLookFor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UCommanderComponent*>                 ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Robogore.TeamUtilities.S_AreNeutral
struct UTeamUtilities_S_AreNeutral_Params
{
	class UTeamComponent**                             querier;                                                  // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTeamComponent**                             Target;                                                   // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.TeamUtilities.S_AreFriendly
struct UTeamUtilities_S_AreFriendly_Params
{
	class UTeamComponent**                             querier;                                                  // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTeamComponent**                             Target;                                                   // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.TeamUtilities.S_AreEnemy
struct UTeamUtilities_S_AreEnemy_Params
{
	class UTeamComponent**                             querier;                                                  // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTeamComponent**                             Target;                                                   // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.ToggleButtonUserSettings.OnValueChange
struct UToggleButtonUserSettings_OnValueChange_Params
{
	bool*                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.TriggerZoneActor.OnComponentEndOverlap
struct ATriggerZoneActor_OnComponentEndOverlap_Params
{
	struct FV1OverlapInfo*                             overlapInfo;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	class UV1OverlapComponent**                        V1OverlapComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Robogore.TriggerZoneActor.OnComponentBeginOverlap
struct ATriggerZoneActor_OnComponentBeginOverlap_Params
{
	struct FV1OverlapInfo*                             overlapInfo;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	class UV1OverlapComponent**                        V1OverlapComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Robogore.UAC_AOEBarrage.MultiCast_SetBarrageLocation
struct UUAC_AOEBarrage_MultiCast_SetBarrageLocation_Params
{
	struct FVector_NetQuantize*                        Location;                                                 // (Parm)
};

// Function Robogore.UAC_AOEBarrage.MultiCast_SetBarrageFire
struct UUAC_AOEBarrage_MultiCast_SetBarrageFire_Params
{
	bool*                                              wantsBarrage;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.UAC_SpecialMelee.NetMulticast_SpawnDamageEventParticle
struct UUAC_SpecialMelee_NetMulticast_SpawnDamageEventParticle_Params
{
	struct FVector_NetQuantize*                        spawnPoint;                                               // (Parm)
	struct FVector_NetQuantizeNormal*                  Forward;                                                  // (Parm)
	int8_t*                                            Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.UAC_SpecialMelee.Multicast_SetTargetLocation
struct UUAC_SpecialMelee_Multicast_SetTargetLocation_Params
{
	struct FVector_NetQuantize*                        TargetLocation;                                           // (Parm)
};

// Function Robogore.UAC_SpecialMelee.Multicast_SetTargetActor
struct UUAC_SpecialMelee_Multicast_SetTargetActor_Params
{
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.UAC_SpecialShot.OnRep_Weapons
struct UUAC_SpecialShot_OnRep_Weapons_Params
{
};

// Function Robogore.UAC_SpecialShot.Multicast_SetTargetLocation
struct UUAC_SpecialShot_Multicast_SetTargetLocation_Params
{
	struct FVector_NetQuantize*                        TargetLocation;                                           // (Parm)
};

// Function Robogore.UAC_SpecialShot.Multicast_SetTargetActor
struct UUAC_SpecialShot_Multicast_SetTargetActor_Params
{
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.UnitAIController.GetUnit
struct AUnitAIController_GetUnit_Params
{
	class AUnitBaseActor*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.UnitAIController.GetSquad
struct AUnitAIController_GetSquad_Params
{
	class ASquadActor*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.UnitBaseActor.OnRep_TeamComponent
struct AUnitBaseActor_OnRep_TeamComponent_Params
{
};

// Function Robogore.UnitBaseActor.OnDead
struct AUnitBaseActor_OnDead_Params
{
	class UActorLifeCycleComponent**                   Context;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Robogore.UnitBaseActor.IsCrouching
struct AUnitBaseActor_IsCrouching_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.UnitBaseActor.GetUnitCoverComponent
struct AUnitBaseActor_GetUnitCoverComponent_Params
{
	class UUnitCoverComponent*                         ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Robogore.UnitChatterComponent.Server_RequestPlayChatter
struct UUnitChatterComponent_Server_RequestPlayChatter_Params
{
	EeChatterCategory*                                 Category;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.UnitChatterPlayerComponent.Server_RequestPlayChatter_PriorityTarget
struct UUnitChatterPlayerComponent_Server_RequestPlayChatter_PriorityTarget_Params
{
	class AActor**                                     priorityTarget;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.UnitChatterPlayerComponent.Server_RequestPlayChatter_AccoladeTag
struct UUnitChatterPlayerComponent_Server_RequestPlayChatter_AccoladeTag_Params
{
	struct FGameplayTag*                               accoladeTag;                                              // (ConstParm, Parm, ReferenceParm)
};

// Function Robogore.UnitChatterPlayerComponent.Server_RequestPlayChatter
struct UUnitChatterPlayerComponent_Server_RequestPlayChatter_Params
{
	EeChatterCategory*                                 Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.UnitChatterPlayerComponent.Client_PlayChatter
struct UUnitChatterPlayerComponent_Client_PlayChatter_Params
{
	struct FRequestPlayChatterInfo*                    chatterRequest;                                           // (ConstParm, Parm, ReferenceParm)
};

// Function Robogore.UnitCoverComponent.Server_SetCoverBehaviorStatus
struct UUnitCoverComponent_Server_SetCoverBehaviorStatus_Params
{
	bool*                                              shouldBeActive;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.UnitCoverComponent.Server_PlayerAttemptedCover
struct UUnitCoverComponent_Server_PlayerAttemptedCover_Params
{
};

// Function Robogore.UnitDownedNotifierHUDWidget.UpdateTimeLeft
struct UUnitDownedNotifierHUDWidget_UpdateTimeLeft_Params
{
	float*                                             timeLeft;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              timeCounting;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.UnitDownedNotifierHUDWidget.StartDowned
struct UUnitDownedNotifierHUDWidget_StartDowned_Params
{
};

// Function Robogore.UnitDownedNotifierHUDWidget.EndDowned
struct UUnitDownedNotifierHUDWidget_EndDowned_Params
{
};

// Function Robogore.V1AbilityTask_CreateTargetDataFromOrder.CreateTargetDataFromOrder
struct UV1AbilityTask_CreateTargetDataFromOrder_CreateTargetDataFromOrder_Params
{
	class UGameplayAbility**                           OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     orderType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UV1AbilityTask_CreateTargetDataFromOrder*    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.V1AbilityTask_FireAbilityWeapon.FireAbilityWeapon
struct UV1AbilityTask_FireAbilityWeapon_FireAbilityWeapon_Params
{
	class UGameplayAbility**                           OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UV1AbilityTask_FireAbilityWeapon*            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.V1AbilityTask_GetTargetDataFromAbility.CreateTargetDataFromAbility
struct UV1AbilityTask_GetTargetDataFromAbility_CreateTargetDataFromAbility_Params
{
	class UGameplayAbility**                           OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UV1AbilityTask_GetTargetDataFromAbility*     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.V1AbilityTask_SpawnProjectile.SpawnProjectile
struct UV1AbilityTask_SpawnProjectile_SpawnProjectile_Params
{
	class UGameplayAbility**                           OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayAbilityTargetDataHandle*           TargetData;                                               // (Parm)
	class UClass**                                     Class;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UV1AbilityTask_SpawnProjectile*              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.V1AbilityTask_SpawnProjectile.FinishSpawningActor
struct UV1AbilityTask_SpawnProjectile_FinishSpawningActor_Params
{
	class UGameplayAbility**                           OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayAbilityTargetDataHandle*           TargetData;                                               // (Parm)
	class AProjectileActor**                           SpawnedActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.V1AbilityTask_SpawnProjectile.BeginSpawningActor
struct UV1AbilityTask_SpawnProjectile_BeginSpawningActor_Params
{
	class UGameplayAbility**                           OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayAbilityTargetDataHandle*           TargetData;                                               // (Parm)
	class UClass**                                     Class;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AProjectileActor*                            SpawnedActor;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.V1AbilityTask_SpawnSpecialAttack.SpawnSpecialAttack
struct UV1AbilityTask_SpawnSpecialAttack_SpawnSpecialAttack_Params
{
	class UGameplayAbility**                           OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UV1AbilityTask_SpawnSpecialAttack*           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.V1AbilityTask_UnitTurnToFace.UnitTurnToFace
struct UV1AbilityTask_UnitTurnToFace_UnitTurnToFace_Params
{
	class UGameplayAbility**                           OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayAbilityTargetDataHandle*           TargetData;                                               // (Parm)
	float*                                             turnSpeed;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             closeEnoughAngle;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UV1AbilityTask_UnitTurnToFace*               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.V1CameraShake.RotPitchSineZeroCrossed
struct UV1CameraShake_RotPitchSineZeroCrossed_Params
{
};

// Function Robogore.V1CameraShake.RotPitchSineTopPeak
struct UV1CameraShake_RotPitchSineTopPeak_Params
{
};

// Function Robogore.V1CameraShake.RotPitchSineBottomPeak
struct UV1CameraShake_RotPitchSineBottomPeak_Params
{
};

// Function Robogore.V1CameraShake.OnTick
struct UV1CameraShake_OnTick_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.V1CameraShake.LocXSineZeroCrossed
struct UV1CameraShake_LocXSineZeroCrossed_Params
{
};

// Function Robogore.V1CameraShake.LocXSineTopPeak
struct UV1CameraShake_LocXSineTopPeak_Params
{
};

// Function Robogore.V1CameraShake.LocXSineBottomPeak
struct UV1CameraShake_LocXSineBottomPeak_Params
{
};

// Function Robogore.V1DestructibleComponent.OnHit
struct UV1DestructibleComponent_OnHit_Params
{
	class UPrimitiveComponent**                        HitComp;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector*                                    NormalImpulse;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Robogore.V1Event_WasReceived.HandleEvent
struct UV1Event_WasReceived_HandleEvent_Params
{
	class UV1EventBase**                               evn;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.V1Event_PlayerEvent.HandleEvent
struct UV1Event_PlayerEvent_HandleEvent_Params
{
	class UV1EventBase**                               evn;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.V1SpawnActorManager.SpawnActor
struct UV1SpawnActorManager_SpawnActor_Params
{
	class UObject**                                    WorldContext;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     classType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform*                                 Transform;                                                // (Parm, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.SpecialShotProjectile.GetTargetActor
struct ASpecialShotProjectile_GetTargetActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.V1SpringCanvasPanel.Update
struct UV1SpringCanvasPanel_Update_Params
{
	class APawn**                                      playerPawn;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             dt;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.VisionModeComponent.Server_ChangeVisionModeState
struct UVisionModeComponent_Server_ChangeVisionModeState_Params
{
	bool*                                              Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.VisionModeInteractableWidget.OnVisionModeToggle
struct UVisionModeInteractableWidget_OnVisionModeToggle_Params
{
	bool*                                              Mode;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.VisionModeInteractableWidget.OnScanTick
struct UVisionModeInteractableWidget_OnScanTick_Params
{
	float*                                             dt;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Ratio;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.VisionModeInteractableWidget.OnScanStart
struct UVisionModeInteractableWidget_OnScanStart_Params
{
};

// Function Robogore.VisionModeInteractableWidget.OnScanComplete
struct UVisionModeInteractableWidget_OnScanComplete_Params
{
};

// Function Robogore.VisionModeInteractableWidget.OnScanCanceled
struct UVisionModeInteractableWidget_OnScanCanceled_Params
{
};

// Function Robogore.VisionModeInteractableWidget.OnHoverStart
struct UVisionModeInteractableWidget_OnHoverStart_Params
{
};

// Function Robogore.VisionModeInteractableWidget.OnHoverEnd
struct UVisionModeInteractableWidget_OnHoverEnd_Params
{
};

// Function Robogore.VisionModeReticle.VisionModeToggle
struct UVisionModeReticle_VisionModeToggle_Params
{
	bool*                                              NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.VisionModeReticle.OnScanTick
struct UVisionModeReticle_OnScanTick_Params
{
	float*                                             dt;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Ratio;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.VisionModeReticle.OnScanStart
struct UVisionModeReticle_OnScanStart_Params
{
};

// Function Robogore.VisionModeReticle.OnScanComplete
struct UVisionModeReticle_OnScanComplete_Params
{
};

// Function Robogore.VisionModeReticle.OnScanCanceled
struct UVisionModeReticle_OnScanCanceled_Params
{
};

// Function Robogore.VisionModeReticle.OnHoverEnd
struct UVisionModeReticle_OnHoverEnd_Params
{
};

// Function Robogore.VisionModeReticle.OnHoverBegin
struct UVisionModeReticle_OnHoverBegin_Params
{
};

// Function Robogore.VisionModeSnapReticle.VisionModeToggle
struct UVisionModeSnapReticle_VisionModeToggle_Params
{
	bool*                                              NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.VisionModeSnapReticle.OnScanTick
struct UVisionModeSnapReticle_OnScanTick_Params
{
	float*                                             dt;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Ratio;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.VisionModeSnapReticle.OnScanStart
struct UVisionModeSnapReticle_OnScanStart_Params
{
};

// Function Robogore.VisionModeSnapReticle.OnScanComplete
struct UVisionModeSnapReticle_OnScanComplete_Params
{
};

// Function Robogore.VisionModeSnapReticle.OnScanCanceled
struct UVisionModeSnapReticle_OnScanCanceled_Params
{
};

// Function Robogore.VisionModeSnapReticle.OnHoverEnd
struct UVisionModeSnapReticle_OnHoverEnd_Params
{
};

// Function Robogore.VisionModeSnapReticle.OnHoverBegin
struct UVisionModeSnapReticle_OnHoverBegin_Params
{
};

// Function Robogore.WeaponCurveRotator.OnMontageStarted
struct UWeaponCurveRotator_OnMontageStarted_Params
{
	class UAnimMontage**                               Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.WeaponCurveRotator.OnMontageBlendingOut
struct UWeaponCurveRotator_OnMontageBlendingOut_Params
{
	class UAnimMontage**                               Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              interrupted;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.WeaponReloadReticleWidget.OnWeaponAssigned_BP
struct UWeaponReloadReticleWidget_OnWeaponAssigned_BP_Params
{
	class ARangedWeapon**                              weapon;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Robogore.WeaponReloadReticleWidget.OnReloadComplete_BP
struct UWeaponReloadReticleWidget_OnReloadComplete_BP_Params
{
};

// Function Robogore.WeaponReloadReticleWidget.OnReloadCancelled_BP
struct UWeaponReloadReticleWidget_OnReloadCancelled_BP_Params
{
};

// Function Robogore.WeaponReloadReticleWidget.OnReloadBegin_BP
struct UWeaponReloadReticleWidget_OnReloadBegin_BP_Params
{
};

// Function Robogore.WeaponReloadReticleWidget.OnAmmoAddedFromRegen_BP
struct UWeaponReloadReticleWidget_OnAmmoAddedFromRegen_BP_Params
{
};

// Function Robogore.WeaponReticle.GetOwnerAltitude
struct UWeaponReticle_GetOwnerAltitude_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.WidgetToTextureComponent.GetWidget
struct UWidgetToTextureComponent_GetWidget_Params
{
	class UUserWidget*                                 ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Robogore.WidgetToTextureComponent.GetRenderTarget
struct UWidgetToTextureComponent_GetRenderTarget_Params
{
	class UTextureRenderTarget2D*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Robogore.WMDComponent.Server_CancelDetonation
struct UWMDComponent_Server_CancelDetonation_Params
{
};

// Function Robogore.WMDComponent.Server_BeginDetonationSequence
struct UWMDComponent_Server_BeginDetonationSequence_Params
{
};

// Function Robogore.UnitOffscreenWidget.SetStandardIconBrush
struct UUnitOffscreenWidget_SetStandardIconBrush_Params
{
	struct FSlateBrush*                                Brush;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Robogore.UnitOffscreenWidget.SetStandardColor
struct UUnitOffscreenWidget_SetStandardColor_Params
{
	struct FLinearColor*                               standardColor;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Robogore.YesNoMessageMenu.OnYes
struct UYesNoMessageMenu_OnYes_Params
{
};

// Function Robogore.YesNoMessageMenu.OnNo
struct UYesNoMessageMenu_OnNo_Params
{
};

// Function Robogore.UpgradeChipDefinition.GetChipName
struct UUpgradeChipDefinition_GetChipName_Params
{
	struct FText                                       ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
