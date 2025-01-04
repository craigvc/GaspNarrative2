// Ninja Bear Studio Inc., all rights reserved.
#include "AbilitySystem/Abilities/CombatAbility_Death.h"

#include "AbilitySystemComponent.h"
#include "NinjaCombatFunctionLibrary.h"
#include "NinjaCombatTags.h"
#include "TimerManager.h"
#include "Data/NinjaCombatDamageDataAsset.h"
#include "Engine/World.h"
#include "Interfaces/Components/CombatDamageManagerInterface.h"

UCombatAbility_Death::UCombatAbility_Death(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer
		.DoNotCreateDefaultSubobject(WarpTargetProviderName))
{
	bMatchAnimationEnd = true;
	bEnableMotionWarping = false;
	WarpTargetProvider = nullptr;

	FGameplayTagContainer InitialTags;
	InitialTags.AddTagFast(Tag_Combat_Ability_Death);
	SetInitialTags(InitialTags);
	
	CancelAbilitiesWithTag.AddTag(Tag_Combat_Ability_Attack);
	CancelAbilitiesWithTag.AddTag(Tag_Combat_Ability_Block);
	CancelAbilitiesWithTag.AddTag(Tag_Combat_Ability_Cast);
	CancelAbilitiesWithTag.AddTag(Tag_Combat_Ability_Combo);
	CancelAbilitiesWithTag.AddTag(Tag_Combat_Ability_Evade);
	CancelAbilitiesWithTag.AddTag(Tag_Combat_Ability_HitReaction);
	CancelAbilitiesWithTag.AddTag(Tag_Combat_Ability_Opportunity);
	CancelAbilitiesWithTag.AddTag(Tag_Combat_Ability_Stagger);
	CancelAbilitiesWithTag.AddTag(Tag_Combat_Ability_TargetLock);

	InstigatorTagsFilter.AddTag(Tag_Combat_Effect_Damage);
	
	FAbilityTriggerData DeathTrigger;
	DeathTrigger.TriggerSource = EGameplayAbilityTriggerSource::GameplayEvent;
	DeathTrigger.TriggerTag = Tag_Combat_Event_Death;
	AbilityTriggers.Add(DeathTrigger);
}

void UCombatAbility_Death::ActivateAbility(const FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo,
	const FGameplayEventData* TriggerEventData)
{
	ExecuteBlueprintActivation(TriggerEventData);
	
	if (TriggerEventData && TriggerEventData->EventTag == Tag_Combat_Event_Death)
	{
		const UActorComponent* Damage = GetDamageManagerComponentFromActorInfo();
		const UNinjaCombatDamageDataAsset* DamageData = ICombatDamageManagerInterface::Execute_GetDamageData(Damage);
		if (IsValid(DamageData))
		{
			const float TimeLimit = DamageData->DeathTimeLimit;
			GetWorld()->GetTimerManager().SetTimer(DeathTimerHandle,this, &ThisClass::K2_EndAbility, TimeLimit);
		}

		CollectContext(*TriggerEventData);
		PlayAnimationMontage();
	}
	else
	{
		K2_CancelAbility();
	}
}

void UCombatAbility_Death::HandleEventReceived_Implementation(FGameplayEventData Payload)
{
	Super::HandleEventReceived_Implementation(Payload);

	if (Payload.EventTag == Tag_Combat_Event_Death_Finished)
	{
		K2_EndAbility();
	}
}

void UCombatAbility_Death::EndAbility(const FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo,
	const bool bReplicateEndAbility, const bool bWasCancelled)
{
	Super::EndAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled);

	GetWorld()->GetTimerManager().ClearTimer(DeathTimerHandle);
	FinishDying();
}

void UCombatAbility_Death::FinishDying_Implementation()
{
	UActorComponent* DamageManager = GetDamageManagerComponentFromActorInfo();
	if (UNinjaCombatFunctionLibrary::IsValidDamageManagerComponent(DamageManager))
	{
		ICombatDamageManagerInterface::Execute_FinishDying(DamageManager);
	}
}
