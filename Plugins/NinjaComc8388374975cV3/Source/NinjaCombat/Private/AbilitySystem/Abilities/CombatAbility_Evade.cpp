// Ninja Bear Studio Inc., all rights reserved.
#include "AbilitySystem/Abilities/CombatAbility_Evade.h"

#include "NinjaCombatTags.h"
#include "Abilities/Tasks/AbilityTask_WaitGameplayEvent.h"
#include "AbilitySystem/Effects/CombatEffect_EvadeCooldown.h"
#include "AbilitySystem/Effects/CombatEffect_EvadeCost.h"
#include "AbilitySystem/Effects/CombatEffect_Evading.h"
#include "AbilitySystem/Effects/CombatEffect_Invulnerability.h"
#include "AbilitySystem/Providers/Animation/AnimationProvider_DirectionalEvade.h"

UCombatAbility_Evade::UCombatAbility_Evade(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer
		.SetDefaultSubobjectClass<UAnimationProvider_DirectionalEvade>(AnimationProviderName))
{
	bEnableMotionWarping = false;

	FGameplayTagContainer InitialTags;
	InitialTags.AddTagFast(Tag_Combat_Ability_Evade);
	SetInitialTags(InitialTags);
	
	ActivationBlockedTags.AddTag(Tag_Combat_State_Dead);
	ActivationBlockedTags.AddTag(Tag_Combat_State_Opportunity_Attacker);
	ActivationBlockedTags.AddTag(Tag_Combat_State_Opportunity_Victim);
	ActivationBlockedTags.AddTag(Tag_Combat_State_Staggered);

	EvadingEffectClass = UCombatEffect_Evading::StaticClass();
	InvulnerabilityEffectClass = UCombatEffect_Invulnerability::StaticClass();
	CostGameplayEffectClass = UCombatEffect_EvadeCost::StaticClass();
	CooldownGameplayEffectClass = UCombatEffect_EvadeCooldown::StaticClass();
}

void UCombatAbility_Evade::ActivateAbility(const FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo,
	const FGameplayEventData* TriggerEventData)
{
	Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);
	
	static constexpr bool bExactOnly = false;
	InvulnerabilityEventTask = InitializeEventTask(Tag_Combat_Event_Invulnerability, bExactOnly);
	InvulnerabilityEventTask->ReadyForActivation();
}

void UCombatAbility_Evade::HandleEventReceived_Implementation(const FGameplayEventData Payload)
{
	Super::HandleEventReceived_Implementation(Payload);
	
	if (Payload.EventTag == Tag_Combat_Event_Invulnerability_Begin)
	{
		GrantInvulnerabilityEffect();
	}
	else if (Payload.EventTag == Tag_Combat_Event_Invulnerability_End)
	{
		RevokeInvulnerabilityEffect();
	}
}

void UCombatAbility_Evade::OnAnimationStarted_Implementation()
{
	GrantEvadingEffect();
}

void UCombatAbility_Evade::GrantEvadingEffect()
{
	if (IsValid(EvadingEffectClass))
	{
		const FGameplayEffectSpecHandle EffectHandle = MakeOutgoingGameplayEffectSpec(EvadingEffectClass);
		EvadingEffectHandle = K2_ApplyGameplayEffectSpecToOwner(EffectHandle);

		if (InvulnerabilityEffectHandle.IsValid() && bEnableDebug)
		{
			const FString& DebugMessage = FString::Printf(TEXT("Granted the Evading Effect."));
			AddDebugMessage(DebugMessage);	
		}		
	}	
}

void UCombatAbility_Evade::GrantInvulnerabilityEffect()
{
	if (IsValid(InvulnerabilityEffectClass))
	{
		const FGameplayEffectSpecHandle Handle = MakeOutgoingGameplayEffectSpec(InvulnerabilityEffectClass);
		InvulnerabilityEffectHandle = K2_ApplyGameplayEffectSpecToOwner(Handle);

		if (InvulnerabilityEffectHandle.IsValid() && bEnableDebug)
		{
			const FString& DebugMessage = FString::Printf(TEXT("Granted the Invulnerability Effect."));
			AddDebugMessage(DebugMessage);	
		}
	}
}

void UCombatAbility_Evade::RevokeEvadingEffect()
{
	if (EvadingEffectHandle.IsValid())
	{
		BP_RemoveGameplayEffectFromOwnerWithHandle(EvadingEffectHandle);
		EvadingEffectHandle.Invalidate();

		if (bEnableDebug)
		{
			const FString& DebugMessage = FString::Printf(TEXT("Revoked the Evading Effect."));
			AddDebugMessage(DebugMessage);	
		}
	}
}

void UCombatAbility_Evade::RevokeInvulnerabilityEffect()
{
	if (InvulnerabilityEffectHandle.IsValid())
	{
		BP_RemoveGameplayEffectFromOwnerWithHandle(InvulnerabilityEffectHandle);
		InvulnerabilityEffectHandle.Invalidate();

		if (bEnableDebug)
		{
			const FString& DebugMessage = FString::Printf(TEXT("Revoked the Invulnerability Effect."));
			AddDebugMessage(DebugMessage);	
		}
	}
}

void UCombatAbility_Evade::EndAbility(const FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo,
	const bool bReplicateEndAbility, const bool bWasCancelled)
{
	FinishLatentTasks({ InvulnerabilityEventTask });
	RevokeEvadingEffect();
	RevokeInvulnerabilityEffect();
	Super::EndAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled);
}
