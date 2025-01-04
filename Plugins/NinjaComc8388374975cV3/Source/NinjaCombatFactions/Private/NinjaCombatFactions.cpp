// Ninja Bear Studio Inc., all rights reserved.
#include "NinjaCombatFactions.h"
#include "NinjaCombatLog.h"

#define LOCTEXT_NAMESPACE "FNinjaCombatFactionsModule"

void FNinjaCombatFactionsModule::StartupModule()
{
	UE_LOG(LogNinjaCombat, Log, TEXT("Loaded the integration module for Ninja Factions."));
}

void FNinjaCombatFactionsModule::ShutdownModule()
{
}

#undef LOCTEXT_NAMESPACE
IMPLEMENT_MODULE(FNinjaCombatFactionsModule, NinjaCombatFactions)