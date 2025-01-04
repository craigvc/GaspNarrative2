// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameplayEffect.h"
#include "CombatEffect_RecoverPoiseImmediately.generated.h"

/**
 * Recovers poise immediately, usually after a stagger effect ends.
 */
UCLASS()
class NINJACOMBAT_API UCombatEffect_RecoverPoiseImmediately : public UGameplayEffect
{
	
	GENERATED_BODY()

public:

	UCombatEffect_RecoverPoiseImmediately();
	
};
