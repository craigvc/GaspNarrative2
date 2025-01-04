// Ninja Bear Studio Inc., all rights reserved.
#include "InputHandlers/InputHandler_CharacterJump.h"

#include "InputAction.h"
#include "NinjaInputSettings.h"
#include "NinjaInputTags.h"
#include "Components/NinjaInputManagerComponent.h"
#include "GameFramework/Character.h"
#include "Runtime/CoreUObject/Public/UObject/ConstructorHelpers.h"

UInputHandler_CharacterJump::UInputHandler_CharacterJump()
{
	MinimumMagnitudeToJump = 0.1f;
	
	BlockJumpTags = FGameplayTagContainer::EmptyContainer;
	BlockJumpTags.AddTagFast(Tag_Input_Block_Movement);
	
	TriggerEvents.Add(ETriggerEvent::Triggered);
	TriggerEvents.Add(ETriggerEvent::Completed);

	static ConstructorHelpers::FObjectFinder<UInputAction> InputActionRef(TEXT("/Script/EnhancedInput.InputAction'/NinjaInput/Input/IA_NI_Jump.IA_NI_Jump'"));
	if (InputActionRef.Succeeded())
	{
		const TObjectPtr<UInputAction> InputAction = InputActionRef.Object;
		InputActions.AddUnique(InputAction);
	}
}

bool UInputHandler_CharacterJump::CanJump_Implementation(UNinjaInputManagerComponent* Manager, const FInputActionValue& Value) const
{
	// Ensure that we DO NOT have any of the blocking tags and the value is past the minimum threshold.
	return !HasAnyTags(Manager, BlockJumpTags) && Value.GetMagnitude() >= MinimumMagnitudeToJump;
}

void UInputHandler_CharacterJump::HandleTriggeredEvent_Implementation(UNinjaInputManagerComponent* Manager,
	const FInputActionValue& Value, const UInputAction* InputAction, float ElapsedTime) const
{
	if (!CanJump(Manager, Value))
	{
		return;
	}
	
	ACharacter* OwningCharacter = Cast<ACharacter>(Manager->GetPawn());
	if (IsValid(OwningCharacter))
	{
		OwningCharacter->Jump();
	}
}

void UInputHandler_CharacterJump::HandleCompletedEvent_Implementation(UNinjaInputManagerComponent* Manager,
	const FInputActionValue& Value, const UInputAction* InputAction) const
{
	ACharacter* OwningCharacter = Cast<ACharacter>(Manager->GetPawn());
	if (IsValid(OwningCharacter))
	{
		OwningCharacter->StopJumping();
	}
}