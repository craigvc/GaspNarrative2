// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "UI/Interfaces/InventoryWindowAwareInterface.h"
#include "NinjaInventoryCommonWidget.generated.h"

class UNinjaInventoryManagerComponent;
class UNinjaInventoryWindowWidget;

/**
 * Base widget with basic Common UI elements.
 */
UCLASS(Abstract)
class NINJAINVENTORYUI_API UNinjaInventoryCommonWidget : public UCommonUserWidget, public IInventoryWindowAwareInterface
{
	
	GENERATED_BODY()

public:

	// -- Begin Inventory Window Aware implementation
	virtual void SetInventoryWindowWidget_Implementation(UNinjaInventoryWindowWidget* InventoryWindowWidget) override;
	// -- End Inventory Window Aware implementation

	/**
	 * Provides the Inventory Window hosting this widget.
	 */
	UFUNCTION(BlueprintPure, BlueprintCosmetic, Category = "Ninja Inventory|UI|Widgets")
	UNinjaInventoryWindowWidget* GetInventoryWindow() const;

	/**
	 * Provides the Inventory Manager assigned to the Inventory Window.
	 */
	UFUNCTION(BlueprintPure, BlueprintCosmetic, Category = "Ninja Inventory|UI|Widgets")
	UNinjaInventoryManagerComponent* GetInventoryManager() const;

protected:

	/**
	 * Informs this widget that an Inventory Window has been set. 
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Inventory Common Widget")
	void HandleInventoryWindowSet();
	
private:

	/** Inventory Window parent to this widget. */
	TWeakObjectPtr<UNinjaInventoryWindowWidget> InventoryWindowWidgetPtr;
	
};
