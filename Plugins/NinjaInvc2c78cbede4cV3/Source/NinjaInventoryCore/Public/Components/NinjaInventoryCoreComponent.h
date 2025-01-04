// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "NinjaInventoryCoreComponent.generated.h"

class APawn;
class UAbilitySystemComponent;

/**
 * Base Component class, providing common functionalities to all components. 
 */
UCLASS(Abstract, NotBlueprintable)
class NINJAINVENTORYCORE_API UNinjaInventoryCoreComponent : public UActorComponent
{
	
	GENERATED_BODY()

public:

	UNinjaInventoryCoreComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	/**
	 * Helper method for authoritative checks.
	 */
	bool OwnerHasAuthority() const;

	/**
	 * Helper method for locally controlled checks.
	 */
	bool OwnerIsLocallyControlled() const;

	/**
	 * Provides the pawn related to this component.
	 */
	virtual APawn* GetPawn() const;

	/**
	 * Provides the Ability System Component assigned to the owner.
	 * 
	 * Override this event if you want to cover more specific ways to obtain the
	 * Ability System Component from the owner, other than using the default GAS
	 * UAbilitySystemGlobals function library.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Core")
	UAbilitySystemComponent* GetAbilitySystemComponent() const;

	/**
	 * Checks if the Ability System Component is valid and ready to be used.
	 *
	 * Override this event if you want to provide other ways to specify that an
	 * Ability System Component should be considered valid, which is particularly
	 * important to determine if the inventory should be initialized.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Core")
	bool IsValidAbilitySystemComponent(const UAbilitySystemComponent* AbilityComponent) const;
	
};
