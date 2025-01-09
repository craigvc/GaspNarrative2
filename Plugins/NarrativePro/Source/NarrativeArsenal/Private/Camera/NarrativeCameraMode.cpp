// Copyright Narrative Tools 2024. 


#include "Camera/NarrativeCameraMode.h"
#include "Camera/NarrativeCameraComponent.h"

UNarrativeCameraMode::UNarrativeCameraMode(const FObjectInitializer& ObjectInitializer)
{
	DefaultFOVBlendSpeed = 10.f;
	OffsetInterpSpeed = 50.f;
	TargetArmLength = 300.f;
}

void UNarrativeCameraMode::EnterMode_Implementation()
{

}

void UNarrativeCameraMode::ExitMode_Implementation()
{

}

void UNarrativeCameraMode::GetDesiredFOV_Implementation(float& FOV, float& FOVBlendSpeed)
{
	FOV = DefaultFOV;
	FOVBlendSpeed = DefaultFOVBlendSpeed;
}

FVector UNarrativeCameraMode::GetCameraDesiredOffset_Implementation()
{
	return Offset;
}

FVector UNarrativeCameraMode::GetCameraRootLocation_Implementation()
{
	return FVector::ZeroVector;
}

class UNarrativeCameraComponent* UNarrativeCameraMode::GetOwningCamera() const
{
	return Cast<UNarrativeCameraComponent>(GetOuter());
}

