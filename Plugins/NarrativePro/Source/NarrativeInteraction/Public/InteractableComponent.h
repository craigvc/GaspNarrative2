// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InteractableComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnBeginInteract, class APawn*, Interactor, class UNarrativeInteractionComponent*, InteractionComp);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnEndInteract, class APawn*, Interactor, class UNarrativeInteractionComponent*, InteractionComp);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnBeginFocus, class APawn*, Interactor, class UNarrativeInteractionComponent*, InteractionComp);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnEndFocus, class APawn*, Interactor, class UNarrativeInteractionComponent*, InteractionComp);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnInteract, class APawn*, Interactor, class UNarrativeInteractionComponent*, InteractionComp);

USTRUCT(BlueprintType)
struct FInteractionDefiniton
{
	GENERATED_BODY()

public: 

	FInteractionDefiniton()
	{
		bActive = true;
	}

	//TODO figure this out - we need the interaction to define some behavior, for now i'm thinking some sort of delegate 
	UPROPERTY(BlueprintAssignable)
	FOnInteract OnInteractDelegate;

	//Whether this interaction is active or not 
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Interaction")
	bool bActive;

	//The amount of time the interaction needs its interact key held for 
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Interaction", meta = (ClampMin=0))
	float InteractionTime;

	//The name that will come up when the player looks at the interactable
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Interaction")
	FText InteractableNameText;

	//The verb that describes how the interaction works, ie "Sit" for a chair, "Eat" for food, "Light" for a fireplace
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Interaction")
	FText InteractableVerb;

	//The input action we require to begin this interaction
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Interaction")
	TObjectPtr<class UInputAction> InteractionInput;

	//The animation our player can play during the interact. 
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Interaction")
	TObjectPtr<class UAnimMontage> InteractionAnimation;
};

/**Not to be confused with the NarrativeInteractionComponent which enables a pawn to interact with interactables,
the NarrativeInteractableComponent essentially enables an actor to be interacted with in some way. */
UCLASS( ClassGroup=(Narrative), Blueprintable, DisplayName = "Narrative Interactable", meta=(BlueprintSpawnableComponent) )
class NARRATIVEINTERACTION_API UNarrativeInteractableComponent : public UActorComponent
{
	GENERATED_BODY()


protected:

	friend class UNarrativeInteractionComponent;

public:
	// Sets default values for this component's properties
	UNarrativeInteractableComponent();

	virtual void Deactivate() override;

protected:

	//The available interactions for this 
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Interaction")
	TArray<FInteractionDefiniton> Interactions;

	//The time the player must hold the interact key to interact with this object
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Interaction", meta = (ClampMin=0))
	float InteractionTime;

	//The max distance the player can be away from this actor before you can interact
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Interaction")
	float InteractionDistance;

	//The name that will come up when the player looks at the interactable
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Interaction")
	FText InteractableNameText;

	//The verb that describes how the interaction works, ie "Sit" for a chair, "Eat" for food, "Light" for a fireplace
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Interaction")
	FText InteractableActionText;

	//A material to draw over any mesh components our owner has when this interatable is focused 
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Interaction")
	class UMaterialInterface* FocusedOverlayMaterial;

public:

	//Call this to change the name of the interactable. Will also refresh the interaction widget.
	UFUNCTION(BlueprintCallable, Category = "Interaction")
	void SetInteractableNameText(const FText& NewNameText);

	UFUNCTION(BlueprintCallable, Category = "Interaction")
	void SetInteractableActionText(const FText& NewActionText);

	void InteractInputPressed(int32 i);
	void InteractInputReleased(int32 i);

protected:

	//Called on the client when the players interaction check trace begins/ends hitting this item
	virtual void BeginFocus(class APawn* Interactor, class UNarrativeInteractionComponent* InteractionComp);
	virtual void EndFocus(class APawn* Interactor, class UNarrativeInteractionComponent* InteractionComp);

	//Called on the client when the player begins/ends/interacts with the item
	virtual void BeginInteract(class APawn* Interactor, class UNarrativeInteractionComponent* InteractionComp);
	virtual void EndInteract(class APawn* Interactor, class UNarrativeInteractionComponent* InteractionComp);
	virtual bool Interact(class APawn* Interactor, class UNarrativeInteractionComponent* InteractionComp);

	UFUNCTION(BlueprintNativeEvent, Category = "Interaction")
	void OnInteract(class APawn* Interactor, class UNarrativeInteractionComponent* InteractionComp);
	virtual void OnInteract_Implementation(class APawn* Interactor, class UNarrativeInteractionComponent* InteractionComp);

		UFUNCTION(BlueprintNativeEvent, Category = "Interaction")
	void OnBeginInteract(class APawn* Interactor, class UNarrativeInteractionComponent* InteractionComp);
	virtual void OnBeginInteract_Implementation(class APawn* Interactor, class UNarrativeInteractionComponent* InteractionComp);

		UFUNCTION(BlueprintNativeEvent, Category = "Interaction")
	void OnEndInteract(class APawn* Interactor, class UNarrativeInteractionComponent* InteractionComp);
	virtual void OnEndInteract_Implementation(class APawn* Interactor, class UNarrativeInteractionComponent* InteractionComp);

	/**
	* Return true if the given interactor is allowed to interact with us
	* 
	* @param OutErrorText this is the reason why the interact isn't allowed 
	*/
	UFUNCTION(BlueprintNativeEvent, BlueprintPure, Category = "Interaction")
	bool CanInteract(class APawn* Interactor, class UNarrativeInteractionComponent* InteractionComp, FText& OutErrorText);
	virtual bool CanInteract_Implementation(class APawn* Interactor, class UNarrativeInteractionComponent* InteractionComp, FText& OutErrorText);

protected:

	//Delegates

	//[local + server] Called when the player presses the interact key whilst focusing on this interactable actor
	UPROPERTY(BlueprintAssignable)
	FOnBeginInteract OnBeginInteracted;

	//[local + server] Called when the player releases the interact key, stops looking at the interactable actor, or gets too far away after starting an interact
	UPROPERTY(BlueprintAssignable)
	FOnEndInteract OnEndInteracted;

	//[local + server] Called when the player presses the interact key whilst focusing on this interactable actor
	UPROPERTY(BlueprintAssignable)
	FOnBeginFocus OnBeginFocus;

	//[local + server] Called when the player releases the interact key, stops looking at the interactable actor, or gets too far away after starting an interact
	UPROPERTY(BlueprintAssignable)
	FOnEndFocus OnEndFocus;

	//[local + server] Called when the player has interacted with the item for the required amount of time
	UPROPERTY(BlueprintAssignable)
	FOnInteract OnInteracted;
};
