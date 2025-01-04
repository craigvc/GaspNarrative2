// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "NinjaInventoryDropZoneWidget.generated.h"

class UNinjaInventoryItem;
class UNinjaInventoryDragDropOperation;

/**
 * Defines a drop zone that can handle an Inventory Drop Operation.
 */
UCLASS(DisplayName = "Inventory Drop Zone")
class NINJAINVENTORYUI_API UNinjaInventoryDropZoneWidget : public UUserWidget
{
	
	GENERATED_BODY()

public:

	virtual void NativePreConstruct() override;
	virtual bool NativeOnDrop(const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation) override;

protected:

	/** Determines if items dropped by the player are shown locally or globally. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Drop Zone")
	bool bIsLocalOnly;
	
	/**
	 * Provides the Drop Location in World Space.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Drop Zone")
	FVector GetDropLocationInWorldSpace(const UNinjaInventoryDragDropOperation* Operation) const;

	/**
	 * Determines the drop scope for items.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Drop Zone")
	bool DetermineDropScope(const UNinjaInventoryItem* Item) const;

#if WITH_EDITOR
public:
	
	virtual const FText GetPaletteCategory() override
		{ return FText::FromString(TEXT("Ninja Inventory")); }

#endif
};
