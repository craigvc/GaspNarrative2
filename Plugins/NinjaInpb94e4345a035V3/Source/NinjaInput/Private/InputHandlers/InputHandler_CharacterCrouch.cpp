// Ninja Bear Studio Inc., all rights reserved.
#include "InputHandlers/InputHandler_CharacterCrouch.h"

#include "InputAction.h"
#include "NinjaInputSettings.h"
#include "NinjaInputTags.h"
#include "Components/NinjaInputManagerComponent.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Runtime/CoreUObject/Public/UObject/ConstructorHelpers.h"

UInputHandler_CharacterCrouch::UInputHandler_CharacterCrouch()
{
	BlockCrouchTags = FGameplayTagContainer::EmptyContainer;
	BlockCrouchTags.AddTagFast(Tag_Input_Block_Movement);
	
	TriggerEvents.Add(ETriggerEvent::Triggered);

	static ConstructorHelpers::FObjectFinder<UInputAction> CrouchToggleInputActionRef(TEXT("/Script/EnhancedInput.InputAction'/NinjaInput/Input/IA_NI_Crouch_Toggle.IA_NI_Crouch_Toggle'"));
	if (CrouchToggleInputActionRef.Succeeded())
	{
		const TObjectPtr<UInputAction> InputAction = CrouchToggleInputActionRef.Object;
		InputActions.AddUnique(InputAction);
	}
}

void UInputHandler_CharacterCrouch::HandleTriggeredEvent_Implementation(UNinjaInputManagerComponent* Manager,
	const FInputActionValue& Value, const UInputAction* InputAction, float ElapsedTime) const
{
	if (!HasAnyTags(Manager, BlockCrouchTags))
	{
		ACharacter* OwningCharacter = Cast<ACharacter>(Manager->GetPawn());
		if (IsValid(OwningCharacter))
		{
			if (OwningCharacter->bIsCrouched)
			{
				OwningCharacter->UnCrouch();
			}
			else if (OwningCharacter->GetCharacterMovement()->CanEverCrouch())
			{
				OwningCharacter->Crouch();
			}
		}
	}
}
