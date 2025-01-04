// Ninja Bear Studio Inc., all rights reserved.
#include "Components/NinjaCombatManagerComponent.h"

#include "AbilitySystemComponent.h"
#include "AbilitySystemGlobals.h"
#include "NinjaCombatActorPoolFunctionLibrary.h"
#include "NinjaCombatFunctionLibrary.h"
#include "NinjaCombatLog.h"
#include "NinjaCombatSettings.h"
#include "NinjaCombatTags.h"
#include "TimerManager.h"
#include "AbilitySystem/NinjaCombatAttributeSet.h"
#include "AbilitySystem/Effects/CombatEffect_LastStand.h"
#include "Components/ArrowComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/MeshComponent.h"
#include "Components/NinjaCombatActorPoolComponent.h"
#include "Components/NinjaCombatComboManagerComponent.h"
#include "Components/NinjaCombatDissolveComponent.h"
#include "Components/NinjaCombatMotionWarpingComponent.h"
#include "Components/NinjaCombatPhysicalAnimationComponent.h"
#include "Components/NinjaCombatWeaponManagerComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Damage/NinjaCombatDamageHandler.h"
#include "Data/NinjaCombatDamageDataAsset.h"
#include "Engine/World.h"
#include "GameFramework/Actor.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/GameModeBase.h"
#include "GameFramework/GameStateBase.h"
#include "GameFramework/NinjaCombatMarkerActor.h"
#include "GameFramework/NinjaCombatMeleeScan.h"
#include "GameFramework/Pawn.h"
#include "Interfaces/CombatDamageModifierInterface.h"
#include "Interfaces/CombatSystemInterface.h"
#include "Interfaces/Components/CombatDefenseManagerInterface.h"
#include "Interfaces/Components/CombatWeaponManagerInterface.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Net/UnrealNetwork.h"
#include "Perception/AISense_Damage.h"

UNinjaCombatManagerComponent::UNinjaCombatManagerComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
	PrimaryComponentTick.bStartWithTickEnabled = false;
	SetIsReplicatedByDefault(true);

	bWantsInitializeComponent = true;
	bBindToAbilityComponent = true;
	bIsStaggered = false;
	bIsDead = false;
	bFinishDyingStarted = false;
	bRotateControllerToTarget = true;
	bLockControllerPitch = false;
	bLockControllerYaw = true;
	bShouldPauseAnimations = true;
	RotationInterpSpeed = 360.f;
	TargetMarkerActorClass = GetDefault<UNinjaCombatSettings>()->DefaultTargetLockActorClass;
	LastStandEffectClass = UCombatEffect_LastStand::StaticClass();
	
	UnblockableDamageTags = FGameplayTagContainer::EmptyContainer;
	UnblockableDamageTags.AddTagFast(Tag_Combat_Effect_Damage_Recurring);
}

void UNinjaCombatManagerComponent::InitializeComponent()
{
	Super::InitializeComponent();

	// Make sure that the correct Damage Manager is used by the Damage Taken List.
	// This could be this component or a different implementation of the interface.
	//
	UActorComponent* DamageManager = GetAndCacheDamageManager();
	DamageTakenList.SetDamageManager(DamageManager);
}

void UNinjaCombatManagerComponent::BeginPlay()
{
	Super::BeginPlay();

	CachedForwardReference = ICombatSystemInterface::Execute_GetCombatForwardReference(GetOwner());
	if (CachedForwardReference == nullptr)
	{
		CachedForwardReference = CreateForwardReference();
	}
}

void UNinjaCombatManagerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	
	DOREPLIFETIME(ThisClass, CombatTarget);
	DOREPLIFETIME(ThisClass, DamageTakenList);

	DOREPLIFETIME_CONDITION(ThisClass, bIsBlocking, COND_SkipOwner);
	DOREPLIFETIME_CONDITION(ThisClass, bIsInvulnerable, COND_SkipOwner);
	DOREPLIFETIME_CONDITION(ThisClass, bIsStaggered, COND_SkipOwner);
	DOREPLIFETIME_CONDITION(ThisClass, bIsDead, COND_SkipOwner);
}

void UNinjaCombatManagerComponent::TickComponent(const float DeltaTime, const ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	RotateToTarget(DeltaTime);
}

void UNinjaCombatManagerComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	for (auto It = MeleeScanTimerHandles.CreateIterator(); It; ++It)
	{
		FTimerHandle TimerHandle = It.Value(); 
		GetWorld()->GetTimerManager().ClearTimer(TimerHandle);
		It.RemoveCurrent();
	}
	
	Super::EndPlay(EndPlayReason);
}

UActorComponent* UNinjaCombatManagerComponent::GetAndCacheComboManager()
{
	CachedComboManager = ICombatSystemInterface::Execute_GetComboManagerComponent(GetOwner());
	if (!IsValid(CachedComboManager))
	{
		CachedComboManager = CreateComboManagerComponent();
		check(IsValid(CachedComboManager) && CachedComboManager->Implements<UCombatComboManagerInterface>());
		COMBAT_LOG_ARGS(Verbose, "Created a new Combo Manager of type '%s' for '%s'.", *GetNameSafe(CachedComboManager->GetClass()), *GetNameSafe(GetOwner()));
	}

	return CachedComboManager;
}

UActorComponent* UNinjaCombatManagerComponent::GetAndCacheDamageManager()
{
	CachedDamageManager = ICombatSystemInterface::Execute_GetDamageManagerComponent(GetOwner());
	if (!IsValid(CachedDamageManager))
	{
		CachedDamageManager = CreateDamageManagerComponent();
		check(IsValid(CachedDamageManager) && CachedDamageManager->Implements<UCombatDamageManagerInterface>());
		COMBAT_LOG_ARGS(Verbose, "Created a new Damage Manager of type '%s' for '%s'.", *GetNameSafe(CachedDamageManager->GetClass()), *GetNameSafe(GetOwner()));
	}

	return CachedDamageManager;
}

UActorComponent* UNinjaCombatManagerComponent::GetAndCacheDefenseManager()
{
	CachedDefenseManager = ICombatSystemInterface::Execute_GetDefenseManagerComponent(GetOwner());
	if (!IsValid(CachedDefenseManager))
	{
		CachedDefenseManager = CreateDefenseManagerComponent();
		check(IsValid(CachedDefenseManager) && CachedDefenseManager->Implements<UCombatDefenseManagerInterface>());
		COMBAT_LOG_ARGS(Verbose, "Created a new Defense Manager of type '%s' for '%s'.", *GetNameSafe(CachedDefenseManager->GetClass()), *GetNameSafe(GetOwner()));
	}

	return CachedDefenseManager;
}

UActorComponent* UNinjaCombatManagerComponent::GetAndCacheDissolveManager()
{
	CachedDissolveManager = ICombatSystemInterface::Execute_GetDissolveManagerComponent(GetOwner());
	if (!IsValid(CachedDissolveManager))
	{
		CachedDissolveManager = CreateDissolveManagerComponent();
		check(IsValid(CachedDissolveManager) && CachedDissolveManager->Implements<UCombatDissolveManagerInterface>());
		COMBAT_LOG_ARGS(Verbose, "Created a new Dissolve Manager of type '%s' for '%s'.", *GetNameSafe(CachedDissolveManager->GetClass()), *GetNameSafe(GetOwner()));
	}

	return CachedDissolveManager;
}

UActorComponent* UNinjaCombatManagerComponent::GetAndCacheMotionWarping()
{
	CachedMotionWarping = ICombatSystemInterface::Execute_GetMotionWarpingComponent(GetOwner());
	if (!IsValid(CachedMotionWarping))
	{
		CachedMotionWarping = CreateMotionWarpingComponent();
		check(IsValid(CachedMotionWarping) && CachedMotionWarping->Implements<UCombatMotionWarpingInterface>());
		COMBAT_LOG_ARGS(Verbose, "Created a new Motion Warping component of type '%s' for '%s'.", *GetNameSafe(CachedMotionWarping->GetClass()), *GetNameSafe(GetOwner()));		
	}

	return CachedMotionWarping;
}

