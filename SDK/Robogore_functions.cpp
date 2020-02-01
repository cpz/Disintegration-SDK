
#include "../SDK.h"

// Name: Robogore, Version: 1.1.176

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function Robogore.AchievementsMenu.OnPressedTile
// (Final, Native, Public)
// Parameters:
// class UWidget**                PressedWidget                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAchievementsMenu::OnPressedTile(class UWidget** PressedWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.AchievementsMenu.OnPressedTile");

	UAchievementsMenu_OnPressedTile_Params params;
	params.PressedWidget = PressedWidget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.AchievementsMenu.OnHoveredTile
// (Final, Native, Public)
// Parameters:
// class UWidget**                HoveredWidget                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAchievementsMenu::OnHoveredTile(class UWidget** HoveredWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.AchievementsMenu.OnHoveredTile");

	UAchievementsMenu_OnHoveredTile_Params params;
	params.HoveredWidget = HoveredWidget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.AchievementsMenu.OnHoveredAchievementTile_BP
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FAchievementData*       Data                           (ConstParm, Parm, OutParm, ReferenceParm)

void UAchievementsMenu::OnHoveredAchievementTile_BP(struct FAchievementData* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.AchievementsMenu.OnHoveredAchievementTile_BP");

	UAchievementsMenu_OnHoveredAchievementTile_BP_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.AchievementTileWidget.SetAchievementTileData_BP
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FAchievementData*       Data                           (ConstParm, Parm, OutParm, ReferenceParm)

void UAchievementTileWidget::SetAchievementTileData_BP(struct FAchievementData* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.AchievementTileWidget.SetAchievementTileData_BP");

	UAchievementTileWidget_SetAchievementTileData_BP_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.RobogoreUserWidget.GotoParentWidget
// (Final, Native, Protected, BlueprintCallable)

void URobogoreUserWidget::GotoParentWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RobogoreUserWidget.GotoParentWidget");

	URobogoreUserWidget_GotoParentWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.ActorIdentifierCombinedWidgetComponent.GetActorType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)

struct FText UActorIdentifierCombinedWidgetComponent::GetActorType()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.ActorIdentifierCombinedWidgetComponent.GetActorType");

	UActorIdentifierCombinedWidgetComponent_GetActorType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.ActorIdentifierCombinedWidgetComponent.GetActorName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)

struct FText UActorIdentifierCombinedWidgetComponent::GetActorName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.ActorIdentifierCombinedWidgetComponent.GetActorName");

	UActorIdentifierCombinedWidgetComponent_GetActorName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.ActorIdentifierCombinedWidgetComponent.GetActorIconBrush
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSlateBrush             ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)

struct FSlateBrush UActorIdentifierCombinedWidgetComponent::GetActorIconBrush()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.ActorIdentifierCombinedWidgetComponent.GetActorIconBrush");

	UActorIdentifierCombinedWidgetComponent_GetActorIconBrush_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.ActorMortalityHitPipWidget.OnAnimationComplete
// (Final, Native, Private)

void UActorMortalityHitPipWidget::OnAnimationComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.ActorMortalityHitPipWidget.OnAnimationComplete");

	UActorMortalityHitPipWidget_OnAnimationComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.ActorMortalityWidget.OnUnderEffectHealthDamageTaken
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameplayTag*           categoryTag                    (ConstParm, Parm, OutParm, ReferenceParm)

void UActorMortalityWidget::OnUnderEffectHealthDamageTaken(struct FGameplayTag* categoryTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.ActorMortalityWidget.OnUnderEffectHealthDamageTaken");

	UActorMortalityWidget_OnUnderEffectHealthDamageTaken_Params params;
	params.categoryTag = categoryTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.ActorMortalityWidget.OnShieldDamageTaken
// (Event, Public, BlueprintEvent)

void UActorMortalityWidget::OnShieldDamageTaken()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.ActorMortalityWidget.OnShieldDamageTaken");

	UActorMortalityWidget_OnShieldDamageTaken_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.ActorMortalityWidget.OnRegenerateShield
// (Event, Public, BlueprintEvent)

void UActorMortalityWidget::OnRegenerateShield()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.ActorMortalityWidget.OnRegenerateShield");

	UActorMortalityWidget_OnRegenerateShield_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.ActorMortalityWidget.OnRegenerateHealth
// (Event, Public, BlueprintEvent)

void UActorMortalityWidget::OnRegenerateHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.ActorMortalityWidget.OnRegenerateHealth");

	UActorMortalityWidget_OnRegenerateHealth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.ActorMortalityWidget.OnHealthDamageTaken
// (Event, Public, BlueprintEvent)

void UActorMortalityWidget::OnHealthDamageTaken()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.ActorMortalityWidget.OnHealthDamageTaken");

	UActorMortalityWidget_OnHealthDamageTaken_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.AimTargetableComponent.S_GetDefaultTargetAimLocation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor**                 Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UAimTargetableComponent::STATIC_S_GetDefaultTargetAimLocation(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.AimTargetableComponent.S_GetDefaultTargetAimLocation");

	UAimTargetableComponent_S_GetDefaultTargetAimLocation_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.AIOrderBase.SetStatus
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// EeOrderStatus*                 Status                         (Parm, ZeroConstructor, IsPlainOldData)

void UAIOrderBase::SetStatus(EeOrderStatus* Status)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.AIOrderBase.SetStatus");

	UAIOrderBase_SetStatus_Params params;
	params.Status = Status;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.AIOrderBase.IsPending
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAIOrderBase::IsPending()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.AIOrderBase.IsPending");

	UAIOrderBase_IsPending_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.AIOrderBase.GetStatus
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EeOrderStatus                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EeOrderStatus UAIOrderBase::GetStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.AIOrderBase.GetStatus");

	UAIOrderBase_GetStatus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.AIOrderBase.CopyDataFrom
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// class UAIOrderBase**           from                           (Parm, ZeroConstructor, IsPlainOldData)

void UAIOrderBase::CopyDataFrom(class UAIOrderBase** from)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.AIOrderBase.CopyDataFrom");

	UAIOrderBase_CopyDataFrom_Params params;
	params.from = from;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.AIOrdersComponent.SetOrderStatus
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass**                 orderType                      (Parm, ZeroConstructor, IsPlainOldData)
// EeOrderStatus*                 newStatus                      (Parm, ZeroConstructor, IsPlainOldData)

void UAIOrdersComponent::SetOrderStatus(class UClass** orderType, EeOrderStatus* newStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.AIOrdersComponent.SetOrderStatus");

	UAIOrdersComponent_SetOrderStatus_Params params;
	params.orderType = orderType;
	params.newStatus = newStatus;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.AIOrdersComponent.HasPendingOrder
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass**                 orderType                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAIOrdersComponent::HasPendingOrder(class UClass** orderType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.AIOrdersComponent.HasPendingOrder");

	UAIOrdersComponent_HasPendingOrder_Params params;
	params.orderType = orderType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.AIOrdersComponent.HasAnyOrder
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAIOrdersComponent::HasAnyOrder()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.AIOrdersComponent.HasAnyOrder");

	UAIOrdersComponent_HasAnyOrder_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.AIOrdersComponent.GiveOrder
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAIOrderBase**           Order                          (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          clearAllOtherOrders            (Parm, ZeroConstructor, IsPlainOldData)

void UAIOrdersComponent::GiveOrder(class UAIOrderBase** Order, bool* clearAllOtherOrders)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.AIOrdersComponent.GiveOrder");

	UAIOrdersComponent_GiveOrder_Params params;
	params.Order = Order;
	params.clearAllOtherOrders = clearAllOtherOrders;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.AIOrdersComponent.GetOrderStatus
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass**                 orderType                      (Parm, ZeroConstructor, IsPlainOldData)
// EeOrderStatus                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EeOrderStatus UAIOrdersComponent::GetOrderStatus(class UClass** orderType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.AIOrdersComponent.GetOrderStatus");

	UAIOrdersComponent_GetOrderStatus_Params params;
	params.orderType = orderType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.AIOrdersComponent.GetOrder
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass**                 orderType                      (Parm, ZeroConstructor, IsPlainOldData)
// class UAIOrderBase*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAIOrderBase* UAIOrdersComponent::GetOrder(class UClass** orderType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.AIOrdersComponent.GetOrder");

	UAIOrdersComponent_GetOrder_Params params;
	params.orderType = orderType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.AIOrdersComponent.CompleteOrder
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass**                 orderType                      (Parm, ZeroConstructor, IsPlainOldData)

void UAIOrdersComponent::CompleteOrder(class UClass** orderType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.AIOrdersComponent.CompleteOrder");

	UAIOrdersComponent_CompleteOrder_Params params;
	params.orderType = orderType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.AIOrdersComponent.CancelOrder
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass**                 orderType                      (Parm, ZeroConstructor, IsPlainOldData)

void UAIOrdersComponent::CancelOrder(class UClass** orderType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.AIOrdersComponent.CancelOrder");

	UAIOrdersComponent_CancelOrder_Params params;
	params.orderType = orderType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.AISkillBase.PerformRelevanceCheck
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAISkillBase::PerformRelevanceCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.AISkillBase.PerformRelevanceCheck");

	UAISkillBase_PerformRelevanceCheck_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.AISkillBase.OnUpdate
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// EeSkillResult                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EeSkillResult UAISkillBase::OnUpdate(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.AISkillBase.OnUpdate");

	UAISkillBase_OnUpdate_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.AISkillBase.OnFinished
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// EeSkillResult*                 skillResult                    (Parm, ZeroConstructor, IsPlainOldData)

void UAISkillBase::OnFinished(EeSkillResult* skillResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.AISkillBase.OnFinished");

	UAISkillBase_OnFinished_Params params;
	params.skillResult = skillResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.AISkillBase.OnExecute
// (Native, Event, Protected, BlueprintEvent)

void UAISkillBase::OnExecute()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.AISkillBase.OnExecute");

	UAISkillBase_OnExecute_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.AnimPostureDriver.OnRep_ActivePosture
// (Final, Native, Private)

void UAnimPostureDriver::OnRep_ActivePosture()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.AnimPostureDriver.OnRep_ActivePosture");

	UAnimPostureDriver_OnRep_ActivePosture_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.ProjectileActor.RemoteDud
// (Final, Native, Public, BlueprintCallable)

void AProjectileActor::RemoteDud()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.ProjectileActor.RemoteDud");

	AProjectileActor_RemoteDud_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.ProjectileActor.RemoteDetonate
// (Final, Native, Public, BlueprintCallable)

void AProjectileActor::RemoteDetonate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.ProjectileActor.RemoteDetonate");

	AProjectileActor_RemoteDetonate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.ProjectileActor.OnRep_ProjectileSeed
// (Final, Native, Private)

void AProjectileActor::OnRep_ProjectileSeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.ProjectileActor.OnRep_ProjectileSeed");

	AProjectileActor_OnRep_ProjectileSeed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.ProjectileActor.NetMulticast_SetTarget
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
// class USceneComponent**        targetComponent                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AProjectileActor::NetMulticast_SetTarget(class USceneComponent** targetComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.ProjectileActor.NetMulticast_SetTarget");

	AProjectileActor_NetMulticast_SetTarget_Params params;
	params.targetComponent = targetComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.ProjectileActor.NetMulticast_OnImpact
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
// struct FVector_NetQuantize*    ImpactPoint                    (Parm)
// bool*                          forceBlockingHit               (Parm, ZeroConstructor, IsPlainOldData)

void AProjectileActor::NetMulticast_OnImpact(struct FVector_NetQuantize* ImpactPoint, bool* forceBlockingHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.ProjectileActor.NetMulticast_OnImpact");

	AProjectileActor_NetMulticast_OnImpact_Params params;
	params.ImpactPoint = ImpactPoint;
	params.forceBlockingHit = forceBlockingHit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.ProjectileActor.NetMulticast_OnDud
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
// struct FVector_NetQuantize*    ImpactPoint                    (Parm)

void AProjectileActor::NetMulticast_OnDud(struct FVector_NetQuantize* ImpactPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.ProjectileActor.NetMulticast_OnDud");

	AProjectileActor_NetMulticast_OnDud_Params params;
	params.ImpactPoint = ImpactPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.ProjectileActor.GetProjectileStickInfo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FProjectileStickInfo    ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)

struct FProjectileStickInfo AProjectileActor::GetProjectileStickInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.ProjectileActor.GetProjectileStickInfo");

	AProjectileActor_GetProjectileStickInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.ProjectileActor.GetProjectilePierceInfo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FProjectilePierceInfo   ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)

struct FProjectilePierceInfo AProjectileActor::GetProjectilePierceInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.ProjectileActor.GetProjectilePierceInfo");

	AProjectileActor_GetProjectilePierceInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.ProjectileActor.GetProjectileBounceInfo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FProjectileBounceInfo   ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)

struct FProjectileBounceInfo AProjectileActor::GetProjectileBounceInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.ProjectileActor.GetProjectileBounceInfo");

	AProjectileActor_GetProjectileBounceInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.ProjectileActor.GetOwningWeapon
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ARangedWeapon*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ARangedWeapon* AProjectileActor::GetOwningWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.ProjectileActor.GetOwningWeapon");

	AProjectileActor_GetOwningWeapon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.ProjectileActor.GetImpactResponse
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EeProjectileImpactResponse     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EeProjectileImpactResponse AProjectileActor::GetImpactResponse()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.ProjectileActor.GetImpactResponse");

	AProjectileActor_GetImpactResponse_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.ProjectileActor.Event_ProcessHit
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             HitResult                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProjectileActor::Event_ProcessHit(struct FHitResult* HitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.ProjectileActor.Event_ProcessHit");

	AProjectileActor_Event_ProcessHit_Params params;
	params.HitResult = HitResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.ProjectileActor.Event_OnStick
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             HitResult                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProjectileActor::Event_OnStick(struct FHitResult* HitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.ProjectileActor.Event_OnStick");

	AProjectileActor_Event_OnStick_Params params;
	params.HitResult = HitResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.ProjectileActor.Event_OnProjectileSpawn
// (Event, Public, BlueprintEvent)

void AProjectileActor::Event_OnProjectileSpawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.ProjectileActor.Event_OnProjectileSpawn");

	AProjectileActor_Event_OnProjectileSpawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.ProjectileActor.Event_OnPierce
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             HitResult                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProjectileActor::Event_OnPierce(struct FHitResult* HitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.ProjectileActor.Event_OnPierce");

	AProjectileActor_Event_OnPierce_Params params;
	params.HitResult = HitResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.ProjectileActor.Event_OnDud
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             HitResult                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProjectileActor::Event_OnDud(struct FHitResult* HitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.ProjectileActor.Event_OnDud");

	AProjectileActor_Event_OnDud_Params params;
	params.HitResult = HitResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.ProjectileActor.Event_OnBounce
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             HitResult                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProjectileActor::Event_OnBounce(struct FHitResult* HitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.ProjectileActor.Event_OnBounce");

	AProjectileActor_Event_OnBounce_Params params;
	params.HitResult = HitResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.ProjectileActor.Event_OnBlockingHit
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             HitResult                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProjectileActor::Event_OnBlockingHit(struct FHitResult* HitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.ProjectileActor.Event_OnBlockingHit");

	AProjectileActor_Event_OnBlockingHit_Params params;
	params.HitResult = HitResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.MtxMenu.OnReleasedTile
// (Final, Native, Public)
// Parameters:
// class UWidget**                ReleasedWidget                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMtxMenu::OnReleasedTile(class UWidget** ReleasedWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MtxMenu.OnReleasedTile");

	UMtxMenu_OnReleasedTile_Params params;
	params.ReleasedWidget = ReleasedWidget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.MtxMenu.OnPressedTile
// (Final, Native, Public)
// Parameters:
// class UWidget**                PressedWidget                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMtxMenu::OnPressedTile(class UWidget** PressedWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MtxMenu.OnPressedTile");

	UMtxMenu_OnPressedTile_Params params;
	params.PressedWidget = PressedWidget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.MtxMenu.OnHoveredTile
// (Native, Public)
// Parameters:
// class UWidget**                HoveredWidget                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMtxMenu::OnHoveredTile(class UWidget** HoveredWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MtxMenu.OnHoveredTile");

	UMtxMenu_OnHoveredTile_Params params;
	params.HoveredWidget = HoveredWidget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.MtxMenu.FailUnlockMtxChallengeBP
// (Event, Protected, BlueprintEvent)

void UMtxMenu::FailUnlockMtxChallengeBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MtxMenu.FailUnlockMtxChallengeBP");

	UMtxMenu_FailUnlockMtxChallengeBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.Audio_Play2DSound.OnAudioFinished
// (Final, Native, Private)
// Parameters:
// class UAudioComponent**        AudioComponent                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAudio_Play2DSound::OnAudioFinished(class UAudioComponent** AudioComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.Audio_Play2DSound.OnAudioFinished");

	UAudio_Play2DSound_OnAudioFinished_Params params;
	params.AudioComponent = AudioComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.BackendLoginWidget.OnLoginCompleteOnline
// (Event, Public, BlueprintEvent)

void UBackendLoginWidget::OnLoginCompleteOnline()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.BackendLoginWidget.OnLoginCompleteOnline");

	UBackendLoginWidget_OnLoginCompleteOnline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.BackendLoginWidget.OnLoginCompleteLAN
// (Event, Public, BlueprintEvent)

void UBackendLoginWidget::OnLoginCompleteLAN()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.BackendLoginWidget.OnLoginCompleteLAN");

	UBackendLoginWidget_OnLoginCompleteLAN_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.BackendLoginWidget.OnLoginAnimationComplete
// (Final, Native, Public, BlueprintCallable)

void UBackendLoginWidget::OnLoginAnimationComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.BackendLoginWidget.OnLoginAnimationComplete");

	UBackendLoginWidget_OnLoginAnimationComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.BackendLoginWidget.OnAttemptLogin
// (Event, Public, BlueprintEvent)

void UBackendLoginWidget::OnAttemptLogin()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.BackendLoginWidget.OnAttemptLogin");

	UBackendLoginWidget_OnAttemptLogin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.RobogorePlayerController.V1RC
// (Exec, Native, Public)
// Parameters:
// struct FString*                consoleCommand                 (Parm, ZeroConstructor)

void ARobogorePlayerController::V1RC(struct FString* consoleCommand)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RobogorePlayerController.V1RC");

	ARobogorePlayerController_V1RC_Params params;
	params.consoleCommand = consoleCommand;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.RobogorePlayerController.UpdateControllerPairing
// (Final, Exec, Native, Private)
// Parameters:
// bool*                          paired                         (Parm, ZeroConstructor, IsPlainOldData)

void ARobogorePlayerController::UpdateControllerPairing(bool* paired)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RobogorePlayerController.UpdateControllerPairing");

	ARobogorePlayerController_UpdateControllerPairing_Params params;
	params.paired = paired;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.RobogorePlayerController.ToggleVoiceEcho
// (Final, Exec, Native, Private)

void ARobogorePlayerController::ToggleVoiceEcho()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RobogorePlayerController.ToggleVoiceEcho");

	ARobogorePlayerController_ToggleVoiceEcho_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.RobogorePlayerController.ServerV1RC
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FString*                consoleCommand                 (Parm, ZeroConstructor)

void ARobogorePlayerController::ServerV1RC(struct FString* consoleCommand)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RobogorePlayerController.ServerV1RC");

	ARobogorePlayerController_ServerV1RC_Params params;
	params.consoleCommand = consoleCommand;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.RobogorePlayerState.Server_SetTeamIndex
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// EeTeamID*                      newTeamIndex                   (Parm, ZeroConstructor, IsPlainOldData)

void ARobogorePlayerState::Server_SetTeamIndex(EeTeamID* newTeamIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RobogorePlayerState.Server_SetTeamIndex");

	ARobogorePlayerState_Server_SetTeamIndex_Params params;
	params.newTeamIndex = newTeamIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.RobogorePlayerState.GetTeamIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EeTeamID                       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EeTeamID ARobogorePlayerState::GetTeamIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RobogorePlayerState.GetTeamIndex");

	ARobogorePlayerState_GetTeamIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.BadgeEditorMenu.OnLayerTilePressed
// (Final, Native, Private)
// Parameters:
// class UWidget**                Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBadgeEditorMenu::OnLayerTilePressed(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.BadgeEditorMenu.OnLayerTilePressed");

	UBadgeEditorMenu_OnLayerTilePressed_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.BadgeEditorMenu.OnLayerTileHovered
// (Final, Native, Private)
// Parameters:
// class UWidget**                Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBadgeEditorMenu::OnLayerTileHovered(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.BadgeEditorMenu.OnLayerTileHovered");

	UBadgeEditorMenu_OnLayerTileHovered_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.BadgeEditorMenu.OnLayerImageChange
// (Final, Native, Private)
// Parameters:
// int*                           LayerIndex                     (Parm, ZeroConstructor, IsPlainOldData)

void UBadgeEditorMenu::OnLayerImageChange(int* LayerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.BadgeEditorMenu.OnLayerImageChange");

	UBadgeEditorMenu_OnLayerImageChange_Params params;
	params.LayerIndex = LayerIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.BadgeEditorMenu.OnLayerColorChange
// (Final, Native, Private, HasOutParms, HasDefaults)
// Parameters:
// struct FColor*                 Color                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int*                           LayerIndex                     (Parm, ZeroConstructor, IsPlainOldData)

void UBadgeEditorMenu::OnLayerColorChange(struct FColor* Color, int* LayerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.BadgeEditorMenu.OnLayerColorChange");

	UBadgeEditorMenu_OnLayerColorChange_Params params;
	params.Color = Color;
	params.LayerIndex = LayerIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.BadgeEditorMenu.OnImageTilePressed
// (Final, Native, Private)
// Parameters:
// class UWidget**                Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBadgeEditorMenu::OnImageTilePressed(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.BadgeEditorMenu.OnImageTilePressed");

	UBadgeEditorMenu_OnImageTilePressed_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.BadgeEditorMenu.OnImageTileHoverd
// (Final, Native, Private)
// Parameters:
// class UWidget**                Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBadgeEditorMenu::OnImageTileHoverd(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.BadgeEditorMenu.OnImageTileHoverd");

	UBadgeEditorMenu_OnImageTileHoverd_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.BadgeEditorMenu.OnColorTilePressed
// (Final, Native, Private)
// Parameters:
// class UWidget**                Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBadgeEditorMenu::OnColorTilePressed(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.BadgeEditorMenu.OnColorTilePressed");

	UBadgeEditorMenu_OnColorTilePressed_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.BadgeEditorMenu.OnColorTileHovered
// (Final, Native, Private)
// Parameters:
// class UWidget**                Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBadgeEditorMenu::OnColorTileHovered(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.BadgeEditorMenu.OnColorTileHovered");

	UBadgeEditorMenu_OnColorTileHovered_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.BadgeSavePopupMenu.OnSaveButtonClicked
// (Final, Native, Protected)

void UBadgeSavePopupMenu::OnSaveButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.BadgeSavePopupMenu.OnSaveButtonClicked");

	UBadgeSavePopupMenu_OnSaveButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.BadgeSavePopupMenu.OnContinueButtonPressed
// (Final, Native, Protected)

void UBadgeSavePopupMenu::OnContinueButtonPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.BadgeSavePopupMenu.OnContinueButtonPressed");

	UBadgeSavePopupMenu_OnContinueButtonPressed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.BadgeSavePopupMenu.OnCancelButtonPressed
// (Final, Native, Protected)

void UBadgeSavePopupMenu::OnCancelButtonPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.BadgeSavePopupMenu.OnCancelButtonPressed");

	UBadgeSavePopupMenu_OnCancelButtonPressed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.BadgeSelectionMenu.OnBadgeTilePressed
// (Final, Native, Protected)
// Parameters:
// class UWidget**                Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBadgeSelectionMenu::OnBadgeTilePressed(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.BadgeSelectionMenu.OnBadgeTilePressed");

	UBadgeSelectionMenu_OnBadgeTilePressed_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.BadgeSelectionMenu.OnBadgeTileHovered
// (Final, Native, Protected)
// Parameters:
// class UWidget**                Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBadgeSelectionMenu::OnBadgeTileHovered(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.BadgeSelectionMenu.OnBadgeTileHovered");

	UBadgeSelectionMenu_OnBadgeTileHovered_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.BaseOffscreenWidget.SetTeamRelationship
// (Event, Public, BlueprintEvent)
// Parameters:
// EeTeamRelationship*            teamRelationship               (Parm, ZeroConstructor, IsPlainOldData)

void UBaseOffscreenWidget::SetTeamRelationship(EeTeamRelationship* teamRelationship)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.BaseOffscreenWidget.SetTeamRelationship");

	UBaseOffscreenWidget_SetTeamRelationship_Params params;
	params.teamRelationship = teamRelationship;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.BaseOffscreenWidget.SetRangeValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UBaseOffscreenWidget::SetRangeValue(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.BaseOffscreenWidget.SetRangeValue");

	UBaseOffscreenWidget_SetRangeValue_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.BaseOffscreenWidget.SetDisplayAngle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         Angle                          (Parm, ZeroConstructor, IsPlainOldData)

void UBaseOffscreenWidget::SetDisplayAngle(float* Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.BaseOffscreenWidget.SetDisplayAngle");

	UBaseOffscreenWidget_SetDisplayAngle_Params params;
	params.Angle = Angle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.IndicatorWidgetComponent.GetOnScreenWidget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UIndicatorWidget*        ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UIndicatorWidget* UIndicatorWidgetComponent::GetOnScreenWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.IndicatorWidgetComponent.GetOnScreenWidget");

	UIndicatorWidgetComponent_GetOnScreenWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.IndicatorWidgetComponent.GetOffscreenWidget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UBaseOffscreenWidget*    ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UBaseOffscreenWidget* UIndicatorWidgetComponent::GetOffscreenWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.IndicatorWidgetComponent.GetOffscreenWidget");

	UIndicatorWidgetComponent_GetOffscreenWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.BTDecorator_OnV1Event.EventFired
// (Final, Native, Protected)
// Parameters:
// class UV1EventBase**           evn                            (Parm, ZeroConstructor, IsPlainOldData)

void UBTDecorator_OnV1Event::EventFired(class UV1EventBase** evn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.BTDecorator_OnV1Event.EventFired");

	UBTDecorator_OnV1Event_EventFired_Params params;
	params.evn = evn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.UnitAbilityComponent.Server_ActivateAbility
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)

void UUnitAbilityComponent::Server_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.UnitAbilityComponent.Server_ActivateAbility");

	UUnitAbilityComponent_Server_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.UnitAbilityComponent.OnRep_PercentStockServerOverride
// (Final, Native, Private)

void UUnitAbilityComponent::OnRep_PercentStockServerOverride()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.UnitAbilityComponent.OnRep_PercentStockServerOverride");

	UUnitAbilityComponent_OnRep_PercentStockServerOverride_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.UnitAbilityComponent.NetMulticast_SetDesiredAbilityState
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
// EeUnitAbilityState*            desiredState                   (Parm, ZeroConstructor, IsPlainOldData)

void UUnitAbilityComponent::NetMulticast_SetDesiredAbilityState(EeUnitAbilityState* desiredState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.UnitAbilityComponent.NetMulticast_SetDesiredAbilityState");

	UUnitAbilityComponent_NetMulticast_SetDesiredAbilityState_Params params;
	params.desiredState = desiredState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.UnitAbilityComponent.NetMulticast_ForceRegenRPC
// (Net, NetReliable, Native, Event, NetMulticast, Public)

void UUnitAbilityComponent::NetMulticast_ForceRegenRPC()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.UnitAbilityComponent.NetMulticast_ForceRegenRPC");

	UUnitAbilityComponent_NetMulticast_ForceRegenRPC_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.UnitAbilityComponent.GetStockPercentage
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UUnitAbilityComponent::GetStockPercentage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.UnitAbilityComponent.GetStockPercentage");

	UUnitAbilityComponent_GetStockPercentage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.UnitAbilityComponent.GetHUDAccentColor
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UUnitAbilityComponent::GetHUDAccentColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.UnitAbilityComponent.GetHUDAccentColor");

	UUnitAbilityComponent_GetHUDAccentColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.UnitAbilityComponent.GetAbilityIconTexture
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UTexture*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTexture* UUnitAbilityComponent::GetAbilityIconTexture()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.UnitAbilityComponent.GetAbilityIconTexture");

	UUnitAbilityComponent_GetAbilityIconTexture_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.UnitAbilityComponent.GetAbilityHUDMaterial
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMaterialInterface*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMaterialInterface* UUnitAbilityComponent::GetAbilityHUDMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.UnitAbilityComponent.GetAbilityHUDMaterial");

	UUnitAbilityComponent_GetAbilityHUDMaterial_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.UnitAbilityComponent.ApplyForceReviveRegenTime
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)

void UUnitAbilityComponent::ApplyForceReviveRegenTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.UnitAbilityComponent.ApplyForceReviveRegenTime");

	UUnitAbilityComponent_ApplyForceReviveRegenTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.CampaignAfterMissionReportMenu.OnCrewLevelUp_BP
// (Event, Protected, BlueprintEvent)
// Parameters:
// int*                           newCrewLevel                   (Parm, ZeroConstructor, IsPlainOldData)

void UCampaignAfterMissionReportMenu::OnCrewLevelUp_BP(int* newCrewLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.CampaignAfterMissionReportMenu.OnCrewLevelUp_BP");

	UCampaignAfterMissionReportMenu_OnCrewLevelUp_BP_Params params;
	params.newCrewLevel = newCrewLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.CampaignChipTile.SetChipTileData_BP
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FChipTileData*          Data                           (ConstParm, Parm, OutParm, ReferenceParm)

void UCampaignChipTile::SetChipTileData_BP(struct FChipTileData* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.CampaignChipTile.SetChipTileData_BP");

	UCampaignChipTile_SetChipTileData_BP_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.CampaignChipTile.OnChipAppliedValueChange_BP
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          isApplied                      (Parm, ZeroConstructor, IsPlainOldData)

void UCampaignChipTile::OnChipAppliedValueChange_BP(bool* isApplied)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.CampaignChipTile.OnChipAppliedValueChange_BP");

	UCampaignChipTile_OnChipAppliedValueChange_BP_Params params;
	params.isApplied = isApplied;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.CampaignDifficultyMenu.OnDifficultyWidgetPressed
// (Final, Native, Protected)
// Parameters:
// class UWidget**                Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCampaignDifficultyMenu::OnDifficultyWidgetPressed(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.CampaignDifficultyMenu.OnDifficultyWidgetPressed");

	UCampaignDifficultyMenu_OnDifficultyWidgetPressed_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.CampaignDifficultyMenu.OnDifficultyWidgetHovered
// (Final, Native, Protected)
// Parameters:
// class UWidget**                Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCampaignDifficultyMenu::OnDifficultyWidgetHovered(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.CampaignDifficultyMenu.OnDifficultyWidgetHovered");

	UCampaignDifficultyMenu_OnDifficultyWidgetHovered_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.CampaignMainMenu.OnNewGamePressed
// (Final, Native, Private)

void UCampaignMainMenu::OnNewGamePressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.CampaignMainMenu.OnNewGamePressed");

	UCampaignMainMenu_OnNewGamePressed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.CampaignMainMenu.OnContinuePressed
// (Final, Native, Private)

void UCampaignMainMenu::OnContinuePressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.CampaignMainMenu.OnContinuePressed");

	UCampaignMainMenu_OnContinuePressed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.CampaignMapTile.OnButtonPressed
// (Final, Native, Protected)

void UCampaignMapTile::OnButtonPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.CampaignMapTile.OnButtonPressed");

	UCampaignMapTile_OnButtonPressed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.CampaignMapTile.OnButtonHovered
// (Final, Native, Protected)

void UCampaignMapTile::OnButtonHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.CampaignMapTile.OnButtonHovered");

	UCampaignMapTile_OnButtonHovered_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.CampaignMissionSelectionMenu.OnListItemSelected
// (Final, Native, Protected)
// Parameters:
// class UWidget**                Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCampaignMissionSelectionMenu::OnListItemSelected(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.CampaignMissionSelectionMenu.OnListItemSelected");

	UCampaignMissionSelectionMenu_OnListItemSelected_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.CampaignMissionSelectionMenu.OnListItemHovered
// (Final, Native, Protected)
// Parameters:
// class UWidget**                Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCampaignMissionSelectionMenu::OnListItemHovered(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.CampaignMissionSelectionMenu.OnListItemHovered");

	UCampaignMissionSelectionMenu_OnListItemHovered_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.CampaignProgressionChipMenu.UpdateMenuValues
// (Final, Native, Protected, BlueprintCallable)

void UCampaignProgressionChipMenu::UpdateMenuValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.CampaignProgressionChipMenu.UpdateMenuValues");

	UCampaignProgressionChipMenu_UpdateMenuValues_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.CampaignProgressionChipMenu.OnReleasedTile
// (Final, Native, Protected)
// Parameters:
// class UWidget**                releaseWidget                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCampaignProgressionChipMenu::OnReleasedTile(class UWidget** releaseWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.CampaignProgressionChipMenu.OnReleasedTile");

	UCampaignProgressionChipMenu_OnReleasedTile_Params params;
	params.releaseWidget = releaseWidget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.CampaignProgressionChipMenu.OnPressedTile
// (Final, Native, Protected)
// Parameters:
// class UWidget**                PressedWidget                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCampaignProgressionChipMenu::OnPressedTile(class UWidget** PressedWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.CampaignProgressionChipMenu.OnPressedTile");

	UCampaignProgressionChipMenu_OnPressedTile_Params params;
	params.PressedWidget = PressedWidget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.CampaignProgressionChipMenu.OnHoveredTile
// (Final, Native, Protected)
// Parameters:
// class UWidget**                HoveredWidget                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCampaignProgressionChipMenu::OnHoveredTile(class UWidget** HoveredWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.CampaignProgressionChipMenu.OnHoveredTile");

	UCampaignProgressionChipMenu_OnHoveredTile_Params params;
	params.HoveredWidget = HoveredWidget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.CampaignProgressionChipMenu.DebugAddSalvage
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// int*                           Amount                         (Parm, ZeroConstructor, IsPlainOldData)

void UCampaignProgressionChipMenu::DebugAddSalvage(int* Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.CampaignProgressionChipMenu.DebugAddSalvage");

	UCampaignProgressionChipMenu_DebugAddSalvage_Params params;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.CampaignProgressionChipMenu.DebugAddChips
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// int*                           Amount                         (Parm, ZeroConstructor, IsPlainOldData)

void UCampaignProgressionChipMenu::DebugAddChips(int* Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.CampaignProgressionChipMenu.DebugAddChips");

	UCampaignProgressionChipMenu_DebugAddChips_Params params;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.CampaignProgressionMenu.OnStartMissionButtonPressed
// (Final, Native, Protected)

void UCampaignProgressionMenu::OnStartMissionButtonPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.CampaignProgressionMenu.OnStartMissionButtonPressed");

	UCampaignProgressionMenu_OnStartMissionButtonPressed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.CampaignProgressionMenu.OnSelectMissionButtonPressed
// (Final, Native, Protected)

void UCampaignProgressionMenu::OnSelectMissionButtonPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.CampaignProgressionMenu.OnSelectMissionButtonPressed");

	UCampaignProgressionMenu_OnSelectMissionButtonPressed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.CampaignTutorialPrompt.OnYes
// (Final, Native, Protected)

void UCampaignTutorialPrompt::OnYes()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.CampaignTutorialPrompt.OnYes");

	UCampaignTutorialPrompt_OnYes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.CampaignTutorialPrompt.OnNo
// (Final, Native, Protected)

void UCampaignTutorialPrompt::OnNo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.CampaignTutorialPrompt.OnNo");

	UCampaignTutorialPrompt_OnNo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.CampaignUnitTile.SetUnitTileData_BP
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FUnitData*              Data                           (ConstParm, Parm, OutParm, ReferenceParm)

void UCampaignUnitTile::SetUnitTileData_BP(struct FUnitData* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.CampaignUnitTile.SetUnitTileData_BP");

	UCampaignUnitTile_SetUnitTileData_BP_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.CampaignUnitTile.OnCampaignUnitTileSelected
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          isSelected                     (Parm, ZeroConstructor, IsPlainOldData)

void UCampaignUnitTile::OnCampaignUnitTileSelected(bool* isSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.CampaignUnitTile.OnCampaignUnitTileSelected");

	UCampaignUnitTile_OnCampaignUnitTileSelected_Params params;
	params.isSelected = isSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.CaptureAreaActor.GetCaptureAreaComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UCaptureAreaComponent*   ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UCaptureAreaComponent* ACaptureAreaActor::GetCaptureAreaComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.CaptureAreaActor.GetCaptureAreaComponent");

	ACaptureAreaActor_GetCaptureAreaComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.CaptureAreaComponent.OnCaptureAreaEndOverlap
// (Final, Native, Private, HasOutParms)
// Parameters:
// struct FV1OverlapInfo*         overlapInfo                    (ConstParm, Parm, OutParm, ReferenceParm)
// class UV1OverlapComponent**    V1OverlapComponent             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCaptureAreaComponent::OnCaptureAreaEndOverlap(struct FV1OverlapInfo* overlapInfo, class UV1OverlapComponent** V1OverlapComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.CaptureAreaComponent.OnCaptureAreaEndOverlap");

	UCaptureAreaComponent_OnCaptureAreaEndOverlap_Params params;
	params.overlapInfo = overlapInfo;
	params.V1OverlapComponent = V1OverlapComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.CaptureAreaComponent.OnCaptureAreaBeginOverlap
// (Final, Native, Private, HasOutParms)
// Parameters:
// struct FV1OverlapInfo*         overlapInfo                    (ConstParm, Parm, OutParm, ReferenceParm)
// class UV1OverlapComponent**    V1OverlapComponent             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCaptureAreaComponent::OnCaptureAreaBeginOverlap(struct FV1OverlapInfo* overlapInfo, class UV1OverlapComponent** V1OverlapComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.CaptureAreaComponent.OnCaptureAreaBeginOverlap");

	UCaptureAreaComponent_OnCaptureAreaBeginOverlap_Params params;
	params.overlapInfo = overlapInfo;
	params.V1OverlapComponent = V1OverlapComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.CaptureAreaComponent.NetMulticast_OnCaptureStateChange
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
// EeCaptureAreaCaptureState*     oldState                       (Parm, ZeroConstructor, IsPlainOldData)
// EeCaptureAreaCaptureState*     NewState                       (Parm, ZeroConstructor, IsPlainOldData)
// EeTeamID*                      previousTeamAttempting         (Parm, ZeroConstructor, IsPlainOldData)
// EeTeamID*                      teamAttempting                 (Parm, ZeroConstructor, IsPlainOldData)
// EeTeamID*                      previousTeamInControl          (Parm, ZeroConstructor, IsPlainOldData)
// EeTeamID*                      teamInControl                  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          isGameplayChange               (Parm, ZeroConstructor, IsPlainOldData)

void UCaptureAreaComponent::NetMulticast_OnCaptureStateChange(EeCaptureAreaCaptureState* oldState, EeCaptureAreaCaptureState* NewState, EeTeamID* previousTeamAttempting, EeTeamID* teamAttempting, EeTeamID* previousTeamInControl, EeTeamID* teamInControl, bool* isGameplayChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.CaptureAreaComponent.NetMulticast_OnCaptureStateChange");

	UCaptureAreaComponent_NetMulticast_OnCaptureStateChange_Params params;
	params.oldState = oldState;
	params.NewState = NewState;
	params.previousTeamAttempting = previousTeamAttempting;
	params.teamAttempting = teamAttempting;
	params.previousTeamInControl = previousTeamInControl;
	params.teamInControl = teamInControl;
	params.isGameplayChange = isGameplayChange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.CaptureAreaComponent.IsContested
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCaptureAreaComponent::IsContested()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.CaptureAreaComponent.IsContested");

	UCaptureAreaComponent_IsContested_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.CaptureAreaComponent.IsCommanderInArea
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EeCommanderID*                 Commander                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCaptureAreaComponent::IsCommanderInArea(EeCommanderID* Commander)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.CaptureAreaComponent.IsCommanderInArea");

	UCaptureAreaComponent_IsCommanderInArea_Params params;
	params.Commander = Commander;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.CaptureAreaComponent.GetTeamInControl
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EeTeamID                       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EeTeamID UCaptureAreaComponent::GetTeamInControl()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.CaptureAreaComponent.GetTeamInControl");

	UCaptureAreaComponent_GetTeamInControl_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.CaptureAreaComponent.GetTeamForColoring
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EeTeamID                       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EeTeamID UCaptureAreaComponent::GetTeamForColoring()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.CaptureAreaComponent.GetTeamForColoring");

	UCaptureAreaComponent_GetTeamForColoring_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.CaptureAreaComponent.GetTeamAttemptingControl
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EeTeamID                       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EeTeamID UCaptureAreaComponent::GetTeamAttemptingControl()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.CaptureAreaComponent.GetTeamAttemptingControl");

	UCaptureAreaComponent_GetTeamAttemptingControl_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.CaptureAreaComponent.GetCaptureState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EeCaptureAreaCaptureState      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EeCaptureAreaCaptureState UCaptureAreaComponent::GetCaptureState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.CaptureAreaComponent.GetCaptureState");

	UCaptureAreaComponent_GetCaptureState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.CaptureAreaComponent.GetCaptureRatio
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UCaptureAreaComponent::GetCaptureRatio()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.CaptureAreaComponent.GetCaptureRatio");

	UCaptureAreaComponent_GetCaptureRatio_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.CaptureAreaComponent.CountOfCommandersInArea
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EeTeamID*                      Team                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCaptureAreaComponent::CountOfCommandersInArea(EeTeamID* Team)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.CaptureAreaComponent.CountOfCommandersInArea");

	UCaptureAreaComponent_CountOfCommandersInArea_Params params;
	params.Team = Team;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.ChallengeCollapsingWidget.OnCollapseChangeBP
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          isCollapsed                    (Parm, ZeroConstructor, IsPlainOldData)

void UChallengeCollapsingWidget::OnCollapseChangeBP(bool* isCollapsed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.ChallengeCollapsingWidget.OnCollapseChangeBP");

	UChallengeCollapsingWidget_OnCollapseChangeBP_Params params;
	params.isCollapsed = isCollapsed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.ChallengeInteractionOverlayWidget.OnShowChallengeInfo
// (Event, Public, BlueprintEvent)

void UChallengeInteractionOverlayWidget::OnShowChallengeInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.ChallengeInteractionOverlayWidget.OnShowChallengeInfo");

	UChallengeInteractionOverlayWidget_OnShowChallengeInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.ChallengeInteractionOverlayWidget.OnHideChallengeInfo
// (Event, Public, BlueprintEvent)

void UChallengeInteractionOverlayWidget::OnHideChallengeInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.ChallengeInteractionOverlayWidget.OnHideChallengeInfo");

	UChallengeInteractionOverlayWidget_OnHideChallengeInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.ChallengeMenu.OnSetWidgetPressed
// (Final, Native, Private)
// Parameters:
// class UWidget**                Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UChallengeMenu::OnSetWidgetPressed(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.ChallengeMenu.OnSetWidgetPressed");

	UChallengeMenu_OnSetWidgetPressed_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.ChallengeMenu.OnSetWidgetHovered
// (Final, Native, Private)
// Parameters:
// class UWidget**                Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UChallengeMenu::OnSetWidgetHovered(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.ChallengeMenu.OnSetWidgetHovered");

	UChallengeMenu_OnSetWidgetHovered_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.ChallengeMenu.OnChallengeTilePressed
// (Final, Native, Private)
// Parameters:
// class UWidget**                Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UChallengeMenu::OnChallengeTilePressed(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.ChallengeMenu.OnChallengeTilePressed");

	UChallengeMenu_OnChallengeTilePressed_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.ChallengeMenu.OnChallengeTileHovered
// (Final, Native, Private)
// Parameters:
// class UWidget**                Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UChallengeMenu::OnChallengeTileHovered(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.ChallengeMenu.OnChallengeTileHovered");

	UChallengeMenu_OnChallengeTileHovered_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.CharacterAnimationComponent.OnRepActiveAnimSet
// (Final, Native, Private)

void UCharacterAnimationComponent::OnRepActiveAnimSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.CharacterAnimationComponent.OnRepActiveAnimSet");

	UCharacterAnimationComponent_OnRepActiveAnimSet_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.HandledWeapon.OnRep_Weapon
// (Final, Native, Protected)

void UHandledWeapon::OnRep_Weapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.HandledWeapon.OnRep_Weapon");

	UHandledWeapon_OnRep_Weapon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.PawnWeaponHandlingComponent.OnRepWeaponInventory
// (Final, Native, Private)

void UPawnWeaponHandlingComponent::OnRepWeaponInventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PawnWeaponHandlingComponent.OnRepWeaponInventory");

	UPawnWeaponHandlingComponent_OnRepWeaponInventory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.ChatterConfig.GetInitialConfigForCategory
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// EeChatterCategory*             Category                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FChatterPriorityConfig  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FChatterPriorityConfig UChatterConfig::GetInitialConfigForCategory(EeChatterCategory* Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.ChatterConfig.GetInitialConfigForCategory");

	UChatterConfig_GetInitialConfigForCategory_Params params;
	params.Category = Category;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.ChatterInfoCollection.GetInitialChatterInfoForCategory
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// EeChatterCategory*             Category                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FChatterInfo            ReturnValue                    (Parm, OutParm, ReturnParm)

struct FChatterInfo UChatterInfoCollection::GetInitialChatterInfoForCategory(EeChatterCategory* Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.ChatterInfoCollection.GetInitialChatterInfoForCategory");

	UChatterInfoCollection_GetInitialChatterInfoForCategory_Params params;
	params.Category = Category;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.CommandCenterActor.GetUnitsSpawnPoint
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USceneComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USceneComponent* ACommandCenterActor::GetUnitsSpawnPoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.CommandCenterActor.GetUnitsSpawnPoint");

	ACommandCenterActor_GetUnitsSpawnPoint_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.CommandCenterActor.GetGravCycleSpawnPoint
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USceneComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USceneComponent* ACommandCenterActor::GetGravCycleSpawnPoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.CommandCenterActor.GetGravCycleSpawnPoint");

	ACommandCenterActor_GetGravCycleSpawnPoint_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.CinematicLoadingScreenWidget.OnInitializeLoadingScreen
// (Event, Protected, BlueprintEvent)

void UCinematicLoadingScreenWidget::OnInitializeLoadingScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.CinematicLoadingScreenWidget.OnInitializeLoadingScreen");

	UCinematicLoadingScreenWidget_OnInitializeLoadingScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.CloakAbilityWidget.SetCloakPercentageLeft
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         percentage                     (Parm, ZeroConstructor, IsPlainOldData)

void UCloakAbilityWidget::SetCloakPercentageLeft(float* percentage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.CloakAbilityWidget.SetCloakPercentageLeft");

	UCloakAbilityWidget_SetCloakPercentageLeft_Params params;
	params.percentage = percentage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.CloakAbilityWidget.OnCloakStart
// (Event, Public, BlueprintEvent)

void UCloakAbilityWidget::OnCloakStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.CloakAbilityWidget.OnCloakStart");

	UCloakAbilityWidget_OnCloakStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.CloakAbilityWidget.OnCloakEnd
// (Event, Public, BlueprintEvent)

void UCloakAbilityWidget::OnCloakEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.CloakAbilityWidget.OnCloakEnd");

	UCloakAbilityWidget_OnCloakEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.ColorDefinition.GetUnitColor
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UColorDefinition::GetUnitColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.ColorDefinition.GetUnitColor");

	UColorDefinition_GetUnitColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.ColorDefinition.GetTypeColor
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UColorDefinition::GetTypeColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.ColorDefinition.GetTypeColor");

	UColorDefinition_GetTypeColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.ColorDefinition.GetSnapReticleColor
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UColorDefinition::GetSnapReticleColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.ColorDefinition.GetSnapReticleColor");

	UColorDefinition_GetSnapReticleColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.ColorDefinition.GetShieldsBarMissingShieldColor
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UColorDefinition::GetShieldsBarMissingShieldColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.ColorDefinition.GetShieldsBarMissingShieldColor");

	UColorDefinition_GetShieldsBarMissingShieldColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.ColorDefinition.GetShieldsBarLowShieldColor
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UColorDefinition::GetShieldsBarLowShieldColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.ColorDefinition.GetShieldsBarLowShieldColor");

	UColorDefinition_GetShieldsBarLowShieldColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.ColorDefinition.GetShieldsBarColor
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UColorDefinition::GetShieldsBarColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.ColorDefinition.GetShieldsBarColor");

	UColorDefinition_GetShieldsBarColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.ColorDefinition.GetProjectileColor
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UColorDefinition::GetProjectileColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.ColorDefinition.GetProjectileColor");

	UColorDefinition_GetProjectileColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.ColorDefinition.GetPostProcessingColor
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UColorDefinition::GetPostProcessingColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.ColorDefinition.GetPostProcessingColor");

	UColorDefinition_GetPostProcessingColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.ColorDefinition.GetOffscreenColor
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UColorDefinition::GetOffscreenColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.ColorDefinition.GetOffscreenColor");

	UColorDefinition_GetOffscreenColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.ColorDefinition.GetNameColor
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UColorDefinition::GetNameColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.ColorDefinition.GetNameColor");

	UColorDefinition_GetNameColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.ColorDefinition.GetHUDColor
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UColorDefinition::GetHUDColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.ColorDefinition.GetHUDColor");

	UColorDefinition_GetHUDColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.ColorDefinition.GetHealthTextColor
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UColorDefinition::GetHealthTextColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.ColorDefinition.GetHealthTextColor");

	UColorDefinition_GetHealthTextColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.ColorDefinition.GetHealthBarMissingHealthColor
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UColorDefinition::GetHealthBarMissingHealthColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.ColorDefinition.GetHealthBarMissingHealthColor");

	UColorDefinition_GetHealthBarMissingHealthColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.ColorDefinition.GetHealthBarLowHealthColor
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UColorDefinition::GetHealthBarLowHealthColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.ColorDefinition.GetHealthBarLowHealthColor");

	UColorDefinition_GetHealthBarLowHealthColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.ColorDefinition.GetHealthBarColor
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UColorDefinition::GetHealthBarColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.ColorDefinition.GetHealthBarColor");

	UColorDefinition_GetHealthBarColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.ColorDefinition.GetFXColor
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UColorDefinition::GetFXColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.ColorDefinition.GetFXColor");

	UColorDefinition_GetFXColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.ColorDefinition.GetDownedColor
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UColorDefinition::GetDownedColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.ColorDefinition.GetDownedColor");

	UColorDefinition_GetDownedColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.ColorDefinition.GetCommandPulseColor
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UColorDefinition::GetCommandPulseColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.ColorDefinition.GetCommandPulseColor");

	UColorDefinition_GetCommandPulseColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.ColorDefinition.GetColorDefinitionType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EeColorDefinitionType          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EeColorDefinitionType UColorDefinition::GetColorDefinitionType()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.ColorDefinition.GetColorDefinitionType");

	UColorDefinition_GetColorDefinitionType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.ColorDefinition.GetColor
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag*           Tag                            (Parm)
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UColorDefinition::GetColor(struct FGameplayTag* Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.ColorDefinition.GetColor");

	UColorDefinition_GetColor_Params params;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.ColorDefinition.GetChevronColor
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UColorDefinition::GetChevronColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.ColorDefinition.GetChevronColor");

	UColorDefinition_GetChevronColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.ColorManager.GetTeamRelationshipColorDefinition
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EeTeamRelationship*            Type                           (Parm, ZeroConstructor, IsPlainOldData)
// class UColorDefinition*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UColorDefinition* UColorManager::GetTeamRelationshipColorDefinition(EeTeamRelationship* Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.ColorManager.GetTeamRelationshipColorDefinition");

	UColorManager_GetTeamRelationshipColorDefinition_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.ColorManager.GetInteractableColorDefinition
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EeInteractableType*            Type                           (Parm, ZeroConstructor, IsPlainOldData)
// class UColorDefinition*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UColorDefinition* UColorManager::GetInteractableColorDefinition(EeInteractableType* Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.ColorManager.GetInteractableColorDefinition");

	UColorManager_GetInteractableColorDefinition_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.ColorManager.GetGenericColorDefinition
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EeColorDefinitionType*         Type                           (Parm, ZeroConstructor, IsPlainOldData)
// class UColorDefinition*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UColorDefinition* UColorManager::GetGenericColorDefinition(EeColorDefinitionType* Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.ColorManager.GetGenericColorDefinition");

	UColorManager_GetGenericColorDefinition_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.CommandedAbilityHUDWidget.OnUnitWaitingOnBrainCanPickup_BP
// (Event, Protected, BlueprintEvent)

void UCommandedAbilityHUDWidget::OnUnitWaitingOnBrainCanPickup_BP()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.CommandedAbilityHUDWidget.OnUnitWaitingOnBrainCanPickup_BP");

	UCommandedAbilityHUDWidget_OnUnitWaitingOnBrainCanPickup_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.CommandedAbilityHUDWidget.OnUnitRevivable_BP
// (Event, Protected, BlueprintEvent)

void UCommandedAbilityHUDWidget::OnUnitRevivable_BP()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.CommandedAbilityHUDWidget.OnUnitRevivable_BP");

	UCommandedAbilityHUDWidget_OnUnitRevivable_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.CommandedAbilityHUDWidget.OnUnitRespawning_BP
// (Event, Protected, BlueprintEvent)

void UCommandedAbilityHUDWidget::OnUnitRespawning_BP()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.CommandedAbilityHUDWidget.OnUnitRespawning_BP");

	UCommandedAbilityHUDWidget_OnUnitRespawning_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.CommandedAbilityHUDWidget.OnUnitDownedTimerEnd_BP
// (Event, Protected, BlueprintEvent)

void UCommandedAbilityHUDWidget::OnUnitDownedTimerEnd_BP()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.CommandedAbilityHUDWidget.OnUnitDownedTimerEnd_BP");

	UCommandedAbilityHUDWidget_OnUnitDownedTimerEnd_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.CommandedAbilityHUDWidget.OnUnitDownedTimerBegin_BP
// (Event, Protected, BlueprintEvent)

void UCommandedAbilityHUDWidget::OnUnitDownedTimerBegin_BP()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.CommandedAbilityHUDWidget.OnUnitDownedTimerBegin_BP");

	UCommandedAbilityHUDWidget_OnUnitDownedTimerBegin_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.CommandedAbilityHUDWidget.OnUnitDown_BP
// (Event, Protected, BlueprintEvent)

void UCommandedAbilityHUDWidget::OnUnitDown_BP()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.CommandedAbilityHUDWidget.OnUnitDown_BP");

	UCommandedAbilityHUDWidget_OnUnitDown_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.CommandedAbilityHUDWidget.OnUnitActive_BP
// (Event, Protected, BlueprintEvent)

void UCommandedAbilityHUDWidget::OnUnitActive_BP()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.CommandedAbilityHUDWidget.OnUnitActive_BP");

	UCommandedAbilityHUDWidget_OnUnitActive_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.CommandedAbilityHUDWidget.OnInvalidInputPressed_BP
// (Event, Public, BlueprintEvent)

void UCommandedAbilityHUDWidget::OnInvalidInputPressed_BP()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.CommandedAbilityHUDWidget.OnInvalidInputPressed_BP");

	UCommandedAbilityHUDWidget_OnInvalidInputPressed_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.CommandedAbilityHUDWidget.OnInputResponseCapableChanged_BP
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          hasInput                       (Parm, ZeroConstructor, IsPlainOldData)

void UCommandedAbilityHUDWidget::OnInputResponseCapableChanged_BP(bool* hasInput)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.CommandedAbilityHUDWidget.OnInputResponseCapableChanged_BP");

	UCommandedAbilityHUDWidget_OnInputResponseCapableChanged_BP_Params params;
	params.hasInput = hasInput;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.CommandedAbilityHUDWidget.OnAbilityStagingEnd_BP
// (Event, Protected, BlueprintEvent)

void UCommandedAbilityHUDWidget::OnAbilityStagingEnd_BP()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.CommandedAbilityHUDWidget.OnAbilityStagingEnd_BP");

	UCommandedAbilityHUDWidget_OnAbilityStagingEnd_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.CommandedAbilityHUDWidget.OnAbilityStagingCancelled_BP
// (Event, Protected, BlueprintEvent)

void UCommandedAbilityHUDWidget::OnAbilityStagingCancelled_BP()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.CommandedAbilityHUDWidget.OnAbilityStagingCancelled_BP");

	UCommandedAbilityHUDWidget_OnAbilityStagingCancelled_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.CommandedAbilityHUDWidget.OnAbilityStagingBegin_BP
// (Event, Protected, BlueprintEvent)

void UCommandedAbilityHUDWidget::OnAbilityStagingBegin_BP()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.CommandedAbilityHUDWidget.OnAbilityStagingBegin_BP");

	UCommandedAbilityHUDWidget_OnAbilityStagingBegin_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.CommandedAbilityHUDWidget.OnAbilityCooldown_BP
// (Event, Protected, BlueprintEvent)

void UCommandedAbilityHUDWidget::OnAbilityCooldown_BP()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.CommandedAbilityHUDWidget.OnAbilityCooldown_BP");

	UCommandedAbilityHUDWidget_OnAbilityCooldown_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.CommandedAbilityHUDWidget.OnAbilityAvailable_BP
// (Event, Protected, BlueprintEvent)
// Parameters:
// float*                         syncTime                       (Parm, ZeroConstructor, IsPlainOldData)

void UCommandedAbilityHUDWidget::OnAbilityAvailable_BP(float* syncTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.CommandedAbilityHUDWidget.OnAbilityAvailable_BP");

	UCommandedAbilityHUDWidget_OnAbilityAvailable_BP_Params params;
	params.syncTime = syncTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.CommandedAbilityHUDWidget.OnAbilityActivated_BP
// (Event, Protected, BlueprintEvent)

void UCommandedAbilityHUDWidget::OnAbilityActivated_BP()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.CommandedAbilityHUDWidget.OnAbilityActivated_BP");

	UCommandedAbilityHUDWidget_OnAbilityActivated_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.CommanderComponentPlayer.OnServer_SendSmartObjectOrderToSquad
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// class USmartObjectComponent**  SmartObject                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCommanderComponentPlayer::OnServer_SendSmartObjectOrderToSquad(class USmartObjectComponent** SmartObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.CommanderComponentPlayer.OnServer_SendSmartObjectOrderToSquad");

	UCommanderComponentPlayer_OnServer_SendSmartObjectOrderToSquad_Params params;
	params.SmartObject = SmartObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.CommandPulseLogic.Server_Deactivate
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// bool*                          ignoreOwningClient             (Parm, ZeroConstructor, IsPlainOldData)

void UCommandPulseLogic::Server_Deactivate(bool* ignoreOwningClient)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.CommandPulseLogic.Server_Deactivate");

	UCommandPulseLogic_Server_Deactivate_Params params;
	params.ignoreOwningClient = ignoreOwningClient;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.CommandPulseLogic.Server_Activate
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// struct FCommandPulseRequirements* pulseData                      (Parm)
// bool*                          ignoreOwningClient             (Parm, ZeroConstructor, IsPlainOldData)

void UCommandPulseLogic::Server_Activate(struct FCommandPulseRequirements* pulseData, bool* ignoreOwningClient)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.CommandPulseLogic.Server_Activate");

	UCommandPulseLogic_Server_Activate_Params params;
	params.pulseData = pulseData;
	params.ignoreOwningClient = ignoreOwningClient;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.CommandPulseLogic.Multicast_Deactivate
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
// bool*                          ignoreOwningClient             (Parm, ZeroConstructor, IsPlainOldData)

void UCommandPulseLogic::Multicast_Deactivate(bool* ignoreOwningClient)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.CommandPulseLogic.Multicast_Deactivate");

	UCommandPulseLogic_Multicast_Deactivate_Params params;
	params.ignoreOwningClient = ignoreOwningClient;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.CommandPulseLogic.Multicast_Activate
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
// struct FCommandPulseRequirements* pulseData                      (Parm)
// bool*                          ignoreOwningClient             (Parm, ZeroConstructor, IsPlainOldData)

void UCommandPulseLogic::Multicast_Activate(struct FCommandPulseRequirements* pulseData, bool* ignoreOwningClient)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.CommandPulseLogic.Multicast_Activate");

	UCommandPulseLogic_Multicast_Activate_Params params;
	params.pulseData = pulseData;
	params.ignoreOwningClient = ignoreOwningClient;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.CommandPulseLogic.GetOwningPlayerController
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ARobogorePlayerController* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ARobogorePlayerController* UCommandPulseLogic::GetOwningPlayerController()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.CommandPulseLogic.GetOwningPlayerController");

	UCommandPulseLogic_GetOwningPlayerController_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.CommandPulseLogic.GetOwningPawn
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APawn*                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APawn* UCommandPulseLogic::GetOwningPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.CommandPulseLogic.GetOwningPawn");

	UCommandPulseLogic_GetOwningPawn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.CommandPulseLogic.GetOwnerRole
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<ENetRole>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ENetRole> UCommandPulseLogic::GetOwnerRole()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.CommandPulseLogic.GetOwnerRole");

	UCommandPulseLogic_GetOwnerRole_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.CustomReticle.OnZoomEnd
// (Event, Public, BlueprintEvent)

void UCustomReticle::OnZoomEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.CustomReticle.OnZoomEnd");

	UCustomReticle_OnZoomEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.CustomReticle.OnZoomBegin
// (Event, Public, BlueprintEvent)

void UCustomReticle::OnZoomBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.CustomReticle.OnZoomBegin");

	UCustomReticle_OnZoomBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.CustomReticle.OnWeaponAssigned_BP
// (Event, Protected, BlueprintEvent)

void UCustomReticle::OnWeaponAssigned_BP()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.CustomReticle.OnWeaponAssigned_BP");

	UCustomReticle_OnWeaponAssigned_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.CustomReticle.OnWeaponAbilityAssigned_BP
// (Event, Protected, BlueprintEvent)

void UCustomReticle::OnWeaponAbilityAssigned_BP()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.CustomReticle.OnWeaponAbilityAssigned_BP");

	UCustomReticle_OnWeaponAbilityAssigned_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.CustomReticle.OnCustomReticleUpdate_BP
// (Event, Protected, BlueprintEvent)
// Parameters:
// float*                         dt                             (Parm, ZeroConstructor, IsPlainOldData)

void UCustomReticle::OnCustomReticleUpdate_BP(float* dt)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.CustomReticle.OnCustomReticleUpdate_BP");

	UCustomReticle_OnCustomReticleUpdate_BP_Params params;
	params.dt = dt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.CustomReticle.GetWeaponAbility
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AWeaponAbility*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AWeaponAbility* UCustomReticle::GetWeaponAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.CustomReticle.GetWeaponAbility");

	UCustomReticle_GetWeaponAbility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.CustomReticle.GetWeapon
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ARangedWeapon*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ARangedWeapon* UCustomReticle::GetWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.CustomReticle.GetWeapon");

	UCustomReticle_GetWeapon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.SnappingReticle.OnSnapEnd_BP
// (Event, Protected, BlueprintEvent)

void USnappingReticle::OnSnapEnd_BP()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.SnappingReticle.OnSnapEnd_BP");

	USnappingReticle_OnSnapEnd_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.SnappingReticle.OnSnapBegin_BP
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 snappedActor                   (Parm, ZeroConstructor, IsPlainOldData)
// EeReticleSnapType*             snapType                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UInteractableObjectComponent** interactable                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void USnappingReticle::OnSnapBegin_BP(class AActor** snappedActor, EeReticleSnapType* snapType, class UInteractableObjectComponent** interactable)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.SnappingReticle.OnSnapBegin_BP");

	USnappingReticle_OnSnapBegin_BP_Params params;
	params.snappedActor = snappedActor;
	params.snapType = snapType;
	params.interactable = interactable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.SnappingReticle.IsSnapping
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USnappingReticle::IsSnapping()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.SnappingReticle.IsSnapping");

	USnappingReticle_IsSnapping_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.CommandPulseReticle.OnSnapCandidateEnd_BP
// (Event, Public, BlueprintEvent)

void UCommandPulseReticle::OnSnapCandidateEnd_BP()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.CommandPulseReticle.OnSnapCandidateEnd_BP");

	UCommandPulseReticle_OnSnapCandidateEnd_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.CommandPulseReticle.OnSnapCandidateBegin_BP
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 snappedActor                   (Parm, ZeroConstructor, IsPlainOldData)
// EeReticleSnapType*             snapType                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UInteractableObjectComponent** interactable                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCommandPulseReticle::OnSnapCandidateBegin_BP(class AActor** snappedActor, EeReticleSnapType* snapType, class UInteractableObjectComponent** interactable)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.CommandPulseReticle.OnSnapCandidateBegin_BP");

	UCommandPulseReticle_OnSnapCandidateBegin_BP_Params params;
	params.snappedActor = snappedActor;
	params.snapType = snapType;
	params.interactable = interactable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.CommandPulseReticle.OnCommandPulseReleased_BP
// (Event, Public, BlueprintEvent)

void UCommandPulseReticle::OnCommandPulseReleased_BP()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.CommandPulseReticle.OnCommandPulseReleased_BP");

	UCommandPulseReticle_OnCommandPulseReleased_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.CommandPulseReticle.OnCommandPulseEnabled_BP
// (Event, Public, BlueprintEvent)

void UCommandPulseReticle::OnCommandPulseEnabled_BP()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.CommandPulseReticle.OnCommandPulseEnabled_BP");

	UCommandPulseReticle_OnCommandPulseEnabled_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.CommandPulseReticle.OnCommandPulseDisabled_BP
// (Event, Public, BlueprintEvent)

void UCommandPulseReticle::OnCommandPulseDisabled_BP()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.CommandPulseReticle.OnCommandPulseDisabled_BP");

	UCommandPulseReticle_OnCommandPulseDisabled_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.CommandPulseReticle.GetCommandPulseCandidateSnapDistancePercent
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UCommandPulseReticle::GetCommandPulseCandidateSnapDistancePercent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.CommandPulseReticle.GetCommandPulseCandidateSnapDistancePercent");

	UCommandPulseReticle_GetCommandPulseCandidateSnapDistancePercent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.CommandPulseUserWidget.UpdateCommandPulseAngle
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         angleFromForward               (Parm, ZeroConstructor, IsPlainOldData)

void UCommandPulseUserWidget::UpdateCommandPulseAngle(float* angleFromForward)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.CommandPulseUserWidget.UpdateCommandPulseAngle");

	UCommandPulseUserWidget_UpdateCommandPulseAngle_Params params;
	params.angleFromForward = angleFromForward;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.CommandPulseUserWidget.SetInnerPulseRatio
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         Ratio                          (Parm, ZeroConstructor, IsPlainOldData)

void UCommandPulseUserWidget::SetInnerPulseRatio(float* Ratio)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.CommandPulseUserWidget.SetInnerPulseRatio");

	UCommandPulseUserWidget_SetInnerPulseRatio_Params params;
	params.Ratio = Ratio;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.CommandPulseUserWidget.OnStagingCancelled
// (Event, Public, BlueprintEvent)

void UCommandPulseUserWidget::OnStagingCancelled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.CommandPulseUserWidget.OnStagingCancelled");

	UCommandPulseUserWidget_OnStagingCancelled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.CommandPulseUserWidget.OnStagingBegin
// (Event, Public, BlueprintEvent)

void UCommandPulseUserWidget::OnStagingBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.CommandPulseUserWidget.OnStagingBegin");

	UCommandPulseUserWidget_OnStagingBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.CommandPulseUserWidget.OnSquadAwarenessStateChange
// (Event, Public, BlueprintEvent)

void UCommandPulseUserWidget::OnSquadAwarenessStateChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.CommandPulseUserWidget.OnSquadAwarenessStateChange");

	UCommandPulseUserWidget_OnSquadAwarenessStateChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.CommandPulseUserWidget.OnEndVisualization
// (Event, Public, BlueprintEvent)

void UCommandPulseUserWidget::OnEndVisualization()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.CommandPulseUserWidget.OnEndVisualization");

	UCommandPulseUserWidget_OnEndVisualization_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.CommandPulseUserWidget.OnDeactivate
// (Event, Public, BlueprintEvent)

void UCommandPulseUserWidget::OnDeactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.CommandPulseUserWidget.OnDeactivate");

	UCommandPulseUserWidget_OnDeactivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.CommandPulseUserWidget.OnActivate
// (Event, Public, BlueprintEvent)

void UCommandPulseUserWidget::OnActivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.CommandPulseUserWidget.OnActivate");

	UCommandPulseUserWidget_OnActivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.CommandPulseUserWidget.AddTargetMarkerWidget
// (Event, Public, BlueprintEvent)
// Parameters:
// class UPrimaryPulseOutsideTargetMarkerWidget** targetWidget                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCommandPulseUserWidget::AddTargetMarkerWidget(class UPrimaryPulseOutsideTargetMarkerWidget** targetWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.CommandPulseUserWidget.AddTargetMarkerWidget");

	UCommandPulseUserWidget_AddTargetMarkerWidget_Params params;
	params.targetWidget = targetWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.CommunicationWheelEmoteWidget.OnEnabledBP
// (Event, Protected, BlueprintEvent)

void UCommunicationWheelEmoteWidget::OnEnabledBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.CommunicationWheelEmoteWidget.OnEnabledBP");

	UCommunicationWheelEmoteWidget_OnEnabledBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.CommunicationWheelEmoteWidget.OnDisableBP
// (Event, Protected, BlueprintEvent)

void UCommunicationWheelEmoteWidget::OnDisableBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.CommunicationWheelEmoteWidget.OnDisableBP");

	UCommunicationWheelEmoteWidget_OnDisableBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.CreditsPlayerController.OnCreditsEnded
// (Final, Native, Protected)

void ACreditsPlayerController::OnCreditsEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.CreditsPlayerController.OnCreditsEnded");

	ACreditsPlayerController_OnCreditsEnded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.CrewDisplayWidget.OnSelectedBP
// (Event, Protected, BlueprintEvent)

void UCrewDisplayWidget::OnSelectedBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.CrewDisplayWidget.OnSelectedBP");

	UCrewDisplayWidget_OnSelectedBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.CrewDisplayWidget.OnFailSelectBP
// (Event, Protected, BlueprintEvent)

void UCrewDisplayWidget::OnFailSelectBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.CrewDisplayWidget.OnFailSelectBP");

	UCrewDisplayWidget_OnFailSelectBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.CrewDisplayWidget.OnDeselectedBP
// (Event, Protected, BlueprintEvent)

void UCrewDisplayWidget::OnDeselectedBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.CrewDisplayWidget.OnDeselectedBP");

	UCrewDisplayWidget_OnDeselectedBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.CrewSceneCapture.OnEmoteCompleted
// (Final, Native, Protected)

void ACrewSceneCapture::OnEmoteCompleted()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.CrewSceneCapture.OnEmoteCompleted");

	ACrewSceneCapture_OnEmoteCompleted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.StatRowTile.SetTileData_BP
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FStatRow*               Data                           (ConstParm, Parm, OutParm, ReferenceParm)

void UStatRowTile::SetTileData_BP(struct FStatRow* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.StatRowTile.SetTileData_BP");

	UStatRowTile_SetTileData_BP_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.CrewStatsMenu.OnPressedTile
// (Final, Native, Public)
// Parameters:
// class UWidget**                PressedWidget                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCrewStatsMenu::OnPressedTile(class UWidget** PressedWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.CrewStatsMenu.OnPressedTile");

	UCrewStatsMenu_OnPressedTile_Params params;
	params.PressedWidget = PressedWidget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.CrewStatsMenu.OnHoveredTile
// (Final, Native, Public)
// Parameters:
// class UWidget**                HoveredWidget                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCrewStatsMenu::OnHoveredTile(class UWidget** HoveredWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.CrewStatsMenu.OnHoveredTile");

	UCrewStatsMenu_OnHoveredTile_Params params;
	params.HoveredWidget = HoveredWidget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.CrewVisualsSelectionTile.SetTileData_BP
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FCrewTileData*          Data                           (ConstParm, Parm, OutParm, ReferenceParm)

void UCrewVisualsSelectionTile::SetTileData_BP(struct FCrewTileData* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.CrewVisualsSelectionTile.SetTileData_BP");

	UCrewVisualsSelectionTile_SetTileData_BP_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.CrewVisualsSelection.OnPressedTile
// (Final, Native, Public)
// Parameters:
// class UWidget**                PressedWidget                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCrewVisualsSelection::OnPressedTile(class UWidget** PressedWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.CrewVisualsSelection.OnPressedTile");

	UCrewVisualsSelection_OnPressedTile_Params params;
	params.PressedWidget = PressedWidget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.CrewVisualsSelection.OnHoveredTile
// (Final, Native, Public)
// Parameters:
// class UWidget**                HoveredWidget                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCrewVisualsSelection::OnHoveredTile(class UWidget** HoveredWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.CrewVisualsSelection.OnHoveredTile");

	UCrewVisualsSelection_OnHoveredTile_Params params;
	params.HoveredWidget = HoveredWidget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.DamageableVentActor.OnThunderheadGoingDown_BP
// (Event, Public, BlueprintEvent)

void ADamageableVentActor::OnThunderheadGoingDown_BP()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.DamageableVentActor.OnThunderheadGoingDown_BP");

	ADamageableVentActor_OnThunderheadGoingDown_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.DamageableVentActor.OnDamageableStateChange_BP
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          isDamageable                   (Parm, ZeroConstructor, IsPlainOldData)

void ADamageableVentActor::OnDamageableStateChange_BP(bool* isDamageable)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.DamageableVentActor.OnDamageableStateChange_BP");

	ADamageableVentActor_OnDamageableStateChange_BP_Params params;
	params.isDamageable = isDamageable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.DamageDealtIndicatorWidget.OnApplicableDamageDealt
// (Event, Protected, BlueprintEvent)
// Parameters:
// float*                         damageDealtAlpha               (Parm, ZeroConstructor, IsPlainOldData)
// float*                         rawDamageDealt                 (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsCritical                     (Parm, ZeroConstructor, IsPlainOldData)

void UDamageDealtIndicatorWidget::OnApplicableDamageDealt(float* damageDealtAlpha, float* rawDamageDealt, bool* IsCritical)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.DamageDealtIndicatorWidget.OnApplicableDamageDealt");

	UDamageDealtIndicatorWidget_OnApplicableDamageDealt_Params params;
	params.damageDealtAlpha = damageDealtAlpha;
	params.rawDamageDealt = rawDamageDealt;
	params.IsCritical = IsCritical;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.DamageTrackerComponent.S_GetTotalCombinedTrackedDamage
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor**                 Actor                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDamageTrackerComponent::STATIC_S_GetTotalCombinedTrackedDamage(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.DamageTrackerComponent.S_GetTotalCombinedTrackedDamage");

	UDamageTrackerComponent_S_GetTotalCombinedTrackedDamage_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.DamageTrackerComponent.S_GetDamageTrackerComponent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor**                 Actor                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageTrackerComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UDamageTrackerComponent* UDamageTrackerComponent::STATIC_S_GetDamageTrackerComponent(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.DamageTrackerComponent.S_GetDamageTrackerComponent");

	UDamageTrackerComponent_S_GetDamageTrackerComponent_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.DamageTrackerComponent.S_GetComponentFromInterface
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor**                 Actor                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageTrackerComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UDamageTrackerComponent* UDamageTrackerComponent::STATIC_S_GetComponentFromInterface(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.DamageTrackerComponent.S_GetComponentFromInterface");

	UDamageTrackerComponent_S_GetComponentFromInterface_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.DamageTrackerComponent.GetTrackedDamageContainer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FTrackedDamage>  ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

TArray<struct FTrackedDamage> UDamageTrackerComponent::GetTrackedDamageContainer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.DamageTrackerComponent.GetTrackedDamageContainer");

	UDamageTrackerComponent_GetTrackedDamageContainer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.GameplayGameState.OnRep_GameplayGameModeState
// (Final, Native, Private)

void AGameplayGameState::OnRep_GameplayGameModeState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.GameplayGameState.OnRep_GameplayGameModeState");

	AGameplayGameState_OnRep_GameplayGameModeState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.MatchGameState.OnRep_StateTimerPaused
// (Final, Native, Private)

void AMatchGameState::OnRep_StateTimerPaused()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MatchGameState.OnRep_StateTimerPaused");

	AMatchGameState_OnRep_StateTimerPaused_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.MatchGameState.OnRep_DesiredRoundState
// (Final, Native, Private)

void AMatchGameState::OnRep_DesiredRoundState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MatchGameState.OnRep_DesiredRoundState");

	AMatchGameState_OnRep_DesiredRoundState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.MatchGameState.OnRep_DesiredMatchState
// (Final, Native, Private)

void AMatchGameState::OnRep_DesiredMatchState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MatchGameState.OnRep_DesiredMatchState");

	AMatchGameState_OnRep_DesiredMatchState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.MatchGameState.NetMulticast_OnPlayerKilled
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
// class APlayerState**           killerPlayer                   (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerState**           killedPlayer                   (Parm, ZeroConstructor, IsPlainOldData)

void AMatchGameState::NetMulticast_OnPlayerKilled(class APlayerState** killerPlayer, class APlayerState** killedPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MatchGameState.NetMulticast_OnPlayerKilled");

	AMatchGameState_NetMulticast_OnPlayerKilled_Params params;
	params.killerPlayer = killerPlayer;
	params.killedPlayer = killedPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.DeathmatchGameState.OnRep_TeamScores
// (Final, Native, Private)

void ADeathmatchGameState::OnRep_TeamScores()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.DeathmatchGameState.OnRep_TeamScores");

	ADeathmatchGameState_OnRep_TeamScores_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.ItemActor.OnRep_Gravcycle
// (Final, Native, Private)

void AItemActor::OnRep_Gravcycle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.ItemActor.OnRep_Gravcycle");

	AItemActor_OnRep_Gravcycle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.DeathmatchPickupItemActor.OnInitializeFriendlyDrop
// (Event, Public, BlueprintEvent)

void ADeathmatchPickupItemActor::OnInitializeFriendlyDrop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.DeathmatchPickupItemActor.OnInitializeFriendlyDrop");

	ADeathmatchPickupItemActor_OnInitializeFriendlyDrop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.DeathmatchPickupItemActor.OnInitializeEnemyDrop
// (Event, Public, BlueprintEvent)

void ADeathmatchPickupItemActor::OnInitializeEnemyDrop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.DeathmatchPickupItemActor.OnInitializeEnemyDrop");

	ADeathmatchPickupItemActor_OnInitializeEnemyDrop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.GameplayPlayerController.Server_ClientIsNetworkInitialized
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)

void AGameplayPlayerController::Server_ClientIsNetworkInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.GameplayPlayerController.Server_ClientIsNetworkInitialized");

	AGameplayPlayerController_Server_ClientIsNetworkInitialized_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.GameplayPlayerController.GetTeamComponent
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UTeamComponent*          ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UTeamComponent* AGameplayPlayerController::GetTeamComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.GameplayPlayerController.GetTeamComponent");

	AGameplayPlayerController_GetTeamComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.GameplayPlayerController.GetPostProcessComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPostProcessComponent*   ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UPostProcessComponent* AGameplayPlayerController::GetPostProcessComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.GameplayPlayerController.GetPostProcessComponent");

	AGameplayPlayerController_GetPostProcessComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.GameplayPlayerController.GetPlayerSquad
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ASquadActor*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ASquadActor* AGameplayPlayerController::GetPlayerSquad()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.GameplayPlayerController.GetPlayerSquad");

	AGameplayPlayerController_GetPlayerSquad_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.GameplayPlayerController.GetPlayerHUDComponent
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPlayerHUDComponent*     ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UPlayerHUDComponent* AGameplayPlayerController::GetPlayerHUDComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.GameplayPlayerController.GetPlayerHUDComponent");

	AGameplayPlayerController_GetPlayerHUDComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.GameplayPlayerController.GetOffscreenIdentifierManager
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UOffscreenIdentiferManager* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UOffscreenIdentiferManager* AGameplayPlayerController::GetOffscreenIdentifierManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.GameplayPlayerController.GetOffscreenIdentifierManager");

	AGameplayPlayerController_GetOffscreenIdentifierManager_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.GameplayPlayerController.GetCommanderComponent
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UCommanderComponentPlayer* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UCommanderComponentPlayer* AGameplayPlayerController::GetCommanderComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.GameplayPlayerController.GetCommanderComponent");

	AGameplayPlayerController_GetCommanderComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.GameplayPlayerController.Client_ShowHUD
// (Final, Net, NetReliable, Native, Event, Private, NetClient)

void AGameplayPlayerController::Client_ShowHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.GameplayPlayerController.Client_ShowHUD");

	AGameplayPlayerController_Client_ShowHUD_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.GameplayPlayerController.Client_RecordElimination
// (Final, Net, NetReliable, Native, Event, Private, NetClient)
// Parameters:
// struct FReplicatedGameplayEliminationData* elimData                       (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void AGameplayPlayerController::Client_RecordElimination(struct FReplicatedGameplayEliminationData* elimData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.GameplayPlayerController.Client_RecordElimination");

	AGameplayPlayerController_Client_RecordElimination_Params params;
	params.elimData = elimData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.GameplayPlayerController.Client_PlayerUnspawn
// (Final, Net, NetReliable, Native, Event, Private, NetClient)

void AGameplayPlayerController::Client_PlayerUnspawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.GameplayPlayerController.Client_PlayerUnspawn");

	AGameplayPlayerController_Client_PlayerUnspawn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.GameplayPlayerController.Client_PlayerSpawn
// (Final, Net, NetReliable, Native, Event, Private, NetClient)

void AGameplayPlayerController::Client_PlayerSpawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.GameplayPlayerController.Client_PlayerSpawn");

	AGameplayPlayerController_Client_PlayerSpawn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.GameplayPlayerController.Client_PlayerGravcycleDying
// (Final, Net, NetReliable, Native, Event, Private, NetClient)

void AGameplayPlayerController::Client_PlayerGravcycleDying()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.GameplayPlayerController.Client_PlayerGravcycleDying");

	AGameplayPlayerController_Client_PlayerGravcycleDying_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.GameplayPlayerController.Client_PlayerGravcycleDead
// (Final, Net, NetReliable, Native, Event, Private, NetClient)

void AGameplayPlayerController::Client_PlayerGravcycleDead()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.GameplayPlayerController.Client_PlayerGravcycleDead");

	AGameplayPlayerController_Client_PlayerGravcycleDead_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.GameplayPlayerController.Client_PlayerGravcycleAlive
// (Final, Net, NetReliable, Native, Event, Private, NetClient)

void AGameplayPlayerController::Client_PlayerGravcycleAlive()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.GameplayPlayerController.Client_PlayerGravcycleAlive");

	AGameplayPlayerController_Client_PlayerGravcycleAlive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.GameplayPlayerController.Client_HideHUD
// (Final, Net, NetReliable, Native, Event, Private, NetClient)

void AGameplayPlayerController::Client_HideHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.GameplayPlayerController.Client_HideHUD");

	AGameplayPlayerController_Client_HideHUD_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.MatchPlayerController.Server_MATCH_DEBUG_WinRound
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// unsigned char*                 teamIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void AMatchPlayerController::Server_MATCH_DEBUG_WinRound(unsigned char* teamIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MatchPlayerController.Server_MATCH_DEBUG_WinRound");

	AMatchPlayerController_Server_MATCH_DEBUG_WinRound_Params params;
	params.teamIndex = teamIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.MatchPlayerController.Server_MATCH_DEBUG_WinMatch
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// unsigned char*                 teamIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void AMatchPlayerController::Server_MATCH_DEBUG_WinMatch(unsigned char* teamIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MatchPlayerController.Server_MATCH_DEBUG_WinMatch");

	AMatchPlayerController_Server_MATCH_DEBUG_WinMatch_Params params;
	params.teamIndex = teamIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.MatchPlayerController.Server_MATCH_DEBUG_ShutdownServer
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)

void AMatchPlayerController::Server_MATCH_DEBUG_ShutdownServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MatchPlayerController.Server_MATCH_DEBUG_ShutdownServer");

	AMatchPlayerController_Server_MATCH_DEBUG_ShutdownServer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.MatchPlayerController.Server_MATCH_DEBUG_ResetDestructibles
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)

void AMatchPlayerController::Server_MATCH_DEBUG_ResetDestructibles()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MatchPlayerController.Server_MATCH_DEBUG_ResetDestructibles");

	AMatchPlayerController_Server_MATCH_DEBUG_ResetDestructibles_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.MatchPlayerController.Server_MATCH_DEBUG_ForcePostGame
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)

void AMatchPlayerController::Server_MATCH_DEBUG_ForcePostGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MatchPlayerController.Server_MATCH_DEBUG_ForcePostGame");

	AMatchPlayerController_Server_MATCH_DEBUG_ForcePostGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.MatchPlayerController.Server_MATCH_DEBUG_ForcePlayTimeTo
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// uint32_t*                      newStateTime                   (Parm, ZeroConstructor, IsPlainOldData)

void AMatchPlayerController::Server_MATCH_DEBUG_ForcePlayTimeTo(uint32_t* newStateTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MatchPlayerController.Server_MATCH_DEBUG_ForcePlayTimeTo");

	AMatchPlayerController_Server_MATCH_DEBUG_ForcePlayTimeTo_Params params;
	params.newStateTime = newStateTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.MatchPlayerController.Server_MATCH_DEBUG_FinishRound
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)

void AMatchPlayerController::Server_MATCH_DEBUG_FinishRound()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MatchPlayerController.Server_MATCH_DEBUG_FinishRound");

	AMatchPlayerController_Server_MATCH_DEBUG_FinishRound_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.MatchPlayerController.Server_MATCH_DEBUG_FailFindingPlayers
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)

void AMatchPlayerController::Server_MATCH_DEBUG_FailFindingPlayers()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MatchPlayerController.Server_MATCH_DEBUG_FailFindingPlayers");

	AMatchPlayerController_Server_MATCH_DEBUG_FailFindingPlayers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.MatchPlayerController.Server_MATCH_DEBUG_DrawRound
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)

void AMatchPlayerController::Server_MATCH_DEBUG_DrawRound()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MatchPlayerController.Server_MATCH_DEBUG_DrawRound");

	AMatchPlayerController_Server_MATCH_DEBUG_DrawRound_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.MatchPlayerController.Server_MATCH_DEBUG_DrawMatch
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)

void AMatchPlayerController::Server_MATCH_DEBUG_DrawMatch()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MatchPlayerController.Server_MATCH_DEBUG_DrawMatch");

	AMatchPlayerController_Server_MATCH_DEBUG_DrawMatch_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.MatchPlayerController.OnRep_RoundEndCondition
// (Final, Native, Private)

void AMatchPlayerController::OnRep_RoundEndCondition()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MatchPlayerController.OnRep_RoundEndCondition");

	AMatchPlayerController_OnRep_RoundEndCondition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.MatchPlayerController.OnRep_MatchEndCondition
// (Final, Native, Private)

void AMatchPlayerController::OnRep_MatchEndCondition()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MatchPlayerController.OnRep_MatchEndCondition");

	AMatchPlayerController_OnRep_MatchEndCondition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.MatchPlayerController.MEDALS_DEBUG_AwardMedal
// (Final, Exec, Native, Private)
// Parameters:
// struct FString*                medalTag                       (Parm, ZeroConstructor)
// int*                           Count                          (Parm, ZeroConstructor, IsPlainOldData)

void AMatchPlayerController::MEDALS_DEBUG_AwardMedal(struct FString* medalTag, int* Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MatchPlayerController.MEDALS_DEBUG_AwardMedal");

	AMatchPlayerController_MEDALS_DEBUG_AwardMedal_Params params;
	params.medalTag = medalTag;
	params.Count = Count;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.MatchPlayerController.MATCH_DEBUG_WinRound
// (Final, Exec, Native, Private)
// Parameters:
// unsigned char*                 teamIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void AMatchPlayerController::MATCH_DEBUG_WinRound(unsigned char* teamIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MatchPlayerController.MATCH_DEBUG_WinRound");

	AMatchPlayerController_MATCH_DEBUG_WinRound_Params params;
	params.teamIndex = teamIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.MatchPlayerController.MATCH_DEBUG_WinMatch
// (Final, Exec, Native, Private)
// Parameters:
// unsigned char*                 teamIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void AMatchPlayerController::MATCH_DEBUG_WinMatch(unsigned char* teamIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MatchPlayerController.MATCH_DEBUG_WinMatch");

	AMatchPlayerController_MATCH_DEBUG_WinMatch_Params params;
	params.teamIndex = teamIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.MatchPlayerController.MATCH_DEBUG_ShutdownServer
// (Final, Exec, Native, Private)

void AMatchPlayerController::MATCH_DEBUG_ShutdownServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MatchPlayerController.MATCH_DEBUG_ShutdownServer");

	AMatchPlayerController_MATCH_DEBUG_ShutdownServer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.MatchPlayerController.MATCH_DEBUG_ResetDestructibles
// (Final, Exec, Native, Private)

void AMatchPlayerController::MATCH_DEBUG_ResetDestructibles()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MatchPlayerController.MATCH_DEBUG_ResetDestructibles");

	AMatchPlayerController_MATCH_DEBUG_ResetDestructibles_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.MatchPlayerController.MATCH_DEBUG_ForcePostGame
// (Final, Exec, Native, Private)

void AMatchPlayerController::MATCH_DEBUG_ForcePostGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MatchPlayerController.MATCH_DEBUG_ForcePostGame");

	AMatchPlayerController_MATCH_DEBUG_ForcePostGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.MatchPlayerController.MATCH_DEBUG_ForcePlayTimeTo
// (Final, Exec, Native, Private)
// Parameters:
// uint32_t*                      newPlayTime                    (Parm, ZeroConstructor, IsPlainOldData)

void AMatchPlayerController::MATCH_DEBUG_ForcePlayTimeTo(uint32_t* newPlayTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MatchPlayerController.MATCH_DEBUG_ForcePlayTimeTo");

	AMatchPlayerController_MATCH_DEBUG_ForcePlayTimeTo_Params params;
	params.newPlayTime = newPlayTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.MatchPlayerController.MATCH_DEBUG_FinishRound
// (Final, Exec, Native, Private)

void AMatchPlayerController::MATCH_DEBUG_FinishRound()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MatchPlayerController.MATCH_DEBUG_FinishRound");

	AMatchPlayerController_MATCH_DEBUG_FinishRound_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.MatchPlayerController.MATCH_DEBUG_FailFindingPlayers
// (Final, Exec, Native, Private)

void AMatchPlayerController::MATCH_DEBUG_FailFindingPlayers()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MatchPlayerController.MATCH_DEBUG_FailFindingPlayers");

	AMatchPlayerController_MATCH_DEBUG_FailFindingPlayers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.MatchPlayerController.MATCH_DEBUG_DrawRound
// (Final, Exec, Native, Private)

void AMatchPlayerController::MATCH_DEBUG_DrawRound()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MatchPlayerController.MATCH_DEBUG_DrawRound");

	AMatchPlayerController_MATCH_DEBUG_DrawRound_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.MatchPlayerController.MATCH_DEBUG_DrawMatch
// (Final, Exec, Native, Private)

void AMatchPlayerController::MATCH_DEBUG_DrawMatch()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MatchPlayerController.MATCH_DEBUG_DrawMatch");

	AMatchPlayerController_MATCH_DEBUG_DrawMatch_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.MatchPlayerController.Client_TimeAdded
// (Final, Net, NetReliable, Native, Event, Private, NetClient)
// Parameters:
// float*                         timeAddedInSeconds             (Parm, ZeroConstructor, IsPlainOldData)

void AMatchPlayerController::Client_TimeAdded(float* timeAddedInSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MatchPlayerController.Client_TimeAdded");

	AMatchPlayerController_Client_TimeAdded_Params params;
	params.timeAddedInSeconds = timeAddedInSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.MatchPlayerController.Client_SetRespawnTimeLeft
// (Final, Net, NetReliable, Native, Event, Private, NetClient)
// Parameters:
// float*                         respawnTime                    (Parm, ZeroConstructor, IsPlainOldData)

void AMatchPlayerController::Client_SetRespawnTimeLeft(float* respawnTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MatchPlayerController.Client_SetRespawnTimeLeft");

	AMatchPlayerController_Client_SetRespawnTimeLeft_Params params;
	params.respawnTime = respawnTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.MatchPlayerController.Client_SetRemainingMatchStateTime
// (Final, Net, NetReliable, Native, Event, Private, NetClient)
// Parameters:
// float*                         Time                           (Parm, ZeroConstructor, IsPlainOldData)
// EeMatchGameModeState*          matchState                     (Parm, ZeroConstructor, IsPlainOldData)
// EeMatchRoundState*             roundState                     (Parm, ZeroConstructor, IsPlainOldData)

void AMatchPlayerController::Client_SetRemainingMatchStateTime(float* Time, EeMatchGameModeState* matchState, EeMatchRoundState* roundState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MatchPlayerController.Client_SetRemainingMatchStateTime");

	AMatchPlayerController_Client_SetRemainingMatchStateTime_Params params;
	params.Time = Time;
	params.matchState = matchState;
	params.roundState = roundState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.MatchPlayerController.Client_SetForceRespawnTimeLeft
// (Final, Net, NetReliable, Native, Event, Private, NetClient)
// Parameters:
// float*                         forceRespawnTime               (Parm, ZeroConstructor, IsPlainOldData)

void AMatchPlayerController::Client_SetForceRespawnTimeLeft(float* forceRespawnTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MatchPlayerController.Client_SetForceRespawnTimeLeft");

	AMatchPlayerController_Client_SetForceRespawnTimeLeft_Params params;
	params.forceRespawnTime = forceRespawnTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.MatchPlayerController.Client_NewRoundStarted
// (Final, Net, NetReliable, Native, Event, Private, NetClient)

void AMatchPlayerController::Client_NewRoundStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MatchPlayerController.Client_NewRoundStarted");

	AMatchPlayerController_Client_NewRoundStarted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.MatchPlayerController.Client_LeaveServerAndReturnToMenus
// (Final, Net, NetReliable, Native, Event, Private, NetClient)

void AMatchPlayerController::Client_LeaveServerAndReturnToMenus()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MatchPlayerController.Client_LeaveServerAndReturnToMenus");

	AMatchPlayerController_Client_LeaveServerAndReturnToMenus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.GameplayPlayerState.OnRep_Squad
// (Final, Native, Private)

void AGameplayPlayerState::OnRep_Squad()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.GameplayPlayerState.OnRep_Squad");

	AGameplayPlayerState_OnRep_Squad_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.MatchPlayerState.Server_SetCrewIndex
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// unsigned char*                 Index                          (Parm, ZeroConstructor, IsPlainOldData)

void AMatchPlayerState::Server_SetCrewIndex(unsigned char* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MatchPlayerState.Server_SetCrewIndex");

	AMatchPlayerState_Server_SetCrewIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.MatchPlayerState.Server_ClearCrewIndex
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)

void AMatchPlayerState::Server_ClearCrewIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MatchPlayerState.Server_ClearCrewIndex");

	AMatchPlayerState_Server_ClearCrewIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.DebugSpectatorPawn.Server_SpectateNextPlayer
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)

void ADebugSpectatorPawn::Server_SpectateNextPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.DebugSpectatorPawn.Server_SpectateNextPlayer");

	ADebugSpectatorPawn_Server_SpectateNextPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.DestructibleVehicleActor.OnRep_UpdateBrokenConstraints
// (Final, Native, Private)

void ADestructibleVehicleActor::OnRep_UpdateBrokenConstraints()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.DestructibleVehicleActor.OnRep_UpdateBrokenConstraints");

	ADestructibleVehicleActor_OnRep_UpdateBrokenConstraints_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.DestructionPartitionComponent.OnRep_DamageLevelIndex
// (Final, Native, Private)

void UDestructionPartitionComponent::OnRep_DamageLevelIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.DestructionPartitionComponent.OnRep_DamageLevelIndex");

	UDestructionPartitionComponent_OnRep_DamageLevelIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.DestructionPartitionComponent.NetMulticast_RestoreToInitialState
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)

void UDestructionPartitionComponent::NetMulticast_RestoreToInitialState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.DestructionPartitionComponent.NetMulticast_RestoreToInitialState");

	UDestructionPartitionComponent_NetMulticast_RestoreToInitialState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.DestructionPartitionComponent.NetMulticast_RestoreToIndex
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
// int16_t*                       Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UDestructionPartitionComponent::NetMulticast_RestoreToIndex(int16_t* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.DestructionPartitionComponent.NetMulticast_RestoreToIndex");

	UDestructionPartitionComponent_NetMulticast_RestoreToIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.DroneActor.OnRep_TeamComponent
// (Final, Native, Protected)

void ADroneActor::OnRep_TeamComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.DroneActor.OnRep_TeamComponent");

	ADroneActor_OnRep_TeamComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.DroneActor.OnRep_ReplicatedBasedMovement
// (Native, Public)

void ADroneActor::OnRep_ReplicatedBasedMovement()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.DroneActor.OnRep_ReplicatedBasedMovement");

	ADroneActor_OnRep_ReplicatedBasedMovement_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.DroneActor.K2_UpdateCustomMovement
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ADroneActor::K2_UpdateCustomMovement(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.DroneActor.K2_UpdateCustomMovement");

	ADroneActor_K2_UpdateCustomMovement_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.DroneActor.GetMortalityComponent
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMortalityComponent*     ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UMortalityComponent* ADroneActor::GetMortalityComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.DroneActor.GetMortalityComponent");

	ADroneActor_GetMortalityComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.DroneActor.GetBoostComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UDroneBoostComponent*    ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UDroneBoostComponent* ADroneActor::GetBoostComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.DroneActor.GetBoostComponent");

	ADroneActor_GetBoostComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.DroneActor.GetBaseTranslationOffset
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ADroneActor::GetBaseTranslationOffset()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.DroneActor.GetBaseTranslationOffset");

	ADroneActor_GetBaseTranslationOffset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.DroneActor.GetBaseRotationOffsetRotator
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FRotator ADroneActor::GetBaseRotationOffsetRotator()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.DroneActor.GetBaseRotationOffsetRotator");

	ADroneActor_GetBaseRotationOffsetRotator_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.DroneBoostComponent.OnRep_ActiveBoostCount
// (Final, Native, Protected)

void UDroneBoostComponent::OnRep_ActiveBoostCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.DroneBoostComponent.OnRep_ActiveBoostCount");

	UDroneBoostComponent_OnRep_ActiveBoostCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.DroneBoostComponent.GetMaxStoredBoostCount
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UDroneBoostComponent::GetMaxStoredBoostCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.DroneBoostComponent.GetMaxStoredBoostCount");

	UDroneBoostComponent_GetMaxStoredBoostCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.DroneBoostComponent.GetBoostRechargePercent
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDroneBoostComponent::GetBoostRechargePercent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.DroneBoostComponent.GetBoostRechargePercent");

	UDroneBoostComponent_GetBoostRechargePercent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.SkeletalDamageComponent.OnHit
// (Final, Native, Private, HasOutParms, HasDefaults)
// Parameters:
// class UPrimitiveComponent**    HitComp                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector*                NormalImpulse                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             Hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void USkeletalDamageComponent::OnHit(class UPrimitiveComponent** HitComp, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, struct FVector* NormalImpulse, struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.SkeletalDamageComponent.OnHit");

	USkeletalDamageComponent_OnHit_Params params;
	params.HitComp = HitComp;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.DroneMovementComponent.ServerMoveOld
// (Net, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// float*                         OldTimeStamp                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector_NetQuantize10*  OldAccel                       (Parm)
// unsigned char*                 OldMoveFlags                   (Parm, ZeroConstructor, IsPlainOldData)

void UDroneMovementComponent::ServerMoveOld(float* OldTimeStamp, struct FVector_NetQuantize10* OldAccel, unsigned char* OldMoveFlags)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.DroneMovementComponent.ServerMoveOld");

	UDroneMovementComponent_ServerMoveOld_Params params;
	params.OldTimeStamp = OldTimeStamp;
	params.OldAccel = OldAccel;
	params.OldMoveFlags = OldMoveFlags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.DroneMovementComponent.ServerMoveDual
// (Net, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// float*                         TimeStamp0                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector_NetQuantize10*  InAccel0                       (Parm)
// unsigned char*                 PendingFlags                   (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t*                      View0                          (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Timestamp                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector_NetQuantize10*  InAccel                        (Parm)
// struct FVector_NetQuantize100* ClientLoc                      (Parm)
// unsigned char*                 NewFlags                       (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 ClientRoll                     (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t*                      View                           (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    ClientMovementBase             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName*                  ClientBaseBoneName             (Parm, ZeroConstructor, IsPlainOldData)

void UDroneMovementComponent::ServerMoveDual(float* TimeStamp0, struct FVector_NetQuantize10* InAccel0, unsigned char* PendingFlags, uint32_t* View0, float* Timestamp, struct FVector_NetQuantize10* InAccel, struct FVector_NetQuantize100* ClientLoc, unsigned char* NewFlags, unsigned char* ClientRoll, uint32_t* View, class UPrimitiveComponent** ClientMovementBase, struct FName* ClientBaseBoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.DroneMovementComponent.ServerMoveDual");

	UDroneMovementComponent_ServerMoveDual_Params params;
	params.TimeStamp0 = TimeStamp0;
	params.InAccel0 = InAccel0;
	params.PendingFlags = PendingFlags;
	params.View0 = View0;
	params.Timestamp = Timestamp;
	params.InAccel = InAccel;
	params.ClientLoc = ClientLoc;
	params.NewFlags = NewFlags;
	params.ClientRoll = ClientRoll;
	params.View = View;
	params.ClientMovementBase = ClientMovementBase;
	params.ClientBaseBoneName = ClientBaseBoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.DroneMovementComponent.ServerMove
// (Net, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// float*                         Timestamp                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector_NetQuantize10*  InAccel                        (Parm)
// struct FVector_NetQuantize100* ClientLoc                      (Parm)
// unsigned char*                 CompressedMoveFlags            (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 ClientRoll                     (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t*                      View                           (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    ClientMovementBase             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName*                  ClientBaseBoneName             (Parm, ZeroConstructor, IsPlainOldData)

void UDroneMovementComponent::ServerMove(float* Timestamp, struct FVector_NetQuantize10* InAccel, struct FVector_NetQuantize100* ClientLoc, unsigned char* CompressedMoveFlags, unsigned char* ClientRoll, uint32_t* View, class UPrimitiveComponent** ClientMovementBase, struct FName* ClientBaseBoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.DroneMovementComponent.ServerMove");

	UDroneMovementComponent_ServerMove_Params params;
	params.Timestamp = Timestamp;
	params.InAccel = InAccel;
	params.ClientLoc = ClientLoc;
	params.CompressedMoveFlags = CompressedMoveFlags;
	params.ClientRoll = ClientRoll;
	params.View = View;
	params.ClientMovementBase = ClientMovementBase;
	params.ClientBaseBoneName = ClientBaseBoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.DroneMovementComponent.GetDroneOwner
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ADroneActor*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ADroneActor* UDroneMovementComponent::GetDroneOwner()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.DroneMovementComponent.GetDroneOwner");

	UDroneMovementComponent_GetDroneOwner_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.DroneMovementComponent.ClientVeryShortAdjustPosition
// (Net, Native, Event, Public, HasDefaults, NetClient)
// Parameters:
// float*                         Timestamp                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                NewLoc                         (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    NewBase                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName*                  NewBaseBoneName                (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bHasBase                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bBaseRelativePosition          (Parm, ZeroConstructor, IsPlainOldData)

void UDroneMovementComponent::ClientVeryShortAdjustPosition(float* Timestamp, struct FVector* NewLoc, class UPrimitiveComponent** NewBase, struct FName* NewBaseBoneName, bool* bHasBase, bool* bBaseRelativePosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.DroneMovementComponent.ClientVeryShortAdjustPosition");

	UDroneMovementComponent_ClientVeryShortAdjustPosition_Params params;
	params.Timestamp = Timestamp;
	params.NewLoc = NewLoc;
	params.NewBase = NewBase;
	params.NewBaseBoneName = NewBaseBoneName;
	params.bHasBase = bHasBase;
	params.bBaseRelativePosition = bBaseRelativePosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.DroneMovementComponent.ClientAdjustPosition
// (Net, Native, Event, Public, HasDefaults, NetClient)
// Parameters:
// float*                         Timestamp                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                NewLoc                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                NewVel                         (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    NewBase                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName*                  NewBaseBoneName                (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bHasBase                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bBaseRelativePosition          (Parm, ZeroConstructor, IsPlainOldData)

void UDroneMovementComponent::ClientAdjustPosition(float* Timestamp, struct FVector* NewLoc, struct FVector* NewVel, class UPrimitiveComponent** NewBase, struct FName* NewBaseBoneName, bool* bHasBase, bool* bBaseRelativePosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.DroneMovementComponent.ClientAdjustPosition");

	UDroneMovementComponent_ClientAdjustPosition_Params params;
	params.Timestamp = Timestamp;
	params.NewLoc = NewLoc;
	params.NewVel = NewVel;
	params.NewBase = NewBase;
	params.NewBaseBoneName = NewBaseBoneName;
	params.bHasBase = bHasBase;
	params.bBaseRelativePosition = bBaseRelativePosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.DroneMovementComponent.ClientAckGoodMove
// (Net, Native, Event, Public, NetClient)
// Parameters:
// float*                         Timestamp                      (Parm, ZeroConstructor, IsPlainOldData)

void UDroneMovementComponent::ClientAckGoodMove(float* Timestamp)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.DroneMovementComponent.ClientAckGoodMove");

	UDroneMovementComponent_ClientAckGoodMove_Params params;
	params.Timestamp = Timestamp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.DroneMovementComponent.CapsuleTouched
// (Native, Protected, HasOutParms)
// Parameters:
// class UPrimitiveComponent**    OverlappedComp                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 Other                          (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UDroneMovementComponent::CapsuleTouched(class UPrimitiveComponent** OverlappedComp, class AActor** Other, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex, bool* bFromSweep, struct FHitResult* SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.DroneMovementComponent.CapsuleTouched");

	UDroneMovementComponent_CapsuleTouched_Params params;
	params.OverlappedComp = OverlappedComp;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.DroneMovementComponent.AddImpulse
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                Impulse                        (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bVelocityChange                (Parm, ZeroConstructor, IsPlainOldData)

void UDroneMovementComponent::AddImpulse(struct FVector* Impulse, bool* bVelocityChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.DroneMovementComponent.AddImpulse");

	UDroneMovementComponent_AddImpulse_Params params;
	params.Impulse = Impulse;
	params.bVelocityChange = bVelocityChange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.DroneMovementComponent.AddForce
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                Force                          (Parm, ZeroConstructor, IsPlainOldData)

void UDroneMovementComponent::AddForce(struct FVector* Force)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.DroneMovementComponent.AddForce");

	UDroneMovementComponent_AddForce_Params params;
	params.Force = Force;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.EULAMenu.OnAccept
// (Final, Native, Protected)

void UEULAMenu::OnAccept()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.EULAMenu.OnAccept");

	UEULAMenu_OnAccept_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.MissionGameMode.SaveMission
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FString*                saveGameName                   (Parm, ZeroConstructor)

void AMissionGameMode::STATIC_SaveMission(class UObject** WorldContextObject, struct FString* saveGameName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MissionGameMode.SaveMission");

	AMissionGameMode_SaveMission_Params params;
	params.WorldContextObject = WorldContextObject;
	params.saveGameName = saveGameName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.MissionGameMode.MissionRestart
// (Final, Exec, Native, Public, BlueprintCallable)

void AMissionGameMode::MissionRestart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MissionGameMode.MissionRestart");

	AMissionGameMode_MissionRestart_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.MissionGameMode.MissionQuit
// (Final, Exec, Native, Public, BlueprintCallable)

void AMissionGameMode::MissionQuit()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MissionGameMode.MissionQuit");

	AMissionGameMode_MissionQuit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.MissionGameMode.MissionPass
// (Exec, Native, Public, BlueprintCallable)

void AMissionGameMode::MissionPass()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MissionGameMode.MissionPass");

	AMissionGameMode_MissionPass_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.MissionGameMode.MissionFail
// (Exec, Native, Public, BlueprintCallable)

void AMissionGameMode::MissionFail()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MissionGameMode.MissionFail");

	AMissionGameMode_MissionFail_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.MissionGameMode.MissionCheckpoint
// (Final, Exec, Native, Public, BlueprintCallable)

void AMissionGameMode::MissionCheckpoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MissionGameMode.MissionCheckpoint");

	AMissionGameMode_MissionCheckpoint_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.MissionGameMode.LoadMission
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FString*                saveGameName                   (Parm, ZeroConstructor)

void AMissionGameMode::STATIC_LoadMission(class UObject** WorldContextObject, struct FString* saveGameName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MissionGameMode.LoadMission");

	AMissionGameMode_LoadMission_Params params;
	params.WorldContextObject = WorldContextObject;
	params.saveGameName = saveGameName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.MissionGameMode.IgnoreGoingToGarage
// (Native, Public, BlueprintCallable)

void AMissionGameMode::IgnoreGoingToGarage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MissionGameMode.IgnoreGoingToGarage");

	AMissionGameMode_IgnoreGoingToGarage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.MissionGameMode.DeleteMissionSave
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FString*                saveGameName                   (Parm, ZeroConstructor)

void AMissionGameMode::STATIC_DeleteMissionSave(class UObject** WorldContextObject, struct FString* saveGameName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MissionGameMode.DeleteMissionSave");

	AMissionGameMode_DeleteMissionSave_Params params;
	params.WorldContextObject = WorldContextObject;
	params.saveGameName = saveGameName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.MissionGameMode.CHEAT_UnlockChallenges
// (Final, Exec, Native, Public)

void AMissionGameMode::CHEAT_UnlockChallenges()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MissionGameMode.CHEAT_UnlockChallenges");

	AMissionGameMode_CHEAT_UnlockChallenges_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.MissionGameMode.CHEAT_ForceInteractAllHiddenSalvage
// (Final, Exec, Native, Public)

void AMissionGameMode::CHEAT_ForceInteractAllHiddenSalvage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MissionGameMode.CHEAT_ForceInteractAllHiddenSalvage");

	AMissionGameMode_CHEAT_ForceInteractAllHiddenSalvage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.MissionGameMode.CHEAT_CompleteChallenges
// (Final, Exec, Native, Public)

void AMissionGameMode::CHEAT_CompleteChallenges()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MissionGameMode.CHEAT_CompleteChallenges");

	AMissionGameMode_CHEAT_CompleteChallenges_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.ExcursionPlayerController.VoteToRetry
// (Final, Native, Public, BlueprintCallable)

void AExcursionPlayerController::VoteToRetry()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.ExcursionPlayerController.VoteToRetry");

	AExcursionPlayerController_VoteToRetry_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.ExcursionPlayerController.VoteToQuit
// (Final, Native, Public, BlueprintCallable)

void AExcursionPlayerController::VoteToQuit()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.ExcursionPlayerController.VoteToQuit");

	AExcursionPlayerController_VoteToQuit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.ExcursionPlayerController.Server_VoteToRetry
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)

void AExcursionPlayerController::Server_VoteToRetry()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.ExcursionPlayerController.Server_VoteToRetry");

	AExcursionPlayerController_Server_VoteToRetry_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.ExcursionPlayerController.Server_VoteToQuit
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)

void AExcursionPlayerController::Server_VoteToQuit()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.ExcursionPlayerController.Server_VoteToQuit");

	AExcursionPlayerController_Server_VoteToQuit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.ExcursionPlayerController.OnExcursionComplete_Success_BP
// (Event, Public, BlueprintEvent)

void AExcursionPlayerController::OnExcursionComplete_Success_BP()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.ExcursionPlayerController.OnExcursionComplete_Success_BP");

	AExcursionPlayerController_OnExcursionComplete_Success_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.ExcursionPlayerController.OnExcursionComplete_Failed_BP
// (Event, Public, BlueprintEvent)

void AExcursionPlayerController::OnExcursionComplete_Failed_BP()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.ExcursionPlayerController.OnExcursionComplete_Failed_BP");

	AExcursionPlayerController_OnExcursionComplete_Failed_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.ExcursionPlayerController.Client_OnExcursionEnd
// (Final, Net, NetReliable, Native, Event, Private, NetClient)
// Parameters:
// struct FRobogoreReplicatedStats* stats                          (ConstParm, Parm, ReferenceParm)
// bool*                          beatExcursion                  (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FString>*        playerNames                    (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void AExcursionPlayerController::Client_OnExcursionEnd(struct FRobogoreReplicatedStats* stats, bool* beatExcursion, TArray<struct FString>* playerNames)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.ExcursionPlayerController.Client_OnExcursionEnd");

	AExcursionPlayerController_Client_OnExcursionEnd_Params params;
	params.stats = stats;
	params.beatExcursion = beatExcursion;
	params.playerNames = playerNames;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.ExtrasMenu.OnCreditsButton
// (Final, Native, Public)

void UExtrasMenu::OnCreditsButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.ExtrasMenu.OnCreditsButton");

	UExtrasMenu_OnCreditsButton_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.FriendsListWidget.OnStartGetFriendsList
// (Event, Public, BlueprintEvent)

void UFriendsListWidget::OnStartGetFriendsList()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.FriendsListWidget.OnStartGetFriendsList");

	UFriendsListWidget_OnStartGetFriendsList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.FriendsListWidget.OnGetFriendsListSucceeded
// (Event, Public, BlueprintEvent)

void UFriendsListWidget::OnGetFriendsListSucceeded()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.FriendsListWidget.OnGetFriendsListSucceeded");

	UFriendsListWidget_OnGetFriendsListSucceeded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.FriendsListWidget.OnGetFriendsListFailed
// (Event, Public, BlueprintEvent)

void UFriendsListWidget::OnGetFriendsListFailed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.FriendsListWidget.OnGetFriendsListFailed");

	UFriendsListWidget_OnGetFriendsListFailed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.FriendsListWidget.GetFriends
// (Final, Native, Public, BlueprintCallable)

void UFriendsListWidget::GetFriends()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.FriendsListWidget.GetFriends");

	UFriendsListWidget_GetFriends_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.FXActor.OnParticleSystemComplete
// (Final, Native, Private)
// Parameters:
// class UParticleSystemComponent** ParticleSystem                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AFXActor::OnParticleSystemComplete(class UParticleSystemComponent** ParticleSystem)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.FXActor.OnParticleSystemComplete");

	AFXActor_OnParticleSystemComplete_Params params;
	params.ParticleSystem = ParticleSystem;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.GameplayAchievementsComponent.Server_SetIgnoreAchievementProgress
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// TArray<uint16_t>*              achievementIndicesToIgnore     (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void UGameplayAchievementsComponent::Server_SetIgnoreAchievementProgress(TArray<uint16_t>* achievementIndicesToIgnore)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.GameplayAchievementsComponent.Server_SetIgnoreAchievementProgress");

	UGameplayAchievementsComponent_Server_SetIgnoreAchievementProgress_Params params;
	params.achievementIndicesToIgnore = achievementIndicesToIgnore;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.GameplayAchievementsComponent.Server_AddIgnoreAchievementProgress
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// uint16_t*                      achievementIndex               (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayAchievementsComponent::Server_AddIgnoreAchievementProgress(uint16_t* achievementIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.GameplayAchievementsComponent.Server_AddIgnoreAchievementProgress");

	UGameplayAchievementsComponent_Server_AddIgnoreAchievementProgress_Params params;
	params.achievementIndex = achievementIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.GameplayAchievementsComponent.Client_AddAchievementProgress
// (Final, Net, NetReliable, Native, Event, Private, NetClient)
// Parameters:
// uint16_t*                      achievementIndex               (Parm, ZeroConstructor, IsPlainOldData)
// uint16_t*                      statChange                     (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayAchievementsComponent::Client_AddAchievementProgress(uint16_t* achievementIndex, uint16_t* statChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.GameplayAchievementsComponent.Client_AddAchievementProgress");

	UGameplayAchievementsComponent_Client_AddAchievementProgress_Params params;
	params.achievementIndex = achievementIndex;
	params.statChange = statChange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.GameplayMedalsComponent.SERVER_DEBUG_MEDALS_AwardMedal
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// struct FString*                medalTag                       (Parm, ZeroConstructor)
// int*                           Count                          (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayMedalsComponent::SERVER_DEBUG_MEDALS_AwardMedal(struct FString* medalTag, int* Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.GameplayMedalsComponent.SERVER_DEBUG_MEDALS_AwardMedal");

	UGameplayMedalsComponent_SERVER_DEBUG_MEDALS_AwardMedal_Params params;
	params.medalTag = medalTag;
	params.Count = Count;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.GameplayMedalsComponent.Client_MedalEvent
// (Final, Net, NetReliable, Native, Event, Private, NetClient)
// Parameters:
// unsigned char*                 dataSetIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 actionIndexInDataSet           (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayMedalsComponent::Client_MedalEvent(unsigned char* dataSetIndex, unsigned char* actionIndexInDataSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.GameplayMedalsComponent.Client_MedalEvent");

	UGameplayMedalsComponent_Client_MedalEvent_Params params;
	params.dataSetIndex = dataSetIndex;
	params.actionIndexInDataSet = actionIndexInDataSet;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.GameplayMedalWidget.OnMedalCreated
// (Event, Protected, BlueprintEvent)

void UGameplayMedalWidget::OnMedalCreated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.GameplayMedalWidget.OnMedalCreated");

	UGameplayMedalWidget_OnMedalCreated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.GameplayMedalWidget.MedalRemovedFromScreen
// (Final, Native, Private, BlueprintCallable)

void UGameplayMedalWidget::MedalRemovedFromScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.GameplayMedalWidget.MedalRemovedFromScreen");

	UGameplayMedalWidget_MedalRemovedFromScreen_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.GameplayMedalWidget.MedalDisplayComplete
// (Final, Native, Private, BlueprintCallable)

void UGameplayMedalWidget::MedalDisplayComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.GameplayMedalWidget.MedalDisplayComplete");

	UGameplayMedalWidget_MedalDisplayComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.GameplayObjectControllerComponent.SetNextState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EeGameplayObjectState*         NextState                      (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayObjectControllerComponent::SetNextState(EeGameplayObjectState* NextState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.GameplayObjectControllerComponent.SetNextState");

	UGameplayObjectControllerComponent_SetNextState_Params params;
	params.NextState = NextState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.GameplayObjectControllerComponent.SetLockState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EeGameplayObjectState*         lockState                      (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayObjectControllerComponent::SetLockState(EeGameplayObjectState* lockState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.GameplayObjectControllerComponent.SetLockState");

	UGameplayObjectControllerComponent_SetLockState_Params params;
	params.lockState = lockState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.GameplayObjectControllerComponent.GetStartupState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EeGameplayObjectState          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EeGameplayObjectState UGameplayObjectControllerComponent::GetStartupState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.GameplayObjectControllerComponent.GetStartupState");

	UGameplayObjectControllerComponent_GetStartupState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.GameplayObjectControllerComponent.GetCurrentState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EeGameplayObjectState          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EeGameplayObjectState UGameplayObjectControllerComponent::GetCurrentState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.GameplayObjectControllerComponent.GetCurrentState");

	UGameplayObjectControllerComponent_GetCurrentState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.GameplayScoringComponent.Client_ScoreActionEvent
// (Final, Net, NetReliable, Native, Event, Private, NetClient)
// Parameters:
// unsigned char*                 dataSetIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 actionIndexInDataSet           (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t*                      scoreChange                    (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayScoringComponent::Client_ScoreActionEvent(unsigned char* dataSetIndex, unsigned char* actionIndexInDataSet, uint32_t* scoreChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.GameplayScoringComponent.Client_ScoreActionEvent");

	UGameplayScoringComponent_Client_ScoreActionEvent_Params params;
	params.dataSetIndex = dataSetIndex;
	params.actionIndexInDataSet = actionIndexInDataSet;
	params.scoreChange = scoreChange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.GameplayScoringEventWidget.ScoreDisplayComplete
// (Final, Native, Public, BlueprintCallable)

void UGameplayScoringEventWidget::ScoreDisplayComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.GameplayScoringEventWidget.ScoreDisplayComplete");

	UGameplayScoringEventWidget_ScoreDisplayComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.GameplayScoringEventWidget.OnScoreUpdated
// (Event, Public, BlueprintEvent)

void UGameplayScoringEventWidget::OnScoreUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.GameplayScoringEventWidget.OnScoreUpdated");

	UGameplayScoringEventWidget_OnScoreUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.GameplayScoringEventWidget.OnScoreAndNameSet
// (Event, Public, BlueprintEvent)

void UGameplayScoringEventWidget::OnScoreAndNameSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.GameplayScoringEventWidget.OnScoreAndNameSet");

	UGameplayScoringEventWidget_OnScoreAndNameSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.GameplayTagManager.RemoveGameplayTag
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor**                 Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag*           GameplayTag                    (Parm)

void UGameplayTagManager::STATIC_RemoveGameplayTag(class AActor** Actor, struct FGameplayTag* GameplayTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.GameplayTagManager.RemoveGameplayTag");

	UGameplayTagManager_RemoveGameplayTag_Params params;
	params.Actor = Actor;
	params.GameplayTag = GameplayTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.GameplayTagManager.HasMatchingTag
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor**                 Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag*           GameplayTag                    (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayTagManager::STATIC_HasMatchingTag(class AActor** Actor, struct FGameplayTag* GameplayTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.GameplayTagManager.HasMatchingTag");

	UGameplayTagManager_HasMatchingTag_Params params;
	params.Actor = Actor;
	params.GameplayTag = GameplayTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.GameplayTagManager.GetGameplayTagContainerOnActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor**                 Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayTagContainer UGameplayTagManager::STATIC_GetGameplayTagContainerOnActor(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.GameplayTagManager.GetGameplayTagContainerOnActor");

	UGameplayTagManager_GetGameplayTagContainerOnActor_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.GameplayTagManager.AddGameplayTag
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor**                 Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag*           GameplayTag                    (Parm)

void UGameplayTagManager::STATIC_AddGameplayTag(class AActor** Actor, struct FGameplayTag* GameplayTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.GameplayTagManager.AddGameplayTag");

	UGameplayTagManager_AddGameplayTag_Params params;
	params.Actor = Actor;
	params.GameplayTag = GameplayTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.GoalsAndLevelsMenu.OnGoalChange
// (Native, Protected, HasOutParms)
// Parameters:
// struct FGoalData*              GoalData                       (ConstParm, Parm, OutParm, ReferenceParm)

void UGoalsAndLevelsMenu::OnGoalChange(struct FGoalData* GoalData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.GoalsAndLevelsMenu.OnGoalChange");

	UGoalsAndLevelsMenu_OnGoalChange_Params params;
	params.GoalData = GoalData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.GoalsAndLevelsMenu.GoalChange_BP
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGoalData*              GoalData                       (ConstParm, Parm, OutParm, ReferenceParm)

void UGoalsAndLevelsMenu::GoalChange_BP(struct FGoalData* GoalData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.GoalsAndLevelsMenu.GoalChange_BP");

	UGoalsAndLevelsMenu_GoalChange_BP_Params params;
	params.GoalData = GoalData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.GoalWidget.SetGoal
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText*                  Description                    (ConstParm, Parm, OutParm, ReferenceParm)
// float*                         CurrentProgress                (Parm, ZeroConstructor, IsPlainOldData)
// float*                         TotalProgress                  (Parm, ZeroConstructor, IsPlainOldData)

void UGoalWidget::SetGoal(struct FText* Description, float* CurrentProgress, float* TotalProgress)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.GoalWidget.SetGoal");

	UGoalWidget_SetGoal_Params params;
	params.Description = Description;
	params.CurrentProgress = CurrentProgress;
	params.TotalProgress = TotalProgress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.GPTask_SpawningAnimation.AnimInstance_OnMontageEnd
// (Final, Native, Private)
// Parameters:
// class UAnimMontage**           Montage                        (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          interrupted                    (Parm, ZeroConstructor, IsPlainOldData)

void UGPTask_SpawningAnimation::AnimInstance_OnMontageEnd(class UAnimMontage** Montage, bool* interrupted)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.GPTask_SpawningAnimation.AnimInstance_OnMontageEnd");

	UGPTask_SpawningAnimation_AnimInstance_OnMontageEnd_Params params;
	params.Montage = Montage;
	params.interrupted = interrupted;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.GravcycleAbility.ResetAbility
// (Final, Native, Public, BlueprintCallable)

void AGravcycleAbility::ResetAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.GravcycleAbility.ResetAbility");

	AGravcycleAbility_ResetAbility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.GravcycleAbility.GetAbilityHUDClass
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* AGravcycleAbility::GetAbilityHUDClass()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.GravcycleAbility.GetAbilityHUDClass");

	AGravcycleAbility_GetAbilityHUDClass_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.GravcycleActivatedAbility.ServerActivate
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)

void AGravcycleActivatedAbility::ServerActivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.GravcycleActivatedAbility.ServerActivate");

	AGravcycleActivatedAbility_ServerActivate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.GravcycleActivatedAbility.OnAbilityUse_BP
// (Event, Protected, BlueprintEvent)

void AGravcycleActivatedAbility::OnAbilityUse_BP()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.GravcycleActivatedAbility.OnAbilityUse_BP");

	AGravcycleActivatedAbility_OnAbilityUse_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.GravcycleAbilityCloak.OnWeaponUsed
// (Final, Native, Private)

void AGravcycleAbilityCloak::OnWeaponUsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.GravcycleAbilityCloak.OnWeaponUsed");

	AGravcycleAbilityCloak_OnWeaponUsed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.GravcycleAbilityCloak.OnRep_InvisEffect
// (Final, Native, Private)

void AGravcycleAbilityCloak::OnRep_InvisEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.GravcycleAbilityCloak.OnRep_InvisEffect");

	AGravcycleAbilityCloak_OnRep_InvisEffect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.GravcycleAbilityCloak.OnEffectEnd
// (Final, Native, Private)

void AGravcycleAbilityCloak::OnEffectEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.GravcycleAbilityCloak.OnEffectEnd");

	AGravcycleAbilityCloak_OnEffectEnd_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.GravcycleAbilityCloak.IsCloakRecharging
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGravcycleAbilityCloak::IsCloakRecharging()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.GravcycleAbilityCloak.IsCloakRecharging");

	AGravcycleAbilityCloak_IsCloakRecharging_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.GravcycleAbilityCloak.IsCloakInUse
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGravcycleAbilityCloak::IsCloakInUse()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.GravcycleAbilityCloak.IsCloakInUse");

	AGravcycleAbilityCloak_IsCloakInUse_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.GravcycleAbilityCloak.GetCloakPercentage
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AGravcycleAbilityCloak::GetCloakPercentage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.GravcycleAbilityCloak.GetCloakPercentage");

	AGravcycleAbilityCloak_GetCloakPercentage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.GravcycleAbilityComponent.Server_SetDesiredIndex
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// int*                           abilityIndex                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UGravcycleAbilityComponent::Server_SetDesiredIndex(int* abilityIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.GravcycleAbilityComponent.Server_SetDesiredIndex");

	UGravcycleAbilityComponent_Server_SetDesiredIndex_Params params;
	params.abilityIndex = abilityIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.GravcycleAbilityComponent.Server_RequestInfiniteAbilityChange
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// bool*                          infiniteAbilities              (Parm, ZeroConstructor, IsPlainOldData)

void UGravcycleAbilityComponent::Server_RequestInfiniteAbilityChange(bool* infiniteAbilities)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.GravcycleAbilityComponent.Server_RequestInfiniteAbilityChange");

	UGravcycleAbilityComponent_Server_RequestInfiniteAbilityChange_Params params;
	params.infiniteAbilities = infiniteAbilities;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.GravcycleAbilityComponent.OnRep_DesiredIndex
// (Final, Native, Private)

void UGravcycleAbilityComponent::OnRep_DesiredIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.GravcycleAbilityComponent.OnRep_DesiredIndex");

	UGravcycleAbilityComponent_OnRep_DesiredIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.GravcycleAbilityComponent.OnRep_AbilityArray
// (Final, Native, Private)

void UGravcycleAbilityComponent::OnRep_AbilityArray()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.GravcycleAbilityComponent.OnRep_AbilityArray");

	UGravcycleAbilityComponent_OnRep_AbilityArray_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.GravcycleAbilityComponent.GetMaxAbilityCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UGravcycleAbilityComponent::GetMaxAbilityCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.GravcycleAbilityComponent.GetMaxAbilityCount");

	UGravcycleAbilityComponent_GetMaxAbilityCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.GravcycleAbilityComponent.GetActiveAbilityIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UGravcycleAbilityComponent::GetActiveAbilityIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.GravcycleAbilityComponent.GetActiveAbilityIndex");

	UGravcycleAbilityComponent_GetActiveAbilityIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.GravcycleAbilityComponent.GetAbilityAtIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int*                           Index                          (Parm, ZeroConstructor, IsPlainOldData)
// class AGravcycleAbility*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AGravcycleAbility* UGravcycleAbilityComponent::GetAbilityAtIndex(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.GravcycleAbilityComponent.GetAbilityAtIndex");

	UGravcycleAbilityComponent_GetAbilityAtIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.GravcycleAbilityHUDWidget.OnAbilityAssignedBP
// (Event, Protected, BlueprintEvent)

void UGravcycleAbilityHUDWidget::OnAbilityAssignedBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.GravcycleAbilityHUDWidget.OnAbilityAssignedBP");

	UGravcycleAbilityHUDWidget_OnAbilityAssignedBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.GravcycleAbilityHUDWidget.AbilityHUDTickBP
// (Event, Protected, BlueprintEvent)

void UGravcycleAbilityHUDWidget::AbilityHUDTickBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.GravcycleAbilityHUDWidget.AbilityHUDTickBP");

	UGravcycleAbilityHUDWidget_AbilityHUDTickBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.GravcycleActor.Server_SetAimRotation
// (Final, Net, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// float*                         Yaw                            (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Pitch                          (Parm, ZeroConstructor, IsPlainOldData)

void AGravcycleActor::Server_SetAimRotation(float* Yaw, float* Pitch)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.GravcycleActor.Server_SetAimRotation");

	AGravcycleActor_Server_SetAimRotation_Params params;
	params.Yaw = Yaw;
	params.Pitch = Pitch;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.GravcycleActor.Server_CollisionFromClient
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FHitResult*             Hit                            (Parm, IsPlainOldData)
// float*                         impactSpeedRatio               (Parm, ZeroConstructor, IsPlainOldData)

void AGravcycleActor::Server_CollisionFromClient(struct FHitResult* Hit, float* impactSpeedRatio)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.GravcycleActor.Server_CollisionFromClient");

	AGravcycleActor_Server_CollisionFromClient_Params params;
	params.Hit = Hit;
	params.impactSpeedRatio = impactSpeedRatio;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.GravcycleActor.NetMulticast_OnUnpossess
// (Net, NetReliable, Native, Event, Protected, NetClient)

void AGravcycleActor::NetMulticast_OnUnpossess()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.GravcycleActor.NetMulticast_OnUnpossess");

	AGravcycleActor_NetMulticast_OnUnpossess_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.GravcycleActor.GetNavLocator
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* AGravcycleActor::GetNavLocator()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.GravcycleActor.GetNavLocator");

	AGravcycleActor_GetNavLocator_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.GravcycleActor.GetDebugString
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString AGravcycleActor::GetDebugString()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.GravcycleActor.GetDebugString");

	AGravcycleActor_GetDebugString_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.GravcycleActor.GetDamageTrackerComponent
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UDamageTrackerComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UDamageTrackerComponent* AGravcycleActor::GetDamageTrackerComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.GravcycleActor.GetDamageTrackerComponent");

	AGravcycleActor_GetDamageTrackerComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.GravcycleActor.GetAimAssistComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAimAssistComponent*     ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UAimAssistComponent* AGravcycleActor::GetAimAssistComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.GravcycleActor.GetAimAssistComponent");

	AGravcycleActor_GetAimAssistComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.GravcycleActor.GetAbilityLoadout
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UGravcycleAbilityComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UGravcycleAbilityComponent* AGravcycleActor::GetAbilityLoadout()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.GravcycleActor.GetAbilityLoadout");

	AGravcycleActor_GetAbilityLoadout_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.GravcycleActor.Cheat_SetHealthPercentage
// (Final, Exec, Native, Private)
// Parameters:
// float*                         healthPercentage               (Parm, ZeroConstructor, IsPlainOldData)

void AGravcycleActor::Cheat_SetHealthPercentage(float* healthPercentage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.GravcycleActor.Cheat_SetHealthPercentage");

	AGravcycleActor_Cheat_SetHealthPercentage_Params params;
	params.healthPercentage = healthPercentage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.GravcycleActor.Cheat_Die
// (Final, Exec, Native, Private)

void AGravcycleActor::Cheat_Die()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.GravcycleActor.Cheat_Die");

	AGravcycleActor_Cheat_Die_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.GravcycleCommunicationsComponent.Server_PlayEmote
// (Net, NetReliable, Native, Event, Protected, NetServer, HasDefaults, NetValidate)
// Parameters:
// struct FGuid*                  ID                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UGravcycleCommunicationsComponent::Server_PlayEmote(struct FGuid* ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.GravcycleCommunicationsComponent.Server_PlayEmote");

	UGravcycleCommunicationsComponent_Server_PlayEmote_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.GravcycleCommunicationsComponent.NetMulticast_PlayEmote
// (Net, NetReliable, Native, Event, NetMulticast, Protected, HasDefaults)
// Parameters:
// struct FGuid*                  ID                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UGravcycleCommunicationsComponent::NetMulticast_PlayEmote(struct FGuid* ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.GravcycleCommunicationsComponent.NetMulticast_PlayEmote");

	UGravcycleCommunicationsComponent_NetMulticast_PlayEmote_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.PawnHUDComponent.SetRenderToScreen
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          toRender                       (Parm, ZeroConstructor, IsPlainOldData)

void UPawnHUDComponent::SetRenderToScreen(bool* toRender)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PawnHUDComponent.SetRenderToScreen");

	UPawnHUDComponent_SetRenderToScreen_Params params;
	params.toRender = toRender;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.GravcycleHUDWidget.OnGravcycleSet
// (Event, Public, BlueprintEvent)

void UGravcycleHUDWidget::OnGravcycleSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.GravcycleHUDWidget.OnGravcycleSet");

	UGravcycleHUDWidget_OnGravcycleSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.GravcycleMovementComponent.GetEngineLoad
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UGravcycleMovementComponent::GetEngineLoad()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.GravcycleMovementComponent.GetEngineLoad");

	UGravcycleMovementComponent_GetEngineLoad_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.InGameMenuUserWidget.GotoReturnToMainMenu
// (Final, Native, Protected, BlueprintCallable)

void UInGameMenuUserWidget::GotoReturnToMainMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.InGameMenuUserWidget.GotoReturnToMainMenu");

	UInGameMenuUserWidget_GotoReturnToMainMenu_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.InGameMenuUserWidget.GotoResumeGame
// (Final, Native, Protected, BlueprintCallable)

void UInGameMenuUserWidget::GotoResumeGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.InGameMenuUserWidget.GotoResumeGame");

	UInGameMenuUserWidget_GotoResumeGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.InGameMenuUserWidget.GotoCloseApplicationUserWidget
// (Final, Native, Protected, BlueprintCallable)

void UInGameMenuUserWidget::GotoCloseApplicationUserWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.InGameMenuUserWidget.GotoCloseApplicationUserWidget");

	UInGameMenuUserWidget_GotoCloseApplicationUserWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.InteractableObjectComponent.OnRep_IsInteractable
// (Final, Native, Private)

void UInteractableObjectComponent::OnRep_IsInteractable()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.InteractableObjectComponent.OnRep_IsInteractable");

	UInteractableObjectComponent_OnRep_IsInteractable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.InteractableObjectComponent.IsHovered
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInteractableObjectComponent::IsHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.InteractableObjectComponent.IsHovered");

	UInteractableObjectComponent_IsHovered_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.InteractableObjectComponent.IsCalledOut
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInteractableObjectComponent::IsCalledOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.InteractableObjectComponent.IsCalledOut");

	UInteractableObjectComponent_IsCalledOut_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.InteractableObjectComponent.GetOutlineFillConfig
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVisionModeObjectOutlineFillConfig ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVisionModeObjectOutlineFillConfig UInteractableObjectComponent::GetOutlineFillConfig()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.InteractableObjectComponent.GetOutlineFillConfig");

	UInteractableObjectComponent_GetOutlineFillConfig_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.InteractableObjectComponent.GetInteractableType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EeInteractableType             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EeInteractableType UInteractableObjectComponent::GetInteractableType()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.InteractableObjectComponent.GetInteractableType");

	UInteractableObjectComponent_GetInteractableType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.InteractableObjectComponent.GetInteractableState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EeInteractableState            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EeInteractableState UInteractableObjectComponent::GetInteractableState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.InteractableObjectComponent.GetInteractableState");

	UInteractableObjectComponent_GetInteractableState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.InteractablesManagementComponent.Server_RequestScanRemove
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// class UInteractableObjectComponent** Object                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UInteractablesManagementComponent::Server_RequestScanRemove(class UInteractableObjectComponent** Object)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.InteractablesManagementComponent.Server_RequestScanRemove");

	UInteractablesManagementComponent_Server_RequestScanRemove_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.InteractablesManagementComponent.Server_RequestScanComplete
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// class UInteractableObjectComponent** Object                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UInteractablesManagementComponent::Server_RequestScanComplete(class UInteractableObjectComponent** Object)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.InteractablesManagementComponent.Server_RequestScanComplete");

	UInteractablesManagementComponent_Server_RequestScanComplete_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.InteractablesManagementComponent.Client_NotifyOnScanChange
// (Final, Net, NetReliable, Native, Event, Private, NetClient)
// Parameters:
// class UInteractableObjectComponent** Object                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          scanned                        (Parm, ZeroConstructor, IsPlainOldData)

void UInteractablesManagementComponent::Client_NotifyOnScanChange(class UInteractableObjectComponent** Object, bool* scanned)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.InteractablesManagementComponent.Client_NotifyOnScanChange");

	UInteractablesManagementComponent_Client_NotifyOnScanChange_Params params;
	params.Object = Object;
	params.scanned = scanned;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.UnitRespawnComponent.Server_Respawn
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)

void UUnitRespawnComponent::Server_Respawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.UnitRespawnComponent.Server_Respawn");

	UUnitRespawnComponent_Server_Respawn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.UnitRespawnComponent.OnRep_DesiredRespawnState
// (Final, Native, Protected)

void UUnitRespawnComponent::OnRep_DesiredRespawnState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.UnitRespawnComponent.OnRep_DesiredRespawnState");

	UUnitRespawnComponent_OnRep_DesiredRespawnState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.JoinGameSessionRowUserWidget.SetText
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FString*                SessionName                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UJoinGameSessionRowUserWidget::SetText(struct FString* SessionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.JoinGameSessionRowUserWidget.SetText");

	UJoinGameSessionRowUserWidget_SetText_Params params;
	params.SessionName = SessionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.JoinGameSessionRowUserWidget.JoinMultiplayerSession
// (Final, Native, Public, BlueprintCallable)

void UJoinGameSessionRowUserWidget::JoinMultiplayerSession()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.JoinGameSessionRowUserWidget.JoinMultiplayerSession");

	UJoinGameSessionRowUserWidget_JoinMultiplayerSession_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.JoinMultiplayerGameMenu.OnButtonMatchmakePressed
// (Final, Native, Protected)

void UJoinMultiplayerGameMenu::OnButtonMatchmakePressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.JoinMultiplayerGameMenu.OnButtonMatchmakePressed");

	UJoinMultiplayerGameMenu_OnButtonMatchmakePressed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.JoinMultiplayerGameMenu.OnButtonListServersPressed
// (Final, Native, Protected)

void UJoinMultiplayerGameMenu::OnButtonListServersPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.JoinMultiplayerGameMenu.OnButtonListServersPressed");

	UJoinMultiplayerGameMenu_OnButtonListServersPressed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.JoinMultiplayerGameMenu.OnButtonLeaveGameInSessionPressed
// (Final, Native, Protected)

void UJoinMultiplayerGameMenu::OnButtonLeaveGameInSessionPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.JoinMultiplayerGameMenu.OnButtonLeaveGameInSessionPressed");

	UJoinMultiplayerGameMenu_OnButtonLeaveGameInSessionPressed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.JoinMultiplayerGameMenu.OnButtonJoinGameInSessionPressed
// (Final, Native, Protected)

void UJoinMultiplayerGameMenu::OnButtonJoinGameInSessionPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.JoinMultiplayerGameMenu.OnButtonJoinGameInSessionPressed");

	UJoinMultiplayerGameMenu_OnButtonJoinGameInSessionPressed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.JoinMultiplayerGameMenu.OnButtonCancelMatchmakingPressed
// (Final, Native, Protected)

void UJoinMultiplayerGameMenu::OnButtonCancelMatchmakingPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.JoinMultiplayerGameMenu.OnButtonCancelMatchmakingPressed");

	UJoinMultiplayerGameMenu_OnButtonCancelMatchmakingPressed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.JoinMultiplayerGameMenu.OnButtonBackOutOfMenuPressed
// (Final, Native, Protected)

void UJoinMultiplayerGameMenu::OnButtonBackOutOfMenuPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.JoinMultiplayerGameMenu.OnButtonBackOutOfMenuPressed");

	UJoinMultiplayerGameMenu_OnButtonBackOutOfMenuPressed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.LeaderboardEntryWidget.OnSetEntryIsPlayer
// (Event, Public, BlueprintEvent)

void ULeaderboardEntryWidget::OnSetEntryIsPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.LeaderboardEntryWidget.OnSetEntryIsPlayer");

	ULeaderboardEntryWidget_OnSetEntryIsPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.LeaderboardEntryWidget.OnEntryCreated
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           place                          (Parm, ZeroConstructor, IsPlainOldData)

void ULeaderboardEntryWidget::OnEntryCreated(int* place)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.LeaderboardEntryWidget.OnEntryCreated");

	ULeaderboardEntryWidget_OnEntryCreated_Params params;
	params.place = place;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.LeaderboardSampleContainerWidget.SetLeaderboard
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString*                StatName                       (Parm, ZeroConstructor)

void ULeaderboardSampleContainerWidget::SetLeaderboard(struct FString* StatName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.LeaderboardSampleContainerWidget.SetLeaderboard");

	ULeaderboardSampleContainerWidget_SetLeaderboard_Params params;
	params.StatName = StatName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.LeaderboardSampleContainerWidget.OnStartGetLeaderboard
// (Event, Public, BlueprintEvent)

void ULeaderboardSampleContainerWidget::OnStartGetLeaderboard()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.LeaderboardSampleContainerWidget.OnStartGetLeaderboard");

	ULeaderboardSampleContainerWidget_OnStartGetLeaderboard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.LeaderboardSampleContainerWidget.OnFailedGetLeaderboard
// (Event, Public, BlueprintEvent)

void ULeaderboardSampleContainerWidget::OnFailedGetLeaderboard()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.LeaderboardSampleContainerWidget.OnFailedGetLeaderboard");

	ULeaderboardSampleContainerWidget_OnFailedGetLeaderboard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.LeaderboardSampleContainerWidget.OnCompleteGetLeaderboard
// (Event, Public, BlueprintEvent)

void ULeaderboardSampleContainerWidget::OnCompleteGetLeaderboard()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.LeaderboardSampleContainerWidget.OnCompleteGetLeaderboard");

	ULeaderboardSampleContainerWidget_OnCompleteGetLeaderboard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.LevelCinematicActor.LevelSequenceActor_OnStop
// (Final, Native, Private)

void ALevelCinematicActor::LevelSequenceActor_OnStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.LevelCinematicActor.LevelSequenceActor_OnStop");

	ALevelCinematicActor_LevelSequenceActor_OnStop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.LevelSequence_Play.OnStopSequence
// (Final, Native, Private)

void ULevelSequence_Play::OnStopSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.LevelSequence_Play.OnStopSequence");

	ULevelSequence_Play_OnStopSequence_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.MainMenu.OpenTrainingCenter
// (Final, Native, Private)

void UMainMenu::OpenTrainingCenter()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MainMenu.OpenTrainingCenter");

	UMainMenu_OpenTrainingCenter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.MainMenu.OpenMultiplayMenuLevel
// (Final, Native, Private)

void UMainMenu::OpenMultiplayMenuLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MainMenu.OpenMultiplayMenuLevel");

	UMainMenu_OpenMultiplayMenuLevel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.MainMenuPlayerController.ToggleKioskMode
// (Final, Exec, Native, Protected)

void AMainMenuPlayerController::ToggleKioskMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MainMenuPlayerController.ToggleKioskMode");

	AMainMenuPlayerController_ToggleKioskMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.MatchmakingStatusWidget.OnStatusChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// EeMatchmakingStatus*           Status                         (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          isPartyHost                    (Parm, ZeroConstructor, IsPlainOldData)

void UMatchmakingStatusWidget::OnStatusChanged(EeMatchmakingStatus* Status, bool* isPartyHost)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MatchmakingStatusWidget.OnStatusChanged");

	UMatchmakingStatusWidget_OnStatusChanged_Params params;
	params.Status = Status;
	params.isPartyHost = isPartyHost;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.MatchPlayerDeathCamComponent.OnRep_KilledByPlayerData
// (Final, Native, Private)

void UMatchPlayerDeathCamComponent::OnRep_KilledByPlayerData()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MatchPlayerDeathCamComponent.OnRep_KilledByPlayerData");

	UMatchPlayerDeathCamComponent_OnRep_KilledByPlayerData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.MatchPlayerProfile.Server_SetPlayerProfileDataArray
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// TArray<struct FSeralizableCrewCostume>* playerProfileData              (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void UMatchPlayerProfile::Server_SetPlayerProfileDataArray(TArray<struct FSeralizableCrewCostume>* playerProfileData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MatchPlayerProfile.Server_SetPlayerProfileDataArray");

	UMatchPlayerProfile_Server_SetPlayerProfileDataArray_Params params;
	params.playerProfileData = playerProfileData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.MatchPlayerProfile.Server_SetPlayerBanner
// (Net, NetReliable, Native, Event, Public, NetServer, HasDefaults, NetValidate)
// Parameters:
// struct FGuid*                  PlayerBanner                   (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UMatchPlayerProfile::Server_SetPlayerBanner(struct FGuid* PlayerBanner)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MatchPlayerProfile.Server_SetPlayerBanner");

	UMatchPlayerProfile_Server_SetPlayerBanner_Params params;
	params.PlayerBanner = PlayerBanner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.MatchPlayerProfile.Server_SetPlayerBadge
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FPlayerBadge*           PlayerBadge                    (ConstParm, Parm, ReferenceParm)

void UMatchPlayerProfile::Server_SetPlayerBadge(struct FPlayerBadge* PlayerBadge)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MatchPlayerProfile.Server_SetPlayerBadge");

	UMatchPlayerProfile_Server_SetPlayerBadge_Params params;
	params.PlayerBadge = PlayerBadge;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.MatchPlayerProfile.OnRep_PlayerProfile
// (Final, Native, Private)

void UMatchPlayerProfile::OnRep_PlayerProfile()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MatchPlayerProfile.OnRep_PlayerProfile");

	UMatchPlayerProfile_OnRep_PlayerProfile_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.MatchPostGameComponent.Client_SetPostGameStats
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// struct FRobogoreReplicatedStats* postGameStats                  (ConstParm, Parm, ReferenceParm)

void UMatchPostGameComponent::Client_SetPostGameStats(struct FRobogoreReplicatedStats* postGameStats)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MatchPostGameComponent.Client_SetPostGameStats");

	UMatchPostGameComponent_Client_SetPostGameStats_Params params;
	params.postGameStats = postGameStats;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.MatchPostGameComponent.Client_SetPostGameMedals
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// TArray<struct FGameplayMedalReplicationInfo>* postGameMedals                 (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void UMatchPostGameComponent::Client_SetPostGameMedals(TArray<struct FGameplayMedalReplicationInfo>* postGameMedals)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MatchPostGameComponent.Client_SetPostGameMedals");

	UMatchPostGameComponent_Client_SetPostGameMedals_Params params;
	params.postGameMedals = postGameMedals;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.MatchPostGameComponent.Client_SetPostGameChallenges
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// TArray<struct FReplicatedGameplayChallenge>* postGameChallenges             (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void UMatchPostGameComponent::Client_SetPostGameChallenges(TArray<struct FReplicatedGameplayChallenge>* postGameChallenges)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MatchPostGameComponent.Client_SetPostGameChallenges");

	UMatchPostGameComponent_Client_SetPostGameChallenges_Params params;
	params.postGameChallenges = postGameChallenges;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.MatchPreLoadComponent.Server_OnLoadComplete
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)

void UMatchPreLoadComponent::Server_OnLoadComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MatchPreLoadComponent.Server_OnLoadComplete");

	UMatchPreLoadComponent_Server_OnLoadComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.MatchScoreboard.OnPlayerSelected
// (Final, Native, Protected)
// Parameters:
// class UWidget**                Tile                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMatchScoreboard::OnPlayerSelected(class UWidget** Tile)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MatchScoreboard.OnPlayerSelected");

	UMatchScoreboard_OnPlayerSelected_Params params;
	params.Tile = Tile;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.MatchSpawnProtectionGameplayEffect.HandleWeaponFireCallback
// (Final, Native, Private)

void UMatchSpawnProtectionGameplayEffect::HandleWeaponFireCallback()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MatchSpawnProtectionGameplayEffect.HandleWeaponFireCallback");

	UMatchSpawnProtectionGameplayEffect_HandleWeaponFireCallback_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.MatchTimerWidget.OnTimeAdded
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           secondsAdded                   (Parm, ZeroConstructor, IsPlainOldData)

void UMatchTimerWidget::OnTimeAdded(int* secondsAdded)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MatchTimerWidget.OnTimeAdded");

	UMatchTimerWidget_OnTimeAdded_Params params;
	params.secondsAdded = secondsAdded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.MatchVoiceConnectionComponent.Server_RequestLogin
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)

void UMatchVoiceConnectionComponent::Server_RequestLogin()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MatchVoiceConnectionComponent.Server_RequestLogin");

	UMatchVoiceConnectionComponent_Server_RequestLogin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.MatchVoiceConnectionComponent.Server_RequestJoin
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)

void UMatchVoiceConnectionComponent::Server_RequestJoin()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MatchVoiceConnectionComponent.Server_RequestJoin");

	UMatchVoiceConnectionComponent_Server_RequestJoin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.MatchVoiceConnectionComponent.Client_OnSessionParametersSet
// (Final, Net, NetReliable, Native, Event, Private, NetClient)
// Parameters:
// struct FString*                playerName                     (Parm, ZeroConstructor)

void UMatchVoiceConnectionComponent::Client_OnSessionParametersSet(struct FString* playerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MatchVoiceConnectionComponent.Client_OnSessionParametersSet");

	UMatchVoiceConnectionComponent_Client_OnSessionParametersSet_Params params;
	params.playerName = playerName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.MatchVoiceConnectionComponent.Client_LoginVoice
// (Final, Net, NetReliable, Native, Event, Private, NetClient)
// Parameters:
// struct FString*                Token                          (Parm, ZeroConstructor)

void UMatchVoiceConnectionComponent::Client_LoginVoice(struct FString* Token)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MatchVoiceConnectionComponent.Client_LoginVoice");

	UMatchVoiceConnectionComponent_Client_LoginVoice_Params params;
	params.Token = Token;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.MatchVoiceConnectionComponent.Client_JoinSession
// (Final, Net, NetReliable, Native, Event, Private, NetClient)
// Parameters:
// struct FString*                Channel                        (Parm, ZeroConstructor)
// struct FString*                Token                          (Parm, ZeroConstructor)

void UMatchVoiceConnectionComponent::Client_JoinSession(struct FString* Channel, struct FString* Token)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MatchVoiceConnectionComponent.Client_JoinSession");

	UMatchVoiceConnectionComponent_Client_JoinSession_Params params;
	params.Channel = Channel;
	params.Token = Token;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.MeleeComponent.Server_PerformMeleAttack
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// class AActor**                 Target                         (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage**           attackMontage                  (Parm, ZeroConstructor, IsPlainOldData)

void UMeleeComponent::Server_PerformMeleAttack(class AActor** Target, class UAnimMontage** attackMontage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MeleeComponent.Server_PerformMeleAttack");

	UMeleeComponent_Server_PerformMeleAttack_Params params;
	params.Target = Target;
	params.attackMontage = attackMontage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.MeleeComponent.Server_NotifySuccessfulWindow
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)

void UMeleeComponent::Server_NotifySuccessfulWindow()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MeleeComponent.Server_NotifySuccessfulWindow");

	UMeleeComponent_Server_NotifySuccessfulWindow_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.MeleeComponent.NetMulticast_PerformMeleeAttack
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
// class AActor**                 Target                         (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage**           attackMontage                  (Parm, ZeroConstructor, IsPlainOldData)

void UMeleeComponent::NetMulticast_PerformMeleeAttack(class AActor** Target, class UAnimMontage** attackMontage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MeleeComponent.NetMulticast_PerformMeleeAttack");

	UMeleeComponent_NetMulticast_PerformMeleeAttack_Params params;
	params.Target = Target;
	params.attackMontage = attackMontage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.MeleeComponent.Multicast_FailedWindow
// (Final, Net, Native, Event, NetMulticast, Private)
// Parameters:
// unsigned char*                 failedSectionIndex             (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 sectionToJumpToIndex           (Parm, ZeroConstructor, IsPlainOldData)

void UMeleeComponent::Multicast_FailedWindow(unsigned char* failedSectionIndex, unsigned char* sectionToJumpToIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MeleeComponent.Multicast_FailedWindow");

	UMeleeComponent_Multicast_FailedWindow_Params params;
	params.failedSectionIndex = failedSectionIndex;
	params.sectionToJumpToIndex = sectionToJumpToIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.MeleeComponent.Client_SetLerpLocation
// (Final, Net, Native, Event, Private, NetClient)
// Parameters:
// struct FVector_NetQuantize*    Location                       (Parm)
// struct FVector_NetQuantizeNormal* Direction                      (Parm)

void UMeleeComponent::Client_SetLerpLocation(struct FVector_NetQuantize* Location, struct FVector_NetQuantizeNormal* Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MeleeComponent.Client_SetLerpLocation");

	UMeleeComponent_Client_SetLerpLocation_Params params;
	params.Location = Location;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.MeleeWeaponActor.OnHit_Script
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             HitResult                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AMeleeWeaponActor::OnHit_Script(struct FHitResult* HitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MeleeWeaponActor.OnHit_Script");

	AMeleeWeaponActor_OnHit_Script_Params params;
	params.HitResult = HitResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.MenuCampaignWidget.SetDisplayName
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText*                  Text                           (ConstParm, Parm, OutParm, ReferenceParm)

void UMenuCampaignWidget::SetDisplayName(struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MenuCampaignWidget.SetDisplayName");

	UMenuCampaignWidget_SetDisplayName_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.MenuCampaignWidget.OpenMap
// (Final, Native, Public, BlueprintCallable)

void UMenuCampaignWidget::OpenMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MenuCampaignWidget.OpenMap");

	UMenuCampaignWidget_OpenMap_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.MissionBoundaryNotifierHUDWidget.UpdateTimeLeft
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         timeLeft                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          timeCounting                   (Parm, ZeroConstructor, IsPlainOldData)

void UMissionBoundaryNotifierHUDWidget::UpdateTimeLeft(float* timeLeft, bool* timeCounting)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MissionBoundaryNotifierHUDWidget.UpdateTimeLeft");

	UMissionBoundaryNotifierHUDWidget_UpdateTimeLeft_Params params;
	params.timeLeft = timeLeft;
	params.timeCounting = timeCounting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.MissionBoundaryNotifierHUDWidget.StopBoundaryWarning
// (Event, Public, BlueprintEvent)

void UMissionBoundaryNotifierHUDWidget::StopBoundaryWarning()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MissionBoundaryNotifierHUDWidget.StopBoundaryWarning");

	UMissionBoundaryNotifierHUDWidget_StopBoundaryWarning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.MissionBoundaryNotifierHUDWidget.StartDowned
// (Event, Public, BlueprintEvent)

void UMissionBoundaryNotifierHUDWidget::StartDowned()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MissionBoundaryNotifierHUDWidget.StartDowned");

	UMissionBoundaryNotifierHUDWidget_StartDowned_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.MissionBoundaryNotifierHUDWidget.StartBoundaryWarning
// (Event, Public, BlueprintEvent)

void UMissionBoundaryNotifierHUDWidget::StartBoundaryWarning()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MissionBoundaryNotifierHUDWidget.StartBoundaryWarning");

	UMissionBoundaryNotifierHUDWidget_StartBoundaryWarning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.MissionBoundaryNotifierHUDWidget.EndDowned
// (Event, Public, BlueprintEvent)

void UMissionBoundaryNotifierHUDWidget::EndDowned()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MissionBoundaryNotifierHUDWidget.EndDowned");

	UMissionBoundaryNotifierHUDWidget_EndDowned_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.MissionIndicatorActor.SetEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          Enabled                        (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          skipAnimation                  (Parm, ZeroConstructor, IsPlainOldData)

void AMissionIndicatorActor::SetEnabled(bool* Enabled, bool* skipAnimation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MissionIndicatorActor.SetEnabled");

	AMissionIndicatorActor_SetEnabled_Params params;
	params.Enabled = Enabled;
	params.skipAnimation = skipAnimation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.MissionIndicatorOffScreenWidget.OnSetEnabled
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          skipAnimation                  (Parm, ZeroConstructor, IsPlainOldData)

void UMissionIndicatorOffScreenWidget::OnSetEnabled(bool* skipAnimation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MissionIndicatorOffScreenWidget.OnSetEnabled");

	UMissionIndicatorOffScreenWidget_OnSetEnabled_Params params;
	params.skipAnimation = skipAnimation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.MissionIndicatorOffScreenWidget.OnSetDisabled
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          skipAnimation                  (Parm, ZeroConstructor, IsPlainOldData)

void UMissionIndicatorOffScreenWidget::OnSetDisabled(bool* skipAnimation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MissionIndicatorOffScreenWidget.OnSetDisabled");

	UMissionIndicatorOffScreenWidget_OnSetDisabled_Params params;
	params.skipAnimation = skipAnimation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.MissionIndicatorWidget.OnSetEnabled
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          skipAnimation                  (Parm, ZeroConstructor, IsPlainOldData)

void UMissionIndicatorWidget::OnSetEnabled(bool* skipAnimation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MissionIndicatorWidget.OnSetEnabled");

	UMissionIndicatorWidget_OnSetEnabled_Params params;
	params.skipAnimation = skipAnimation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.MissionIndicatorWidget.OnSetDisabled
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          skipAnimation                  (Parm, ZeroConstructor, IsPlainOldData)

void UMissionIndicatorWidget::OnSetDisabled(bool* skipAnimation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MissionIndicatorWidget.OnSetDisabled");

	UMissionIndicatorWidget_OnSetDisabled_Params params;
	params.skipAnimation = skipAnimation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.MissionIndicatorWidgetComponent.SetIsEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          IsEnabled                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          skipAnimation                  (Parm, ZeroConstructor, IsPlainOldData)

void UMissionIndicatorWidgetComponent::SetIsEnabled(bool* IsEnabled, bool* skipAnimation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MissionIndicatorWidgetComponent.SetIsEnabled");

	UMissionIndicatorWidgetComponent_SetIsEnabled_Params params;
	params.IsEnabled = IsEnabled;
	params.skipAnimation = skipAnimation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.MissionRetrievalDropOffActor.ParticleSystemComponent_OnSystemFinished
// (Final, Native, Private)
// Parameters:
// class UParticleSystemComponent** ParticleSystemComponent        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AMissionRetrievalDropOffActor::ParticleSystemComponent_OnSystemFinished(class UParticleSystemComponent** ParticleSystemComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MissionRetrievalDropOffActor.ParticleSystemComponent_OnSystemFinished");

	AMissionRetrievalDropOffActor_ParticleSystemComponent_OnSystemFinished_Params params;
	params.ParticleSystemComponent = ParticleSystemComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.MissionRetrievalDropOffActor.OnWaitingForDrop
// (Event, Protected, BlueprintEvent)

void AMissionRetrievalDropOffActor::OnWaitingForDrop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MissionRetrievalDropOffActor.OnWaitingForDrop");

	AMissionRetrievalDropOffActor_OnWaitingForDrop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.MissionRetrievalDropOffActor.OnLaunch
// (Event, Protected, BlueprintEvent)

void AMissionRetrievalDropOffActor::OnLaunch()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MissionRetrievalDropOffActor.OnLaunch");

	AMissionRetrievalDropOffActor_OnLaunch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.MissionRetrievalDropOffActor.OnIdle
// (Event, Protected, BlueprintEvent)

void AMissionRetrievalDropOffActor::OnIdle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MissionRetrievalDropOffActor.OnIdle");

	AMissionRetrievalDropOffActor_OnIdle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.MissionRetrievalDropOffActor.OnComplete
// (Event, Protected, BlueprintEvent)

void AMissionRetrievalDropOffActor::OnComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MissionRetrievalDropOffActor.OnComplete");

	AMissionRetrievalDropOffActor_OnComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.SmartObjectComponent.PopPulse
// (Final, Native, Public, BlueprintCallable)

void USmartObjectComponent::PopPulse()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.SmartObjectComponent.PopPulse");

	USmartObjectComponent_PopPulse_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.MissionRetrievalWidgetComponent.SetRelationship
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          useRelationship                (Parm, ZeroConstructor, IsPlainOldData)
// EeTeamRelationship*            relationship                   (Parm, ZeroConstructor, IsPlainOldData)

void UMissionRetrievalWidgetComponent::SetRelationship(bool* useRelationship, EeTeamRelationship* relationship)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MissionRetrievalWidgetComponent.SetRelationship");

	UMissionRetrievalWidgetComponent_SetRelationship_Params params;
	params.useRelationship = useRelationship;
	params.relationship = relationship;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.MissionRetrievalWidgetComponent.SetObjectiveName
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FText*                  Name                           (ConstParm, Parm, OutParm, ReferenceParm)

void UMissionRetrievalWidgetComponent::SetObjectiveName(struct FText* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MissionRetrievalWidgetComponent.SetObjectiveName");

	UMissionRetrievalWidgetComponent_SetObjectiveName_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.MissionRetrievalPickupActor.Uninitialize
// (Final, Native, Protected, BlueprintCallable)

void AMissionRetrievalPickupActor::Uninitialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MissionRetrievalPickupActor.Uninitialize");

	AMissionRetrievalPickupActor_Uninitialize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.MissionRetrievalPickupActor.Initialize
// (Final, Native, Protected, BlueprintCallable)

void AMissionRetrievalPickupActor::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MissionRetrievalPickupActor.Initialize");

	AMissionRetrievalPickupActor_Initialize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.MortalityComponent.GetDamageReceiverType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag            ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)

struct FGameplayTag UMortalityComponent::GetDamageReceiverType()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MortalityComponent.GetDamageReceiverType");

	UMortalityComponent_GetDamageReceiverType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.MortalityComponent.GetCurrentShieldPercentage
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMortalityComponent::GetCurrentShieldPercentage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MortalityComponent.GetCurrentShieldPercentage");

	UMortalityComponent_GetCurrentShieldPercentage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.MortalityComponent.GetCurrentHealthPercentage
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMortalityComponent::GetCurrentHealthPercentage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MortalityComponent.GetCurrentHealthPercentage");

	UMortalityComponent_GetCurrentHealthPercentage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.MPCharacterTestGameMode.SpawnEnemy
// (Final, Native, Private)

void AMPCharacterTestGameMode::SpawnEnemy()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MPCharacterTestGameMode.SpawnEnemy");

	AMPCharacterTestGameMode_SpawnEnemy_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.MPCharacterTestGameMode.OnPlayerPawnDestroyed
// (Final, Native, Private)
// Parameters:
// class AActor**                 pawnActor                      (Parm, ZeroConstructor, IsPlainOldData)

void AMPCharacterTestGameMode::OnPlayerPawnDestroyed(class AActor** pawnActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MPCharacterTestGameMode.OnPlayerPawnDestroyed");

	AMPCharacterTestGameMode_OnPlayerPawnDestroyed_Params params;
	params.pawnActor = pawnActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.MPCharacterTestPlayerState.GetKills
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AMPCharacterTestPlayerState::GetKills()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MPCharacterTestPlayerState.GetKills");

	AMPCharacterTestPlayerState_GetKills_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.MPCharacterTestPlayerState.GetDeaths
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AMPCharacterTestPlayerState::GetDeaths()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MPCharacterTestPlayerState.GetDeaths");

	AMPCharacterTestPlayerState_GetDeaths_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.MtxAssetCollection.GetItemsOfCategory
// (Final, Native, Public)
// Parameters:
// EeMtxAssetCategory*            Category                       (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FGuid>           ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

TArray<struct FGuid> UMtxAssetCollection::GetItemsOfCategory(EeMtxAssetCategory* Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MtxAssetCollection.GetItemsOfCategory");

	UMtxAssetCollection_GetItemsOfCategory_Params params;
	params.Category = Category;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.MtxAssetCollection.GetAssetInfo
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FGuid*                  ID                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UMtxAsset*               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMtxAsset* UMtxAssetCollection::GetAssetInfo(struct FGuid* ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MtxAssetCollection.GetAssetInfo");

	UMtxAssetCollection_GetAssetInfo_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.MtxCurrencyMenu.OnPressedMtxTile
// (Final, Native, Protected)
// Parameters:
// class UWidget**                PressedWidget                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMtxCurrencyMenu::OnPressedMtxTile(class UWidget** PressedWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MtxCurrencyMenu.OnPressedMtxTile");

	UMtxCurrencyMenu_OnPressedMtxTile_Params params;
	params.PressedWidget = PressedWidget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.MtxCurrencyMenu.OnHoveredMtxTile_BP
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FMtxCurrencyData*       Data                           (ConstParm, Parm, OutParm, ReferenceParm)

void UMtxCurrencyMenu::OnHoveredMtxTile_BP(struct FMtxCurrencyData* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MtxCurrencyMenu.OnHoveredMtxTile_BP");

	UMtxCurrencyMenu_OnHoveredMtxTile_BP_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.MtxCurrencyMenu.OnHoveredMtxTile
// (Final, Native, Protected)
// Parameters:
// class UWidget**                HoveredWidget                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMtxCurrencyMenu::OnHoveredMtxTile(class UWidget** HoveredWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MtxCurrencyMenu.OnHoveredMtxTile");

	UMtxCurrencyMenu_OnHoveredMtxTile_Params params;
	params.HoveredWidget = HoveredWidget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.MtxPackButton.SetMtxPackButtonBP
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText*                  Name                           (ConstParm, Parm, OutParm, ReferenceParm)
// struct FText*                  currencyAmountText             (ConstParm, Parm, OutParm, ReferenceParm)

void UMtxPackButton::SetMtxPackButtonBP(struct FText* Name, struct FText* currencyAmountText)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MtxPackButton.SetMtxPackButtonBP");

	UMtxPackButton_SetMtxPackButtonBP_Params params;
	params.Name = Name;
	params.currencyAmountText = currencyAmountText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.MtxTile.SetTileMtxData_BP
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FMtxData*               Data                           (ConstParm, Parm, OutParm, ReferenceParm)

void UMtxTile::SetTileMtxData_BP(struct FMtxData* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MtxTile.SetTileMtxData_BP");

	UMtxTile_SetTileMtxData_BP_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.MtxTile.OnOwnChange_BP
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          doesOwn                        (Parm, ZeroConstructor, IsPlainOldData)

void UMtxTile::OnOwnChange_BP(bool* doesOwn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MtxTile.OnOwnChange_BP");

	UMtxTile_OnOwnChange_BP_Params params;
	params.doesOwn = doesOwn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.MtxTile.OnEquipingChange
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          isEquiping                     (Parm, ZeroConstructor, IsPlainOldData)

void UMtxTile::OnEquipingChange(bool* isEquiping)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MtxTile.OnEquipingChange");

	UMtxTile_OnEquipingChange_Params params;
	params.isEquiping = isEquiping;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.MtxTile.OnEquipChange_BP
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          isEquiped                      (Parm, ZeroConstructor, IsPlainOldData)

void UMtxTile::OnEquipChange_BP(bool* isEquiped)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MtxTile.OnEquipChange_BP");

	UMtxTile_OnEquipChange_BP_Params params;
	params.isEquiped = isEquiped;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.MultiplayerLaunchPadMenu.ReturnToMainMenu
// (Final, Native, Protected)

void UMultiplayerLaunchPadMenu::ReturnToMainMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MultiplayerLaunchPadMenu.ReturnToMainMenu");

	UMultiplayerLaunchPadMenu_ReturnToMainMenu_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.MultiplayerMenuPlayerController.ToggleKioskMode
// (Final, Exec, Native, Protected)

void AMultiplayerMenuPlayerController::ToggleKioskMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MultiplayerMenuPlayerController.ToggleKioskMode");

	AMultiplayerMenuPlayerController_ToggleKioskMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.PauseMenu.OnReturnToMainMenuPressed
// (Final, Native, Protected)

void UPauseMenu::OnReturnToMainMenuPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PauseMenu.OnReturnToMainMenuPressed");

	UPauseMenu_OnReturnToMainMenuPressed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.PauseMenu.OnReturnToGaragePressed
// (Final, Native, Protected)

void UPauseMenu::OnReturnToGaragePressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PauseMenu.OnReturnToGaragePressed");

	UPauseMenu_OnReturnToGaragePressed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.PauseMenu.OnRestartMissionPresssed
// (Final, Native, Protected)

void UPauseMenu::OnRestartMissionPresssed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PauseMenu.OnRestartMissionPresssed");

	UPauseMenu_OnRestartMissionPresssed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.PauseMenu.OnRestartCheckpointPressed
// (Final, Native, Protected)

void UPauseMenu::OnRestartCheckpointPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PauseMenu.OnRestartCheckpointPressed");

	UPauseMenu_OnRestartCheckpointPressed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.PauseMenu.OnQuitToDesktopPressed
// (Final, Native, Protected)

void UPauseMenu::OnQuitToDesktopPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PauseMenu.OnQuitToDesktopPressed");

	UPauseMenu_OnQuitToDesktopPressed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.MultiplayerTestMovementComponent.ServerUpdateState
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// float*                         ForwardBackInput               (Parm, ZeroConstructor, IsPlainOldData)
// float*                         leftRigthInput                 (Parm, ZeroConstructor, IsPlainOldData)
// float*                         TurnInput                      (Parm, ZeroConstructor, IsPlainOldData)

void UMultiplayerTestMovementComponent::ServerUpdateState(float* ForwardBackInput, float* leftRigthInput, float* TurnInput)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.MultiplayerTestMovementComponent.ServerUpdateState");

	UMultiplayerTestMovementComponent_ServerUpdateState_Params params;
	params.ForwardBackInput = ForwardBackInput;
	params.leftRigthInput = leftRigthInput;
	params.TurnInput = TurnInput;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.NaniteItemActor.OnNaniteTimeout_BP
// (Event, Public, BlueprintEvent)

void ANaniteItemActor::OnNaniteTimeout_BP()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.NaniteItemActor.OnNaniteTimeout_BP");

	ANaniteItemActor_OnNaniteTimeout_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.NaniteItemActor.OnNaniteDeactivated_BP
// (Event, Public, BlueprintEvent)

void ANaniteItemActor::OnNaniteDeactivated_BP()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.NaniteItemActor.OnNaniteDeactivated_BP");

	ANaniteItemActor_OnNaniteDeactivated_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.NaniteItemActor.OnNaniteCleanup_BP
// (Event, Public, BlueprintEvent)

void ANaniteItemActor::OnNaniteCleanup_BP()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.NaniteItemActor.OnNaniteCleanup_BP");

	ANaniteItemActor_OnNaniteCleanup_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.NaniteItemActor.OnNaniteActivated_BP
// (Event, Public, BlueprintEvent)

void ANaniteItemActor::OnNaniteActivated_BP()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.NaniteItemActor.OnNaniteActivated_BP");

	ANaniteItemActor_OnNaniteActivated_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.NanoSwarmCanisterActor.OnComponentBeginOverlap
// (Final, Native, Private, HasOutParms)
// Parameters:
// struct FV1OverlapInfo*         overlapInfo                    (ConstParm, Parm, OutParm, ReferenceParm)
// class UV1OverlapComponent**    V1OverlapComponent             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ANanoSwarmCanisterActor::OnComponentBeginOverlap(struct FV1OverlapInfo* overlapInfo, class UV1OverlapComponent** V1OverlapComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.NanoSwarmCanisterActor.OnComponentBeginOverlap");

	ANanoSwarmCanisterActor_OnComponentBeginOverlap_Params params;
	params.overlapInfo = overlapInfo;
	params.V1OverlapComponent = V1OverlapComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.ObjectiveUtility.IncrementObjectiveCounter
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject**                WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  objectiveName                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int*                           incrementAmount                (Parm, ZeroConstructor, IsPlainOldData)

void UObjectiveUtility::STATIC_IncrementObjectiveCounter(class UObject** WorldContext, struct FName* objectiveName, int* incrementAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.ObjectiveUtility.IncrementObjectiveCounter");

	UObjectiveUtility_IncrementObjectiveCounter_Params params;
	params.WorldContext = WorldContext;
	params.objectiveName = objectiveName;
	params.incrementAmount = incrementAmount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.ObjectRespawnActor.Client_SpawnDropship
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)

void AObjectRespawnActor::Client_SpawnDropship()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.ObjectRespawnActor.Client_SpawnDropship");

	AObjectRespawnActor_Client_SpawnDropship_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.StatTile.SetTileData_BP
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FStatPair*              Data                           (ConstParm, Parm, OutParm, ReferenceParm)

void UStatTile::SetTileData_BP(struct FStatPair* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.StatTile.SetTileData_BP");

	UStatTile_SetTileData_BP_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.OverallStatsMenu.OnPressedTile
// (Final, Native, Public)
// Parameters:
// class UWidget**                PressedWidget                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UOverallStatsMenu::OnPressedTile(class UWidget** PressedWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.OverallStatsMenu.OnPressedTile");

	UOverallStatsMenu_OnPressedTile_Params params;
	params.PressedWidget = PressedWidget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.OverallStatsMenu.OnHoveredTile
// (Final, Native, Public)
// Parameters:
// class UWidget**                HoveredWidget                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UOverallStatsMenu::OnHoveredTile(class UWidget** HoveredWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.OverallStatsMenu.OnHoveredTile");

	UOverallStatsMenu_OnHoveredTile_Params params;
	params.HoveredWidget = HoveredWidget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.PartyInviteMenu.OnInviteHovered
// (Final, Native, Protected)
// Parameters:
// class UWidget**                Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UPartyInviteMenu::OnInviteHovered(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PartyInviteMenu.OnInviteHovered");

	UPartyInviteMenu_OnInviteHovered_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.PartyInviteMenu.OnInvitedPressed
// (Final, Native, Protected)
// Parameters:
// class UWidget**                Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UPartyInviteMenu::OnInvitedPressed(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PartyInviteMenu.OnInvitedPressed");

	UPartyInviteMenu_OnInvitedPressed_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.PartyManagementMenuWidget.OnPromoteCurrentPlayerToPartyLeader
// (Final, Native, Private)

void UPartyManagementMenuWidget::OnPromoteCurrentPlayerToPartyLeader()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PartyManagementMenuWidget.OnPromoteCurrentPlayerToPartyLeader");

	UPartyManagementMenuWidget_OnPromoteCurrentPlayerToPartyLeader_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.PartyManagementMenuWidget.OnPartyListWidgetPressed
// (Final, Native, Protected)
// Parameters:
// class UWidget**                Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UPartyManagementMenuWidget::OnPartyListWidgetPressed(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PartyManagementMenuWidget.OnPartyListWidgetPressed");

	UPartyManagementMenuWidget_OnPartyListWidgetPressed_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.PartyManagementMenuWidget.OnPartyListWidgetHovered
// (Final, Native, Protected)
// Parameters:
// class UWidget**                Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UPartyManagementMenuWidget::OnPartyListWidgetHovered(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PartyManagementMenuWidget.OnPartyListWidgetHovered");

	UPartyManagementMenuWidget_OnPartyListWidgetHovered_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.PartyManagementMenuWidget.OnMuteCurrentPlayer
// (Final, Native, Private)

void UPartyManagementMenuWidget::OnMuteCurrentPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PartyManagementMenuWidget.OnMuteCurrentPlayer");

	UPartyManagementMenuWidget_OnMuteCurrentPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.PartyManagementMenuWidget.OnLeaveParty
// (Final, Native, Private)

void UPartyManagementMenuWidget::OnLeaveParty()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PartyManagementMenuWidget.OnLeaveParty");

	UPartyManagementMenuWidget_OnLeaveParty_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.PartyManagementMenuWidget.OnKickCurrentPlayerFromParty
// (Final, Native, Private)

void UPartyManagementMenuWidget::OnKickCurrentPlayerFromParty()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PartyManagementMenuWidget.OnKickCurrentPlayerFromParty");

	UPartyManagementMenuWidget_OnKickCurrentPlayerFromParty_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.PartyManagementMenuWidget.OnInviteCurrentPlayerToParty
// (Final, Native, Private)

void UPartyManagementMenuWidget::OnInviteCurrentPlayerToParty()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PartyManagementMenuWidget.OnInviteCurrentPlayerToParty");

	UPartyManagementMenuWidget_OnInviteCurrentPlayerToParty_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.PartyManagementMenuWidget.OnFriendsListWidgetPressed
// (Final, Native, Protected)
// Parameters:
// class UWidget**                Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UPartyManagementMenuWidget::OnFriendsListWidgetPressed(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PartyManagementMenuWidget.OnFriendsListWidgetPressed");

	UPartyManagementMenuWidget_OnFriendsListWidgetPressed_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.PartyManagementMenuWidget.OnFriendsListWidgetHovered
// (Final, Native, Protected)
// Parameters:
// class UWidget**                Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UPartyManagementMenuWidget::OnFriendsListWidgetHovered(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PartyManagementMenuWidget.OnFriendsListWidgetHovered");

	UPartyManagementMenuWidget_OnFriendsListWidgetHovered_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.PartyPlayerInspectionWidget.OnPromoteButton
// (Final, Native, Protected)

void UPartyPlayerInspectionWidget::OnPromoteButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PartyPlayerInspectionWidget.OnPromoteButton");

	UPartyPlayerInspectionWidget_OnPromoteButton_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.PartyPlayerInspectionWidget.OnKickButton
// (Final, Native, Protected)

void UPartyPlayerInspectionWidget::OnKickButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PartyPlayerInspectionWidget.OnKickButton");

	UPartyPlayerInspectionWidget_OnKickButton_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.PartyPlayerInspectionWidget.OnInviteButton
// (Final, Native, Protected)

void UPartyPlayerInspectionWidget::OnInviteButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PartyPlayerInspectionWidget.OnInviteButton");

	UPartyPlayerInspectionWidget_OnInviteButton_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.PartyPlayerInspectionWidget.OnGamerCardButton
// (Final, Native, Protected)

void UPartyPlayerInspectionWidget::OnGamerCardButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PartyPlayerInspectionWidget.OnGamerCardButton");

	UPartyPlayerInspectionWidget_OnGamerCardButton_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.PartyToastGenericMessageWidget.DismissMessage_BP
// (Event, Public, BlueprintEvent)

void UPartyToastGenericMessageWidget::DismissMessage_BP()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PartyToastGenericMessageWidget.DismissMessage_BP");

	UPartyToastGenericMessageWidget_DismissMessage_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.PartyToastGenericMessageWidget.DismissMessage
// (Final, Native, Protected)

void UPartyToastGenericMessageWidget::DismissMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PartyToastGenericMessageWidget.DismissMessage");

	UPartyToastGenericMessageWidget_DismissMessage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.PartyToastGenericMessageWidget.AcceptMessage_BP
// (Event, Public, BlueprintEvent)

void UPartyToastGenericMessageWidget::AcceptMessage_BP()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PartyToastGenericMessageWidget.AcceptMessage_BP");

	UPartyToastGenericMessageWidget_AcceptMessage_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.PartyToastGenericMessageWidget.AcceptMessage
// (Final, Native, Protected)

void UPartyToastGenericMessageWidget::AcceptMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PartyToastGenericMessageWidget.AcceptMessage");

	UPartyToastGenericMessageWidget_AcceptMessage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.PayloadActor.SetActive
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          IsActive                       (Parm, ZeroConstructor, IsPlainOldData)

void APayloadActor::SetActive(bool* IsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PayloadActor.SetActive");

	APayloadActor_SetActive_Params params;
	params.IsActive = IsActive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.PayloadActor.NetMulticast_InitialSetActorTransform
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private, HasDefaults)
// Parameters:
// struct FTransform*             Transform                      (ConstParm, Parm, ReferenceParm, IsPlainOldData)

void APayloadActor::NetMulticast_InitialSetActorTransform(struct FTransform* Transform)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PayloadActor.NetMulticast_InitialSetActorTransform");

	APayloadActor_NetMulticast_InitialSetActorTransform_Params params;
	params.Transform = Transform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.PayloadCargoActor.OnRep_TargetWorldPos
// (Final, Native, Private)

void APayloadCargoActor::OnRep_TargetWorldPos()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PayloadCargoActor.OnRep_TargetWorldPos");

	APayloadCargoActor_OnRep_TargetWorldPos_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.PayloadCargoActor.OnRep_IsContested
// (Final, Native, Private)

void APayloadCargoActor::OnRep_IsContested()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PayloadCargoActor.OnRep_IsContested");

	APayloadCargoActor_OnRep_IsContested_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.PayloadCargoIndicatorWidget.StateChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// EePayloadCargoMovementState*   oldState                       (Parm, ZeroConstructor, IsPlainOldData)
// EePayloadCargoMovementState*   NewState                       (Parm, ZeroConstructor, IsPlainOldData)

void UPayloadCargoIndicatorWidget::StateChanged(EePayloadCargoMovementState* oldState, EePayloadCargoMovementState* NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PayloadCargoIndicatorWidget.StateChanged");

	UPayloadCargoIndicatorWidget_StateChanged_Params params;
	params.oldState = oldState;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.PayloadCargoProgressEdgeWidget.OnCargoCompletedEdge
// (Event, Public, BlueprintEvent)

void UPayloadCargoProgressEdgeWidget::OnCargoCompletedEdge()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PayloadCargoProgressEdgeWidget.OnCargoCompletedEdge");

	UPayloadCargoProgressEdgeWidget_OnCargoCompletedEdge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.PayloadCargoProgressEdgeWidget.InitializeTeamState
// (Event, Public, BlueprintEvent)
// Parameters:
// EeTeamRelationship*            relationship                   (Parm, ZeroConstructor, IsPlainOldData)

void UPayloadCargoProgressEdgeWidget::InitializeTeamState(EeTeamRelationship* relationship)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PayloadCargoProgressEdgeWidget.InitializeTeamState");

	UPayloadCargoProgressEdgeWidget_InitializeTeamState_Params params;
	params.relationship = relationship;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.PayloadCargoProgressEdgeWidget.InitializeReachedState
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          hasBeenReached                 (Parm, ZeroConstructor, IsPlainOldData)

void UPayloadCargoProgressEdgeWidget::InitializeReachedState(bool* hasBeenReached)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PayloadCargoProgressEdgeWidget.InitializeReachedState");

	UPayloadCargoProgressEdgeWidget_InitializeReachedState_Params params;
	params.hasBeenReached = hasBeenReached;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.PayloadCargoProgressNodeWidget.OnCargoReachedNode
// (Event, Public, BlueprintEvent)

void UPayloadCargoProgressNodeWidget::OnCargoReachedNode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PayloadCargoProgressNodeWidget.OnCargoReachedNode");

	UPayloadCargoProgressNodeWidget_OnCargoReachedNode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.PayloadCargoProgressNodeWidget.InitializeTeamState
// (Event, Public, BlueprintEvent)
// Parameters:
// EeTeamRelationship*            relationship                   (Parm, ZeroConstructor, IsPlainOldData)

void UPayloadCargoProgressNodeWidget::InitializeTeamState(EeTeamRelationship* relationship)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PayloadCargoProgressNodeWidget.InitializeTeamState");

	UPayloadCargoProgressNodeWidget_InitializeTeamState_Params params;
	params.relationship = relationship;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.PayloadCargoProgressNodeWidget.InitializeReachedState
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          hasBeenReached                 (Parm, ZeroConstructor, IsPlainOldData)

void UPayloadCargoProgressNodeWidget::InitializeReachedState(bool* hasBeenReached)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PayloadCargoProgressNodeWidget.InitializeReachedState");

	UPayloadCargoProgressNodeWidget_InitializeReachedState_Params params;
	params.hasBeenReached = hasBeenReached;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.PayloadCargoProgressWidget.OnPayloadReachedNode
// (Event, Public, BlueprintEvent)

void UPayloadCargoProgressWidget::OnPayloadReachedNode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PayloadCargoProgressWidget.OnPayloadReachedNode");

	UPayloadCargoProgressWidget_OnPayloadReachedNode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.PayloadCargoStateWidget.SetTeamRelationship
// (Event, Public, BlueprintEvent)
// Parameters:
// EeTeamRelationship*            relationship                   (Parm, ZeroConstructor, IsPlainOldData)

void UPayloadCargoStateWidget::SetTeamRelationship(EeTeamRelationship* relationship)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PayloadCargoStateWidget.SetTeamRelationship");

	UPayloadCargoStateWidget_SetTeamRelationship_Params params;
	params.relationship = relationship;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.PayloadCargoStateWidget.OnPayloadStateChange
// (Event, Public, BlueprintEvent)
// Parameters:
// EePayloadCargoMovementState*   MovementState                  (Parm, ZeroConstructor, IsPlainOldData)

void UPayloadCargoStateWidget::OnPayloadStateChange(EePayloadCargoMovementState* MovementState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PayloadCargoStateWidget.OnPayloadStateChange");

	UPayloadCargoStateWidget_OnPayloadStateChange_Params params;
	params.MovementState = MovementState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.PayloadLandingPadActor.GetLandingPadCaptureState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EeLandingPadCaptureState       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EeLandingPadCaptureState APayloadLandingPadActor::GetLandingPadCaptureState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PayloadLandingPadActor.GetLandingPadCaptureState");

	APayloadLandingPadActor_GetLandingPadCaptureState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.PayloadLandingPadIndicatorWidget.LandingPadLost
// (Event, Public, BlueprintEvent)

void UPayloadLandingPadIndicatorWidget::LandingPadLost()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PayloadLandingPadIndicatorWidget.LandingPadLost");

	UPayloadLandingPadIndicatorWidget_LandingPadLost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.PayloadLandingPadIndicatorWidget.LandingPadCaptured
// (Event, Public, BlueprintEvent)
// Parameters:
// EeTeamID*                      Team                           (Parm, ZeroConstructor, IsPlainOldData)
// EeCommanderID*                 Commander                      (Parm, ZeroConstructor, IsPlainOldData)

void UPayloadLandingPadIndicatorWidget::LandingPadCaptured(EeTeamID* Team, EeCommanderID* Commander)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PayloadLandingPadIndicatorWidget.LandingPadCaptured");

	UPayloadLandingPadIndicatorWidget_LandingPadCaptured_Params params;
	params.Team = Team;
	params.Commander = Commander;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.PayloadPlayerController.Client_NotifyPayloadAtWaypoint
// (Final, Net, NetReliable, Native, Event, Private, NetClient)
// Parameters:
// float*                         addedTime                      (Parm, ZeroConstructor, IsPlainOldData)

void APayloadPlayerController::Client_NotifyPayloadAtWaypoint(float* addedTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PayloadPlayerController.Client_NotifyPayloadAtWaypoint");

	APayloadPlayerController_Client_NotifyPayloadAtWaypoint_Params params;
	params.addedTime = addedTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.PersistentPlayerChatLog.Get
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWorld**                 World                          (Parm, ZeroConstructor, IsPlainOldData)
// class UPersistentPlayerChatLog* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UPersistentPlayerChatLog* UPersistentPlayerChatLog::STATIC_Get(class UWorld** World)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PersistentPlayerChatLog.Get");

	UPersistentPlayerChatLog_Get_Params params;
	params.World = World;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.PilotAnimationController.ButtonPress
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// TEnumAsByte<EePilotControllerButton>* Button                         (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          active                         (Parm, ZeroConstructor, IsPlainOldData)

void UPilotAnimationController::ButtonPress(TEnumAsByte<EePilotControllerButton>* Button, bool* active)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PilotAnimationController.ButtonPress");

	UPilotAnimationController_ButtonPress_Params params;
	params.Button = Button;
	params.active = active;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.PlayCampaignUserWidget.OpenLevelByIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UPlayCampaignUserWidget::OpenLevelByIndex(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PlayCampaignUserWidget.OpenLevelByIndex");

	UPlayCampaignUserWidget_OpenLevelByIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.PlayerBadgeTile.OnEquipedChanged_BP
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          isEquiped                      (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerBadgeTile::OnEquipedChanged_BP(bool* isEquiped)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PlayerBadgeTile.OnEquipedChanged_BP");

	UPlayerBadgeTile_OnEquipedChanged_BP_Params params;
	params.isEquiped = isEquiped;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.PlayerBannerTile.SetDataBP
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FBannerTileData*        Data                           (ConstParm, Parm, OutParm, ReferenceParm)

void UPlayerBannerTile::SetDataBP(struct FBannerTileData* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PlayerBannerTile.SetDataBP");

	UPlayerBannerTile_SetDataBP_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.PlayerBannerTile.OnEquipedChangeBP
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          isEquiped                      (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerBannerTile::OnEquipedChangeBP(bool* isEquiped)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PlayerBannerTile.OnEquipedChangeBP");

	UPlayerBannerTile_OnEquipedChangeBP_Params params;
	params.isEquiped = isEquiped;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.PlayerCampaignFailureComponent.ClientStartUnitsDown
// (Final, Net, NetReliable, Native, Event, Private, NetClient)

void UPlayerCampaignFailureComponent::ClientStartUnitsDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PlayerCampaignFailureComponent.ClientStartUnitsDown");

	UPlayerCampaignFailureComponent_ClientStartUnitsDown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.PlayerCampaignFailureComponent.ClientMissionFailure
// (Final, Net, NetReliable, Native, Event, Private, NetClient)

void UPlayerCampaignFailureComponent::ClientMissionFailure()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PlayerCampaignFailureComponent.ClientMissionFailure");

	UPlayerCampaignFailureComponent_ClientMissionFailure_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.PlayerCampaignFailureComponent.ClientEndUnitsDown
// (Final, Net, NetReliable, Native, Event, Private, NetClient)

void UPlayerCampaignFailureComponent::ClientEndUnitsDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PlayerCampaignFailureComponent.ClientEndUnitsDown");

	UPlayerCampaignFailureComponent_ClientEndUnitsDown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.PlayerChallengesHighlightsWidget.Animate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         timeBetweenAnimations          (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerChallengesHighlightsWidget::Animate(float* timeBetweenAnimations)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PlayerChallengesHighlightsWidget.Animate");

	UPlayerChallengesHighlightsWidget_Animate_Params params;
	params.timeBetweenAnimations = timeBetweenAnimations;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.PlayerChatComponent.Server_NewChatMessage
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FText*                  Message                        (ConstParm, Parm, ReferenceParm)
// EeChatMessageType*             MessageType                    (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerChatComponent::Server_NewChatMessage(struct FText* Message, EeChatMessageType* MessageType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PlayerChatComponent.Server_NewChatMessage");

	UPlayerChatComponent_Server_NewChatMessage_Params params;
	params.Message = Message;
	params.MessageType = MessageType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.PlayerChatComponent.Client_NewChatMessage
// (Final, Net, NetReliable, Native, Event, Private, NetClient)
// Parameters:
// struct FText*                  senderName                     (ConstParm, Parm, ReferenceParm)
// struct FText*                  Message                        (ConstParm, Parm, ReferenceParm)
// EeTeamRelationship*            relationship                   (Parm, ZeroConstructor, IsPlainOldData)
// EeChatMessageType*             MessageType                    (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerChatComponent::Client_NewChatMessage(struct FText* senderName, struct FText* Message, EeTeamRelationship* relationship, EeChatMessageType* MessageType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PlayerChatComponent.Client_NewChatMessage");

	UPlayerChatComponent_Client_NewChatMessage_Params params;
	params.senderName = senderName;
	params.Message = Message;
	params.relationship = relationship;
	params.MessageType = MessageType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.PlayerChatEntryWindow.OnTextCommitted
// (Final, Native, Private, HasOutParms)
// Parameters:
// struct FText*                  enteredText                    (ConstParm, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>*      CommitMethod                   (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerChatEntryWindow::OnTextCommitted(struct FText* enteredText, TEnumAsByte<ETextCommit>* CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PlayerChatEntryWindow.OnTextCommitted");

	UPlayerChatEntryWindow_OnTextCommitted_Params params;
	params.enteredText = enteredText;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.PlayerChatEntryWindow.OnTextChanged
// (Final, Native, Private, HasOutParms)
// Parameters:
// struct FText*                  enteredText                    (ConstParm, Parm, OutParm, ReferenceParm)

void UPlayerChatEntryWindow::OnTextChanged(struct FText* enteredText)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PlayerChatEntryWindow.OnTextChanged");

	UPlayerChatEntryWindow_OnTextChanged_Params params;
	params.enteredText = enteredText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.PlayerDamageTakenWidget.OnTookDamageFromSource_BP
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           SourceIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerDamageTakenWidget::OnTookDamageFromSource_BP(int* SourceIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PlayerDamageTakenWidget.OnTookDamageFromSource_BP");

	UPlayerDamageTakenWidget_OnTookDamageFromSource_BP_Params params;
	params.SourceIndex = SourceIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.PlayerDebugComponent.Server_StopSpectating
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)

void UPlayerDebugComponent::Server_StopSpectating()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PlayerDebugComponent.Server_StopSpectating");

	UPlayerDebugComponent_Server_StopSpectating_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.PlayerDebugComponent.Server_StopGroundSpectating
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)

void UPlayerDebugComponent::Server_StopGroundSpectating()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PlayerDebugComponent.Server_StopGroundSpectating");

	UPlayerDebugComponent_Server_StopGroundSpectating_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.PlayerDebugComponent.Server_StartSpectating
// (Final, Net, NetReliable, Native, Event, Private, NetServer, HasDefaults, NetValidate)
// Parameters:
// struct FTransform*             SpawnTransform                 (ConstParm, Parm, ReferenceParm, IsPlainOldData)

void UPlayerDebugComponent::Server_StartSpectating(struct FTransform* SpawnTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PlayerDebugComponent.Server_StartSpectating");

	UPlayerDebugComponent_Server_StartSpectating_Params params;
	params.SpawnTransform = SpawnTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.PlayerDebugComponent.Server_StartGroundSpectating
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)

void UPlayerDebugComponent::Server_StartGroundSpectating()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PlayerDebugComponent.Server_StartGroundSpectating");

	UPlayerDebugComponent_Server_StartGroundSpectating_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.ParticleEmoteInstance.OnParticleSystemFinished
// (Final, Native, Private)
// Parameters:
// class UParticleSystemComponent** sys                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UParticleEmoteInstance::OnParticleSystemFinished(class UParticleSystemComponent** sys)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.ParticleEmoteInstance.OnParticleSystemFinished");

	UParticleEmoteInstance_OnParticleSystemFinished_Params params;
	params.sys = sys;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.PlayerEmote.Play
// (Native, Public, BlueprintCallable)
// Parameters:
// class AActor**                 Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          isPreview                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          PlaySound                      (Parm, ZeroConstructor, IsPlainOldData)
// class UEmoteInstance*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UEmoteInstance* UPlayerEmote::Play(class AActor** Actor, bool* isPreview, bool* PlaySound)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PlayerEmote.Play");

	UPlayerEmote_Play_Params params;
	params.Actor = Actor;
	params.isPreview = isPreview;
	params.PlaySound = PlaySound;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.PlayerHealthWidget.GetShieldPercentage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UPlayerHealthWidget::GetShieldPercentage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PlayerHealthWidget.GetShieldPercentage");

	UPlayerHealthWidget_GetShieldPercentage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.PlayerHealthWidget.GetHealthPercentage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UPlayerHealthWidget::GetHealthPercentage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PlayerHealthWidget.GetHealthPercentage");

	UPlayerHealthWidget_GetHealthPercentage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.PlayerHubPlayerController.CreateAndActivateAfterMissionMenu
// (Final, Exec, Native, Private)
// Parameters:
// bool*                          Force                          (Parm, ZeroConstructor, IsPlainOldData)

void APlayerHubPlayerController::CreateAndActivateAfterMissionMenu(bool* Force)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PlayerHubPlayerController.CreateAndActivateAfterMissionMenu");

	APlayerHubPlayerController_CreateAndActivateAfterMissionMenu_Params params;
	params.Force = Force;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.PlayerHUDUserWidget.GetOwnerHeading
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UPlayerHUDUserWidget::GetOwnerHeading()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PlayerHUDUserWidget.GetOwnerHeading");

	UPlayerHUDUserWidget_GetOwnerHeading_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.PlayerHUDUserWidget.GetGravcycleActor
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// class AGravcycleActor*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AGravcycleActor* UPlayerHUDUserWidget::GetGravcycleActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PlayerHUDUserWidget.GetGravcycleActor");

	UPlayerHUDUserWidget_GetGravcycleActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.PlayerInfoWidget.OnShowGamerCard
// (Final, Native, Protected)

void UPlayerInfoWidget::OnShowGamerCard()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PlayerInfoWidget.OnShowGamerCard");

	UPlayerInfoWidget_OnShowGamerCard_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.PlayerInteractableDecorator.GetVisionModeOutlineColor
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UPlayerInteractableDecorator::GetVisionModeOutlineColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PlayerInteractableDecorator.GetVisionModeOutlineColor");

	UPlayerInteractableDecorator_GetVisionModeOutlineColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.PlayerInteractableDecorator.GetVisionModeFillColor
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UPlayerInteractableDecorator::GetVisionModeFillColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PlayerInteractableDecorator.GetVisionModeFillColor");

	UPlayerInteractableDecorator_GetVisionModeFillColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.PlayerInteractableDecorator.GetSnapReticleColor
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UPlayerInteractableDecorator::GetSnapReticleColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PlayerInteractableDecorator.GetSnapReticleColor");

	UPlayerInteractableDecorator_GetSnapReticleColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.PlayerInteractableDecorator.GetInteractableType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EeInteractableType             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EeInteractableType UPlayerInteractableDecorator::GetInteractableType()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PlayerInteractableDecorator.GetInteractableType");

	UPlayerInteractableDecorator_GetInteractableType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.PlayerInteractableDecorator.GetCommandPulseColor
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UPlayerInteractableDecorator::GetCommandPulseColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PlayerInteractableDecorator.GetCommandPulseColor");

	UPlayerInteractableDecorator_GetCommandPulseColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.PlayerInteractableOverlayWidget.OnPlayerCannotInteract
// (Event, Public, BlueprintEvent)

void UPlayerInteractableOverlayWidget::OnPlayerCannotInteract()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PlayerInteractableOverlayWidget.OnPlayerCannotInteract");

	UPlayerInteractableOverlayWidget_OnPlayerCannotInteract_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.PlayerInteractableOverlayWidget.OnPlayerCanInteract
// (Event, Public, BlueprintEvent)

void UPlayerInteractableOverlayWidget::OnPlayerCanInteract()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PlayerInteractableOverlayWidget.OnPlayerCanInteract");

	UPlayerInteractableOverlayWidget_OnPlayerCanInteract_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.PlayerMatchStatWidget.OnStatUpdate
// (Final, Native, Private)
// Parameters:
// int*                           NewValue                       (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerMatchStatWidget::OnStatUpdate(int* NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PlayerMatchStatWidget.OnStatUpdate");

	UPlayerMatchStatWidget_OnStatUpdate_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.PlayerOnlineStatsScreen.OnStatsGetSuccess
// (Event, Public, BlueprintEvent)

void UPlayerOnlineStatsScreen::OnStatsGetSuccess()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PlayerOnlineStatsScreen.OnStatsGetSuccess");

	UPlayerOnlineStatsScreen_OnStatsGetSuccess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.PlayerOnlineStatsScreen.OnStatsGetFailed
// (Event, Public, BlueprintEvent)

void UPlayerOnlineStatsScreen::OnStatsGetFailed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PlayerOnlineStatsScreen.OnStatsGetFailed");

	UPlayerOnlineStatsScreen_OnStatsGetFailed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.PlayerOnlineStatsScreen.OnAttemptGetStats
// (Event, Public, BlueprintEvent)

void UPlayerOnlineStatsScreen::OnAttemptGetStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PlayerOnlineStatsScreen.OnAttemptGetStats");

	UPlayerOnlineStatsScreen_OnAttemptGetStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.PlayerOnlineStatsScreen.GetStats
// (Final, Native, Public, BlueprintCallable)

void UPlayerOnlineStatsScreen::GetStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PlayerOnlineStatsScreen.GetStats");

	UPlayerOnlineStatsScreen_GetStats_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.ReplicatedPlayerStat.OnRep_StatValue
// (Final, Native, Private)

void UReplicatedPlayerStat::OnRep_StatValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.ReplicatedPlayerStat.OnRep_StatValue");

	UReplicatedPlayerStat_OnRep_StatValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.PlayerReplicatedStatsComponent.GetStatValue
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag*           statTag                        (ConstParm, Parm, OutParm, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPlayerReplicatedStatsComponent::GetStatValue(struct FGameplayTag* statTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PlayerReplicatedStatsComponent.GetStatValue");

	UPlayerReplicatedStatsComponent_GetStatValue_Params params;
	params.statTag = statTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.PlayerReplicatedStatsComponent.GetStatObject
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag*           statTag                        (ConstParm, Parm, OutParm, ReferenceParm)
// class UReplicatedPlayerStat*   ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UReplicatedPlayerStat* UPlayerReplicatedStatsComponent::GetStatObject(struct FGameplayTag* statTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PlayerReplicatedStatsComponent.GetStatObject");

	UPlayerReplicatedStatsComponent_GetStatObject_Params params;
	params.statTag = statTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.PlayerReplicatedStatsComponent.GetReplicatedStats
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UReplicatedPlayerStat*> ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UReplicatedPlayerStat*> UPlayerReplicatedStatsComponent::GetReplicatedStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PlayerReplicatedStatsComponent.GetReplicatedStats");

	UPlayerReplicatedStatsComponent_GetReplicatedStats_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.PlaylistWidget.SetEnabledBP
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          setEnable                      (Parm, ZeroConstructor, IsPlainOldData)

void UPlaylistWidget::SetEnabledBP(bool* setEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PlaylistWidget.SetEnabledBP");

	UPlaylistWidget_SetEnabledBP_Params params;
	params.setEnable = setEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.PostExcursionStatsScreenWidget.SetPlayerNames
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TArray<struct FString>*        Players                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UPostExcursionStatsScreenWidget::SetPlayerNames(TArray<struct FString>* Players)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PostExcursionStatsScreenWidget.SetPlayerNames");

	UPostExcursionStatsScreenWidget_SetPlayerNames_Params params;
	params.Players = Players;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.PostExcursionStatsScreenWidget.SetAttempts
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           stats                          (Parm, ZeroConstructor, IsPlainOldData)

void UPostExcursionStatsScreenWidget::SetAttempts(int* stats)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PostExcursionStatsScreenWidget.SetAttempts");

	UPostExcursionStatsScreenWidget_SetAttempts_Params params;
	params.stats = stats;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.PostExcursionStatsScreenWidget.PlayersWon
// (Event, Public, BlueprintEvent)

void UPostExcursionStatsScreenWidget::PlayersWon()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PostExcursionStatsScreenWidget.PlayersWon");

	UPostExcursionStatsScreenWidget_PlayersWon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.PostExcursionStatsScreenWidget.PlayersLost
// (Event, Public, BlueprintEvent)

void UPostExcursionStatsScreenWidget::PlayersLost()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PostExcursionStatsScreenWidget.PlayersLost");

	UPostExcursionStatsScreenWidget_PlayersLost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.PostGameChallengeWidget.SetProgressChangeBP
// (Event, Protected, BlueprintEvent)
// Parameters:
// int*                           Delta                          (Parm, ZeroConstructor, IsPlainOldData)

void UPostGameChallengeWidget::SetProgressChangeBP(int* Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PostGameChallengeWidget.SetProgressChangeBP");

	UPostGameChallengeWidget_SetProgressChangeBP_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.PostGameChallengeWidget.OnCompletedBP
// (Event, Protected, BlueprintEvent)

void UPostGameChallengeWidget::OnCompletedBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PostGameChallengeWidget.OnCompletedBP");

	UPostGameChallengeWidget_OnCompletedBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.PostGameChallengeWidget.AnimateBP
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         delayTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UPostGameChallengeWidget::AnimateBP(float* delayTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PostGameChallengeWidget.AnimateBP");

	UPostGameChallengeWidget_AnimateBP_Params params;
	params.delayTime = delayTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.PostGameChallengeWidget.Animate
// (Final, Native, Public, BlueprintCallable)

void UPostGameChallengeWidget::Animate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PostGameChallengeWidget.Animate");

	UPostGameChallengeWidget_Animate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.PostGameConditionWidget.StartPostGameConditionDisplay
// (Event, Public, BlueprintEvent)
// Parameters:
// EeMatchEndCondition*           endCondition                   (Parm, ZeroConstructor, IsPlainOldData)

void UPostGameConditionWidget::StartPostGameConditionDisplay(EeMatchEndCondition* endCondition)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PostGameConditionWidget.StartPostGameConditionDisplay");

	UPostGameConditionWidget_StartPostGameConditionDisplay_Params params;
	params.endCondition = endCondition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.PostGameHighlightsMenu.OnAnimateBP
// (Event, Protected, BlueprintEvent)

void UPostGameHighlightsMenu::OnAnimateBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PostGameHighlightsMenu.OnAnimateBP");

	UPostGameHighlightsMenu_OnAnimateBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.PostGameHighlightsMenu.AnimateChallenges
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// float*                         timeBetweenChallengeAnimations (Parm, ZeroConstructor, IsPlainOldData)

void UPostGameHighlightsMenu::AnimateChallenges(float* timeBetweenChallengeAnimations)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PostGameHighlightsMenu.AnimateChallenges");

	UPostGameHighlightsMenu_AnimateChallenges_Params params;
	params.timeBetweenChallengeAnimations = timeBetweenChallengeAnimations;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.PostGameMedalWidget.OnShowMedalBP
// (Event, Protected, BlueprintEvent)

void UPostGameMedalWidget::OnShowMedalBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PostGameMedalWidget.OnShowMedalBP");

	UPostGameMedalWidget_OnShowMedalBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.PostGameStatWidget.OnStatShownBP
// (Event, Protected, BlueprintEvent)

void UPostGameStatWidget::OnStatShownBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PostGameStatWidget.OnStatShownBP");

	UPostGameStatWidget_OnStatShownBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.PostRoundConditionWidget.OnPostRoundCondition
// (Event, Public, BlueprintEvent)
// Parameters:
// EeRoundEndCondition*           endCondition                   (Parm, ZeroConstructor, IsPlainOldData)

void UPostRoundConditionWidget::OnPostRoundCondition(EeRoundEndCondition* endCondition)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PostRoundConditionWidget.OnPostRoundCondition");

	UPostRoundConditionWidget_OnPostRoundCondition_Params params;
	params.endCondition = endCondition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.PregameLobbyGameState.SetTargetMultiplayerLevel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString*                newTargetLevel                 (Parm, ZeroConstructor)

void APregameLobbyGameState::SetTargetMultiplayerLevel(struct FString* newTargetLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PregameLobbyGameState.SetTargetMultiplayerLevel");

	APregameLobbyGameState_SetTargetMultiplayerLevel_Params params;
	params.newTargetLevel = newTargetLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.PregameLobbyGameState.SetTargetGameMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString*                newGameMode                    (Parm, ZeroConstructor)

void APregameLobbyGameState::SetTargetGameMode(struct FString* newGameMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PregameLobbyGameState.SetTargetGameMode");

	APregameLobbyGameState_SetTargetGameMode_Params params;
	params.newGameMode = newGameMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.PregameLobbyGameState.OnRep_CurrentGameModeChanged
// (Final, Native, Private)

void APregameLobbyGameState::OnRep_CurrentGameModeChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PregameLobbyGameState.OnRep_CurrentGameModeChanged");

	APregameLobbyGameState_OnRep_CurrentGameModeChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.PregameLobbyGameState.GetTimeToStart
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float APregameLobbyGameState::GetTimeToStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PregameLobbyGameState.GetTimeToStart");

	APregameLobbyGameState_GetTimeToStart_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.PregameLobbyGameState.GetTargetMultiplayerLevel
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString APregameLobbyGameState::GetTargetMultiplayerLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PregameLobbyGameState.GetTargetMultiplayerLevel");

	APregameLobbyGameState_GetTargetMultiplayerLevel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.PregameLobbyGameState.GetPossibleGameModes
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FGameModeLobbyData> ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

TArray<struct FGameModeLobbyData> APregameLobbyGameState::GetPossibleGameModes()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PregameLobbyGameState.GetPossibleGameModes");

	APregameLobbyGameState_GetPossibleGameModes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.PregameLobbyGameState.GetMaxTimeToStart
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float APregameLobbyGameState::GetMaxTimeToStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PregameLobbyGameState.GetMaxTimeToStart");

	APregameLobbyGameState_GetMaxTimeToStart_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.PregameLobbyGameState.GetGameModeFromName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString*                GameModeName                   (Parm, ZeroConstructor)
// struct FGameModeLobbyData      ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameModeLobbyData APregameLobbyGameState::GetGameModeFromName(struct FString* GameModeName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PregameLobbyGameState.GetGameModeFromName");

	APregameLobbyGameState_GetGameModeFromName_Params params;
	params.GameModeName = GameModeName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.PregameLobbyGameState.GetCurrentGameModeName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString APregameLobbyGameState::GetCurrentGameModeName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PregameLobbyGameState.GetCurrentGameModeName");

	APregameLobbyGameState_GetCurrentGameModeName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.PregameLobbyPlayerController.SetTargetLevel
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// struct FString*                LevelName                      (Parm, ZeroConstructor)

void APregameLobbyPlayerController::SetTargetLevel(struct FString* LevelName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PregameLobbyPlayerController.SetTargetLevel");

	APregameLobbyPlayerController_SetTargetLevel_Params params;
	params.LevelName = LevelName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.PregameLobbyPlayerController.SetTargetGameMode
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// struct FString*                GameModeName                   (Parm, ZeroConstructor)

void APregameLobbyPlayerController::SetTargetGameMode(struct FString* GameModeName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PregameLobbyPlayerController.SetTargetGameMode");

	APregameLobbyPlayerController_SetTargetGameMode_Params params;
	params.GameModeName = GameModeName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.PregameLobbyPlayerController.Server_SetTargetLevel
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// struct FString*                targetLevel                    (Parm, ZeroConstructor)

void APregameLobbyPlayerController::Server_SetTargetLevel(struct FString* targetLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PregameLobbyPlayerController.Server_SetTargetLevel");

	APregameLobbyPlayerController_Server_SetTargetLevel_Params params;
	params.targetLevel = targetLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.PregameLobbyPlayerController.Server_SetTargetGameMode
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// struct FString*                GameModeName                   (Parm, ZeroConstructor)

void APregameLobbyPlayerController::Server_SetTargetGameMode(struct FString* GameModeName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PregameLobbyPlayerController.Server_SetTargetGameMode");

	APregameLobbyPlayerController_Server_SetTargetGameMode_Params params;
	params.GameModeName = GameModeName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.PregameLobbyPlayerState.Server_SetPlayerReady
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// bool*                          IsReady                        (Parm, ZeroConstructor, IsPlainOldData)

void APregameLobbyPlayerState::Server_SetPlayerReady(bool* IsReady)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PregameLobbyPlayerState.Server_SetPlayerReady");

	APregameLobbyPlayerState_Server_SetPlayerReady_Params params;
	params.IsReady = IsReady;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.PregameLobbyPlayerState.Server_SetPlayerBadgeAndBanner
// (Final, Net, NetReliable, Native, Event, Private, NetServer, HasDefaults, NetValidate)
// Parameters:
// struct FPlayerBadge*           badge                          (ConstParm, Parm, ReferenceParm)
// struct FGuid*                  bannerGuid                     (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void APregameLobbyPlayerState::Server_SetPlayerBadgeAndBanner(struct FPlayerBadge* badge, struct FGuid* bannerGuid)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PregameLobbyPlayerState.Server_SetPlayerBadgeAndBanner");

	APregameLobbyPlayerState_Server_SetPlayerBadgeAndBanner_Params params;
	params.badge = badge;
	params.bannerGuid = bannerGuid;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.PregameLobbyPlayerState.OnRep_PlayerBanner
// (Final, Native, Private)

void APregameLobbyPlayerState::OnRep_PlayerBanner()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PregameLobbyPlayerState.OnRep_PlayerBanner");

	APregameLobbyPlayerState_OnRep_PlayerBanner_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.PregameLobbyPlayerState.OnRep_PlayerBadge
// (Final, Native, Private)

void APregameLobbyPlayerState::OnRep_PlayerBadge()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PregameLobbyPlayerState.OnRep_PlayerBadge");

	APregameLobbyPlayerState_OnRep_PlayerBadge_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.PregameLobbyPlayerState.OnRep_IsReadyForGame
// (Final, Native, Private)

void APregameLobbyPlayerState::OnRep_IsReadyForGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PregameLobbyPlayerState.OnRep_IsReadyForGame");

	APregameLobbyPlayerState_OnRep_IsReadyForGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.PregameLobbyPlayerState.IsReadyForGame
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APregameLobbyPlayerState::IsReadyForGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PregameLobbyPlayerState.IsReadyForGame");

	APregameLobbyPlayerState_IsReadyForGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.PregameLobbyUserWidget.ToggleReady
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPregameLobbyUserWidget::ToggleReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PregameLobbyUserWidget.ToggleReady");

	UPregameLobbyUserWidget_ToggleReady_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.PregameLobbyUserWidget.ChangeTeam
// (Final, Native, Protected, BlueprintCallable)

void UPregameLobbyUserWidget::ChangeTeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.PregameLobbyUserWidget.ChangeTeam");

	UPregameLobbyUserWidget_ChangeTeam_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.RadarComponent.IsSegmentOccupied
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EeRadarRing*                   ring                           (Parm, ZeroConstructor, IsPlainOldData)
// int*                           SegmentIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool URadarComponent::IsSegmentOccupied(EeRadarRing* ring, int* SegmentIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RadarComponent.IsSegmentOccupied");

	URadarComponent_IsSegmentOccupied_Params params;
	params.ring = ring;
	params.SegmentIndex = SegmentIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.RadarComponent.Initialize
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// float*                         timeToClear                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         timeToForget                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D*              nearRange                      (Parm, ZeroConstructor, IsPlainOldData)
// int*                           nearSegments                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D*              midRange                       (Parm, ZeroConstructor, IsPlainOldData)
// int*                           midSegments                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D*              farRange                       (Parm, ZeroConstructor, IsPlainOldData)
// int*                           farSegments                    (Parm, ZeroConstructor, IsPlainOldData)

void URadarComponent::Initialize(float* timeToClear, float* timeToForget, struct FVector2D* nearRange, int* nearSegments, struct FVector2D* midRange, int* midSegments, struct FVector2D* farRange, int* farSegments)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RadarComponent.Initialize");

	URadarComponent_Initialize_Params params;
	params.timeToClear = timeToClear;
	params.timeToForget = timeToForget;
	params.nearRange = nearRange;
	params.nearSegments = nearSegments;
	params.midRange = midRange;
	params.midSegments = midSegments;
	params.farRange = farRange;
	params.farSegments = farSegments;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.RadarWidget.GetRadarComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class URadarComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class URadarComponent* URadarWidget::GetRadarComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RadarWidget.GetRadarComponent");

	URadarWidget_GetRadarComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.RangedAmmoRegenComponent.OnRep_CanRegen
// (Final, Native, Private)

void URangedAmmoRegenComponent::OnRep_CanRegen()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RangedAmmoRegenComponent.OnRep_CanRegen");

	URangedAmmoRegenComponent_OnRep_CanRegen_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.RangedAmmoRegenComponent.Multicast_OnSingleRegenCycleComplete
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
// float*                         syncRegenAccumulation          (Parm, ZeroConstructor, IsPlainOldData)

void URangedAmmoRegenComponent::Multicast_OnSingleRegenCycleComplete(float* syncRegenAccumulation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RangedAmmoRegenComponent.Multicast_OnSingleRegenCycleComplete");

	URangedAmmoRegenComponent_Multicast_OnSingleRegenCycleComplete_Params params;
	params.syncRegenAccumulation = syncRegenAccumulation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.RangedWeapon.UsesAccuracyCurve
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ARangedWeapon::UsesAccuracyCurve()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RangedWeapon.UsesAccuracyCurve");

	ARangedWeapon_UsesAccuracyCurve_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.RangedWeapon.Server_StopFiring
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)

void ARangedWeapon::Server_StopFiring()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RangedWeapon.Server_StopFiring");

	ARangedWeapon_Server_StopFiring_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.RangedWeapon.Server_StopCharging
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)

void ARangedWeapon::Server_StopCharging()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RangedWeapon.Server_StopCharging");

	ARangedWeapon_Server_StopCharging_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.RangedWeapon.Server_StartFiring
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)

void ARangedWeapon::Server_StartFiring()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RangedWeapon.Server_StartFiring");

	ARangedWeapon_Server_StartFiring_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.RangedWeapon.Server_StartCharging
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)

void ARangedWeapon::Server_StartCharging()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RangedWeapon.Server_StartCharging");

	ARangedWeapon_Server_StartCharging_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.RangedWeapon.Server_Reload
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)

void ARangedWeapon::Server_Reload()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RangedWeapon.Server_Reload");

	ARangedWeapon_Server_Reload_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.RangedWeapon.Server_FireShot
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// struct FVector_NetQuantize*    from                           (Parm)
// struct FVector_NetQuantize*    projectileVelocity             (Parm)

void ARangedWeapon::Server_FireShot(struct FVector_NetQuantize* from, struct FVector_NetQuantize* projectileVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RangedWeapon.Server_FireShot");

	ARangedWeapon_Server_FireShot_Params params;
	params.from = from;
	params.projectileVelocity = projectileVelocity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.RangedWeapon.Server_CancelReload
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)

void ARangedWeapon::Server_CancelReload()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RangedWeapon.Server_CancelReload");

	ARangedWeapon_Server_CancelReload_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.RangedWeapon.NumberOfChamberedRoundsBasedOnCharge
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ARangedWeapon::NumberOfChamberedRoundsBasedOnCharge()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RangedWeapon.NumberOfChamberedRoundsBasedOnCharge");

	ARangedWeapon_NumberOfChamberedRoundsBasedOnCharge_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.RangedWeapon.Multicast_StopFiring
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)

void ARangedWeapon::Multicast_StopFiring()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RangedWeapon.Multicast_StopFiring");

	ARangedWeapon_Multicast_StopFiring_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.RangedWeapon.Multicast_StopCharging
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)

void ARangedWeapon::Multicast_StopCharging()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RangedWeapon.Multicast_StopCharging");

	ARangedWeapon_Multicast_StopCharging_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.RangedWeapon.Multicast_StartFiring
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)

void ARangedWeapon::Multicast_StartFiring()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RangedWeapon.Multicast_StartFiring");

	ARangedWeapon_Multicast_StartFiring_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.RangedWeapon.Multicast_StartCharging
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)

void ARangedWeapon::Multicast_StartCharging()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RangedWeapon.Multicast_StartCharging");

	ARangedWeapon_Multicast_StartCharging_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.RangedWeapon.Multicast_Reload
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)

void ARangedWeapon::Multicast_Reload()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RangedWeapon.Multicast_Reload");

	ARangedWeapon_Multicast_Reload_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.RangedWeapon.Multicast_FireShot
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
// struct FVector_NetQuantize*    from                           (Parm)
// struct FVector_NetQuantize*    projectileVelocity             (Parm)

void ARangedWeapon::Multicast_FireShot(struct FVector_NetQuantize* from, struct FVector_NetQuantize* projectileVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RangedWeapon.Multicast_FireShot");

	ARangedWeapon_Multicast_FireShot_Params params;
	params.from = from;
	params.projectileVelocity = projectileVelocity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.RangedWeapon.Multicast_CancelReload
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)

void ARangedWeapon::Multicast_CancelReload()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RangedWeapon.Multicast_CancelReload");

	ARangedWeapon_Multicast_CancelReload_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.RangedWeapon.MaximumNumberOfFireAttemptsPerShot
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ARangedWeapon::MaximumNumberOfFireAttemptsPerShot()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RangedWeapon.MaximumNumberOfFireAttemptsPerShot");

	ARangedWeapon_MaximumNumberOfFireAttemptsPerShot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.RangedWeapon.IsFiring
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ARangedWeapon::IsFiring()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RangedWeapon.IsFiring");

	ARangedWeapon_IsFiring_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.RangedWeapon.IsCharging
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ARangedWeapon::IsCharging()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RangedWeapon.IsCharging");

	ARangedWeapon_IsCharging_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.RangedWeapon.GetReloadPercent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ARangedWeapon::GetReloadPercent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RangedWeapon.GetReloadPercent");

	ARangedWeapon_GetReloadPercent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.RangedWeapon.GetRegenTotalPercentage
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ARangedWeapon::GetRegenTotalPercentage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RangedWeapon.GetRegenTotalPercentage");

	ARangedWeapon_GetRegenTotalPercentage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.RangedWeapon.GetRegenTimeRemainingTotal
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ARangedWeapon::GetRegenTimeRemainingTotal()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RangedWeapon.GetRegenTimeRemainingTotal");

	ARangedWeapon_GetRegenTimeRemainingTotal_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.RangedWeapon.GetRegenTimeRemainingForNextRound
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ARangedWeapon::GetRegenTimeRemainingForNextRound()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RangedWeapon.GetRegenTimeRemainingForNextRound");

	ARangedWeapon_GetRegenTimeRemainingForNextRound_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.RangedWeapon.GetRegenPercentageForNextRound
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ARangedWeapon::GetRegenPercentageForNextRound()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RangedWeapon.GetRegenPercentageForNextRound");

	ARangedWeapon_GetRegenPercentageForNextRound_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.RangedWeapon.GetNextMuzzleIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ARangedWeapon::GetNextMuzzleIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RangedWeapon.GetNextMuzzleIndex");

	ARangedWeapon_GetNextMuzzleIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.RangedWeapon.GetMaxMagazineAmmo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ARangedWeapon::GetMaxMagazineAmmo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RangedWeapon.GetMaxMagazineAmmo");

	ARangedWeapon_GetMaxMagazineAmmo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.RangedWeapon.GetMaxChargeTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ARangedWeapon::GetMaxChargeTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RangedWeapon.GetMaxChargeTime");

	ARangedWeapon_GetMaxChargeTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.RangedWeapon.GetMaxAmmo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ARangedWeapon::GetMaxAmmo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RangedWeapon.GetMaxAmmo");

	ARangedWeapon_GetMaxAmmo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.RangedWeapon.GetIsReloading
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ARangedWeapon::GetIsReloading()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RangedWeapon.GetIsReloading");

	ARangedWeapon_GetIsReloading_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.RangedWeapon.GetCurrentAmmoTotal
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ARangedWeapon::GetCurrentAmmoTotal()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RangedWeapon.GetCurrentAmmoTotal");

	ARangedWeapon_GetCurrentAmmoTotal_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.RangedWeapon.GetCurrentAmmoInMagazine
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ARangedWeapon::GetCurrentAmmoInMagazine()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RangedWeapon.GetCurrentAmmoInMagazine");

	ARangedWeapon_GetCurrentAmmoInMagazine_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.RangedWeapon.GetCurrentAmmo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ARangedWeapon::GetCurrentAmmo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RangedWeapon.GetCurrentAmmo");

	ARangedWeapon_GetCurrentAmmo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.RangedWeapon.GetCurrentAccuracyPercentage
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ARangedWeapon::GetCurrentAccuracyPercentage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RangedWeapon.GetCurrentAccuracyPercentage");

	ARangedWeapon_GetCurrentAccuracyPercentage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.RangedWeapon.GetCurrentAccuracy
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ARangedWeapon::GetCurrentAccuracy()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RangedWeapon.GetCurrentAccuracy");

	ARangedWeapon_GetCurrentAccuracy_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.RangedWeapon.GetChargeTimeRemaining
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ARangedWeapon::GetChargeTimeRemaining()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RangedWeapon.GetChargeTimeRemaining");

	ARangedWeapon_GetChargeTimeRemaining_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.RangedWeapon.GetChargeState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EeWeaponChargeState            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EeWeaponChargeState ARangedWeapon::GetChargeState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RangedWeapon.GetChargeState");

	ARangedWeapon_GetChargeState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.RangedWeapon.GetChargeRatio
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ARangedWeapon::GetChargeRatio()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RangedWeapon.GetChargeRatio");

	ARangedWeapon_GetChargeRatio_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.RangedWeapon.GetAutoFireMaxChargeTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ARangedWeapon::GetAutoFireMaxChargeTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RangedWeapon.GetAutoFireMaxChargeTime");

	ARangedWeapon_GetAutoFireMaxChargeTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.RangedWeapon.GetAutoFireChargeTimeRemaining
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ARangedWeapon::GetAutoFireChargeTimeRemaining()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RangedWeapon.GetAutoFireChargeTimeRemaining");

	ARangedWeapon_GetAutoFireChargeTimeRemaining_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.RangedWeapon.GetAutoFireChargeRatio
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ARangedWeapon::GetAutoFireChargeRatio()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RangedWeapon.GetAutoFireChargeRatio");

	ARangedWeapon_GetAutoFireChargeRatio_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.RangedWeapon.GetActiveMuzzleIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ARangedWeapon::GetActiveMuzzleIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RangedWeapon.GetActiveMuzzleIndex");

	ARangedWeapon_GetActiveMuzzleIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.RangedWeapon.DoesWeaponUseCharge
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ARangedWeapon::DoesWeaponUseCharge()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RangedWeapon.DoesWeaponUseCharge");

	ARangedWeapon_DoesWeaponUseCharge_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.RangedWeapon.ChargeModifiesRoundCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ARangedWeapon::ChargeModifiesRoundCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RangedWeapon.ChargeModifiesRoundCount");

	ARangedWeapon_ChargeModifiesRoundCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.RangedWeapon.CanRegenerateAmmo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ARangedWeapon::CanRegenerateAmmo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RangedWeapon.CanRegenerateAmmo");

	ARangedWeapon_CanRegenerateAmmo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.RangedWeaponHandlingComponent.Server_SetWantsAiming
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// bool*                          wantsAiming                    (Parm, ZeroConstructor, IsPlainOldData)

void URangedWeaponHandlingComponent::Server_SetWantsAiming(bool* wantsAiming)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RangedWeaponHandlingComponent.Server_SetWantsAiming");

	URangedWeaponHandlingComponent_Server_SetWantsAiming_Params params;
	params.wantsAiming = wantsAiming;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.RangedWeaponHandlingComponent.Server_SetIsAiming
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// bool*                          aiming                         (Parm, ZeroConstructor, IsPlainOldData)

void URangedWeaponHandlingComponent::Server_SetIsAiming(bool* aiming)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RangedWeaponHandlingComponent.Server_SetIsAiming");

	URangedWeaponHandlingComponent_Server_SetIsAiming_Params params;
	params.aiming = aiming;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.RangedWeaponHandlingComponent.OnRepWeapons
// (Final, Native, Private)

void URangedWeaponHandlingComponent::OnRepWeapons()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RangedWeaponHandlingComponent.OnRepWeapons");

	URangedWeaponHandlingComponent_OnRepWeapons_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.RangedWeaponHandlingComponent.OnRep_IsAiming
// (Final, Native, Private)

void URangedWeaponHandlingComponent::OnRep_IsAiming()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RangedWeaponHandlingComponent.OnRep_IsAiming");

	URangedWeaponHandlingComponent_OnRep_IsAiming_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.RangedWeaponHandlingComponent.MultiCast_UpdateAimTargetData
// (Final, Net, Native, Event, NetMulticast, Private)
// Parameters:
// struct FVector_NetQuantize*    updatedAimData                 (Parm)

void URangedWeaponHandlingComponent::MultiCast_UpdateAimTargetData(struct FVector_NetQuantize* updatedAimData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RangedWeaponHandlingComponent.MultiCast_UpdateAimTargetData");

	URangedWeaponHandlingComponent_MultiCast_UpdateAimTargetData_Params params;
	params.updatedAimData = updatedAimData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.RangedWeaponHandlingComponent.Multicast_DrawAimLine
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
// struct FVector_NetQuantize*    drawStart                      (Parm)
// struct FVector_NetQuantize*    drawEnd                        (Parm)

void URangedWeaponHandlingComponent::Multicast_DrawAimLine(struct FVector_NetQuantize* drawStart, struct FVector_NetQuantize* drawEnd)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RangedWeaponHandlingComponent.Multicast_DrawAimLine");

	URangedWeaponHandlingComponent_Multicast_DrawAimLine_Params params;
	params.drawStart = drawStart;
	params.drawEnd = drawEnd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.RangedWeaponHandlingComponent.Multicast_DrawAimDirection
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
// struct FVector_NetQuantize*    drawStart                      (Parm)
// struct FVector_NetQuantizeNormal* Direction                      (Parm)

void URangedWeaponHandlingComponent::Multicast_DrawAimDirection(struct FVector_NetQuantize* drawStart, struct FVector_NetQuantizeNormal* Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RangedWeaponHandlingComponent.Multicast_DrawAimDirection");

	URangedWeaponHandlingComponent_Multicast_DrawAimDirection_Params params;
	params.drawStart = drawStart;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.RangedWeaponHandlingComponent.IsAiming
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool URangedWeaponHandlingComponent::IsAiming()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RangedWeaponHandlingComponent.IsAiming");

	URangedWeaponHandlingComponent_IsAiming_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.RangedWeaponHandlingComponent.GetAimingDataPerWeapon
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FWeaponAimingData> ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

TArray<struct FWeaponAimingData> URangedWeaponHandlingComponent::GetAimingDataPerWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RangedWeaponHandlingComponent.GetAimingDataPerWeapon");

	URangedWeaponHandlingComponent_GetAimingDataPerWeapon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.RepairerComponent.NetMulticast_ExecuteRepair
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
// struct FRepairInfo*            RepairInfo                     (ConstParm, Parm, ReferenceParm)

void URepairerComponent::NetMulticast_ExecuteRepair(struct FRepairInfo* RepairInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RepairerComponent.NetMulticast_ExecuteRepair");

	URepairerComponent_NetMulticast_ExecuteRepair_Params params;
	params.RepairInfo = RepairInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.RepairerComponent.NetMulticast_AbortRepair
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)

void URepairerComponent::NetMulticast_AbortRepair()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RepairerComponent.NetMulticast_AbortRepair");

	URepairerComponent_NetMulticast_AbortRepair_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.RepairerComponent.ExecuteRepair
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FRepairInfo*            RepairInfo                     (ConstParm, Parm, OutParm, ReferenceParm)

void URepairerComponent::ExecuteRepair(struct FRepairInfo* RepairInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RepairerComponent.ExecuteRepair");

	URepairerComponent_ExecuteRepair_Params params;
	params.RepairInfo = RepairInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.RepairerComponent.AbortRepair
// (Final, Native, Public, BlueprintCallable)

void URepairerComponent::AbortRepair()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RepairerComponent.AbortRepair");

	URepairerComponent_AbortRepair_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.RepairerSpawnerActor.OnComponentBeginOverlap
// (Final, Native, Private, HasOutParms)
// Parameters:
// class UPrimitiveComponent**    OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ARepairerSpawnerActor::OnComponentBeginOverlap(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex, bool* bFromSweep, struct FHitResult* SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RepairerSpawnerActor.OnComponentBeginOverlap");

	ARepairerSpawnerActor_OnComponentBeginOverlap_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.RepairNanoSwarmActor.NetMulticast_RepairTarget
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
// class AActor**                 Target                         (Parm, ZeroConstructor, IsPlainOldData)

void ARepairNanoSwarmActor::NetMulticast_RepairTarget(class AActor** Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RepairNanoSwarmActor.NetMulticast_RepairTarget");

	ARepairNanoSwarmActor_NetMulticast_RepairTarget_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.ReplayOverlayWidget.OnTogglePause
// (Final, Native, Private, BlueprintCallable)

void UReplayOverlayWidget::OnTogglePause()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.ReplayOverlayWidget.OnTogglePause");

	UReplayOverlayWidget_OnTogglePause_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.ReplayOverlayWidget.OnStopScrub
// (Final, Native, Private)

void UReplayOverlayWidget::OnStopScrub()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.ReplayOverlayWidget.OnStopScrub");

	UReplayOverlayWidget_OnStopScrub_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.ReplayOverlayWidget.OnStartScrub
// (Final, Native, Private)

void UReplayOverlayWidget::OnStartScrub()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.ReplayOverlayWidget.OnStartScrub");

	UReplayOverlayWidget_OnStartScrub_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.ReplayOverlayWidget.OnComboBoxValueChange
// (Final, Native, Private)
// Parameters:
// struct FString*                NewValue                       (Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>*      Type                           (Parm, ZeroConstructor, IsPlainOldData)

void UReplayOverlayWidget::OnComboBoxValueChange(struct FString* NewValue, TEnumAsByte<ESelectInfo>* Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.ReplayOverlayWidget.OnComboBoxValueChange");

	UReplayOverlayWidget_OnComboBoxValueChange_Params params;
	params.NewValue = NewValue;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.ReplayPlayerController.SetCameraShakeScale
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         NewScale                       (Parm, ZeroConstructor, IsPlainOldData)

void AReplayPlayerController::SetCameraShakeScale(float* NewScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.ReplayPlayerController.SetCameraShakeScale");

	AReplayPlayerController_SetCameraShakeScale_Params params;
	params.NewScale = NewScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.ReplayPlayerController.RestartReplay
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          keepCurrentLocation            (Parm, ZeroConstructor, IsPlainOldData)

void AReplayPlayerController::RestartReplay(bool* keepCurrentLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.ReplayPlayerController.RestartReplay");

	AReplayPlayerController_RestartReplay_Params params;
	params.keepCurrentLocation = keepCurrentLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.ResolutionConfirmMenu.OnRevertButton
// (Final, Native, Protected)

void UResolutionConfirmMenu::OnRevertButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.ResolutionConfirmMenu.OnRevertButton");

	UResolutionConfirmMenu_OnRevertButton_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.ResolutionConfirmMenu.OnConfirmButton
// (Final, Native, Protected)

void UResolutionConfirmMenu::OnConfirmButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.ResolutionConfirmMenu.OnConfirmButton");

	UResolutionConfirmMenu_OnConfirmButton_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.ReticleComponent.IsSnapping
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UReticleComponent::IsSnapping()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.ReticleComponent.IsSnapping");

	UReticleComponent_IsSnapping_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.ReticleComponent.IsReticleOverEnemy
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UReticleComponent::IsReticleOverEnemy()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.ReticleComponent.IsReticleOverEnemy");

	UReticleComponent_IsReticleOverEnemy_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.ReticleComponent.GetSnappedReticleViewportPosition
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector2D UReticleComponent::GetSnappedReticleViewportPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.ReticleComponent.GetSnappedReticleViewportPosition");

	UReticleComponent_GetSnappedReticleViewportPosition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.ReticleComponent.GetSnappedReticleOffset
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector2D UReticleComponent::GetSnappedReticleOffset()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.ReticleComponent.GetSnappedReticleOffset");

	UReticleComponent_GetSnappedReticleOffset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.ReticleComponent.GetReticleViewportPosition
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector2D UReticleComponent::GetReticleViewportPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.ReticleComponent.GetReticleViewportPosition");

	UReticleComponent_GetReticleViewportPosition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.RetrievalSingleObjectObjectiveTracker.OnRep_ObjectiveStates
// (Final, Native, Private)

void ARetrievalSingleObjectObjectiveTracker::OnRep_ObjectiveStates()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RetrievalSingleObjectObjectiveTracker.OnRep_ObjectiveStates");

	ARetrievalSingleObjectObjectiveTracker_OnRep_ObjectiveStates_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.RetrievalCoreTrackingManager.OnRep_ActiveCores
// (Final, Native, Private)

void ARetrievalCoreTrackingManager::OnRep_ActiveCores()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RetrievalCoreTrackingManager.OnRep_ActiveCores");

	ARetrievalCoreTrackingManager_OnRep_ActiveCores_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.RetrievalCoreTrackingManager.NetMulticast_PlayExplosionFX
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private, HasDefaults)
// Parameters:
// struct FTransform*             SpawnTransform                 (ConstParm, Parm, ReferenceParm, IsPlainOldData)

void ARetrievalCoreTrackingManager::NetMulticast_PlayExplosionFX(struct FTransform* SpawnTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RetrievalCoreTrackingManager.NetMulticast_PlayExplosionFX");

	ARetrievalCoreTrackingManager_NetMulticast_PlayExplosionFX_Params params;
	params.SpawnTransform = SpawnTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.RetrievalGameState.OnRep_TeamScores
// (Final, Native, Private)

void ARetrievalGameState::OnRep_TeamScores()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RetrievalGameState.OnRep_TeamScores");

	ARetrievalGameState_OnRep_TeamScores_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.RetrievalGameState.OnRep_PreviousRoundScores
// (Final, Native, Private)

void ARetrievalGameState::OnRep_PreviousRoundScores()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RetrievalGameState.OnRep_PreviousRoundScores");

	ARetrievalGameState_OnRep_PreviousRoundScores_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.RetrievalGameState.NetMulticast_OnItemScored
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
// class ARetrievalPlayerState**  scoringPlayer                  (Parm, ZeroConstructor, IsPlainOldData)
// class ARetrievalObjectiveNodeActor** Node                           (Parm, ZeroConstructor, IsPlainOldData)

void ARetrievalGameState::NetMulticast_OnItemScored(class ARetrievalPlayerState** scoringPlayer, class ARetrievalObjectiveNodeActor** Node)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RetrievalGameState.NetMulticast_OnItemScored");

	ARetrievalGameState_NetMulticast_OnItemScored_Params params;
	params.scoringPlayer = scoringPlayer;
	params.Node = Node;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.RetrievalGameState.NetMulticast_OnItemPickedUp
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
// class ARetrievalPlayerState**  playerPickedUp                 (Parm, ZeroConstructor, IsPlainOldData)
// class ARetrievalObjectiveNodeActor** Node                           (Parm, ZeroConstructor, IsPlainOldData)

void ARetrievalGameState::NetMulticast_OnItemPickedUp(class ARetrievalPlayerState** playerPickedUp, class ARetrievalObjectiveNodeActor** Node)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RetrievalGameState.NetMulticast_OnItemPickedUp");

	ARetrievalGameState_NetMulticast_OnItemPickedUp_Params params;
	params.playerPickedUp = playerPickedUp;
	params.Node = Node;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.RetrievalGameState.NetMulticast_OnItemFirstSpawned
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
// class ARetrievalPlayerState**  playerPickedUp                 (Parm, ZeroConstructor, IsPlainOldData)
// class ARetrievalObjectiveNodeActor** Node                           (Parm, ZeroConstructor, IsPlainOldData)

void ARetrievalGameState::NetMulticast_OnItemFirstSpawned(class ARetrievalPlayerState** playerPickedUp, class ARetrievalObjectiveNodeActor** Node)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RetrievalGameState.NetMulticast_OnItemFirstSpawned");

	ARetrievalGameState_NetMulticast_OnItemFirstSpawned_Params params;
	params.playerPickedUp = playerPickedUp;
	params.Node = Node;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.RetrievalGameState.NetMulticast_OnItemDropped
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
// class ARetrievalPlayerState**  playerKilledCarrier            (Parm, ZeroConstructor, IsPlainOldData)
// class ARetrievalObjectiveNodeActor** Node                           (Parm, ZeroConstructor, IsPlainOldData)

void ARetrievalGameState::NetMulticast_OnItemDropped(class ARetrievalPlayerState** playerKilledCarrier, class ARetrievalObjectiveNodeActor** Node)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RetrievalGameState.NetMulticast_OnItemDropped");

	ARetrievalGameState_NetMulticast_OnItemDropped_Params params;
	params.playerKilledCarrier = playerKilledCarrier;
	params.Node = Node;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.RetrievalInteractableWidget.OnInteractEnd
// (Event, Public, BlueprintEvent)

void URetrievalInteractableWidget::OnInteractEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RetrievalInteractableWidget.OnInteractEnd");

	URetrievalInteractableWidget_OnInteractEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.RetrievalInteractableWidget.OnInteractBegin
// (Event, Public, BlueprintEvent)

void URetrievalInteractableWidget::OnInteractBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RetrievalInteractableWidget.OnInteractBegin");

	URetrievalInteractableWidget_OnInteractBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.RetrievalInteractableWidget.OnInteractableInactive
// (Event, Public, BlueprintEvent)

void URetrievalInteractableWidget::OnInteractableInactive()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RetrievalInteractableWidget.OnInteractableInactive");

	URetrievalInteractableWidget_OnInteractableInactive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.RetrievalInteractableWidget.OnInteractableActive
// (Event, Public, BlueprintEvent)

void URetrievalInteractableWidget::OnInteractableActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RetrievalInteractableWidget.OnInteractableActive");

	URetrievalInteractableWidget_OnInteractableActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.RetrievalInteractableWidget.OnHoverStart
// (Event, Public, BlueprintEvent)

void URetrievalInteractableWidget::OnHoverStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RetrievalInteractableWidget.OnHoverStart");

	URetrievalInteractableWidget_OnHoverStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.RetrievalInteractableWidget.OnHoverEnd
// (Event, Public, BlueprintEvent)

void URetrievalInteractableWidget::OnHoverEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RetrievalInteractableWidget.OnHoverEnd");

	URetrievalInteractableWidget_OnHoverEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.RetrievalInteractableWidgetComponent.SetRelationship
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          useRelationship                (Parm, ZeroConstructor, IsPlainOldData)
// EeTeamRelationship*            relationship                   (Parm, ZeroConstructor, IsPlainOldData)

void URetrievalInteractableWidgetComponent::SetRelationship(bool* useRelationship, EeTeamRelationship* relationship)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RetrievalInteractableWidgetComponent.SetRelationship");

	URetrievalInteractableWidgetComponent_SetRelationship_Params params;
	params.useRelationship = useRelationship;
	params.relationship = relationship;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.RetrievalInteractableWidgetComponent.SetObjectiveState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EeRetrievalObjectiveState*     State                          (Parm, ZeroConstructor, IsPlainOldData)

void URetrievalInteractableWidgetComponent::SetObjectiveState(EeRetrievalObjectiveState* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RetrievalInteractableWidgetComponent.SetObjectiveState");

	URetrievalInteractableWidgetComponent_SetObjectiveState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.RetrievalInteractableWidgetComponent.SetObjectiveName
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FText*                  Name                           (ConstParm, Parm, OutParm, ReferenceParm)

void URetrievalInteractableWidgetComponent::SetObjectiveName(struct FText* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RetrievalInteractableWidgetComponent.SetObjectiveName");

	URetrievalInteractableWidgetComponent_SetObjectiveName_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.RetrievalLiftoffActor.OnRep_DesiredState
// (Final, Native, Private)

void ARetrievalLiftoffActor::OnRep_DesiredState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RetrievalLiftoffActor.OnRep_DesiredState");

	ARetrievalLiftoffActor_OnRep_DesiredState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.RetrievalLiftoffActor.OnLaunchTimeOut_BP
// (Event, Public, BlueprintEvent)

void ARetrievalLiftoffActor::OnLaunchTimeOut_BP()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RetrievalLiftoffActor.OnLaunchTimeOut_BP");

	ARetrievalLiftoffActor_OnLaunchTimeOut_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.RetrievalLiftoffActor.OnLaunch_BP
// (Event, Public, BlueprintEvent)

void ARetrievalLiftoffActor::OnLaunch_BP()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RetrievalLiftoffActor.OnLaunch_BP");

	ARetrievalLiftoffActor_OnLaunch_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.RetrievalLiftoffActor.OnIdle_BP
// (Event, Public, BlueprintEvent)

void ARetrievalLiftoffActor::OnIdle_BP()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RetrievalLiftoffActor.OnIdle_BP");

	ARetrievalLiftoffActor_OnIdle_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.RetrievalObjectiveHUDWidget.OnInteractEnd
// (Event, Public, BlueprintEvent)

void URetrievalObjectiveHUDWidget::OnInteractEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RetrievalObjectiveHUDWidget.OnInteractEnd");

	URetrievalObjectiveHUDWidget_OnInteractEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.RetrievalObjectiveHUDWidget.OnInteractBegin
// (Event, Public, BlueprintEvent)

void URetrievalObjectiveHUDWidget::OnInteractBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RetrievalObjectiveHUDWidget.OnInteractBegin");

	URetrievalObjectiveHUDWidget_OnInteractBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.RetrievalObjectiveNodeActor.OnNodeStateChange_BP
// (Event, Public, BlueprintEvent)
// Parameters:
// EeRetrievalObjectiveState*     oldState                       (Parm, ZeroConstructor, IsPlainOldData)
// EeRetrievalObjectiveState*     NewState                       (Parm, ZeroConstructor, IsPlainOldData)

void ARetrievalObjectiveNodeActor::OnNodeStateChange_BP(EeRetrievalObjectiveState* oldState, EeRetrievalObjectiveState* NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RetrievalObjectiveNodeActor.OnNodeStateChange_BP");

	ARetrievalObjectiveNodeActor_OnNodeStateChange_BP_Params params;
	params.oldState = oldState;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.RetrievalOffscreenWidget.OnInteractEnd
// (Event, Public, BlueprintEvent)

void URetrievalOffscreenWidget::OnInteractEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RetrievalOffscreenWidget.OnInteractEnd");

	URetrievalOffscreenWidget_OnInteractEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.RetrievalOffscreenWidget.OnInteractBegin
// (Event, Public, BlueprintEvent)

void URetrievalOffscreenWidget::OnInteractBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RetrievalOffscreenWidget.OnInteractBegin");

	URetrievalOffscreenWidget_OnInteractBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.RetrievalOffscreenWidget.OnInteractableInactive
// (Event, Public, BlueprintEvent)

void URetrievalOffscreenWidget::OnInteractableInactive()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RetrievalOffscreenWidget.OnInteractableInactive");

	URetrievalOffscreenWidget_OnInteractableInactive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.RetrievalOffscreenWidget.OnInteractableActive
// (Event, Public, BlueprintEvent)

void URetrievalOffscreenWidget::OnInteractableActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RetrievalOffscreenWidget.OnInteractableActive");

	URetrievalOffscreenWidget_OnInteractableActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.RetrievalPlayerController.Server_RETRIEVAL_DEBUG_SetScore
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// int*                           teamIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t*                      score                          (Parm, ZeroConstructor, IsPlainOldData)

void ARetrievalPlayerController::Server_RETRIEVAL_DEBUG_SetScore(int* teamIndex, uint32_t* score)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RetrievalPlayerController.Server_RETRIEVAL_DEBUG_SetScore");

	ARetrievalPlayerController_Server_RETRIEVAL_DEBUG_SetScore_Params params;
	params.teamIndex = teamIndex;
	params.score = score;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.RetrievalPlayerController.RETRIEVAL_DEBUG_SetScore
// (Final, Exec, Native, Private)
// Parameters:
// int*                           teamIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t*                      score                          (Parm, ZeroConstructor, IsPlainOldData)

void ARetrievalPlayerController::RETRIEVAL_DEBUG_SetScore(int* teamIndex, uint32_t* score)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RetrievalPlayerController.RETRIEVAL_DEBUG_SetScore");

	ARetrievalPlayerController_RETRIEVAL_DEBUG_SetScore_Params params;
	params.teamIndex = teamIndex;
	params.score = score;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.RetrievalScoreboardHeaderWidget.SetTeamColor
// (Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// struct FLinearColor*           Color                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void URetrievalScoreboardHeaderWidget::SetTeamColor(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RetrievalScoreboardHeaderWidget.SetTeamColor");

	URetrievalScoreboardHeaderWidget_SetTeamColor_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.RetrievalSingleRoundPostGameConditionWidget.OnWin_Defenders
// (Event, Public, BlueprintEvent)

void URetrievalSingleRoundPostGameConditionWidget::OnWin_Defenders()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RetrievalSingleRoundPostGameConditionWidget.OnWin_Defenders");

	URetrievalSingleRoundPostGameConditionWidget_OnWin_Defenders_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.RetrievalSingleRoundPostGameConditionWidget.OnWin_Attackers
// (Event, Public, BlueprintEvent)

void URetrievalSingleRoundPostGameConditionWidget::OnWin_Attackers()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RetrievalSingleRoundPostGameConditionWidget.OnWin_Attackers");

	URetrievalSingleRoundPostGameConditionWidget_OnWin_Attackers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.RetrievalSingleRoundPostGameConditionWidget.OnLoss_Defenders
// (Event, Public, BlueprintEvent)

void URetrievalSingleRoundPostGameConditionWidget::OnLoss_Defenders()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RetrievalSingleRoundPostGameConditionWidget.OnLoss_Defenders");

	URetrievalSingleRoundPostGameConditionWidget_OnLoss_Defenders_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.RetrievalSingleRoundPostGameConditionWidget.OnLoss_Attackers
// (Event, Public, BlueprintEvent)

void URetrievalSingleRoundPostGameConditionWidget::OnLoss_Attackers()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RetrievalSingleRoundPostGameConditionWidget.OnLoss_Attackers");

	URetrievalSingleRoundPostGameConditionWidget_OnLoss_Attackers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.RobogoreGameInstance.UnlockAllMissions
// (Final, Exec, Native, Public, BlueprintCallable)

void URobogoreGameInstance::UnlockAllMissions()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RobogoreGameInstance.UnlockAllMissions");

	URobogoreGameInstance_UnlockAllMissions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.RobogoreGameInstance.TakeOrthographicScreenShot
// (Final, Exec, Native, Public)

void URobogoreGameInstance::TakeOrthographicScreenShot()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RobogoreGameInstance.TakeOrthographicScreenShot");

	URobogoreGameInstance_TakeOrthographicScreenShot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.RobogoreGameInstance.SetForcePCControls
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          Force                          (Parm, ZeroConstructor, IsPlainOldData)

void URobogoreGameInstance::SetForcePCControls(bool* Force)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RobogoreGameInstance.SetForcePCControls");

	URobogoreGameInstance_SetForcePCControls_Params params;
	params.Force = Force;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.RobogoreGameInstance.PrintMissionProgress
// (Final, Native, Public, BlueprintCallable)

void URobogoreGameInstance::PrintMissionProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RobogoreGameInstance.PrintMissionProgress");

	URobogoreGameInstance_PrintMissionProgress_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.RobogoreGameInstance.OpenTutorialMap
// (Final, Native, Public, BlueprintCallable)

void URobogoreGameInstance::OpenTutorialMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RobogoreGameInstance.OpenTutorialMap");

	URobogoreGameInstance_OpenTutorialMap_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.RobogoreGameInstance.OpenLevel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  Level                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void URobogoreGameInstance::OpenLevel(struct FName* Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RobogoreGameInstance.OpenLevel");

	URobogoreGameInstance_OpenLevel_Params params;
	params.Level = Level;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.RobogoreGameInstance.OpenCurrentMission
// (Final, Native, Public, BlueprintCallable)

void URobogoreGameInstance::OpenCurrentMission()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RobogoreGameInstance.OpenCurrentMission");

	URobogoreGameInstance_OpenCurrentMission_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.RobogoreGameInstance.OpenCurrentGarage
// (Final, Native, Public, BlueprintCallable)

void URobogoreGameInstance::OpenCurrentGarage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RobogoreGameInstance.OpenCurrentGarage");

	URobogoreGameInstance_OpenCurrentGarage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.RobogoreGameInstance.GetViewportForcePCControls
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool URobogoreGameInstance::GetViewportForcePCControls()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RobogoreGameInstance.GetViewportForcePCControls");

	URobogoreGameInstance_GetViewportForcePCControls_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.RobogoreGameInstance.GetStatsManager
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class URobogoreStatManager*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class URobogoreStatManager* URobogoreGameInstance::GetStatsManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RobogoreGameInstance.GetStatsManager");

	URobogoreGameInstance_GetStatsManager_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.RobogoreGameInstance.GetPlayerVault
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class URobogorePlayerVault*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class URobogorePlayerVault* URobogoreGameInstance::GetPlayerVault()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RobogoreGameInstance.GetPlayerVault");

	URobogoreGameInstance_GetPlayerVault_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.RobogoreGameInstance.GetPlayerProfile
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class URobogorePlayerProfile*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class URobogorePlayerProfile* URobogoreGameInstance::GetPlayerProfile()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RobogoreGameInstance.GetPlayerProfile");

	URobogoreGameInstance_GetPlayerProfile_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.RobogoreGameInstance.GetPlayerChatLog
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPersistentPlayerChatLog* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UPersistentPlayerChatLog* URobogoreGameInstance::GetPlayerChatLog()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RobogoreGameInstance.GetPlayerChatLog");

	URobogoreGameInstance_GetPlayerChatLog_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.RobogoreGameInstance.GetOnline
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class URobogoreOnline*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class URobogoreOnline* URobogoreGameInstance::GetOnline()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RobogoreGameInstance.GetOnline");

	URobogoreGameInstance_GetOnline_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.RobogoreGameInstance.GetGameLevelTable
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UDataTable*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UDataTable* URobogoreGameInstance::GetGameLevelTable()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RobogoreGameInstance.GetGameLevelTable");

	URobogoreGameInstance_GetGameLevelTable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.RobogoreGameInstance.GetEffectInstancingManager
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UEffectInstancingManager* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UEffectInstancingManager* URobogoreGameInstance::GetEffectInstancingManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RobogoreGameInstance.GetEffectInstancingManager");

	URobogoreGameInstance_GetEffectInstancingManager_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.RobogoreGameInstance.GetDestructibleManager
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDestructibleManager*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UDestructibleManager* URobogoreGameInstance::GetDestructibleManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RobogoreGameInstance.GetDestructibleManager");

	URobogoreGameInstance_GetDestructibleManager_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.RobogoreGameInstance.GetDecalManager
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDecalManager*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UDecalManager* URobogoreGameInstance::GetDecalManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RobogoreGameInstance.GetDecalManager");

	URobogoreGameInstance_GetDecalManager_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.RobogoreGameInstance.GetColorManager
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UColorManager*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UColorManager* URobogoreGameInstance::GetColorManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RobogoreGameInstance.GetColorManager");

	URobogoreGameInstance_GetColorManager_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.RobogoreGameInstance.AdvanceMissionProgression
// (Final, Native, Public, BlueprintCallable)

void URobogoreGameInstance::AdvanceMissionProgression()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RobogoreGameInstance.AdvanceMissionProgression");

	URobogoreGameInstance_AdvanceMissionProgression_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.RobogoreOnline.Get
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject**                Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class URobogoreOnline*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class URobogoreOnline* URobogoreOnline::STATIC_Get(class UObject** Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RobogoreOnline.Get");

	URobogoreOnline_Get_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.RobogoreRelationshipImageWidget.UpdateRelationshipColor
// (Final, Native, Public, BlueprintCallable)

void URobogoreRelationshipImageWidget::UpdateRelationshipColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RobogoreRelationshipImageWidget.UpdateRelationshipColor");

	URobogoreRelationshipImageWidget_UpdateRelationshipColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.RobogoreStatics.SetUnitThreatLevels
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject**                WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)
// TMap<struct FGameplayTag, float>* baseThreatLevels               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class APlayerController**      Controller                     (Parm, ZeroConstructor, IsPlainOldData)

void URobogoreStatics::STATIC_SetUnitThreatLevels(class UObject** WorldContext, TMap<struct FGameplayTag, float>* baseThreatLevels, class APlayerController** Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RobogoreStatics.SetUnitThreatLevels");

	URobogoreStatics_SetUnitThreatLevels_Params params;
	params.WorldContext = WorldContext;
	params.baseThreatLevels = baseThreatLevels;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.RobogoreStatics.SetMusicParams
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject**                WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)
// TMap<EeDynamicMusicLevel, struct FDynamicMusicLevelParams>* Params                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class APlayerController**      Controller                     (Parm, ZeroConstructor, IsPlainOldData)

void URobogoreStatics::STATIC_SetMusicParams(class UObject** WorldContext, TMap<EeDynamicMusicLevel, struct FDynamicMusicLevelParams>* Params, class APlayerController** Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RobogoreStatics.SetMusicParams");

	URobogoreStatics_SetMusicParams_Params params;
	params.WorldContext = WorldContext;
	params.Params = Params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.RobogoreStatics.SetCanAffectNavigation
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UActorComponent**        Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          canAffectNavigation            (Parm, ZeroConstructor, IsPlainOldData)

void URobogoreStatics::STATIC_SetCanAffectNavigation(class UActorComponent** Component, bool* canAffectNavigation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RobogoreStatics.SetCanAffectNavigation");

	URobogoreStatics_SetCanAffectNavigation_Params params;
	params.Component = Component;
	params.canAffectNavigation = canAffectNavigation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.RobogoreStatics.PostGlobalMusicEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject**                WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)
// class UAkAudioEvent**          akEvent                        (Parm, ZeroConstructor, IsPlainOldData)

void URobogoreStatics::STATIC_PostGlobalMusicEvent(class UObject** WorldContext, class UAkAudioEvent** akEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RobogoreStatics.PostGlobalMusicEvent");

	URobogoreStatics_PostGlobalMusicEvent_Params params;
	params.WorldContext = WorldContext;
	params.akEvent = akEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.RobogoreStatics.IsGameMultiplayer
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject**                WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool URobogoreStatics::STATIC_IsGameMultiplayer(class UObject** WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RobogoreStatics.IsGameMultiplayer");

	URobogoreStatics_IsGameMultiplayer_Params params;
	params.WorldContext = WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.RobogoreStatics.IsActorAlive
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor**                 Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool URobogoreStatics::STATIC_IsActorAlive(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RobogoreStatics.IsActorAlive");

	URobogoreStatics_IsActorAlive_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.RobogoreStatics.GoToMainMenu
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject**                WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)

void URobogoreStatics::STATIC_GoToMainMenu(class UObject** WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RobogoreStatics.GoToMainMenu");

	URobogoreStatics_GoToMainMenu_Params params;
	params.WorldContext = WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.RobogoreStatics.GetOwningPlayerController
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor**                 Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APlayerController* URobogoreStatics::STATIC_GetOwningPlayerController(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RobogoreStatics.GetOwningPlayerController");

	URobogoreStatics_GetOwningPlayerController_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.RobogoreStatics.GetDefaultGameMode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject**                WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)
// class AGameModeBase*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AGameModeBase* URobogoreStatics::STATIC_GetDefaultGameMode(class UObject** WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RobogoreStatics.GetDefaultGameMode");

	URobogoreStatics_GetDefaultGameMode_Params params;
	params.WorldContext = WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.RobogoreStatics.FindScreenEdgePosition
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject**                WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                WorldLocation                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector2D*              screenMargin                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FScreenEdgePositionResult ReturnValue                    (Parm, OutParm, ReturnParm)

struct FScreenEdgePositionResult URobogoreStatics::STATIC_FindScreenEdgePosition(class UObject** WorldContext, struct FVector* WorldLocation, struct FVector2D* screenMargin)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RobogoreStatics.FindScreenEdgePosition");

	URobogoreStatics_FindScreenEdgePosition_Params params;
	params.WorldContext = WorldContext;
	params.WorldLocation = WorldLocation;
	params.screenMargin = screenMargin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.RobogoreStatics.CalculateScreenEdgeUIOffset
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D*              screenPos                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UUserWidget**            UserWidget                     (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector2D URobogoreStatics::STATIC_CalculateScreenEdgeUIOffset(struct FVector2D* screenPos, class UUserWidget** UserWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RobogoreStatics.CalculateScreenEdgeUIOffset");

	URobogoreStatics_CalculateScreenEdgeUIOffset_Params params;
	params.screenPos = screenPos;
	params.UserWidget = UserWidget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.RuntimeInventoryComponent.OnRep_Inventory
// (Final, Native, Private)

void URuntimeInventoryComponent::OnRep_Inventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RuntimeInventoryComponent.OnRep_Inventory");

	URuntimeInventoryComponent_OnRep_Inventory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.RuntimeInventoryComponent.NetMulticast_PlayPickupAudio
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private, Const)
// Parameters:
// struct FGameplayTag*           ItemType                       (ConstParm, Parm, ReferenceParm)

void URuntimeInventoryComponent::NetMulticast_PlayPickupAudio(struct FGameplayTag* ItemType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RuntimeInventoryComponent.NetMulticast_PlayPickupAudio");

	URuntimeInventoryComponent_NetMulticast_PlayPickupAudio_Params params;
	params.ItemType = ItemType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.RuntimeInventoryComponent.ItemValueInInventory_BP
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag*           Type                           (ConstParm, Parm, OutParm, ReferenceParm)
// bool*                          useCategory                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int URuntimeInventoryComponent::ItemValueInInventory_BP(struct FGameplayTag* Type, bool* useCategory)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RuntimeInventoryComponent.ItemValueInInventory_BP");

	URuntimeInventoryComponent_ItemValueInInventory_BP_Params params;
	params.Type = Type;
	params.useCategory = useCategory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.RuntimeInventoryComponent.ItemValueInImplicitInventory_BP
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag*           Type                           (ConstParm, Parm, OutParm, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int URuntimeInventoryComponent::ItemValueInImplicitInventory_BP(struct FGameplayTag* Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RuntimeInventoryComponent.ItemValueInImplicitInventory_BP");

	URuntimeInventoryComponent_ItemValueInImplicitInventory_BP_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.RuntimeInventoryComponent.ItemCountInInventory_BP
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag*           Type                           (ConstParm, Parm, OutParm, ReferenceParm)
// bool*                          useCategory                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int URuntimeInventoryComponent::ItemCountInInventory_BP(struct FGameplayTag* Type, bool* useCategory)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RuntimeInventoryComponent.ItemCountInInventory_BP");

	URuntimeInventoryComponent_ItemCountInInventory_BP_Params params;
	params.Type = Type;
	params.useCategory = useCategory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.RuntimeInventoryComponent.ItemCountInImplicitInventory_BP
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag*           Type                           (ConstParm, Parm, OutParm, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int URuntimeInventoryComponent::ItemCountInImplicitInventory_BP(struct FGameplayTag* Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RuntimeInventoryComponent.ItemCountInImplicitInventory_BP");

	URuntimeInventoryComponent_ItemCountInImplicitInventory_BP_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.RuntimeInventoryComponent.HasItemInInventory_BP
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag*           Type                           (ConstParm, Parm, OutParm, ReferenceParm)
// bool*                          useCategory                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool URuntimeInventoryComponent::HasItemInInventory_BP(struct FGameplayTag* Type, bool* useCategory)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.RuntimeInventoryComponent.HasItemInInventory_BP");

	URuntimeInventoryComponent_HasItemInInventory_BP_Params params;
	params.Type = Type;
	params.useCategory = useCategory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.SalvageCollectionUIWidget.OnCollectSalvage
// (Event, Public, BlueprintEvent)

void USalvageCollectionUIWidget::OnCollectSalvage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.SalvageCollectionUIWidget.OnCollectSalvage");

	USalvageCollectionUIWidget_OnCollectSalvage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.SalvageOwnershipComponent.OnRep_SalvageCount
// (Final, Native, Private)

void USalvageOwnershipComponent::OnRep_SalvageCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.SalvageOwnershipComponent.OnRep_SalvageCount");

	USalvageOwnershipComponent_OnRep_SalvageCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.SmartObjectProgressUserWidget.UpdateMoveTo
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         dt                             (Parm, ZeroConstructor, IsPlainOldData)

void USmartObjectProgressUserWidget::UpdateMoveTo(float* dt)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.SmartObjectProgressUserWidget.UpdateMoveTo");

	USmartObjectProgressUserWidget_UpdateMoveTo_Params params;
	params.dt = dt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.SmartObjectProgressUserWidget.UpdateInteraction
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         dt                             (Parm, ZeroConstructor, IsPlainOldData)

void USmartObjectProgressUserWidget::UpdateInteraction(float* dt)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.SmartObjectProgressUserWidget.UpdateInteraction");

	USmartObjectProgressUserWidget_UpdateInteraction_Params params;
	params.dt = dt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.SmartObjectProgressUserWidget.StartMoveTo
// (Event, Public, BlueprintEvent)

void USmartObjectProgressUserWidget::StartMoveTo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.SmartObjectProgressUserWidget.StartMoveTo");

	USmartObjectProgressUserWidget_StartMoveTo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.SmartObjectProgressUserWidget.StartInteraction
// (Event, Public, BlueprintEvent)

void USmartObjectProgressUserWidget::StartInteraction()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.SmartObjectProgressUserWidget.StartInteraction");

	USmartObjectProgressUserWidget_StartInteraction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.SmartObjectProgressUserWidget.SetInteractionLength
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         Len                            (Parm, ZeroConstructor, IsPlainOldData)

void USmartObjectProgressUserWidget::SetInteractionLength(float* Len)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.SmartObjectProgressUserWidget.SetInteractionLength");

	USmartObjectProgressUserWidget_SetInteractionLength_Params params;
	params.Len = Len;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.SmartObjectProgressUserWidget.EndMoveTo
// (Event, Public, BlueprintEvent)

void USmartObjectProgressUserWidget::EndMoveTo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.SmartObjectProgressUserWidget.EndMoveTo");

	USmartObjectProgressUserWidget_EndMoveTo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.SmartObjectProgressUserWidget.CompleteInteraction
// (Event, Public, BlueprintEvent)

void USmartObjectProgressUserWidget::CompleteInteraction()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.SmartObjectProgressUserWidget.CompleteInteraction");

	USmartObjectProgressUserWidget_CompleteInteraction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.SmartObjectProgressUserWidget.CancelInteraction
// (Event, Public, BlueprintEvent)

void USmartObjectProgressUserWidget::CancelInteraction()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.SmartObjectProgressUserWidget.CancelInteraction");

	USmartObjectProgressUserWidget_CancelInteraction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.SaveGameWidget.OnWidgetShowBP
// (Event, Public, BlueprintEvent)

void USaveGameWidget::OnWidgetShowBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.SaveGameWidget.OnWidgetShowBP");

	USaveGameWidget_OnWidgetShowBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.SaveGameWidget.HideWidget
// (Final, Native, Public, BlueprintCallable)

void USaveGameWidget::HideWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.SaveGameWidget.HideWidget");

	USaveGameWidget_HideWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.ScoreboardTileWidget.GetPlayerTeamId
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EeTeamID                       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EeTeamID UScoreboardTileWidget::GetPlayerTeamId()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.ScoreboardTileWidget.GetPlayerTeamId");

	UScoreboardTileWidget_GetPlayerTeamId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.SequenceInteraction.OnSequenceComplete
// (Final, Native, Private)

void USequenceInteraction::OnSequenceComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.SequenceInteraction.OnSequenceComplete");

	USequenceInteraction_OnSequenceComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.SettingsOptionsWidget.EnableBP
// (Event, Protected, BlueprintEvent)

void USettingsOptionsWidget::EnableBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.SettingsOptionsWidget.EnableBP");

	USettingsOptionsWidget_EnableBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.SettingsOptionsWidget.DisableBP
// (Event, Protected, BlueprintEvent)

void USettingsOptionsWidget::DisableBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.SettingsOptionsWidget.DisableBP");

	USettingsOptionsWidget_DisableBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.SettingsAbilityStagingModeOption.OnSettingsUnHovered
// (Event, Protected, BlueprintEvent)

void USettingsAbilityStagingModeOption::OnSettingsUnHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.SettingsAbilityStagingModeOption.OnSettingsUnHovered");

	USettingsAbilityStagingModeOption_OnSettingsUnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.SettingsAbilityStagingModeOption.OnSettingsHovered
// (Event, Protected, BlueprintEvent)

void USettingsAbilityStagingModeOption::OnSettingsHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.SettingsAbilityStagingModeOption.OnSettingsHovered");

	USettingsAbilityStagingModeOption_OnSettingsHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.SettingsAbilityStagingModeOption.OnOptionValueChanged
// (Final, Native, Protected, HasOutParms)
// Parameters:
// int*                           Index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  Text                           (ConstParm, Parm, OutParm, ReferenceParm)

void USettingsAbilityStagingModeOption::OnOptionValueChanged(int* Index, struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.SettingsAbilityStagingModeOption.OnOptionValueChanged");

	USettingsAbilityStagingModeOption_OnOptionValueChanged_Params params;
	params.Index = Index;
	params.Text = Text;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.SettingsAbilityStagingModeOption.OnButtonUnHovered
// (Final, Native, Protected)

void USettingsAbilityStagingModeOption::OnButtonUnHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.SettingsAbilityStagingModeOption.OnButtonUnHovered");

	USettingsAbilityStagingModeOption_OnButtonUnHovered_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.SettingsAbilityStagingModeOption.OnButtonHovered
// (Final, Native, Protected)

void USettingsAbilityStagingModeOption::OnButtonHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.SettingsAbilityStagingModeOption.OnButtonHovered");

	USettingsAbilityStagingModeOption_OnButtonHovered_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.SettingsAnnouncerOption.OnSettingsUnHovered
// (Event, Protected, BlueprintEvent)

void USettingsAnnouncerOption::OnSettingsUnHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.SettingsAnnouncerOption.OnSettingsUnHovered");

	USettingsAnnouncerOption_OnSettingsUnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.SettingsAnnouncerOption.OnSettingsHovered
// (Event, Protected, BlueprintEvent)

void USettingsAnnouncerOption::OnSettingsHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.SettingsAnnouncerOption.OnSettingsHovered");

	USettingsAnnouncerOption_OnSettingsHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.SettingsAnnouncerOption.OnOptionValueChanged
// (Final, Native, Protected, HasOutParms)
// Parameters:
// int*                           Index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  Text                           (ConstParm, Parm, OutParm, ReferenceParm)

void USettingsAnnouncerOption::OnOptionValueChanged(int* Index, struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.SettingsAnnouncerOption.OnOptionValueChanged");

	USettingsAnnouncerOption_OnOptionValueChanged_Params params;
	params.Index = Index;
	params.Text = Text;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.SettingsAnnouncerOption.OnButtonUnHovered
// (Final, Native, Protected)

void USettingsAnnouncerOption::OnButtonUnHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.SettingsAnnouncerOption.OnButtonUnHovered");

	USettingsAnnouncerOption_OnButtonUnHovered_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.SettingsAnnouncerOption.OnButtonHovered
// (Final, Native, Protected)

void USettingsAnnouncerOption::OnButtonHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.SettingsAnnouncerOption.OnButtonHovered");

	USettingsAnnouncerOption_OnButtonHovered_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.SettingsSubMenu.ResetToDefault
// (Native, Protected, BlueprintCallable)

void USettingsSubMenu::ResetToDefault()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.SettingsSubMenu.ResetToDefault");

	USettingsSubMenu_ResetToDefault_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.SettingsBindingSubMenu.DefaultButtonPressed
// (Final, Native, Public)

void USettingsBindingSubMenu::DefaultButtonPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.SettingsBindingSubMenu.DefaultButtonPressed");

	USettingsBindingSubMenu_DefaultButtonPressed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.SettingsBindingSubMenu.AnimateToast
// (Event, Public, BlueprintEvent)

void USettingsBindingSubMenu::AnimateToast()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.SettingsBindingSubMenu.AnimateToast");

	USettingsBindingSubMenu_AnimateToast_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.SettingsControlSchemeOption.OnSettingsUnHovered
// (Event, Protected, BlueprintEvent)

void USettingsControlSchemeOption::OnSettingsUnHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.SettingsControlSchemeOption.OnSettingsUnHovered");

	USettingsControlSchemeOption_OnSettingsUnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.SettingsControlSchemeOption.OnSettingsHovered
// (Event, Protected, BlueprintEvent)

void USettingsControlSchemeOption::OnSettingsHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.SettingsControlSchemeOption.OnSettingsHovered");

	USettingsControlSchemeOption_OnSettingsHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.SettingsControlSchemeOption.OnOptionValueChanged
// (Final, Native, Protected, HasOutParms)
// Parameters:
// int*                           Index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  Text                           (ConstParm, Parm, OutParm, ReferenceParm)

void USettingsControlSchemeOption::OnOptionValueChanged(int* Index, struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.SettingsControlSchemeOption.OnOptionValueChanged");

	USettingsControlSchemeOption_OnOptionValueChanged_Params params;
	params.Index = Index;
	params.Text = Text;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.SettingsControlSchemeOption.OnButtonUnHovered
// (Final, Native, Protected)

void USettingsControlSchemeOption::OnButtonUnHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.SettingsControlSchemeOption.OnButtonUnHovered");

	USettingsControlSchemeOption_OnButtonUnHovered_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.SettingsControlSchemeOption.OnButtonHovered
// (Final, Native, Protected)

void USettingsControlSchemeOption::OnButtonHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.SettingsControlSchemeOption.OnButtonHovered");

	USettingsControlSchemeOption_OnButtonHovered_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.SettingsFrameRateLimitOption.OnSettingsUnHovered
// (Event, Protected, BlueprintEvent)

void USettingsFrameRateLimitOption::OnSettingsUnHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.SettingsFrameRateLimitOption.OnSettingsUnHovered");

	USettingsFrameRateLimitOption_OnSettingsUnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.SettingsFrameRateLimitOption.OnSettingsHovered
// (Event, Protected, BlueprintEvent)

void USettingsFrameRateLimitOption::OnSettingsHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.SettingsFrameRateLimitOption.OnSettingsHovered");

	USettingsFrameRateLimitOption_OnSettingsHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.SettingsFrameRateLimitOption.OnOptionValueChanged
// (Final, Native, Protected, HasOutParms)
// Parameters:
// int*                           Index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  Text                           (ConstParm, Parm, OutParm, ReferenceParm)

void USettingsFrameRateLimitOption::OnOptionValueChanged(int* Index, struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.SettingsFrameRateLimitOption.OnOptionValueChanged");

	USettingsFrameRateLimitOption_OnOptionValueChanged_Params params;
	params.Index = Index;
	params.Text = Text;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.SettingsFrameRateLimitOption.OnButtonUnHovered
// (Final, Native, Protected)

void USettingsFrameRateLimitOption::OnButtonUnHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.SettingsFrameRateLimitOption.OnButtonUnHovered");

	USettingsFrameRateLimitOption_OnButtonUnHovered_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.SettingsOptionsSlider.OnValueChanged
// (Native, Protected)
// Parameters:
// float*                         Value                          (Parm, ZeroConstructor, IsPlainOldData)

void USettingsOptionsSlider::OnValueChanged(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.SettingsOptionsSlider.OnValueChanged");

	USettingsOptionsSlider_OnValueChanged_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.SettingsOptionsSlider.OnTextChange
// (Final, Native, Protected, HasOutParms)
// Parameters:
// struct FText*                  Text                           (ConstParm, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>*      commitType                     (Parm, ZeroConstructor, IsPlainOldData)

void USettingsOptionsSlider::OnTextChange(struct FText* Text, TEnumAsByte<ETextCommit>* commitType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.SettingsOptionsSlider.OnTextChange");

	USettingsOptionsSlider_OnTextChange_Params params;
	params.Text = Text;
	params.commitType = commitType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.SettingsOptionsSlider.OnSliderUnHovered
// (Final, Native, Protected)

void USettingsOptionsSlider::OnSliderUnHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.SettingsOptionsSlider.OnSliderUnHovered");

	USettingsOptionsSlider_OnSliderUnHovered_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.SettingsOptionsSlider.OnSliderHovered
// (Final, Native, Protected)

void USettingsOptionsSlider::OnSliderHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.SettingsOptionsSlider.OnSliderHovered");

	USettingsOptionsSlider_OnSliderHovered_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.SettingsOptionsSlider.OnSettingsUnHovered
// (Event, Protected, BlueprintEvent)

void USettingsOptionsSlider::OnSettingsUnHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.SettingsOptionsSlider.OnSettingsUnHovered");

	USettingsOptionsSlider_OnSettingsUnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.SettingsOptionsSlider.OnSettingsHovered
// (Event, Protected, BlueprintEvent)

void USettingsOptionsSlider::OnSettingsHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.SettingsOptionsSlider.OnSettingsHovered");

	USettingsOptionsSlider_OnSettingsHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.SettingsGraphicsOption.OnSettingsUnHovered
// (Event, Protected, BlueprintEvent)

void USettingsGraphicsOption::OnSettingsUnHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.SettingsGraphicsOption.OnSettingsUnHovered");

	USettingsGraphicsOption_OnSettingsUnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.SettingsGraphicsOption.OnSettingsHovered
// (Event, Protected, BlueprintEvent)

void USettingsGraphicsOption::OnSettingsHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.SettingsGraphicsOption.OnSettingsHovered");

	USettingsGraphicsOption_OnSettingsHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.SettingsGraphicsOption.OnOptionValueChanged
// (Final, Native, Protected, HasOutParms)
// Parameters:
// int*                           Index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  Text                           (ConstParm, Parm, OutParm, ReferenceParm)

void USettingsGraphicsOption::OnOptionValueChanged(int* Index, struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.SettingsGraphicsOption.OnOptionValueChanged");

	USettingsGraphicsOption_OnOptionValueChanged_Params params;
	params.Index = Index;
	params.Text = Text;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.SettingsGraphicsOption.OnButtonUnHovered
// (Final, Native, Protected)

void USettingsGraphicsOption::OnButtonUnHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.SettingsGraphicsOption.OnButtonUnHovered");

	USettingsGraphicsOption_OnButtonUnHovered_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.SettingsGraphicsOption.OnButtonHovered
// (Final, Native, Protected)

void USettingsGraphicsOption::OnButtonHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.SettingsGraphicsOption.OnButtonHovered");

	USettingsGraphicsOption_OnButtonHovered_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.SettingsOptionsBoolean.OnValueChanged
// (Final, Native, Protected, HasOutParms)
// Parameters:
// int*                           Index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  Text                           (ConstParm, Parm, OutParm, ReferenceParm)

void USettingsOptionsBoolean::OnValueChanged(int* Index, struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.SettingsOptionsBoolean.OnValueChanged");

	USettingsOptionsBoolean_OnValueChanged_Params params;
	params.Index = Index;
	params.Text = Text;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.SettingsOptionsBoolean.OnSettingsUnHovered
// (Event, Protected, BlueprintEvent)

void USettingsOptionsBoolean::OnSettingsUnHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.SettingsOptionsBoolean.OnSettingsUnHovered");

	USettingsOptionsBoolean_OnSettingsUnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.SettingsOptionsBoolean.OnSettingsHovered
// (Event, Protected, BlueprintEvent)

void USettingsOptionsBoolean::OnSettingsHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.SettingsOptionsBoolean.OnSettingsHovered");

	USettingsOptionsBoolean_OnSettingsHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.SettingsOptionsBoolean.OnButtonUnHovered
// (Final, Native, Protected)

void USettingsOptionsBoolean::OnButtonUnHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.SettingsOptionsBoolean.OnButtonUnHovered");

	USettingsOptionsBoolean_OnButtonUnHovered_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.SettingsOptionsBoolean.OnButtonHovered
// (Final, Native, Protected)

void USettingsOptionsBoolean::OnButtonHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.SettingsOptionsBoolean.OnButtonHovered");

	USettingsOptionsBoolean_OnButtonHovered_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.SettingsKeyBindingOption.OnWidgetsUnhovered
// (Final, Native, Protected)

void USettingsKeyBindingOption::OnWidgetsUnhovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.SettingsKeyBindingOption.OnWidgetsUnhovered");

	USettingsKeyBindingOption_OnWidgetsUnhovered_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.SettingsKeyBindingOption.OnUnBindButtonPressed
// (Final, Native, Public)

void USettingsKeyBindingOption::OnUnBindButtonPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.SettingsKeyBindingOption.OnUnBindButtonPressed");

	USettingsKeyBindingOption_OnUnBindButtonPressed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.SettingsKeyBindingOption.OnSettingsUnHovered
// (Event, Protected, BlueprintEvent)

void USettingsKeyBindingOption::OnSettingsUnHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.SettingsKeyBindingOption.OnSettingsUnHovered");

	USettingsKeyBindingOption_OnSettingsUnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.SettingsKeyBindingOption.OnSettingsHovered
// (Event, Protected, BlueprintEvent)

void USettingsKeyBindingOption::OnSettingsHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.SettingsKeyBindingOption.OnSettingsHovered");

	USettingsKeyBindingOption_OnSettingsHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.SettingsOptionsBox.OnOpenButtonPressed
// (Final, Native, Protected)

void USettingsOptionsBox::OnOpenButtonPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.SettingsOptionsBox.OnOpenButtonPressed");

	USettingsOptionsBox_OnOpenButtonPressed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.SettingsResolutionOption.OnSettingsUnHovered
// (Event, Public, BlueprintEvent)

void USettingsResolutionOption::OnSettingsUnHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.SettingsResolutionOption.OnSettingsUnHovered");

	USettingsResolutionOption_OnSettingsUnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.SettingsResolutionOption.OnSettingsHovered
// (Event, Public, BlueprintEvent)

void USettingsResolutionOption::OnSettingsHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.SettingsResolutionOption.OnSettingsHovered");

	USettingsResolutionOption_OnSettingsHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.SettingsResolutionOption.OnOptionValueChanged
// (Final, Native, Public, HasOutParms)
// Parameters:
// int*                           Index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  Text                           (ConstParm, Parm, OutParm, ReferenceParm)

void USettingsResolutionOption::OnOptionValueChanged(int* Index, struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.SettingsResolutionOption.OnOptionValueChanged");

	USettingsResolutionOption_OnOptionValueChanged_Params params;
	params.Index = Index;
	params.Text = Text;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.SettingsResolutionOption.OnButtonUnHovered
// (Final, Native, Public)

void USettingsResolutionOption::OnButtonUnHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.SettingsResolutionOption.OnButtonUnHovered");

	USettingsResolutionOption_OnButtonUnHovered_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.SettingsResolutionOption.OnButtonHovered
// (Final, Native, Public)

void USettingsResolutionOption::OnButtonHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.SettingsResolutionOption.OnButtonHovered");

	USettingsResolutionOption_OnButtonHovered_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.SettingsWindowTypeOption.OnSettingsUnHovered
// (Event, Protected, BlueprintEvent)

void USettingsWindowTypeOption::OnSettingsUnHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.SettingsWindowTypeOption.OnSettingsUnHovered");

	USettingsWindowTypeOption_OnSettingsUnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.SettingsWindowTypeOption.OnSettingsHovered
// (Event, Protected, BlueprintEvent)

void USettingsWindowTypeOption::OnSettingsHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.SettingsWindowTypeOption.OnSettingsHovered");

	USettingsWindowTypeOption_OnSettingsHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.SettingsWindowTypeOption.OnOptionValueChanged
// (Final, Native, Protected, HasOutParms)
// Parameters:
// int*                           Index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  Text                           (ConstParm, Parm, OutParm, ReferenceParm)

void USettingsWindowTypeOption::OnOptionValueChanged(int* Index, struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.SettingsWindowTypeOption.OnOptionValueChanged");

	USettingsWindowTypeOption_OnOptionValueChanged_Params params;
	params.Index = Index;
	params.Text = Text;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.SettingsWindowTypeOption.OnButtonUnHovered
// (Final, Native, Protected)

void USettingsWindowTypeOption::OnButtonUnHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.SettingsWindowTypeOption.OnButtonUnHovered");

	USettingsWindowTypeOption_OnButtonUnHovered_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.SpawnActorAtComponent.Spawn
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* USpawnActorAtComponent::Spawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.SpawnActorAtComponent.Spawn");

	USpawnActorAtComponent_Spawn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.SpawnActorAtComponent.Multicast_Spawn
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)

void USpawnActorAtComponent::Multicast_Spawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.SpawnActorAtComponent.Multicast_Spawn");

	USpawnActorAtComponent_Multicast_Spawn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.SpawnController.IsWaiting
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ASpawnController::IsWaiting()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.SpawnController.IsWaiting");

	ASpawnController_IsWaiting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.SpawnController.IsComplete
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ASpawnController::IsComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.SpawnController.IsComplete");

	ASpawnController_IsComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.SpawnController.EndSpawn
// (Final, Native, Public, BlueprintCallable)

void ASpawnController::EndSpawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.SpawnController.EndSpawn");

	ASpawnController_EndSpawn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.SpawnController.BeginSpawn
// (Final, Native, Public, BlueprintCallable)

void ASpawnController::BeginSpawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.SpawnController.BeginSpawn");

	ASpawnController_BeginSpawn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.SpawnController.AdvanceSpawn
// (Final, Native, Public, BlueprintCallable)

void ASpawnController::AdvanceSpawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.SpawnController.AdvanceSpawn");

	ASpawnController_AdvanceSpawn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.Spawn_Squad.AddSpawnSquadActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ASpawnSquadActor**       SpawnSquadActor                (Parm, ZeroConstructor, IsPlainOldData)

void USpawn_Squad::AddSpawnSquadActor(class ASpawnSquadActor** SpawnSquadActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.Spawn_Squad.AddSpawnSquadActor");

	USpawn_Squad_AddSpawnSquadActor_Params params;
	params.SpawnSquadActor = SpawnSquadActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.Spawn_Squad.AddPathGraphActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APathGraphActor**        PathGraphActor                 (Parm, ZeroConstructor, IsPlainOldData)

void USpawn_Squad::AddPathGraphActor(class APathGraphActor** PathGraphActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.Spawn_Squad.AddPathGraphActor");

	USpawn_Squad_AddPathGraphActor_Params params;
	params.PathGraphActor = PathGraphActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.Spawn_Squad.AddDefendAreaActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ADefendAreaActor**       DefendAreaActor                (Parm, ZeroConstructor, IsPlainOldData)

void USpawn_Squad::AddDefendAreaActor(class ADefendAreaActor** DefendAreaActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.Spawn_Squad.AddDefendAreaActor");

	USpawn_Squad_AddDefendAreaActor_Params params;
	params.DefendAreaActor = DefendAreaActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.SplashScreenWidget.SplashComplete
// (Final, Native, Public, BlueprintCallable)

void USplashScreenWidget::SplashComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.SplashScreenWidget.SplashComplete");

	USplashScreenWidget_SplashComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.SplashScreenWidget.SkipCurrentSplash
// (Event, Public, BlueprintEvent)

void USplashScreenWidget::SkipCurrentSplash()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.SplashScreenWidget.SkipCurrentSplash");

	USplashScreenWidget_SkipCurrentSplash_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.SquadActor.OnRep_SquadContainer
// (Final, Native, Private)

void ASquadActor::OnRep_SquadContainer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.SquadActor.OnRep_SquadContainer");

	ASquadActor_OnRep_SquadContainer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.SquadActor.GetAllUnitInstances
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class AUnitBaseActor*>  squadInstances                 (Parm, OutParm, ZeroConstructor)

void ASquadActor::GetAllUnitInstances(TArray<class AUnitBaseActor*>* squadInstances)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.SquadActor.GetAllUnitInstances");

	ASquadActor_GetAllUnitInstances_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (squadInstances != nullptr)
		*squadInstances = params.squadInstances;
}


// Function Robogore.SquadHUDWidget.OnSquadOrderStatusChanged_BP
// (Event, Public, BlueprintEvent)
// Parameters:
// EeSquadHUDOrderStatus*         newStatus                      (Parm, ZeroConstructor, IsPlainOldData)

void USquadHUDWidget::OnSquadOrderStatusChanged_BP(EeSquadHUDOrderStatus* newStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.SquadHUDWidget.OnSquadOrderStatusChanged_BP");

	USquadHUDWidget_OnSquadOrderStatusChanged_BP_Params params;
	params.newStatus = newStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.SquadHUDWidget.OnSquadMembersHUDModified_BP
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           mainSquadMembersCount          (Parm, ZeroConstructor, IsPlainOldData)

void USquadHUDWidget::OnSquadMembersHUDModified_BP(int* mainSquadMembersCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.SquadHUDWidget.OnSquadMembersHUDModified_BP");

	USquadHUDWidget_OnSquadMembersHUDModified_BP_Params params;
	params.mainSquadMembersCount = mainSquadMembersCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.SquadMemberHUDWidget.OnInvalidInputPressed_BP
// (Event, Public, BlueprintEvent)

void USquadMemberHUDWidget::OnInvalidInputPressed_BP()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.SquadMemberHUDWidget.OnInvalidInputPressed_BP");

	USquadMemberHUDWidget_OnInvalidInputPressed_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.SquadMemberHUDWidget.OnInputResponseCapableChanged_BP
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          hasInput                       (Parm, ZeroConstructor, IsPlainOldData)

void USquadMemberHUDWidget::OnInputResponseCapableChanged_BP(bool* hasInput)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.SquadMemberHUDWidget.OnInputResponseCapableChanged_BP");

	USquadMemberHUDWidget_OnInputResponseCapableChanged_BP_Params params;
	params.hasInput = hasInput;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.SquadMemberHUDWidget.OnAbilityStagingEnd_BP
// (Event, Public, BlueprintEvent)

void USquadMemberHUDWidget::OnAbilityStagingEnd_BP()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.SquadMemberHUDWidget.OnAbilityStagingEnd_BP");

	USquadMemberHUDWidget_OnAbilityStagingEnd_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.SquadMemberHUDWidget.OnAbilityStagingCancelled_BP
// (Event, Public, BlueprintEvent)

void USquadMemberHUDWidget::OnAbilityStagingCancelled_BP()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.SquadMemberHUDWidget.OnAbilityStagingCancelled_BP");

	USquadMemberHUDWidget_OnAbilityStagingCancelled_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.SquadMemberHUDWidget.OnAbilityStagingBegin_BP
// (Event, Public, BlueprintEvent)

void USquadMemberHUDWidget::OnAbilityStagingBegin_BP()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.SquadMemberHUDWidget.OnAbilityStagingBegin_BP");

	USquadMemberHUDWidget_OnAbilityStagingBegin_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.SquadMemberHUDWidget.OnAbilityActivated_BP
// (Event, Public, BlueprintEvent)

void USquadMemberHUDWidget::OnAbilityActivated_BP()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.SquadMemberHUDWidget.OnAbilityActivated_BP");

	USquadMemberHUDWidget_OnAbilityActivated_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.StartMenu.ShowRequiredWidgets
// (Event, Protected, BlueprintEvent)

void UStartMenu::ShowRequiredWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.StartMenu.ShowRequiredWidgets");

	UStartMenu_ShowRequiredWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.StartMenu.OnEULAAccept
// (Final, Native, Protected)

void UStartMenu::OnEULAAccept()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.StartMenu.OnEULAAccept");

	UStartMenu_OnEULAAccept_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.StartMenu.DoneWithRequiredWidgets
// (Final, Native, Protected, BlueprintCallable)

void UStartMenu::DoneWithRequiredWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.StartMenu.DoneWithRequiredWidgets");

	UStartMenu_DoneWithRequiredWidgets_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.WeaponAbility.Server_SetWeaponTarget
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// class AActor**                 aimTarget                      (Parm, ZeroConstructor, IsPlainOldData)

void AWeaponAbility::Server_SetWeaponTarget(class AActor** aimTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.WeaponAbility.Server_SetWeaponTarget");

	AWeaponAbility_Server_SetWeaponTarget_Params params;
	params.aimTarget = aimTarget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.WeaponAbility.Server_ApplyAimAssistConfig
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// bool*                          useZoomConfig                  (Parm, ZeroConstructor, IsPlainOldData)

void AWeaponAbility::Server_ApplyAimAssistConfig(bool* useZoomConfig)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.WeaponAbility.Server_ApplyAimAssistConfig");

	AWeaponAbility_Server_ApplyAimAssistConfig_Params params;
	params.useZoomConfig = useZoomConfig;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.WeaponAbility.OnWeaponFireCallback
// (Final, Native, Private)

void AWeaponAbility::OnWeaponFireCallback()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.WeaponAbility.OnWeaponFireCallback");

	AWeaponAbility_OnWeaponFireCallback_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.WeaponAbility.OnRep_AttachedWeapon
// (Final, Native, Private)

void AWeaponAbility::OnRep_AttachedWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.WeaponAbility.OnRep_AttachedWeapon");

	AWeaponAbility_OnRep_AttachedWeapon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.WeaponAbility.IsWithinMaxRange
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWeaponAbility::IsWithinMaxRange()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.WeaponAbility.IsWithinMaxRange");

	AWeaponAbility_IsWithinMaxRange_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.WeaponAbility.IsWeaponDisabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWeaponAbility::IsWeaponDisabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.WeaponAbility.IsWeaponDisabled");

	AWeaponAbility_IsWeaponDisabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.WeaponAbility.IsReloading
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWeaponAbility::IsReloading()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.WeaponAbility.IsReloading");

	AWeaponAbility_IsReloading_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.WeaponAbility.IsAlternateAbility
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWeaponAbility::IsAlternateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.WeaponAbility.IsAlternateAbility");

	AWeaponAbility_IsAlternateAbility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.WeaponAbility.GetTotalAmmoCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AWeaponAbility::GetTotalAmmoCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.WeaponAbility.GetTotalAmmoCount");

	AWeaponAbility_GetTotalAmmoCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.WeaponAbility.GetReloadPercentage
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AWeaponAbility::GetReloadPercentage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.WeaponAbility.GetReloadPercentage");

	AWeaponAbility_GetReloadPercentage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.WeaponAbility.GetRegenTotalPercentage
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AWeaponAbility::GetRegenTotalPercentage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.WeaponAbility.GetRegenTotalPercentage");

	AWeaponAbility_GetRegenTotalPercentage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.WeaponAbility.GetRegenTimeRemainingTotal
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AWeaponAbility::GetRegenTimeRemainingTotal()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.WeaponAbility.GetRegenTimeRemainingTotal");

	AWeaponAbility_GetRegenTimeRemainingTotal_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.WeaponAbility.GetRegenTimeRemainingForNextRound
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AWeaponAbility::GetRegenTimeRemainingForNextRound()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.WeaponAbility.GetRegenTimeRemainingForNextRound");

	AWeaponAbility_GetRegenTimeRemainingForNextRound_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.WeaponAbility.GetRegenPercentageForNextRound
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AWeaponAbility::GetRegenPercentageForNextRound()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.WeaponAbility.GetRegenPercentageForNextRound");

	AWeaponAbility_GetRegenPercentageForNextRound_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.WeaponAbility.GetDamageFalloffToTarget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AWeaponAbility::GetDamageFalloffToTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.WeaponAbility.GetDamageFalloffToTarget");

	AWeaponAbility_GetDamageFalloffToTarget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.WeaponAbility.GetAttachedWeapon
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ARangedWeapon*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ARangedWeapon* AWeaponAbility::GetAttachedWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.WeaponAbility.GetAttachedWeapon");

	AWeaponAbility_GetAttachedWeapon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.WeaponAbility.GetAmmoCountInMagazine
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AWeaponAbility::GetAmmoCountInMagazine()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.WeaponAbility.GetAmmoCountInMagazine");

	AWeaponAbility_GetAmmoCountInMagazine_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.WeaponAbility.CanRegenerateAmmo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWeaponAbility::CanRegenerateAmmo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.WeaponAbility.CanRegenerateAmmo");

	AWeaponAbility_CanRegenerateAmmo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.StickyGrendadeAbility.Server_DetonateStickyGrenades
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)

void AStickyGrendadeAbility::Server_DetonateStickyGrenades()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.StickyGrendadeAbility.Server_DetonateStickyGrenades");

	AStickyGrendadeAbility_Server_DetonateStickyGrenades_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.WeaponAbilityHUDWidget.BP_OnDisabledStatusChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          Disabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponAbilityHUDWidget::BP_OnDisabledStatusChanged(bool* Disabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.WeaponAbilityHUDWidget.BP_OnDisabledStatusChanged");

	UWeaponAbilityHUDWidget_BP_OnDisabledStatusChanged_Params params;
	params.Disabled = Disabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.WeaponAbilityHUDWidget.BP_OnActiveStatusChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          IsActive                       (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponAbilityHUDWidget::BP_OnActiveStatusChanged(bool* IsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.WeaponAbilityHUDWidget.BP_OnActiveStatusChanged");

	UWeaponAbilityHUDWidget_BP_OnActiveStatusChanged_Params params;
	params.IsActive = IsActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.StickyGrenadesAbilityHUDBottomWidget.GetActiveStickyCount
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UStickyGrenadesAbilityHUDBottomWidget::GetActiveStickyCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.StickyGrenadesAbilityHUDBottomWidget.GetActiveStickyCount");

	UStickyGrenadesAbilityHUDBottomWidget_GetActiveStickyCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.TaggableActorManager.RemoveCustomTags
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor**                 Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>*          Tags                           (Parm, ZeroConstructor)

void UTaggableActorManager::STATIC_RemoveCustomTags(class AActor** Actor, TArray<struct FName>* Tags)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.TaggableActorManager.RemoveCustomTags");

	UTaggableActorManager_RemoveCustomTags_Params params;
	params.Actor = Actor;
	params.Tags = Tags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.TaggableActorManager.RemoveCustomTag
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor**                 Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  Tag                            (Parm, ZeroConstructor, IsPlainOldData)

void UTaggableActorManager::STATIC_RemoveCustomTag(class AActor** Actor, struct FName* Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.TaggableActorManager.RemoveCustomTag");

	UTaggableActorManager_RemoveCustomTag_Params params;
	params.Actor = Actor;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.TaggableActorManager.ContainsCustomTag
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor**                 Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  Tag                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTaggableActorManager::STATIC_ContainsCustomTag(class AActor** Actor, struct FName* Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.TaggableActorManager.ContainsCustomTag");

	UTaggableActorManager_ContainsCustomTag_Params params;
	params.Actor = Actor;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.TaggableActorManager.ContainsAnyCustomTags
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor**                 Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>*          Tags                           (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTaggableActorManager::STATIC_ContainsAnyCustomTags(class AActor** Actor, TArray<struct FName>* Tags)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.TaggableActorManager.ContainsAnyCustomTags");

	UTaggableActorManager_ContainsAnyCustomTags_Params params;
	params.Actor = Actor;
	params.Tags = Tags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.TaggableActorManager.AddCustomTags
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor**                 Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>*          Tags                           (Parm, ZeroConstructor)

void UTaggableActorManager::STATIC_AddCustomTags(class AActor** Actor, TArray<struct FName>* Tags)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.TaggableActorManager.AddCustomTags");

	UTaggableActorManager_AddCustomTags_Params params;
	params.Actor = Actor;
	params.Tags = Tags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.TaggableActorManager.AddCustomTag
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor**                 Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  Tag                            (Parm, ZeroConstructor, IsPlainOldData)

void UTaggableActorManager::STATIC_AddCustomTag(class AActor** Actor, struct FName* Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.TaggableActorManager.AddCustomTag");

	UTaggableActorManager_AddCustomTag_Params params;
	params.Actor = Actor;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.TargetNavLocatorInterface.GetNavLocator
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UTargetNavLocatorInterface::GetNavLocator()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.TargetNavLocatorInterface.GetNavLocator");

	UTargetNavLocatorInterface_GetNavLocator_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.TCControlPointHUDWidget.SetNumberOfFriendliesOnPoint
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           Count                          (Parm, ZeroConstructor, IsPlainOldData)

void UTCControlPointHUDWidget::SetNumberOfFriendliesOnPoint(int* Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.TCControlPointHUDWidget.SetNumberOfFriendliesOnPoint");

	UTCControlPointHUDWidget_SetNumberOfFriendliesOnPoint_Params params;
	params.Count = Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.TCControlPointHUDWidget.SetNumberOfEnemiesOnPoint
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           Count                          (Parm, ZeroConstructor, IsPlainOldData)

void UTCControlPointHUDWidget::SetNumberOfEnemiesOnPoint(int* Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.TCControlPointHUDWidget.SetNumberOfEnemiesOnPoint");

	UTCControlPointHUDWidget_SetNumberOfEnemiesOnPoint_Params params;
	params.Count = Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.TCControlPointHUDWidget.SetCriticalActorRatio
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         Ratio                          (Parm, ZeroConstructor, IsPlainOldData)

void UTCControlPointHUDWidget::SetCriticalActorRatio(float* Ratio)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.TCControlPointHUDWidget.SetCriticalActorRatio");

	UTCControlPointHUDWidget_SetCriticalActorRatio_Params params;
	params.Ratio = Ratio;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.TCControlPointHUDWidget.SetCaptureRatio
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         Ratio                          (Parm, ZeroConstructor, IsPlainOldData)

void UTCControlPointHUDWidget::SetCaptureRatio(float* Ratio)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.TCControlPointHUDWidget.SetCaptureRatio");

	UTCControlPointHUDWidget_SetCaptureRatio_Params params;
	params.Ratio = Ratio;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.TCControlPointHUDWidget.SetCaptureBarColor
// (Event, Public, HasDefaults, BlueprintEvent)
// Parameters:
// struct FLinearColor*           Color                          (Parm, ZeroConstructor, IsPlainOldData)

void UTCControlPointHUDWidget::SetCaptureBarColor(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.TCControlPointHUDWidget.SetCaptureBarColor");

	UTCControlPointHUDWidget_SetCaptureBarColor_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.TCControlPointHUDWidget.OnVacant
// (Event, Public, BlueprintEvent)

void UTCControlPointHUDWidget::OnVacant()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.TCControlPointHUDWidget.OnVacant");

	UTCControlPointHUDWidget_OnVacant_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.TCControlPointHUDWidget.OnTookDamageStart
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          isPointOwnedByFriendly         (Parm, ZeroConstructor, IsPlainOldData)

void UTCControlPointHUDWidget::OnTookDamageStart(bool* isPointOwnedByFriendly)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.TCControlPointHUDWidget.OnTookDamageStart");

	UTCControlPointHUDWidget_OnTookDamageStart_Params params;
	params.isPointOwnedByFriendly = isPointOwnedByFriendly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.TCControlPointHUDWidget.OnTookDamageEnd
// (Event, Public, BlueprintEvent)

void UTCControlPointHUDWidget::OnTookDamageEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.TCControlPointHUDWidget.OnTookDamageEnd");

	UTCControlPointHUDWidget_OnTookDamageEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.TCControlPointHUDWidget.OnStartOfRound
// (Event, Public, BlueprintEvent)

void UTCControlPointHUDWidget::OnStartOfRound()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.TCControlPointHUDWidget.OnStartOfRound");

	UTCControlPointHUDWidget_OnStartOfRound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.TCControlPointHUDWidget.OnOccupiedFriendly
// (Event, Public, BlueprintEvent)

void UTCControlPointHUDWidget::OnOccupiedFriendly()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.TCControlPointHUDWidget.OnOccupiedFriendly");

	UTCControlPointHUDWidget_OnOccupiedFriendly_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.TCControlPointHUDWidget.OnOccupiedEnemy
// (Event, Public, BlueprintEvent)

void UTCControlPointHUDWidget::OnOccupiedEnemy()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.TCControlPointHUDWidget.OnOccupiedEnemy");

	UTCControlPointHUDWidget_OnOccupiedEnemy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.TCControlPointHUDWidget.OnContestingFriendly
// (Event, Public, BlueprintEvent)

void UTCControlPointHUDWidget::OnContestingFriendly()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.TCControlPointHUDWidget.OnContestingFriendly");

	UTCControlPointHUDWidget_OnContestingFriendly_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.TCControlPointHUDWidget.OnContestingEnemy
// (Event, Public, BlueprintEvent)

void UTCControlPointHUDWidget::OnContestingEnemy()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.TCControlPointHUDWidget.OnContestingEnemy");

	UTCControlPointHUDWidget_OnContestingEnemy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.TCControlPointHUDWidget.OnCaptureStartFriendly
// (Event, Public, BlueprintEvent)

void UTCControlPointHUDWidget::OnCaptureStartFriendly()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.TCControlPointHUDWidget.OnCaptureStartFriendly");

	UTCControlPointHUDWidget_OnCaptureStartFriendly_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.TCControlPointHUDWidget.OnCaptureStartEnemy
// (Event, Public, BlueprintEvent)

void UTCControlPointHUDWidget::OnCaptureStartEnemy()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.TCControlPointHUDWidget.OnCaptureStartEnemy");

	UTCControlPointHUDWidget_OnCaptureStartEnemy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.TCControlPointHUDWidget.OnCaptured
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          isPointOwnedByFriendly         (Parm, ZeroConstructor, IsPlainOldData)

void UTCControlPointHUDWidget::OnCaptured(bool* isPointOwnedByFriendly)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.TCControlPointHUDWidget.OnCaptured");

	UTCControlPointHUDWidget_OnCaptured_Params params;
	params.isPointOwnedByFriendly = isPointOwnedByFriendly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.TCGameState.OnRep_TeamScores
// (Final, Native, Private)

void ATCGameState::OnRep_TeamScores()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.TCGameState.OnRep_TeamScores");

	ATCGameState_OnRep_TeamScores_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.TCLivingPlayerOverlayWidget.SetPointInteractVisible
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          Visible                        (Parm, ZeroConstructor, IsPlainOldData)

void UTCLivingPlayerOverlayWidget::SetPointInteractVisible(bool* Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.TCLivingPlayerOverlayWidget.SetPointInteractVisible");

	UTCLivingPlayerOverlayWidget_SetPointInteractVisible_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.TCLivingPlayerOverlayWidget.SetPointInteractState
// (Event, Public, BlueprintEvent)
// Parameters:
// EeCaptureAreaCaptureState*     State                          (Parm, ZeroConstructor, IsPlainOldData)

void UTCLivingPlayerOverlayWidget::SetPointInteractState(EeCaptureAreaCaptureState* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.TCLivingPlayerOverlayWidget.SetPointInteractState");

	UTCLivingPlayerOverlayWidget_SetPointInteractState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.TCLivingPlayerOverlayWidget.SetPointInteractRatio
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         Ratio                          (Parm, ZeroConstructor, IsPlainOldData)

void UTCLivingPlayerOverlayWidget::SetPointInteractRatio(float* Ratio)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.TCLivingPlayerOverlayWidget.SetPointInteractRatio");

	UTCLivingPlayerOverlayWidget_SetPointInteractRatio_Params params;
	params.Ratio = Ratio;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.TCLivingPlayerOverlayWidget.SetPointInteractName
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString*                Name                           (Parm, ZeroConstructor)

void UTCLivingPlayerOverlayWidget::SetPointInteractName(struct FString* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.TCLivingPlayerOverlayWidget.SetPointInteractName");

	UTCLivingPlayerOverlayWidget_SetPointInteractName_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.TCLivingPlayerOverlayWidget.SetPointInteractColor
// (Event, Public, HasDefaults, BlueprintEvent)
// Parameters:
// struct FLinearColor*           Color                          (Parm, ZeroConstructor, IsPlainOldData)

void UTCLivingPlayerOverlayWidget::SetPointInteractColor(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.TCLivingPlayerOverlayWidget.SetPointInteractColor");

	UTCLivingPlayerOverlayWidget_SetPointInteractColor_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.TCLivingPlayerOverlayWidget.OnStartOfRound
// (Event, Public, BlueprintEvent)

void UTCLivingPlayerOverlayWidget::OnStartOfRound()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.TCLivingPlayerOverlayWidget.OnStartOfRound");

	UTCLivingPlayerOverlayWidget_OnStartOfRound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.TCOverlayWidget.ShowWorldControlPointWidgets
// (Final, Native, Public, BlueprintCallable)

void UTCOverlayWidget::ShowWorldControlPointWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.TCOverlayWidget.ShowWorldControlPointWidgets");

	UTCOverlayWidget_ShowWorldControlPointWidgets_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.TCOverlayWidget.ShowHUDControlPointWidgets
// (Final, Native, Public, BlueprintCallable)

void UTCOverlayWidget::ShowHUDControlPointWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.TCOverlayWidget.ShowHUDControlPointWidgets");

	UTCOverlayWidget_ShowHUDControlPointWidgets_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.TCOverlayWidget.OnStartOfRound
// (Event, Public, BlueprintEvent)

void UTCOverlayWidget::OnStartOfRound()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.TCOverlayWidget.OnStartOfRound");

	UTCOverlayWidget_OnStartOfRound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.TCPlayerController.TC_DEBUG_ReleasePoint
// (Final, Exec, Native, Private)
// Parameters:
// struct FString*                pointName                      (Parm, ZeroConstructor)

void ATCPlayerController::TC_DEBUG_ReleasePoint(struct FString* pointName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.TCPlayerController.TC_DEBUG_ReleasePoint");

	ATCPlayerController_TC_DEBUG_ReleasePoint_Params params;
	params.pointName = pointName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.TCPlayerController.TC_DEBUG_ReleaseAllPoints
// (Final, Exec, Native, Private)

void ATCPlayerController::TC_DEBUG_ReleaseAllPoints()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.TCPlayerController.TC_DEBUG_ReleaseAllPoints");

	ATCPlayerController_TC_DEBUG_ReleaseAllPoints_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.TCPlayerController.TC_DEBUG_CapturePoint
// (Final, Exec, Native, Private)
// Parameters:
// struct FString*                pointName                      (Parm, ZeroConstructor)
// int*                           teamIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void ATCPlayerController::TC_DEBUG_CapturePoint(struct FString* pointName, int* teamIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.TCPlayerController.TC_DEBUG_CapturePoint");

	ATCPlayerController_TC_DEBUG_CapturePoint_Params params;
	params.pointName = pointName;
	params.teamIndex = teamIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.TCPlayerController.TC_DEBUG_CaptureAllPoints
// (Final, Exec, Native, Private)
// Parameters:
// int*                           teamIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void ATCPlayerController::TC_DEBUG_CaptureAllPoints(int* teamIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.TCPlayerController.TC_DEBUG_CaptureAllPoints");

	ATCPlayerController_TC_DEBUG_CaptureAllPoints_Params params;
	params.teamIndex = teamIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.TCPlayerController.Server_TC_DEBUG_ReleasePoint
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// struct FString*                pointName                      (Parm, ZeroConstructor)

void ATCPlayerController::Server_TC_DEBUG_ReleasePoint(struct FString* pointName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.TCPlayerController.Server_TC_DEBUG_ReleasePoint");

	ATCPlayerController_Server_TC_DEBUG_ReleasePoint_Params params;
	params.pointName = pointName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.TCPlayerController.Server_TC_DEBUG_ReleaseAllPoints
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)

void ATCPlayerController::Server_TC_DEBUG_ReleaseAllPoints()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.TCPlayerController.Server_TC_DEBUG_ReleaseAllPoints");

	ATCPlayerController_Server_TC_DEBUG_ReleaseAllPoints_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.TCPlayerController.Server_TC_DEBUG_CapturePoint
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// struct FString*                pointName                      (Parm, ZeroConstructor)
// int*                           teamIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void ATCPlayerController::Server_TC_DEBUG_CapturePoint(struct FString* pointName, int* teamIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.TCPlayerController.Server_TC_DEBUG_CapturePoint");

	ATCPlayerController_Server_TC_DEBUG_CapturePoint_Params params;
	params.pointName = pointName;
	params.teamIndex = teamIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.TCPlayerController.Server_TC_DEBUG_CaptureAllPoints
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// int*                           teamIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void ATCPlayerController::Server_TC_DEBUG_CaptureAllPoints(int* teamIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.TCPlayerController.Server_TC_DEBUG_CaptureAllPoints");

	ATCPlayerController_Server_TC_DEBUG_CaptureAllPoints_Params params;
	params.teamIndex = teamIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.TCPointActor.NetMulticast_OnPointCaptureStart
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
// EeTeamID*                      teamInControl                  (Parm, ZeroConstructor, IsPlainOldData)
// EeTeamID*                      teamAttemptingControl          (Parm, ZeroConstructor, IsPlainOldData)

void ATCPointActor::NetMulticast_OnPointCaptureStart(EeTeamID* teamInControl, EeTeamID* teamAttemptingControl)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.TCPointActor.NetMulticast_OnPointCaptureStart");

	ATCPointActor_NetMulticast_OnPointCaptureStart_Params params;
	params.teamInControl = teamInControl;
	params.teamAttemptingControl = teamAttemptingControl;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.TCPointActor.NetMulticast_OnPointCaptured
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
// EeTeamID*                      teamInControl                  (Parm, ZeroConstructor, IsPlainOldData)
// EeTeamID*                      previousTeam                   (Parm, ZeroConstructor, IsPlainOldData)

void ATCPointActor::NetMulticast_OnPointCaptured(EeTeamID* teamInControl, EeTeamID* previousTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.TCPointActor.NetMulticast_OnPointCaptured");

	ATCPointActor_NetMulticast_OnPointCaptured_Params params;
	params.teamInControl = teamInControl;
	params.previousTeam = previousTeam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.TCPointActor.NetMulticast_OnPointCaptureCancelled
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
// EeTeamID*                      teamInControl                  (Parm, ZeroConstructor, IsPlainOldData)
// EeTeamID*                      teamAttemptingControl          (Parm, ZeroConstructor, IsPlainOldData)

void ATCPointActor::NetMulticast_OnPointCaptureCancelled(EeTeamID* teamInControl, EeTeamID* teamAttemptingControl)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.TCPointActor.NetMulticast_OnPointCaptureCancelled");

	ATCPointActor_NetMulticast_OnPointCaptureCancelled_Params params;
	params.teamInControl = teamInControl;
	params.teamAttemptingControl = teamAttemptingControl;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.TCPointActor.IsCaptured
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATCPointActor::IsCaptured()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.TCPointActor.IsCaptured");

	ATCPointActor_IsCaptured_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.TCPointActor.GetPointName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString ATCPointActor::GetPointName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.TCPointActor.GetPointName");

	ATCPointActor_GetPointName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.TCPointActor.GetOrderInHUD
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ATCPointActor::GetOrderInHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.TCPointActor.GetOrderInHUD");

	ATCPointActor_GetOrderInHUD_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.TCPointActor.GetCurrentOwner
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EeTeamID                       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EeTeamID ATCPointActor::GetCurrentOwner()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.TCPointActor.GetCurrentOwner");

	ATCPointActor_GetCurrentOwner_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.TCPointActor.GetCriticalActorRatio
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ATCPointActor::GetCriticalActorRatio()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.TCPointActor.GetCriticalActorRatio");

	ATCPointActor_GetCriticalActorRatio_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.TCPointDefenseSpawnComponent.OnRep_DefenseActorInstance
// (Final, Native, Private)

void UTCPointDefenseSpawnComponent::OnRep_DefenseActorInstance()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.TCPointDefenseSpawnComponent.OnRep_DefenseActorInstance");

	UTCPointDefenseSpawnComponent_OnRep_DefenseActorInstance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.TCPointDefenseSpawnComponent.NetMulticast_WaitForRespawn
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)

void UTCPointDefenseSpawnComponent::NetMulticast_WaitForRespawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.TCPointDefenseSpawnComponent.NetMulticast_WaitForRespawn");

	UTCPointDefenseSpawnComponent_NetMulticast_WaitForRespawn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.TCPointDefenseSpawnComponent.NetMulticast_WaitForInitialSpawn
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)

void UTCPointDefenseSpawnComponent::NetMulticast_WaitForInitialSpawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.TCPointDefenseSpawnComponent.NetMulticast_WaitForInitialSpawn");

	UTCPointDefenseSpawnComponent_NetMulticast_WaitForInitialSpawn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.TCPointDefenseSpawnComponent.NetMulticast_SpawnDelayedSpawnParticle
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)

void UTCPointDefenseSpawnComponent::NetMulticast_SpawnDelayedSpawnParticle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.TCPointDefenseSpawnComponent.NetMulticast_SpawnDelayedSpawnParticle");

	UTCPointDefenseSpawnComponent_NetMulticast_SpawnDelayedSpawnParticle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.TCPointDefenseSpawnComponent.NetMulticast_OnDefenseSpawned
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)

void UTCPointDefenseSpawnComponent::NetMulticast_OnDefenseSpawned()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.TCPointDefenseSpawnComponent.NetMulticast_OnDefenseSpawned");

	UTCPointDefenseSpawnComponent_NetMulticast_OnDefenseSpawned_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.TCPointDefenseSpawnComponent.NetMulticast_OnDefenseDestroyed
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)

void UTCPointDefenseSpawnComponent::NetMulticast_OnDefenseDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.TCPointDefenseSpawnComponent.NetMulticast_OnDefenseDestroyed");

	UTCPointDefenseSpawnComponent_NetMulticast_OnDefenseDestroyed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.TCPointDefenseSpawnComponent.IsSpawning
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTCPointDefenseSpawnComponent::IsSpawning()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.TCPointDefenseSpawnComponent.IsSpawning");

	UTCPointDefenseSpawnComponent_IsSpawning_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.TCPointDefenseSpawnComponent.IsRespawning
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTCPointDefenseSpawnComponent::IsRespawning()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.TCPointDefenseSpawnComponent.IsRespawning");

	UTCPointDefenseSpawnComponent_IsRespawning_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.TCPointDefenseSpawnComponent.IsPointControlled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTCPointDefenseSpawnComponent::IsPointControlled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.TCPointDefenseSpawnComponent.IsPointControlled");

	UTCPointDefenseSpawnComponent_IsPointControlled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.TCPointDefenseSpawnComponent.IsCritical
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTCPointDefenseSpawnComponent::IsCritical()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.TCPointDefenseSpawnComponent.IsCritical");

	UTCPointDefenseSpawnComponent_IsCritical_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.TCPointDefenseSpawnComponent.GetRespawnTimerRatio
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UTCPointDefenseSpawnComponent::GetRespawnTimerRatio()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.TCPointDefenseSpawnComponent.GetRespawnTimerRatio");

	UTCPointDefenseSpawnComponent_GetRespawnTimerRatio_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.TCPointDefenseSpawnComponent.GetOwningTeam
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EeTeamID                       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EeTeamID UTCPointDefenseSpawnComponent::GetOwningTeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.TCPointDefenseSpawnComponent.GetOwningTeam");

	UTCPointDefenseSpawnComponent_GetOwningTeam_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.TCPointDefenseSpawnComponent.GetInitialSpawnTimerRatio
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UTCPointDefenseSpawnComponent::GetInitialSpawnTimerRatio()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.TCPointDefenseSpawnComponent.GetInitialSpawnTimerRatio");

	UTCPointDefenseSpawnComponent_GetInitialSpawnTimerRatio_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.TCPointDefenseWidget.SetTimerRatio
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         Ratio                          (Parm, ZeroConstructor, IsPlainOldData)

void UTCPointDefenseWidget::SetTimerRatio(float* Ratio)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.TCPointDefenseWidget.SetTimerRatio");

	UTCPointDefenseWidget_SetTimerRatio_Params params;
	params.Ratio = Ratio;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.TCPointDefenseWidget.SetOwningSpawnComponent
// (Event, Public, BlueprintEvent)
// Parameters:
// class UTCPointDefenseSpawnComponent** Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTCPointDefenseWidget::SetOwningSpawnComponent(class UTCPointDefenseSpawnComponent** Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.TCPointDefenseWidget.SetOwningSpawnComponent");

	UTCPointDefenseWidget_SetOwningSpawnComponent_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.TCScoreboardHeaderWidget.SetTeamColor
// (Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// struct FLinearColor*           Color                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UTCScoreboardHeaderWidget::SetTeamColor(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.TCScoreboardHeaderWidget.SetTeamColor");

	UTCScoreboardHeaderWidget_SetTeamColor_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.TDMScoreboardHeader.SetTeamColor
// (Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// struct FLinearColor*           Color                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UTDMScoreboardHeader::SetTeamColor(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.TDMScoreboardHeader.SetTeamColor");

	UTDMScoreboardHeader_SetTeamColor_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.TeamComponent.S_GetTeamComponent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor**                 Actor                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UTeamComponent*          ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UTeamComponent* UTeamComponent::STATIC_S_GetTeamComponent(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.TeamComponent.S_GetTeamComponent");

	UTeamComponent_S_GetTeamComponent_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.TeamComponent.S_GetResponsibleTeamComponent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor**                 Actor                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UTeamComponent*          ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UTeamComponent* UTeamComponent::STATIC_S_GetResponsibleTeamComponent(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.TeamComponent.S_GetResponsibleTeamComponent");

	UTeamComponent_S_GetResponsibleTeamComponent_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.TeamComponent.S_GetComponentFromInterface
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor**                 Actor                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UTeamComponent*          ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UTeamComponent* UTeamComponent::STATIC_S_GetComponentFromInterface(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.TeamComponent.S_GetComponentFromInterface");

	UTeamComponent_S_GetComponentFromInterface_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.TeamComponent.OverrideTargetTeamRelationship
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EeTeamID*                      querierTeam                    (Parm, ZeroConstructor, IsPlainOldData)
// EeTeamMatrixRelationship*      newRelationship                (Parm, ZeroConstructor, IsPlainOldData)

void UTeamComponent::OverrideTargetTeamRelationship(EeTeamID* querierTeam, EeTeamMatrixRelationship* newRelationship)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.TeamComponent.OverrideTargetTeamRelationship");

	UTeamComponent_OverrideTargetTeamRelationship_Params params;
	params.querierTeam = querierTeam;
	params.newRelationship = newRelationship;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.TeamComponent.OverrideQuerierTeamRelationship
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EeTeamID*                      targetedTeam                   (Parm, ZeroConstructor, IsPlainOldData)
// EeTeamMatrixRelationship*      newRelationship                (Parm, ZeroConstructor, IsPlainOldData)

void UTeamComponent::OverrideQuerierTeamRelationship(EeTeamID* targetedTeam, EeTeamMatrixRelationship* newRelationship)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.TeamComponent.OverrideQuerierTeamRelationship");

	UTeamComponent_OverrideQuerierTeamRelationship_Params params;
	params.targetedTeam = targetedTeam;
	params.newRelationship = newRelationship;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.TeamComponent.OnRep_TeamID
// (Final, Native, Private)

void UTeamComponent::OnRep_TeamID()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.TeamComponent.OnRep_TeamID");

	UTeamComponent_OnRep_TeamID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.TeamComponent.OnRep_TargetOverrides
// (Final, Native, Private)

void UTeamComponent::OnRep_TargetOverrides()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.TeamComponent.OnRep_TargetOverrides");

	UTeamComponent_OnRep_TargetOverrides_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.TeamComponent.OnRep_QuerierOverrides
// (Final, Native, Private)

void UTeamComponent::OnRep_QuerierOverrides()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.TeamComponent.OnRep_QuerierOverrides");

	UTeamComponent_OnRep_QuerierOverrides_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.TeamComponent.OnRep_CommanderID
// (Final, Native, Private)

void UTeamComponent::OnRep_CommanderID()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.TeamComponent.OnRep_CommanderID");

	UTeamComponent_OnRep_CommanderID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.TeamComponent.IsNeutral
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UTeamComponent**         Other                          (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTeamComponent::IsNeutral(class UTeamComponent** Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.TeamComponent.IsNeutral");

	UTeamComponent_IsNeutral_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.TeamComponent.IsFriendly
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UTeamComponent**         Other                          (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTeamComponent::IsFriendly(class UTeamComponent** Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.TeamComponent.IsFriendly");

	UTeamComponent_IsFriendly_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.TeamComponent.IsEnemy
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UTeamComponent**         Other                          (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTeamComponent::IsEnemy(class UTeamComponent** Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.TeamComponent.IsEnemy");

	UTeamComponent_IsEnemy_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.TeamComponent.IsCommandedBy
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UTeamComponent**         Other                          (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTeamComponent::IsCommandedBy(class UTeamComponent** Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.TeamComponent.IsCommandedBy");

	UTeamComponent_IsCommandedBy_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.TeamComponent.IsACommander
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTeamComponent::IsACommander()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.TeamComponent.IsACommander");

	UTeamComponent_IsACommander_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.TeamComponent.HasSameCommander
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UTeamComponent**         otherTeamComponent             (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTeamComponent::HasSameCommander(class UTeamComponent** otherTeamComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.TeamComponent.HasSameCommander");

	UTeamComponent_HasSameCommander_Params params;
	params.otherTeamComponent = otherTeamComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.TeamComponent.GetTeamRelationshipDecorator
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UColorDefinition*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UColorDefinition* UTeamComponent::GetTeamRelationshipDecorator()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.TeamComponent.GetTeamRelationshipDecorator");

	UTeamComponent_GetTeamRelationshipDecorator_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.TeamComponent.GetTeamManager
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTeamManager            ReturnValue                    (Parm, OutParm, ReturnParm)

struct FTeamManager UTeamComponent::GetTeamManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.TeamComponent.GetTeamManager");

	UTeamComponent_GetTeamManager_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.TeamComponent.GetTeamID
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EeTeamID                       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EeTeamID UTeamComponent::GetTeamID()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.TeamComponent.GetTeamID");

	UTeamComponent_GetTeamID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.TeamComponent.GetTeamDecorator
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UColorDefinition*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UColorDefinition* UTeamComponent::GetTeamDecorator()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.TeamComponent.GetTeamDecorator");

	UTeamComponent_GetTeamDecorator_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.TeamComponent.GetRelationshipToLocalPlayerController
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EeTeamRelationship             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EeTeamRelationship UTeamComponent::GetRelationshipToLocalPlayerController()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.TeamComponent.GetRelationshipToLocalPlayerController");

	UTeamComponent_GetRelationshipToLocalPlayerController_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.TeamComponent.GetRelationshipTo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UTeamComponent**         Other                          (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// EeTeamRelationship             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EeTeamRelationship UTeamComponent::GetRelationshipTo(class UTeamComponent** Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.TeamComponent.GetRelationshipTo");

	UTeamComponent_GetRelationshipTo_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.TeamComponent.GetCommanderID
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EeCommanderID                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EeCommanderID UTeamComponent::GetCommanderID()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.TeamComponent.GetCommanderID");

	UTeamComponent_GetCommanderID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.TeamComponent.AssignTeam
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EeTeamID*                      Team                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UTeamComponent::AssignTeam(EeTeamID* Team)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.TeamComponent.AssignTeam");

	UTeamComponent_AssignTeam_Params params;
	params.Team = Team;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.TeamComponent.AssignCommander
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EeCommanderID*                 Commander                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UTeamComponent::AssignCommander(EeCommanderID* Commander)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.TeamComponent.AssignCommander");

	UTeamComponent_AssignCommander_Params params;
	params.Commander = Commander;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.TeamDecorator.GetUnitColor
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UTeamDecorator::GetUnitColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.TeamDecorator.GetUnitColor");

	UTeamDecorator_GetUnitColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.TeamDecorator.GetTeamName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UTeamDecorator::GetTeamName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.TeamDecorator.GetTeamName");

	UTeamDecorator_GetTeamName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.TeamDecorator.GetProjectileColor
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UTeamDecorator::GetProjectileColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.TeamDecorator.GetProjectileColor");

	UTeamDecorator_GetProjectileColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.TeamDecorator.GetPostProcessingColor
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UTeamDecorator::GetPostProcessingColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.TeamDecorator.GetPostProcessingColor");

	UTeamDecorator_GetPostProcessingColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.TeamDecorator.GetHUDColor
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UTeamDecorator::GetHUDColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.TeamDecorator.GetHUDColor");

	UTeamDecorator_GetHUDColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.TeamDecorator.GetFXColor
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UTeamDecorator::GetFXColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.TeamDecorator.GetFXColor");

	UTeamDecorator_GetFXColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.TeamDecorator.GetCommandPulseColor
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UTeamDecorator::GetCommandPulseColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.TeamDecorator.GetCommandPulseColor");

	UTeamDecorator_GetCommandPulseColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.TeamDecorator.GetColor
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag*           Tag                            (Parm)
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UTeamDecorator::GetColor(struct FGameplayTag* Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.TeamDecorator.GetColor");

	UTeamDecorator_GetColor_Params params;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.TeamUtilities.S_IsNeutralWithLocalPlayerController
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject**                WorldContext                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UTeamComponent**         Target                         (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTeamUtilities::STATIC_S_IsNeutralWithLocalPlayerController(class UObject** WorldContext, class UTeamComponent** Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.TeamUtilities.S_IsNeutralWithLocalPlayerController");

	UTeamUtilities_S_IsNeutralWithLocalPlayerController_Params params;
	params.WorldContext = WorldContext;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.TeamUtilities.S_IsFriendlyWithLocalPlayerController
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject**                WorldContext                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UTeamComponent**         Target                         (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTeamUtilities::STATIC_S_IsFriendlyWithLocalPlayerController(class UObject** WorldContext, class UTeamComponent** Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.TeamUtilities.S_IsFriendlyWithLocalPlayerController");

	UTeamUtilities_S_IsFriendlyWithLocalPlayerController_Params params;
	params.WorldContext = WorldContext;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.TeamUtilities.S_IsEnemyWithLocalPlayerController
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject**                WorldContext                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UTeamComponent**         Target                         (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTeamUtilities::STATIC_S_IsEnemyWithLocalPlayerController(class UObject** WorldContext, class UTeamComponent** Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.TeamUtilities.S_IsEnemyWithLocalPlayerController");

	UTeamUtilities_S_IsEnemyWithLocalPlayerController_Params params;
	params.WorldContext = WorldContext;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.TeamUtilities.S_HasSameCommanderAs_LocalPlayerController
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject**                WorldContext                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UTeamComponent**         Target                         (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTeamUtilities::STATIC_S_HasSameCommanderAs_LocalPlayerController(class UObject** WorldContext, class UTeamComponent** Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.TeamUtilities.S_HasSameCommanderAs_LocalPlayerController");

	UTeamUtilities_S_HasSameCommanderAs_LocalPlayerController_Params params;
	params.WorldContext = WorldContext;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.TeamUtilities.S_HasSameCommander
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UTeamComponent**         querier                        (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UTeamComponent**         Target                         (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTeamUtilities::STATIC_S_HasSameCommander(class UTeamComponent** querier, class UTeamComponent** Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.TeamUtilities.S_HasSameCommander");

	UTeamUtilities_S_HasSameCommander_Params params;
	params.querier = querier;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.TeamUtilities.S_GetTeamRelationshipDecoratorUsingIDs
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject**                WorldContext                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// EeTeamID*                      teamID                         (Parm, ZeroConstructor, IsPlainOldData)
// EeCommanderID*                 commanderId                    (Parm, ZeroConstructor, IsPlainOldData)
// class UColorDefinition*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UColorDefinition* UTeamUtilities::STATIC_S_GetTeamRelationshipDecoratorUsingIDs(class UObject** WorldContext, EeTeamID* teamID, EeCommanderID* commanderId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.TeamUtilities.S_GetTeamRelationshipDecoratorUsingIDs");

	UTeamUtilities_S_GetTeamRelationshipDecoratorUsingIDs_Params params;
	params.WorldContext = WorldContext;
	params.teamID = teamID;
	params.commanderId = commanderId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.TeamUtilities.S_GetTeamRelationshipDecoratorFromRelationship
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject**                WorldContext                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// EeTeamRelationship*            relationship                   (Parm, ZeroConstructor, IsPlainOldData)
// class UColorDefinition*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UColorDefinition* UTeamUtilities::STATIC_S_GetTeamRelationshipDecoratorFromRelationship(class UObject** WorldContext, EeTeamRelationship* relationship)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.TeamUtilities.S_GetTeamRelationshipDecoratorFromRelationship");

	UTeamUtilities_S_GetTeamRelationshipDecoratorFromRelationship_Params params;
	params.WorldContext = WorldContext;
	params.relationship = relationship;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.TeamUtilities.S_GetTeamRelationshipDecorator
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject**                WorldContext                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UTeamComponent**         targetTeamComponent            (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UColorDefinition*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UColorDefinition* UTeamUtilities::STATIC_S_GetTeamRelationshipDecorator(class UObject** WorldContext, class UTeamComponent** targetTeamComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.TeamUtilities.S_GetTeamRelationshipDecorator");

	UTeamUtilities_S_GetTeamRelationshipDecorator_Params params;
	params.WorldContext = WorldContext;
	params.targetTeamComponent = targetTeamComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.TeamUtilities.S_GetTeamComponents
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject**                WorldContext                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// EeTeamID*                      teamToLookFor                  (Parm, ZeroConstructor, IsPlainOldData)
// EeCommanderID*                 commanderToLookFor             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UTeamComponent*>  ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UTeamComponent*> UTeamUtilities::STATIC_S_GetTeamComponents(class UObject** WorldContext, EeTeamID* teamToLookFor, EeCommanderID* commanderToLookFor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.TeamUtilities.S_GetTeamComponents");

	UTeamUtilities_S_GetTeamComponents_Params params;
	params.WorldContext = WorldContext;
	params.teamToLookFor = teamToLookFor;
	params.commanderToLookFor = commanderToLookFor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.TeamUtilities.S_GetLocalPlayerControllerTeamComponent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject**                WorldContext                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UTeamComponent*          ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UTeamComponent* UTeamUtilities::STATIC_S_GetLocalPlayerControllerTeamComponent(class UObject** WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.TeamUtilities.S_GetLocalPlayerControllerTeamComponent");

	UTeamUtilities_S_GetLocalPlayerControllerTeamComponent_Params params;
	params.WorldContext = WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.TeamUtilities.S_GetCommanderComponents
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject**                WorldContext                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// EeTeamID*                      teamToLookFor                  (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UCommanderComponent*> ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UCommanderComponent*> UTeamUtilities::STATIC_S_GetCommanderComponents(class UObject** WorldContext, EeTeamID* teamToLookFor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.TeamUtilities.S_GetCommanderComponents");

	UTeamUtilities_S_GetCommanderComponents_Params params;
	params.WorldContext = WorldContext;
	params.teamToLookFor = teamToLookFor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.TeamUtilities.S_AreNeutral
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UTeamComponent**         querier                        (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UTeamComponent**         Target                         (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTeamUtilities::STATIC_S_AreNeutral(class UTeamComponent** querier, class UTeamComponent** Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.TeamUtilities.S_AreNeutral");

	UTeamUtilities_S_AreNeutral_Params params;
	params.querier = querier;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.TeamUtilities.S_AreFriendly
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UTeamComponent**         querier                        (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UTeamComponent**         Target                         (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTeamUtilities::STATIC_S_AreFriendly(class UTeamComponent** querier, class UTeamComponent** Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.TeamUtilities.S_AreFriendly");

	UTeamUtilities_S_AreFriendly_Params params;
	params.querier = querier;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.TeamUtilities.S_AreEnemy
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UTeamComponent**         querier                        (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UTeamComponent**         Target                         (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTeamUtilities::STATIC_S_AreEnemy(class UTeamComponent** querier, class UTeamComponent** Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.TeamUtilities.S_AreEnemy");

	UTeamUtilities_S_AreEnemy_Params params;
	params.querier = querier;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.ToggleButtonUserSettings.OnValueChange
// (Final, Native, Protected)
// Parameters:
// bool*                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UToggleButtonUserSettings::OnValueChange(bool* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.ToggleButtonUserSettings.OnValueChange");

	UToggleButtonUserSettings_OnValueChange_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.TriggerZoneActor.OnComponentEndOverlap
// (Final, Native, Private, HasOutParms)
// Parameters:
// struct FV1OverlapInfo*         overlapInfo                    (ConstParm, Parm, OutParm, ReferenceParm)
// class UV1OverlapComponent**    V1OverlapComponent             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ATriggerZoneActor::OnComponentEndOverlap(struct FV1OverlapInfo* overlapInfo, class UV1OverlapComponent** V1OverlapComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.TriggerZoneActor.OnComponentEndOverlap");

	ATriggerZoneActor_OnComponentEndOverlap_Params params;
	params.overlapInfo = overlapInfo;
	params.V1OverlapComponent = V1OverlapComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.TriggerZoneActor.OnComponentBeginOverlap
// (Final, Native, Private, HasOutParms)
// Parameters:
// struct FV1OverlapInfo*         overlapInfo                    (ConstParm, Parm, OutParm, ReferenceParm)
// class UV1OverlapComponent**    V1OverlapComponent             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ATriggerZoneActor::OnComponentBeginOverlap(struct FV1OverlapInfo* overlapInfo, class UV1OverlapComponent** V1OverlapComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.TriggerZoneActor.OnComponentBeginOverlap");

	ATriggerZoneActor_OnComponentBeginOverlap_Params params;
	params.overlapInfo = overlapInfo;
	params.V1OverlapComponent = V1OverlapComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.UAC_AOEBarrage.MultiCast_SetBarrageLocation
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
// struct FVector_NetQuantize*    Location                       (Parm)

void UUAC_AOEBarrage::MultiCast_SetBarrageLocation(struct FVector_NetQuantize* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.UAC_AOEBarrage.MultiCast_SetBarrageLocation");

	UUAC_AOEBarrage_MultiCast_SetBarrageLocation_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.UAC_AOEBarrage.MultiCast_SetBarrageFire
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
// bool*                          wantsBarrage                   (Parm, ZeroConstructor, IsPlainOldData)

void UUAC_AOEBarrage::MultiCast_SetBarrageFire(bool* wantsBarrage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.UAC_AOEBarrage.MultiCast_SetBarrageFire");

	UUAC_AOEBarrage_MultiCast_SetBarrageFire_Params params;
	params.wantsBarrage = wantsBarrage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.UAC_SpecialMelee.NetMulticast_SpawnDamageEventParticle
// (Net, Native, Event, NetMulticast, Public)
// Parameters:
// struct FVector_NetQuantize*    spawnPoint                     (Parm)
// struct FVector_NetQuantizeNormal* Forward                        (Parm)
// int8_t*                        Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UUAC_SpecialMelee::NetMulticast_SpawnDamageEventParticle(struct FVector_NetQuantize* spawnPoint, struct FVector_NetQuantizeNormal* Forward, int8_t* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.UAC_SpecialMelee.NetMulticast_SpawnDamageEventParticle");

	UUAC_SpecialMelee_NetMulticast_SpawnDamageEventParticle_Params params;
	params.spawnPoint = spawnPoint;
	params.Forward = Forward;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.UAC_SpecialMelee.Multicast_SetTargetLocation
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
// struct FVector_NetQuantize*    TargetLocation                 (Parm)

void UUAC_SpecialMelee::Multicast_SetTargetLocation(struct FVector_NetQuantize* TargetLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.UAC_SpecialMelee.Multicast_SetTargetLocation");

	UUAC_SpecialMelee_Multicast_SetTargetLocation_Params params;
	params.TargetLocation = TargetLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.UAC_SpecialMelee.Multicast_SetTargetActor
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
// class AActor**                 Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void UUAC_SpecialMelee::Multicast_SetTargetActor(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.UAC_SpecialMelee.Multicast_SetTargetActor");

	UUAC_SpecialMelee_Multicast_SetTargetActor_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.UAC_SpecialShot.OnRep_Weapons
// (Final, Native, Private)

void UUAC_SpecialShot::OnRep_Weapons()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.UAC_SpecialShot.OnRep_Weapons");

	UUAC_SpecialShot_OnRep_Weapons_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.UAC_SpecialShot.Multicast_SetTargetLocation
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
// struct FVector_NetQuantize*    TargetLocation                 (Parm)

void UUAC_SpecialShot::Multicast_SetTargetLocation(struct FVector_NetQuantize* TargetLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.UAC_SpecialShot.Multicast_SetTargetLocation");

	UUAC_SpecialShot_Multicast_SetTargetLocation_Params params;
	params.TargetLocation = TargetLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.UAC_SpecialShot.Multicast_SetTargetActor
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
// class AActor**                 Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void UUAC_SpecialShot::Multicast_SetTargetActor(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.UAC_SpecialShot.Multicast_SetTargetActor");

	UUAC_SpecialShot_Multicast_SetTargetActor_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.UnitAIController.GetUnit
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AUnitBaseActor*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AUnitBaseActor* AUnitAIController::GetUnit()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.UnitAIController.GetUnit");

	AUnitAIController_GetUnit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.UnitAIController.GetSquad
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ASquadActor*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ASquadActor* AUnitAIController::GetSquad()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.UnitAIController.GetSquad");

	AUnitAIController_GetSquad_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.UnitBaseActor.OnRep_TeamComponent
// (Final, Native, Private)

void AUnitBaseActor::OnRep_TeamComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.UnitBaseActor.OnRep_TeamComponent");

	AUnitBaseActor_OnRep_TeamComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.UnitBaseActor.OnDead
// (Final, Native, Private)
// Parameters:
// class UActorLifeCycleComponent** Context                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AUnitBaseActor::OnDead(class UActorLifeCycleComponent** Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.UnitBaseActor.OnDead");

	AUnitBaseActor_OnDead_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.UnitBaseActor.IsCrouching
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUnitBaseActor::IsCrouching()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.UnitBaseActor.IsCrouching");

	AUnitBaseActor_IsCrouching_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.UnitBaseActor.GetUnitCoverComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUnitCoverComponent*     ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UUnitCoverComponent* AUnitBaseActor::GetUnitCoverComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.UnitBaseActor.GetUnitCoverComponent");

	AUnitBaseActor_GetUnitCoverComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.UnitChatterComponent.Server_RequestPlayChatter
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// EeChatterCategory*             Category                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UUnitChatterComponent::Server_RequestPlayChatter(EeChatterCategory* Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.UnitChatterComponent.Server_RequestPlayChatter");

	UUnitChatterComponent_Server_RequestPlayChatter_Params params;
	params.Category = Category;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.UnitChatterPlayerComponent.Server_RequestPlayChatter_PriorityTarget
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// class AActor**                 priorityTarget                 (Parm, ZeroConstructor, IsPlainOldData)

void UUnitChatterPlayerComponent::Server_RequestPlayChatter_PriorityTarget(class AActor** priorityTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.UnitChatterPlayerComponent.Server_RequestPlayChatter_PriorityTarget");

	UUnitChatterPlayerComponent_Server_RequestPlayChatter_PriorityTarget_Params params;
	params.priorityTarget = priorityTarget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.UnitChatterPlayerComponent.Server_RequestPlayChatter_AccoladeTag
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// struct FGameplayTag*           accoladeTag                    (ConstParm, Parm, ReferenceParm)

void UUnitChatterPlayerComponent::Server_RequestPlayChatter_AccoladeTag(struct FGameplayTag* accoladeTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.UnitChatterPlayerComponent.Server_RequestPlayChatter_AccoladeTag");

	UUnitChatterPlayerComponent_Server_RequestPlayChatter_AccoladeTag_Params params;
	params.accoladeTag = accoladeTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.UnitChatterPlayerComponent.Server_RequestPlayChatter
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// EeChatterCategory*             Category                       (Parm, ZeroConstructor, IsPlainOldData)

void UUnitChatterPlayerComponent::Server_RequestPlayChatter(EeChatterCategory* Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.UnitChatterPlayerComponent.Server_RequestPlayChatter");

	UUnitChatterPlayerComponent_Server_RequestPlayChatter_Params params;
	params.Category = Category;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.UnitChatterPlayerComponent.Client_PlayChatter
// (Final, Net, NetReliable, Native, Event, Private, NetClient)
// Parameters:
// struct FRequestPlayChatterInfo* chatterRequest                 (ConstParm, Parm, ReferenceParm)

void UUnitChatterPlayerComponent::Client_PlayChatter(struct FRequestPlayChatterInfo* chatterRequest)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.UnitChatterPlayerComponent.Client_PlayChatter");

	UUnitChatterPlayerComponent_Client_PlayChatter_Params params;
	params.chatterRequest = chatterRequest;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.UnitCoverComponent.Server_SetCoverBehaviorStatus
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// bool*                          shouldBeActive                 (Parm, ZeroConstructor, IsPlainOldData)

void UUnitCoverComponent::Server_SetCoverBehaviorStatus(bool* shouldBeActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.UnitCoverComponent.Server_SetCoverBehaviorStatus");

	UUnitCoverComponent_Server_SetCoverBehaviorStatus_Params params;
	params.shouldBeActive = shouldBeActive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.UnitCoverComponent.Server_PlayerAttemptedCover
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)

void UUnitCoverComponent::Server_PlayerAttemptedCover()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.UnitCoverComponent.Server_PlayerAttemptedCover");

	UUnitCoverComponent_Server_PlayerAttemptedCover_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.UnitDownedNotifierHUDWidget.UpdateTimeLeft
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         timeLeft                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          timeCounting                   (Parm, ZeroConstructor, IsPlainOldData)

void UUnitDownedNotifierHUDWidget::UpdateTimeLeft(float* timeLeft, bool* timeCounting)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.UnitDownedNotifierHUDWidget.UpdateTimeLeft");

	UUnitDownedNotifierHUDWidget_UpdateTimeLeft_Params params;
	params.timeLeft = timeLeft;
	params.timeCounting = timeCounting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.UnitDownedNotifierHUDWidget.StartDowned
// (Event, Public, BlueprintEvent)

void UUnitDownedNotifierHUDWidget::StartDowned()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.UnitDownedNotifierHUDWidget.StartDowned");

	UUnitDownedNotifierHUDWidget_StartDowned_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.UnitDownedNotifierHUDWidget.EndDowned
// (Event, Public, BlueprintEvent)

void UUnitDownedNotifierHUDWidget::EndDowned()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.UnitDownedNotifierHUDWidget.EndDowned");

	UUnitDownedNotifierHUDWidget_EndDowned_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.V1AbilityTask_CreateTargetDataFromOrder.CreateTargetDataFromOrder
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility**       OwningAbility                  (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 orderType                      (Parm, ZeroConstructor, IsPlainOldData)
// class UV1AbilityTask_CreateTargetDataFromOrder* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UV1AbilityTask_CreateTargetDataFromOrder* UV1AbilityTask_CreateTargetDataFromOrder::STATIC_CreateTargetDataFromOrder(class UGameplayAbility** OwningAbility, class UClass** orderType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.V1AbilityTask_CreateTargetDataFromOrder.CreateTargetDataFromOrder");

	UV1AbilityTask_CreateTargetDataFromOrder_CreateTargetDataFromOrder_Params params;
	params.OwningAbility = OwningAbility;
	params.orderType = orderType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.V1AbilityTask_FireAbilityWeapon.FireAbilityWeapon
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility**       OwningAbility                  (Parm, ZeroConstructor, IsPlainOldData)
// class UV1AbilityTask_FireAbilityWeapon* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UV1AbilityTask_FireAbilityWeapon* UV1AbilityTask_FireAbilityWeapon::STATIC_FireAbilityWeapon(class UGameplayAbility** OwningAbility)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.V1AbilityTask_FireAbilityWeapon.FireAbilityWeapon");

	UV1AbilityTask_FireAbilityWeapon_FireAbilityWeapon_Params params;
	params.OwningAbility = OwningAbility;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.V1AbilityTask_GetTargetDataFromAbility.CreateTargetDataFromAbility
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility**       OwningAbility                  (Parm, ZeroConstructor, IsPlainOldData)
// class UV1AbilityTask_GetTargetDataFromAbility* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UV1AbilityTask_GetTargetDataFromAbility* UV1AbilityTask_GetTargetDataFromAbility::STATIC_CreateTargetDataFromAbility(class UGameplayAbility** OwningAbility)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.V1AbilityTask_GetTargetDataFromAbility.CreateTargetDataFromAbility");

	UV1AbilityTask_GetTargetDataFromAbility_CreateTargetDataFromAbility_Params params;
	params.OwningAbility = OwningAbility;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.V1AbilityTask_SpawnProjectile.SpawnProjectile
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility**       OwningAbility                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayAbilityTargetDataHandle* TargetData                     (Parm)
// class UClass**                 Class                          (Parm, ZeroConstructor, IsPlainOldData)
// class UV1AbilityTask_SpawnProjectile* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UV1AbilityTask_SpawnProjectile* UV1AbilityTask_SpawnProjectile::STATIC_SpawnProjectile(class UGameplayAbility** OwningAbility, struct FGameplayAbilityTargetDataHandle* TargetData, class UClass** Class)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.V1AbilityTask_SpawnProjectile.SpawnProjectile");

	UV1AbilityTask_SpawnProjectile_SpawnProjectile_Params params;
	params.OwningAbility = OwningAbility;
	params.TargetData = TargetData;
	params.Class = Class;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.V1AbilityTask_SpawnProjectile.FinishSpawningActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility**       OwningAbility                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayAbilityTargetDataHandle* TargetData                     (Parm)
// class AProjectileActor**       SpawnedActor                   (Parm, ZeroConstructor, IsPlainOldData)

void UV1AbilityTask_SpawnProjectile::FinishSpawningActor(class UGameplayAbility** OwningAbility, struct FGameplayAbilityTargetDataHandle* TargetData, class AProjectileActor** SpawnedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.V1AbilityTask_SpawnProjectile.FinishSpawningActor");

	UV1AbilityTask_SpawnProjectile_FinishSpawningActor_Params params;
	params.OwningAbility = OwningAbility;
	params.TargetData = TargetData;
	params.SpawnedActor = SpawnedActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.V1AbilityTask_SpawnProjectile.BeginSpawningActor
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UGameplayAbility**       OwningAbility                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayAbilityTargetDataHandle* TargetData                     (Parm)
// class UClass**                 Class                          (Parm, ZeroConstructor, IsPlainOldData)
// class AProjectileActor*        SpawnedActor                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UV1AbilityTask_SpawnProjectile::BeginSpawningActor(class UGameplayAbility** OwningAbility, struct FGameplayAbilityTargetDataHandle* TargetData, class UClass** Class, class AProjectileActor** SpawnedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.V1AbilityTask_SpawnProjectile.BeginSpawningActor");

	UV1AbilityTask_SpawnProjectile_BeginSpawningActor_Params params;
	params.OwningAbility = OwningAbility;
	params.TargetData = TargetData;
	params.Class = Class;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SpawnedActor != nullptr)
		*SpawnedActor = params.SpawnedActor;

	return params.ReturnValue;
}


// Function Robogore.V1AbilityTask_SpawnSpecialAttack.SpawnSpecialAttack
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility**       OwningAbility                  (Parm, ZeroConstructor, IsPlainOldData)
// class UV1AbilityTask_SpawnSpecialAttack* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UV1AbilityTask_SpawnSpecialAttack* UV1AbilityTask_SpawnSpecialAttack::STATIC_SpawnSpecialAttack(class UGameplayAbility** OwningAbility)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.V1AbilityTask_SpawnSpecialAttack.SpawnSpecialAttack");

	UV1AbilityTask_SpawnSpecialAttack_SpawnSpecialAttack_Params params;
	params.OwningAbility = OwningAbility;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.V1AbilityTask_UnitTurnToFace.UnitTurnToFace
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility**       OwningAbility                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayAbilityTargetDataHandle* TargetData                     (Parm)
// float*                         turnSpeed                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         closeEnoughAngle               (Parm, ZeroConstructor, IsPlainOldData)
// class UV1AbilityTask_UnitTurnToFace* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UV1AbilityTask_UnitTurnToFace* UV1AbilityTask_UnitTurnToFace::STATIC_UnitTurnToFace(class UGameplayAbility** OwningAbility, struct FGameplayAbilityTargetDataHandle* TargetData, float* turnSpeed, float* closeEnoughAngle)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.V1AbilityTask_UnitTurnToFace.UnitTurnToFace");

	UV1AbilityTask_UnitTurnToFace_UnitTurnToFace_Params params;
	params.OwningAbility = OwningAbility;
	params.TargetData = TargetData;
	params.turnSpeed = turnSpeed;
	params.closeEnoughAngle = closeEnoughAngle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.V1CameraShake.RotPitchSineZeroCrossed
// (Event, Public, BlueprintEvent)

void UV1CameraShake::RotPitchSineZeroCrossed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.V1CameraShake.RotPitchSineZeroCrossed");

	UV1CameraShake_RotPitchSineZeroCrossed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.V1CameraShake.RotPitchSineTopPeak
// (Event, Public, BlueprintEvent)

void UV1CameraShake::RotPitchSineTopPeak()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.V1CameraShake.RotPitchSineTopPeak");

	UV1CameraShake_RotPitchSineTopPeak_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.V1CameraShake.RotPitchSineBottomPeak
// (Event, Public, BlueprintEvent)

void UV1CameraShake::RotPitchSineBottomPeak()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.V1CameraShake.RotPitchSineBottomPeak");

	UV1CameraShake_RotPitchSineBottomPeak_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.V1CameraShake.OnTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UV1CameraShake::OnTick(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.V1CameraShake.OnTick");

	UV1CameraShake_OnTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.V1CameraShake.LocXSineZeroCrossed
// (Event, Public, BlueprintEvent)

void UV1CameraShake::LocXSineZeroCrossed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.V1CameraShake.LocXSineZeroCrossed");

	UV1CameraShake_LocXSineZeroCrossed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.V1CameraShake.LocXSineTopPeak
// (Event, Public, BlueprintEvent)

void UV1CameraShake::LocXSineTopPeak()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.V1CameraShake.LocXSineTopPeak");

	UV1CameraShake_LocXSineTopPeak_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.V1CameraShake.LocXSineBottomPeak
// (Event, Public, BlueprintEvent)

void UV1CameraShake::LocXSineBottomPeak()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.V1CameraShake.LocXSineBottomPeak");

	UV1CameraShake_LocXSineBottomPeak_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.V1DestructibleComponent.OnHit
// (Final, Native, Public, HasOutParms, HasDefaults)
// Parameters:
// class UPrimitiveComponent**    HitComp                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector*                NormalImpulse                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             Hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UV1DestructibleComponent::OnHit(class UPrimitiveComponent** HitComp, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, struct FVector* NormalImpulse, struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.V1DestructibleComponent.OnHit");

	UV1DestructibleComponent_OnHit_Params params;
	params.HitComp = HitComp;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.V1Event_WasReceived.HandleEvent
// (Final, Native, Private)
// Parameters:
// class UV1EventBase**           evn                            (Parm, ZeroConstructor, IsPlainOldData)

void UV1Event_WasReceived::HandleEvent(class UV1EventBase** evn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.V1Event_WasReceived.HandleEvent");

	UV1Event_WasReceived_HandleEvent_Params params;
	params.evn = evn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.V1Event_PlayerEvent.HandleEvent
// (Final, Native, Private)
// Parameters:
// class UV1EventBase**           evn                            (Parm, ZeroConstructor, IsPlainOldData)

void UV1Event_PlayerEvent::HandleEvent(class UV1EventBase** evn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.V1Event_PlayerEvent.HandleEvent");

	UV1Event_PlayerEvent_HandleEvent_Params params;
	params.evn = evn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.V1SpawnActorManager.SpawnActor
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject**                WorldContext                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 classType                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform*             Transform                      (Parm, IsPlainOldData)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UV1SpawnActorManager::STATIC_SpawnActor(class UObject** WorldContext, class UClass** classType, struct FTransform* Transform)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.V1SpawnActorManager.SpawnActor");

	UV1SpawnActorManager_SpawnActor_Params params;
	params.WorldContext = WorldContext;
	params.classType = classType;
	params.Transform = Transform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.SpecialShotProjectile.GetTargetActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* ASpecialShotProjectile::GetTargetActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.SpecialShotProjectile.GetTargetActor");

	ASpecialShotProjectile_GetTargetActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.V1SpringCanvasPanel.Update
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APawn**                  playerPawn                     (Parm, ZeroConstructor, IsPlainOldData)
// float*                         dt                             (Parm, ZeroConstructor, IsPlainOldData)

void UV1SpringCanvasPanel::Update(class APawn** playerPawn, float* dt)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.V1SpringCanvasPanel.Update");

	UV1SpringCanvasPanel_Update_Params params;
	params.playerPawn = playerPawn;
	params.dt = dt;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.VisionModeComponent.Server_ChangeVisionModeState
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// bool*                          Enabled                        (Parm, ZeroConstructor, IsPlainOldData)

void UVisionModeComponent::Server_ChangeVisionModeState(bool* Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.VisionModeComponent.Server_ChangeVisionModeState");

	UVisionModeComponent_Server_ChangeVisionModeState_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.VisionModeInteractableWidget.OnVisionModeToggle
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          Mode                           (Parm, ZeroConstructor, IsPlainOldData)

void UVisionModeInteractableWidget::OnVisionModeToggle(bool* Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.VisionModeInteractableWidget.OnVisionModeToggle");

	UVisionModeInteractableWidget_OnVisionModeToggle_Params params;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.VisionModeInteractableWidget.OnScanTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         dt                             (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Ratio                          (Parm, ZeroConstructor, IsPlainOldData)

void UVisionModeInteractableWidget::OnScanTick(float* dt, float* Ratio)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.VisionModeInteractableWidget.OnScanTick");

	UVisionModeInteractableWidget_OnScanTick_Params params;
	params.dt = dt;
	params.Ratio = Ratio;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.VisionModeInteractableWidget.OnScanStart
// (Event, Public, BlueprintEvent)

void UVisionModeInteractableWidget::OnScanStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.VisionModeInteractableWidget.OnScanStart");

	UVisionModeInteractableWidget_OnScanStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.VisionModeInteractableWidget.OnScanComplete
// (Event, Public, BlueprintEvent)

void UVisionModeInteractableWidget::OnScanComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.VisionModeInteractableWidget.OnScanComplete");

	UVisionModeInteractableWidget_OnScanComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.VisionModeInteractableWidget.OnScanCanceled
// (Event, Public, BlueprintEvent)

void UVisionModeInteractableWidget::OnScanCanceled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.VisionModeInteractableWidget.OnScanCanceled");

	UVisionModeInteractableWidget_OnScanCanceled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.VisionModeInteractableWidget.OnHoverStart
// (Event, Public, BlueprintEvent)

void UVisionModeInteractableWidget::OnHoverStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.VisionModeInteractableWidget.OnHoverStart");

	UVisionModeInteractableWidget_OnHoverStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.VisionModeInteractableWidget.OnHoverEnd
// (Event, Public, BlueprintEvent)

void UVisionModeInteractableWidget::OnHoverEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.VisionModeInteractableWidget.OnHoverEnd");

	UVisionModeInteractableWidget_OnHoverEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.VisionModeReticle.VisionModeToggle
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          NewState                       (Parm, ZeroConstructor, IsPlainOldData)

void UVisionModeReticle::VisionModeToggle(bool* NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.VisionModeReticle.VisionModeToggle");

	UVisionModeReticle_VisionModeToggle_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.VisionModeReticle.OnScanTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         dt                             (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Ratio                          (Parm, ZeroConstructor, IsPlainOldData)

void UVisionModeReticle::OnScanTick(float* dt, float* Ratio)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.VisionModeReticle.OnScanTick");

	UVisionModeReticle_OnScanTick_Params params;
	params.dt = dt;
	params.Ratio = Ratio;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.VisionModeReticle.OnScanStart
// (Event, Public, BlueprintEvent)

void UVisionModeReticle::OnScanStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.VisionModeReticle.OnScanStart");

	UVisionModeReticle_OnScanStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.VisionModeReticle.OnScanComplete
// (Event, Public, BlueprintEvent)

void UVisionModeReticle::OnScanComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.VisionModeReticle.OnScanComplete");

	UVisionModeReticle_OnScanComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.VisionModeReticle.OnScanCanceled
// (Event, Public, BlueprintEvent)

void UVisionModeReticle::OnScanCanceled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.VisionModeReticle.OnScanCanceled");

	UVisionModeReticle_OnScanCanceled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.VisionModeReticle.OnHoverEnd
// (Event, Public, BlueprintEvent)

void UVisionModeReticle::OnHoverEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.VisionModeReticle.OnHoverEnd");

	UVisionModeReticle_OnHoverEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.VisionModeReticle.OnHoverBegin
// (Event, Public, BlueprintEvent)

void UVisionModeReticle::OnHoverBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.VisionModeReticle.OnHoverBegin");

	UVisionModeReticle_OnHoverBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.VisionModeSnapReticle.VisionModeToggle
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          NewState                       (Parm, ZeroConstructor, IsPlainOldData)

void UVisionModeSnapReticle::VisionModeToggle(bool* NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.VisionModeSnapReticle.VisionModeToggle");

	UVisionModeSnapReticle_VisionModeToggle_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.VisionModeSnapReticle.OnScanTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         dt                             (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Ratio                          (Parm, ZeroConstructor, IsPlainOldData)

void UVisionModeSnapReticle::OnScanTick(float* dt, float* Ratio)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.VisionModeSnapReticle.OnScanTick");

	UVisionModeSnapReticle_OnScanTick_Params params;
	params.dt = dt;
	params.Ratio = Ratio;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.VisionModeSnapReticle.OnScanStart
// (Event, Public, BlueprintEvent)

void UVisionModeSnapReticle::OnScanStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.VisionModeSnapReticle.OnScanStart");

	UVisionModeSnapReticle_OnScanStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.VisionModeSnapReticle.OnScanComplete
// (Event, Public, BlueprintEvent)

void UVisionModeSnapReticle::OnScanComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.VisionModeSnapReticle.OnScanComplete");

	UVisionModeSnapReticle_OnScanComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.VisionModeSnapReticle.OnScanCanceled
// (Event, Public, BlueprintEvent)

void UVisionModeSnapReticle::OnScanCanceled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.VisionModeSnapReticle.OnScanCanceled");

	UVisionModeSnapReticle_OnScanCanceled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.VisionModeSnapReticle.OnHoverEnd
// (Event, Public, BlueprintEvent)

void UVisionModeSnapReticle::OnHoverEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.VisionModeSnapReticle.OnHoverEnd");

	UVisionModeSnapReticle_OnHoverEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.VisionModeSnapReticle.OnHoverBegin
// (Event, Public, BlueprintEvent)

void UVisionModeSnapReticle::OnHoverBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.VisionModeSnapReticle.OnHoverBegin");

	UVisionModeSnapReticle_OnHoverBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.WeaponCurveRotator.OnMontageStarted
// (Final, Native, Private)
// Parameters:
// class UAnimMontage**           Montage                        (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponCurveRotator::OnMontageStarted(class UAnimMontage** Montage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.WeaponCurveRotator.OnMontageStarted");

	UWeaponCurveRotator_OnMontageStarted_Params params;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.WeaponCurveRotator.OnMontageBlendingOut
// (Final, Native, Private)
// Parameters:
// class UAnimMontage**           Montage                        (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          interrupted                    (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponCurveRotator::OnMontageBlendingOut(class UAnimMontage** Montage, bool* interrupted)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.WeaponCurveRotator.OnMontageBlendingOut");

	UWeaponCurveRotator_OnMontageBlendingOut_Params params;
	params.Montage = Montage;
	params.interrupted = interrupted;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.WeaponReloadReticleWidget.OnWeaponAssigned_BP
// (Event, Protected, BlueprintEvent)
// Parameters:
// class ARangedWeapon**          weapon                         (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponReloadReticleWidget::OnWeaponAssigned_BP(class ARangedWeapon** weapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.WeaponReloadReticleWidget.OnWeaponAssigned_BP");

	UWeaponReloadReticleWidget_OnWeaponAssigned_BP_Params params;
	params.weapon = weapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.WeaponReloadReticleWidget.OnReloadComplete_BP
// (Event, Protected, BlueprintEvent)

void UWeaponReloadReticleWidget::OnReloadComplete_BP()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.WeaponReloadReticleWidget.OnReloadComplete_BP");

	UWeaponReloadReticleWidget_OnReloadComplete_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.WeaponReloadReticleWidget.OnReloadCancelled_BP
// (Event, Protected, BlueprintEvent)

void UWeaponReloadReticleWidget::OnReloadCancelled_BP()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.WeaponReloadReticleWidget.OnReloadCancelled_BP");

	UWeaponReloadReticleWidget_OnReloadCancelled_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.WeaponReloadReticleWidget.OnReloadBegin_BP
// (Event, Protected, BlueprintEvent)

void UWeaponReloadReticleWidget::OnReloadBegin_BP()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.WeaponReloadReticleWidget.OnReloadBegin_BP");

	UWeaponReloadReticleWidget_OnReloadBegin_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.WeaponReloadReticleWidget.OnAmmoAddedFromRegen_BP
// (Event, Protected, BlueprintEvent)

void UWeaponReloadReticleWidget::OnAmmoAddedFromRegen_BP()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.WeaponReloadReticleWidget.OnAmmoAddedFromRegen_BP");

	UWeaponReloadReticleWidget_OnAmmoAddedFromRegen_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.WeaponReticle.GetOwnerAltitude
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWeaponReticle::GetOwnerAltitude()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.WeaponReticle.GetOwnerAltitude");

	UWeaponReticle_GetOwnerAltitude_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.WidgetToTextureComponent.GetWidget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UUserWidget*             ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UUserWidget* UWidgetToTextureComponent::GetWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.WidgetToTextureComponent.GetWidget");

	UWidgetToTextureComponent_GetWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.WidgetToTextureComponent.GetRenderTarget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UTextureRenderTarget2D*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTextureRenderTarget2D* UWidgetToTextureComponent::GetRenderTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.WidgetToTextureComponent.GetRenderTarget");

	UWidgetToTextureComponent_GetRenderTarget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Robogore.WMDComponent.Server_CancelDetonation
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)

void UWMDComponent::Server_CancelDetonation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.WMDComponent.Server_CancelDetonation");

	UWMDComponent_Server_CancelDetonation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.WMDComponent.Server_BeginDetonationSequence
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)

void UWMDComponent::Server_BeginDetonationSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.WMDComponent.Server_BeginDetonationSequence");

	UWMDComponent_Server_BeginDetonationSequence_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.UnitOffscreenWidget.SetStandardIconBrush
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FSlateBrush*            Brush                          (ConstParm, Parm, OutParm, ReferenceParm)

void UUnitOffscreenWidget::SetStandardIconBrush(struct FSlateBrush* Brush)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.UnitOffscreenWidget.SetStandardIconBrush");

	UUnitOffscreenWidget_SetStandardIconBrush_Params params;
	params.Brush = Brush;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.UnitOffscreenWidget.SetStandardColor
// (Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// struct FLinearColor*           standardColor                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UUnitOffscreenWidget::SetStandardColor(struct FLinearColor* standardColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.UnitOffscreenWidget.SetStandardColor");

	UUnitOffscreenWidget_SetStandardColor_Params params;
	params.standardColor = standardColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.YesNoMessageMenu.OnYes
// (Final, Native, Protected)

void UYesNoMessageMenu::OnYes()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.YesNoMessageMenu.OnYes");

	UYesNoMessageMenu_OnYes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.YesNoMessageMenu.OnNo
// (Final, Native, Protected)

void UYesNoMessageMenu::OnNo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.YesNoMessageMenu.OnNo");

	UYesNoMessageMenu_OnNo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Robogore.UpgradeChipDefinition.GetChipName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)

struct FText UUpgradeChipDefinition::GetChipName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Robogore.UpgradeChipDefinition.GetChipName");

	UUpgradeChipDefinition_GetChipName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
