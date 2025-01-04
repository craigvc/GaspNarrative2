// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameplayEffect.h"
#include "CombatEffect_LastStand.generated.h"

/**
 * Decreases the Last Stand Count and updates the Current Health.
 */
UCLASS()
class NINJACOMBAT_API UCombatEffect_LastStand : public UGameplayEffect
{
	
	GENERATED_BODY()

public:
	
	UCombatEffect_LastStand();
	
};