UActorComponent* UNinjaCombatManagerComponent::GetAndCachePhysicalAnimation()
{
	CachedPhysicalAnimation = ICombatSystemInterface::Execute_GetPhysicalAnimationComponent(GetOwner());
	if (!IsValid(CachedPhysicalAnimation))
	{
		CachedPhysicalAnimation = CreatePhysicalAnimationComponent();
		check(IsValid(CachedPhysicalAnimation) && CachedPhysicalAnimation->Implements<UCombatPhysicalAnimationInterface>());
		COMBAT_LOG_ARGS(Verbose, "Created a new Physical Animation component of type '%s' for '%s'.", *GetNameSafe(CachedPhysicalAnimation->GetClass()), *GetNameSafe(GetOwner()));		
	}

	return CachedPhysicalAnimation;
}

UActorComponent* UNinjaCombatManagerComponent::GetAndCacheTargetManager()
{
	CachedTargetManager = ICombatSystemInterface::Execute_GetTargetManagerComponent(GetOwner());
	if (!IsValid(CachedTargetManager))
	{
		CachedTargetManager = CreateTargetManagerComponent();
		check(IsValid(CachedTargetManager) && CachedTargetManager->Implements<UCombatDefenseManagerInterface>());
		COMBAT_LOG_ARGS(Verbose, "Created a new Target Manager of type '%s' for '%s'.", *GetNameSafe(CachedTargetManager->GetClass()), *GetNameSafe(GetOwner()));
	}

	return CachedTargetManager;
}

UActorComponent* UNinjaCombatManagerComponent::GetAndCacheWeaponManager()
{
	CachedWeaponManager = ICombatSystemInterface::Execute_GetWeaponManagerComponent(GetOwner());
	if (!IsValid(CachedWeaponManager))
	{
		CachedWeaponManager = CreateWeaponManagerComponent();
		check(IsValid(CachedWeaponManager) && CachedWeaponManager->Implements<UCombatWeaponManagerInterface>());
		COMBAT_LOG_ARGS(Verbose, "Created a new Weapon Manager component of type '%s' for '%s'.", *GetNameSafe(CachedWeaponManager->GetClass()), *GetNameSafe(GetOwner()));
	}

	return CachedWeaponManager;
}

int32 UNinjaCombatManagerComponent::RegisterMeleeScanRequest(const UNinjaCombatMeleeScan* MeleeScan)
{
	int32 RequestId = INDEX_NONE;
	
	if (!IsValid(MeleeScan) && MeleeScan->HasValidScanData())
	{
		return RequestId;
	}

	if (OwnerHasAuthority())
	{
		UAbilitySystemComponent* AbilityComponent = GetAbilitySystemComponentFromOwner();
		if (!ensure(IsValid(AbilityComponent)))
		{
			return RequestId;
		}

		FGameplayEventData Payload;
		Payload.EventTag = Tag_Combat_Event_MeleeScan_Start;
		Payload.Instigator = MeleeScan->GetInstigator();
		Payload.Target = GetOwner();
		Payload.OptionalObject = MeleeScan;
		AbilityComponent->HandleGameplayEvent(Tag_Combat_Event_MeleeScan_Start, &Payload);
		RequestId = FMath::Rand();
	}
	
	const FGameplayTag TrailGameplayCueTag = MeleeScan->GetTrailGameplayCueTag();
	if (TrailGameplayCueTag.IsValid() && !UKismetSystemLibrary::IsDedicatedServer(GetWorld()))
	{
		FGameplayCueParameters Parameters;
		Parameters.EffectCauser = MeleeScan->GetCauser();
		Parameters.SourceObject = MeleeScan;
		UNinjaCombatFunctionLibrary::AddGameplayCueLocally(GetOwner(), TrailGameplayCueTag, Parameters);
		RequestId = FMath::Rand();
	}

	if (RequestId != INDEX_NONE)
	{
		MeleeScanMap.Add(RequestId, MeleeScan);

		const float Duration = MeleeScan->GetDuration();
		if (Duration > 0.f)
		{
			FTimerHandle TimerHandle;
			const FTimerDelegate TimerDelegate = FTimerDelegate::CreateUObject(this, &ThisClass::CancelMeleeScanRequest, RequestId);
			GetWorld()->GetTimerManager().SetTimer(TimerHandle, TimerDelegate, Duration, false);

			if (TimerHandle.IsValid())
			{
				MeleeScanTimerHandles.Add(RequestId, TimerHandle);
			}
		}
	}
	
	return RequestId;
}

void UNinjaCombatManagerComponent::CancelMeleeScanRequest(const int32 RequestId)
{
	if (RequestId == INDEX_NONE || !MeleeScanMap.Contains(RequestId))
	{
		return;
	}

	UAbilitySystemComponent* AbilityComponent = GetAbilitySystemComponentFromOwner();
	if (!ensure(IsValid(AbilityComponent)))
	{
		return;
	}

	const UNinjaCombatMeleeScan* MeleeScan = MeleeScanMap.FindAndRemoveChecked(RequestId);

	if (OwnerHasAuthority())
	{
		FGameplayEventData Payload;
		Payload.EventTag = Tag_Combat_Event_MeleeScan_Stop;
		Payload.Instigator = MeleeScan->GetInstigator();
		Payload.Target = GetOwner();
		Payload.OptionalObject = MeleeScan;
		AbilityComponent->HandleGameplayEvent(Tag_Combat_Event_MeleeScan_Stop, &Payload);
	}

	const FGameplayTag TrailGameplayCueTag = MeleeScan->GetTrailGameplayCueTag();
	if (TrailGameplayCueTag.IsValid() && !UKismetSystemLibrary::IsDedicatedServer(GetWorld()))
	{
		FGameplayCueParameters Parameters;
		Parameters.EffectCauser = MeleeScan->GetCauser();
		Parameters.SourceObject = MeleeScan;
		UNinjaCombatFunctionLibrary::RemoveGameplayCueLocally(GetOwner(), TrailGameplayCueTag, Parameters);
	}

	if (MeleeScanTimerHandles.Contains(RequestId))
	{
		FTimerHandle TimerHandle = MeleeScanTimerHandles.FindAndRemoveChecked(RequestId); 
		GetWorld()->GetTimerManager().ClearTimer(TimerHandle);
	}
}

void UNinjaCombatManagerComponent::BroadcastAttack(const FGameplayTagContainer AbilityTags)
{
	AActor* CurrentTarget = Execute_GetCombatTarget(this);
	OnAttackStarted.Broadcast(this, AbilityTags, CurrentTarget);
}

void UNinjaCombatManagerComponent::OnAbilitySystemComponentReceived()
{
	UAbilitySystemComponent* AbilitySystemComponent = GetCachedAbilitySystemComponent();
	if (!IsValid(AbilitySystemComponent))
	{
		return;
	}

	BlockingTagHandle = AbilitySystemComponent->RegisterGameplayTagEvent(Tag_Combat_State_Blocking, EGameplayTagEventType::NewOrRemoved)
		.AddUObject(this, &ThisClass::HandleTagChanged);

	InvulnerabilityTagHandle = AbilitySystemComponent->RegisterGameplayTagEvent(Tag_Combat_State_Invulnerable, EGameplayTagEventType::NewOrRemoved)
		.AddUObject(this, &ThisClass::HandleTagChanged);

	StaggeredTagHandle = AbilitySystemComponent->RegisterGameplayTagEvent(Tag_Combat_State_Staggered, EGameplayTagEventType::NewOrRemoved)
		.AddUObject(this, &ThisClass::HandleTagChanged);
	
	DeathTagHandle = AbilitySystemComponent->RegisterGameplayTagEvent(Tag_Combat_State_Dead, EGameplayTagEventType::NewOrRemoved)
		.AddUObject(this, &ThisClass::HandleTagChanged);
	
	if (OwnerHasAuthority() || OwnerIsLocallyControlled())
	{
		bIsBlocking = AbilitySystemComponent->HasMatchingGameplayTag(Tag_Combat_State_Blocking);
		OnRep_IsBlocking(false);

		bIsInvulnerable = AbilitySystemComponent->HasMatchingGameplayTag(Tag_Combat_State_Invulnerable);
		OnRep_IsInvulnerable(false);

		bIsStaggered = AbilitySystemComponent->HasMatchingGameplayTag(Tag_Combat_State_Staggered);
		OnRep_IsStaggered(false);		
	}
}

