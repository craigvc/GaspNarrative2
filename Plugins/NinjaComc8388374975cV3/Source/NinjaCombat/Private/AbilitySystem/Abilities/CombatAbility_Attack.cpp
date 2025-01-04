// Ninja Bear Studio Inc., all rights reserved.
#include "AbilitySystem/Abilities/CombatAbility_Attack.h"

#include "AbilitySystemComponent.h"
#include "NinjaCombatFunctionLibrary.h"
#include "NinjaCombatSettings.h"
#include "NinjaCombatTags.h"
#include "Abilities/Tasks/AbilityTask_WaitGameplayEvent.h"
#include "AbilitySystem/Abilities/NinjaCombatAttackSupport.h"
#include "AbilitySystem/Effects/CombatEffect_MeleeHit.h"
#include "AbilitySystem/Effects/CombatEffect_RangedHit.h"
#include "AbilitySystem/Tasks/AbilityTask_ScanMeleeTarget.h"
#include "AbilitySystem/Tasks/AbilityTask_SpawnProjectile.h"
#include "Components/NinjaCombatComboManagerComponent.h"
#include "Components/NinjaCombatManagerComponent.h"
#include "Interfaces/Components/CombatTargetManagerInterface.h"

UCombatAbility_Attack::UCombatAbility_Attack(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	bShouldLockOnMeleeTarget = GetDefault<UNinjaCombatSettings>()->bShouldLockOnTargetsFromMeleeAttacks;
	DefaultMeleeEffectLevel = 1.f;
	DefaultProjectileEffectLevel = 1.f;

	FGameplayTagContainer InitialTags;
	InitialTags.AddTagFast(Tag_Combat_Ability_Attack);
	SetInitialTags(InitialTags);
	
	MeleeDamageEffectClass = UCombatEffect_MeleeHit::StaticClass();
	ProjectileDamageEffectClass = UCombatEffect_RangedHit::StaticClass();
	
	ActivationBlockedTags.AddTag(Tag_Combat_State_Staggered);
	ActivationBlockedTags.AddTag(Tag_Combat_State_Dead);
}

int32 UCombatAbility_Attack::GetComboCount() const
{
	const AActor* MyAvatar = GetAvatarActorFromActorInfo();
	
	const UActorComponent* ComboComponent = UNinjaCombatFunctionLibrary::GetComboManagerComponent(MyAvatar);
	if (UNinjaCombatFunctionLibrary::IsValidComboManagerComponent(ComboComponent))
	{
		return ICombatComboManagerInterface::Execute_GetComboCount(ComboComponent);
	}

	return 0;
}

void UCombatAbility_Attack::OnAnimationStarted_Implementation()
{
	Super::OnAnimationStarted_Implementation();
	HandleAttackStarting();
}

float UCombatAbility_Attack::GetMeleeDamageEffectLevel() const
{
	return DefaultMeleeEffectLevel;
}

float UCombatAbility_Attack::GetProjectileEffectLevel() const
{
	return DefaultProjectileEffectLevel;
}

void UCombatAbility_Attack::ActivateAbility(const FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo,
	const FGameplayEventData* TriggerEventData)
{
	Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);

	static constexpr bool bExactOnly = false;
	AttackEventTask = InitializeEventTask(Tag_Combat_Event, bExactOnly);
	AttackEventTask->ReadyForActivation();	
}

void UCombatAbility_Attack::InitializeMeleeScanTask(const UNinjaCombatMeleeScan* MeleeScan)
{
	MeleeScanTask = UAbilityTask_ScanMeleeTarget::CreateTask(this, bEnableDebug);
	checkf(IsValid(MeleeScanTask), TEXT("Unexpected invalid Melee Scan Task instance."));

	MeleeScanTask->Join(MeleeScan);
	MeleeScanTask->OnMeleeTargetsFound.AddDynamic(this, &ThisClass::HandleMeleeScanTargetsReceived);
	MeleeScanTask->ReadyForActivation();
}

void UCombatAbility_Attack::InitializeProjectileTask(const UNinjaCombatProjectileRequest* ProjectileRequest)
{
	SpawnProjectileTask = UAbilityTask_SpawnProjectile::CreateTask(this, bEnableDebug);
	checkf(IsValid(SpawnProjectileTask), TEXT("Unexpected invalid Spawn Projectile Task instance."));

	SpawnProjectileTask->AddProjectileRequest(ProjectileRequest);
	SpawnProjectileTask->OnProjectileLaunched.AddDynamic(this, &ThisClass::HandleProjectileLaunched);
	SpawnProjectileTask->ReadyForActivation();
}

void UCombatAbility_Attack::HandleAttackStarting_Implementation()
{
	UNinjaCombatManagerComponent* CombatManager = GetCombatManagerComponentFromActorInfo();
	if (IsValid(CombatManager))
	{
		const FGameplayTagContainer MyTags = GetAbilityTags(); 
		CombatManager->BroadcastAttack(MyTags);
	}
}

