// Ninja Bear Studio Inc., all rights reserved.
#include "GameFramework/NinjaInventoryContainer.h"

#include "Data/NinjaInventoryContainerDataAsset.h"
#include "Net/UnrealNetwork.h"

UNinjaInventoryContainer::UNinjaInventoryContainer(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	ContainerId = FGuid();
}

void UNinjaInventoryContainer::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	UObject::GetLifetimeReplicatedProps(OutLifetimeProps);
	
	DOREPLIFETIME(ThisClass, ContainerData);
	DOREPLIFETIME(ThisClass, ContainerTags);
}

void UNinjaInventoryContainer::GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const
{
	TagContainer = ContainerTags;
}

const UNinjaInventoryContainerDataAsset* UNinjaInventoryContainer::GetData() const
{
	return ContainerData;
}

UNinjaInventoryManagerComponent* UNinjaInventoryContainer::GetInventoryManager() const
{
	return InventoryManager;
}

void UNinjaInventoryContainer::InitializeContainer(const UNinjaInventoryContainerDataAsset* NewContainerData)
{
	if (!IsValid(ContainerData))
	{
		ContainerData = NewContainerData;
		ContainerTags.AppendTags(ContainerData->GetGameplayTags());
	}
}

void UNinjaInventoryContainer::SetContainerId(const FGuid& NewContainerId)
{
	if (!ContainerId.IsValid())
	{
		ContainerId = NewContainerId;
	}
}

void UNinjaInventoryContainer::SetInventoryManager(UNinjaInventoryManagerComponent* NewInventoryManager)
{
	if (InventoryManager == nullptr)
	{
		InventoryManager = NewInventoryManager;
	}
}
