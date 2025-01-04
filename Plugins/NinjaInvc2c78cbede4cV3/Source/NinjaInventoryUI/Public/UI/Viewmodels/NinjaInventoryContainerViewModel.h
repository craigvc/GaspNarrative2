// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "NinjaInventoryManagerViewModel.h"
#include "NinjaInventoryContainerViewModel.generated.h"

class UNinjaInventoryContainer;

/**
 * Base class for view models exposing containers. 
 */
UCLASS(Abstract, Blueprintable)
class NINJAINVENTORYUI_API UNinjaInventoryContainerViewModel : public UNinjaInventoryManagerViewModel
{
	
	GENERATED_BODY()

public:

	/**
	 * Sets the new container tracked by this view model. 
	 */
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category = "Ninja Inventory|UI|View Model")
	void SetContainer(UNinjaInventoryContainer* NewContainer);

protected:

	/** The container tracked by this view model. */
	UPROPERTY(BlueprintReadOnly, Setter, Category = "Inventory Items")
	TObjectPtr<UNinjaInventoryContainer> Container;
	
};
