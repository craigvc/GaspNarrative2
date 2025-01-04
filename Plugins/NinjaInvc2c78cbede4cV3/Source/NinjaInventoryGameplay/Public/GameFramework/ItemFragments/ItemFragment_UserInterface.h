// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/NinjaInventoryItemFragment.h"
#include "ItemFragment_UserInterface.generated.h"

class UTexture2D;

/**
 * Aspects related to how this item is represented in the User Interface.
 */
UCLASS(DisplayName = "User Interface")
class NINJAINVENTORYGAMEPLAY_API UItemFragment_UserInterface : public UNinjaInventoryItemFragment
{
	
	GENERATED_BODY()

public:

	UItemFragment_UserInterface();

	/**
	 * Provides localized text for this item's name.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Fragments")
	FText GetDisplayName() const;	

	/**
	 * Provides the localized text for this item's type.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Fragments")
	FText GetDisplayType() const;	

	/**
	 * Provides the localized text for this item's description.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Fragments")
	FText GetDescription() const;	

	/**
	 * Provides the texture used to represent this item in the UI.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Fragments")
	UTexture2D* GetIcon() const;	
	
protected:

	/** Localized text for this item's name. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Fragment")
	FText DisplayName;

	/** Localized text for this item's type. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Fragment")
	FText DisplayType;
	
	/** Localized text for this item's description. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Fragment")
	FText Description;
	
	/** Texture used to represent this item in the UI. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Fragment")
	TObjectPtr<UTexture2D> Icon;
	
};
