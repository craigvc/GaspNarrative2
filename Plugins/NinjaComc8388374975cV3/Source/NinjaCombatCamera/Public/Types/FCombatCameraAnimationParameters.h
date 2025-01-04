// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "CameraAnimationCameraModifier.h"
#include "FCombatCameraAnimationParameters.generated.h"

/**
 * Analogous to the original Camera Animation Parameters, which is not exported.
 */
USTRUCT(BlueprintType)
struct NINJACOMBATCAMERA_API FCombatCameraAnimationParameters
{
	
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera Animation")
	float PlayRate = 1.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera Animation")
	float Scale = 1.f;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera Animation")
	ECameraAnimationEasingType EaseInType = ECameraAnimationEasingType::Linear;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera Animation")
	float EaseInDuration = 0.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera Animation")
	ECameraAnimationEasingType EaseOutType = ECameraAnimationEasingType::Linear;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera Animation")
	float EaseOutDuration = 0.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera Animation")
	bool bLoop = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera Animation")
	int32 StartOffset = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera Animation")
	bool bRandomStartTime = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera Animation")
	float DurationOverride = 0.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera Animation")
	ECameraAnimationPlaySpace PlaySpace = ECameraAnimationPlaySpace::CameraLocal;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera Animation")
	FRotator UserPlaySpaceRot = FRotator::ZeroRotator;
	
};