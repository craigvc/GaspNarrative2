// Ninja Bear Studio Inc., all rights reserved.
#include "AbilitySystem/Abilities/CombatAbility_OpportunityAttack.h"

#include "AbilitySystemComponent.h"
#include "AbilitySystemGlobals.h"
#include "ContextualAnimSceneAsset.h"
#include "ContextualAnimTypes.h"
#include "NinjaCombatFunctionLibrary.h"
#include "NinjaCombatLog.h"
#include "NinjaCombatTags.h"
#include "Abilities/Tasks/AbilityTask_NetworkSyncPoint.h"
#include "Abilities/Tasks/AbilityTask_WaitGameplayEvent.h"
#include "AbilitySystem/Abilities/NinjaCombatAttackSupport.h"
#include "AbilitySystem/Effects/CombatEffect_OpportunityAttacker.h"
#include "AbilitySystem/Effects/CombatEffect_OpportunityVictim.h"
#include "AbilitySystem/Tasks/AbilityTask_PlayOpportunityAnimation.h"
#include "AbilitySystem/Tasks/AbilityTask_ScanMeleeTarget.h"
#include "AbilitySystem/Tasks/AbilityTask_SpawnProjectile.h"
#include "AbilityTasks/AbilityTask_PerformTargeting.h"
#include "Components/NinjaCombatManagerComponent.h"
#include "Engine/World.h"
#include "GameFramework/MovementComponent.h"
#include "GameFramework/NinjaCombatCameraAnchorActor.h"
#include "GameFramework/NinjaCombatOpportunityHit.h"
#include "Interfaces/CombatCameraManagerInterface.h"
#include "Interfaces/Components/CombatDamageManagerInterface.h"
#include "Interfaces/Components/CombatMovementManagerInterface.h"
#include "TargetingSystem/TargetingPreset.h"
#include "TargetingSystem/TargetingSubsystem.h"

UCombatAbility_OpportunityAttack::UCombatAbility_OpportunityAttack(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	bHasAbilityFallback = false;
	FallbackAbilityTags = FGameplayTagContainer::EmptyContainer;

	FGameplayTagContainer InitialTags;
	InitialTags.AddTagFast(Tag_Combat_Ability_Opportunity);
	SetInitialTags(InitialTags);
	
	ActivationOwnedTags.AddTag(Tag_Combat_Input_Block_Camera);
	ActivationOwnedTags.AddTag(Tag_Combat_Input_Block_Movement);
	ActivationOwnedTags.AddTag(Tag_Combat_Input_Block_Rotation);
	
	ActivationBlockedTags.AddTag(Tag_Combat_Ability_Combo);
	ActivationBlockedTags.AddTag(Tag_Combat_State_Staggered);
	ActivationBlockedTags.AddTag(Tag_Combat_State_Dead);
	
	BlockAbilitiesWithTag.AddTag(Tag_Combat_Ability_Attack);
	BlockAbilitiesWithTag.AddTag(Tag_Combat_Ability_Block);
	BlockAbilitiesWithTag.AddTag(Tag_Combat_Ability_Cast);
	BlockAbilitiesWithTag.AddTag(Tag_Combat_Ability_Death);
	BlockAbilitiesWithTag.AddTag(Tag_Combat_Ability_Evade);
	BlockAbilitiesWithTag.AddTag(Tag_Combat_Ability_HitReaction);

	CancelAbilitiesWithTag.AddTag(Tag_Combat_Ability_TargetLock);
	
	AttackerStateClass = UCombatEffect_OpportunityAttacker::StaticClass();
	VictimStateClass = UCombatEffect_OpportunityVictim::StaticClass();
	CameraAnchorClass = ANinjaCombatCameraAnchorActor::StaticClass();
}

bool UCombatAbility_OpportunityAttack::HasVictim() const
{
	return VictimPtr.IsValid() && VictimPtr->IsValidLowLevelFast();
}

AActor* UCombatAbility_OpportunityAttack::GetCurrentVictim() const
{
	if (HasVictim())
	{
		return VictimPtr.Get();
	}

	return nullptr;
}

APlayerController* UCombatAbility_OpportunityAttack::GetPlayerController() const
{
	const TWeakObjectPtr<APlayerController>& PlayerControllerPtr = GetActorInfo().PlayerController;
	if (PlayerControllerPtr.IsValid() && PlayerControllerPtr->IsValidLowLevelFast())
	{
		return PlayerControllerPtr.Get();
	}

	return nullptr;
}

