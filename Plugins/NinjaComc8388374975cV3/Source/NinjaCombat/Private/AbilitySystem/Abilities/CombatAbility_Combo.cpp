// Ninja Bear Studio Inc., all rights reserved.
#include "AbilitySystem/Abilities/CombatAbility_Combo.h"

#include "AbilitySystemComponent.h"
#include "InputAction.h"
#include "NinjaCombatFunctionLibrary.h"
#include "NinjaCombatLog.h"
#include "NinjaCombatTags.h"
#include "StateTree.h"
#include "Abilities/Tasks/AbilityTask_WaitGameplayEvent.h"
#include "AbilitySystem/Effects/CombatEffect_ComboWindow.h"
#include "Interfaces/Components/CombatComboManagerInterface.h"

UCombatAbility_Combo::UCombatAbility_Combo(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
	
	ComboWindowEffectClass = UCombatEffect_ComboWindow::StaticClass();
	EventMode = ECombatComboEventMode::GameplayTag;
	
	FGameplayTagContainer InitialTags;
	InitialTags.AddTagFast(Tag_Combat_Ability_Combo);
	SetInitialTags(InitialTags);

	ActivationBlockedTags.AddTag(Tag_Combat_State_Staggered);
	ActivationBlockedTags.AddTag(Tag_Combat_State_Dead);
	
	BlockAbilitiesWithTag.AddTag(Tag_Combat_Ability_Opportunity);
}

bool UCombatAbility_Combo::InComboWindow() const
{
	const UActorComponent* ComboManager = GetComboManagerComponentFromActorInfo();
	check(IsValid(ComboManager));
	return ICombatComboManagerInterface::Execute_InComboWindow(ComboManager);
}

int32 UCombatAbility_Combo::GetComboCount() const
{
	const UActorComponent* ComboManager = GetComboManagerComponentFromActorInfo();
	check(IsValid(ComboManager));
	return ICombatComboManagerInterface::Execute_GetComboCount(ComboManager);
}

void UCombatAbility_Combo::OnGiveAbility(const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilitySpec& Spec)
{
	Super::OnGiveAbility(ActorInfo, Spec);
	GiveComboAbilities(Spec);
}

void UCombatAbility_Combo::GiveComboAbilities(const FGameplayAbilitySpec& CurrentSpec)
{
	UAbilitySystemComponent* AbilitySystemComponent = GetAbilitySystemComponentFromActorInfo();
	if (!IsValid(AbilitySystemComponent) || !AbilitySystemComponent->IsOwnerActorAuthoritative())
	{
		return;
	}
	
	const float AbilityLevel = CurrentSpec.Level;
	for (const TSubclassOf<UGameplayAbility>& AbilityClass : AbilityClasses)
	{
		UGameplayAbility* AbilityCDO = AbilityClass->GetDefaultObject<UGameplayAbility>();
		FGameplayAbilitySpec NewAbilitySpec(AbilityCDO, AbilityLevel);
		NewAbilitySpec.SourceObject = CurrentSpec.SourceObject;
		
		const FGameplayAbilitySpecHandle& AbilitySpecHandle = AbilitySystemComponent->GiveAbility(NewAbilitySpec);
		if (AbilitySpecHandle.IsValid())
		{
			AdditionalAbilityHandles.Add(AbilitySpecHandle);
		}
	}
}

void UCombatAbility_Combo::OnRemoveAbility(const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilitySpec& Spec)
{
	Super::OnRemoveAbility(ActorInfo, Spec);
	RemoveComboAbilities();
}

void UCombatAbility_Combo::RemoveComboAbilities()
{
	if (AdditionalAbilityHandles.IsEmpty())
	{
		return;
	}
	
	UAbilitySystemComponent* AbilitySystemComponent = GetAbilitySystemComponentFromActorInfo();
	if (!IsValid(AbilitySystemComponent))
	{
		return;
	}

	for (FGameplayAbilitySpecHandle& Handle : AdditionalAbilityHandles)
	{
		AbilitySystemComponent->ClearAbility(Handle);
	}

	AdditionalAbilityHandles.Empty();
}

bool UCombatAbility_Combo::CanActivateAbility(const FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo* ActorInfo, const FGameplayTagContainer* SourceTags,
	const FGameplayTagContainer* TargetTags, FGameplayTagContainer* OptionalRelevantTags) const
{
	return Super::CanActivateAbility(Handle, ActorInfo, SourceTags, TargetTags, OptionalRelevantTags)
		&& ensureMsgf(IsValid(ComboTree), TEXT("A Combo Data Asset is required to activate the ability."));
}

