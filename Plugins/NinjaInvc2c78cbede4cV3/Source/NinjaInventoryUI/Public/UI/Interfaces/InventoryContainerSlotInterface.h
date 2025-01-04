// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "InventoryContainerSlotInterface.generated.h"

struct FNinjaInventoryItemView;

class UNinjaInventoryContainer;
class UNinjaInventoryManagerComponent;

UINTERFACE(MinimalAPI)
class UInventoryContainerSlotInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * A widget or component added to a container slot
 */
class NINJAINVENTORYUI_API IInventoryContainerSlotInterface
{
	
	GENERATED_BODY()

public:
	
	/**
	 * Initializes the widget or component.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Inventory Container Slot Interface")
	void InitializeContainerSlot(UUserWidget* ContainerView);

	/**
	 * Sets new items to the container.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Inventory Container Slot Interface")
	void SetItems(const TArray<FNinjaInventoryItemView>& Items);
	
};