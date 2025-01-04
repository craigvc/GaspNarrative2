// Ninja Bear Studio Inc., all rights reserved.
#include "AbilitySystem/Abilities/CombatAbility_Block.h"

#include "AbilitySystemComponent.h"
#include "AbilitySystemGlobals.h"
#include "NinjaCombatTags.h"
#include "Abilities/Tasks/AbilityTask_WaitGameplayEvent.h"
#include "AbilitySystem/Effects/CombatEffect_BlockCooldown.h"
#include "AbilitySystem/Effects/CombatEffect_BlockCost.h"
#include "AbilitySystem/Effects/CombatEffect_Blocking.h"
#include "Interfaces/Components/CombatDefenseManagerInterface.h"

UCombatAbility_Block::UCombatAbility_Block(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	FGameplayTagContainer InitialTags;
	InitialTags.AddTagFast(Tag_Combat_Ability_Block);
	SetInitialTags(InitialTags);
	
	ActivationBlockedTags.AddTag(Tag_Combat_State_Staggered);
	ActivationBlockedTags.AddTag(Tag_Combat_State_Dead);
	
	BlockingEffectClass = UCombatEffect_Blocking::StaticClass();
	CostGameplayEffectClass = UCombatEffect_BlockCost::StaticClass();
	CooldownGameplayEffectClass = UCombatEffect_BlockCooldown::StaticClass();
}

bool UCombatAbility_Block::IsBlocking() const
{
	const UActorComponent* DefenseManager = GetDefenseManagerComponentFromActorInfo();
	check(IsValid(DefenseManager));
	return ICombatDefenseManagerInterface::Execute_IsBlocking(DefenseManager);
}

void UCombatAbility_Block::ActivateAbility(const FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo,
	const FGameplayEventData* TriggerEventData)
{
	Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);
	
	bool bShouldCancelAbility = true;
	if (K2_CheckAbilityCost() && K2_CheckAbilityCooldown())
	{
		const bool bWasBlocking = IsBlocking();
	
		// We'll check here if the avatar is blocking, instead of checking in "CanActivateAbility".
		// Reason for that is because we want to still activate the ability if the avatar is blocking,
		// but when the ability is deactivated, we'll clear both - the handle and pre-existing effect.
		//
		if (IsValid(BlockingEffectClass) && !bWasBlocking)
		{
			const FGameplayEffectSpecHandle EffectHandle = MakeOutgoingGameplayEffectSpec(BlockingEffectClass);
			BlockingEffectHandle = K2_ApplyGameplayEffectSpecToOwner(EffectHandle);
		}

		if (IsBlocking())
		{
			BreakerHitEventTag = InitializeEventTask(Tag_Combat_Event_Damage, false);
			BreakerHitEventTag->ReadyForActivation();
		
			if (bEnableDebug)
			{
				const FString& DebugMessage = FString::Printf(TEXT("Avatar is blocking (%s)."), bWasBlocking ? TEXT("had effect") : TEXT("applied effect"));
				AddDebugMessage(DebugMessage);
			}
		}

		// If we are blocking at this point, regardless of the source (pre-existing or current
		// activation), then we should let the ability execute normally.
		//
		bShouldCancelAbility = !IsBlocking();
	}

	if (bShouldCancelAbility)
	{
		K2_CancelAbility();
	}
}

void UCombatAbility_Block::HandleEventReceived_Implementation(const FGameplayEventData Payload)
{
	if (Payload.EventTag == Tag_Combat_Event_Damage_Blocked)
	{
		const AActor* DamageInstigator = Payload.ContextHandle.GetInstigator();
		UAbilitySystemComponent* InstigatorAbilities = UAbilitySystemGlobals::GetAbilitySystemComponentFromActor(DamageInstigator);
	
		if (IsValid(InstigatorAbilities))
		{
			// Invert the incoming payload since we are originating this event towards the instigator.
			// This means for this event, this owner will now be the source and the original instigator is the target.
			//
			FGameplayEventData* ReturnPayload = new FGameplayEventData();
			ReturnPayload->EventTag = Tag_Combat_Event_Block_Reaction;
			ReturnPayload->Instigator = GetAvatarActorFromActorInfo();
			ReturnPayload->Target = DamageInstigator;
			ReturnPayload->EventMagnitude = Payload.EventMagnitude;
			ReturnPayload->ContextHandle = Payload.ContextHandle;
			ReturnPayload->InstigatorTags = Payload.TargetTags;
			ReturnPayload->TargetTags = Payload.InstigatorTags;
			InstigatorAbilities->HandleGameplayEvent(Tag_Combat_Event_Block_Reaction, ReturnPayload);
		}
	}	
	if (Payload.EventTag == Tag_Combat_Event_Damage_Breaker)
	{
		K2_CommitAbilityCooldown(true);
		K2_EndAbility();
	}
}

void UCombatAbility_Block::EndAbility(const FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo,
	const bool bReplicateEndAbility, const bool bWasCancelled)
{
	// First, try to remove the effect from this ability.
	if (BlockingEffectHandle.IsValid())
	{
		BP_RemoveGameplayEffectFromOwnerWithHandle(BlockingEffectHandle);
		BlockingEffectHandle.Invalidate();

		if (bEnableDebug)
		{
			const FString& DebugMessage = FString::Printf(TEXT("Avatar stopped blocking (from applied effect)."));
			AddDebugMessage(DebugMessage);	
		}		
	}

	// If we are still blocking, then we had a pre-existing effect. Maybe a default one?
	if (IsBlocking())
	{
		FGameplayTagContainer TagContainer = FGameplayTagContainer::EmptyContainer;
		TagContainer.AddTagFast(Tag_Combat_State_Blocking);
		BP_RemoveGameplayEffectFromOwnerWithGrantedTags(TagContainer);

		if (bEnableDebug)
		{
			const FString& DebugMessage = FString::Printf(TEXT("Avatar stopped blocking (from previous effect)."));
			AddDebugMessage(DebugMessage);	
		}		
	}

	FinishLatentTask(BreakerHitEventTag);
	Super::EndAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled);
}

