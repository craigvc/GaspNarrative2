// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameplayEffect.h"
#include "CombatEffect_CancelStaminaRegeneration.generated.h"

/**
 * Cancels stamina regeneration for a certain amount of time.
 */
UCLASS()
class NINJACOMBAT_API UCombatEffect_CancelStaminaRegeneration : public UGameplayEffect
{
	
	GENERATED_BODY()

public:

	UCombatEffect_CancelStaminaRegeneration();
	
};
