// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameplayEffect.h"
#include "CombatEffect_EvadeCooldown.generated.h"

/**
 * Applies the cooldown for an evade, based on the backing attribute.
 */
UCLASS()
class NINJACOMBAT_API UCombatEffect_EvadeCooldown : public UGameplayEffect
{
	
	GENERATED_BODY()

public:

	UCombatEffect_EvadeCooldown();
	
};
