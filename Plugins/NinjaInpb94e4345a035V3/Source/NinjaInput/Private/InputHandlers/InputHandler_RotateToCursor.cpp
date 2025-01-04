// Ninja Bear Studio Inc., all rights reserved.
#include "InputHandlers/InputHandler_RotateToCursor.h"

#include "NinjaInputFunctionLibrary.h"
#include "Components/NinjaInputManagerComponent.h"
#include "Engine/EngineTypes.h"
#include "GameFramework/PlayerController.h"

UInputHandler_RotateToCursor::UInputHandler_RotateToCursor()
{
	MouseChannel = ECC_Visibility;
	
	TriggerEvents.Add(ETriggerEvent::Triggered);
	TriggerEvents.Add(ETriggerEvent::Ongoing);
}

void UInputHandler_RotateToCursor::HandleTriggeredEvent_Implementation(UNinjaInputManagerComponent* Manager,
	const FInputActionValue& Value, const UInputAction* InputAction, const float ElapsedTime) const
{
	RotateToCursor(Manager);
}

void UInputHandler_RotateToCursor::HandleOngoingEvent_Implementation(UNinjaInputManagerComponent* Manager,
	const FInputActionValue& Value, const UInputAction* InputAction, const float ElapsedTime) const
{
	RotateToCursor(Manager);
}

void UInputHandler_RotateToCursor::RotateToCursor(const UNinjaInputManagerComponent* Manager) const
{
	if (!IsValid(Manager))
	{
		return;
	}

	APlayerController* PlayerController = Cast<APlayerController>(Manager->GetController());
	if (!IsValid(PlayerController))
	{
		return;
	}

	FRotator LookAtRotation; 
	if (UNinjaInputFunctionLibrary::FindLookAtCursorRotation(PlayerController, LookAtRotation, MouseChannel))
	{
		PlayerController->SetControlRotation(LookAtRotation);
	}
}
