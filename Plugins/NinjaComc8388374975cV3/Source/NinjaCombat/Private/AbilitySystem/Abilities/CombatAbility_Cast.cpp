// Ninja Bear Studio Inc., all rights reserved.
#include "AbilitySystem/Abilities/CombatAbility_Cast.h"

#include "AbilitySystemBlueprintLibrary.h"
#include "NinjaCombatTags.h"
#include "Abilities/GameplayAbilityTargetActor.h"
#include "Abilities/Tasks/AbilityTask_WaitGameplayEvent.h"
#include "Abilities/Tasks/AbilityTask_WaitTargetData.h"
#include "AbilitySystem/Tasks/AbilityTask_SpawnCast.h"
#include "AbilitySystem/Tasks/AbilityTask_WaitTargetDataWithActorCallback.h"
#include "AbilityTasks/AbilityTask_PerformTargeting.h"
#include "GameFramework/NinjaCombatCastRequest.h"
#include "Interfaces/CombatCastInterface.h"
#include "TargetingSystem/TargetingPreset.h"
#include "TargetingSystem/TargetingSubsystem.h"

UCombatAbility_Cast::UCombatAbility_Cast(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	CastTrigger = ECombatCastTrigger::AbilityActivation;
	Targeting = ECombatCastTargeting::TargetingSystem;
	CommitTime = ECombatCastCommitTime::AbilityActivates;

	bEnableMotionWarping = false;
	bPerformAsyncTargeting = true;
	bCommitAbilityBeforePlayingAnimation = CommitTime == ECombatCastCommitTime::AbilityActivates;

	CastEffectLevel = 1.f;
	CastEffectClass = nullptr;
	TargetingPreset = nullptr;
	CastActorClass = nullptr;
	TargetingActorClass = nullptr;
	CosmeticsGameplayCue = FGameplayTag::EmptyTag;
	ConfirmationType = EGameplayTargetingConfirmation::UserConfirmed;
	SectionWhenConfirmed = TEXT("Confirmed");
	SectionWhenCancelled = TEXT("Cancelled");

	FGameplayTagContainer InitialTags;
	InitialTags.AddTagFast(Tag_Combat_Ability_Cast);
	SetInitialTags(InitialTags);
	
	ActivationBlockedTags.AddTag(Tag_Combat_State_Staggered);
	ActivationBlockedTags.AddTag(Tag_Combat_State_Dead);
}

FTransform UCombatAbility_Cast::GetTargetingSourceTransform_Implementation() const
{
	return GetAvatarActorFromActorInfo()->GetActorTransform();
}

FGameplayAbilityTargetingLocationInfo UCombatAbility_Cast::CreateTargetingSource_Implementation() const
{
	FGameplayAbilityTargetingLocationInfo StartLocation = FGameplayAbilityTargetingLocationInfo();
	StartLocation.LocationType = EGameplayAbilityTargetingLocationType::ActorTransform;
	StartLocation.SourceAbility = const_cast<UCombatAbility_Cast*>(this);
	StartLocation.SourceActor = GetAvatarActorFromActorInfo();
	return StartLocation;
}

bool UCombatAbility_Cast::CanActivateAbility(const FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo* ActorInfo, const FGameplayTagContainer* SourceTags,
	const FGameplayTagContainer* TargetTags, FGameplayTagContainer* OptionalRelevantTags) const
{
	return Super::CanActivateAbility(Handle, ActorInfo, SourceTags, TargetTags, OptionalRelevantTags)
		&& (
			(Targeting == ECombatCastTargeting::TargetingSystem && IsValid(TargetingPreset)) ||
			(Targeting == ECombatCastTargeting::SpawnActor && IsValid(CastActorClass)) ||
			(Targeting == ECombatCastTargeting::WaitForConfirmation && IsValid(TargetingActorClass))
		);
}

