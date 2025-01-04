// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "Damage/NinjaCombatDamageHandler.h"
#include "DamageHandler_DamageSense.generated.h"

/**
 * Sends a Damage Event to the AI Perception System.
 */
UCLASS(DisplayName = "Damage AI Sense")
class NINJACOMBAT_API UDamageHandler_DamageSense : public UNinjaCombatDamageHandler
{
	
	GENERATED_BODY()

public:

	UDamageHandler_DamageSense();
	
	// -- Begin Damage Handler implementation
	virtual void HandleDamage_Implementation(UActorComponent* DamageManager, const FGameplayCueParameters& Parameters) const override;
	// -- End Damage Handler implementation
	
};
