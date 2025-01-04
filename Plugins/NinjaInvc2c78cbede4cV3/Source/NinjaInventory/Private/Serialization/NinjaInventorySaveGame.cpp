// Ninja Bear Studio Inc., all rights reserved.
#include "Serialization/NinjaInventorySaveGame.h"

#include "Components/NinjaInventoryManagerComponent.h"
#include "Serialization/NinjaInventorySaveGameArchive.h"
#include "Serialization/MemoryReader.h"
#include "Serialization/MemoryWriter.h"

void UNinjaInventorySaveGame::SaveInventory(UNinjaInventoryManagerComponent* InventoryManager)
{
	InventoryRecord = InventoryManager->GetInventoryRecordForSerialization();

	// Add any properties from the inventory marked to be serialized.
	//
	static constexpr bool bIsPersistent = true;
	FMemoryWriter MemoryWriter = FMemoryWriter(InventoryRecord.Data, bIsPersistent);
	FNinjaInventorySaveGameArchive Archive = FNinjaInventorySaveGameArchive(MemoryWriter); 
	InventoryManager->Serialize(Archive);
}

void UNinjaInventorySaveGame::LoadInventory(UNinjaInventoryManagerComponent* InventoryManager)
{
	// Load any properties from the inventory that were serialized. 
	//
	static constexpr bool bIsPersistent = true;
	FMemoryReader MemoryReader(InventoryRecord.Data, bIsPersistent);
	FNinjaInventorySaveGameArchive Archive = FNinjaInventorySaveGameArchive(MemoryReader); 
	InventoryManager->Serialize(Archive);

	InventoryManager->LoadInventory(InventoryRecord);
}
