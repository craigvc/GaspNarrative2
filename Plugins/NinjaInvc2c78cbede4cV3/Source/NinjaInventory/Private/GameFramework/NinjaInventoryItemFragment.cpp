// Ninja Bear Studio Inc., all rights reserved.
#include "GameFramework/NinjaInventoryItemFragment.h"

#include "NinjaInventoryLog.h"
#include "Data/NinjaInventoryItemDataAsset.h"
#include "GameFramework/NinjaInventoryItem.h"
#include "Types/FInventoryFragmentMemory.h"

UNinjaInventoryItemFragment::UNinjaInventoryItemFragment()
{
	ItemTags = FGameplayTagContainer::EmptyContainer;
	OperationTags = FGameplayTagContainer::EmptyContainer;
}

bool UNinjaInventoryItemFragment::ItemHasFragment(const UNinjaInventoryItem* Item) const
{
	return IsValid(Item) && Item->HasFragment(this);
}

bool UNinjaInventoryItemFragment::ItemHasAuthority(const UNinjaInventoryItem* Item)
{
	return IsValid(Item) && Item->OwnerHasAuthority();
}

void UNinjaInventoryItemFragment::InitializeFragment(UNinjaInventoryItem* Item)
{
	if (!IsValid(Item))
	{
		INVENTORY_LOG(Warning, "Invalid item provided to fragment!");
		return;
	}

	const UNinjaInventoryItemDataAsset* Data = Item->GetData();
	if (!IsValid(Data))
	{
		INVENTORY_LOG_ARGS(Warning, "Item '%s' does not have an Item Data Asset!", *GetNameSafe(Data));
		return;
	}
	
	if (Item->HasInitializedFragments())
	{
		INVENTORY_LOG_ARGS(Warning, "Fragment already initialized for item '%s'!", *GetNameSafe(Data));
		return;
	}

	if (!Item->OwnerHasAuthority())
	{
		INVENTORY_LOG_ARGS(Warning, "Item '%s' does not have network authority!", *GetNameSafe(Data));
		return;
	}

	INVENTORY_LOG_ARGS(Verbose, "Initializing Fragment for item '%s'.", *GetNameSafe(Data));
	OnInitializeFragment(Item);
}

void UNinjaInventoryItemFragment::OnInitializeFragment_Implementation(UNinjaInventoryItem* Item)
{
}

void UNinjaInventoryItemFragment::ApplyFragment(UNinjaInventoryItem* Item)
{
	if (!IsValid(Item))
	{
		INVENTORY_LOG(Warning, "Invalid item provided to fragment!");
		return;
	}

	const UNinjaInventoryItemDataAsset* Data = Item->GetData();
	if (!IsValid(Data))
	{
		INVENTORY_LOG_ARGS(Warning, "Item '%s' does not have an Item Data Asset!", *GetNameSafe(Data));
		return;
	}	

	if (Item->HasAppliedFragments())
	{
		
		INVENTORY_LOG_ARGS(Warning, "Fragment already applied to item '%s'!", *GetNameSafe(Data));
		return;
	}

	INVENTORY_LOG_ARGS(Verbose, "Initializing Fragment on item '%s'.", *GetNameSafe(Data));
	OnApplyFragment(Item);
}

void UNinjaInventoryItemFragment::OnApplyFragment_Implementation(UNinjaInventoryItem* Item)
{
}

void UNinjaInventoryItemFragment::RevertFragment(UNinjaInventoryItem* Item)
{
	if (!IsValid(Item))
	{
		INVENTORY_LOG(Warning, "Invalid item provided to fragment.");
		return;
	}

	const UNinjaInventoryItemDataAsset* Data = Item->GetData();
	if (!IsValid(Data))
	{
		INVENTORY_LOG_ARGS(Warning, "Item '%s' does not have an Item Data Asset!", *GetNameSafe(Data));
		return;
	}	

	if (!Item->HasAppliedFragments())
	{
		INVENTORY_LOG_ARGS(Warning, "Fragment was not applied to item '%s'.", *GetNameSafe(Data));
		return;
	}

	INVENTORY_LOG_ARGS(Verbose, "Removing Fragment from item '%s'.", *GetNameSafe(Data));
	OnRevertFragment(Item);
}

void UNinjaInventoryItemFragment::OnRevertFragment_Implementation(UNinjaInventoryItem* Item)
{
}

void UNinjaInventoryItemFragment::HandleMemoryCreated_Implementation(UNinjaInventoryItem* Item, TInstancedStruct<FInventoryFragmentMemory>& FragmentMemory)
{
}

void UNinjaInventoryItemFragment::HandleMemoryUpdated_Implementation(UNinjaInventoryItem* Item, TInstancedStruct<FInventoryFragmentMemory>& FragmentMemory)
{
}

void UNinjaInventoryItemFragment::HandleMemoryRemoved_Implementation(UNinjaInventoryItem* Item)
{
}

UScriptStruct* UNinjaInventoryItemFragment::GetPayloadStruct() const
{
	// This should be extended by each class.
	return nullptr;
}

bool UNinjaInventoryItemFragment::EvaluateOperation(const TInstancedStruct<FInventoryFragmentPayload>& Payload) const
{
	if (Payload.GetScriptStruct() != GetPayloadStruct())
	{
		const FString ReceivedStructType = GetNameSafe(Payload.GetScriptStruct());
		const FString ExpectedStructType = GetNameSafe(GetPayloadStruct());
		
		INVENTORY_LOG_ARGS(Verbose, "Operation blocked: Invalid payload struct %s, expecting %s", * ReceivedStructType, *ExpectedStructType);
		return false;
	}

	const FInventoryFragmentPayload& OperationPayload = Payload.Get<FInventoryFragmentPayload>();
	if (!OperationTags.HasTagExact(OperationPayload.OperationTag))
	{
		INVENTORY_LOG(Verbose, "Operation blocked: Invalid operation tag.");
		return false;
	}

	if (!IsValid(OperationPayload.Item))
	{
		INVENTORY_LOG(Verbose, "Operation blocked: Invalid item in payload.");
		return false;
	}

	if (!OnEvaluateOperation(Payload))
	{
		INVENTORY_LOG(Verbose, "Operation blocked: Custom evaluation failed.");
		return false;
	}
	
	return true;
}

bool UNinjaInventoryItemFragment::OnEvaluateOperation_Implementation(const TInstancedStruct<FInventoryFragmentPayload>& Payload) const
{
	return true;
}

void UNinjaInventoryItemFragment::PerformOperation(const TInstancedStruct<FInventoryFragmentPayload>& Payload)
{
	OnPerformOperation(Payload);
}

void UNinjaInventoryItemFragment::OnPerformOperation_Implementation(const TInstancedStruct<FInventoryFragmentPayload>& Payload)
{
}