void UCombatAbility_OpportunityAttack::LockTarget()
{
	const AActor* Victim = GetCurrentVictim();
	const UAbilitySystemComponent* VictimASC = UAbilitySystemGlobals::GetAbilitySystemComponentFromActor(Victim);

	if (IsValid(VictimASC) && !VictimASC->HasMatchingGameplayTag(Tag_Combat_State_Dead))
	{
		FGameplayEventData Payload = FGameplayEventData();
		Payload.OptionalObject = Victim;
		SendGameplayEvent(Tag_Combat_Event_Target_Acquired, Payload);
	}
}

void UCombatAbility_OpportunityAttack::UnlockTarget()
{
	const FGameplayEventData Payload = FGameplayEventData();
	SendGameplayEvent(Tag_Combat_Event_Target_Dismissed, Payload);
}

bool UCombatAbility_OpportunityAttack::CanActivateAbility(const FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo* ActorInfo, const FGameplayTagContainer* SourceTags,
	const FGameplayTagContainer* TargetTags, FGameplayTagContainer* OptionalRelevantTags) const
{
	return Super::CanActivateAbility(Handle, ActorInfo, SourceTags, TargetTags, OptionalRelevantTags)
		&& IsValid(TargetingPreset)
		&& IsValid(ContextualAnimation)			
		&& IsValid(AttackerStateClass)
		&& IsValid(VictimStateClass)
		&& !VictimPtr.IsValid();
}

void UCombatAbility_OpportunityAttack::ActivateAbility(const FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo,
	const FGameplayEventData* TriggerEventData)
{
	Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);

	TargetingTask = UAbilityTask_PerformTargeting::PerformTargetingRequest(this, TargetingPreset, true);
	if (!IsValid(TargetingTask))
	{
		COMBAT_LOG(Error, "Unable to create Targeting Task!");
		K2_CancelAbility();
	}

	TargetingTask->OnTargetReady.AddUniqueDynamic(this, &ThisClass::HandleTargetReady);
	TargetingTask->ReadyForActivation();
}

void UCombatAbility_OpportunityAttack::HandleTargetReady(const FTargetingRequestHandle TargetingRequestHandle)
{
	const UTargetingSubsystem* TargetingSubsystem = UTargetingSubsystem::Get(GetWorld());
	check(IsValid(TargetingSubsystem));

	TArray<AActor*> TargetsFound;
	TargetingSubsystem->GetTargetingResultsActors(TargetingRequestHandle, TargetsFound);

	if (TargetsFound.IsValidIndex(0))
	{
		AActor* Target = TargetsFound[0];
		VictimPtr = Target;

		static constexpr bool bExactOnly = false;
		OpportunityDamageEventTask = InitializeEventTask(Tag_Combat_Event, bExactOnly);
		OpportunityDamageEventTask->ReadyForActivation();	
		
		NetSyncTask = UAbilityTask_NetworkSyncPoint::WaitNetSync(this, EAbilityTaskNetSyncType::OnlyServerWait);
		NetSyncTask->OnSync.AddUniqueDynamic(this, &ThisClass::ExecuteOpportunityAttack);
		NetSyncTask->ReadyForActivation();
	}
	else if (bHasAbilityFallback && FallbackAbilityTags.IsValid())
	{
		K2_EndAbility();
		UAbilitySystemComponent* AbilitySystemComponent = GetAbilitySystemComponentFromActorInfo_Ensured();
		AbilitySystemComponent->TryActivateAbilitiesByTag(FallbackAbilityTags);
	}
	else
	{
		COMBAT_LOG(Verbose, "No targets available for Opportunity Attack!");
		K2_CancelAbility();
	}
}

TMap<FName, AActor*> UCombatAbility_OpportunityAttack::CollectAdditionalSceneActors_Implementation()
{
	return TMap<FName, AActor*>();
}

