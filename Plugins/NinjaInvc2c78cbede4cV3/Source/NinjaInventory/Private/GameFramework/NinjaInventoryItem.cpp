// Ninja Bear Studio Inc., all rights reserved.
#include "GameFramework/NinjaInventoryItem.h"

#include "NinjaInventoryLog.h"
#include "Components/NinjaInventoryManagerComponent.h"
#include "Data/NinjaInventoryItemDataAsset.h"
#include "GameFramework/NinjaInventoryItemFragment.h"
#include "Net/UnrealNetwork.h"
#include "Types/FInventoryDefaultItemMemory.h"
#include "Types/FInventoryStoredFragmentMemory.h"

UNinjaInventoryItem::UNinjaInventoryItem(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
	, FragmentMemoryList(this)
{
	bHasInitializedFragments = false;
	bHasAppliedFragments = false;
	ItemId = FGuid();
}

void UNinjaInventoryItem::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ThisClass, bHasInitializedFragments);
	DOREPLIFETIME(ThisClass, ItemId);
	DOREPLIFETIME(ThisClass, ItemData);
	DOREPLIFETIME(ThisClass, ItemTags);
	DOREPLIFETIME(ThisClass, FragmentMemoryList);
	DOREPLIFETIME(ThisClass, InventoryManager);
}

void UNinjaInventoryItem::GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const
{
	TagContainer = ItemTags;
}

void UNinjaInventoryItem::AddGameplayTag(const FGameplayTag Tag)
{
	ItemTags.AddTag(Tag);
}

void UNinjaInventoryItem::RemoveGameplayTag(const FGameplayTag Tag)
{
	ItemTags.RemoveTag(Tag);
}

void UNinjaInventoryItem::GetSupportedOperations(FGameplayTagContainer& TagContainer) const
{
	TagContainer.Reset();
	
	if (IsValid(ItemData))
	{
		const FGameplayTagContainer OperationTags = ItemData->GetSupportedOperations(); 
		TagContainer.AppendTags(OperationTags);
	}
}

void UNinjaInventoryItem::InitializeItem(const UNinjaInventoryItemDataAsset* NewItemDefinition)
{
	if (!IsValid(ItemData) && IsValid(NewItemDefinition))
	{
		ItemData = NewItemDefinition;
		ItemTags.AppendTags(ItemData->GetGameplayTags());
	}	
}

void UNinjaInventoryItem::SetItemId(const FGuid& NewItemId)
{
	if (!ItemId.IsValid())
	{
		ItemId = NewItemId;
	}
}

UNinjaInventoryManagerComponent* UNinjaInventoryItem::GetInventoryManager() const
{
	return InventoryManager;
}

UAbilitySystemComponent* UNinjaInventoryItem::GetAbilitySystem() const
{
	if (IsValid(InventoryManager))
	{
		return InventoryManager->GetAbilitySystemComponent();
	}

	return nullptr;
}

void UNinjaInventoryItem::SetInventoryManager(UNinjaInventoryManagerComponent* NewInventoryManager)
{
	InventoryManager = NewInventoryManager;
}

const UNinjaInventoryItemDataAsset* UNinjaInventoryItem::GetData() const
{
	return ItemData;
}

bool UNinjaInventoryItem::HasSameData(const UNinjaInventoryItem* OtherItem) const
{
	if (IsValid(OtherItem))
	{
		return GetData() == OtherItem->GetData();
	}

	return false;
}

bool UNinjaInventoryItem::HasFragment(const UNinjaInventoryItemFragment* Fragment) const
{
	return IsValid(ItemData) && ItemData->HasFragment(Fragment);
}

bool UNinjaInventoryItem::OwnerHasAuthority() const
{
	return IsValid(InventoryManager) && InventoryManager->OwnerHasAuthority();
}

