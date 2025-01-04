// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UObject/Interface.h"
#include "CombatWeaponAnimationProviderInterface.generated.h"

class UAnimMontage;

UINTERFACE(MinimalAPI)
class UCombatWeaponAnimationProviderInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * Allows a weapon to provide its own animation for a certain Ability.
 */
class NINJACOMBAT_API ICombatWeaponAnimationProviderInterface
{
	
	GENERATED_BODY()

public:

	/**
	 * Receives the Combat Target from a source.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Combat Weapon Animation Provider Interface")
	UAnimMontage* GetAnimationMontageForAbility(const FGameplayTagContainer& AbilityTags) const;
	
};