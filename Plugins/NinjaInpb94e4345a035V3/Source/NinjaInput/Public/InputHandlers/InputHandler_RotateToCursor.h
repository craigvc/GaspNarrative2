// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "NinjaInputHandler.h"
#include "Engine/EngineTypes.h"
#include "InputHandler_RotateToCursor.generated.h"

/**
 * Rotates the character to the mouse cursor, via Control Rotation.
 *
 * This can be useful when added before an ability activation, so it can set the Control Rotation and
 * rotate the character, before activating the Ability.
 *
 * However, since control rotation happens over a few frames, it might be a good idea to pair this
 * Handler with the "Toggle Rotation During RootMotion" Anim Notify State. 
 */
UCLASS(meta = (DisplayName = "Character: Rotate to Cursor"))
class NINJAINPUT_API UInputHandler_RotateToCursor : public UNinjaInputHandler
{
	
	GENERATED_BODY()

public:

	UInputHandler_RotateToCursor();
	
protected:

	/** Collision Channel used to detect the mouse cursor. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Rotate To Cursor")
	TEnumAsByte<ECollisionChannel> MouseChannel;

	virtual void HandleTriggeredEvent_Implementation(UNinjaInputManagerComponent* Manager, const FInputActionValue& Value,
		const UInputAction* InputAction, float ElapsedTime) const override;

	virtual void HandleOngoingEvent_Implementation(UNinjaInputManagerComponent* Manager, const FInputActionValue& Value,
		const UInputAction* InputAction, float ElapsedTime) const override;

	virtual void RotateToCursor(const UNinjaInputManagerComponent* Manager) const;
	
};
