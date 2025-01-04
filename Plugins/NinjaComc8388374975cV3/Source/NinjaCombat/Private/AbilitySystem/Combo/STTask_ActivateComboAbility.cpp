// Ninja Bear Studio Inc., all rights reserved.
#include "AbilitySystem/Combo/STTask_ActivateComboAbility.h"

#include "AbilitySystemComponent.h"
#include "AbilitySystemGlobals.h"
#include "NinjaCombatFunctionLibrary.h"
#include "StateTreeExecutionContext.h"
#include "Components/ActorComponent.h"
#include "Interfaces/Components/CombatComboManagerInterface.h"
#include "Runtime/Launch/Resources/Version.h"

USTTask_ActivateComboAbility::USTTask_ActivateComboAbility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	ChangeOnActivation = EComboCountChange::IncrementCount;
	AbilityTags = FGameplayTagContainer::EmptyContainer;
}

EStateTreeRunStatus USTTask_ActivateComboAbility::EnterState(FStateTreeExecutionContext& Context, const FStateTreeTransitionResult& Transition)
{
	if (AbilityTags.IsEmpty())
	{
		// Can't execute without gameplay tags.
		return EStateTreeRunStatus::Failed;
	}
	
	const AActor* Owner = Cast<AActor>(Context.GetOwner());
	UAbilitySystemComponent* AbilityComponent = UAbilitySystemGlobals::GetAbilitySystemComponentFromActor(Owner);
	if (AbilityComponent == nullptr)
	{
		// Owner does not have a valid Ability System Component.
		return EStateTreeRunStatus::Failed;
	}

	AbilityCallbackDelegateHandle = AbilityComponent->OnAbilityEnded.AddUObject(this, &ThisClass::OnAbilityEnded, Owner);
	const bool bActivated = AbilityComponent->TryActivateAbilitiesByTag(AbilityTags);

	if (bActivated)
	{
		UpdateComboCount();
		return EStateTreeRunStatus::Running;
	}

	return EStateTreeRunStatus::Failed;
}

void USTTask_ActivateComboAbility::UpdateComboCount() const
{
	if (UNinjaCombatFunctionLibrary::IsValidComboManagerComponent(ComboManager))
	{
		switch (ChangeOnActivation)
		{
			case EComboCountChange::IncrementCount:
			{
				const int32 ComboCount = ICombatComboManagerInterface::Execute_GetComboCount(ComboManager);
				ICombatComboManagerInterface::Execute_SetComboCount(ComboManager, ComboCount + 1);
				break;
			}
			case EComboCountChange::ResetCount:
			{
				ICombatComboManagerInterface::Execute_SetComboCount(ComboManager, 0);
				break;
			}
			default: break;
		}
	}
}

void USTTask_ActivateComboAbility::OnAbilityEnded(const FAbilityEndedData& Data, const AActor* Owner)
{
	FGameplayTagContainer TagContainer;
#if ENGINE_MINOR_VERSION < 5
	TagContainer.AppendTags(Data.AbilityThatEnded->AbilityTags);
#else
	TagContainer.AppendTags(Data.AbilityThatEnded->GetAssetTags());
#endif
	
	if (TagContainer.HasAllExact(AbilityTags))
	{
		UAbilitySystemComponent* AbilityComponent = UAbilitySystemGlobals::GetAbilitySystemComponentFromActor(Owner);
		if (IsValid(AbilityComponent))
		{
			AbilityComponent->OnAbilityEnded.Remove(AbilityCallbackDelegateHandle);
			AbilityCallbackDelegateHandle.Reset();
		}
		
		const bool bSucceeded = !Data.bWasCancelled;
		FinishTask(bSucceeded);
	}
}

bool USTTask_ActivateComboAbility::MatchAbilityThatEnded(const FAbilityEndedData& Data) const
{
	FGameplayTagContainer AbilityThatEndedTags;

#if ENGINE_MINOR_VERSION < 5
	AbilityThatEndedTags.AppendTags(Data.AbilityThatEnded->AbilityTags);
#else
	AbilityThatEndedTags.AppendTags(Data.AbilityThatEnded->GetAssetTags());
#endif
	
	return AbilityThatEndedTags.HasAllExact(AbilityTags);
}