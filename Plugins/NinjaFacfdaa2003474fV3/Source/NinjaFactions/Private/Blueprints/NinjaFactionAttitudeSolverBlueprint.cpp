// Ninja Bear Studio Inc., all rights reserved.
#include "Blueprints/NinjaFactionAttitudeSolverBlueprint.h"

UNinjaFactionAttitudeSolverBlueprint::UNinjaFactionAttitudeSolverBlueprint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
}

#if WITH_EDITOR
bool UNinjaFactionAttitudeSolverBlueprint::SupportedByDefaultBlueprintFactory() const
{
    return false;
}
#endif
