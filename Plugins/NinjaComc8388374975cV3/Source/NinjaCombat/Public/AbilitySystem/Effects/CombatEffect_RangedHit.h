// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "CombatEffect_DamagePoise.h"
#include "CombatEffect_RangedHit.generated.h"

/**
 * Base Gameplay Effect that can be used for Ranged Damage.
 */
UCLASS()
class NINJACOMBAT_API UCombatEffect_RangedHit : public UCombatEffect_DamagePoise
{

	GENERATED_BODY()

public:
	
	UCombatEffect_RangedHit();
	
};
