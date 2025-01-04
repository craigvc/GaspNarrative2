// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "InputActionValue.h"
#include "UObject/Object.h"
#include "NinjaInputAbilityActivationCheck.generated.h"

class UInputAction;
class UInputTrigger;

/**
 * Evaluates the appropriate rules for an ability activation.
 *
 * Some triggers may have straightforward values, like true or false on expected scenarios. Other
 * triggers might have different values such as false values for triggered events. These cases or
 * other more complex assessments can be done with evaluators.
 */
UCLASS(BlueprintType, Blueprintable, ClassGroup = NinjaInput)
class NINJAINPUT_API UNinjaInputAbilityActivationCheck : public UObject
{
	
	GENERATED_BODY()

public:

	UNinjaInputAbilityActivationCheck();
	
	/**
	 * Evaluates if an Ability should activate.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Ability Activation Check")
	bool ShouldActivate(const FInputActionValue& Value, const UInputAction* InputAction) const;

protected:

	/**
	 * All triggers that are handled as exceptions.
	 *
	 * These handlers are (oddly) designed in the Enhanced Input System to trigger without having
	 * a true value, meaning that you need to always handle these activations as "true".
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Ability Activation Check")
	TArray<TSubclassOf<UInputTrigger>> NonValuedTriggerClasses;
	
	/**
	 * Checks if the Input Action has a trigger that provides no actual value. 
	 */
	virtual bool EvaluateActionTriggers(const FInputActionValue& Value, const UInputAction* InputAction) const;
	
};
