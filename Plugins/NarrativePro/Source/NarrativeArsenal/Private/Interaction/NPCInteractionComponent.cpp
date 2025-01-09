// Copyright Narrative Tools 2024. 


#include "Interaction/NPCInteractionComponent.h"

UNPCInteractionComponent::UNPCInteractionComponent()
{

}

bool UNPCInteractionComponent::TargetClosestInteractionSlot(class UNarrativeInteractableComponent* Interactable)
{
	if (Interactable)
	{
		int32 BestInteractionSlot = Interactable->GetClosestAvailableSlot(this, Interactable->GetAvailableSlots(false));

		return TargetInteractionSlot(Interactable, BestInteractionSlot);
	}

	return false; 
}

bool UNPCInteractionComponent::TargetInteractionSlot(class UNarrativeInteractableComponent* Interactable, const int32 Index)
{
	if (Interactable && Index >= 0)
	{
		//Free our slot if we have one already 
		if (InteractionSlotClaimHandle.IsValidHandle())
		{
			if (UNarrativeInteractableComponent* CurrentInteractable = InteractionSlotClaimHandle.HandleOwner.Get())
			{	
				CurrentInteractable->UpdateSlotStatus(InteractionSlotClaimHandle, EInteractionSlotStatus::ISS_Free);
			}
		}

		FInteractionSlotClaimHandle Handle = Interactable->ClaimSlot(this, Index, true);

		if (Handle.IsValidHandle())
		{
			InteractionSlotClaimHandle = Handle;

			//Now that we've claimed the interaction handle, listen for our slot being lost so we can reserve a new one
			Interactable->OnTargetedSlotTaken.AddUniqueDynamic(this, &UNPCInteractionComponent::OnTargetSlotTaken);
			OnTargetedInteractionSlotChanged.Broadcast(Interactable, InteractionSlotClaimHandle.HandleIndex);
			return true;
		}	
	}

	return false; 
}

void UNPCInteractionComponent::OnTargetSlotTaken(int32 Slot, class UNarrativeInteractionComponent* StealerComp, class UNarrativeInteractableComponent* InteractableComp)
{
	//Make sure someoen else took the slot, not us, and make sure the taken slot was the one we were targeting.
	if (StealerComp != this && InteractionSlotClaimHandle.HandleIndex == Slot && InteractionSlotClaimHandle.HandleOwner == InteractableComp)
	{
		//Make sure it was our current interactable that was stolen from 
		if (UNarrativeInteractableComponent* CurrentInteractable = InteractionSlotClaimHandle.HandleOwner.Get())
		{
			if (CurrentInteractable == InteractableComp)
			{
				//Empty out our claim handle, our slot was stolen 
				InteractionSlotClaimHandle = FInteractionSlotClaimHandle::InvalidHandle();
				TargetClosestInteractionSlot(CurrentInteractable);
			}
		}
	}
}
