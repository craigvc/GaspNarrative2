// Ninja Bear Studio Inc., all rights reserved.
#include "AbilitySystem/NinjaCombatContextAnimationAbility.h"

UNinjaCombatContextAnimationAbility::UNinjaCombatContextAnimationAbility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	// Configuration used for the ICombatAnimationContextProviderInterface.
	//
	// The Hit Reaction Animation Provider will use this to determine the type of damage
	// that was received and potentially react accordingly. For example, a melee damage
	// can trigger a certain animation but fire damage may trigger another.
	//
	TargetTagsFilter = FGameplayTagContainer::EmptyContainer;
	AnimationContext = FGameplayTagContainer::EmptyContainer;
	InstigatorTagsFilter = FGameplayTagContainer::EmptyContainer;
}

bool UNinjaCombatContextAnimationAbility::GetAnimationContext_Implementation(FGameplayTagContainer& OutContextTags) const
{
	OutContextTags = AnimationContext;
	return OutContextTags.IsValid();	
}

bool UNinjaCombatContextAnimationAbility::GetEffectContext_Implementation(FGameplayEffectContextHandle& OutHandle) const
{
	if (EffectContextHandlePtr.IsValid())
	{
		const FGameplayEffectContextHandle* EffectContextHandle = EffectContextHandlePtr.Get();
		OutHandle = *EffectContextHandle;
		return true;
	}

	return false;
}

void UNinjaCombatContextAnimationAbility::CollectContext(const FGameplayEventData& TriggerEventData)
{
	AnimationContext.Reset();
	
	if (!InstigatorTagsFilter.IsEmpty())
	{
		const FGameplayTagContainer FilteredTags = TriggerEventData.InstigatorTags.Filter(InstigatorTagsFilter);
		AnimationContext.AppendTags(FilteredTags);
	}

	if (!TargetTagsFilter.IsEmpty())
	{
		const FGameplayTagContainer FilteredTags = TriggerEventData.TargetTags.Filter(TargetTagsFilter);
		AnimationContext.AppendTags(FilteredTags);
	}

	EffectContextHandlePtr = MakeShared<FGameplayEffectContextHandle>(TriggerEventData.ContextHandle);	
}

void UNinjaCombatContextAnimationAbility::EndAbility(const FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo,
	const bool bReplicateEndAbility, const bool bWasCancelled)
{
	AnimationContext.Reset();
	EffectContextHandlePtr.Reset();	
	Super::EndAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled);
}