// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "Camera/CameraComponent.h"
#include "NarrativeCameraMode.h"
#include "NarrativeCameraComponent.generated.h"

/**
 * Narrative pro comes with a custom camera component to support handling different camera modes, and blending between them. 
 */
UCLASS()
class NARRATIVEARSENAL_API UNarrativeCameraComponent : public UCameraComponent
{
	GENERATED_BODY()
	
public:

	UNarrativeCameraComponent(const FObjectInitializer& ObjectInitializer);

	//Set the camera mode to the specified mode. 
	UFUNCTION(BlueprintCallable, Category = "Narrative Camera")
	virtual void SetCameraMode(TSubclassOf<UNarrativeCameraMode> NewMode);

	//Set the camera mode back to the default mode. 
	UFUNCTION(BlueprintCallable, Category = "Narrative Camera")
	virtual void SetCameraModeToDefault();

protected:

	//The default camera mode to use. 
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Narrative Camera")
	TSubclassOf<UNarrativeCameraMode> DefaultCameraMode;

	//The camera mode currently being used. 
	UPROPERTY(BlueprintReadWrite, Category = "Narrative Camera")
	TObjectPtr<UNarrativeCameraMode> CurrentCameraMode;

	//Store all the camera modes in here and reuse them as we go. 
	UPROPERTY(Transient)
	TArray<UNarrativeCameraMode*> CameraModeInstances;

	virtual void GetCameraView(float DeltaTime, FMinimalViewInfo& DesiredView) override;
	virtual void BeginPlay() override;

	virtual UNarrativeCameraMode* FindOrCreateCameraMode(TSubclassOf<UNarrativeCameraMode> NewModeClass);

	/**Not in love with this solution, but the camera component also manages the target arm its attached to.
	If I had more time I would scrap target arm completely and fold collision detection into the camera itself - having two components managed by one seems a bit messy. 
	TODO write such a system at some stage*/
	class USpringArmComponent* GetSpringArm() const;

};