void UNinjaCombatManagerComponent::OnAbilitySystemComponentReset()
{
	UAbilitySystemComponent* AbilitySystemComponent = GetCachedAbilitySystemComponent();
	if (!IsValid(AbilitySystemComponent))
	{
		return;
	}

	if (BlockingTagHandle.IsValid())
	{
		AbilitySystemComponent->UnregisterGameplayTagEvent(BlockingTagHandle, Tag_Combat_State_Blocking, EGameplayTagEventType::NewOrRemoved);
		BlockingTagHandle.Reset();
		bIsBlocking = false;
	}

	if (InvulnerabilityTagHandle.IsValid())
	{
		AbilitySystemComponent->UnregisterGameplayTagEvent(BlockingTagHandle, Tag_Combat_State_Invulnerable, EGameplayTagEventType::NewOrRemoved);
		InvulnerabilityTagHandle.Reset();
		bIsInvulnerable = false;
	}

	if (StaggeredTagHandle.IsValid())
	{
		AbilitySystemComponent->UnregisterGameplayTagEvent(StaggeredTagHandle, Tag_Combat_State_Staggered, EGameplayTagEventType::NewOrRemoved);
		StaggeredTagHandle.Reset();
	}
	
	if (DeathTagHandle.IsValid())
	{
		AbilitySystemComponent->UnregisterGameplayTagEvent(DeathTagHandle, Tag_Combat_State_Dead, EGameplayTagEventType::NewOrRemoved);
		DeathTagHandle.Reset();
	}
}

AActor* UNinjaCombatManagerComponent::GetCombatTarget_Implementation() const
{
	return CombatTarget;
}

void UNinjaCombatManagerComponent::SetCombatTarget_Implementation(AActor* NewCombatTarget)
{
	const bool bCanPredictLocally = bCanPredictTarget && OwnerIsLocallyControlled();
	
	if (OwnerHasAuthority() || bCanPredictLocally)
	{
		AActor* OldCombatTarget = CombatTarget;
		if (IsValid(OldCombatTarget))
		{
			OldCombatTarget->OnDestroyed.RemoveAll(this);
			
			UNinjaCombatManagerComponent* OtherCombatManager = UNinjaCombatFunctionLibrary::GetCombatManagerComponent(NewCombatTarget);
			if (IsValid(OtherCombatManager))
			{
				UActorComponent* OtherDamageManager = OtherCombatManager->GetAndCacheDamageManager();
				if (UNinjaCombatFunctionLibrary::IsValidDamageManagerComponent(OtherDamageManager))
				{
					Execute_UnbindFromOwnerDiedDelegate(OtherDamageManager, this);
				}
			}
		}
		
		CombatTarget = NewCombatTarget;
		if (IsValid(CombatTarget))
		{
			CombatTarget->OnDestroyed.AddDynamic(this, &ThisClass::HandleCombatTargetDestroyed);

			UNinjaCombatManagerComponent* OtherCombatManager = UNinjaCombatFunctionLibrary::GetCombatManagerComponent(NewCombatTarget);
			if (IsValid(OtherCombatManager))
			{
				UActorComponent* OtherDamageManager = OtherCombatManager->GetAndCacheDamageManager();
				if (UNinjaCombatFunctionLibrary::IsValidDamageManagerComponent(OtherDamageManager))
				{
					FOwnerDiedDelegate OwnerDiedDelegate;
					OwnerDiedDelegate.BindDynamic(this, &ThisClass::HandleCombatTargetDeath);
					Execute_BindToOwnerDiedDelegate(OtherDamageManager, OwnerDiedDelegate);
				}
			}
		}
		
		OnRep_CombatTarget(OldCombatTarget);
	}
	
	if (!OwnerHasAuthority() && OwnerIsLocallyControlled())
	{
		// Local players without network authority must replicate the value from server.
		// This needs to happen regardless of local prediction of the value.
		//
		Server_SetCombatTarget(NewCombatTarget);
	}
}

void UNinjaCombatManagerComponent::AttachTargetLockActor()
{
	if (!OwnerIsLocalPlayer())
	{
		return;
	}
	
	if (TargetLockActor == nullptr)
	{
		TargetLockActor = CreateTargetLockActor();
	}

	if (IsValid(TargetLockActor))
	{
		TargetLockActor->LockOnTarget(CombatTarget);
	}
}

void UNinjaCombatManagerComponent::HandleCombatTargetDestroyed(AActor* DestroyedActor)
{
	if (Execute_GetCombatTarget(this) == DestroyedActor)
	{
		HandleCombatTargetDeath(DestroyedActor);	
	}
}

void UNinjaCombatManagerComponent::HandleCombatTargetDeath(AActor* Actor)
{
	UAbilitySystemComponent* AbilitySystemComponent = GetAbilitySystemComponentFromOwner();
	if (IsValid(AbilitySystemComponent))
	{
		AbilitySystemComponent->HandleGameplayEvent(Tag_Combat_Event_Target_Dismissed, new FGameplayEventData());
	}
}

void UNinjaCombatManagerComponent::DetachTargetLockActor()
{
	if (OwnerIsLocalPlayer() && IsValid(TargetLockActor))
	{
		TargetLockActor->DismissTarget();
	}	
}

ANinjaCombatMarkerActor* UNinjaCombatManagerComponent::CreateTargetLockActor() const
{
	ANinjaCombatMarkerActor* MarkerActor = nullptr;
	
	if (!IsValid(TargetMarkerActorClass))
	{
		COMBAT_LOG(Error, "No Target Marker Actor class set!")
		return MarkerActor;
	}
	
	UNinjaCombatActorPoolComponent* Pool = UNinjaCombatActorPoolFunctionLibrary::GetCombatActorPool(GetOwner());
	if (IsValid(Pool))
	{
		MarkerActor = Pool->GetTypedActorFromPool(TargetMarkerActorClass);
	}
	
	if (!IsValid(MarkerActor))
	{
		FActorSpawnParameters SpawnParameters;
		SpawnParameters.Owner = GetOwner();
		SpawnParameters.Instigator = Cast<APawn>(GetOwner());
		SpawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
		MarkerActor = GetWorld()->SpawnActor<ANinjaCombatMarkerActor>(TargetMarkerActorClass, SpawnParameters);
	}

	return MarkerActor;	
}

void UNinjaCombatManagerComponent::ReceiveTargetingSource_Implementation(AActor* TargetingSource)
{
	// Nothing by default, but you can use this hook to notify the owner that it's
	// being targeted by a given Actor. For AI, this might be useful to define strategies.
}

void UNinjaCombatManagerComponent::ClearTargetingSource_Implementation(AActor* TargetingSource)
{
	// Nothing by default, but you can use this hook to notify the owner that it's
	// not targeted by a given Actor anymore. For AI, this might be useful to define strategies.
}

ANinjaCombatMarkerActor* UNinjaCombatManagerComponent::GetTargetLockActor_Implementation() const
{
	return TargetLockActor;
}