UNinjaInventoryItemFragment* UNinjaInventoryItem::FindFragmentByClass(const TSubclassOf<UNinjaInventoryItemFragment> FragmentClass) const
{
	check(IsValid(ItemData));
	if (FragmentClass != nullptr)
	{
		return ItemData->FindFragmentByClass(FragmentClass);
	}

	return nullptr;
}

UNinjaInventoryItemFragment* UNinjaInventoryItem::FindFragmentByInterface(const TSubclassOf<UInterface> FragmentInterface) const
{
	check(IsValid(ItemData));
	if (FragmentInterface != nullptr)
	{
		return ItemData->FindFragmentByInterface(FragmentInterface);
	}

	return nullptr;
}

TArray<UNinjaInventoryItemFragment*> UNinjaInventoryItem::FindFragmentsByInterface(const TSubclassOf<UInterface> FragmentInterface) const
{
	check(IsValid(ItemData));
	if (FragmentInterface != nullptr)
	{
		return ItemData->FindFragmentsByInterface(FragmentInterface);
	}

	return TArray<UNinjaInventoryItemFragment*>();
}

void UNinjaInventoryItem::InitializeFragments()
{
	if (!IsValid(InventoryManager) || !InventoryManager->OwnerHasAuthority())
	{
		return;
	}
	
	if (bHasInitializedFragments)
	{
		return;
	}
	
	check(IsValid(ItemData));
	ItemData->InitializeFragments(this);
	bHasInitializedFragments = true;
}

void UNinjaInventoryItem::ApplyFragments()
{
	if (!bHasAppliedFragments)
	{
		check(IsValid(ItemData));
		ItemData->ApplyFragments(this);
		bHasAppliedFragments = true;
	}
}

void UNinjaInventoryItem::RevertFragments()
{
	if (bHasAppliedFragments)
	{
		check(IsValid(ItemData));
		ItemData->RevertFragments(this);
		bHasAppliedFragments = false;
	}
}

void UNinjaInventoryItem::InitializeFragmentMemories(const TArray<FInventoryDefaultItemMemory>& Memories)
{
	for (const FInventoryDefaultItemMemory& DefaultItemMemory : Memories)
	{
		const TSubclassOf<UNinjaInventoryItemFragment>& FragmentClass = DefaultItemMemory.FragmentClass;
		const TInstancedStruct<FInventoryFragmentMemory>& Memory = DefaultItemMemory.Memory;

		const UScriptStruct* ScriptStruct = Memory.GetScriptStruct();
		INVENTORY_LOG_ARGS(Verbose, "Adding Fragment %s with memory %s.", *GetNameSafe(FragmentClass), *GetNameSafe(ScriptStruct));

		InitializeFragmentMemory(FragmentClass, Memory);
	}
}

void UNinjaInventoryItem::InitializeFragmentMemory(const TSubclassOf<UNinjaInventoryItemFragment>& FragmentClass, const TInstancedStruct<FInventoryFragmentMemory>& Memory)
{
	if (IsValid(FragmentClass))
	{
		UNinjaInventoryItemFragment* Fragment = FindFragmentByClass(FragmentClass);
		SaveFragmentMemory(Fragment, Memory);
	}
}

bool UNinjaInventoryItem::HasFragmentMemory(const TSubclassOf<UNinjaInventoryItemFragment>& FragmentClass) const
{
	return FragmentMemoryList.IndexOfMemoryByClass(FragmentClass) != INDEX_NONE;
}

bool UNinjaInventoryItem::GetFragmentMemory(const TSubclassOf<UNinjaInventoryItemFragment>& FragmentClass, TInstancedStruct<FInventoryFragmentMemory>& OutMemory) const
{
	return FragmentMemoryList.GetFragmentMemory(FragmentClass, OutMemory);
}

TArray<FInventoryDefaultItemMemory> UNinjaInventoryItem::GetFragmentMemories() const
{
	return FragmentMemoryList.GetItemMemories();
}

