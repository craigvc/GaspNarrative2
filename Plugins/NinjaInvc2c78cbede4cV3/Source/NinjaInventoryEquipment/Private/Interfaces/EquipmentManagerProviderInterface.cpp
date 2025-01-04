// Ninja Bear Studio Inc., all rights reserved.
#include "Interfaces/EquipmentManagerProviderInterface.h"

#include "Components/NinjaEquipmentManagerComponent.h"
#include "GameFramework/Actor.h"

UNinjaEquipmentManagerComponent* IEquipmentManagerProviderInterface::GetEquipmentManager_Implementation() const
{
	const AActor* SelfActor = Cast<AActor>(this);
	return IsValid(SelfActor) ? SelfActor->FindComponentByClass<UNinjaEquipmentManagerComponent>() : nullptr;
}