void UNinjaCombatManagerComponent::HandleTagChanged(const FGameplayTag CallbackTag, const int32 NewCount)
{
	if (CallbackTag == Tag_Combat_State_Staggered)
	{
		const bool bWasStaggered = bIsStaggered;
		bIsStaggered = NewCount > 0;
		OnRep_IsStaggered(bWasStaggered);
	}

	// There is no external access to the blocking and invulnerability properties. They are updated from
	// the Gameplay Ability System, by the presence of specific Gameplay Tags. We are deliberately allowing
	// local players to predict their blocking and invulnerability states, to improve local feedback.
	//
	if (OwnerHasAuthority() || OwnerIsLocallyControlled())
	{
		if (CallbackTag == Tag_Combat_State_Blocking)
		{
			const bool bWasBlocking = bIsBlocking; 
			bIsBlocking = NewCount > 0;
			OnRep_IsBlocking(bWasBlocking);
		}
		else if (CallbackTag == Tag_Combat_State_Invulnerable)
		{
			const bool bWasInvulnerable = bIsInvulnerable;
			bIsInvulnerable = NewCount > 0;
			OnRep_IsInvulnerable(bWasInvulnerable);
		}
	}
	
	if (CallbackTag == Tag_Combat_State_Dead)
	{
		bIsDead = NewCount > 0;
	}	
}

void UNinjaCombatManagerComponent::ModifyIncomingDamage(const FDamageCalculationInput& Input, FDamageCalculationOutput& Output) const
{
	float Damage = Input.Damage;
	Output.ModifiedDamage = Damage;
	
	const AActor* Instigator = Input.GetDamageInstigator();
	const AActor* Target = Input.GetTargetActor();

	const FGameplayTagContainer SourceTags = Input.SourceTags;
	const FGameplayTagContainer TargetTags = Input.TargetTags;
	
	const AGameModeBase* GameMode = GetWorld()->GetAuthGameMode();
	if (IsValid(GameMode) && GameMode->Implements<UCombatDamageModifierInterface>())
	{
		const bool bIsCancelled = ICombatDamageModifierInterface::Execute_ShouldCancelDamage(GameMode, Damage, Instigator, Target, SourceTags, TargetTags);
		Output.bIsCancelled = bIsCancelled;
		
		Damage = ICombatDamageModifierInterface::Execute_ModifyDamage(GameMode, Damage, Instigator, Target, SourceTags, TargetTags);
		Output.ModifiedDamage = Damage;
		
		COMBAT_LOG_ARGS(Verbose, "Game Mode modified damage for '%s': %f -> %f - cancelled? %s.",
			*GetNameSafe(GetOwner()), Input.Damage, Damage, bIsCancelled ? TEXT("true") : TEXT("false"));
	}

	const AGameStateBase* GameState = GetWorld()->GetGameState();
	if (IsValid(GameState) && GameState->Implements<UCombatDamageModifierInterface>())
	{
		const bool bIsCancelled = ICombatDamageModifierInterface::Execute_ShouldCancelDamage(GameState, Damage, Instigator, Target, SourceTags, TargetTags);
		Output.bIsCancelled = bIsCancelled;
		
		Damage = ICombatDamageModifierInterface::Execute_ModifyDamage(GameState, Damage, Instigator, Target, SourceTags, TargetTags);
		Output.ModifiedDamage = Damage;

		COMBAT_LOG_ARGS(Verbose, "Game State modified damage: '%s': %f -> %f - cancelled: %s.",
			*GetNameSafe(GetOwner()), Input.Damage, Damage, bIsCancelled ? TEXT("true") : TEXT("false"));
	}
}

void UNinjaCombatManagerComponent::ApplyBlockMitigation(const FDamageCalculationInput& Input, FDamageCalculationOutput& Output) const
{
	if (Execute_CanBlock(this, Input))
	{
		const float Damage = Output.GetAppliedDamage();
		const float BlockRoll = Roll();
		const float BlockChance = Input.BlockChance;
		const float BlockMitigation = Input.BlockMitigation;
		const float BlockStaminaCostRate = Input.BlockStaminaCostRate;
	
		if (Damage > 0.f && BlockChance > 0.f && BlockMitigation > 0.f && BlockRoll <= BlockChance)
		{
			const float AvailableStamina = Input.CurrentStamina - Output.GetMitigationCost();
			float DamageMitigatedFromBlocking;
			
			if (BlockStaminaCostRate == 0.f)
			{
				// Blocking this damage is free. Just apply the block reduction to the incoming damage.
				DamageMitigatedFromBlocking = Damage * BlockMitigation;
			}
			else
			{
				// The amount damage we can actually block is constrained by both our current Block attribute
				// and the amount of available Stamina. Whichever is the smallest is used for the mitigation.
				DamageMitigatedFromBlocking = FMath::Min(Damage * BlockMitigation, AvailableStamina / BlockStaminaCostRate);
			}

			const float BlockLimit = Input.BlockLimit;
			if (BlockLimit > 0.f)
			{
				// We have a block limit, so apply to the mitigated the damage, before calculating the cost.
				DamageMitigatedFromBlocking = FMath::Min(DamageMitigatedFromBlocking, BlockLimit);
			}
			
			// Stamina cost to mitigate this damage, via blocking.
			Output.DamageMitigatedFromBlocking = DamageMitigatedFromBlocking;
			const float MitigationCost = Output.DamageMitigatedFromBlocking * BlockStaminaCostRate;

			Output.BlockStaminaCost = MitigationCost;
			Output.Stamina = FMath::Max(0.f, AvailableStamina - MitigationCost);
			Output.bIsBlocked = DamageMitigatedFromBlocking > 0.f;
			Output.bIsBreaker = AvailableStamina > 0.f && Output.Stamina == 0.f;

			const FString BlockedText = Output.bIsBlocked ? "true" : "false";
			const FString BreakerText = Output.bIsBreaker ? "true" : "false";
			COMBAT_LOG_ARGS(Verbose, "Block results for '%s': blocked: %s, breaker %s, cost: %f",
				*GetNameSafe(GetOwner()), *BlockedText, *BreakerText, MitigationCost);
		}
	}
}

void UNinjaCombatManagerComponent::ApplyDefenseMitigation(const FDamageCalculationInput& Input, FDamageCalculationOutput& Output) const
{
	const float DefenseRoll = Roll();
	const float Damage = Output.GetAppliedDamage();
	const float DefenseChance = Input.DefenseChance;
	const float DefenseMitigation = Input.DefenseMitigation;
	const float DefenseStaminaCostRate = Input.DefenseStaminaCostRate;
	
	if (Damage > 0.f && DefenseChance > 0.f && DefenseMitigation > 0.f && DefenseRoll <= DefenseChance)
	{
		const float AvailableStamina = Input.CurrentStamina - Output.GetMitigationCost();
		float DamageMitigatedFromDefense;
		
		if (DefenseStaminaCostRate == 0.f)
		{
			// Mitigating damage is free. Just apply the defense reduction to the incoming damage.
			DamageMitigatedFromDefense = Damage * DefenseMitigation;
		}
		else
		{
			// The amount damage we can actually mitigate is constrained by both our current Defense attribute
			// and the amount of available Stamina. Whichever is the smallest is used for the mitigation.
			DamageMitigatedFromDefense = FMath::Min(Damage * DefenseMitigation, AvailableStamina / DefenseStaminaCostRate);
		}

		const float DefenseLimit = Input.DefenseLimit;
		if (DefenseLimit > 0.f)
		{
			// We have a defense limit, so apply to the mitigated the damage, before calculating the cost.
			DamageMitigatedFromDefense = FMath::Min(DamageMitigatedFromDefense, DefenseLimit);
		}
		
		// Stamina cost to mitigate this damage, via generic mitigation.
		Output.DamageMitigatedFromDefense = DamageMitigatedFromDefense;
		const float MitigationCost = Output.DamageMitigatedFromDefense * DefenseStaminaCostRate;

		Output.DefenseStaminaCost = MitigationCost;
		Output.Stamina = FMath::Max(0.f, AvailableStamina - MitigationCost);
		Output.bIsDefended = DamageMitigatedFromDefense > 0.f;

		const FString DefendedText = Output.bIsDefended ? "true" : "false";
		COMBAT_LOG_ARGS(Verbose, "Defense results for '%s': defended: %s, cost: %f",
			*GetNameSafe(GetOwner()), *DefendedText, MitigationCost);		
	}	
}

