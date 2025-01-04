// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "NinjaInventoryGameplayAbility.generated.h"

class UNinjaInventoryItem;
class UNinjaInventoryManagerComponent;
class UNinjaEquipment;
class UNinjaEquipmentManagerComponent;

/**
 * 
 */
UCLASS()
class NINJAINVENTORYGAMEPLAY_API UNinjaInventoryGameplayAbility : public UGameplayAbility
{
	
	GENERATED_BODY()

public:

	UNinjaInventoryGameplayAbility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	
	/**
	 * Provides the Equipment associated with this Ability.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Abilities")
	UNinjaEquipment* GetEquipmentInstance() const;	

	/**
	 * Provides the Item that backs this Ability's Equipment Owner. 
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Abilities")
	UNinjaInventoryItem* GetItemInstance() const;
	
protected:

	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Abilities")
	UNinjaInventoryManagerComponent* GetInventoryManager() const;
	
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Abilities")
	UNinjaEquipmentManagerComponent* GetEquipmentManager() const;
	
	// -- Begin Gameplay Ability implementation
	virtual FGameplayEffectContextHandle MakeEffectContext(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo) const override;
	// -- End Gameplay Ability implementation

	/**
	 * Adds Equipment details to the Cue Parameters.
	 *
	 * The Equipment Instance is set as the parameter's Source Object and the Avatar
	 * is set as the parameter's Instigator, so both can be accessed when processing
	 * Gameplay Cues triggered by this ability.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Abilities")
	void AddEquipmentDetailsToCueParameters(FGameplayCueParameters& CueParameters) const;
	
};
