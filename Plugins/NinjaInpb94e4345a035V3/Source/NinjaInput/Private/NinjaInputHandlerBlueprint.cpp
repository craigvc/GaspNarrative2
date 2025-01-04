// Ninja Bear Studio Inc., all rights reserved.
#include "NinjaInputHandlerBlueprint.h"

UNinjaInputHandlerBlueprint::UNinjaInputHandlerBlueprint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
}

#if WITH_EDITOR
bool UNinjaInputHandlerBlueprint::SupportedByDefaultBlueprintFactory() const
{
    return false;
}
#endif
