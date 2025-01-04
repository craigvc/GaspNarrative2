// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameplayEffectTypes.h"
#include "NinjaInventoryItemFragment.h"
#include "NinjaInventoryGameplayEffectItemFragment.generated.h"

class UGameplayEffect;

/**
 * A Fragment that handles Gameplay Effects.
 *
 * This class does not handle any lifecycle events, meaning it won't apply or remove any effects,
 * during Initialize, Apply or Revert events. Subclasses are responsible for doing so.
 */
UCLASS(Abstract)
class NINJAINVENTORY_API UNinjaInventoryGameplayEffectItemFragment : public UNinjaInventoryItemFragment
{
	
	GENERATED_BODY()

public:

	UNinjaInventoryGameplayEffectItemFragment();

	/**
	 * Checks if the memory related to this fragment denotes an applied effect.
	 *
	 * @param Item		Item that has the memory stored. Must be provided.
	 * @return			True if the memory indicates that the effect was applied, false otherwise.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|GameplayFragments")
	virtual bool HasAppliedEffect(const UNinjaInventoryItem* Item) const;

	/**
	 * Checks if the Effect can be applied.
	 *
	 * By default, checks if the item is valid and if the effect has not been applied yet.
	 * Extend (or fully override) this behavior to create different checks in subclasses.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|GameplayFragments")
	virtual bool CanApplyEffect(const UNinjaInventoryItem* Item) const;

	/**
	 * Provides the Effect Level that will be applied for a certain item.
	 * 
	 * Classes can determine if this will return something different from the value set
	 * in this Fragment's configuration, by implementing the "Determine Effect Level" function. 
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|GameplayFragments")
	float GetEffectLevel(const UNinjaInventoryItem* Item) const;	
	
	/**
	 * Applies the Gameplay Effect to the Item's Ability System.
	 *
	 * @param Item
	 *		Item related to an owner that can provide an Ability System. May provide data
	 *		will be injected into the Gameplay Effect via "Set By Caller Magnitudes".
	 * 
	 * @param EffectLevelOverride
	 *		Optional parameter that overrides the level. Useful in situations where you want
	 *		to avoid extra memory lookups since a dynamic value is already available. If set to
	 *		the default value (-1), then the internal level lookup is executed.
	 *		
	 * @return
	 *		True if the Gameplay Effect was successfully. It does not mean that the Out Handle
	 *		will be valid, as Instant Gameplay Effects won't have an Active Handle.
	 */
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Ninja Inventory|GameplayFragments")
	virtual bool ApplyEffect(UNinjaInventoryItem* Item, float EffectLevelOverride = -1.f);

	/**
	 * Removes the Gameplay Effect from the Item's Ability System.
	 *
	 * Attempts to remove the Gameplay Effect from an Active Handle stored in the item.
	 * 
	 * @param Item				Item related to an owner that can provide an Ability System.
	 * @param StacksToRemove	Effect Stacks to remove. Defaults to 1. A value of -1 removes all stacks.
	 * @return					True if an effect was removed, false otherwise.
	 */
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Ninja Inventory|GameplayFragments")
	virtual bool RemoveEffect(UNinjaInventoryItem* Item, int32 StacksToRemove = 1);

	/**
	 * Removes the Gameplay Effect from the Item's Ability System.
	 *
	 * Attempts to remove the Gameplay Effect by the class set in this fragment. You should
	 * not call this without knowing for sure that this Item/Fragment applied the Gameplay Effect,
	 * otherwise you might remove an effect of the same class that was applied somewhere else!
	 *
	 * @param Item				Item related to an owner that can provide an Ability System.
	 * @param StacksToRemove	Effect Stacks to remove. Defaults to 1. A value of -1 removes all stacks.
	 * @return					Effects that were removed by the Effect Query.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Inventory|GameplayFragments")
	virtual int32 RemoveEffectByClass(UNinjaInventoryItem* Item, int32 StacksToRemove = 1);

protected:

	/** Gameplay effect applied and removed along with the Item Instance. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Fragment", NoClear)
	TSubclassOf<UGameplayEffect> EffectClass;

	/** Level used to apply the effect. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Fragment")
	float EffectLevel;

	/**
	 * Creates a Spec Handle for the Effect Class configured in this Fragment.
	 * 
	 * Allows setting the level, in case the value is already available. The default value (-1)
	 * will force the method to obtain the effect level, using the appropriate getter.
	 */
	virtual bool CreateSpecHandleForItem(const UNinjaInventoryItem* Item, FGameplayEffectSpecHandle& OutHandle, float EffectLevelOverride = -1.f) const;

	/**
	 * Optionally applies magnitudes to the Effect Spec Handle that was created.
	 */
	virtual void SetByCallerMagnitudes(const UNinjaInventoryItem* Item, FGameplayEffectSpecHandle& EffectSpecHandle) const;

	/**
	 * Determines an effect level to be used.
	 *
	 * @param Item				Item optionally used to determine the level to be applied.
	 * @param OutEffectLevel	Output Parameter with the level override.
	 * @return					Boolean informing if the value was overriden or not.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Fragment")
	bool DetermineEffectLevel(const UNinjaInventoryItem* Item, UPARAM(DisplayName = "Effect Level") float& OutEffectLevel) const;
	
	/**
	 * Provides Magnitudes that should be applied to the Spec, via data tags.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Fragment")
	void GetMagnitudes(const UNinjaInventoryItem* Item, TMap<FGameplayTag, float>& OutMagnitudes) const;
	
};