void UNinjaCombatManagerComponent::ApplyArmorMitigation(const FDamageCalculationInput& Input, FDamageCalculationOutput& Output) const
{
	const float Damage = Output.GetAppliedDamage();
	const float ArmorReduction = Input.ArmorReduction;
	
	if (Damage > 0.f && ArmorReduction > 0.f)
	{
		const float ArmorMitigation = FMath::Min(Damage, ArmorReduction);
		Output.DamageMitigatedFromArmor = FMath::Max(0.f, Damage - ArmorMitigation);

		COMBAT_LOG_ARGS(Verbose, "Armor mitigation results for '%s': reduction: %f",
			*GetNameSafe(GetOwner()), ArmorMitigation);
	}
}

void UNinjaCombatManagerComponent::ApplyLastStand(const FDamageCalculationInput& Input, FDamageCalculationOutput& Output) const
{
	if (Execute_CheckLastStand(this))
	{
		Output.bIsFatal = false;
		Output.bIsLastStand = true;
	}
}

bool UNinjaCombatManagerComponent::CanBlock_Implementation(const FDamageCalculationInput& Input) const
{
	if (Execute_IsBlocking(this))
	{
		const FGameplayTagContainer& SourceTags = Input.SourceTags;
		if (!UnblockableDamageTags.IsEmpty() && SourceTags.HasAnyExact(UnblockableDamageTags))
		{
			return false;	
		}
		
		const AActor* DamageInstigator = Input.GetDamageInstigator();
		if (IsValid(DamageInstigator))
		{
			const FVector MyLocation = GetOwner()->GetActorLocation();
			const FVector EnemyLocation = DamageInstigator->GetActorLocation();
			const FVector EnemyForward = DamageInstigator->GetActorForwardVector();

			FVector A = MyLocation - EnemyLocation;
			A.Normalize();
			const float DotProduct = A.Dot(EnemyForward);
			const float Angle = UKismetMathLibrary::DegAcos(DotProduct);
		
			return FMath::Abs(Angle) <= GetBlockAngle();	
		}
	}

	return false;
}

bool UNinjaCombatManagerComponent::CheckLastStand_Implementation() const
{
	const UAbilitySystemComponent* AbilitySystemComponent = GetCachedAbilitySystemComponent();
	if (!IsValid(AbilitySystemComponent) || !OwnerHasAuthority())
	{
		return false;
	}

	// The default implementation for a last stand simply looks at the owner's attributes.
	//
	// You can actually go a long way with this implementation. Items in your inventory that provide a Last
	// Stand can simply add to these attributes when equipped. Abilities can execute a similar approach.
	//
	// Of course, you can fully rewrite this method if you needed, to implement more specific needs.
	//
	const float LastStandCount = AbilitySystemComponent->GetNumericAttribute(UNinjaCombatAttributeSet::GetLastStandCountAttribute());
	const float LastStandHealth = AbilitySystemComponent->GetNumericAttribute(UNinjaCombatAttributeSet::GetLastStandHealthPercentAttribute());
	return LastStandCount > 0.f && LastStandHealth > 0.f;
}

void UNinjaCombatManagerComponent::CommitLastStand_Implementation()
{
	UAbilitySystemComponent* AbilitySystemComponent = GetCachedAbilitySystemComponent();
	if (!IsValid(AbilitySystemComponent) || !OwnerHasAuthority())
	{
		return;
	}
	
	if (!IsValid(LastStandEffectClass))
	{
		COMBAT_LOG_ARGS(Verbose, "Combatant '%s' does not have a Last Stand Effect.", *GetNameSafe(GetOwner()));
		return;
	}
	
	const FGameplayEffectContextHandle EffectContext = AbilitySystemComponent->MakeEffectContext();
	const UGameplayEffect* GameplayEffect = LastStandEffectClass->GetDefaultObject<UGameplayEffect>();

	static constexpr float EffectLevel = 1.f;
	AbilitySystemComponent->ApplyGameplayEffectToSelf(GameplayEffect, EffectLevel, EffectContext);
	
	COMBAT_LOG_ARGS(Verbose, "Combatant '%s' triggered Last Stand.", *GetNameSafe(GetOwner()));
}

void UNinjaCombatManagerComponent::DefendDamage_Implementation(const FDamageCalculationInput& Input, FDamageCalculationOutput& Output) const
{
	const AActor* TargetActor = Input.GetTargetActor();
	check(IsValid(TargetActor));

	Output.OriginalDamage = Input.Damage;
	Output.bInvulnerable = Execute_IsInvulnerable(this); 
	
	if (!Output.bInvulnerable)
	{
		ModifyIncomingDamage(Input, Output);
		ApplyBlockMitigation(Input, Output);
		ApplyDefenseMitigation(Input, Output);
		ApplyArmorMitigation(Input, Output);

		const bool bCancelled = Output.bIsCancelled;
		const float Damage = Output.ModifiedDamage;
		
		if (!bCancelled && Damage > 0.f)
		{
			const float PreviousHealth = Input.CurrentHealth;
			const float CurrentHealth = FMath::Max(PreviousHealth - Damage, 0.f);
			
			Output.Health = CurrentHealth;
			Output.bIsFatal = PreviousHealth > 0.f && CurrentHealth == 0.f;

			if (Output.bIsFatal)
			{
				ApplyLastStand(Input, Output);
			}
		}
	}
}

void UNinjaCombatManagerComponent::CalculateDamage_Implementation(const FDamageCalculationInput& Input, FDamageCalculationOutput& Output) const
{
	const UActorComponent* DefenseComponent = UNinjaCombatFunctionLibrary::GetDefenseManagerComponent(GetOwner());
	if (IsValid(DefenseComponent) && ensure(DefenseComponent->Implements<UCombatDefenseManagerInterface>()))
	{
		Execute_DefendDamage(DefenseComponent, Input, Output);
	}
}

void UNinjaCombatManagerComponent::RegisterDamageReceived_Implementation(const FGameplayEffectSpec& EffectSpec)
{
	if (OwnerHasAuthority())
	{
		COMBAT_LOG_ARGS(Verbose, "Registering received damage for '%s'.", *GetNameSafe(GetOwner()));
		DamageTakenList.RegisterDamageTaken(EffectSpec);
	}
}

void UNinjaCombatManagerComponent::HandleDamageReceived_Implementation(const FDamageEntry& DamageEntry)
{
	// Handles the scenario where death happened by damage applied.
	if (DamageEntry.IsFatalHit())
	{
		const TObjectPtr<APawn> MyPawn = Cast<APawn>(GetOwner());
		if (IsValid(MyPawn) && (MyPawn->HasAuthority() || MyPawn->IsLocallyControlled()))
		{
			COMBAT_LOG_ARGS(Verbose, "%s received fatal damage: %s", *GetNameSafe(GetOwner()), *DamageEntry.CapturedSourceTags.ToStringSimple())
			bIsDead = true;
			OnRep_IsDead();
		}
	}
	
	BroadcastDamageGameplayEvent(DamageEntry);
	BroadcastDamagePerceptionEvent(DamageEntry);
	PlayDamageGameplayCue(DamageEntry);

	AActor* EffectCauser = DamageEntry.GetDamageCauser();
	OnDamageReceived.Broadcast(EffectCauser, GetOwner(), DamageEntry);	
}

