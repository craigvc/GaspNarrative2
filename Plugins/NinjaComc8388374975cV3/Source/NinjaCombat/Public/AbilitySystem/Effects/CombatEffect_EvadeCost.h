// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameplayEffect.h"
#include "CombatEffect_EvadeCost.generated.h"

/**
 * Applies the evade cost, based on the backing attribute.
 */
UCLASS()
class NINJACOMBAT_API UCombatEffect_EvadeCost : public UGameplayEffect
{
	
	GENERATED_BODY()

public:

	UCombatEffect_EvadeCost();
	
};
