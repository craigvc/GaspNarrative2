// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "NinjaCombatAnimationProvider.h"
#include "NinjaCombatDirectionalAnimationProvider.generated.h"

struct FCombatAnimationDirection;
class UNinjaCombatGameplayAbility;

/**
 * Base class for any animation providers that must consider a direction.
 */
UCLASS(Abstract)
class NINJACOMBAT_API UNinjaCombatDirectionalAnimationProvider : public UNinjaCombatAnimationProvider
{
	
	GENERATED_BODY()


public:

	UNinjaCombatDirectionalAnimationProvider();

	// -- Begin Animation Provider implementation
	virtual FName GetSectionName_Implementation(UNinjaCombatGameplayAbility* CombatAbility) const override;
	// -- End Animation Provider implementation

protected:

	/**
	 * Maps the Animation Directions to the appropriate Animation sections.
	 *
	 * This setup expects that the default Animation Montage has multiple sections,
	 * each representing a proper direction of the animation that will play.
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Animation Provider", meta = (TitleProperty = "{SectionName} {Range}"))
	TArray<FCombatAnimationDirection> AnimationDirections;

	/**
	 * Calculates the Animation Angle, based on any logic applicable for the game.
	 *
	 * @param CombatAbility		Gameplay ability providing any contextual information.
	 * @param OutAngle			Angle used to pick the proper animation, in the [-180, 180] range.
	 * @return					True if an angle was calculated.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Animation Provider")
	bool CalculateAnimationAngle(UNinjaCombatGameplayAbility* CombatAbility, float& OutAngle) const;
	
private:
	
	/** Helper method to initialize an array with default directions, during construction. */
	static void InitializeDirections(TArray<FCombatAnimationDirection>& DirectionsArray);
	
};
