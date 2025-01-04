// Ninja Bear Studio Inc., all rights reserved.
#include "Interfaces/FactionMemberInterface.h"

#include "Components/NinjaFactionComponent.h"

UNinjaFactionComponent* IFactionMemberInterface::GetFactionComponent_Implementation() const
{
    const TObjectPtr<const AActor> ActorSelf = Cast<AActor>(this);
    if (IsValid(ActorSelf))
    {
        return ActorSelf->FindComponentByClass<UNinjaFactionComponent>();
    }
    
    return nullptr;
}
