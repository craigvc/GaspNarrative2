// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameplayEffectTypes.h"
#include "GameFramework/NinjaInventoryGameplayEffectItemFragment.h"
#include "ItemFragment_GameplayEffect.generated.h"

class UNinjaInventoryManagerComponent;
class UGameplayEffect;

/**
 * Applies a Gameplay Effect when the item is added, removing it later, along with the item.  
 */
UCLASS(DisplayName = "Gameplay Effect")
class NINJAINVENTORYGAMEPLAY_API UItemFragment_GameplayEffect : public UNinjaInventoryGameplayEffectItemFragment
{
	
	GENERATED_BODY()

public:

	UItemFragment_GameplayEffect();

	// -- Begin Item Fragment implementation
	virtual void ApplyFragment(UNinjaInventoryItem* Item) override;
	virtual void RevertFragment(UNinjaInventoryItem* Item) override;
	// -- End Item Fragment implementation

	/**
	 * Provides the Magnitude assigned to a tag. Zero if the provided tag is not registered.
	 * 
	 * The fragment has two ways to overwrite the default value if necessary. First, it can do so
	 * via the "Try Override Default Magnitude Value" function, which can provide either a new value
	 * or the one already defined in the fragment.
	 *
	 * Second, if the item implements the "Item Magnitude Value Interface", it will be invoked and
	 * the value will be the final level of substitution for the magnitude. Therefore, the value is
	 * evaluated as: default < internal override < interface override.
	 * 
	 * @param MagnitudeTag		Gameplay Tag representing the desired data value.
	 * @return					Magnitude value. Always zero if not registered in the fragment.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Fragments")
	float GetMagnitudeValue(const FGameplayTag& MagnitudeTag) const;
	
protected:

	/** If set to true, uses the item level as the effect level, instead of the actual property. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Fragment")
	bool bUseItemLevelAsEffectLevel;
	
	/** Magnitudes set to the Gameplay Effect, via their Data Tags (set by caller). */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Fragment")
	TMap<FGameplayTag, float> EffectMagnitudes;

	virtual void SetByCallerMagnitudes(const UNinjaInventoryItem* Item, FGameplayEffectSpecHandle& EffectSpecHandle) const override;
	virtual bool DetermineEffectLevel_Implementation(const UNinjaInventoryItem* Item, float& OutEffectLevel) const override;
	
	/**
	 * Another option for blueprints or subclasses to provide a customized default magnitude.
	 *
	 * This obviously takes priority over the default value, BUT it will still be overriden
	 * if the owning item implements the appropriate interface, with a proper value.
	 *
	 * @param Item				Access to the item setting a value to a Gameplay Effect.
	 * @param MagnitudeTag		Gameplay Tag representing the desired data value.
	 * @param DefaultValue		Default value, as defined in the fragment.
	 * @return					The overriden magnitude.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Fragment")
	float TryOverrideDefaultMagnitudeValue(const UNinjaInventoryItem* Item, const FGameplayTag& MagnitudeTag, float DefaultValue) const;

#if WITH_EDITOR
public:

	// -- Begin Editor implementation
	virtual bool CanEditChange(const FProperty* InProperty) const override;
	// -- End Editor implementation
	
#endif
};
