// Copyright Narrative Tools 2024. 


#include "Interaction/InteractionSubsystem.h"

UInteractionSubsystem::UInteractionSubsystem()
{
}

void UInteractionSubsystem::CacheInteractable(class UNarrativeInteractableComponent* Interactable)
{
	if (Interactable)
	{
		InteractableActors.Add(Interactable);
	}
}

void UInteractionSubsystem::UncacheInteractable(class UNarrativeInteractableComponent* Interactable)
{
	if (Interactable)
	{
		InteractableActors.Remove(Interactable);
	}
}
