// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "CombatEffect_Damage.h"
#include "CombatEffect_DamagePoise.generated.h"

/**
 * Damages poise and applies the effect to break recovery.
 */
UCLASS()
class NINJACOMBAT_API UCombatEffect_DamagePoise : public UCombatEffect_Damage
{
	
	GENERATED_BODY()

public:

	UCombatEffect_DamagePoise();

};

