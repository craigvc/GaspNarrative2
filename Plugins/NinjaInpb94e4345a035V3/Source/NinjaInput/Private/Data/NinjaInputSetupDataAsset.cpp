// Ninja Bear Studio Inc., all rights reserved.
#include "Data/NinjaInputSetupDataAsset.h"

#include "NinjaInputHandler.h"
#include "Data/NinjaInputSetupDataValidator.h"

UNinjaInputSetupDataAsset::UNinjaInputSetupDataAsset()
{
    Priority = 0;
}

bool UNinjaInputSetupDataAsset::HasCompatibleInputHandler(const UInputAction* InputAction,
    const ETriggerEvent& TriggerEvent) const
{
    return InputHandlers.ContainsByPredicate([InputAction, TriggerEvent](const UNinjaInputHandler* Handler)
        { return IsValid(Handler) && Handler->CanHandle(TriggerEvent, InputAction); });
}

#if WITH_EDITOR
EDataValidationResult UNinjaInputSetupDataAsset::IsDataValid(FDataValidationContext& Context) const
{
    return FNinjaInputSetupDataValidator::ValidateInputSetupData(this, Context);
}
#endif
