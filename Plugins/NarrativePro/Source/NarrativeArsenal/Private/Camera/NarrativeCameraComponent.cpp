// Copyright Narrative Tools 2024. 


#include "Camera/NarrativeCameraComponent.h"
#include <GameFramework/SpringArmComponent.h>

UNarrativeCameraComponent::UNarrativeCameraComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{

}

void UNarrativeCameraComponent::SetCameraMode(TSubclassOf<class UNarrativeCameraMode> NewMode)
{
	if (!IsValid(NewMode))
	{
		NewMode = DefaultCameraMode;
	}
	if (IsValid(NewMode))
	{
		if (CurrentCameraMode)
		{
			CurrentCameraMode->ExitMode();
		}

		CurrentCameraMode = FindOrCreateCameraMode(NewMode);

		if (CurrentCameraMode)
		{
			CurrentCameraMode->EnterMode();
		}
	}
}	

void UNarrativeCameraComponent::GetCameraView(float DeltaTime, FMinimalViewInfo& DesiredView)
{
	Super::GetCameraView(DeltaTime, DesiredView);
}

void UNarrativeCameraComponent::BeginPlay()
{
	SetCameraMode(DefaultCameraMode);

	Super::BeginPlay();
}

void UNarrativeCameraComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (IsValid(CurrentCameraMode))
	{
		//Camera modes control our FOV, and spring arm offset 
		FieldOfView = FMath::FInterpTo(FieldOfView, CurrentCameraMode->TargetFOV, DeltaTime, CurrentCameraMode->FOVInterpSpeed);

		if (USpringArmComponent* SpringArm = GetSpringArm())
		{
			SpringArm->SocketOffset = FMath::VInterpTo(SpringArm->SocketOffset, CurrentCameraMode->Offset, DeltaTime, CurrentCameraMode->OffsetInterpSpeed);
		}
	}
}

UNarrativeCameraMode* UNarrativeCameraComponent::FindOrCreateCameraMode(TSubclassOf<UNarrativeCameraMode> NewModeClass)
{
	//Try find the camera mode from the pool
	for (auto& CM : CameraModeInstances)
	{
		if (CM && CM->GetClass() == NewModeClass)
		{
			return CM;
		}
	}

	//If mode wasn't in the pool, instantiate and add to pool.
	UNarrativeCameraMode* NewMode = NewObject<UNarrativeCameraMode>(this, NewModeClass);

	if (NewMode)
	{
		CameraModeInstances.Add(NewMode);
	}

	return NewMode;
}

class USpringArmComponent* UNarrativeCameraComponent::GetSpringArm() const
{
	return Cast<USpringArmComponent>(GetAttachParent());
}
