// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameplayEffect.h"
#include "CombatEffect_CancelPoiseRecovery.generated.h"

/**
 * Temporarily cancels Poise regeneration. 
 */
UCLASS()
class NINJACOMBAT_API UCombatEffect_CancelPoiseRecovery : public UGameplayEffect
{
	
	GENERATED_BODY()

public:

	UCombatEffect_CancelPoiseRecovery();
	
};
