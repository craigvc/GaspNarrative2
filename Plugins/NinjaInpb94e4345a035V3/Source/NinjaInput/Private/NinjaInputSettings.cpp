// Ninja Bear Studio Inc., all rights reserved.
#include "NinjaInputSettings.h"

UNinjaInputSettings::UNinjaInputSettings()
{
    TrackedEvents = {
        ETriggerEvent::Started,
        ETriggerEvent::Triggered,
        ETriggerEvent::Ongoing,
        ETriggerEvent::Completed,
        ETriggerEvent::Canceled,
    };
    
    bShowScreenDebugMessages = false;
    DebugMessageDuration = 5.f;
    DebugMessageColor = FColor::Emerald;
}
