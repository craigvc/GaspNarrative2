// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "NarrativeCameraMode.generated.h"

/**
 * Camera modes are managed by the UNarrativeCameraComponent and allow us to blend between different camera behaviours. 
 * 
 * Camera modes are extremely simple - a mode just specifies the cameras desired FOV and location, and the camera component blends towards it based on its blendspeed. 
 */
UCLASS(Abstract, Blueprintable)
class NARRATIVEARSENAL_API UNarrativeCameraMode : public UObject
{
	GENERATED_BODY()

public:

	friend class UNarrativeCameraComponent;

	UNarrativeCameraMode(const FObjectInitializer& ObjectInitializer);

	//The FOV this camera mode wants. 
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Narrative Camera")
	float TargetFOV;

	//The offset from the character this mode wants. If you don't want an offset, or need something more complex, you can override GetCameraDesiredTransform()
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Narrative Camera")
	FVector Offset;

	//TODO move these to time based instead of units/s
	//units/s Speed to interp FOV at 
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Narrative Camera")
	float FOVInterpSpeed;

	//units/s Speed to interp offset at 
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Narrative Camera")
	float OffsetInterpSpeed;

	//units/s Speed to interp offset at 
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Narrative Camera")
	float PivotInterpSpeed;

protected:

	//Enter/exit mode handlers if your mode wants to do anything custom
	UFUNCTION(BlueprintNativeEvent, Category = "Camera Mode")
	void EnterMode();
	virtual void EnterMode_Implementation();

	UFUNCTION(BlueprintNativeEvent, Category = "Camera Mode")
	void ExitMode();
	virtual void ExitMode_Implementation();

	//What the cameras target arm offset should be. 
	UFUNCTION(BlueprintNativeEvent, Category = "Camera Mode")
	FVector GetCameraDesiredOffset();
	virtual FVector GetCameraDesiredOffset_Implementation();

	//Where the cameras target arm should attach to the character.
	UFUNCTION(BlueprintNativeEvent, Category = "Camera Mode")
	FVector GetCameraPivotLocation();
	virtual FVector GetCameraPivotLocation_Implementation();

	UFUNCTION(BlueprintPure, Category = "Camera Mode")
	class UNarrativeCameraComponent* GetOwningCamera() const;

};
