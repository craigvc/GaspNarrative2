// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "GAS/NarrativeGameplayAbility.h"
#include "Interaction/InteractableComponent.h"
#include "NarrativeInteractAbility.generated.h"

/**
 * Defines how we interact with an Interaction slot. Abilities are great for this - they work well on NPCs and players, and are latent, which interaction often requires - 
 * ie wait for anim to finish, wait for input, etc. 
 */
UCLASS()
class NARRATIVEARSENAL_API UNarrativeInteractAbility : public UNarrativeGameplayAbility
{
	GENERATED_BODY()
	
public: 

	UNarrativeInteractAbility();

	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;
	virtual bool CanActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayTagContainer* SourceTags = nullptr, const FGameplayTagContainer* TargetTags = nullptr, OUT FGameplayTagContainer* OptionalRelevantTags = nullptr) const;
	virtual void EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled) override;

	UFUNCTION(BlueprintNativeEvent, Category = "Interact Ability")
	bool CanExitInteraction() const;
	virtual bool CanExitInteraction_Implementation() const;

	//Interaction is simple - override this function, do whatever interaction stuff you need, then call EndInteraction when you're done! The slot will automatically be released for you. 
	UFUNCTION(BlueprintImplementableEvent)
	void HandleInteraction(FInteractionSlotConfig InteractionData);

	//Called when interaction needs finished - override this and do any finishing up of the interaction, ie if sitting play your Get Up montage, etc - call EndAbility when done.  
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Interact Ability")
	void FinishInteraction();

	//The interactable component this interact ability is acting on. 
	UPROPERTY(BlueprintReadOnly, Category = "Interact Ability")
	TObjectPtr<class UNarrativeInteractableComponent> InteractingWithComponent;

	//The configuration for the interaction slot we've tried to use
	UPROPERTY(BlueprintReadOnly, Category = "Interact Ability")
	FInteractionSlotConfig SlotConfiguration;

	//The interaction component that owns the interaction 
	UPROPERTY(BlueprintReadOnly, Category = "Narrative Ability")
	TObjectPtr<class UNarrativeInteractionComponent> InteractionComponent;

	//The wait gameplay event task 
	UPROPERTY(BlueprintReadOnly, Category = "Narrative Ability")
	TObjectPtr<class UAbilityTask_WaitGameplayEvent> WaitEndInteract;

	UFUNCTION()
	virtual void OnReceiveEndInteractEvent(FGameplayEventData Payload);
	
};
