// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameplayEffect.h"
#include "CombatEffect_ReplenishStamina.generated.h"

/**
 * Replenishes Stamina based on the backing attribute.
 */
UCLASS()
class NINJACOMBAT_API UCombatEffect_ReplenishStamina : public UGameplayEffect
{
	
	GENERATED_BODY()

public:

	UCombatEffect_ReplenishStamina();
	
};
