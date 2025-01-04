// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Components/ActorComponent.h"
#include "NinjaCombatBaseComponent.generated.h"

class UAbilitySystemComponent;

UCLASS(Abstract, NotBlueprintable)
class NINJACOMBAT_API UNinjaCombatBaseComponent : public UActorComponent
{
	
	GENERATED_BODY()

public:

	UNinjaCombatBaseComponent();

	// -- Begin Actor Component implementation
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	// -- End Actor Component implementation

	/**
	 * Checks if the owner has network authority.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Combat|Components")
	bool OwnerHasAuthority() const;

	/**
	 * Checks if the owner is locally controlled.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Combat|Components")
	bool OwnerIsLocallyControlled() const;

	/**
	 * Checks if the owner is locally controlled by a player.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Combat|Components")
	bool OwnerIsLocalPlayer() const;
	
	/**
	 * Evaluates if the owner has a certain Gameplay Tag.
	 * The Ability Component must be available.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Combat|Components")
	bool HasGameplayTag(const FGameplayTag& TagToCheck) const;

	/**
	 * Retrieves the Ability System Component from the owner, via the ASC interface.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Combat|Components")
	UAbilitySystemComponent* GetAbilitySystemComponentFromOwner() const;
	
	/**
	 * Provides the Ability System Component already stored.
	 * 
	 * Only ever available if the property "bBindToAbilityComponent" is set to true
	 * or an Ability System Component was provided via the appropriate Setter.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Combat|Components")
	UAbilitySystemComponent* GetCachedAbilitySystemComponent() const;

	/**
	 * Sets an Ability System Component and triggers the binding.
	 * Alternative to the "bBindToAbilityComponent", which could create a timer.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Combat|Components")
	void SetAbilitySystemComponent(UAbilitySystemComponent* NewAbilitySystemComponent);

protected:

	/** Determines if this component will bind to the Ability Component in Begin Play. */
	bool bBindToAbilityComponent;

	/**
	 * Timer-friendly function to connect to the Ability Component.
	 */
	UFUNCTION()
	void BindToAbilitySystemComponent();

	/**
	 * Executes tasks using the Ability System Component.
	 */
	virtual void OnAbilitySystemComponentReceived();

	/**
	 * Executes tasks just before clearing the Ability System Component
	 */	
	virtual void OnAbilitySystemComponentReset();

	/** Performs a random roll between min/max values, using the Combat System's Random Stream. */
	float Roll(float Min = 0.f, float Max = 1.f) const;		
	
private:

	/** Ability System connected to the owner. */
	UPROPERTY()
	TWeakObjectPtr<UAbilitySystemComponent> AbilitySystemComponentPtr;	
	
};
