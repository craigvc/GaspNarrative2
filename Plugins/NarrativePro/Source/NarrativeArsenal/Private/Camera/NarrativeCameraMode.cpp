// Copyright Narrative Tools 2024. 


#include "Camera/NarrativeCameraMode.h"
#include "Camera/NarrativeCameraComponent.h"

UNarrativeCameraMode::UNarrativeCameraMode(const FObjectInitializer& ObjectInitializer)
{
	FOVInterpSpeed = 10.f;
	OffsetInterpSpeed = 50.f;
}

void UNarrativeCameraMode::EnterMode_Implementation()
{

}

void UNarrativeCameraMode::ExitMode_Implementation()
{

}

FVector UNarrativeCameraMode::GetCameraDesiredOffset_Implementation()
{
	return Offset;
}

FVector UNarrativeCameraMode::GetCameraPivotLocation_Implementation()
{
	return FVector::ZeroVector;
}

class UNarrativeCameraComponent* UNarrativeCameraMode::GetOwningCamera() const
{
	return Cast<UNarrativeCameraComponent>(GetOuter());
}

