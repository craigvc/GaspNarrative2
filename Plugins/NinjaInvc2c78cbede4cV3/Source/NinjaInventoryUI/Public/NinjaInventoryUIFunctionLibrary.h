// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "NinjaInventoryUIFunctionLibrary.generated.h"

class UViewModel_ItemQuality;
class UNinjaInventoryItem;
class UNinjaInventoryItemViewModel;
class UViewModel_ItemLevel;
class UWidget;

/**
 * Support functions for the Ninja Inventory UI Module. 
 */
UCLASS()
class NINJAINVENTORYUI_API UNinjaInventoryUIFunctionLibrary : public UBlueprintFunctionLibrary
{
	
	GENERATED_BODY()

public:

	/**
	 * Creates an Item View Model, for a specific View Model type, with the backing item already set.
	 *
	 * @param ViewModelClass		Item View Model type to be constructed.
	 * @param Outer					Context where the View Model will be constructed.
	 * @param Item					Item backing the view model.
	 */
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category = "Ninja Inventory|UI", meta = (DeterminesOutputType = ViewModelClass, DefaultToSelf = Outer, ReturnDisplayName = "Item View Model"))
	static UNinjaInventoryItemViewModel* ConstructItemViewModel(UPARAM(meta = (AllowAbstract = false)) TSubclassOf<UNinjaInventoryItemViewModel> ViewModelClass, UWidget* Outer, UNinjaInventoryItem* Item);
	
};
