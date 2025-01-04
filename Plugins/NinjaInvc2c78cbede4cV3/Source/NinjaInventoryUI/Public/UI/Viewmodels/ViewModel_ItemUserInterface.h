// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "NinjaInventoryItemViewModel.h"
#include "ViewModel_ItemUserInterface.generated.h"

class UTexture2D;

/**
 * Provides user interface information about an item.
 */
UCLASS(BlueprintType, Blueprintable, DisplayName = "Item User Interface")
class NINJAINVENTORYUI_API UViewModel_ItemUserInterface : public UNinjaInventoryItemViewModel
{
	
	GENERATED_BODY()

public:

	UViewModel_ItemUserInterface();

	void SetDisplayName(const FText& NewDisplayName);
	void SetDisplayType(const FText& NewDisplayType);
	void SetDescription(const FText& NewDescription);
	void SetIcon(UTexture2D* NewIcon);
	void SetDefaultIcon(UTexture2D* NewDefaultIcon);
	
protected:

	/** Title of the item, as defined in the fragment. */
	UPROPERTY(BlueprintReadWrite, FieldNotify, Category = "Inventory View Model", Setter)
	FText DisplayName;

	/** Type of the item, as defined in the fragment. */
	UPROPERTY(BlueprintReadWrite, FieldNotify, Category = "Inventory View Model", Setter)
	FText DisplayType;
	
	/** Description of the item, as defined in the fragment. */
	UPROPERTY(BlueprintReadWrite, FieldNotify, Category = "Inventory View Model", Setter)
	FText Description;
	
	/** Icon used to represent this inventory item, as per the User Interface fragment. */
	UPROPERTY(BlueprintReadWrite, FieldNotify, Category = "Inventory View Model", Setter)
	TObjectPtr<UTexture2D> Icon;

	/** Default Icon used to represent this inventory item when no instance is set. */
	UPROPERTY(BlueprintReadWrite, FieldNotify, Category = "Inventory View Model", Setter)
	TObjectPtr<UTexture2D> DefaultIcon;
	
	// -- Begin View Model implementation
	virtual void InitializeData_Implementation() override;
	virtual void ClearData_Implementation() override;
	// -- End View Model implementation

};
