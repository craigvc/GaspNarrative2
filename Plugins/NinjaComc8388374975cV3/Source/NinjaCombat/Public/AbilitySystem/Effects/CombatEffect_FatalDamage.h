﻿// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameplayEffect.h"
#include "CombatEffect_FatalDamage.generated.h"

/**
 * A damage effect that is always fatal.
 */
UCLASS(Abstract)
class NINJACOMBAT_API UCombatEffect_FatalDamage : public UGameplayEffect
{
	
	GENERATED_BODY()

public:

	UCombatEffect_FatalDamage();
	
};