void UNinjaCombatManagerComponent::BroadcastDamageGameplayEvent(const FDamageEntry& DamageEntry)
{
	UAbilitySystemComponent* AbilitySystemComponent = GetCachedAbilitySystemComponent();
	if (IsValid(AbilitySystemComponent) && (OwnerHasAuthority() || OwnerIsLocallyControlled()))
	{
		const ICombatEffectContextProxyInterface* Proxy = GetDefault<UNinjaCombatSettings>()->GetDefaultEffectContextProxy();
		check(Proxy != nullptr);

		const FGameplayEffectContext* EffectContext = DamageEntry.EffectContext.Get();
		const float Magnitude = Proxy->GetDamageApplied(EffectContext);
	
		const FGameplayTag DamageEventTag = DamageEntry.IsFatalHit() ? Tag_Combat_Event_Death : Tag_Combat_Event_Damage_Received;
	
		FGameplayEventData* Payload = new FGameplayEventData();
		Payload->EventTag = DamageEventTag;
		Payload->Instigator = DamageEntry.EffectContext.GetInstigator();
		Payload->Target = GetOwner();
		Payload->EventMagnitude = Magnitude;
		Payload->ContextHandle = DamageEntry.EffectContext;
		Payload->InstigatorTags = DamageEntry.CapturedSourceTags;
		Payload->TargetTags = DamageEntry.CapturedTargetTags;

		// Multiple abilities might be interested in this event.
		if (DamageEntry.IsStaggeringHit())
		{
			AbilitySystemComponent->HandleGameplayEvent(Tag_Combat_Event_Damage_Stagger, Payload);
			COMBAT_LOG_ARGS(Verbose, "%s: Broadcasting a staggering hit.", *GetNameSafe(GetOwner()));
		}
		
		// The Blocking ability may be interested in this event.
		if (DamageEntry.IsBlockedHit())
		{
			AbilitySystemComponent->HandleGameplayEvent(Tag_Combat_Event_Damage_Blocked, Payload);
			COMBAT_LOG_ARGS(Verbose, "%s: Broadcasting a blocked hit.", *GetNameSafe(GetOwner()));
		}
	
		// The Blocking ability may be interested in this event.
		if (DamageEntry.IsBreakerHit())
		{
			AbilitySystemComponent->HandleGameplayEvent(Tag_Combat_Event_Damage_Breaker, Payload);
			COMBAT_LOG_ARGS(Verbose, "%s: Broadcasting a breaker hit.", *GetNameSafe(GetOwner()));
		}

		// Finally, broadcast the main damage event.
		AbilitySystemComponent->HandleGameplayEvent(DamageEventTag, Payload);
		COMBAT_LOG_ARGS(Verbose, "%s: Broadcasting incoming damage: %s.", *GetNameSafe(GetOwner()), *DamageEventTag.ToString());
	}
}

void UNinjaCombatManagerComponent::BroadcastDamagePerceptionEvent(const FDamageEntry& DamageEntry)
{
	if (!OwnerHasAuthority() || Execute_IsDead(this))
	{
		return;
	}
	
	const bool bGenerateDamagePerceptionEvent = IsValid(DamageData) && DamageData->bGenerateDamagePerceptionEvent;
	if (bGenerateDamagePerceptionEvent)
	{
		AActor* Instigator = DamageEntry.GetDamageInstigator();
		const float Damage = DamageEntry.GetDamageApplied();
		
		if (IsValid(Instigator) && Damage > 0.f)
		{
			UAISense_Damage::ReportDamageEvent(GetWorld(), GetOwner(), Instigator,
				Damage, Instigator->GetActorLocation(), GetOwner()->GetActorLocation());  
		}
	}
}

void UNinjaCombatManagerComponent::PlayDamageGameplayCue(const FDamageEntry& DamageEntry)
{
	if (UKismetSystemLibrary::IsDedicatedServer(GetWorld()))
	{
		return;
	}
	
	const FGameplayCueParameters CueParameters = DamageEntry.GetGameplayCueParameters();
	UNinjaCombatFunctionLibrary::ExecuteGameplayCueLocally(GetOwner(), Tag_GameplayCue_Combat_Hit, CueParameters);
	
	if (DamageEntry.IsFatalHit())
	{
		UNinjaCombatFunctionLibrary::ExecuteGameplayCueLocally(GetOwner(), Tag_GameplayCue_Combat_Death, CueParameters);
	}
}

USceneComponent* UNinjaCombatManagerComponent::CreateForwardReference_Implementation() const
{
	check(IsValid(GetOwner()));
	USceneComponent* ParentComponent = GetOwner()->GetRootComponent();
	
	UArrowComponent* NewForwardReference = NewObject<UArrowComponent>(GetOwner());
	NewForwardReference->ComponentTags.Add(Tag_Combat_Component_ForwardReference.GetTag().GetTagName());
	NewForwardReference->SetVisibleFlag(false);
	NewForwardReference->SetUsingAbsoluteRotation(true);
	NewForwardReference->SetWorldRotation(FRotator::ZeroRotator);
	NewForwardReference->SetArrowColor(FLinearColor::Green);
	NewForwardReference->SetAutoActivate(true);
	NewForwardReference->RegisterComponent();
	NewForwardReference->AttachToComponent(ParentComponent, FAttachmentTransformRules::SnapToTargetNotIncludingScale);
	GetOwner()->AddInstanceComponent(NewForwardReference);

	return NewForwardReference;
}

UActorComponent* UNinjaCombatManagerComponent::CreateComboManagerComponent_Implementation() const
{
	return CreateComponent(UNinjaCombatComboManagerComponent::StaticClass());
}

UActorComponent* UNinjaCombatManagerComponent::CreateDamageManagerComponent_Implementation() const
{
	// This is the default Damage Manager, when no extension is provided.
	return const_cast<UNinjaCombatManagerComponent*>(this);
}

UActorComponent* UNinjaCombatManagerComponent::CreateDefenseManagerComponent_Implementation() const
{
	// This is the default Defense Manager, when no extension is provided.
	return const_cast<UNinjaCombatManagerComponent*>(this);	
}

UActorComponent* UNinjaCombatManagerComponent::CreateDissolveManagerComponent_Implementation() const
{
	return CreateComponent(UNinjaCombatDissolveComponent::StaticClass());
}

UActorComponent* UNinjaCombatManagerComponent::CreateMotionWarpingComponent_Implementation() const
{
	return CreateComponent(UNinjaCombatMotionWarpingComponent::StaticClass());
}

UActorComponent* UNinjaCombatManagerComponent::CreatePhysicalAnimationComponent_Implementation() const
{
	return CreateComponent(UNinjaCombatPhysicalAnimationComponent::StaticClass());
}

UActorComponent* UNinjaCombatManagerComponent::CreateWeaponManagerComponent_Implementation() const
{
	return CreateComponent(UNinjaCombatWeaponManagerComponent::StaticClass());
}

UActorComponent* UNinjaCombatManagerComponent::CreateTargetManagerComponent_Implementation() const
{
	// This is the default Target Manager, when no extension is provided.
	return const_cast<UNinjaCombatManagerComponent*>(this);		
}

UActorComponent* UNinjaCombatManagerComponent::CreateComponent(const TSubclassOf<UActorComponent>& ComponentClass) const
{
	UActorComponent* NewComponent = NewObject<UActorComponent>(GetOwner(), ComponentClass);
	NewComponent->SetAutoActivate(true);
	NewComponent->RegisterComponent();	
	GetOwner()->AddInstanceComponent(NewComponent);
	return NewComponent;	
}

void UNinjaCombatManagerComponent::GameplayCue_Combat_MeleeTrails_Implementation(const EGameplayCueEvent::Type EventType, const FGameplayCueParameters& Parameters)
{
	if (UKismetSystemLibrary::IsDedicatedServer(GetWorld()))
    {
    	return;
    }
    	
	AActor* EffectCauser = Parameters.GetEffectCauser();
	if (!IsValid(EffectCauser) || !EffectCauser->Implements<UCombatMeleeInterface>())
	{
		return;
	}

	const FGameplayTagContainer& SourceTags = Parameters.AggregatedSourceTags;
	const FGameplayTagContainer& TargetTags = Parameters.AggregatedTargetTags;
	
	if (EventType == EGameplayCueEvent::OnActive)
	{
		ICombatMeleeInterface::Execute_StartMeleeTrailsCosmetics(EffectCauser, SourceTags, TargetTags);
	}
	else if (EventType == EGameplayCueEvent::Removed)
	{
		ICombatMeleeInterface::Execute_StopMeleeTrailsCosmetics(EffectCauser, SourceTags, TargetTags);
	}
}