void UCombatAbility_Cast::ActivateAbility(const FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo,
	const FGameplayEventData* TriggerEventData)
{
	Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);
	
	if (CastTrigger == ECombatCastTrigger::GameplayEvent)
	{
		CastEventTask = InitializeEventTask(Tag_Combat_Event_Cast);
		CastEventTask->ReadyForActivation();		
	}
	else
	{
		StartCast();
	}
}

void UCombatAbility_Cast::HandleEventReceived_Implementation(const FGameplayEventData Payload)
{
	Super::HandleEventReceived_Implementation(Payload);

	if (Payload.EventTag == Tag_Combat_Event_Cast)
	{
		StartCastWithPayload(Payload);
	}
}

void UCombatAbility_Cast::ModifyActor_Implementation(AGameplayAbilityTargetActor* TargetActor)
{
	const FGameplayAbilityTargetingLocationInfo StartLocation = CreateTargetingSource();
	TargetActor->StartLocation = StartLocation;

	const FTransform ActorTransform = GetTargetingSourceTransform();
	TargetActor->SetActorTransform(ActorTransform);
}

UNinjaCombatCastRequest* UCombatAbility_Cast::GetRequestFromPayload(const FGameplayEventData& Payload) const
{
	const UNinjaCombatCastRequest* Request = Cast<UNinjaCombatCastRequest>(Payload.OptionalObject);
	if (!IsValid(Request))
	{
		Request = Cast<UNinjaCombatCastRequest>(Payload.OptionalObject2);
	}

	if (IsValid(Request))
	{
		UNinjaCombatCastRequest* NonConstRequest = const_cast<UNinjaCombatCastRequest*>(Request);
		NonConstRequest->ReinforceCastClass(CastActorClass);
		return NonConstRequest;
	}
	
	return nullptr;
}

UNinjaCombatCastRequest* UCombatAbility_Cast::CreateDefaultRequest() const
{
	UNinjaCombatCastRequest* CastRequest = UNinjaCombatCastRequest::NewInstance(UNinjaCombatCastRequest::StaticClass(), this, GetAvatarActorFromActorInfo(), GetAvatarActorFromActorInfo(), CastActorClass);
	CastRequest->SetCastTransform(GetTargetingSourceTransform());
	return CastRequest;
}

void UCombatAbility_Cast::StartCast()
{
	FGameplayEventData DefaultPayload;

	// If we are supposed to spawn an actor and not wait for a Gameplay Event, then we need
	// to create a default request with the contents from this ability, using the default
	// transform obtained from "GetTargetingSourceTransform".
	//
	if (Targeting == ECombatCastTargeting::SpawnActor && CastTrigger == ECombatCastTrigger::AbilityActivation)
	{
		UNinjaCombatCastRequest* CastRequest = CreateDefaultRequest();
		DefaultPayload.OptionalObject = CastRequest;
	}
	
	StartCastWithPayload(DefaultPayload);
}

void UCombatAbility_Cast::StartCastWithPayload(const FGameplayEventData& Payload)
{
	switch (Targeting)
	{
	case ECombatCastTargeting::TargetingSystem:
		{
			CollectTargetsFromTargetingSystem();
			break;	
		}
	case ECombatCastTargeting::SpawnActor:
		{
			SpawnCastActor(GetRequestFromPayload(Payload));
			break;
		}
	case ECombatCastTargeting::WaitForConfirmation:
	case ECombatCastTargeting::WaitForConfirmationAndSpawnActor:
		{
			SpawnTargetingActorAndWaitConfirmation();
			break;	
		}
	}
}

void UCombatAbility_Cast::CollectTargetsFromTargetingSystem()
{
	if (ensure(IsValid(TargetingPreset)))
	{
		TargetingTask = UAbilityTask_PerformTargeting::PerformTargetingRequest(this, TargetingPreset, bPerformAsyncTargeting);
		TargetingTask->OnTargetReady.AddUniqueDynamic(this, &ThisClass::HandleTargetsReady);
		TargetingTask->ReadyForActivation();	
	}
}

