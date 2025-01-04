// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "NinjaInventoryItemViewModel.h"
#include "ViewModel_ItemQuality.generated.h"

/**
 * Provides details about an item's quality.
 */
UCLASS(BlueprintType, Blueprintable, DisplayName = "Item Quality")
class NINJAINVENTORYUI_API UViewModel_ItemQuality : public UNinjaInventoryItemViewModel
{
	
	GENERATED_BODY()

public:

	UViewModel_ItemQuality();

	void SetQualityTag(FGameplayTag NewQualityTag);
	void SetQualityText(FText NewQualityText);
	void SetQualityColor(FLinearColor NewQualityColor);
	
protected:

	/** The Gameplay Tag representing the quality. Applied to the asset tags too. */
	UPROPERTY(BlueprintReadWrite, FieldNotify, Category = "Inventory View Model", Setter, meta = (Categories = "Inventory.Quality"))
	FGameplayTag QualityTag;
	
	/** Localized text for this item's quality. */
	UPROPERTY(BlueprintReadWrite, FieldNotify, Category = "Inventory View Model", Setter)
	FText QualityText;

	/** A color that represents this quality. */
	UPROPERTY(BlueprintReadWrite, FieldNotify, Category = "Inventory View Model", Setter)
	FLinearColor QualityColor;
	
	// -- Begin View Model implementation
	virtual void InitializeData_Implementation() override;
	virtual void ClearData_Implementation() override;
	// -- End View Model implementation
	
};
