// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "NinjaInventoryAnimationAbility.h"
#include "NinjaInventoryEquipmentStateAbility.generated.h"

class UNinjaEquipment;
class UNinjaEquipmentManagerComponent;

/**
 * A base ability that can change the state of equipment instances obtained from a Gameplay Query. 
 */
UCLASS(Abstract)
class NINJAINVENTORYGAMEPLAY_API UNinjaInventoryEquipmentStateAbility : public UNinjaInventoryAnimationAbility
{
	
	GENERATED_BODY()

public:

	UNinjaInventoryEquipmentStateAbility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

protected:

	/**
	 * Query used to select equipment instances to modify.
	 *
	 * This ability will be cancelled if no Equipment Instances are obtained from this Query. Also, this
	 * query can obtain multiple equipment instances to have their state modified, which is commonly the
	 * case with scenarios like "dual wielding" or "sword and shield".
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Equipment State")
	FGameplayTagQuery EquipmentQuery;
	
	/** Gameplay Tag representing the target state for the equipment. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Equipment State", meta = (Categories = "Equipment.State"))
	FGameplayTag TargetStateTag;
	
	// -- Begin Gameplay Ability implementation
	virtual bool CanActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayTagContainer* SourceTags, const FGameplayTagContainer* TargetTags, FGameplayTagContainer* OptionalRelevantTags) const override;
	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;
	virtual void EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled) override;	
	// -- End Gameplay Ability implementation	

	// -- Begin Equipment Montage Receiver implementation
	virtual void HandleAnimationLoaded_Implementation(UAnimMontage* MontageToPlay, FName MontageSection) override;
	virtual void HandleAnimationNotFound_Implementation() override;
	virtual void HandleEventReceived_Implementation(const FGameplayEventData Payload) override;
	// -- End Equipment Montage Receiver implementation
	
	/**
	 * Retrieves a valid Equipment Instance from the Trigger Event Data.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Abilities")
	virtual UNinjaEquipment* GetEquipmentInstanceFromPayload(const FGameplayEventData& TriggerEventData) const;

private:

	/** All equipment collected by this task. */
	TArray<UNinjaEquipment*> TargetEquipment;

};