void UCombatAbility_Cast::SpawnCastActor(UNinjaCombatCastRequest* CastRequest)
{
	if (!IsValid(CastRequest))
	{
		CastRequest = CreateDefaultRequest();
		checkf(IsValid(CastRequest), TEXT("Unable to create a default Cast Request."));
	}

	if (!GetAvatarActorFromActorInfo()->HasAuthority())
	{
		return;
	}
	
	if (IsValid(CastActorClass) && ensure(CastActorClass->ImplementsInterface(UCombatCastInterface::StaticClass())))
	{
		CastRequest->ReinforceCastClass(CastActorClass);
		if (IsValid(SpawnCastTask))
		{
			SpawnCastTask->AddCastRequest(CastRequest);
		}
		else
		{
			SpawnCastTask = UAbilityTask_SpawnCast::CreateTask(this, CastActorClass, bEnableDebug);
			SpawnCastTask->OnCastReady.AddUniqueDynamic(this, &ThisClass::HandleCastActorReady);
			SpawnCastTask->OnCastFinished.AddUniqueDynamic(this, &ThisClass::HandleCastActorSpawned);
			SpawnCastTask->AddCastRequest(CastRequest);
			SpawnCastTask->ReadyForActivation();	
		}
	}
}

void UCombatAbility_Cast::SpawnTargetingActorAndWaitConfirmation()
{
	if (IsValid(TargetingActorClass))
	{
		WaitTargetConfirmationTask = UAbilityTask_WaitTargetDataWithActorCallback::WaitTargetDataWithCallback(this, ConfirmationType, TargetingActorClass);
		WaitTargetConfirmationTask->ValidData.AddDynamic(this, &ThisClass::HandleTargetDataConfirmed);
		WaitTargetConfirmationTask->Cancelled.AddDynamic(this, &ThisClass::HandleTargetDataCancelled);
		WaitTargetConfirmationTask->ReadyForActivation();
	}
}

void UCombatAbility_Cast::HandleTargetsReady_Implementation(const FTargetingRequestHandle TargetingRequestHandle)
{
	const UTargetingSubsystem* TargetingSubsystem = UTargetingSubsystem::Get(GetWorld());
	check(IsValid(TargetingSubsystem));

	TArray<AActor*> TargetsFound;
	TargetingSubsystem->GetTargetingResultsActors(TargetingRequestHandle, TargetsFound);
	
	CastToTargets_Implementation(TargetsFound);
}

void UCombatAbility_Cast::HandleCastActorReady_Implementation(const UNinjaCombatCastRequest* OriginalRequest, AActor* SpawnedActor)
{
	if (IsValid(SpawnedActor) && SpawnedActor->Implements<UCombatCastInterface>())
	{
		ICombatCastInterface::Execute_SetCastOwner(SpawnedActor, OriginalRequest->GetRequestOwner());

		if (IsValid(CastEffectClass))
		{
			FGameplayEffectSpecHandle TargetEffectSpecHandle = MakeOutgoingGameplayEffectSpec(CastEffectClass);
			TargetEffectSpecHandle.Data.Get()->GetContext().AddInstigator(GetAvatarActorFromActorInfo(), GetAvatarActorFromActorInfo());
			ICombatCastInterface::Execute_SetGameplayEffectHandle(SpawnedActor, TargetEffectSpecHandle);	
		}		
	}
}

void UCombatAbility_Cast::HandleCastActorSpawned_Implementation(const UNinjaCombatCastRequest* OriginalRequest, AActor* SpawnedActor)
{
	// Nothing by default. Once the spawn/activation happens, the cast will start automatically.
	//
	// Other abilities can override this as needed, if they want to react to the precise moment
	// where the Cast Actor was spawned/activated.
}

