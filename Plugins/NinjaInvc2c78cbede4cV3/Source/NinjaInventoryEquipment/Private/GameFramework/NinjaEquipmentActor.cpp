// Ninja Bear Studio Inc., all rights reserved.
#include "GameFramework/NinjaEquipmentActor.h"

#include "GameFramework/NinjaEquipment.h"
#include "Net/UnrealNetwork.h"

ANinjaEquipmentActor::ANinjaEquipmentActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	bReplicates = true;
	bCanBeUsedAsEffectCauser = false;
}

void ANinjaEquipmentActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME_CONDITION(ThisClass, Equipment, COND_InitialOnly);
}

const UNinjaEquipment* ANinjaEquipmentActor::GetEquipment_Implementation() const
{
	return Equipment;
}

void ANinjaEquipmentActor::SetEquipment_Implementation(const UNinjaEquipment* NewEquipmentInstance)
{
	if (Equipment == nullptr)
	{
		Equipment = NewEquipmentInstance;
	}
}

bool ANinjaEquipmentActor::IsEffectCauser_Implementation() const
{
	return bCanBeUsedAsEffectCauser;
}

APawn* ANinjaEquipmentActor::GetEquipmentOwner() const
{
	check(IsValid(Equipment));
	return Equipment->GetPawn();
}
