// Copyright Narrative Tools 2024. 


#include "GAS/NarrativeInteractAbility.h"
#include "UnrealFramework/NarrativeCharacter.h"
#include "NarrativeGameplayTags.h"
#include "Interaction/InteractionComponent.h"
#include "Abilities/Tasks/AbilityTask_WaitGameplayEvent.h"

UNarrativeInteractAbility::UNarrativeInteractAbility()
{	
	//Annoyingly doesn't work as native tags aren't regged yet 
	//ActivationOwnedTags.AddTag(FGameplayTag::RequestGameplayTag("Narrative.State.Busy"));
	//ActivationOwnedTags.AddTag(FGameplayTag::RequestGameplayTag("Narrative.State.Interacting"));
}

void UNarrativeInteractAbility::ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData)
{
	Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);

	//Cache the slot configuration
	if (CharacterOwner)
	{
		InteractionComponent = CharacterOwner->GetInteractionComponent();

		if (InteractionComponent)
		{
			FInteractionSlotClaimHandle& ClaimHandle = InteractionComponent->InteractionSlotClaimHandle;

			if (ClaimHandle.IsValidHandle())
			{
				if (UNarrativeInteractableComponent* Interactable = ClaimHandle.HandleOwner.Get())
				{
					SlotConfiguration = Interactable->GetConfigAtSlot(ClaimHandle.HandleIndex);
					InteractingWithComponent = Interactable;

					//Store this for savegame purposes
					InteractionComponent->SetOccupiedInteractable(Interactable, ClaimHandle.HandleIndex);

					//Set the slot as occupied. 
					Interactable->UpdateSlotStatus(ClaimHandle, EInteractionSlotStatus::ISS_Occupied);

					//Tell interaction we started using it
					InteractionComponent->OnBeginUseInteractable.Broadcast(Interactable->GetOwner(), Interactable);

					//End the ability when we get the gameplay event notify 
					WaitEndInteract = UAbilityTask_WaitGameplayEvent::WaitGameplayEvent(this, FNarrativeGameplayTags::Get().GameplayEvent_WantsEndInteract, GetAvatarActorFromActorInfo(), false, true);

					if (WaitEndInteract)
					{
						WaitEndInteract->EventReceived.AddDynamic(this, &UNarrativeInteractAbility::OnReceiveEndInteractEvent);
					}

					WaitEndInteract->Activate();
				}
			}

			//Let BP handle the interaction however it wants! 
			HandleInteraction(SlotConfiguration);
		}
	}

}

bool UNarrativeInteractAbility::CanActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayTagContainer* SourceTags /*= nullptr*/, const FGameplayTagContainer* TargetTags /*= nullptr*/, OUT FGameplayTagContainer* OptionalRelevantTags /*= nullptr*/) const
{
	if (CharacterOwner)
	{
		if (UNarrativeInteractionComponent* InteractionComp = CharacterOwner->GetInteractionComponent())
		{
			if (InteractionComp && InteractionComp->InteractionSlotClaimHandle.IsValidHandle())
			{
				return true; 
			}
		}
		return false; 
	}

	return Super::CanActivateAbility(Handle, ActorInfo, SourceTags, TargetTags, OptionalRelevantTags);
}

void UNarrativeInteractAbility::EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled)
{
	Super::EndAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled);

	if (WaitEndInteract)
	{
		WaitEndInteract->EndTask();
	}

	if (CharacterOwner)
	{
		if (InteractionComponent)
		{
			FInteractionSlotClaimHandle& ClaimHandle = InteractionComponent->InteractionSlotClaimHandle;

			if (ClaimHandle.IsValidHandle())
			{
				if (UNarrativeInteractableComponent* Interactable = ClaimHandle.HandleOwner.Get())
				{
					/*If a new BPA_Interact has started and claimed a new slot, don't release that one!
					Only release the slot if our interactable is still the same as the one we initially claimed. */
					if (InteractingWithComponent == Interactable)
					{
						InteractionComponent->ReleaseInteractionSlot();
					}

					//Same for occupied interactable - make sure something else hasnt changed it. 
					if (InteractionComponent->OccupiedInteractable == InteractingWithComponent)
					{
						InteractionComponent->SetOccupiedInteractable(nullptr, -1);
					}

					InteractionComponent->OnFinishUseInteractable.Broadcast(Interactable->GetOwner(), Interactable);
				}
			}
			else
			{
				InteractionComponent->ReleaseInteractionSlot();
			}
		}
	}
}

bool UNarrativeInteractAbility::CanExitInteraction_Implementation() const
{
	return true; 
}

void UNarrativeInteractAbility::OnReceiveEndInteractEvent(FGameplayEventData Payload)
{
	if (CanExitInteraction())
	{
		FinishInteraction();
	}
}
