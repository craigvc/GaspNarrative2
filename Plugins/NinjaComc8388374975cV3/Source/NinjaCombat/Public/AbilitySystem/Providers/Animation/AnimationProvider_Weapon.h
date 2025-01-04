// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "AbilitySystem/Providers/NinjaCombatAnimationProvider.h"
#include "AnimationProvider_Weapon.generated.h"

/**
 * Allows the weapon that granted the ability to override the default animation.
 * The Weapon must implement the "CombatWeaponAnimationProviderInterface" interface.
 */
UCLASS(meta = (DisplayName = "Weapon"))
class NINJACOMBAT_API UAnimationProvider_Weapon : public UNinjaCombatAnimationProvider
{
	
	GENERATED_BODY()

public:

	// -- Begin Animation Provider implementation
	virtual UAnimMontage* GetMontageToPlay_Implementation(UNinjaCombatGameplayAbility* CombatAbility) const override;
	// -- End Animation Provider implementation
	
};