void UCombatAbility_OpportunityAttack::ExecuteOpportunityAttack()
{
	if (!ApplyOpportunityGameplayEffects())
	{
		K2_CancelAbility();	
	}

	HandleOpportunityAttackStarting();
	
	// The Contextual Animation should only play in the authoritative version.
	// Replication is handled by the Contextual Animation Component.
	//
	if (HasAuthority(&GetCurrentActivationInfoRef()))
	{
		AActor* Attacker = GetAvatarActorFromActorInfo();
		AActor* Victim = GetCurrentVictim();
		const TMap<FName, AActor*> AdditionalSceneActors = CollectAdditionalSceneActors();

		OpportunityAnimationTask = UAbilityTask_PlayOpportunityAnimation::CreateTask(this, ContextualAnimation, Attacker, Victim);
		OpportunityAnimationTask->OnLeftScene.AddUniqueDynamic(this, &ThisClass::HandleAvatarLeftScene);
		OpportunityAnimationTask->OnSceneFailed.AddUniqueDynamic(this, &ThisClass::HandleAvatarLeftScene);
		OpportunityAnimationTask->SetAdditionalSceneActors(AdditionalSceneActors);
		OpportunityAnimationTask->ReadyForActivation();
	}
	
	if (IsLocallyControlled())
	{
		ConfigureAndPlayCameraAnimation();
	}
}

bool UCombatAbility_OpportunityAttack::ApplyOpportunityGameplayEffects()
{
	AActor* Victim = GetCurrentVictim();
	if (!IsValid(Victim))
	{
		COMBAT_LOG(Verbose, "Invalid target for Opportunity Attack!");
		K2_CancelAbility();
	}
	
	if (!HasAuthorityOrPredictionKey(GetCurrentActorInfo(), &GetCurrentActivationInfoRef()))
	{
		COMBAT_LOG(Verbose, "No authority to apply Opportunity Effects!");
		return false;
	}
	
	const FGameplayEffectSpecHandle AttackerHandle = MakeOutgoingGameplayEffectSpec(AttackerStateClass);
	AttackerStateHandle = K2_ApplyGameplayEffectSpecToOwner(AttackerHandle);

	const FGameplayEffectSpecHandle VictimHandle = MakeOutgoingGameplayEffectSpec(VictimStateClass);
	const FGameplayAbilityTargetingLocationInfo TargetingLocation;
	const FGameplayAbilityTargetDataHandle TargetHandle = TargetingLocation.MakeTargetDataHandleFromActors({ Victim });
	VictimStateHandles = K2_ApplyGameplayEffectSpecToTarget(VictimHandle, TargetHandle);

	return AttackerStateHandle.IsValid() && !VictimStateHandles.IsEmpty();
}

void UCombatAbility_OpportunityAttack::ConfigureAndPlayCameraAnimation()
{
	const APlayerController* PlayerController = GetPlayerController();
	if (!IsValid(PlayerController) || !PlayerController->IsLocalController() || !CameraAnimation || !CameraAnchorClass)
	{
		return;
	}

	APlayerCameraManager* CameraManager = PlayerController->PlayerCameraManager;
	if (IsValid(CameraManager) && CameraManager->Implements<UCombatCameraManagerInterface>())
	{
		const FTransform AvatarTransform = GetAvatarActorFromActorInfo()->GetTransform();
		
		FActorSpawnParameters SpawnParameters;
		SpawnParameters.Owner = GetAvatarActorFromActorInfo();
		SpawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
		
		Anchor = GetWorld()->SpawnActor<ANinjaCombatCameraAnchorActor>(CameraAnchorClass, AvatarTransform, SpawnParameters);
		Anchor->SetSource(GetAvatarActorFromActorInfo());

		Anchor->SetActorTransform(AvatarTransform);
		const FCombatCameraAnimationParameters& Parameters = BuildCameraAnimationParameters();
		ICombatCameraManagerInterface::Execute_PlayCombatCameraAnimation(CameraManager, Anchor, CameraAnimation, Parameters);
	}
}

void UCombatAbility_OpportunityAttack::HandleEventReceived_Implementation(const FGameplayEventData Payload)
{
	Super::HandleEventReceived_Implementation(Payload);
	FNinjaCombatAttackSupport::HandleEventReceived(this, Payload);

	if (Payload.EventTag == Tag_Combat_Event_Opportunity_Damage)
	{
		const UNinjaCombatOpportunityHit* OpportunityHit = Cast<UNinjaCombatOpportunityHit>(Payload.OptionalObject);
		if (IsValid(OpportunityHit))
		{
			AActor* EffectCauser = OpportunityHit->GetCauser();
			TSubclassOf<UGameplayEffect> DamageEffectClass = OpportunityHit->GetOpportunityHitEffect();
			if (!IsValid(DamageEffectClass))
			{
				DamageEffectClass = ICombatMeleeInterface::Execute_GetHitEffectClass(EffectCauser);
			}
			
			FGameplayEffectSpecHandle SpecHandle;
			if (CreateSpecHandleForOpportunityHit(EffectCauser, DamageEffectClass, SpecHandle) && SpecHandle.IsValid())
			{
				ApplyGameplayEffectSpecToOpportunityTarget(SpecHandle);
			}
		}
	}
}

