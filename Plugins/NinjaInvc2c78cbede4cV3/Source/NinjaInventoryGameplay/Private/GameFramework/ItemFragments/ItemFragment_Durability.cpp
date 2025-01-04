// Ninja Bear Studio Inc., all rights reserved.
#include "GameFramework/ItemFragments/ItemFragment_Durability.h"

#include "NinjaInventoryGameplayTags.h"
#include "NinjaInventoryLog.h"
#include "GameFramework/FInventoryFragmentMemoryUtils.h"
#include "GameFramework/NinjaInventoryItem.h"
#include "Types/FItemFragmentMemories.h"
#include "Types/FItemFragmentOperationPayload.h"

UItemFragment_Durability::UItemFragment_Durability()
{
	bCanBreak = true;
	Durability = 100;
	OperationTags.AddTag(Tag_Inventory_Item_Operation_Repair);
	OperationTags.AddTag(Tag_Inventory_Item_Operation_Wear);
	SynchronizeIndestructibleTraitOnData();
	SynchronizeBrokenTraitOnData(Durability);
}

bool UItemFragment_Durability::IsBroken(const UNinjaInventoryItem* Item)
{
	return IsValid(Item) && Item->HasMatchingGameplayTag(Tag_Inventory_Item_Trait_Broken); 
}

bool UItemFragment_Durability::IsIndestructible(const UNinjaInventoryItem* Item)
{
	return IsValid(Item) && Item->HasMatchingGameplayTag(Tag_Inventory_Item_Trait_Indestructible);
}

int32 UItemFragment_Durability::GetDurability(const UNinjaInventoryItem* Item) const
{
	FInventoryItemFragmentDurabilityMemory DurabilityMemory;
	if (!GetMemory<FInventoryItemFragmentDurabilityMemory>(Item, DurabilityMemory))
	{
		return Durability;
	}

	return DurabilityMemory.CurrentDurability;
}

void UItemFragment_Durability::SetDurability(UNinjaInventoryItem* Item, const int32 NewDurability)
{
	if (!CanBreak() || !IsValid(Item) || !ItemHasAuthority(Item))
	{
		return;
	}

	SaveMemoryWithPredicate<FInventoryItemFragmentDurabilityMemory>(Item, [this, NewDurability](FInventoryItemFragmentDurabilityMemory* FragmentMemory, bool bIsNew)
	{
		if (FragmentMemory->CurrentDurability == NewDurability)
		{
			return false;
		}
		
		FragmentMemory->CurrentDurability = NewDurability;
		return true;
	});
}

void UItemFragment_Durability::AddWear(UNinjaInventoryItem* Item, const int32 WearAmount)
{
	if (!CanBreak() || !IsValid(Item) || !ItemHasAuthority(Item) || WearAmount <= 0)
	{
		return;
	}

	SaveMemoryWithPredicate<FInventoryItemFragmentDurabilityMemory>(Item, [this, WearAmount](FInventoryItemFragmentDurabilityMemory* FragmentMemory, bool bIsNew)
	{
		const int32 NewDurability = FMath::Max(FragmentMemory->CurrentDurability - WearAmount, 0); 
		if (FragmentMemory->CurrentDurability == NewDurability)
		{
			return false;
		}
		
		FragmentMemory->CurrentDurability = NewDurability;
		return true;
	});
}

void UItemFragment_Durability::Repair(UNinjaInventoryItem* Item)
{
	if (!CanBreak() || !IsValid(Item) || !ItemHasAuthority(Item))
	{
		return;
	}
	
	SaveMemoryWithPredicate<FInventoryItemFragmentDurabilityMemory>(Item, [this](FInventoryItemFragmentDurabilityMemory* FragmentMemory, bool bIsNew)
	{
		if (FragmentMemory->CurrentDurability == Durability)
		{
			return false;
		}
		
		FragmentMemory->CurrentDurability = Durability;
		return true;
	});
}

void UItemFragment_Durability::OnInitializeFragment_Implementation(UNinjaInventoryItem* Item)
{
	// No need to initialize the memory, if the item cannot break.
	if (!CanBreak())
	{
		return;
	}
	
	FInventoryItemFragmentDurabilityMemory DurabilityMemory;
	DurabilityMemory.CurrentDurability = Durability;
	SaveMemory<FInventoryItemFragmentDurabilityMemory>(Item, DurabilityMemory);
}

void UItemFragment_Durability::HandleMemoryCreated_Implementation(UNinjaInventoryItem* Item, TInstancedStruct<FInventoryFragmentMemory>& FragmentMemory)
{
	BroadcastChanges(Item, FragmentMemory);
}

void UItemFragment_Durability::HandleMemoryUpdated_Implementation(UNinjaInventoryItem* Item, TInstancedStruct<FInventoryFragmentMemory>& FragmentMemory)
{
	BroadcastChanges(Item, FragmentMemory);
}

