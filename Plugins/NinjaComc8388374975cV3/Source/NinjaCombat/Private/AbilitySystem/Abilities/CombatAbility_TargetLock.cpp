// Ninja Bear Studio Inc., all rights reserved.
#include "AbilitySystem/Abilities/CombatAbility_TargetLock.h"

#include "NinjaCombatFunctionLibrary.h"
#include "NinjaCombatSettings.h"
#include "NinjaCombatTags.h"
#include "Abilities/Tasks/AbilityTask_WaitGameplayEvent.h"
#include "AbilitySystem/Effects/CombatEffect_LockedOnTarget.h"
#include "AbilitySystem/Tasks/AbilityTask_TrackDistance.h"
#include "AbilityTasks/AbilityTask_PerformTargeting.h"
#include "Interfaces/Components/CombatDamageManagerInterface.h"
#include "Interfaces/Components/CombatTargetManagerInterface.h"
#include "TargetingSystem/TargetingPreset.h"
#include "TargetingSystem/TargetingSubsystem.h"

UCombatAbility_TargetLock::UCombatAbility_TargetLock()
{
	bTrackDistance = true;
	bPerformAsyncTargeting = true;
	bMoveToNewTargets = GetDefault<UNinjaCombatSettings>()->bShouldAcquireNextTargetsAutomatically;
	DistanceThreshold = 1500.f;
	ActivationOwnedTags.AddTag(Tag_Combat_Input_Block_Camera_Yaw);
	ActivationBlockedTags.AddTag(Tag_Combat_State_Dead);
	TargetLockEffectClass = UCombatEffect_LockedOnTarget::StaticClass();

	FGameplayTagContainer InitialTags;
	InitialTags.AddTagFast(Tag_Combat_Ability_TargetLock);
	SetInitialTags(InitialTags);
	
	FAbilityTriggerData& EventTrigger = AbilityTriggers.AddDefaulted_GetRef();
	EventTrigger.TriggerSource = EGameplayAbilityTriggerSource::GameplayEvent;
	EventTrigger.TriggerTag = Tag_Combat_Event_Target_Acquired;
}

bool UCombatAbility_TargetLock::CanActivateAbility(const FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo* ActorInfo, const FGameplayTagContainer* SourceTags,
	const FGameplayTagContainer* TargetTags, FGameplayTagContainer* OptionalRelevantTags) const
{
	return Super::CanActivateAbility(Handle, ActorInfo, SourceTags, TargetTags, OptionalRelevantTags)
		&& IsValid(GetTargetManagerComponentFromActorInfo());
}

bool UCombatAbility_TargetLock::HasTarget() const
{
	return GetTarget() == nullptr;
}

AActor* UCombatAbility_TargetLock::GetTarget() const
{
	const UActorComponent* TargetManager = GetTargetManagerComponentFromActorInfo();
	if (UNinjaCombatFunctionLibrary::IsValidTargetManagerComponent(TargetManager))
	{
		return ICombatTargetManagerInterface::Execute_GetCombatTarget(TargetManager);
	}
	
	return nullptr; 
}

void UCombatAbility_TargetLock::ActivateAbility(const FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo,
	const FGameplayEventData* TriggerEventData)
{
	Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);

	// Even though it is not common to have costs/cooldowns related to Target Locks,
	// we can't assume that for all scenarios, so let's follow the GAS contract for this ability.
	//
	if (!K2_CommitAbility())
	{
		const FString& Message = FString::Printf(TEXT("Unable to activate, cost requirements not met."));
        AddDebugMessage(Message);
		K2_CancelAbility();
	}

	static constexpr bool bMatchExact = false; 
	TargetEventTask = InitializeEventTask(Tag_Combat_Event_Target, bMatchExact);
	TargetEventTask->ReadyForActivation();	
	
	// The first possible activation happens via a Gameplay Event. This allows external factors
	// to collect a target for us. Most common scenario being the Perception System for AI Agents.
	//
	// At this point we want to ensure that we received a known event and that the optional object
	// in this event contains the appropriate target. Since there are two slots for optional objects,
	// we'll separate the retrieval into another function to provide some flexibility there.
	//
	if (TriggerEventData != nullptr && TriggerEventData->EventTag == Tag_Combat_Event_Target_Acquired)
	{
		UObject* OptionalObject = const_cast<UObject*>(TriggerEventData->OptionalObject.Get());
		AActor* NewTarget = Cast<AActor>(OptionalObject);
		
		if (IsValid(NewTarget))
		{
			const FString& Message = FString::Printf(TEXT("Received target %s via Gameplay Event."), *GetNameSafe(NewTarget));
			AddDebugMessage(Message);
			HandleNewTarget(NewTarget);
		}
		else
		{
			const FString& Message = FString::Printf(TEXT("Received invalid target via Gameplay Event."));
			AddDebugMessage(Message);			
			K2_CancelAbility();
		}
	}
	
	// If the activation did not happen from an event, then we can follow the default path, which
	// means executing the targeting preset assigned to this ability.
	//
	// We are deliberately not checking for a valid target preset in the "CanActivateAbility" function,
	// because it's expected to be absent for AI agents that will only rely on the Perception System for
	// target acquisition, and will most likely never have a targeting preset set.
	//
	else
	{
		CollectTarget(TargetingPreset, bPerformAsyncTargeting);
	}
}

