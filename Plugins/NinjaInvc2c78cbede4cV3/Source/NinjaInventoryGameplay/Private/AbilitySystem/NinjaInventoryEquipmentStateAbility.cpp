// Ninja Bear Studio Inc., all rights reserved.
#include "AbilitySystem/NinjaInventoryEquipmentStateAbility.h"

#include "Components/NinjaEquipmentManagerComponent.h"
#include "GameFramework/NinjaEquipment.h"

UNinjaInventoryEquipmentStateAbility::UNinjaInventoryEquipmentStateAbility(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	EquipmentQuery = FGameplayTagQuery::EmptyQuery;
	TargetStateTag = FGameplayTag::EmptyTag;
	AnimationEventTag = FGameplayTag::EmptyTag;
}

bool UNinjaInventoryEquipmentStateAbility::CanActivateAbility(const FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo* ActorInfo, const FGameplayTagContainer* SourceTags,
	const FGameplayTagContainer* TargetTags, FGameplayTagContainer* OptionalRelevantTags) const
{
	// On top of the default check we need to make sure that:
	//
	// 1. Our target equipment is valid, so we can actually get the equipment to change state.
	// 2. The target State Tag is valid, so we can apply a new state to the equipment.
	// 3. The list of target equipment is empty, meaning we are not currently performing any changes.
	//
	return Super::CanActivateAbility(Handle, ActorInfo, SourceTags, TargetTags, OptionalRelevantTags)
		&& !EquipmentQuery.IsEmpty() && TargetStateTag.IsValid() && TargetEquipment.IsEmpty();
}

void UNinjaInventoryEquipmentStateAbility::ActivateAbility(const FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo,
	const FGameplayEventData* TriggerEventData)
{
	if (!CommitAbility(Handle, ActorInfo, ActivationInfo))
	{			
		constexpr bool bReplicateEndAbility = true;
		CancelAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility);
	}

	FGameplayTagContainer QueryTags = FGameplayTagContainer::EmptyContainer;
	QueryTags.AddTagFast(AnimationEventTag);
	
	if (TriggerEventData != nullptr)
	{
		UNinjaEquipment* Equipment = GetEquipmentInstanceFromPayload(*TriggerEventData);
		TargetEquipment.Add(Equipment);

		const FGameplayTagContainer EquipmentTags = Equipment->GetEquipmentTags();
		QueryTags.AppendTags(EquipmentTags);
	}
	else if (!EquipmentQuery.IsEmpty())
	{
		const UNinjaEquipmentManagerComponent* EquipmentManager = GetEquipmentManager();

		TArray<UNinjaEquipment*> Instances = EquipmentManager->GetEquipmentByQuery(EquipmentQuery);
		for (UNinjaEquipment* Equipment : Instances)
		{
			TargetEquipment.Add(Equipment);
			
			FGameplayTagContainer EquipmentTags = Equipment->GetEquipmentTags();
			QueryTags.AppendTags(EquipmentTags);
		}		
	}

	if (QueryTags.IsValid() && !TargetEquipment.IsEmpty())
	{
		LoadAnimationMontage(QueryTags);
	}
	else
	{
		K2_CancelAbility();
	}
}

void UNinjaInventoryEquipmentStateAbility::HandleAnimationLoaded_Implementation(UAnimMontage* MontageToPlay, const FName MontageSection)
{
	Super::HandleAnimationLoaded_Implementation(MontageToPlay, MontageSection);

	if (AnimationStrategy == EInventoryAnimationStrategy::WhenAnimationStarts && K2_HasAuthority())
	{
		for (UNinjaEquipment* Equipment : TargetEquipment)
		{
			UNinjaEquipmentManagerComponent* EquipmentManager = Equipment->GetEquipmentManager();
			check(IsValid(EquipmentManager));
			EquipmentManager->ChangeEquipmentState(Equipment, TargetStateTag);
		}
	}
}

void UNinjaInventoryEquipmentStateAbility::HandleAnimationNotFound_Implementation()
{
	if (AnimationStrategy == EInventoryAnimationStrategy::AlwaysExecute)
	{
		for (UNinjaEquipment* Equipment : TargetEquipment)
		{
			UNinjaEquipmentManagerComponent* EquipmentManager = Equipment->GetEquipmentManager();
			check(IsValid(EquipmentManager));
			EquipmentManager->ChangeEquipmentState(Equipment, TargetStateTag);
		}
	}
}

void UNinjaInventoryEquipmentStateAbility::HandleEventReceived_Implementation(const FGameplayEventData Payload)
{
	if (!K2_HasAuthority() || Payload.EventTag != AnimationEventTag)
	{
		// Need authority and of course the event has to be the right one.
		return;
	}
	
	const FGameplayTagContainer TargetTags = Payload.TargetTags;
	if (TargetTags.IsEmpty())
	{
		// Allowing an empty container would automatically equip everything.
		// The event must be deliberate on the gear it wants to activate.
		return;
	}
	
	for (UNinjaEquipment* Equipment : TargetEquipment)
	{
		const FGameplayTagContainer EquipmentTags = Equipment->GetEquipmentTags();
		if (EquipmentTags.HasAllExact(TargetTags))
		{
			UNinjaEquipmentManagerComponent* EquipmentManager = Equipment->GetEquipmentManager();
			check(IsValid(EquipmentManager));
			EquipmentManager->ChangeEquipmentState(Equipment, TargetStateTag);
		}
	}
}

UNinjaEquipment* UNinjaInventoryEquipmentStateAbility::GetEquipmentInstanceFromPayload(
	const FGameplayEventData& TriggerEventData) const
{
	const UNinjaEquipment* Equipment = Cast<UNinjaEquipment>(TriggerEventData.OptionalObject);
	if (Equipment == nullptr)
	{
		Equipment = Cast<UNinjaEquipment>(TriggerEventData.OptionalObject2);
	}
	
	return const_cast<UNinjaEquipment*>(Equipment);	
}

void UNinjaInventoryEquipmentStateAbility::EndAbility(const FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo,
	const bool bReplicateEndAbility, const bool bWasCancelled)
{
	TargetEquipment.Empty();
	Super::EndAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled);
}