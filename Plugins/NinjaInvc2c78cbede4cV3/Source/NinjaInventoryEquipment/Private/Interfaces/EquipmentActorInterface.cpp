// Ninja Bear Studio Inc., all rights reserved.
#include "Interfaces/EquipmentActorInterface.h"

#include "Components/NinjaEquipmentReceiverComponent.h"
#include "GameFramework/Actor.h"

const UNinjaEquipment* IEquipmentActorInterface::GetEquipment_Implementation() const
{
	const AActor* ActorSelf = Cast<AActor>(this);
	if (IsValid(ActorSelf))
	{
		const UNinjaEquipmentReceiverComponent* Receiver = ActorSelf->FindComponentByClass<UNinjaEquipmentReceiverComponent>();
		if (IsValid(Receiver))
		{
			return Execute_GetEquipment(Receiver);
		}
	}
	
	return nullptr;
}

void IEquipmentActorInterface::SetEquipment_Implementation(const UNinjaEquipment* Equipment)
{
	const AActor* ActorSelf = Cast<AActor>(this);
	if (IsValid(ActorSelf))
	{
		UNinjaEquipmentReceiverComponent* Receiver = ActorSelf->FindComponentByClass<UNinjaEquipmentReceiverComponent>();
		if (IsValid(Receiver))
		{
			return Execute_SetEquipment(Receiver, Equipment);
		}
	}
}

bool IEquipmentActorInterface::IsEffectCauser_Implementation() const
{
	const AActor* ActorSelf = Cast<AActor>(this);
	if (IsValid(ActorSelf))
	{
		const UNinjaEquipmentReceiverComponent* Receiver = ActorSelf->FindComponentByClass<UNinjaEquipmentReceiverComponent>();
		if (IsValid(Receiver))
		{
			return Execute_IsEffectCauser(Receiver);
		}
	}

	// By default, any actor is an effect causer.
	return true;
}
