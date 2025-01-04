// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "InputHandlers/InputHandler_Move.h"
#include "InputHandler_MoveInterface.generated.h"

/**
 * Handles character movement, through the interface call.
 *
 * This is useful if the move should not call the movement methods directly and instead, should
 * do so via the Movement Interface, which should then perform any steps (such as replication)
 * and forward the value to the actual input methods.
 *
 * The pawn or character must implement "Movement Input Proxy Interface".
 */
UCLASS(meta = (DisplayName = "Character: Move (Interface)"))
class NINJAINPUT_API UInputHandler_MoveInterface : public UInputHandler_Move
{
	
	GENERATED_BODY()

protected:

	virtual void Move_Implementation(UNinjaInputManagerComponent* Manager, const FInputActionValue& Value) const override;
	
};
