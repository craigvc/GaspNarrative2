// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "NinjaInventoryManagerViewModel.h"
#include "ViewModel_InventoryLayout.generated.h"

/**
 * Provides information about the layout used for the inventory.
 */
UCLASS(BlueprintType, DisplayName = "Inventory Layout")
class NINJAINVENTORYUI_API UViewModel_InventoryLayout : public UNinjaInventoryManagerViewModel
{
	
	GENERATED_BODY()

public:

	UViewModel_InventoryLayout();

	UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category = "Ninja Inventory|UI|View Model")
	void SetDisplayName(FText NewDisplayName);
	
protected:

	/** The title assigned to the inventory layout. */
	UPROPERTY(BlueprintReadWrite, FieldNotify, Setter, Category = "Inventory Layout")
	FText DisplayName;

	// -- Begin View Model implementation
	virtual void InitializeData_Implementation() override;
	virtual void ClearData_Implementation() override;
	// -- End View Model implementation
	
};
