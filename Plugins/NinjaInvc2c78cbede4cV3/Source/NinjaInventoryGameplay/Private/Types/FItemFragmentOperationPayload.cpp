// Ninja Bear Studio Inc., all rights reserved.
#include "Types/FItemFragmentOperationPayload.h"

#include "NinjaInventoryGameplayTags.h"
#include "GameFramework/NinjaInventoryItem.h"

// Consumable Fragment ----------------------------------------------

bool FInventoryFragmentConsumeOperationPayload::IsConsumeOperation() const
{
	return OperationTag == Tag_Inventory_Item_Operation_Consume;
}

// Container Fragment -----------------------------------------------

bool FInventoryFragmentStorageOperationPayload::IsMoveOperation() const
{
	return OperationTag == Tag_Inventory_Item_Operation_Move
		&& Container != nullptr
		&& Position != INDEX_NONE;
}

bool FInventoryFragmentStorageOperationPayload::IsSwapOperation() const
{
	return OperationTag == Tag_Inventory_Item_Operation_Swap
		&& ItemToSwap != nullptr;
}

// Durability Fragment ----------------------------------------------

bool FInventoryFragmentDurabilityOperationPayload::IsRepairOperation() const
{
	return OperationTag == Tag_Inventory_Item_Operation_Repair;
}

bool FInventoryFragmentDurabilityOperationPayload::IsWearOperation() const
{
	return OperationTag == Tag_Inventory_Item_Operation_Wear;
}

// Equipment Fragment -----------------------------------------------

bool FInventoryFragmentEquipmentOperationPayload::IsActivateOperation() const
{
	return OperationTag == Tag_Inventory_Item_Operation_Activate;
}

bool FInventoryFragmentEquipmentOperationPayload::IsDeactivateOperation() const
{
	return OperationTag == Tag_Inventory_Item_Operation_Deactivate;
}

// Level Fragment ---------------------------------------------------

bool FInventoryFragmentLevelOperationPayload::IsUpgradeOperation() const
{
	return OperationTag == Tag_Inventory_Item_Operation_Upgrade;
}

// Pickup Fragment --------------------------------------------------

bool FInventoryFragmentPickupOperationPayload::IsDropOperation() const
{
	return OperationTag == Tag_Inventory_Item_Operation_Drop;
}

// Stack Fragment ---------------------------------------------------

bool FInventoryFragmentStackOperationPayload::IsCombineOperation() const
{
	return OperationTag == Tag_Inventory_Item_Operation_Combine
		&& IsValid(ItemToCombine);	
}

bool FInventoryFragmentStackOperationPayload::IsSplitOperation() const
{
	return OperationTag == Tag_Inventory_Item_Operation_Split
		&& SplitSize > 0;
}