void UCombatAbility_TargetLock::CollectTarget(UTargetingPreset* Preset, const bool bExecuteAsync)
{
	if (IsValid(Preset))
	{
		TargetingTask = UAbilityTask_PerformTargeting::PerformTargetingRequest(this, Preset, bExecuteAsync);
		TargetingTask->OnTargetReady.AddUniqueDynamic(this, &ThisClass::HandleTargetReady);
		TargetingTask->ReadyForActivation();	
	}
	else
	{
		// Nothing to do here, without a Target Preset.
		K2_CancelAbility();
	}
}

void UCombatAbility_TargetLock::HandleTargetReady(const FTargetingRequestHandle TargetingRequestHandle)
{
	const UTargetingSubsystem* TargetingSubsystem = UTargetingSubsystem::Get(GetWorld());
	check(IsValid(TargetingSubsystem));

	TArray<AActor*> TargetsFound;
	TargetingSubsystem->GetTargetingResultsActors(TargetingRequestHandle, TargetsFound);
	if (TargetsFound.IsEmpty())
	{
		const FString& Message = FString::Printf(TEXT("No targets found!"));
		AddDebugMessage(Message);
	}
	
	AActor* NewTarget = TargetsFound.IsValidIndex(0) ? TargetsFound[0] : nullptr;
	if (IsValid(NewTarget))
	{
		HandleNewTarget(NewTarget);
	}
	else
	{
		ClearTargetFromOwnerComponent();
		K2_CancelAbility();	
	}
}

void UCombatAbility_TargetLock::HandleNewTarget_Implementation(AActor* NewTarget)
{
	check(IsValid(NewTarget));
	
	// Only remove effects that are relevant to the previous target.
	//
	// We want to reuse our current Tasks and Target Lock Actor, so we'll keep those
	// active and just update the current target next.
	//
	AActor* CurrentTarget = GetTarget();
	if (IsValid(CurrentTarget) && CurrentTarget != NewTarget)
	{
		ClearTargetFromOwnerComponent();
		UnbindFromDeathDelegate(CurrentTarget);
	}
	
	CurrentTarget = NewTarget;
	SetTargetOnOwnerComponent(CurrentTarget);
	BindToDeathDelegate(CurrentTarget);
	ApplyTargetLockEffect();
	StartTrackingDistance();
	
	const FString& Message = FString::Printf(TEXT("Locked on Target %s."), *GetNameSafe(CurrentTarget));
	AddDebugMessage(Message);
}

void UCombatAbility_TargetLock::HandleDistanceExceeded_Implementation(const AActor* Target, float Distance)
{
	K2_EndAbility();
}

void UCombatAbility_TargetLock::HandleTargetDeath_Implementation(AActor* Actor)
{
	if (IsValid(Actor))
	{
		UnbindFromDeathDelegate(Actor);
		ClearTargetFromOwnerComponent();
	}

	if (bMoveToNewTargets)
	{
		UTargetingPreset* Preset = IsValid(NextTargetingPreset) ? NextTargetingPreset : TargetingPreset;
		CollectTarget(Preset, bPerformAsyncTargeting);
	}
	else
	{
		K2_EndAbility();
	}
}

void UCombatAbility_TargetLock::SetTargetOnOwnerComponent(AActor* Target) const
{
	UActorComponent* TargetManager = GetTargetManagerComponentFromActorInfo();
	check(IsValid(TargetManager));
	ICombatTargetManagerInterface::Execute_SetCombatTarget(TargetManager, Target);
}

