// Ninja Bear Studio Inc., all rights reserved.
#include "NinjaCombatInventory.h"
#include "NinjaCombatLog.h"

#define LOCTEXT_NAMESPACE "FNinjaCombatInventoryModule"

void FNinjaCombatInventoryModule::StartupModule()
{
	UE_LOG(LogNinjaCombat, Log, TEXT("Loaded the integration module for Ninja Inventory."));
}

void FNinjaCombatInventoryModule::ShutdownModule()
{
}

#undef LOCTEXT_NAMESPACE
IMPLEMENT_MODULE(FNinjaCombatInventoryModule, NinjaCombatInventory)