// Ninja Bear Studio Inc., all rights reserved.
#include "Blueprints/NinjaFactionDatabaseBlueprint.h"

UNinjaFactionDatabaseBlueprint::UNinjaFactionDatabaseBlueprint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
}

#if WITH_EDITOR
bool UNinjaFactionDatabaseBlueprint::SupportedByDefaultBlueprintFactory() const
{
    return false;
}
#endif
