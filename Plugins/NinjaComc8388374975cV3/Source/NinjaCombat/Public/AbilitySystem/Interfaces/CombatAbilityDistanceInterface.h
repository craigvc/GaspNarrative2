// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "CombatAbilityDistanceInterface.generated.h"

UINTERFACE(MinimalAPI, meta = (CannotImplementInterfaceInBlueprint))
class UCombatAbilityDistanceInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * Allows a Gameplay Ability to set distances.
 */
class NINJACOMBAT_API ICombatAbilityDistanceInterface
{
	
	GENERATED_BODY()

public:

	/** Informs if the ability has an optimal Melee Distance. */
	virtual bool HasMeleeOptimalDistance() const { return false; }

	/** Provides the optimal distance to execute a Melee Attack. */
	virtual float GetMeleeOptimalDistance() const { return 0.f; }
	
};