// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "Components/WrapBox.h"
#include "UI/Interfaces/InventoryContainerSlotInterface.h"
#include "NinjaInventoryContainerBoxWidget.generated.h"

class UNinjaInventoryContainerWidget;
struct FNinjaInventoryItemView;

class UUserWidget;
class UNinjaInventoryContainer;
class UNinjaInventoryContainerDataAsset;
class UNinjaInventoryItem;
class UNinjaInventoryManagerComponent;

/**
 * Represents a container, in a wrap-box format.
 */
UCLASS(DisplayName = "Inventory Container Box", meta = (Category = "Ninja Inventory"))
class NINJAINVENTORYUI_API UNinjaInventoryContainerBoxWidget : public UWrapBox, public IInventoryContainerSlotInterface
{
	
	GENERATED_BODY()

public:

	UNinjaInventoryContainerBoxWidget();

	// -- Begin Inventory Container Slot implementation
	virtual void InitializeContainerSlot_Implementation(UUserWidget* ContainerView) override;
	virtual void SetItems_Implementation(const TArray<FNinjaInventoryItemView>& Items) override;
	// -- End Inventory Container Slot implementation

protected:

	/** Determines if the container renders empty slots or only slots occupied by items. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Inventory Container Box")
	bool bFillEmptySlots;

	/**
	 * Adds an item to this container at the desired position.
	 */
	UFUNCTION(BlueprintNativeEvent, BlueprintCosmetic, Category = "Inventory Container Box")
	void AddOrUpdateItem(const FNinjaInventoryItemView& ItemView);

private:

	bool bHasInitializedFromView;
	
	UPROPERTY()
	TObjectPtr<UNinjaInventoryContainerWidget> CurrentContainerView;

	UPROPERTY()
	TObjectPtr<UNinjaInventoryContainer> Container;
	
#if WITH_EDITOR
public:

	virtual const FText GetPaletteCategory() override
		{ return FText::FromString(TEXT("Ninja Inventory")); }

#endif
};
