// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "AbilitySystem/NinjaInventoryAnimationAbility.h"
#include "InventoryAbility_ConsumeItem.generated.h"

class UNinjaInventoryItem;
class UItemFragment_Consumable;
class UItemFragment_Stack;

/**
 * Base ability that can consume an item with or without a related animation. 
 */
UCLASS()
class NINJAINVENTORYGAMEPLAY_API UInventoryAbility_ConsumeItem : public UNinjaInventoryAnimationAbility
{
	
	GENERATED_BODY()

public:

	UInventoryAbility_ConsumeItem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	/**
	 * Informs if this Ability has enough information to perform a Consume operation.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Abilities")
	bool HasConsumableData() const;

	/**
	 * Provides the Consumable Item currently in use by this ability.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Abilities")
	const UNinjaInventoryItem* GetConsumableItem() const;

	/**
	 * Provides the Consumable Fragment currently in use by this ability.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Abilities")
	const UItemFragment_Consumable* GetConsumableFragment() const;
	
protected:

	/**
	 * Gameplay Tags used to obtain the Animation Montage played when the consumable is found.
	 * 
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Animation")
	FGameplayTagContainer ItemFoundAnimationTags;

	/**
	 * Gameplay Tags used to obtain the Animation Montage played when the consumable is missing.
	 * These are optional. If left empty, then the ability ends when no consumable is found.
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Animation")
	FGameplayTagContainer ItemMissingAnimationTags;
	
	/**
	 * Query used to select the consumable item from the inventory.
	 *
	 * This query is only used if the ability is activated without an event trigger.
	 * If the ability activates via an Event Trigger, it will expect the item in the payload.
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Consumable")
	FGameplayTagQuery ConsumableQuery;

	// -- Begin Gameplay Ability implementation
	virtual bool CanActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayTagContainer* SourceTags, const FGameplayTagContainer* TargetTags, FGameplayTagContainer* OptionalRelevantTags) const override;
	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;
	virtual void EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled) override;	
	// -- End Gameplay Ability implementation
	
	// -- Begin Equipment Montage Receiver implementation
	virtual void HandleAnimationLoaded_Implementation(UAnimMontage* MontageToPlay, FName MontageSection) override;
	virtual void HandleAnimationNotFound_Implementation() override;
	virtual void HandleEventReceived_Implementation(FGameplayEventData Payload) override;
	// -- End Equipment Montage Receiver implementation

	/**
	 * Gets an item from the provided payload or retrieves it from the Inventory Manager.
	 * The item will be the first result from the "Consumable Query" in this Ability.
	 */
	virtual UNinjaInventoryItem* GetOrFindInventoryItem(const FGameplayEventData* TriggerEventData) const;

	/**
	 * Collects data from the Inventory Item.
	 */
	virtual void InitializeData(UNinjaInventoryItem* Item);

	/**
	 * Clears all data collected for this operation.
	 */
	virtual void ClearData();

	/**
	 * Consumes the item stored in this ability.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Consumable")
	void ConsumeItem();

	/**
	 * Applies the consumable effect from the current item.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Consumable")
	void ApplyConsumableEffect();
	
	/**
	 * Reduces the stack of the current item.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Consumable")
	void UpdateStack();
	
private:

	/** Item being used in this operation. */
	UPROPERTY()
	TObjectPtr<UNinjaInventoryItem> ConsumableItem;
	
	/** Consumable fragment assigned to the current item. */
	UPROPERTY()
	TObjectPtr<const UItemFragment_Consumable> ConsumableFragment;

	/** Stack fragment assigned to the current item. */
	UPROPERTY()
	TObjectPtr<const UItemFragment_Stack> StackFragment;	
};
