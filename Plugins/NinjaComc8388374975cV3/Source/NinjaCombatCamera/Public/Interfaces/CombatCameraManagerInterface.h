// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "Types/FCombatCameraAnimationParameters.h"
#include "UObject/Interface.h"
#include "CombatCameraManagerInterface.generated.h"

class UCameraAnimationSequence;

UINTERFACE(MinimalAPI)
class UCombatCameraManagerInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * Defines the API for the camera management.
 */
class NINJACOMBATCAMERA_API ICombatCameraManagerInterface
{
	
	GENERATED_BODY()

public:
	
	/**
	 * Plays a Combat Camera Animation, with requested parameters.
	 *
	 * @param Anchor		An actor with a camara, used as a focus/anchor point.
	 * @param Animation		Camera Animation Sequence to play.
	 * @param Parameters	Camera Animation Parameters set to the animation.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintCosmetic, Category = "Camera Manager Interface")
	void PlayCombatCameraAnimation(AActor* Anchor, UCameraAnimationSequence* Animation, FCombatCameraAnimationParameters Parameters);

	/**
	 * Stops the ongoing Combat Camera Animation.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintCosmetic, Category = "Camera Manager Interface")
	void StopCombatCameraAnimation();

};