void UNinjaCombatManagerComponent::GameplayCue_Combat_Hit_Implementation(const EGameplayCueEvent::Type EventType, const FGameplayCueParameters& Parameters)
{
	if (EventType == EGameplayCueEvent::Executed)
	{
		ExecuteDamageHandlers(Parameters);
	}
}

void UNinjaCombatManagerComponent::GameplayCue_Combat_Death_Implementation(const EGameplayCueEvent::Type EventType, const FGameplayCueParameters& Parameters)
{
	if (EventType == EGameplayCueEvent::Executed)
	{
		ExecuteDamageHandlers(Parameters);
	}
}

void UNinjaCombatManagerComponent::ExecuteDamageHandlers(const FGameplayCueParameters& Parameters)
{
	if (IsValid(DamageData))
	{
		for (const UNinjaCombatDamageHandler* Handler : DamageData->DamageHandlers)
		{
			Handler->HandleDamage(this, Parameters);
		}
	}
}

void UNinjaCombatManagerComponent::StartDying_Implementation()
{
	if (IsValid(DamageData) && DamageData->LifespanOnDeath > 0.f)
	{
		const float TimeLimit = DamageData->DeathTimeLimit;
		GetWorld()->GetTimerManager().SetTimer(DeathTimerHandle,this, &ThisClass::FinishDyingWrapper, TimeLimit);
	}
	
	const ACharacter* CharacterOwner = Cast<ACharacter>(GetOwner());
	if (IsValid(CharacterOwner))
	{
		const ECollisionChannel WeaponCollision = GetDefault<UNinjaCombatSettings>()->MeleeScanChannel;
		const ECollisionChannel ProjectileCollision = GetDefault<UNinjaCombatSettings>()->ProjectileChannel;
		
		CharacterOwner->GetCapsuleComponent()->CanCharacterStepUpOn = ECB_Yes;
		CharacterOwner->GetCapsuleComponent()->SetCollisionResponseToChannel(ECC_Pawn, ECR_Ignore);
		CharacterOwner->GetCapsuleComponent()->SetCollisionResponseToChannel(WeaponCollision, ECR_Ignore);
		CharacterOwner->GetCapsuleComponent()->SetCollisionResponseToChannel(ProjectileCollision, ECR_Ignore);

		CharacterOwner->GetCharacterMovement()->GravityScale = 0;
		CharacterOwner->GetMovementComponent()->StopMovementImmediately();

		TInlineComponentArray<UMeshComponent*> MeshComponents(CharacterOwner);
		for (UMeshComponent* MeshComponent : MeshComponents)
		{
			MeshComponent->SetCollisionResponseToChannel(WeaponCollision, ECR_Ignore);
			MeshComponent->SetCollisionResponseToChannel(ProjectileCollision, ECR_Ignore);
		}
	}

	OnOwnerStartedDying.Broadcast(GetOwner());
}

float UNinjaCombatManagerComponent::GetBlockAngle_Implementation() const
{
	const UAbilitySystemComponent* AbilitySystemComponent = GetCachedAbilitySystemComponent();
	check(IsValid(AbilitySystemComponent));
	return AbilitySystemComponent->GetNumericAttribute(UNinjaCombatAttributeSet::GetBlockAngleAttribute());
}

bool UNinjaCombatManagerComponent::ShouldRotateToTarget() const
{
	return bRotateControllerToTarget && IsValid(CombatTarget);
}

void UNinjaCombatManagerComponent::RotateToTarget(const float DeltaTime)
{
	const APawn* CurrentPawn = Cast<APawn>(GetOwner());
	if (!IsValid(CurrentPawn))
	{
		return;
	}

	const AActor* CurrentTarget = Execute_GetCombatTarget(this);
	if (!IsValid(CurrentTarget))
	{
		return;
	}

	RotateControllerToTarget(CurrentPawn->GetController(), CurrentTarget, DeltaTime);
}

void UNinjaCombatManagerComponent::RotateControllerToTarget_Implementation(AController* Controller,
	const AActor* CurrentTarget, const float DeltaTime)
{
	if (!IsValid(Controller) || !IsValid(CurrentTarget))
	{
		return;
	}

	const FVector SourceLocation = GetOwner()->GetActorLocation();
	const FVector TargetLocation = CombatTarget->GetActorLocation();
	
	const FRotator ControllerRotation = Controller->GetControlRotation();
	FRotator DesiredRotation = UKismetMathLibrary::FindLookAtRotation(SourceLocation, TargetLocation);

	if (!bLockControllerPitch)
	{
		// Keep the original Rotation Pitch from the Controller.
		DesiredRotation.Pitch = ControllerRotation.Pitch;
	}

	if (!bLockControllerYaw)
	{
		// Keep the original Rotation Yaw from the Controller.
		DesiredRotation.Yaw = ControllerRotation.Yaw;
	}
	
	const FRotator NewRotation = UKismetMathLibrary::RInterpTo_Constant(ControllerRotation, DesiredRotation, DeltaTime, RotationInterpSpeed); 
	Controller->SetControlRotation(NewRotation);
}

void UNinjaCombatManagerComponent::FinishDyingWrapper()
{
	Execute_FinishDying(this);
}

void UNinjaCombatManagerComponent::FinishDying_Implementation()
{
	// Death Abilities will deliberately call this when they end their execution.
	//
	// However, we can be here from a timer call most likely because the death ability has a looping animation,
	// in which case, the Death Ability will be deliberately cancelled soon. Ensure this executes only once.
	//
	if (bFinishDyingStarted) return;
	bFinishDyingStarted = true;
	
	// This might have been called from the ability, even if we have a timer.
	// Make sure to clear it if active, so this function won't ever be called twice.
	//
	GetWorld()->GetTimerManager().ClearTimer(DeathTimerHandle);
	DeathTimerHandle.Invalidate();
	
	APawn* PawnOwner = Cast<APawn>(GetOwner());
	if (IsValid(PawnOwner))
	{
		PawnOwner->DetachFromControllerPendingDestroy();
	}

	USkeletalMeshComponent* Mesh = ICombatSystemInterface::Execute_GetCombatMesh(GetOwner());
	if (IsValid(Mesh))
	{
		Mesh->bPauseAnims = bShouldPauseAnimations;
		TryEnableRagdollPhysics();
	}
	
	// Cancel all abilities at the end, especially since we might still have passive 
	// abilities executing, and the death ability might have a looping montage.
	//
	UAbilitySystemComponent* AbilitySystemComponent = GetCachedAbilitySystemComponent();
	if (IsValid(AbilitySystemComponent))
	{
		AbilitySystemComponent->CancelAllAbilities();
	}
	
	// The "Destroy" functionality is wrapped in the UFUNCTION, so we can make sure all
	// abilities are finished and there's no lock in the ability array.
	//
	// In some cases, depending on how Abilities are set up and ending, we may need to
	// wait a frame or two before they are all ended, which is why we are wrapping this
	// function into a timer-friendly, non-interface based one.
	//
	SafelyDestroyOwner();
}

