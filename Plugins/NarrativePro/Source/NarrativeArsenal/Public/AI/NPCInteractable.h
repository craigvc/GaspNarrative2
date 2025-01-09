// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "Interaction/InteractableComponent.h"
#include "NPCInteractable.generated.h"

/**
 * Special interactable component made for NPCCharacters. Handles talking to NPCs if they are alive and have valid dialogue, 
 * or looting from them if they have been killed. 
 */
UCLASS()
class NARRATIVEARSENAL_API UNPCInteractable : public UNarrativeInteractableComponent
{
	GENERATED_BODY()
	
public:

	UNPCInteractable(const FObjectInitializer& ObjectInitializer);

	virtual bool Interact(class APawn* Interactor, class UNarrativeInteractionComponent* InteractionComp) override;
	virtual bool CanInteract_Implementation(class APawn* Interactor, class UNarrativeInteractionComponent* InteractionComp, FText& OutErrorText);

	/** The dialogue this NPC currently has available, pulled from the NPCs data asset. Note these are hard reffed to avoid hitches
	when attempting to start a dialogue. For games with large settlements with huge amounts of dialogue, you may want to make these
	soft reffed instead, and add some async loading logic. */
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "NPC")
	TSubclassOf<class UDialogue> Dialogue;

};