// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UObject/Interface.h"
#include "ItemMagnitudeProviderInterface.generated.h"

class UNinjaInventoryItem;

UINTERFACE(MinimalAPI, Blueprintable)
class UItemMagnitudeValueInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * Allows an object to provide magnitude values for Gameplay Effects.
 */
class NINJAINVENTORY_API IItemMagnitudeValueInterface
{
	
	GENERATED_BODY()

public:

	/**
	 * Allows an object to provide more elaborate magnitude values to a data tag.
	 *
	 * @param Item				Item that might be used to retrieve values.
	 * @param DataTag			The Data Tag used in a "SetByCaller" gameplay effect operation.
	 * @param DefaultValue		A default value provided, if no actual value is provided.
	 * @return					The magnitude to be applied to the Gameplay Effect.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Item Magnitude Value")
	float GetMagnitudeForDataTag(const UNinjaInventoryItem* Item, const FGameplayTag& DataTag, float DefaultValue) const;
	virtual float GetMagnitudeForDataTag_Implementation(const UNinjaInventoryItem* Item, const FGameplayTag& DataTag, float DefaultValue) const;

	/**
	 * Aggregates all values and provides them in an unified map.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Item Magnitude Value")
	TMap<FGameplayTag, float> GetAllMagnitudeValues(const UNinjaInventoryItem* Item) const;
	virtual TMap<FGameplayTag, float> GetAllMagnitudeValues_Implementation(const UNinjaInventoryItem* Item) const;
	
};