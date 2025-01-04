// Copyright Narrative Tools 2024. 


#include "AI/NPCInteractable.h"
#include "Tales/NarrativeComponent.h"
#include "Tales/NarrativeFunctionLibrary.h"
#include "InventoryFunctionLibrary.h"
#include "InventoryComponent.h"
#include "NarrativeGameplayTags.h"

#define LOCTEXT_NAMESPACE "NPCInteractable"

UNPCInteractable::UNPCInteractable(const FObjectInitializer& ObjectInitializer)
{
	InteractableActionText = LOCTEXT("TalkInteractableActionText", "Talk");
}

bool UNPCInteractable::Interact(class APawn* Interactor, class UNarrativeInteractionComponent* InteractionComp)
{
	if (ANarrativeNPCCharacter* NPC = Cast<ANarrativeNPCCharacter>(GetOwner()))
	{
		if (NPC->IsAlive())
		{
			if (UNarrativeComponent* TalesComp = UNarrativeFunctionLibrary::GetNarrativeComponent(Interactor))
			{
				FDialoguePlayParams PlayParams;
				PlayParams.NonUniqueNPCs.Add(NPC);

				//TODO load this async, potentially before we're even started the interact 
				TalesComp->BeginDialogue(Dialogue, PlayParams);
			}
		}
		else
		{
			if (UNarrativeInventoryComponent* Looter = UInventoryFunctionLibrary::GetInventoryComponentFromTarget(Interactor))
			{
				Looter->SetLootSource(NPC->GetInventoryComponent());
			}
		}
	}

	return true;
}

bool UNPCInteractable::CanInteract_Implementation(class APawn* Interactor, class UNarrativeInteractionComponent* InteractionComp, FText& OutErrorText)
{
	if (ANarrativeNPCCharacter* NPC = Cast<ANarrativeNPCCharacter>(GetOwner()))
	{
		if (NPC->IsAlive() && NPC->GetNPCData())
		{
			if (NPC->HasMatchingGameplayTag(FNarrativeGameplayTags::Get().State_NPC_IsBusy))
			{
				OutErrorText = FText::Format(LOCTEXT("NPCIsBusyError", "{0} is busy right now."), NPC->GetNPCData()->NPCName);
				return false; 
			}

			if (UNarrativeComponent* Narrative = UNarrativeFunctionLibrary::GetNarrativeComponent(Interactor))
			{
				if (IsValid(Narrative->CurrentDialogue) && !Narrative->CurrentDialogue->bCanBeExited)
				{
					OutErrorText = LOCTEXT("AlreadyInDialogueError", "Wait for the current dialogue to finish.");
					return false;
				}
			}
		}
	}

	return true;
}

#undef LOCTEXT_NAMESPACE 