TArray<FInventoryDefaultItemMemory> UNinjaInventoryItem::GetSerializableFragmentMemories() const
{
	return FragmentMemoryList.GetSerializableItemMemories();
}

int32 UNinjaInventoryItem::SaveFragmentMemory(UNinjaInventoryItemFragment* Fragment, const TInstancedStruct<FInventoryFragmentMemory>& Memory)
{
	// Make sure that we get this Item's instance of the fragment.
	//
	// This is necessary because the same fragment implementation can operate across multiple
	// items, however the actual _instance_ might be different, so we always need to make sure
	// we have the correct fragment to persist the memory.
	//
	Fragment = FindFragmentByClass(Fragment->GetClass());
	return FragmentMemoryList.SaveFragmentMemory(Fragment, Memory);
}

void UNinjaInventoryItem::SaveDefaultFragmentMemories(const TArray<FInventoryDefaultItemMemory>& DefaultItemMemories)
{
	for (FInventoryDefaultItemMemory ItemMemory : DefaultItemMemories)
	{
		FragmentMemoryList.UpdateFragmentMemory(ItemMemory.FragmentClass, ItemMemory.Memory);
	}
}

void UNinjaInventoryItem::RemoveFragmentMemory(const TSubclassOf<UNinjaInventoryItemFragment>& FragmentClass)
{
	FragmentMemoryList.RemoveFragmentMemory(FragmentClass);
}

void UNinjaInventoryItem::SaveActiveEffectHandle(UNinjaInventoryItemFragment* Fragment, const FActiveGameplayEffectHandle& Handle)
{
	if (!ActiveEffectHandles.Contains(Fragment) && Handle.IsValid())
	{
		const TSharedPtr<FActiveGameplayEffectHandle>& HandlePtr = MakeShared<FActiveGameplayEffectHandle>(Handle);
		ActiveEffectHandles.Add(Fragment, HandlePtr);
	}
}

bool UNinjaInventoryItem::GetActiveEffectHandle(const UNinjaInventoryItemFragment* Fragment, FActiveGameplayEffectHandle& OutHandle) const
{
	if (ActiveEffectHandles.Contains(Fragment))
	{
		const TSharedPtr<FActiveGameplayEffectHandle>& HandlePtr = *ActiveEffectHandles.Find(Fragment);
		OutHandle = *HandlePtr.Get();
		return true;
	}

	return false;
}

bool UNinjaInventoryItem::HasActiveEffectHandle(const UNinjaInventoryItemFragment* Fragment) const
{
	if (ActiveEffectHandles.Contains(Fragment))
	{
		const TSharedPtr<FActiveGameplayEffectHandle>& HandlePtr = *ActiveEffectHandles.Find(Fragment);
		return HandlePtr.IsValid() && HandlePtr->IsValid();
	}

	return false;
}

void UNinjaInventoryItem::InvalidateEffectHandle(const UNinjaInventoryItemFragment* Fragment)
{
	if (ActiveEffectHandles.Contains(Fragment))
	{
		TSharedPtr<FActiveGameplayEffectHandle>& HandlePtr = *ActiveEffectHandles.Find(Fragment);
		HandlePtr->Invalidate();
		HandlePtr.Reset();
		ActiveEffectHandles.Remove(Fragment);
	}
}

float UNinjaInventoryItem::GetMagnitudeForDataTag_Implementation(const UNinjaInventoryItem* Item, const FGameplayTag& DataTag, const float DefaultValue) const
{
	if (IsValid(ItemData))
	{
		return Execute_GetMagnitudeForDataTag(ItemData, Item, DataTag, DefaultValue);
	}

	return DefaultValue;
}

TMap<FGameplayTag, float> UNinjaInventoryItem::GetAllMagnitudeValues_Implementation(const UNinjaInventoryItem* Item) const
{
	if (IsValid(ItemData))
	{
		return Execute_GetAllMagnitudeValues(ItemData, Item);
	}

	return TMap<FGameplayTag, float>();
}
