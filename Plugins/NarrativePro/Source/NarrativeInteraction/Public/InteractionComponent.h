// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InteractionComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFoundInteractable,class  UNarrativeInteractableComponent*, Interactable);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLostInteractable, class  UNarrativeInteractableComponent*, Interactable);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnInteracted, class  UNarrativeInteractionComponent*, Interaction, class  UNarrativeInteractableComponent*, Interactable);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnInteractPressed, class  UNarrativeInteractionComponent*, Interaction);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnInteractReleased, class  UNarrativeInteractionComponent*, Interaction);

/**When added to your Player Controller, this component will check if your player is within 
distance of an interactable and allow you to interact with it. */
UCLASS( ClassGroup=(Narrative), DisplayName = "Narrative Interaction", meta=(BlueprintSpawnableComponent) )
class NARRATIVEINTERACTION_API UNarrativeInteractionComponent : public UActorComponent
{
	GENERATED_BODY()

public:


	//[local + server] Called when we find a new interactable object 
	UPROPERTY(EditDefaultsOnly, BlueprintAssignable, Category = "Interaction")
	FOnFoundInteractable OnFoundInteractable;

	//[local + server] Called when we've lost our interactable
	UPROPERTY(EditDefaultsOnly, BlueprintAssignable, Category = "Interaction")
	FOnLostInteractable OnLostInteractable;

	//[local + server] Called when we interact with an interactable 
	UPROPERTY(EditDefaultsOnly, BlueprintAssignable, Category = "Interaction")
	FOnInteracted OnInteracted;

	//[local + server] Called when we start holding the interact key 
	UPROPERTY(EditDefaultsOnly, BlueprintAssignable, Category = "Interaction")
	FOnInteractPressed OnInteractPressed;

	//[local + server] Called when we release the interact key 
	UPROPERTY(EditDefaultsOnly, BlueprintAssignable, Category = "Interaction")
	FOnInteractReleased OnInteractReleased;

	//Automatically sets up our input component to call the interaction functions 
	UFUNCTION(BlueprintCallable, Category = "Interaction")
	virtual void BindToInput(class UEnhancedInputComponent* EnhancedInput);

protected:

	UNarrativeInteractionComponent();

	virtual void BeginPlay() override;
	virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction) override;
	virtual void Deactivate() override;

	virtual void PerformInteractionCheck(float DeltaTime);

	void CouldntFindInteractable();
	void FoundInteractable(UNarrativeInteractableComponent* Interactable);

	UFUNCTION(Server, Reliable)
	void ServerBeginInteract();

	UFUNCTION(Server, Reliable)
	void ServerEndInteract();

	UFUNCTION(BlueprintCallable, Category = "Interaction")
	virtual void BeginInteract();

	UFUNCTION(BlueprintCallable, Category = "Interaction")
	virtual void EndInteract();

	void InteractInputPressed(int32 i);
	void InteractInputReleased(int32 i);

protected:

	//Our pawn owner
	UPROPERTY(BlueprintReadOnly, Category = "Interaction")
	class APawn* OwningPawn;

	//Our controller owner
	UPROPERTY(BlueprintReadOnly, Category = "Interaction")
	class APlayerController* OwningController;

	//The current interactable component we're viewing, if there is one
	UPROPERTY(BlueprintReadOnly, Category = "Interaction")
	class UNarrativeInteractableComponent* CurrentInteractable;

	//The time when we last checked for an interactable
	UPROPERTY()
	float LastInteractionCheckTime;

	//Whether the local player is holding the interact key
	UPROPERTY()
	bool bInteractHeld;

	/**All of the input actions that should instigate an interaction. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Interaction")
	TArray<TObjectPtr<class UInputAction>> InteractionInputs;

	/**The amount of time before interaction completes on our current interactable.This is stored per interactor and not per interactable
	because in a networked game we may want to support multiple players interacting with something and each will have their own time*/
	UPROPERTY(BlueprintReadOnly, Category = "Interaction")
	float RemainingInteractTime;

	//How often in seconds to check for an interactable object. Set this to zero if you want to check every tick.
	UPROPERTY(EditDefaultsOnly, Category = "Interaction")
	float InteractionCheckFrequency;

	//How far we'll trace when we check if the player is looking at an interactable object
	UPROPERTY(EditDefaultsOnly, Category = "Interaction")
	float InteractionCheckDistance;

	//If greater than zero we'll use a sphere trace over an interaction trace 
	UPROPERTY(EditDefaultsOnly, Category = "Interaction")
	float InteractionCheckSphereRadius;

	//If interaction is disallowed, but no error message is provided, we'll use this as the default 
	//UPROPERTY(EditDefaultsOnly, Category = "Interaction")
	//FText DefaultInteractionDisallowedError;
};