void UCombatAbility_OpportunityAttack::InitializeMeleeScanTask(const UNinjaCombatMeleeScan* MeleeScan)
{
	MeleeScanTask = UAbilityTask_ScanMeleeTarget::CreateTask(this, bEnableDebug);
	checkf(IsValid(MeleeScanTask), TEXT("Unexpected invalid Melee Scan Task instance."));

	MeleeScanTask->Join(MeleeScan);
	MeleeScanTask->OnMeleeTargetsFound.AddDynamic(this, &ThisClass::HandleMeleeScanTargetsReceived);
	MeleeScanTask->ReadyForActivation();	
}

void UCombatAbility_OpportunityAttack::InitializeProjectileTask(const UNinjaCombatProjectileRequest* ProjectileRequest)
{
	SpawnProjectileTask = UAbilityTask_SpawnProjectile::CreateTask(this, bEnableDebug);
	checkf(IsValid(SpawnProjectileTask), TEXT("Unexpected invalid Spawn Projectile Task instance."));

	SpawnProjectileTask->AddProjectileRequest(ProjectileRequest);
	SpawnProjectileTask->OnProjectileLaunched.AddDynamic(this, &ThisClass::HandleProjectileLaunched);
	SpawnProjectileTask->ReadyForActivation();
}

void UCombatAbility_OpportunityAttack::HandleMeleeScanTargetsReceived_Implementation(const UNinjaCombatMeleeScan* MeleeScan, const FGameplayAbilityTargetDataHandle& Data)
{
	FNinjaCombatAttackSupport::HandleMeleeScanTargetsReceived(this, MeleeScan, Data);
}

void UCombatAbility_OpportunityAttack::HandleProjectileLaunched_Implementation(const UNinjaCombatProjectileRequest* Request, AActor* Projectile)
{
	FNinjaCombatAttackSupport::HandleProjectileLaunched(this, Projectile);
}

bool UCombatAbility_OpportunityAttack::CreateSpecHandleForOpportunityHit(AActor* EffectCauser, const TSubclassOf<UGameplayEffect>& DamageEffectClass, FGameplayEffectSpecHandle& OutHandle) const
{
	if (!IsValid(EffectCauser) || !IsValid(DamageEffectClass))
	{
		return false;
	}
	
	const float EffectLevel = GetAbilityLevel();
	OutHandle = MakeOutgoingGameplayEffectSpec(DamageEffectClass, EffectLevel);
	if (!OutHandle.IsValid())
	{
		return false;
	}
	
	OutHandle.Data.Get()->GetContext().AddInstigator(GetAvatarActorFromActorInfo(), EffectCauser);
	return true;
}

TArray<FActiveGameplayEffectHandle> UCombatAbility_OpportunityAttack::ApplyGameplayEffectSpecToHitResult(const FGameplayEffectSpecHandle& SpecHandle, const FHitResult* HitResult)
{
	// Forward the request to the one that handles all cases for Opportunity Attacks.
	return ApplyGameplayEffectSpecToOpportunityTarget(SpecHandle, HitResult);
}

TArray<FActiveGameplayEffectHandle> UCombatAbility_OpportunityAttack::ApplyGameplayEffectSpecToOpportunityTarget(const FGameplayEffectSpecHandle& SpecHandle, const FHitResult* HitResult)
{
	FGameplayAbilityTargetingLocationInfo TargetInfo;
	TargetInfo.LocationType = EGameplayAbilityTargetingLocationType::ActorTransform;
	TargetInfo.SourceActor = GetAvatarActorFromActorInfo();
	TargetInfo.SourceAbility = this;

	FGameplayAbilityTargetDataHandle TargetData;
	if (HitResult)
	{
		TargetData = TargetInfo.MakeTargetDataHandleFromHitResult(this, *HitResult);	
	}
	else
	{
		const TArray Actors = { VictimPtr };
		TargetData = TargetInfo.MakeTargetDataHandleFromActors(Actors);
	}

	return ApplyGameplayEffectSpecToTarget(GetCurrentAbilitySpecHandle(), GetCurrentActorInfo(), GetCurrentActivationInfo(), SpecHandle, TargetData);	
}

