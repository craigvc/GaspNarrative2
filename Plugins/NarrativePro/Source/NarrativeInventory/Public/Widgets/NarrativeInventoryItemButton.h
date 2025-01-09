// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "Widgets/NarrativeCommonButtonBase.h"
#include "Widgets/NarrativeCommonTextBlock.h"
#include <Components/CheckBox.h>
#include "NarrativeItem.h"
#include "NarrativeInventoryItemButton.generated.h"

/**
 * Base class for items in the inventory. Typically we don't use C++ bases but we want to enable easily supporting multiple button types which BindWidget handles nicely. 
 */
UCLASS()
class NARRATIVEINVENTORY_API UNarrativeInventoryItemButton : public UNarrativeCommonButtonBase
{
	GENERATED_BODY()
	
public:

	//The item that this inventory button has been created for 
	UPROPERTY(BlueprintReadOnly, Category = "Button Text", meta = (ExposeOnSpawn=true))
	TObjectPtr<UNarrativeItem> Item;

	//The inventory widget that we're a child of 
	UPROPERTY(BlueprintReadOnly, Category = "Button Text", meta = (ExposeOnSpawn=true))
	TObjectPtr<class UInventoryWidget> OwnerWidget;

protected:

	//Text block showing the quantity of the item 
	UPROPERTY(BlueprintReadOnly, Category = "Button Text", meta = (BindWidgetOptional))
	TObjectPtr<UNarrativeCommonTextBlock> TextBlock_Quantity;

	//Text block showing the weight of the item 
	UPROPERTY(BlueprintReadOnly, Category = "Button Text", meta = (BindWidgetOptional))
	TObjectPtr<UNarrativeCommonTextBlock> TextBlock_Weight;

};
