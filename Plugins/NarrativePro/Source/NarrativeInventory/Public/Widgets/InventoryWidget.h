// Copyright Narrative Tools 2022. 

#pragma once

#include "CoreMinimal.h"
#include "NarrativeActivatableWidget.h"
#include "InventoryWidget.generated.h"

/**
 * Inventory widgets use this as a base class - the looting menu, player inventory, etc. 
 */
UCLASS()
class NARRATIVEINVENTORY_API UInventoryWidget : public UNarrativeActivatableWidget
{
	GENERATED_BODY()
	
};
