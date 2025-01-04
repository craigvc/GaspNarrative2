// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameplayEffect.h"
#include "CombatEffect_OpportunityAttacker.generated.h"

/**
 * Represents the Attacker role, in an Opportunity Attack.
 * Applies the Invulnerability Effect by default.
 */
UCLASS()
class NINJACOMBAT_API UCombatEffect_OpportunityAttacker : public UGameplayEffect
{
	
	GENERATED_BODY()

public:

	UCombatEffect_OpportunityAttacker();
	
};
