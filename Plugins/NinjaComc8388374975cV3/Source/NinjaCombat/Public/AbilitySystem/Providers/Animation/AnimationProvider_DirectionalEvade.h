// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "AbilitySystem/Abilities/CombatAbility_Evade.h"
#include "AbilitySystem/Providers/NinjaCombatDirectionalAnimationProvider.h"
#include "AnimationProvider_DirectionalEvade.generated.h"

class UNinjaCombatGameplayAbility;

/**
 * Provides appropriate section names for their respective evade angles. 
 */
UCLASS(meta = (DisplayName = "Directional Evades"))
class NINJACOMBAT_API UAnimationProvider_DirectionalEvade : public UNinjaCombatDirectionalAnimationProvider
{
	
	GENERATED_BODY()

public:

	UAnimationProvider_DirectionalEvade();
	
protected:

	/**
	 * An offset applied to the angle calculation.
	 *
	 * This can be useful for scenarios where the character moves in an angled world, such as a top-down game
	 * and the forward reference is in a diagonal angle, such as 45 degrees.
	 *
	 * In those cases, since the angle may be added to the character's direction, we need to offset here at the
	 * end, so for example, if the forward reference is angled at -45 degrees, we need to offset back, by adding
	 * 45 degrees here.
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Directional Evade")
	float Offset;
	
	// -- Begin Direction Animation Provider implementation
	virtual bool CalculateAnimationAngle_Implementation(UNinjaCombatGameplayAbility* CombatAbility, float& OutAngle) const override;
	// -- End Direction Animation Provider implementation
	
};
