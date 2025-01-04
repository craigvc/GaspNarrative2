// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "Damage/NinjaCombatDamageHandler.h"
#include "DamageHandler_PhysicalAnimation.generated.h"

/**
 * Plays a Physical Animation for damage.
 */
UCLASS(DisplayName = "Physical Animation")
class NINJACOMBAT_API UDamageHandler_PhysicalAnimation : public UNinjaCombatDamageHandler
{
	
	GENERATED_BODY()

public:

	UDamageHandler_PhysicalAnimation();
	
	// -- Begin Damage Handler implementation
	virtual void HandleDamage_Implementation(UActorComponent* DamageManager, const FGameplayCueParameters& Parameters) const override;
	// -- End Damage Handler implementation
	
};
