// Ninja Bear Studio Inc., all rights reserved.
#include "Data/NinjaInventoryItemDataAsset.h"

#include "NinjaInventorySettings.h"
#include "NinjaInventoryTags.h"
#include "GameFramework/NinjaInventoryItem.h"
#include "GameFramework/NinjaInventoryItemFragment.h"
#include "Interfaces/Aspects/OperableItemInterface.h"

const FPrimaryAssetType	UNinjaInventoryItemDataAsset::DataAssetType = INVENTORY_ITEM_DATA_ASSET_NAME;

UNinjaInventoryItemDataAsset::UNinjaInventoryItemDataAsset()
{
	DefaultInstanceClass = GetDefault<UNinjaInventorySettings>()->DefaultItemInstance;

	GameplayTags = FGameplayTagContainer::EmptyContainer;
	GameplayTags.AddTagFast(Tag_Inventory_Item);	
}

FPrimaryAssetId UNinjaInventoryItemDataAsset::GetPrimaryAssetId() const
{
	return FPrimaryAssetId(DataAssetType, GetFName());
}

float UNinjaInventoryItemDataAsset::GetMagnitudeForDataTag_Implementation(const UNinjaInventoryItem* Item, const FGameplayTag& DataTag, const float DefaultValue) const
{
	// Not really recommended to get each value individually as that requires us to going through 
	// each fragment and collecting them. Could be an expensive operation, especially if the caller
	// does that for many Data Tags. Best to collect all of them at once and return the Map instead.
	//
	for (const UNinjaInventoryItemFragment* Fragment : Fragments)
	{
		if (Fragment->Implements<UItemMagnitudeValueInterface>())
		{
			return Execute_GetMagnitudeForDataTag(Fragment, Item, DataTag, DefaultValue);
		}
	}

	return DefaultValue;
}

TMap<FGameplayTag, float> UNinjaInventoryItemDataAsset::GetAllMagnitudeValues_Implementation(const UNinjaInventoryItem* Item) const
{
	TMap<FGameplayTag, float> Consolidated;
	
	for (const UNinjaInventoryItemFragment* Fragment : Fragments)
	{
		if (Fragment->Implements<UItemMagnitudeValueInterface>())
		{
			TMap<FGameplayTag, float> Values = Execute_GetAllMagnitudeValues(Fragment, Item);
			Consolidated.Append(Values);
		}
	}

	return Consolidated;
}

FGameplayTagContainer UNinjaInventoryItemDataAsset::GetGameplayTags() const
{
	FGameplayTagContainer AllTags = GameplayTags;
	
	for (const UNinjaInventoryItemFragment* Fragment : Fragments)
	{
		if (Fragment && !Fragment->GetItemTags().IsEmpty())
		{
			AllTags.AppendTags(Fragment->GetItemTags());
		}
	}

	return AllTags;
}

FGameplayTagContainer UNinjaInventoryItemDataAsset::GetSupportedOperations() const
{
	FGameplayTagContainer Tags;
	
	TArray<UNinjaInventoryItemFragment*> OperableFragments = FindFragmentsByInterface(UOperableItemInterface::StaticClass());
	for (const UNinjaInventoryItemFragment* Fragment : OperableFragments)
	{
		const IOperableItemInterface* Operable = Cast<IOperableItemInterface>(Fragment);
		FGameplayTagContainer SupportedOperationTags = Operable->GetSupportedOperationTags();
		Tags.AppendTags(SupportedOperationTags);
	}

	return Tags;
}

TSubclassOf<UNinjaInventoryItem> UNinjaInventoryItemDataAsset::GetDefaultInstanceClass() const
{
	return DefaultInstanceClass;
}

bool UNinjaInventoryItemDataAsset::HasFragment(const UNinjaInventoryItemFragment* Fragment) const
{
	return Fragments.Contains(Fragment);
}

UNinjaInventoryItemFragment* UNinjaInventoryItemDataAsset::FindFragmentByClass(const TSubclassOf<UNinjaInventoryItemFragment> FragmentClass) const
{
	if (FragmentClass != nullptr)
	{
		for (UNinjaInventoryItemFragment* Fragment : Fragments)
		{
			if (Fragment && Fragment->GetClass() == FragmentClass)
			{
				return Fragment;
			}
		}
	}

	return nullptr;
}

UNinjaInventoryItemFragment* UNinjaInventoryItemDataAsset::FindFragmentByInterface(const TSubclassOf<UInterface> FragmentInterface) const
{
	if (FragmentInterface != nullptr)
	{
		for (UNinjaInventoryItemFragment* Fragment : Fragments)
		{
			if (Fragment && Fragment->GetClass()->ImplementsInterface(FragmentInterface))
			{
				return Fragment;
			}
		}
	}

	return nullptr;
}

TArray<UNinjaInventoryItemFragment*> UNinjaInventoryItemDataAsset::FindFragmentsByInterface(TSubclassOf<UInterface> FragmentInterface) const
{
	return Fragments.FilterByPredicate([FragmentInterface](const UNinjaInventoryItemFragment* Fragment)
		{ return Fragment->GetClass()->ImplementsInterface(FragmentInterface); });
}

void UNinjaInventoryItemDataAsset::InitializeFragments(UNinjaInventoryItem* Item) const
{
	if (IsValid(Item) && Item->OwnerHasAuthority())
	{
		for (UNinjaInventoryItemFragment* Fragment : Fragments)
		{
			if (Fragment != nullptr)
			{
				Fragment->InitializeFragment(Item);
			}
		}	
	}
}

void UNinjaInventoryItemDataAsset::ApplyFragments(UNinjaInventoryItem* Item) const
{
	if (IsValid(Item))
	{
		for (UNinjaInventoryItemFragment* Fragment : Fragments)
		{
			if (Fragment != nullptr)
			{
				Fragment->ApplyFragment(Item);
			}
		}	
	}
}

void UNinjaInventoryItemDataAsset::RevertFragments(UNinjaInventoryItem* Item) const
{
	if (IsValid(Item))
	{
		for (UNinjaInventoryItemFragment* Fragment : Fragments)
		{
			if (Fragment != nullptr)
			{
				Fragment->RevertFragment(Item);
				Item->RemoveFragmentMemory(Fragment->GetClass());
			}
		}	
	}
}

