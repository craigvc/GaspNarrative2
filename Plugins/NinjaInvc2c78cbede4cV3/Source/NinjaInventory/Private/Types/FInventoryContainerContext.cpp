// Ninja Bear Studio Inc., all rights reserved.
#include "Types/FInventoryContainerContext.h"

#include "GameFramework/NinjaInventoryContainer.h"

bool FInventoryContainerContext::IsValid() const
{
	return ContainerData != nullptr;
}

bool FInventoryContainerContext::IsFailed() const
{
	return bIsFailed;
}

bool FInventoryContainerContext::IsSuccessful() const
{
	return ContainerData != nullptr
		&& ContainerId.IsValid()
		&& Container != nullptr
		&& bIsFailed == false;
}

bool FInventoryContainerContext::IsValidForLoadOperation() const
{
	return bIsLoadOperation
		&& ContainerId.IsValid()
		&& Container != nullptr
		&& ContainerData != nullptr;
}

bool FInventoryContainerContext::HasContainer() const
{
	return Container != nullptr;
}

void FInventoryContainerContext::MarkLoadOperation()
{
	bIsLoadOperation = true;
}

FGuid FInventoryContainerContext::GetContainerId() const
{
	return ContainerId;
}

void FInventoryContainerContext::SetContainerId(const FGuid NewContainerId)
{
	ContainerId = NewContainerId;
}

const UNinjaInventoryContainerDataAsset* FInventoryContainerContext::GetContainerData() const
{
	return ContainerData;
}

void FInventoryContainerContext::SetContainerData(const UNinjaInventoryContainerDataAsset* NewContainerData)
{
	if (NewContainerData != nullptr)
	{
		ContainerData = NewContainerData;	
	}
}

UNinjaInventoryContainer* FInventoryContainerContext::GetContainer() const
{
	return Container;
}

void FInventoryContainerContext::SetContainer(UNinjaInventoryContainer* NewContainer)
{
	if (NewContainer != nullptr)
	{
		Container = NewContainer;
		ContainerData = Container->GetData();
	}
}

UNinjaInventoryItem* FInventoryContainerContext::GetOwningItem() const
{
	return OwningItem;
}

void FInventoryContainerContext::SetOwningItem(UNinjaInventoryItem* NewOwningItem)
{
	if (NewOwningItem != nullptr)
	{
		OwningItem = NewOwningItem;
	}
}

void FInventoryContainerContext::Reset()
{
	bIsFailed = false;
	bIsLoadOperation = false;
	ContainerData = nullptr;
	Container = nullptr;
	OwningItem = nullptr;
}

void FInventoryContainerContext::MarkAsFailed()
{
	bIsFailed = true;
}

FInventoryContainerContext FInventoryContainerContext::EmptyContext()
{
	FInventoryContainerContext NewContext;
	NewContext.Reset();
	return NewContext;
}
