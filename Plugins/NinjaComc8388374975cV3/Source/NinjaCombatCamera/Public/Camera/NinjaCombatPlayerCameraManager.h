// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "Camera/PlayerCameraManager.h"
#include "GameFramework/Pawn.h"
#include "Interfaces/CombatCameraManagerInterface.h"
#include "Types/FCombatCameraAnimationParameters.h"
#include "NinjaCombatPlayerCameraManager.generated.h"

class APlayerController;
class UCameraAnimationSequence;

USTRUCT(BlueprintType)
struct FCombatCameraBlendInfo
{
	
	GENERATED_BODY()

	/** Time taken to blend between cameras. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat Camera")
	float BlendTime = 0.5f;

	/** Functions for blending between cameras. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat Camera")
	TEnumAsByte<EViewTargetBlendFunction> BlendFunction = VTBlend_Linear;

	/** Exponent, used by certain blend functions to control the shape of the curve. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat Camera")
	float BlendExp = 0.f;

	FCombatCameraBlendInfo() {}
	FCombatCameraBlendInfo(const float BlendTime) : BlendTime(BlendTime) {}
	
};

/**
 * A Camera Manager that exposes Camera Functionality to the Camera System.
 *
 * Just an implementation for the Combat Camera Manager interface, but any other Player Camera
 * Manager, implementing the correct interface, can be used by the Combat System.
 */
UCLASS()
class NINJACOMBATCAMERA_API ANinjaCombatPlayerCameraManager : public APlayerCameraManager, public ICombatCameraManagerInterface
{
	
	GENERATED_BODY()

public:

	// -- Begin Combat Camera Manager implementation
	virtual void PlayCombatCameraAnimation_Implementation(AActor* Anchor, UCameraAnimationSequence* Animation, FCombatCameraAnimationParameters Parameters) override;
	virtual void StopCombatCameraAnimation_Implementation() override;
	// -- End Combat Camera Manager implementation
	
protected:

	/** Configuration when blending from the Player Camera to the Animation Camera. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat Camera")
	FCombatCameraBlendInfo BlendIn = FCombatCameraBlendInfo(0.8f);

	/** Configuration when blending from the Animation Camera to the Player Camera. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat Camera")
	FCombatCameraBlendInfo BlendOut = FCombatCameraBlendInfo(0.2f);
	
	/**
	 * Copies properties between the source (custom) struct and the destination (engine) one.
	 * Since the original struct is not exported, we needed to clone it, so it can be in this module's API.
	 */
	static void CopyStructProperties(FCombatCameraAnimationParameters& Source, FCameraAnimationParams& Destination);

private:

	/** Handle for the current animation. */
	FCameraAnimationHandle Handle;
	
};