void UItemFragment_Durability::BroadcastChanges(UNinjaInventoryItem* Item, TInstancedStruct<FInventoryFragmentMemory>& FragmentMemory)
{
	if (!IsValid(Item) || !FragmentMemory.IsValid())
	{
		return;
	}
	
	FInventoryItemFragmentDurabilityMemory* DurabilityMemory = FragmentMemory.GetMutablePtr<FInventoryItemFragmentDurabilityMemory>();
	if (DurabilityMemory == nullptr)
	{
		INVENTORY_LOG_ARGS(Error, "Durability memory for item '%s' should not be null!", *GetNameSafe(Item));
		return;
	}

	bool bHasChanges = false;
	const float NewDurability = DurabilityMemory->CurrentDurability;
	
	if (DurabilityMemory->LastDurability != NewDurability)
	{
		DurabilityMemory->LastDurability = NewDurability;
		SynchronizeBrokenTraitOnItem(Item, NewDurability);
		
		OnDurabilityChanged.Broadcast(Item, NewDurability);
		bHasChanges = true;
	}

	if (bHasChanges)
	{
		SaveMemory<FInventoryItemFragmentDurabilityMemory>(Item, *DurabilityMemory);
	}
}

void UItemFragment_Durability::SynchronizeBrokenTraitOnItem(UNinjaInventoryItem* Item, const int32 TargetDurability) const
{
	const FGameplayTag Tag = Tag_Inventory_Item_Trait_Broken;
	if (TargetDurability > 0)
	{
		Item->RemoveGameplayTag(Tag);
	}
	else
	{
		Item->AddGameplayTag(Tag);
	}		
}

float UItemFragment_Durability::GetMagnitudeForDataTag_Implementation(const UNinjaInventoryItem* Item, const FGameplayTag& DataTag, const float DefaultValue) const
{
	if (DataTag == Tag_Inventory_Item_Data_Durability)
	{
		return GetDurability(Item);
	}

	return DefaultValue;
}

TMap<FGameplayTag, float> UItemFragment_Durability::GetAllMagnitudeValues_Implementation(const UNinjaInventoryItem* Item) const
{
	TMap<FGameplayTag, float> Magnitudes{};
	Magnitudes.Add(Tag_Inventory_Item_Data_Durability, GetDurability(Item));
	return Magnitudes;
}

UScriptStruct* UItemFragment_Durability::GetPayloadStruct() const
{
	return FInventoryFragmentDurabilityOperationPayload::StaticStruct();
}

bool UItemFragment_Durability::OnEvaluateOperation_Implementation(const TInstancedStruct<FInventoryFragmentPayload>& Payload) const
{
	const FInventoryFragmentDurabilityOperationPayload* DurabilityPayload = Payload.GetPtr<FInventoryFragmentDurabilityOperationPayload>();
	if (DurabilityPayload == nullptr)
	{
		return false;
	}
	
	const UNinjaInventoryItem* Item = DurabilityPayload->Item;
	if (!IsValid(Item))
	{
		return false;
	}

	const int32 CurrentDurability = GetDurability(Item);
	if (DurabilityPayload->IsRepairOperation())
	{
		return CurrentDurability < Durability;
	}

	if (DurabilityPayload->IsWearOperation())
	{
		const int32 WearAmount = DurabilityPayload->WearAmount;
		return WearAmount > 0 && CanBreak();
	}

	return false;
}

void UItemFragment_Durability::OnPerformOperation_Implementation(const TInstancedStruct<FInventoryFragmentPayload>& Payload)
{
	const FInventoryFragmentDurabilityOperationPayload* DurabilityPayload = Payload.GetPtr<FInventoryFragmentDurabilityOperationPayload>();
	if (DurabilityPayload == nullptr)
	{
		INVENTORY_LOG(Error, "Invalid payload type to perform durability operation!");
		return;
	}

	UNinjaInventoryItem* Item = DurabilityPayload->Item;

	if (DurabilityPayload->IsRepairOperation())
	{
		SetDurability(Item, Durability);	
	}
	else if (DurabilityPayload->IsWearOperation())
	{
		const int32 WearAmount = DurabilityPayload->WearAmount;
		AddWear(Item, WearAmount);
	}	
}

void UItemFragment_Durability::SynchronizeIndestructibleTraitOnData()
{
	const FGameplayTag Tag = Tag_Inventory_Item_Trait_Indestructible;
	if (bCanBreak)
	{
		ItemTags.RemoveTag(Tag);
	}
	else
	{
		ItemTags.AddTag(Tag);
	}
}

void UItemFragment_Durability::SynchronizeBrokenTraitOnData(const int32 TargetDurability)
{
	const FGameplayTag Tag = Tag_Inventory_Item_Trait_Broken;
	if (TargetDurability > 0)
	{
		ItemTags.RemoveTag(Tag);
	}
	else
	{
		ItemTags.AddTag(Tag);
	}	
}

#if WITH_EDITOR
void UItemFragment_Durability::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

	const FName PropertyName = PropertyChangedEvent.GetPropertyName();
	if (PropertyName == GET_MEMBER_NAME_CHECKED(ThisClass, bCanBreak))
	{
		SynchronizeIndestructibleTraitOnData();
	}
	
	if (PropertyName == GET_MEMBER_NAME_CHECKED(ThisClass, Durability))
	{
		SynchronizeBrokenTraitOnData(Durability);
	}	
}
#endif