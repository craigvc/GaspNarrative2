// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameplayEffect.h"
#include "CombatEffect_ReplenishHealth.generated.h"

/**
 * Replenishes Health based on the backing attribute.
 */
UCLASS()
class NINJACOMBAT_API UCombatEffect_ReplenishHealth : public UGameplayEffect
{
	
	GENERATED_BODY()

public:

	UCombatEffect_ReplenishHealth();
	
};