void UCombatAbility_TargetLock::BindToDeathDelegate(const AActor* Target)
{
	UActorComponent* DamageManager = UNinjaCombatFunctionLibrary::GetDamageManagerComponent(Target);
	if (IsValid(DamageManager))
	{
		FOwnerDiedDelegate Delegate;
		Delegate.BindDynamic(this, &ThisClass::HandleTargetDeath);
		ICombatDamageManagerInterface::Execute_BindToOwnerDiedDelegate(DamageManager, Delegate);
	}
}

void UCombatAbility_TargetLock::ApplyTargetLockEffect()
{
	if (IsValid(TargetLockEffectClass))
	{
		const FGameplayEffectSpecHandle BlockingEffectHandle = MakeOutgoingGameplayEffectSpec(TargetLockEffectClass);
		ActiveTargetingEffectHandle = K2_ApplyGameplayEffectSpecToOwner(BlockingEffectHandle);
	}
}

void UCombatAbility_TargetLock::StartTrackingDistance()
{
	AActor* CurrentTarget = GetTarget();
	if (!IsValid(CurrentTarget))
	{
		return;
	}
	
	if (bTrackDistance && DistanceThreshold > 0.f)
	{
		if (IsValid(DistanceTask))
		{
			// Just replace the target in the current task. No need to re-instantiate it.
			DistanceTask->SetTarget(CurrentTarget);
		}
		else
		{
			DistanceTask = UAbilityTask_TrackDistance::CreateTask(this, CurrentTarget, DistanceThreshold);
			DistanceTask->OnDistanceExceeded.AddUniqueDynamic(this, &ThisClass::HandleDistanceExceeded);
			DistanceTask->ReadyForActivation();
		}	
	}
}

void UCombatAbility_TargetLock::DismissCurrentTarget()
{
	AActor* CurrentTarget = GetTarget();
	if (IsValid(CurrentTarget))
	{
		ClearTargetFromOwnerComponent();
		UnbindFromDeathDelegate(CurrentTarget);
		RemoveTargetLockEffect();
		StopTrackingDistance();

		CurrentTarget = nullptr;

		const FString& Message = FString::Printf(TEXT("Unlocked from Target."));
		AddDebugMessage(Message);
	}
}

void UCombatAbility_TargetLock::ClearTargetFromOwnerComponent() const
{
	UActorComponent* TargetManager = GetTargetManagerComponentFromActorInfo();
	if (IsValid(TargetManager))
	{
		ICombatTargetManagerInterface::Execute_SetCombatTarget(TargetManager, nullptr);

		const FString& Message = FString::Printf(TEXT("Cleared target."));
		AddDebugMessage(Message);
	}
}

void UCombatAbility_TargetLock::UnbindFromDeathDelegate(const AActor* Target) const
{
	UActorComponent* DamageManager = UNinjaCombatFunctionLibrary::GetDamageManagerComponent(Target);
	if (IsValid(DamageManager))
	{
		ICombatDamageManagerInterface::Execute_UnbindFromOwnerDiedDelegate(DamageManager, this);
	}
}

void UCombatAbility_TargetLock::RemoveTargetLockEffect()
{
	if (ActiveTargetingEffectHandle.IsValid())
	{
		BP_RemoveGameplayEffectFromOwnerWithHandle(ActiveTargetingEffectHandle);
		ActiveTargetingEffectHandle.Invalidate();
	}
}

void UCombatAbility_TargetLock::StopTrackingDistance()
{
	FinishLatentTask(DistanceTask);
}

void UCombatAbility_TargetLock::HandleEventReceived_Implementation(const FGameplayEventData Payload)
{
	if (Payload.EventTag == Tag_Combat_Event_Target_Scan)
	{
		// Collect a new target. Also handles cancelling the current one, if no new target was found.
		// Also handles the scenario of re-collecting the same target, which means no changes.
		//
		CollectTarget(TargetingPreset, bPerformAsyncTargeting);
	}
	else if (Payload.EventTag == Tag_Combat_Event_Target_Dismissed)
	{
		K2_EndAbility();
	}
}

void UCombatAbility_TargetLock::EndAbility(const FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo,
	const bool bReplicateEndAbility, const bool bWasCancelled)
{
	FinishLatentTasks({ TargetingTask,DistanceTask, TargetEventTask });
	DismissCurrentTarget();
	Super::EndAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled);
}
