// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UObject/Interface.h"
#include "CombatDamageModifierInterface.generated.h"

UINTERFACE(MinimalAPI)
class UCombatDamageModifierInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * Allows an external class, usually a Game Mode or Game State, to modify incoming damage.
 */
class NINJACOMBAT_API ICombatDamageModifierInterface
{
	
	GENERATED_BODY()

public:

	/**
	 * Allows the damage to be fully cancelled, meaning it won't trigger any hit reactions or damage management.
	 *
	 * @param Damage		Base Damage being applied.
	 * @param Instigator	Actor ultimately applying the damage.
	 * @param Target		Actor receiving the damage.
	 * @param SourceTags	Aggregated tags from the causer, when damage was applied.
	 * @param TargetTags	Aggregated tags from the target, when damage was applied.
	 * @return				True if the damage should be cancelled, false otherwise.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Combat Damage Modifier Interface")
	bool ShouldCancelDamage(float Damage, const AActor* Instigator, const AActor* Target, FGameplayTagContainer SourceTags, FGameplayTagContainer TargetTags) const;
	virtual bool ShouldCancelDamage_Implementation(float Damage, const AActor* Instigator, const AActor* Target, FGameplayTagContainer SourceTags, FGameplayTagContainer TargetTags) const;
	
	/**
	 * Modifies the amount of damage being caused to a target.
	 *
	 * @param Damage		Base Damage being applied.
	 * @param Instigator	Actor ultimately applying the damage.
	 * @param Target		Actor receiving the damage.
	 * @param SourceTags	Aggregated tags from the causer, when damage was applied.
	 * @param TargetTags	Aggregated tags from the target, when damage was applied.
	 * @return				The modified amount of damage applied.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Combat Damage Modifier Interface")
	float ModifyDamage(float Damage, const AActor* Instigator, const AActor* Target, FGameplayTagContainer SourceTags, FGameplayTagContainer TargetTags) const;
	virtual float ModifyDamage_Implementation(float Damage, const AActor* Instigator, const AActor* Target, FGameplayTagContainer SourceTags, FGameplayTagContainer TargetTags) const;
	
};
