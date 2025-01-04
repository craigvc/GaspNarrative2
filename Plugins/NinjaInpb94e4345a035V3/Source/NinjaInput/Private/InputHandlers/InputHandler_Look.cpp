// Ninja Bear Studio Inc., all rights reserved.
#include "InputHandlers/InputHandler_Look.h"

#include "InputAction.h"
#include "NinjaInputSettings.h"
#include "NinjaInputTags.h"
#include "Components/NinjaInputManagerComponent.h"
#include "Engine/World.h"
#include "GameFramework/Pawn.h"
#include "Runtime/CoreUObject/Public/UObject/ConstructorHelpers.h"

UInputHandler_Look::UInputHandler_Look()
{
	bApplyWorldDeltaSeconds = false;
	MinimumMagnitudeToLook = 0.1f;
	
	BlockPitchTags = FGameplayTagContainer::EmptyContainer;
	BlockPitchTags.AddTagFast(Tag_Input_Block_Camera_Pitch);

	BlockYawTags = FGameplayTagContainer::EmptyContainer;
	BlockYawTags.AddTagFast(Tag_Input_Block_Camera_Yaw);
	
	TriggerEvents.Add(ETriggerEvent::Triggered);
	TriggerEvents.Add(ETriggerEvent::Ongoing);

	static ConstructorHelpers::FObjectFinder<UInputAction> InputActionRef(TEXT("/Script/EnhancedInput.InputAction'/NinjaInput/Input/IA_NI_Look.IA_NI_Look'"));
	if (InputActionRef.Succeeded())
	{
		const TObjectPtr<UInputAction> InputAction = InputActionRef.Object;
		InputActions.AddUnique(InputAction);
	}
}

void UInputHandler_Look::HandleTriggeredEvent_Implementation(UNinjaInputManagerComponent* Manager,
	const FInputActionValue& Value, const UInputAction* InputAction, float ElapsedTime) const
{
	Look(Manager, Value);
}

void UInputHandler_Look::HandleOngoingEvent_Implementation(UNinjaInputManagerComponent* Manager,
	const FInputActionValue& Value, const UInputAction* InputAction, float ElapsedTime) const
{
	Look(Manager, Value);
}

bool UInputHandler_Look::CanLook_Implementation(UNinjaInputManagerComponent* Manager) const
{
	return IsValid(Manager);
}

bool UInputHandler_Look::CanChangePitch_Implementation(UNinjaInputManagerComponent* Manager, const FInputActionValue& Value) const
{
	return !HasAnyTags(Manager, BlockPitchTags) && Value.GetMagnitude() >= MinimumMagnitudeToLook;	
}

bool UInputHandler_Look::CanChangeYaw_Implementation(UNinjaInputManagerComponent* Manager, const FInputActionValue& Value) const
{
	return !HasAnyTags(Manager, BlockYawTags) && Value.GetMagnitude() >= MinimumMagnitudeToLook;
}

void UInputHandler_Look::Look_Implementation(UNinjaInputManagerComponent* Manager, const FInputActionValue& Value) const
{
	APawn* Pawn = Cast<APawn>(Manager->GetPawn());
	if (!IsValid(Pawn))
	{
		return;
	}

	FVector2D ProcessedValue = Value.Get<FVector2D>();
	if (bApplyWorldDeltaSeconds)
	{
		ProcessedValue *= Manager->GetWorld()->GetDeltaSeconds();
	}
	
	if (CanChangeYaw(Manager, Value))
	{
		Pawn->AddControllerYawInput(ProcessedValue[0]);	
	}

	if (CanChangePitch(Manager, Value))
	{
		Pawn->AddControllerPitchInput(ProcessedValue[1]);
	}
}
