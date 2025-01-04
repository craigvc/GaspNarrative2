// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "NinjaCombatMotionWarpingTargetProvider.generated.h"

class UNinjaCombatGameplayAbility;

/**
 * Basic way to provide a target that can be used as a warp reference.
 *
 * It won't provide targets directly. Instead, it will do so asynchronously via the Motion
 * Warping Target Receiver interface, which must be implemented by the requesting Ability.
 */
UCLASS(BlueprintType, Blueprintable, EditInlineNew, DefaultToInstanced, meta = (DisplayName = "Default Target Provider"))
class NINJACOMBAT_API UNinjaCombatMotionWarpingTargetProvider : public UObject
{
	
	GENERATED_BODY()

public:
	
	/**
	 * Provides the target for the Motion Warping, for a combat animation.
	 * 
	 * @param CombatAbility
	 *		The Ability requesting this information. It will receive the information back
	 *		using the "Combat Target Receiver" interface.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Warp Target Provider")
	void RequestWarpTarget(UNinjaCombatGameplayAbility* CombatAbility) const;
	
};
