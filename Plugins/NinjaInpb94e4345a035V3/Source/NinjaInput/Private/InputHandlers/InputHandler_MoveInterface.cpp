// Ninja Bear Studio Inc., all rights reserved.
#include "InputHandlers/InputHandler_MoveInterface.h"

#include "Components/NinjaInputManagerComponent.h"
#include "GameFramework/Actor.h"
#include "GameFramework/Pawn.h"
#include "Interfaces/MovementInputProxyInterface.h"

void UInputHandler_MoveInterface::Move_Implementation(UNinjaInputManagerComponent* Manager, const FInputActionValue& Value) const
{
	if (!CanMove(Manager, Value))
	{
		return;
	}
	
	AActor* Target = Manager->GetPawn(); 
	if (IsValid(Target) && Target->Implements<UMovementInputProxyInterface>())
	{
		const FVector ForwardDirection = Manager->GetForwardVector();
		IMovementInputProxyInterface::Execute_PrepareAndAddMovementInput(Target, ForwardDirection, Value[1], false);

		const FVector RightDirection = Manager->GetRightVector();
		IMovementInputProxyInterface::Execute_PrepareAndAddMovementInput(Target, RightDirection, Value[0], false);
	}
}
