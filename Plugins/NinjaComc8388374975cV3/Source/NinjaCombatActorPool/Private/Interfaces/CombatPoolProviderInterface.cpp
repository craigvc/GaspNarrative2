// Ninja Bear Studio Inc., all rights reserved.
#include "Interfaces/CombatPoolProviderInterface.h"

#include "Components/NinjaCombatActorPoolComponent.h"
#include "GameFramework/Actor.h"

UNinjaCombatActorPoolComponent* ICombatPoolProviderInterface::GetActorPool_Implementation() const
{
	const AActor* SelfActor = Cast<AActor>(this);
	return IsValid(SelfActor) ? SelfActor->FindComponentByClass<UNinjaCombatActorPoolComponent>() : nullptr;	
}
