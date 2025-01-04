// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/NinjaInventoryItemFragment.h"
#include "Types/FInventoryItemQualityMappingTableRow.h"
#include "ItemFragment_Quality.generated.h"

/**
 * Denotes the quality of an item.
 */
UCLASS(DisplayName = "Quality")
class NINJAINVENTORYGAMEPLAY_API UItemFragment_Quality : public UNinjaInventoryItemFragment
{
	
	GENERATED_BODY()

public:

	UItemFragment_Quality();

	/**
	 * Provides the Gameplay Tag representing the item's quality.
	 * Matches the Quality Table configured in the project.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Fragments")
	FGameplayTag GetQualityTag() const;

	/**
	 * Provides the localized text describing the item's quality.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Fragments")
	FText GetQualityText() const;

	/**
	 * Provides the color that represents the item's quality.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Fragments")
	FLinearColor GetQualityColor() const;
	
protected:

	/** The Gameplay Tag representing the quality. Applied to the asset tags too. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Fragment", meta = (Categories = "Inventory.Item.Quality"))
	FGameplayTag QualityTag;
	
	/** Localized text for this item's quality. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Fragment")
	FText QualityText;

	/** A color that represents this quality. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Fragment")
	FLinearColor QualityColor;

private:

	/** Control flag to determine if this fragment has a valid quality tag. */
	bool bFoundQualityMapping;

	/**
	 * Refreshes data for the current Quality Tag.
	 */
	void RefreshQualityMapping();
	
	/**
	 * Finds an appropriate mapping row for this fragment's quality tag.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Fragments")
	static bool FindQualityMapping(const FGameplayTag& Tag, FInventoryItemQualityMappingTableRow& OutRow);
	
#if WITH_EDITOR
public:
	
	// -- Begin Editor implementation
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
	virtual bool CanEditChange(const FProperty* InProperty) const override;
	// -- End Editor implementation
	
#endif
};
