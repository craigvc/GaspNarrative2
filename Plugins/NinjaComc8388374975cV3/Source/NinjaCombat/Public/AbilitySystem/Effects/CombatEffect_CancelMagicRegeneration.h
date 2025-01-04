// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameplayEffect.h"
#include "CombatEffect_CancelMagicRegeneration.generated.h"

/**
 * Cancels magic regeneration for a certain amount of time.
 */
UCLASS()
class NINJACOMBAT_API UCombatEffect_CancelMagicRegeneration : public UGameplayEffect
{
	
	GENERATED_BODY()

public:

	UCombatEffect_CancelMagicRegeneration();
	
};
