// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "NinjaCombatViewModel.h"
#include "ViewModel_StatusEffects.generated.h"

/**
 * Tracks status effects so they can be added to the UI.
 *
 * Gameplay Effects with the "CombatStatus" Gameplay Effect UI Data Component can be obtained
 * by this Viewmodel and provided to something like a Grid Component in the UI, displaying all
 * effects applied to the Combat Actor that owns it.
 */
UCLASS(BlueprintType, Blueprintable, DisplayName = "Status Effects")
class NINJACOMBATUI_API UViewModel_StatusEffects : public UNinjaCombatViewModel
{
	
	GENERATED_BODY()

public:

	// -- Begin Combat View Model implementation
	virtual void BindToAbilitySystem(const AActor* Owner) override;
	// -- End Combat View Model implementation

	/**
	 * Provides all status effects relevant to the Combat UI.
	 */
	UFUNCTION(BlueprintPure, BlueprintCosmetic, Category = "Ninja Combat|UI|View Model", FieldNotify)
	TArray<FActiveGameplayEffect> GetActiveStatusEffects() const;
	
protected:

	/**
	 * Checks if the provided Gameplay Effect Spec should be added to the array.
	 */
	virtual bool IsEligibleStatusEffect(const FGameplayEffectSpec& GameplayEffectSpec) const;
	
	/**
	 * Handles a gameplay effect that has been applied, processing it if eligible.
	 *
	 * Eligible GEs must contain a valid CombatStatus UI Component, which means they can be
	 * rendered in the UI, as they provide either a textual description or a texture.
	 */
	virtual void HandleGameplayEffectApplied(UAbilitySystemComponent* InstigatorAbilitySystemComponent, const FGameplayEffectSpec& GameplayEffectSpec, FActiveGameplayEffectHandle ActiveGameplayEffectHandle);

	/**
	 * Handles a gameplay effect that was removed from the Ability System Component.
	 *
	 * This function will catch any kind of removal: normal execution and time expiration or
	 * deliberate removal due to other Gameplay Effects.
	 */
	virtual void HandleGameplayEffectRemoved(const FActiveGameplayEffect& ActiveGameplayEffect);

	/**
	 * Updates the status effect list, adding an Active Gameplay Effect.
	 * It will notify the change via "GetActiveStatusEffects".
	 */
	void AddStatusEffect(const FActiveGameplayEffect& ActiveGameplayEffect);

	/**
	 * Updates the status effect list, removing an Active Gameplay Effect.
	 * It will notify the change via "GetActiveStatusEffects".
	 */
	void RemoveStatusEffect(const FActiveGameplayEffect& ActiveGameplayEffect); 
	
private:

	/** The handle pointing to the Gameplay Effect Added Delegate. */
	FDelegateHandle GameplayEffectAppliedDelegateHandle;

	/** The handle pointing to the Gameplay Effect Removed Delegate. */
	FDelegateHandle GameplayEffectRemovedDelegateHandle;

	/** All active status effects managed by the Viewmodel. */
	TArray<FActiveGameplayEffect> ActiveStatusEffects;
	
};
