// Ninja Bear Studio Inc., all rights reserved.
#include "NinjaFactions.h"

#if WITH_GAMEPLAY_DEBUGGER
#include "GameplayDebugger.h"
#include "GameplayDebugger/FGameplayDebuggerCategory_Faction.h"
#endif

#define LOCTEXT_NAMESPACE "FNinjaFactionsModule"

void FNinjaFactionsModule::StartupModule()
{
    RegisterGameplayDebuggerCategories();
}

void FNinjaFactionsModule::ShutdownModule()
{
    UnregisterGameplayDebuggerCategories();
}

void FNinjaFactionsModule::RegisterGameplayDebuggerCategories()
{
#if WITH_GAMEPLAY_DEBUGGER
    IGameplayDebugger& GameplayDebuggerModule = IGameplayDebugger::Get();
    GameplayDebuggerModule.RegisterCategory("Factions", IGameplayDebugger::FOnGetCategory::CreateStatic(&FGameplayDebuggerCategory_Faction::MakeInstance), EGameplayDebuggerCategoryState::EnabledInGameAndSimulate);
    GameplayDebuggerModule.NotifyCategoriesChanged();
#endif
}

void FNinjaFactionsModule::UnregisterGameplayDebuggerCategories()
{
#if WITH_GAMEPLAY_DEBUGGER
    if (IGameplayDebugger::IsAvailable())
    {
        IGameplayDebugger& GameplayDebuggerModule = IGameplayDebugger::Get();
        GameplayDebuggerModule.UnregisterCategory("Factions");
        GameplayDebuggerModule.NotifyCategoriesChanged();
    }
#endif
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FNinjaFactionsModule, NinjaFactions)