// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "InputTriggers.h"
#include "InputTriggerDoubleTap.generated.h"

/**
 * Double Tap: Press/Release/Press.
 * 
 * Input must be actuated then released within TapReleaseTimeThreshold seconds to trigger.
 * Then a second input must be actuated within the TapIntervalThreshold.
 */
UCLASS(NotBlueprintable, MinimalAPI, meta = (DisplayName = "Double Tap"))
class UInputTriggerDoubleTap : public UInputTriggerTimedBase
{
	
	GENERATED_BODY()

public:

	// Release within this time-frame to trigger a tap.
	UPROPERTY(EditAnywhere, Config, BlueprintReadWrite, Category = "Trigger Settings", meta = (ClampMin = "0"))
	float TapReleaseTimeThreshold = 0.2f;

	// Time limit between taps.
	UPROPERTY(EditAnywhere, Config, BlueprintReadWrite, Category = "Trigger Settings", meta = (ClampMin = "0"))
	float TapIntervalThreshold = 0.5f;
	
protected:

	// -- Begin Input Trigger implementation
	virtual ETriggerState UpdateState_Implementation(const UEnhancedPlayerInput* PlayerInput, FInputActionValue ModifiedValue, float DeltaTime) override;
	// -- End Input Trigger implementation
	
private:

	uint8 Taps = 0;
	float LastTapTime = 0.f;
	
};
