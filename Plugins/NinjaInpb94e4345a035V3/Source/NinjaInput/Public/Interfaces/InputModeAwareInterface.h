// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UObject/Interface.h"
#include "InputModeAwareInterface.generated.h"

UINTERFACE(MinimalAPI, Blueprintable)
class UInputModeAwareInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * Denotes an actor that is aware of the current Player Input Mode.
 */
class NINJAINPUT_API IInputModeAwareInterface
{
	
	GENERATED_BODY()

public:

	/**
	 * Provides the Input Mode currently in use.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Input Mode Aware Interface")
	FGameplayTag GetPlayerInputMode() const;

	/**
	 * Provides a new Input Mode.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Input Mode Aware Interface")
	void SetPlayerInputMode(FGameplayTag InputModeTag);
	
};