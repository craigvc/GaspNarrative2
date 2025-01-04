// Ninja Bear Studio Inc., all rights reserved.
#include "Components/NinjaEquipmentReceiverComponent.h"

#include "GameFramework/NinjaEquipment.h"
#include "Net/UnrealNetwork.h"

UNinjaEquipmentReceiverComponent::UNinjaEquipmentReceiverComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
	PrimaryComponentTick.bStartWithTickEnabled = false;
	SetIsReplicatedByDefault(true);
	bCanBeUsedAsEffectCauser = true;
}

void UNinjaEquipmentReceiverComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME_CONDITION(ThisClass, Equipment, COND_InitialOnly);
}

const UNinjaEquipment* UNinjaEquipmentReceiverComponent::GetEquipment_Implementation() const
{
	return Equipment;
}

void UNinjaEquipmentReceiverComponent::SetEquipment_Implementation(const UNinjaEquipment* NewEquipmentInstance)
{
	if (Equipment == nullptr)
	{
		Equipment = NewEquipmentInstance;
	}
}

bool UNinjaEquipmentReceiverComponent::IsEffectCauser_Implementation() const
{
	return bCanBeUsedAsEffectCauser;
}

APawn* UNinjaEquipmentReceiverComponent::GetEquipmentOwner() const
{
	check(IsValid(Equipment));
	return Equipment->GetPawn();
}

