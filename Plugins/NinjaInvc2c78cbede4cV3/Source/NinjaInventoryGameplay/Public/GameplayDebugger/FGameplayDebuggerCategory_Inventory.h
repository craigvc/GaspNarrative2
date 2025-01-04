// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"

#if WITH_GAMEPLAY_DEBUGGER
#include "GameplayDebuggerCategory.h"

class APlayerController;
class UNinjaInventoryManagerComponent;

/**
 * Debugger Category for the current Inventory Items.
 * 
 * By default, will organize items in their containers and show their most important fragment
 * configurations such as the Stack, Container and Position, Equipment state, etc.
 * 
 * Based on the Abilities Debugger Category (FGameplayDebuggerCategory_Abilities).
 */
class FGameplayDebuggerCategory_Inventory : public FGameplayDebuggerCategory
{
	
public:

	FGameplayDebuggerCategory_Inventory();

	// -- Begin Gameplay Debugger Category implementation
	static TSharedRef<FGameplayDebuggerCategory> MakeInstance();
	virtual void DrawData(APlayerController* OwnerPC, FGameplayDebuggerCanvasContext& CanvasContext) override;
	// -- End Gameplay Debugger Category implementation

protected:

	void ToggleDefaultContainers();
	void ToggleEquipmentContainers();
	void ToggleLootableContainers();
	void ToggleEmptyContainers();
	void ToggleItemDetails();

	virtual void DrawInventoryItems(APlayerController* OwnerPC, FGameplayDebuggerCanvasContext& CanvasContext,
		const UNinjaInventoryManagerComponent* InventoryManager);

private:

	bool bShowEquipmentContainers = true;
	bool bShowDefaultContainers = true;
	bool bShowLootableContainers = true;
	bool bShowEmptyContainers = true;
	bool bShowItemDetails = false;
	float LastDrawDataEndSize = 0.f;
	
};
#endif