void UNinjaCombatManagerComponent::SafelyDestroyOwner()
{
	UAbilitySystemComponent* AbilitySystemComponent = GetCachedAbilitySystemComponent();
	if (IsValid(AbilitySystemComponent))
	{
		int32 ActiveAbilities = 0;
		TArray<FGameplayAbilitySpecHandle> AbilityHandles;
		AbilitySystemComponent->GetAllAbilities(AbilityHandles);
		for (const FGameplayAbilitySpecHandle& Handle : AbilityHandles)
		{
			const FGameplayAbilitySpec* Spec = AbilitySystemComponent->FindAbilitySpecFromHandle(Handle);
			if (Spec->IsActive())
			{
				++ActiveAbilities;
			}
		}

		if (ActiveAbilities > 0)
		{
			COMBAT_LOG_ARGS(Verbose, "Postponing death flow, %d abilities left...", ActiveAbilities);
			GetWorld()->GetTimerManager().SetTimerForNextTick(this, &ThisClass::SafelyDestroyOwner);
		}
		else
		{
			if (OwnerHasAuthority())
			{
				AbilitySystemComponent->DestroyActiveState();
			}

			OnOwnerFinishedDying.Broadcast(GetOwner());
			
			const float LifespanOnDeath = DamageData->LifespanOnDeath;
			if (LifespanOnDeath > 0.f)
			{
				COMBAT_LOG_ARGS(Log, "Finished death flow. Setting lifespan to %f.", LifespanOnDeath);
				GetOwner()->SetLifeSpan(LifespanOnDeath);
			}
			else
			{
				COMBAT_LOG(Log, "Finished death flow. Destroying actor.");
				GetOwner()->Destroy();	
			}
		}
	}
}

void UNinjaCombatManagerComponent::TryEnableRagdollPhysics()
{
	if (IsValid(DamageData) && DamageData->bEnableRagdollOnDeath)
	{
		Execute_EnableRagdollPhysics(this);
	}
}

void UNinjaCombatManagerComponent::EnableRagdollPhysics_Implementation()
{
	USkeletalMeshComponent* Mesh = ICombatSystemInterface::Execute_GetCombatMesh(GetOwner());
    if (IsValid(Mesh))
    {
    	Mesh->SetEnablePhysicsBlending(true);
    	Mesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
    	Mesh->SetAllBodiesSimulatePhysics(true);
    	
    	static const FName CollisionProfileName(TEXT("Ragdoll"));
    	Mesh->SetCollisionProfileName(CollisionProfileName);
    }	
}

bool UNinjaCombatManagerComponent::IsBlocking_Implementation() const
{
	return bIsBlocking || HasGameplayTag(Tag_Combat_State_Blocking);
}

bool UNinjaCombatManagerComponent::IsInvulnerable_Implementation() const
{
	return bIsInvulnerable || HasGameplayTag(Tag_Combat_State_Invulnerable);
}

bool UNinjaCombatManagerComponent::IsStaggered_Implementation() const
{
	return bIsStaggered || HasGameplayTag(Tag_Combat_State_Staggered);
}

bool UNinjaCombatManagerComponent::IsDead_Implementation() const
{
	return bIsDead || HasGameplayTag(Tag_Combat_State_Dead);
}

void UNinjaCombatManagerComponent::OnRep_CombatTarget(AActor* OldCombatTarget)
{
	// Make sure that we are only broadcasting actual changes between current and old targets.
	// Otherwise, if we are predicting the local client, we could potentially broadcast twice.
	//
	if (CombatTarget == OldCombatTarget)
	{
		return;
	}
	
	UActorComponent* OldTargetComponent = UNinjaCombatFunctionLibrary::GetTargetManagerComponent(OldCombatTarget);
	if (IsValid(OldTargetComponent))
	{
		DetachTargetLockActor();
		Execute_ClearTargetingSource(OldTargetComponent, GetOwner());
	}

	UActorComponent* NewTargetComponent = UNinjaCombatFunctionLibrary::GetTargetManagerComponent(CombatTarget);
	if (IsValid(NewTargetComponent))
	{
		AttachTargetLockActor();
		Execute_ReceiveTargetingSource(NewTargetComponent, GetOwner());
	}

	const bool bShouldTick = ShouldRotateToTarget();
	SetComponentTickEnabled(bShouldTick);

	UActorComponent* Component = GetAndCacheTargetManager();
	OnCombatTargetChanged.Broadcast(Component, CombatTarget, OldCombatTarget);
}

void UNinjaCombatManagerComponent::OnRep_IsBlocking(bool bWasBlocking)
{
	UActorComponent* Component = GetAndCacheDefenseManager();
	OnBlockingStateChanged.Broadcast(Component, bIsBlocking);
}

void UNinjaCombatManagerComponent::OnRep_IsInvulnerable(bool bWasInvulnerable)
{
	UActorComponent* Component = GetAndCacheDefenseManager();
	OnInvulnerabilityStateChanged.Broadcast(Component, bIsInvulnerable);
}

void UNinjaCombatManagerComponent::OnRep_IsStaggered(const bool bWasStaggered)
{
	if (bWasStaggered != bIsStaggered)
	{
		UActorComponent* Component = GetAndCacheDamageManager();
		OnStaggerStateChanged.Broadcast(Component, bIsStaggered);	
	}
}

void UNinjaCombatManagerComponent::OnRep_IsDead()
{
	Execute_StartDying(this);
}

void UNinjaCombatManagerComponent::BindToBlockingStateChangedDelegate_Implementation(const FBlockingStateChangedDelegate& Delegate)
{
	OnBlockingStateChanged.AddUnique(Delegate);
}

void UNinjaCombatManagerComponent::BindToInvulnerabilityStateChangedDelegate_Implementation(const FInvulnerabilityStateChangedDelegate& Delegate)
{
	OnInvulnerabilityStateChanged.AddUnique(Delegate);
}

void UNinjaCombatManagerComponent::BindToCombatTargetChangedDelegate_Implementation(const FCombatTargetChangedDelegate& Delegate)
{
	OnCombatTargetChanged.AddUnique(Delegate);
}

void UNinjaCombatManagerComponent::BindToStaggerStateChangedDelegate_Implementation(const FStaggeredStateChangedDelegate& Delegate)
{
	OnStaggerStateChanged.AddUnique(Delegate);
}

void UNinjaCombatManagerComponent::BindToDamageReceivedDelegate_Implementation(const FDamageReceivedDelegate& Delegate)
{
	OnDamageReceived.AddUnique(Delegate);
}

void UNinjaCombatManagerComponent::BindToOwnerDiedDelegate_Implementation(const FOwnerDiedDelegate& Delegate)
{
	OnOwnerStartedDying.AddUnique(Delegate);
}

void UNinjaCombatManagerComponent::BindToOwnerFinishedDyingDelegate_Implementation(const FOwnerDiedDelegate& Delegate)
{
	OnOwnerFinishedDying.AddUnique(Delegate);
}

void UNinjaCombatManagerComponent::UnbindFromBlockingStateChangedDelegate_Implementation(const UObject* Source)
{
	OnBlockingStateChanged.RemoveAll(Source);
}

void UNinjaCombatManagerComponent::UnbindFromInvulnerabilityStateChangedDelegate_Implementation(const UObject* Source)
{
	OnInvulnerabilityStateChanged.RemoveAll(Source);
}

const UNinjaCombatDamageDataAsset* UNinjaCombatManagerComponent::GetDamageData_Implementation() const
{
	return DamageData;
}

void UNinjaCombatManagerComponent::UnbindFromStaggerStateChangedDelegate_Implementation(const UObject* Source)
{
	OnStaggerStateChanged.RemoveAll(Source);
}

void UNinjaCombatManagerComponent::UnbindFromTargetChangedDelegate_Implementation(const UObject* Source)
{
	OnCombatTargetChanged.RemoveAll(Source);
}

void UNinjaCombatManagerComponent::UnbindFromDamageReceivedDelegate_Implementation(const UObject* Source)
{
	OnDamageReceived.RemoveAll(Source);
}

void UNinjaCombatManagerComponent::UnbindFromOwnerDiedDelegate_Implementation(const UObject* Source)
{
	OnOwnerStartedDying.RemoveAll(Source);
}

void UNinjaCombatManagerComponent::UnbindFromOwnerFinishedDyingDelegate_Implementation(const UObject* Source)
{
	OnOwnerFinishedDying.RemoveAll(Source);
}

void UNinjaCombatManagerComponent::Server_SetCombatTarget_Implementation(AActor* NewCombatTarget)
{
	Execute_SetCombatTarget(this, NewCombatTarget);
}

bool UNinjaCombatManagerComponent::Server_SetCombatTarget_Validate(AActor* NewCombatTarget)
{
	return true;
}