void UCombatAbility_Cast::HandleTargetDataConfirmed_Implementation(const FGameplayAbilityTargetDataHandle& Data)
{
	const int32 TargetCount = Data.Num(); 
	if (TargetCount == 0 || !K2_HasAuthority())
	{
		return;
	}
	
	if (CommitTime == ECombatCastCommitTime::TargetsAcquired && !K2_CommitAbility())
	{
		return;
	}
	
	if (Targeting == ECombatCastTargeting::WaitForConfirmation)
	{
		const FGameplayEffectSpecHandle SpecHandle = MakeOutgoingGameplayEffectSpec(CastEffectClass, CastEffectLevel);
		if (SpecHandle.IsValid())
		{
			K2_ApplyGameplayEffectSpecToTarget(SpecHandle, Data);
		}	
	}
	else if (Targeting == ECombatCastTargeting::WaitForConfirmationAndSpawnActor)
	{
		static constexpr int32 DataIdx = 0;
		const FHitResult& HitResult = UAbilitySystemBlueprintLibrary::GetHitResultFromTargetData(Data, DataIdx);

		const FTransform CastTransform = FTransform(HitResult.Location);

		UNinjaCombatCastRequest* CastRequest = CreateDefaultRequest();
		CastRequest->SetCastTransform(CastTransform);
		SpawnCastActor(CastRequest);
	}

	// At this point we either cast the actor or applied the effect.
	// Regardless of the strategy, at this point we can jump to a new section.
	//
	if (HasSection(SectionWhenCancelled))
	{
		MoveToSection(SectionWhenConfirmed);
   	}
}

void UCombatAbility_Cast::HandleTargetDataCancelled_Implementation(const FGameplayAbilityTargetDataHandle& Data)
{
	if (HasSection(SectionWhenCancelled))
	{
		// We have a valid section, so jump to it and let the animation cancel the ability.
		MoveToSection(SectionWhenCancelled);
	}
	else
	{
		// We don't have a valid section, so we can cancel the ability right away.
		K2_CancelAbility();	
	}
}

void UCombatAbility_Cast::CastToTargets_Implementation(const TArray<AActor*>& TargetsFound)
{
	// Sanity check, we are too far into the logic for this to be invalid.
	check(IsValid(CastEffectClass));
		
	const int32 TargetCount = TargetsFound.Num(); 
	if (TargetCount == 0)
	{
		return;
	}
	
	if (CommitTime == ECombatCastCommitTime::TargetsAcquired && !K2_CommitAbility())
	{
		return;
	}
	
	TArray<TWeakObjectPtr<AActor>> WeakTargetsFound;
	WeakTargetsFound.Reserve(TargetsFound.Num());
	for (AActor* TargetFound : TargetsFound) { WeakTargetsFound.Add(TargetFound); } 		

	const FGameplayAbilityTargetingLocationInfo StartLocation = CreateTargetingSource();

	FGameplayEffectSpecHandle TargetHandle = MakeOutgoingGameplayEffectSpec(CastEffectClass);
	const FGameplayAbilityTargetDataHandle TargetDataHandle = StartLocation.MakeTargetDataHandleFromActors(WeakTargetsFound);
	const FGameplayEffectSpecHandle EffectSpecHandle = MakeOutgoingGameplayEffectSpec(CastEffectClass);
	
	if (TargetDataHandle.Num() > 0 && EffectSpecHandle.IsValid())
	{
		EffectSpecHandle.Data.Get()->SetSetByCallerMagnitude(Tag_Combat_Data_CastHits.GetTag(), TargetCount);
		K2_ApplyGameplayEffectSpecToTarget(EffectSpecHandle, TargetDataHandle);
	}
}

void UCombatAbility_Cast::EndAbility(const FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo,
	const bool bReplicateEndAbility, const bool bWasCancelled)
{
	FinishLatentTasks({ CastEventTask, SpawnCastTask, TargetingTask, WaitTargetConfirmationTask });
	Super::EndAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled);
}

