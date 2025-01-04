// Ninja Bear Studio Inc., all rights reserved.
#include "InputHandlers/InputHandler_Move.h"

#include "InputAction.h"
#include "NinjaInputSettings.h"
#include "NinjaInputTags.h"
#include "Components/NinjaInputManagerComponent.h"
#include "GameFramework/Pawn.h"
#include "Runtime/CoreUObject/Public/UObject/ConstructorHelpers.h"

UInputHandler_Move::UInputHandler_Move()
{
	bUseWorldSpace = false;
	MinimumMagnitudeToMove = 0.3f;
	
	BlockMovementTags = FGameplayTagContainer::EmptyContainer;
	BlockMovementTags.AddTagFast(Tag_Input_Block_Movement);
	
	TriggerEvents.Add(ETriggerEvent::Triggered);
	TriggerEvents.Add(ETriggerEvent::Ongoing);

	static ConstructorHelpers::FObjectFinder<UInputAction> InputActionRef(TEXT("/Script/EnhancedInput.InputAction'/NinjaInput/Input/IA_NI_Move.IA_NI_Move'"));
	if (InputActionRef.Succeeded())
	{
		const TObjectPtr<UInputAction> InputAction = InputActionRef.Object;
		InputActions.AddUnique(InputAction);
	}
}

void UInputHandler_Move::HandleTriggeredEvent_Implementation(UNinjaInputManagerComponent* Manager,
	const FInputActionValue& Value, const UInputAction* InputAction, float ElapsedTime) const
{
	Move(Manager, Value);
}

void UInputHandler_Move::HandleOngoingEvent_Implementation(UNinjaInputManagerComponent* Manager,
	const FInputActionValue& Value, const UInputAction* InputAction, float ElapsedTime) const
{
	Move(Manager, Value);
}

bool UInputHandler_Move::CanMove_Implementation(UNinjaInputManagerComponent* Manager, const FInputActionValue& Value) const
{
	// Ensure that we DO NOT have any of the blocking tags and the value is past the minimum threshold.
	return !HasAnyTags(Manager, BlockMovementTags) && Value.GetMagnitude() >= MinimumMagnitudeToMove;
}

void UInputHandler_Move::Move_Implementation(UNinjaInputManagerComponent* Manager, const FInputActionValue& Value) const
{
	if (!CanMove(Manager, Value))
	{
		return;
	}
	
	if (APawn* Pawn = Cast<APawn>(Manager->GetPawn()))
	{
		FVector2D InputValue = Value.Get<FVector2D>();
		
		if (bUseWorldSpace)
		{
			InputValue = InputValue.GetSafeNormal();
			
			const FVector ForwardDirection = FVector::ForwardVector;
			Pawn->AddMovementInput(ForwardDirection, InputValue[1]);
		
			const FVector RightDirection = FVector::RightVector;
			Pawn->AddMovementInput(RightDirection, InputValue[0]);
		}
		else
		{
			InputValue = GetMovementInputScaleValue(Manager, InputValue);

			const FVector ForwardDirection = Manager->GetForwardVector();
			Pawn->AddMovementInput(ForwardDirection, InputValue[1]);
		
			const FVector RightDirection = Manager->GetRightVector();
			Pawn->AddMovementInput(RightDirection, InputValue[0]);
		}
	}
}

FVector2d UInputHandler_Move::GetMovementInputScaleValue_Implementation(const UNinjaInputManagerComponent* Manager, const FVector2D& InputValue) const
{
	const EInputAnalogStickBehavior AnalogStickBehavior = Manager->GetAnalogStickBehavior();
	switch (AnalogStickBehavior)
	{
		case EInputAnalogStickBehavior::FixedSpeed_SingleGait:
		case EInputAnalogStickBehavior::FixedSpeed_WalkRun:
			return InputValue.GetSafeNormal();

		case EInputAnalogStickBehavior::VariableSpeed_SingleGait:
		case EInputAnalogStickBehavior::VariableSpeed_WalkRun:
			return InputValue;
	}

	return InputValue;
}