FCombatCameraAnimationParameters UCombatAbility_OpportunityAttack::BuildCameraAnimationParameters_Implementation() const
{
	return FCombatCameraAnimationParameters();
}

void UCombatAbility_OpportunityAttack::HandleAvatarLeftScene(UContextualAnimSceneActorComponent* SceneActorComponent)
{
	K2_EndAbility();
}

void UCombatAbility_OpportunityAttack::EndAbility(const FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo,
	const bool bReplicateEndAbility, const bool bWasCancelled)
{
	FinishLatentTasks({TargetingTask, OpportunityAnimationTask, OpportunityDamageEventTask, NetSyncTask, MeleeScanTask });
	
	RemoveOpportunityGameplayEffects();
	StopCameraAnimation();
	
	if (HasVictim())
	{
		HandleVictimDeath();
		VictimPtr.Reset();
	}

	if (IsValid(Anchor))
	{
		Anchor->Destroy();
	}
	
	Super::EndAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled);
}

void UCombatAbility_OpportunityAttack::RemoveOpportunityGameplayEffects()
{
	if (AttackerStateHandle.IsValid())
	{
		BP_RemoveGameplayEffectFromOwnerWithHandle(AttackerStateHandle);
		AttackerStateHandle.Invalidate();	
	}

	const AActor* Victim = GetCurrentVictim();
	if (IsValid(Victim) && !VictimStateHandles.IsEmpty())
	{
		UAbilitySystemComponent* VictimASC = UAbilitySystemGlobals::GetAbilitySystemComponentFromActor(Victim);
		if (IsValid(VictimASC))
		{
			for (FActiveGameplayEffectHandle& Handle : VictimStateHandles)
			{
				VictimASC->RemoveActiveGameplayEffect(Handle);
				Handle.Invalidate();	
			}
		}

		VictimStateHandles.Empty();
	}	
}

void UCombatAbility_OpportunityAttack::StopCameraAnimation() const
{
	const APlayerController* PlayerController = GetPlayerController();
	if (!IsValid(PlayerController) || !PlayerController->IsLocalController() || !CameraAnimation)
	{
		return;
	}

	APlayerCameraManager* CameraManager = PlayerController->PlayerCameraManager;
	if (IsValid(CameraManager) && CameraManager->Implements<UCombatCameraManagerInterface>())
	{
		ICombatCameraManagerInterface::Execute_StopCombatCameraAnimation(CameraManager);
	}
}

void UCombatAbility_OpportunityAttack::HandleOpportunityAttackStarting_Implementation()
{
	// The Contextual Animation component will create a backup of the "strafe" settings and restore
	// them when the animation ends. This would override the target lock settings, when the ability
	// ends, and the character would be in a state of "no target, yet strafing".
	//
	// Interrupting the Target Lock here would also work, but we do not want to do that, since that
	// would also make the enemy's marker actor detach and potentially a health bar. We still want
	// to see those during the opportunity attack!
	//
	UMovementComponent* MovementComponent = GetMovementComponent();
	if (MovementComponent && MovementComponent->Implements<UCombatMovementManagerInterface>())
	{
		ICombatMovementManagerInterface::Execute_SetStrafing(MovementComponent, false);		
	}

	// Inform, via the Combat Manager delegate, that an attack is starting. Any potential victim
	// may want to know about this, so they can potentially block, receive alerts, and so on.
	//
	UNinjaCombatManagerComponent* CombatManager = GetCombatManagerComponentFromActorInfo();
	if (IsValid(CombatManager))
	{
		const FGameplayTagContainer MyTags = GetAbilityTags(); 
		CombatManager->BroadcastAttack(MyTags);
	}
}

void UCombatAbility_OpportunityAttack::HandleVictimDeath()
{
	const AActor* Victim = GetCurrentVictim();
	const UAbilitySystemComponent* VictimASC = UAbilitySystemGlobals::GetAbilitySystemComponentFromActor(Victim);
	if (!IsValid(VictimASC) || !VictimASC->HasMatchingGameplayTag(Tag_Combat_State_Dead))
	{
		// The victim is not dead.
		return;
	}
	
	UActorComponent* DamageManager = UNinjaCombatFunctionLibrary::GetDamageManagerComponent(Victim);
	if (UNinjaCombatFunctionLibrary::IsValidDamageManagerComponent(DamageManager))
	{
		UnlockTarget();
		ICombatDamageManagerInterface::Execute_FinishDying(DamageManager);
	}
}
