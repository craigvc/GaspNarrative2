// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameplayEffect.h"
#include "CombatEffect_BlockCooldown.generated.h"

/**
 * Applies the cooldown for blocking, based on the backing attribute.
 * This usually applies as a penalty from a breaker hit.
 */
UCLASS()
class NINJACOMBAT_API UCombatEffect_BlockCooldown : public UGameplayEffect
{
	
	GENERATED_BODY()

public:

	UCombatEffect_BlockCooldown();
	
};