void UCombatAbility_Attack::HandleEventReceived_Implementation(const FGameplayEventData Payload)
{
	Super::HandleEventReceived_Implementation(Payload);
	FNinjaCombatAttackSupport::HandleEventReceived(this, Payload);
}

void UCombatAbility_Attack::HandleMeleeScanTargetsReceived_Implementation(const UNinjaCombatMeleeScan* MeleeScan, const FGameplayAbilityTargetDataHandle& Data)
{
	FNinjaCombatAttackSupport::HandleMeleeScanTargetsReceived(this, MeleeScan, Data, [&](const FHitResult* HitResult)
	{
		const AActor* Target = HitResult ? HitResult->GetActor() : nullptr;
		if (IsValid(Target))
		{
			UAbilitySystemComponent* AbilitySystemComponent = GetAbilitySystemComponentFromActorInfo();
			if (IsValid(AbilitySystemComponent))
			{
				FGameplayEventData* Payload = new FGameplayEventData();
				Payload->EventTag = Tag_Combat_Event_Combo_Target_Hit;
				Payload->Instigator = GetAvatarActorFromActorInfo();
				Payload->Target = GetAvatarActorFromActorInfo();
				Payload->OptionalObject = Target;
				Payload->OptionalObject2 = MeleeScan;
				AbilitySystemComponent->HandleGameplayEvent(Tag_Combat_Event_Combo_Target_Hit, Payload);
			}
		}
	});
}

void UCombatAbility_Attack::HandleProjectileLaunched_Implementation(const UNinjaCombatProjectileRequest* Request, AActor* Projectile)
{
	FNinjaCombatAttackSupport::HandleProjectileLaunched(this, Projectile);
}

bool UCombatAbility_Attack::CreateSpecHandleForMeleeHit(const UNinjaCombatMeleeScan* MeleeScan, FGameplayEffectSpecHandle& OutHandle) const
{
	return FNinjaCombatAttackSupport::CreateSpecHandleForMeleeHit(this, MeleeScan, OutHandle);
}

void UCombatAbility_Attack::ResetCurrentTargets() const
{
	UAbilitySystemComponent* AbilitySystemComponent = GetAbilitySystemComponentFromActorInfo();
	if (IsValid(AbilitySystemComponent))
	{
		FGameplayEventData* Payload = new FGameplayEventData();
		Payload->EventTag = Tag_Combat_Event_Combo_Target_Reset;
		Payload->Instigator = GetAvatarActorFromActorInfo();
		Payload->Target = GetAvatarActorFromActorInfo();
		AbilitySystemComponent->HandleGameplayEvent(Tag_Combat_Event_Combo_Target_Reset, Payload);
	}
}

TArray<FActiveGameplayEffectHandle> UCombatAbility_Attack::ApplyGameplayEffectSpecToHitResult(
	const FGameplayEffectSpecHandle& SpecHandle, const FHitResult* HitResult)
{
	FGameplayAbilityTargetingLocationInfo TargetInfo;
	TargetInfo.LocationType = EGameplayAbilityTargetingLocationType::ActorTransform;
	TargetInfo.SourceActor = GetAvatarActorFromActorInfo();
	TargetInfo.SourceAbility = this;

	const FGameplayAbilityTargetDataHandle TargetData = TargetInfo.MakeTargetDataHandleFromHitResult(this, *HitResult);
	return ApplyGameplayEffectSpecToTarget(GetCurrentAbilitySpecHandle(), GetCurrentActorInfo(), GetCurrentActivationInfo(), SpecHandle, TargetData);	
}

void UCombatAbility_Attack::EndAbility(const FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo,
	const bool bReplicateEndAbility, const bool bWasCancelled)
{
	FinishLatentTasks({ AttackEventTask, MeleeScanTask, SpawnProjectileTask });
	ResetCurrentTargets();
	Super::EndAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled);
}

void UCombatAbility_Attack::ReceiveCombatTarget_Implementation(AActor* CombatTarget)
{
	if (bShouldLockOnMeleeTarget && IsValid(CombatTarget))
	{
		const UActorComponent* TargetManagerComponent = GetTargetManagerComponentFromActorInfo();
		if (UNinjaCombatFunctionLibrary::IsValidTargetManagerComponent(TargetManagerComponent))
		{
			const AActor* CurrentTarget = ICombatTargetManagerInterface::Execute_GetCombatTarget(TargetManagerComponent);
			if (CurrentTarget == nullptr)
			{
				const FGameplayTag TargetAcquiredEventTag = Tag_Combat_Event_Target_Acquired;
				
				FGameplayEventData Payload;
				Payload.EventTag = TargetAcquiredEventTag;
				Payload.Instigator = GetAvatarActorFromActorInfo();
				Payload.Target = GetAvatarActorFromActorInfo();
				Payload.OptionalObject = CombatTarget;

				SendGameplayEvent(TargetAcquiredEventTag, Payload);
			}
		}
	}
	
	Super::ReceiveCombatTarget_Implementation(CombatTarget);
}