void UCombatAbility_Combo::ActivateAbility(const FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo,
	const FGameplayEventData* TriggerEventData)
{
	Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);

	UActorComponent* ComboManager = GetComboManagerComponentFromActorInfo();
	if (UNinjaCombatFunctionLibrary::IsValidComboManagerComponent(ComboManager) && K2_CommitAbility())
	{
		static constexpr bool bExactOnly = false;
		ComboEventTask = InitializeEventTask(Tag_Combat_Event_Combo, bExactOnly);
		ComboEventTask->ReadyForActivation();

		FComboFinishedDelegate Delegate;
		Delegate.BindDynamic(this, &ThisClass::HandleComboFinished);
	
		ICombatComboManagerInterface::Execute_BindToComboFinishedDelegate(ComboManager, Delegate);
		ICombatComboManagerInterface::Execute_StartCombo(ComboManager, ComboTree);
	}
	else
	{
		K2_CancelAbility();
	}
}

void UCombatAbility_Combo::HandleEventReceived_Implementation(const FGameplayEventData Payload)
{
	Super::HandleEventReceived_Implementation(Payload);

	if (Payload.EventTag.MatchesTag(Tag_Combat_Event_Combo_Attack))
	{
		AdvanceCombo(Payload);
	}
	else if (Payload.EventTag == Tag_Combat_Event_Combo_Begin)
	{
		ApplyComboWindowEffect();
	}
	else if (Payload.EventTag == Tag_Combat_Event_Combo_End)
	{
		RemoveComboWindowEffect();
	}
	else if (Payload.EventTag == Tag_Combat_Event_Combo_Target_Hit)
	{
		RegisterTargetFromPayload(Payload);
	}
	else if (Payload.EventTag == Tag_Combat_Event_Combo_Target_Reset)
	{
		ResetCurrentTargets();
	}
}

void UCombatAbility_Combo::HandleComboFinished(UActorComponent*, const bool bSucceeded)
{
	constexpr bool bReplicateEndAbility = false;
	const bool bWasCancelled = !bSucceeded;

	EndAbility(GetCurrentAbilitySpecHandle(), GetCurrentActorInfo(), GetCurrentActivationInfo(),
		bReplicateEndAbility, bWasCancelled);	
}

void UCombatAbility_Combo::AdvanceCombo(const FGameplayEventData& Payload)
{
	if (!InComboWindow())
	{
		COMBAT_LOG(Warning, "Attempt to advance the combo outside a combo window!");
		return;
	}
	
	if (IsLocallyControlled() && !K2_HasAuthority())
	{
		// Also trigger this on the server.
		Server_AdvanceCombo(Payload);	
	}
	
	FGameplayTag ComboEventTag = Payload.EventTag;
	if (EventMode == ECombatComboEventMode::InputAction)
	{
		const UInputAction* InputAction = GetInputActionFromEvent(Payload);
		if (ensureMsgf(IsValid(InputAction), TEXT("Missing Input Action in the Combo Payload.")))
		{
			ComboEventTag = GetComboEventFromInputAction(InputAction);
		}
	}

	UActorComponent* ComboManager = GetComboManagerComponentFromActorInfo();
	checkf(UNinjaCombatFunctionLibrary::IsValidComboManagerComponent(ComboManager), TEXT("Sanity Check: Combo Manager became invalid during execution!"));
	ICombatComboManagerInterface::Execute_AdvanceCombo(ComboManager, ComboEventTag);
}

void UCombatAbility_Combo::ApplyComboWindowEffect()
{
	if (InComboWindow())
	{
		COMBAT_LOG(VeryVerbose, "Already in a combo window, discarding request.");
		return;
	}

	if (!IsValid(ComboWindowEffectClass))
	{
		COMBAT_LOG_ARGS(Warning, "No Combo Window effect set for ability '%s'!", *GetNameSafe(this));
		return;
	}

	if (!HasAuthority(&GetCurrentActivationInfoRef()))
	{
		COMBAT_LOG_ARGS(Warning, "Adding the Combo Window effect requires authority!");
        return;
	}
	
	const FGameplayEffectSpecHandle Handle = MakeOutgoingGameplayEffectSpec(ComboWindowEffectClass);
	ComboWindowEffectHandle = K2_ApplyGameplayEffectSpecToOwner(Handle);

	if (bEnableDebug)
	{
		const bool bApplied = ComboWindowEffectHandle.IsValid();
		const FString& DebugMessage = FString::Printf(TEXT("%s Combo Window Effect."), bApplied ? TEXT("Applied") : TEXT("Failed to apply"));
		AddDebugMessage(DebugMessage);	
	}	
}

