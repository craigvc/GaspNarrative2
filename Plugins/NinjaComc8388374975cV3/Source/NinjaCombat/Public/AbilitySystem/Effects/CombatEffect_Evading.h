// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameplayEffect.h"
#include "CombatEffect_Evading.generated.h"

/**
 * Adds the evading state, which can be used for things like blocking stamina regeneration.
 */
UCLASS()
class NINJACOMBAT_API UCombatEffect_Evading : public UGameplayEffect
{
	
	GENERATED_BODY()

public:

	UCombatEffect_Evading();
	
};
