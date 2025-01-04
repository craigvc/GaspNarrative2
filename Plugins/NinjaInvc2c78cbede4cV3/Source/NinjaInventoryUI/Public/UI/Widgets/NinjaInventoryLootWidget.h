// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "NinjaInventoryCommonActivatableWidget.h"
#include "NinjaInventoryLootWidget.generated.h"

class UNinjaInventoryManagerComponent;

/**
 * A widget used to display loot that has been received by the player's Inventory Manager.
 */
UCLASS(Abstract)
class NINJAINVENTORYUI_API UNinjaInventoryLootWidget : public UNinjaInventoryCommonActivatableWidget
{
	GENERATED_BODY()

public:

	UNinjaInventoryLootWidget();
	
	// -- Begin Widget implementation
	virtual void NativeConstruct() override;
	// -- End Widget implementation

	/**
	 * Initializes the connection with the Inventory Manager backing this Inventory Window.
	 */
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category = "Ninja Inventory|UI|Widgets")
	void InitializeInventory();

	/**
	 * Informs if there's loot to be displayed, in which case the widget should activate.
	 */
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category = "Ninja Inventory|UI|Widgets")
	virtual void SetHasLoot(bool bHasLoot);

protected:

	virtual void InitializeViewModels(UNinjaInventoryManagerComponent* InventoryManager);

	virtual void SetInventoryManagerToViewModel(UObject* Source, UNinjaInventoryManagerComponent* InventoryManager);
	
#if WITH_EDITOR
public:

	virtual const FText GetPaletteCategory() override
		{ return FText::FromString(TEXT("Ninja Inventory")); }

#endif
	
};