void UCombatAbility_Combo::RemoveComboWindowEffect()
{
	if (!ComboWindowEffectHandle.IsValid())
	{
		COMBAT_LOG(VeryVerbose, "Not in a combo window, discarding request.");
		return;
	}

	if (!HasAuthority(&GetCurrentActivationInfoRef()))
	{
		COMBAT_LOG_ARGS(Warning, "Removing the Combo Window effect requires authority!");
		return;
	}
	
	BP_RemoveGameplayEffectFromOwnerWithHandle(ComboWindowEffectHandle);
	ComboWindowEffectHandle.Invalidate();

	if (bEnableDebug)
	{
		const FString& DebugMessage = FString::Printf(TEXT("Removed Combo Window Effect."));
		AddDebugMessage(DebugMessage);	
	}
}

void UCombatAbility_Combo::RegisterTargetFromPayload(const FGameplayEventData Payload)
{
	UActorComponent* ComboManager = GetComboManagerComponentFromActorInfo();
	if (!UNinjaCombatFunctionLibrary::IsValidComboManagerComponent(ComboManager))
	{
		return;
	}
	
	const AActor* TargetHit = GetTargetHitFromEvent(Payload);
	if (!ensureMsgf(IsValid(TargetHit), TEXT("Missing Target Hit in the Combo Payload.")))
	{
		return;
	}
	
	ICombatComboManagerInterface::Execute_RegisterTargetFromCurrentAttack(ComboManager, TargetHit);

	if (bEnableDebug)
	{
		const int32 TotalTargets = ICombatComboManagerInterface::Execute_GetTargetCount(ComboManager);
		const FString& DebugMessage = FString::Printf(TEXT("Target received: %s (%d total)."), *GetNameSafe(TargetHit), TotalTargets);
		AddDebugMessage(DebugMessage);	
	}			
}

void UCombatAbility_Combo::ResetCurrentTargets()
{
	UActorComponent* ComboManager = GetComboManagerComponentFromActorInfo();
	if (!UNinjaCombatFunctionLibrary::IsValidComboManagerComponent(ComboManager))
	{
		return;
	}

	const int32 TotalTargets = ICombatComboManagerInterface::Execute_GetTargetCount(ComboManager);
	if (TotalTargets == 0)
	{
		return;
	}
	
	ICombatComboManagerInterface::Execute_ResetTargetCount(ComboManager);

	if (bEnableDebug)
	{
		const FString& DebugMessage = FString::Printf(TEXT("Reset targets (had %d before)."), TotalTargets);
		AddDebugMessage(DebugMessage);	
	}
}

const UInputAction* UCombatAbility_Combo::GetInputActionFromEvent_Implementation(
	const FGameplayEventData& Payload) const
{
	const UInputAction* InputAction = Cast<UInputAction>(Payload.OptionalObject);
	if (!IsValid(InputAction))
	{
		Cast<UInputAction>(Payload.OptionalObject2);
	}
	
	return InputAction;
}

const AActor* UCombatAbility_Combo::GetTargetHitFromEvent_Implementation(const FGameplayEventData& Payload) const
{
	const AActor* TargetHit = Cast<AActor>(Payload.OptionalObject);
	if (!IsValid(TargetHit))
	{
		Cast<AActor>(Payload.OptionalObject2);
	}
	
	return TargetHit;
}

FGameplayTag UCombatAbility_Combo::GetComboEventFromInputAction(const UInputAction* InputAction) const
{
	for (const FComboEventMapping& EventMapping : EventMappings)
	{
		if (EventMapping.InputAction == InputAction)
		{
			return EventMapping.ComboEventTag;
		}
	}

	return FGameplayTag::EmptyTag;
}

void UCombatAbility_Combo::EndAbility(const FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo,
	const bool bReplicateEndAbility, const bool bWasCancelled)
{
	UActorComponent* ComboManager = GetComboManagerComponentFromActorInfo();
	if (UNinjaCombatFunctionLibrary::IsValidComboManagerComponent(ComboManager))
	{
		ICombatComboManagerInterface::Execute_UnbindFromComboFinishedDelegate(ComboManager, this);
		ICombatComboManagerInterface::Execute_ResetCombo(ComboManager);
	}
	
	FinishLatentTasks({ ComboEventTask });
	RemoveComboWindowEffect();
	Super::EndAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled);
}

void UCombatAbility_Combo::Server_AdvanceCombo_Implementation(const FGameplayEventData& Payload)
{
	AdvanceCombo(Payload);
}

bool UCombatAbility_Combo::Server_AdvanceCombo_Validate(const FGameplayEventData& Payload)
{
	return InComboWindow();
}
