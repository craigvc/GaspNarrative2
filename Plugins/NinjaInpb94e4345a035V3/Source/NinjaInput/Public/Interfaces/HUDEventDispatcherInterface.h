// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UObject/Interface.h"
#include "HUDEventDispatcherInterface.generated.h"

UINTERFACE(MinimalAPI, Blueprintable, DisplayName = "HUD Event Dispatcher Interface")
class UHUDEventDispatcherInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * API implemented by a HUD class that can handle Input Events.
 *
 * Not meant to be used for HUD navigation. For that purpose it's recommended to use more
 * direct approach with an Input Mapping Context and UI Actions. This is meant to trigger
 * UI actions such as opening/closing windows like a Pause Menu, Inventory Screen, etc.
 */
class NINJAINPUT_API IHUDEventDispatcherInterface
{
	
	GENERATED_BODY()

public:

	/**
	 * Handles an Input Event.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "HUD Event Dispatcher Interface")
	void HandleInputEvent(FGameplayTag InputEventTag);
	
};