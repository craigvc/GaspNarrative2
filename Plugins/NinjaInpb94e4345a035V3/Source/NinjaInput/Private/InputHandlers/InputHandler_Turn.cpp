// Ninja Bear Studio Inc., all rights reserved.
#include "InputHandlers/InputHandler_Turn.h"

#include "InputAction.h"
#include "NinjaInputSettings.h"
#include "NinjaInputTags.h"
#include "Components/NinjaInputManagerComponent.h"
#include "Engine/World.h"
#include "GameFramework/Controller.h"
#include "Kismet/KismetMathLibrary.h"
#include "Runtime/CoreUObject/Public/UObject/ConstructorHelpers.h"

UInputHandler_Turn::UInputHandler_Turn()
{
	MinimumMagnitudeToTurn = 0.2f;
	TurnSpeed = 10.f;
	BlockRotationTags = FGameplayTagContainer::EmptyContainer;
	BlockRotationTags.AddTagFast(Tag_Input_Block_Rotation);
	
	TriggerEvents.Add(ETriggerEvent::Triggered);
	TriggerEvents.Add(ETriggerEvent::Ongoing);
	
	static ConstructorHelpers::FObjectFinder<UInputAction> InputActionRef(TEXT("/Script/EnhancedInput.InputAction'/NinjaInput/Input/IA_NI_Turn.IA_NI_Turn'"));
	if (InputActionRef.Succeeded())
	{
		const TObjectPtr<UInputAction> InputAction = InputActionRef.Object;
		InputActions.AddUnique(InputAction);
	}
}

void UInputHandler_Turn::HandleTriggeredEvent_Implementation(UNinjaInputManagerComponent* Manager,
	const FInputActionValue& Value, const UInputAction* InputAction, float ElapsedTime) const
{
	Turn(Manager, Value);
}

void UInputHandler_Turn::HandleOngoingEvent_Implementation(UNinjaInputManagerComponent* Manager,
	const FInputActionValue& Value, const UInputAction* InputAction, float ElapsedTime) const
{
	Turn(Manager, Value);
}

bool UInputHandler_Turn::CanTurn_Implementation(UNinjaInputManagerComponent* Manager, const FInputActionValue& Value) const
{
	// Ensure that we DO NOT have any of the blocking tags.
	return !HasAnyTags(Manager, BlockRotationTags) && Value.GetMagnitude() >= MinimumMagnitudeToTurn;
}

void UInputHandler_Turn::Turn_Implementation(UNinjaInputManagerComponent* Manager, const FInputActionValue& Value) const
{
	if (!CanTurn(Manager, Value))
	{
		return;
	}
	
	if (AController* Controller = Manager->GetController())
	{
		const FVector TurnVector = FVector(Value[1], Value[0], 0.0f);
		const FRotator TurnRotator = FRotationMatrix::MakeFromX(TurnVector).Rotator();

		Controller->SetControlRotation(UKismetMathLibrary::RInterpTo(Controller->GetControlRotation(),
			TurnRotator, Manager->GetWorld()->GetDeltaSeconds(), TurnSpeed));
	}
}
