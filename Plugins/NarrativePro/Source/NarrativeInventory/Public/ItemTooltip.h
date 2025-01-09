//NARRATIVEINVENTORY Project - The Unreal C++ Survival Game Course - Copyright Reuben Ward 2020

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ItemTooltip.generated.h"

/**
 * 
 */
UCLASS()
class NARRATIVEINVENTORY_API UItemTooltip : public UUserWidget
{
	GENERATED_BODY()

public:

	/**The item this tooltip is displaying*/
	UPROPERTY(BlueprintReadOnly, Category = "Tooltip", meta = (ExposeOnSpawn = true))
	class UNarrativeItem* Item;
};
