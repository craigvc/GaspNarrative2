// Ninja Bear Studio Inc., all rights reserved.
#include "Serialization/NinjaFactionSaveGame.h"

#include "Components/NinjaFactionComponent.h"
#include "Serialization/MemoryReader.h"
#include "Serialization/MemoryWriter.h"
#include "Serialization/NinjaFactionSaveGameArchive.h"

void UNinjaFactionSaveGame::SaveFactions(UNinjaFactionComponent* FactionComponent)
{
	FactionManagerRecord = FactionComponent->GetFactionRecordForSerialization();

	// Add any properties from the inventory marked to be serialized.
	//
	static constexpr bool bIsPersistent = true;
	FMemoryWriter MemoryWriter = FMemoryWriter(FactionManagerRecord.Data, bIsPersistent);
	FNinjaFactionSaveGameArchive Archive = FNinjaFactionSaveGameArchive(MemoryWriter); 
	FactionComponent->Serialize(Archive);	
}

void UNinjaFactionSaveGame::LoadFactions(UNinjaFactionComponent* FactionComponent)
{
	// Load any properties from the inventory that were serialized. 
	//
	static constexpr bool bIsPersistent = true;
	FMemoryReader MemoryReader(FactionManagerRecord.Data, bIsPersistent);
	FNinjaFactionSaveGameArchive Archive = FNinjaFactionSaveGameArchive(MemoryReader); 
	FactionComponent->Serialize(Archive);

	FactionComponent->LoadFactionMemberships(FactionManagerRecord);	
}
