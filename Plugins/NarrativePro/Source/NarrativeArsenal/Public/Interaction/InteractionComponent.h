// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InteractableComponent.h"
#include "NarrativeSavableComponent.h"
#include "InteractionComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFoundInteractable,class  UNarrativeInteractableComponent*, Interactable);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLostInteractable, class  UNarrativeInteractableComponent*, Interactable);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnInteracted, class  UNarrativeInteractionComponent*, Interaction, class  UNarrativeInteractableComponent*, Interactable);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnInteractPressed, class  UNarrativeInteractionComponent*, Interaction);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnInteractReleased, class  UNarrativeInteractionComponent*, Interaction);

//Called when we interact with an interactable object - this works for both Slot based interaction and quick interaction. 
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnUseInteractable, AActor*, InteractableActor, UNarrativeInteractableComponent*, InteractableComponent);

/** Added to both Player and NPC controllers. Allows both NPCs and Players to interact with the world. 
See UPlayer/NPCInteractionComponents for speciaized versions.  */
UCLASS( ClassGroup=(Narrative), DisplayName = "Narrative Interaction", meta=(BlueprintSpawnableComponent) )
class NARRATIVEARSENAL_API UNarrativeInteractionComponent : public UActorComponent, public INarrativeSavableComponent
{
	GENERATED_BODY()


protected:

	UNarrativeInteractionComponent();

	virtual void BeginPlay() override;
	virtual void Load_Implementation() override;
	virtual void SetOccupiedInteractable(class UNarrativeInteractableComponent* Interactable, const int32 SlotIdx);

protected:

	friend class UNarrativeInteractAbility; 

	//Our owning character
	UPROPERTY(BlueprintReadOnly, Category = "Interaction")
	class ANarrativeCharacter* OwningPawn;

	//Our controller owner
	UPROPERTY(BlueprintReadOnly, Category = "Interaction")
	class AController* OwningController;

	//Claims an interaction slot on the given Interactable
	UFUNCTION(BlueprintCallable, Category = "Narrative|NarrativeCharacter|Interaction")
	bool ClaimInteractionSlot(class UNarrativeInteractableComponent* Interactable, const int32 SlotIdx);

	//Releases our claimed interactable slot if we have one 
	UFUNCTION(BlueprintCallable, Category = "Narrative|NarrativeCharacter|Interaction")
	void ReleaseInteractionSlot();

	//Our interaction slot claim handle, if we've claimed an interactables slot. 
	UPROPERTY(BlueprintReadWrite, Category = "Narrative|NarrativeCharacter|Interaction")
	FInteractionSlotClaimHandle InteractionSlotClaimHandle;

	//The interactable we've claimed a slot on and are currently interacting with
	UPROPERTY(BlueprintReadWrite, Category = "Narrative|NarrativeCharacter|Interaction")
	UNarrativeInteractableComponent* OccupiedInteractable;

	//The GUID of the occupied interactable so we can restore when the game loads back in
	UPROPERTY(BlueprintReadWrite, SaveGame, Category = "Narrative|NarrativeCharacter|Interaction")
	FGuid OccupiedInteractableGUID;

	//The index of the slot we're occupying 
	UPROPERTY(BlueprintReadWrite, SaveGame, Category = "Narrative|NarrativeCharacter|Interaction")
	int32 OccupiedInteractableSlotIdx;

	//Called when we interact with an interactable object - this works for both Slot based interaction and quick interaction. 
	UPROPERTY(BlueprintAssignable, Category = "Narrative|NarrativeCharacter|Interaction")
	FOnUseInteractable OnBeginUseInteractable;

	//Called when the interaction slot we've taken is released as our interaction behavior has finished
	UPROPERTY(BlueprintAssignable, Category = "Narrative|NarrativeCharacter|Interaction")
	FOnUseInteractable OnFinishUseInteractable;
};
