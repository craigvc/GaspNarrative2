// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "CommonInputModeTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "NinjaInputUIFunctionLibrary.generated.h"

class APlayerController;
class UUserWidget;

/**
 * Set of support functions for the UI layer on Ninja Input. 
 */
UCLASS()
class NINJAINPUTUI_API UNinjaInputUIFunctionLibrary : public UBlueprintFunctionLibrary
{
	
	GENERATED_BODY()

public:

	/**
	 * Sets a new Input Mode to a local player.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Input|User Interface")
	static void SetInputMode(APlayerController* PlayerController, ECommonInputMode InputMode, EMouseCaptureMode MouseCaptureMode, bool bShowMouseCursor);
	
};
